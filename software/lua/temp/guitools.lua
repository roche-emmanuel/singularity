module("guitools",package.seeall)



require("general","guitools.common")
require("general","general.guimanager")
require("general","general.tools")
require("general","modeltools")
require("general","guitools.entries")
require("general","guitools.controls")
require("general","guitools.treectrls")
require("general","guitools.compact.entries")

local allInterfaces = {} -- keep a table holding all the interfaces to be able to close them properly:

local defaultTheme =  giCommon.Config.readAny("config.gui.theme","Compact");
--wx.wxLogMessage("The default theme is: ".. defaultTheme)
local labelFont = general.tools.mapToFont(giCommon.Config.readAny("config.gui.label.font",giScript.AnyMap()))
local textFont = general.tools.mapToFont(giCommon.Config.readAny("config.gui.text.font",giScript.AnyMap()))


function prepareToolbar(options)
    options = options or {}
    options.isToolbar = true;
    return prepareInterface(options)
end

--- Method used to build a new interface "shell"
-- When using this system, the developer should also provide an implementation for
-- the methods:
-- interface:refreshProject() called when the current project is modified [optional]
-- interface:buildInterface(panel) called when creating the interface
function prepareInterface(options)    
    assert(options,"Invalid options table")
    --assert(options.menu,"Invalid menu name")
    --assert(options.name,"Invalid interface name")
    
    local interface = {}
    local name = options.name or ("interface_"..#allInterfaces)
    allInterfaces[name] = interface;
    
    local regularMode = options and options.regular
    local title = options and options.title or name;
    local parent = options and options.parent
    
    interface.isToolbar = options and options.isToolbar;
    interface.isDialog = options and options.isDialog; -- this isDialog flag is deprecated and should be removed.
    interface.butSize = options and options.butSize or 16
    interface.menuName = options.menu
    interface.menuItemName = options.accel and name.."\t"..options.accel or name
    interface.menuItemDesc = "Toggle the "..name.." pane"
    interface.parent = parent
    interface.isRegular = regularMode and parent
    interface.iconsrc = options.iconsrc
    interface.isFunction = options.isFunction
    interface.noHScroll = options.noHScroll
    interface.theme = options.theme or defaultTheme
    interface.right = options.right
    
    if options.version then
        name = name.."_v"..options.version;
    end
    
    interface.name = name;
    
    local pname = name --string.gsub(name,"%s","_")
    wx.wxLogVerbose("Interface pane name: "..pname)
    

    if not regularMode then
        interface.paneInfo = interface.paneInfo or wxaui.wxAuiPaneInfo()
        
        if interface.isToolbar then
            interface.paneInfo:Name(pname):Caption(title):ToolbarPane():Top():LeftDockable(false):RightDockable(false);
        else
            interface.paneInfo:Name(pname):Caption(title):Hide():Float()
        end
        
        if options.layer then
            interface.paneInfo:Layer(options.layer)
        end
        
        if options.row then
            interface.paneInfo:Row(options.row)
        end

        if options.floatable==false then
            interface.paneInfo:Floatable(false)
        end
        
        if options.dockable==false then
            interface.paneInfo:Dockable(false)
        end
        
        if options.fixedsize==true then
            interface.paneInfo:Resizable(false)
        end
        
    end
    
  
    -- prepare some of the needed tables:
    interface.controls = {}
    interface.entries = {}
    interface.providers = {}
    interface.customs = {}
    interface.close_cbs = {} -- table used to hold the close callbacks.
    interface.parent_stack = {}
    interface.sizer_stack = {}
    interface.licensedControls = {}
    interface.licensedBookPages = {}
    
   
    
    if interface.isToolbar then
        -- create a toolbar right here
        local frame = giDisplay.GreenIsisFrame.instance()
        local butsize = interface.butSize
        if platform=="win32" then
            interface.toolbar = wx.wxToolBar(intro2wx(frame), wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,wx.wxTB_FLAT + wx.wxTB_NODIVIDER); --
        else
            interface.toolbar = wxaui.wxAuiToolBar(intro2wx(frame), wx.wxID_ANY, wx.wxDefaultPosition, wx.wxDefaultSize,wxaui.wxAUI_TB_DEFAULT_STYLE); --
        end
        interface.toolbar:SetToolBitmapSize(wx.wxSize(butsize,butsize));
        
        interface.tool_ids = {}
        
        function interface:addSeparator()
            self.toolbar:AddSeparator()
        end
        
    else        
        -- define the display function here:
        function interface:displayFrame()
            if not self.frame then
                self:createFrame();
            end
            if options.refreshProject then
                self:refreshCurrentProject()
            end
            if options.refreshWindow then
                self:refreshCurrentWindow()
            end
            self:updateEntries();
            self.frame:Show(true);
        end
        
        function interface:close()
            --wx.wxLogMessage("Executing interface close callbacks...");
            for k,func in pairs(self.close_cbs) do
                --wx.wxMessageBox("Executing close cb "..k)
                func();
            end
        end
        
        -- function used to build the interface:
        function interface:createFrame()
            local style = bit.bor(wx.wxCAPTION,wx.wxSYSTEM_MENU,wx.wxCLOSE_BOX,wx.wxCLIP_CHILDREN,wx.wxFRAME_FLOAT_ON_PARENT,wx.wxFRAME_TOOL_WINDOW,wx.wxRESIZE_BORDER) --wx.wxFRAME_NO_TASKBAR) --)

            -- create the frame window
            if self.paneInfo or parent then
                -- if we have a pane info, then just create a panel instead of a frame object:
                -- and use the menu id instead of wxID_ANY
                -- this refs ticket #382: now using scrolled window instead of simple panel:
                if options.fixedsize or options.noscrollwindow then
                --    wx.wxLogMessage("Using a panel parent for ".. interface.name)
                    
                    self.frame = wx.wxPanel(parent or wx.wxGetApp():GetTopWindow(), self.menu_id or wx.wxID_ANY)
                else
                    self.frame = wx.wxScrolledWindow(parent or wx.wxGetApp():GetTopWindow(), self.menu_id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.scrollStyle or (wx.wxVSCROLL+wx.wxHSCROLL))
                    self.frame:SetScrollbars(self.noHScroll and 0 or 20, 20, self.noHScroll and 0 or 50, 50,0,0,false);
                    self:addScrolledWindow(self.frame);
                end
                self.frame:Connect(wx.wxEVT_CLOSE_WINDOW, function(event) self:close() end)
            else
                self.frame = wx.wxFrame(wx.wxGetApp():GetTopWindow(), wx.wxID_ANY, title,
                                    wx.wxDefaultPosition, wx.wxSize(450, 400),
                                    style )
                self.frame:Connect(wx.wxEVT_CLOSE_WINDOW, function(event) self.frame:Show(false) end)
            end       
            
            local frame = self.frame;
            
            local fgcolor = giCommon.Config.readAny("config.gui.foregroundcolor",osg.Vec4f(0.000000,0.000000,0.000000,1.000000));
            local bgcolor = giCommon.Config.readAny("config.gui.backgroundcolor",osg.Vec4f(0.941176,0.941176,0.941176,1.000000));
            local fgcol = wx.wxColour(math.floor(fgcolor[0]*255),math.floor(fgcolor[1]*255),math.floor(fgcolor[2]*255)) --,math.floor(fgcolor[3]*255));
            local bgcol = wx.wxColour(math.floor(bgcolor[0]*255),math.floor(bgcolor[1]*255),math.floor(bgcolor[2]*255)) --,math.floor(bgcolor[3]*255));

            frame:SetBackgroundColour(bgcol)
            frame:SetBackgroundStyle(wx.wxBG_STYLE_COLOUR)
            frame:SetForegroundColour(fgcol)
            
            -- if the menu ID is available here, then assign it to the frame;
            if self.menu_id then
                frame:SetId(self.menu_id)
            end
            
            self:pushParent(frame)
            
            local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
            frame:SetSizer(sizer)
            self:pushSizerObject(sizer)
            
            -- Add everything on a subpanel:
            local panel = wx.wxPanel(frame,wx.wxID_ANY);
            sizer:Add(panel,1,wx.wxEXPAND);
            self:pushParent(panel)
            
            local s0 = wx.wxBoxSizer(wx.wxVERTICAL)
            panel:SetSizer(s0)
            self:pushSizerObject(s0)
            
            if self.buildInterface then
                self:buildInterface(panel)
            end
            
            self:onLicenseChanged()
            
            -- also perform a first update cycle:
            self:updateSelectors()
            self:updateEntries()
            
            -- fit the sizer:
            sizer:Fit(frame);
            sizer:Layout();

            local hh = sizer:GetSize():GetHeight()
            local ww = sizer:GetSize():GetWidth()
            if options.minsize then
                hh = math.max(hh,options.minsize:GetHeight())
                ww = math.max(ww,options.minsize:GetWidth())
            end
            frame:SetMinSize(wx.wxSize(ww,hh));
            frame:SetMaxSize(wx.wxSize(-1,hh));
            
            --wx.wxLogMessage("The computed frame size is:".. ww .. "x"..hh .. "for ".. interface.name)
            
            if self.paneInfo then
                self.paneInfo = self.paneInfo:MinSize(wx.wxSize(ww,hh)):BestSize(wx.wxSize(ww,hh)):FloatingSize(wx.wxSize(ww,hh))
                if options.fixedsize then
                    self.paneInfo = self.paneInfo:MaxSize(wx.wxSize(ww,hh))
                end
            end
        end
    end
        
    if options.refreshProject then
        -- define the refresh project callback
        function interface:refreshCurrentProject(oldproj)
            wx.wxLogVerbose("[guitools] Refreshing project.")
            
            -- if the current project is the same as the new current project, there is no need to update anything:
            local curproj = giProject.ProjectManager.getCurrentProject(); -- save the current project here.
            
            -- Always refresh the current project even if it is already the current one (some details may have changed).
            --if giCommon.Tools.areEquals(curproj,self.project) then
            --    release(curproj)
            --    return
            --else
                -- release the previous project if any:
                if self.project then
                    release(self.project)
                end
                
                self.project = curproj;            
            --end
            
            -- refresh the selectors and entries:
            if not self.noRefreshUpdates then
                self:updateSelectors()
                self:updateCustoms("refreshProject")  -- this should be executed before the entries are updated but after the selectors update (for the nodepath scene setup for instance)
                self:updateEntries()
            end
            
            if self.refreshProject then
                self:refreshProject(oldproj)
            end
            
            if oldproj then
                release(oldproj)
            end
        end
    
        registerCurrentProjectChangedFunction(function(oldproj)
            interface:refreshCurrentProject(oldproj)
        end,"currentProjectChangedFunc_"..options.name)
    end
    
    if options.refreshWindow then
        -- define the refresh project callback
        function interface:refreshCurrentWindow()
            local oldwin = self.currentWindow;
            
            self.currentWindow = giDisplay.GreenIsisFrame.instance():getCurrentWindow()
            
            if self.refreshWindow then
                self:refreshWindow(oldwin)
            end
        end
    
        registerCurrentWindowChangedFunction(function()
            interface:refreshCurrentWindow()
        end,"currentWindowChangedFunc_"..options.name)
        
        wx.wxLogVerbose("Registering current window changed callback.")
    end
    
    function interface:pushScrollPanel(options)
        --wx.wxLogMessage("Building an scroll panel parent")
        local panel = wx.wxScrolledWindow(self:getCurrentParent(),options and options.id or wx.wxID_ANY);
        self:addControl(panel,options)
        -- assign a sizer to this panel:
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
        panel:SetSizer(sizer)
        panel:SetScrollbars(10, 10, 100, 100);
        --panel:SetVirtualSizeHints(100,100,-1,-1);
        self:pushParent(panel,sizer)
        return panel
    end
    
    function interface:pushBookPage(options)
        assert(options and options.caption,"A valid 'caption' entry is needed to build a book page.")
        local selected = options and options.selected or false
        local imageId = options and options.imageId or -1;
        local butsize = options and options.butsize or 16
        local isaui = self:getCurrentParent():GetClassInfo():GetClassName() == "wxAuiNotebook"
        local bmpname = options and options.src

        local panel = (isaui and wx.wxScrolledWindow or wx.wxPanel)(self:getCurrentParent(),options.id or wx.wxID_ANY);
        if isaui then
            self:addScrolledWindow(panel);
            panel:SetScrollbars(self.noHScroll and 0 or 20, 20, self.noHScroll and 0 or 50, 50,0,0,false);
        end
        
        local bmp=wx.wxNullBitmap; 
        
        if bmpname then
            if giCommon.Config.readAny("config.gui.hide.tab.captions",true) then
                options.caption = "";
            end
            
            if isaui then
                bmp  = getBitmap(bmpname,butsize);
            else
                local imglist = self:getCurrentParent():GetImageList() -- the parent is a book.
                if not imglist then
                    imglist = wx.wxImageList(butsize,butsize,true,0)
                    self:getCurrentParent():SetImageList(imglist)
                    self.image_lists = self.image_lists or {}
                    table.insert(self.image_lists,imglist) -- keep a reference.
                end
                
                -- add the new image:
                local bmp = getBitmap(bmpname,butsize);
                imglist:Add(bmp,bmp);
                imageId = imglist:GetImageCount()-1;
                --wx.wxLogMessage("Using image ID: ".. imageId)
                --self:getCurrentParent():SetPadding(wx.wxSize(-1,-1));
            end
        end
        
        
        -- Assume the current parent is a proper book:
        if options.subPage then
            self:getCurrentParent():AddSubPage(panel,options.caption,selected,isaui and bmp or imageId)
        else
            self:getCurrentParent():AddPage(panel,options.caption,selected,isaui and bmp or imageId)
        end
        
        --[[
        if options.tip then
            local page = self:getCurrentParent():GetPage(self:getCurrentParent():GetPageCount()-1)
            page:SetToolTip(options.tip)
            wx.wxLogMessage("Added page tip ".. options.tip)
        end
        ]]
        
        -- Always save the page in the page list with the needed details to toggle the license if there is a license right associated:
        if options.right then            
            -- keep the panel for later reference is needed:
            table.insert(self.licensedBookPages,{page=panel,
                                                                  index=self:getCurrentParent():GetPageCount()-1,
                                                                  book=self:getCurrentParent(),
                                                                  isSub=options.subPage,
                                                                  right=options.right,
                                                                  caption=options.caption,
                                                                  visible=true,
                                                                  selected=selected,
                                                                  img=isaui and bmp or imageId}) -- this page is visible by default.
        end

        -- assign a sizer to this panel:
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
        panel:SetSizer(sizer)
        self:pushParent(panel,sizer)
        
        
        return panel
    end

    
    function interface:pushNotebookPage(options)
        return self:pushBookPage(options)
    end
    
    function interface:pushTreebookPage(options)
        return self:pushBookPage(options)
    end
    
    function interface:pushBookSubPage(options)
        options.subPage = true
        return self:pushBookPage(options)
    end
        
    function interface:pushNotebook(options)
        local book = nil;
        if options.type == "aui" then
            book = wxaui.wxAuiNotebook(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wxaui.wxAUI_NB_SCROLL_BUTTONS +wxaui.wxAUI_NB_TOP);
        else
            book = wx.wxNotebook(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxNB_TOP);
        end
        
        self:addControl(book,options)
        self:pushParent(book)
        
        if options.images then
            local butsize = options and options.butsize or 16
        
            local imglist = wx.wxImageList(butsize,butsize,true);
            for k,v in ipairs(options.images) do
                imglist:Add(getBitmap(v,butsize))
            end
            book:SetImageList(imglist);
            self.image_lists = self.image_lists or {}
            table.insert(self.image_lists,imglist) -- keep a reference.
        end
        return book
    end
    
    function interface:pushTreebook(options)
        local book = wx.wxTreebook(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxBK_DEFAULT);
        self:addControl(book,options)
        self:pushParent(book)
        return book
    end
    
    function interface:pushChoicebook(options)
        local book = wx.wxChoicebook(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxBK_DEFAULT);
        self:addControl(book,options)
        self:pushParent(book)
        
        -- if we have a valid name, then build a choice entry from the underlying choice control:
        if(options.name) then
            options.choiceBook = book
            self:addChoiceEntry(options)
        end
        return book
    end
    
    function interface:getControl(name)
        return self.controls[name]
    end
    
    function interface:addLicensedControl(ctrl,right)
        if ctrl and right then
            table.insert(self.licensedControls,{ctrl=ctrl,sizer=self:getCurrentSizer(),visible=true,right=right})
        end
    end
        
    function interface:addControl(ctrl,options)
        if self.isToolbar then
            local obj = ctrl:DynamicCast("wxControl");
            if obj then
                self.toolbar:AddControl(obj);
            else
                wx.wxLogWarning("Ignoring invalid wxControl object for ToolBar interface.");
            end
        else
            self:getCurrentSizer():Add(ctrl,options.prop or 0,options.flags or wx.wxALL,options.border or 2);
            self:addLicensedControl(ctrl,options.right)
        end
        if options.tip then
            ctrl:SetToolTip(options.tip)
        end
        if options.name then
            self.controls[options.name] = ctrl
        end
        if options.minsize then
            ctrl:SetMinSize(options.minsize)
        end
        return ctrl;    
    end
    
    function interface:addTool(options)
        if not interface.isToolbar then
            wx.wxLogError("The function 'addTool' is available only for tool bars.")
            return;
        end
        
        assert(options and options.srcproj, "a valid 'srcproj' entry is required to build a toolbar tool.")
        local id = options.id or giDisplay.ViewManager.getNewID()
        
        local butsize = options.size or self.butSize;
        local img = giScene.SceneTools.convertOsgToWxImage(this_env:getProject():getImage(options.srcproj))
        local wximg = intro2wx(img)
        wximg:Rescale(butsize,butsize,wx.wxIMAGE_QUALITY_HIGH);

        --wx.wxLogMessage("Adding tool "..options.text)
        
        interface.toolbar:AddTool(id,options.text or "",wx.wxBitmap(wximg,-1), options.tip or "");
        if options.handler then
            self:connectHandler(interface.toolbar,options.eventType or wx.wxEVT_COMMAND_MENU_SELECTED,options.handler,id)
        end
        return id;
    end
    
    function interface:add3DCanvas(options)
        local root = options and options.root or osg.Group()
        local proj = options and options.project or this_env:getProject()
        
        local canvas = giCommon.Tools.createOSGCanvas(wx2intro(self:getCurrentParent()),root,proj)
        local ctrl = intro2wx(canvas)
        return self:addControl(ctrl,options)
    end
    
    --------------------------------------------------------------------------------------------
 

    function interface:addSingleChoiceEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a SingleChoice entry.");
        assert(options and options.name,"A valid 'name' is needed to build a SingleChoice entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="string"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or (entry.choices and entry.choices[1]) or "" -- empty string by default
        self:addEntry(entry)
        
        local actions = options.actions or {}
        
        -- prepare the handlers we will need here:
        function cbHandler(intf,event)            
            local val = event:GetString();
                            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        function butHandler(intf,event,actionName)
            --local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
            
            -- prepare the data for the real event handler:
            local list = entry.controls[2];
            
            local val = list:GetStringSelection()
            local selId = list:GetSelection()            
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                action=actionName,
                intf=self
            }
            
            if entry.actionHandler then
                entry.actionHandler(data) 
            end       
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addComboBox{prop=1,handler=cbHandler,choices=entry.choices,style=options.style,eventType=wx.wxEVT_COMMAND_TEXT_UPDATED}
        
        -- the bitmap buttons for the available actions:
        if entry.actionHandler then
            for k,act in ipairs(actions) do
                ctrls[k+2] = self:addBitmapButton{name=act.name, src=act.src or act.name,size=options.size,handler=butHandler,flags=wx.wxALIGN_CENTER_VERTICAL};
            end
        end
        
        self:popSizer() 
        
        return ctrls[2];
    end
    
    function interface:addChoiceEntry(options)
        assert(options and options.name,"A valid 'name' is needed to build a Choice entry.");
        assert(options and options.choiceBook,"A valid 'choiceBook' is needed to build a Choice entry.");
            
        local entry = options;
        options.choiceCtrl = options.choiceBook:GetChoiceCtrl()
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="string"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or (entry.choices and entry.choices[1]) or "" -- empty string by default
        self:addEntry(entry)
        
       
        
        -- prepare the handlers we will need here:
        function cbHandler(intf,event)            
            local val = options.choiceCtrl:GetStringSelection()
                            
            --wx.wxLogMessage("Setting choice value to: " ..val)
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        -- connect this event handler:
        self:connectHandler(options.choiceBook,wx.wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING,cbHandler);
        
        -- keep a link to this control:
        ctrls[1]  = options.choiceBook;
        
        --[=[
         local actions = options.actions or {}
         
        function butHandler(intf,event)
            local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
            
            -- prepare the data for the real event handler:
            local list = entry.controls[2];
            
            local val = list:GetStringSelection()
            local selId = list:GetSelection()            
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                action=actionName,
                intf=self
            }
            
            if entry.actionHandler then
                entry.actionHandler(data) 
            end       
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addComboBox{prop=1,handler=cbHandler,choices=entry.choices,style=options.style,eventType=wx.wxEVT_COMMAND_TEXT_UPDATED}
        
        -- the bitmap buttons for the available actions:
        if entry.actionHandler then
            for k,act in ipairs(actions) do
                ctrls[k+2] = self:addBitmapButton{src=act.src or act.name,size=options.size,handler=butHandler};
                ctrls[k+2]:SetName(act.name);
            end
        end
        
        self:popSizer() 
        
        return ctrls[2];
        ]=]
    end
    
    function interface:addFileEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a File entry.");
        assert(options and options.name,"A valid 'name' is needed to build a File entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="string"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or "" -- empty string by default
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function pickerHandler(intf,event)            
            local val = event:GetPath();
                            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addFilePickerCtrl{prop=1,handler=pickerHandler,
            style=options.style or wx.wxFLP_OPEN+wx.wxFLP_FILE_MUST_EXIST+wx.wxFLP_USE_TEXTCTRL,
            message=options.message or "Select a file",
            wildcard = options.wildcard or "*.*"}
        self:popSizer()        
    end

    function interface:addDirEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a File entry.");
        assert(options and options.name,"A valid 'name' is needed to build a File entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="string"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue or "" -- empty string by default
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function pickerHandler(intf,event)            
            local val = event:GetPath();
                            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": "};
        ctrls[2] = self:addDirPickerCtrl{prop=1,handler=pickerHandler,
            style=options.style or wx.wxDIRP_DIR_MUST_EXIST+wx.wxDIRP_USE_TEXTCTRL,
            message=options.message or "Select a folder"}
        self:popSizer()        
    end
    
    function interface:getGroup(name)
        self.groups = self.groups or {}
        self.groups[name] = self.groups[name] or {}
        return self.groups[name];
    end
    
    function interface:addActionButtonEntry(options)
        assert(options and options.caption,"A valid 'caption' is needed to build a Action button entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="void"
        entry.controls = ctrls;
        entry.defaultValue = entry.defaultValue
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function butHandler(intf,event)            
            entry:handle(); -- just handle the event. no value to save here.
        end
        
        if entry.src then
            ctrls[1], istool = self:addBitmapButton{tip=options.tip, kind=options.kind, caption=options.caption, name=options.name, src=options.src,size=options.size,handler=butHandler,prop=0,flags=options.flags,style=options.style};
            if not istool then
                ctrls[1]:SetToolTip(options.tip or options.caption)
            elseif platform~="win32" then
                entry.class[ctrls[1]] = "wxAuiToolBarItem"
            end
        else
            ctrls[1] = self:addButton{text=options.caption,handler=butHandler,prop=options.prop,flags=options.flags};
        end
        
        return ctrls[1];
    end
    
    function interface:addStateButtonEntry(options)
        assert(options and options.states,"A valid 'states' entry is needed to build a State button entry.");
        assert(options and options.name,"A valid 'name' is needed to build a State button entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="statebutton"
        entry.controls = ctrls;
        entry.states = options.states
        entry.currentState = 0
        entry.defaultValue = entry.defaultValue or entry.states[1].id
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function butHandler(intf,event)            
            entry.currentState = math.mod(entry.currentState+1,#(entry.states))
            --wx.wxLogMessage("New state:"..entry.currentState)
            local val = entry.states[entry.currentState+1].id;
            
            entry.controls[2]:SetLabel(entry.states[entry.currentState+1].caption);
            
            -- update the new value sending this to the provider:
            entry:setValue(val);
        end
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
        ctrls[1] = self:addStaticText{text=options.caption..": ",flags=wx.wxALIGN_CENTER_VERTICAL+wx.wxALL}
        self:addSpacer{prop=1}
        ctrls[2] = self:addButton{text=entry.states[1].caption,flags=wx.wxALL,handler=butHandler}        
        self:popSizer()
    end    

    function interface:addStateRadioEntry(options)
        assert(options and options.states,"A valid 'states' entry is needed to build a State radio entry.");
        assert(options and options.name,"A valid 'name' is needed to build a State radio entry.");
        assert(options and options.text,"A valid text' is needed to build a State radio entry.");
        
        -- auto complete default id values from captions:
        for k,v in pairs(options.states) do
            v.id = v.id or v.caption
        end
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="stateradio"
        entry.controls = ctrls;
        entry.states = options.states
        entry.currentState = 0
        entry.defaultValue = entry.defaultValue or entry.states[1].id
        self:addEntry(entry)
        

        -- prepare the handlers we will need here:
        function radioHandler(intf,event)            
            entry.currentState = event:GetInt()
            --wx.wxLogMessage("New state:"..entry.currentState)
            local val = entry.states[entry.currentState+1].id;
            
            -- update the new value sending this to the provider:
            --wx.wxLogMessage("Saving entry value: "..val)
            entry:setValue(val);
        end
        
        -- prepare the choice list:
        local list = {}
        for k,v in ipairs(options.states) do
            table.insert(list,v.caption)
        end
        ctrls[1] = self:addRadioBox{text=options.text,prop=options.prop,flags=wx.wxALL+wx.wxEXPAND,choices=list,handler=radioHandler}
    end    

    function interface:addCheckedListEntry(options)
        assert(options and options.name,"A valid 'name' is needed to build a checked list entry.");
        assert(options and options.caption,"A valid 'caption' is needed to build a checked list entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="vector"
        entry.key = options.key or "name"
        entry.statusKey = options.statusKey or "enabled"
        entry.defaultValue = entry.defaultValue or giScript.AnyVector()
        entry.controls = ctrls;
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function refreshList()
            local list = entry.controls[2];
            local val = entry:getValue(); -- val is a vector
            --local body = entry.provider:getCurrentItem()
            --wx.wxLogMessage("The current body is "..body.name)
            --wx.wxLogMessage("body contains "..#(body.layers).." layers.")
            list:Clear();
            
            local arr = wx.wxArrayString();
            --wx.wxLogMessage("Refreshing check list with ".. #val.." items")
            
            for i=0,#val-1 do
                arr:Add(val[i][entry.key]);
            end
            
            -- add the values:
            list:Append(arr);
            
            -- set each item status:
            for i=0,#val-1 do
                list:Check(i,val[i][entry.statusKey]);
            end        
        end
        
        entry.refreshCheckList = refreshList;
        
        function myAddHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            
            local data = {
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.addHandler(data) then
                -- the add event was properly handled, so now update the item list and there status:
                entry.refreshCheckList()
            end            
        end

        function myRemoveHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local selId = list:GetSelection()
            
            -- if the selection is invalid, just cancel:
            if selId == -1 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." check list box");
                return;
            end
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.removeHandler(data) then
                -- the remove event was properly handled, so now update the item list and there status:
                --wx.wxLogMessage("Calling refresh after remove handler.");
                entry.refreshCheckList()
            end            
        end
        
        function myActivateHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            local num,sels = list:GetSelections()
            
            -- if the selection is invalid, just cancel:
            if num <= 0 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." check list box");
                return;
            end
            
            local data = {
                id=sels[1], -- here we provide an additional id field to specify the item to be removed.
                ids=sels,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.activateHandler then
                entry.activateHandler(data)
            end            
        end
        
        function chkHandler(intf,event)
            local id = event:GetInt()
            local list = entry.controls[2];
            
            local checked = list:IsChecked(id)
            
            --wx.wxLogMessage("Item "..id.." is now "..(checked and "enabled" or "disabled"))
            
            local val = entry:getValue()
            
            val[id]:set("enabled",checked)
            
            
            local data = {
                id=id, -- here we provide an additional id field to specify the item to be removed.
                enabled = checked,
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.checkHandler then
                entry.checkHandler(data)
            end
        end
        
        local butHandler = function(intf,event,actionName)
            -- prepare the data for the real event handler:
            local list = entry.controls[2]; --cb;
            
            --local val = list:GetStringSelection()
            local val = entry:getValue()
            local selId = list:GetSelection()            
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                provider=entry.provider, --prov,
                item=entry.provider:getCurrentItem(), --prov:getCurrentItem(),
                action=actionName,
                entry=entry,
                intf=self
            }
            
            if options.actionHandler then
                options.actionHandler(data)
                entry.refreshCheckList()
            end       
        end  
        
        self:pushSizer{orient=wx.wxVERTICAL,prop=1,flags=wx.wxEXPAND}
            ctrls[1] = self:addStaticText{text=options.caption..": "};
            ctrls[2] = self:addCheckListBox{prop=1,handler=chkHandler,style=options.style}
            if entry.activateHandler then
                self:connectHandler(ctrls[2],wx.wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,myActivateHandler);
            end
            if options.actionHandler then
                self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
                    local actions = options.actions or {}
                    for k,act in ipairs(actions) do
                        local ctrl, istool = self:addBitmapButton{src=act.src or act.name,name=act.name,size=options.size,handler=butHandler,border=1,flags=wx.wxALIGN_CENTER_VERTICAL};
                        if not istool then
                            ctrl:SetName(act.name);
                        end
                    end
                self:popSizer()
            else    
                self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
                    self:addSpacer{prop=1};
                    if options.removeHandler then
                    ctrls[3] = self:addBitmapButton{src="remove",handler=myRemoveHandler}
                    end
                    if options.addHandler then
                    ctrls[4] = self:addBitmapButton{src="add",handler=myAddHandler}
                    end
                self:popSizer()
            end
        self:popSizer()  
        
        return ctrls[2];
    end
    
    function interface:addPropertyMapEntry(options)
        assert(options and options.name,"A valid 'name' is needed to build a property map entry.");
        assert(options and options.caption,"A valid 'caption' is needed to build a property map entry.");
        
        local entry = options;
        local ctrls = {} -- prepare a table to hold the specific controls.
        entry.type="map"
        entry.defaultValue = entry.defaultValue or giScript.AnyMap()
        entry.controls = ctrls;
        self:addEntry(entry)
        
        -- prepare the handlers we will need here:
        function refreshList()
            local list = entry.controls[2]; -- this is a listctrl
            local val = entry:getValue(); -- this is the map.
            list:DeleteAllItems()
            
            -- add the items back:            
            for i=0,#val-1 do
                local id = list:InsertItem(list:GetItemCount(),val:getKey(i))
                list:SetItem(id,1,val:getValue(i).."")
            end            
        end
        
        entry.refreshList = refreshList;
        
        function myAddHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            
            local data = {
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.addHandler(data) then
                -- the add event was properly handled, so now update the item list and there status:
                entry.refreshList()
            end            
        end

        function myRemoveHandler(intf,event)            
            -- this handler will be called when the used click on the add button to add a new item in the list:
            -- in that case call the provider addHandler
            local val = entry:getValue()
            local list = entry.controls[2];
            
            -- get the currently selected item:
            local selId = list:GetNextItem(-1,
                                     wx.wxLIST_NEXT_ALL,
                                     wx.wxLIST_STATE_SELECTED);
            
            -- if the selection is invalid, just cancel:
            if selId == -1 then
                wx.wxLogWarning("Invalid selection in "..entry.name.." property map");
                return;
            end
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                item=entry.provider:getCurrentItem(),
                name=entry.name,
                entry=entry,
                intf=self
            }
            
            if entry.removeHandler(data) then
                -- the remove event was properly handled, so now update the item list and there status:
                entry.refreshList()
            end            
        end
        
        self:pushSizer{orient=wx.wxVERTICAL,prop=1,flags=wx.wxEXPAND}
            ctrls[1] = self:addStaticText{text=options.caption..": "};
            ctrls[2] = self:addListCtrl{
                style=options.style or wx.wxLC_REPORT+wx.wxLC_HRULES+wx.wxLC_VRULES,
                columns={"Key","Value"},
                prop=1,
                flags=wx.wxALL+wx.wxEXPAND
            }
            self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
                self:addSpacer{prop=1};
                if options.removeHandler then
                ctrls[3] = self:addBitmapButton{src="remove",handler=myRemoveHandler}
                end
                if options.addHandler then
                ctrls[4] = self:addBitmapButton{src="add",handler=myAddHandler}
                end
            self:popSizer()         
        self:popSizer()         
    end
    

    
    guitools.controls.loadControls(interface)
    guitools.treectrls.loadTreeControls(interface)
    guitools.entries.loadEntries(interface)
    
    -- setup a default provider configuration:
    interface.details = giScript.AnyMap()
    
    interface:setDefaultProvider(interface:createProvider{simplemap=interface.details})
    
    return interface;
end

function registerMenu(interface,pane,proj)
    if not interface.menuName then
        wx.wxLogWarning("Invalid menu name in register menu.");
        return;
    end
    
    local win = wx.wxGetApp():GetTopWindow()
	local mainframe = win:DynamicCast("wxFrame") -- We know that the window is actually the GreenIsisFrame...	
	local menubar = mainframe:GetMenuBar();
	local menuName = interface and interface.menuName
        
	local menuId = menubar:FindMenu(menuName)
	local projectMenu = nil;
	if menuId == -1 then 
		projectMenu = wx.wxMenu()
		menubar:Insert(4,projectMenu, menuName) -- insert this menu just after the "Projects" menu.
	else
		--vLog.Source.logInfo("Trying to get menu "..menuId)
		projectMenu = menubar:GetMenu(menuId)
	end
	
    local menu_id = giDisplay.ViewManager.getNewID();
    interface.menu_id = menu_id;
    interface.menu_object = projectMenu
    
    -- if the frame is already created then assign it its ID just here:
    if interface.frame then
        interface.frame:SetId(menu_id);
    end
    
    proj:registerMenuId(menu_id);
    proj:registerMenu(menuName);

    -- Remove the previous item if any:
    local menuItemName = interface.menuItemName
    local menuItemDesc = interface.menuItemDesc
    
    local itemId = projectMenu:FindItem(menuItemName);
    if itemId ~= -1 then
        wx.wxLogVerbose("Removing previous menu item.");
        projectMenu:Destroy(itemId);
    end

    -- Add the new item:
    local kind = (interface.paneInfo and interface.show and (not interface.iconsrc) and (not interface.isFunction)) and wx.wxITEM_CHECK or wx.wxITEM_NORMAL;
    local mitem = wx.wxMenuItem(projectMenu,menu_id,menuItemName, menuItemDesc,kind)
    -- check if we have a bitmap to assign:
    if interface.iconsrc then
        --wx.wxLogMessage("Loading icon");
        mitem:SetBitmap(guitools.getBitmap(interface.iconsrc));
    end
    
    projectMenu:Append(mitem)
	
    if interface.right then
        local updateMenuItem = function()
            local hasRight = hasFeature(interface.right)
            if not hasRight and not interface.isFunction then
                general.guimanager.toggleAUIPane(interface,false);
                if kind ==wx.wxITEM_CHECK then
                    projectMenu:Check(menu_id,false)
                end
            end
            -- Also disable the menu item:
            projectMenu:Enable(menu_id,hasRight);
        end
        
        local cb = createLuaCallback(updateMenuItem)
        cb:setName("Interface menu licenseChanged callback proxy for ".. interface.name);
        general.tools.registerCallback(this_env:getProject(),"licenseChanged",cb);
        
        updateMenuItem()
    end
    
    -- connect the menu item any way, to toggle the frame on/off:
    if interface.isFunction then
        mainframe:Connect(menu_id, wx.wxEVT_COMMAND_MENU_SELECTED,function(event) interface:performOperation() end)
        --wx.wxMessageBox("Registering function interface "..interface.name);
    else
        mainframe:Connect(menu_id, wx.wxEVT_COMMAND_MENU_SELECTED,function(event) general.guimanager.toggleAUIPane(interface); if interface.onMenuItemSelected then interface:onMenuItemSelected() end end)
        
        -- set the current menu item check status to reflect the real status of the pane:
        if kind ==wx.wxITEM_CHECK then
            projectMenu:Check(menu_id,pane:IsShown())
        end
    end
end

function loadPerspective(mgr,pane,project)
    -- check if we have some perspective information available for this pane in the app config:
    local str = ""
    local saveInProject = giCommon.Config.readAny("config.save_perspectives_in_project",false)
    if saveInProject and project then
        wx.wxLogVerbose("Loading perspective config from project for pane "..name)
        str = project:readAny("pane_infos",giScript.AnyMap()):get("perspective."..name,"")
    end
    
    if str == "" then
        -- fallback on the app level config anyway.
        str = giCommon.Config.readString("perspective."..pane.name,"")
    end
    
    if str ~= "" then
        -- apply the saved perspective details:
        mgr:LoadPaneInfo(str,pane);

        wx.wxLogVerbose("Loaded perspective details: "..str.." for pane "..pane.name)
    end
end

function savePerspective(mgr,pane,project)
    -- before detaching, save the current configuration:
    local str = mgr:SavePaneInfo(pane)
    local name = pane.name
    wx.wxLogVerbose("Saving perspective data: "..str.." for pane ".. name)
    local saveInProject = giCommon.Config.readAny("config.save_perspectives_in_project",false)
    if saveInProject and project then
        wx.wxLogVerbose("Saving perspective config in project for pane "..name)
        project:readAny("pane_infos",giScript.AnyMap()):set("perspective."..name,str)
    else
        giCommon.Config.writeString("perspective."..name,str)
    end
end

--- This method is just a frontend to hide the guimanager module dependency.
function registerInterface(interface)
    if interface.isToolbar then
        -- first build the interface:
        interface:buildInterface()
        
        interface:onLicenseChanged();
        
        wx.wxLogVerbose("Registering toolbar.")
        interface.toolbar:Realize();
        interface.toolbar:Fit();
    elseif interface.isFunction then
        registerMenu(interface,nil,this_env:getProject());
        return;
    else
        interface:createFrame();
    end
    
    if interface.isRegular then
        return -- nothing else to do, use the self.frame object directly from the parent.
    end
    
    
    -- Add the pane to the AUI manager:
    local frame = giDisplay.GreenIsisFrame.instance()
    local book = frame:getMainNotebook();

    local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");

    local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);
    
    -- remove the pane if already existing:
    local pane = mgr:GetPane(interface.paneInfo.name)
    if pane:IsOk() then
        -- Save the perspective if needed first:
        if giCommon.Config.readAny("config.save_perspectives",true) then
            savePerspective(mgr,pane,this_env:getProject());
        end
        
        -- need to remove the previous pane first:
        wx.wxLogVerbose("Removing old pane "..interface.paneInfo.name);
        local win = pane.window
        mgr:DetachPane(win);
        win:Destroy();
    end
    
    mgr:AddPane(interface.isToolbar and interface.toolbar or interface.frame, interface.paneInfo);
    pane = mgr:GetPane(interface.paneInfo.name)

    if giCommon.Config.readAny("config.load_perspectives",true) then
        loadPerspective(mgr,pane,this_env:getProject());
    end
    
    mgr:Update();

    local size = pane.window:GetSize()
    
    --wx.wxLogMessage("The actual frame size is:".. size:GetWidth() .. "x".. size:GetHeight() .. "for ".. interface.name)

    -- register a menu item if needed:
    if interface.menuName ~= "" and interface.menuName ~= nil then
        registerMenu(interface,pane,this_env:getProject());
    end

    -- register the close function:
    registerCloseFunction(function()
        wx.wxLogVerbose("I'm in the pane_close_func for "..interface.paneInfo.name)
        destroyAUIPane(interface.paneInfo.name,this_env:getProject())
    end,"pane_close_func_"..interface.paneInfo.name)       
end

function destroyAUIPane(name,project)
    local frame = giDisplay.GreenIsisFrame.instance()
    local book = frame:getMainNotebook();
    local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");
    local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);

    wx.wxLogVerbose("Removing pane named '"..name.."'")
    -- check if we can execute close functions here:
    local intf = allInterfaces[name]
    if intf and intf.close then
        intf:close()
    end
    allInterfaces[name] = nil
    
    local pane = mgr:GetPane(name)
    if not pane:IsOk() then
        wx.wxLogWarning("The AUI pane with name "..name.." doesn't exist.")
    else
        local win = pane.window

        -- before detaching, save the current configuration:
        if giCommon.Config.readAny("config.save_perspectives",true) then
            savePerspective(mgr,pane,project);
        end
        
        -- Now detach:        
        mgr:DetachPane(win)
        mgr:Update()
        -- WARNING: here the pane object is not valid anymore.
        
        -- and destroy it:
        win:Destroy()
    end
end
