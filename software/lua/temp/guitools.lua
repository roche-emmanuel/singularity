module("guitools",package.seeall)

function getImage(name,size,path,ext)
    -- name is mendatory,
    size = size or 16
    path = path or giCommon.Engine.getRootDir().."data/icons/"
    ext = ext or "png"
    local btype = wx.wxBITMAP_TYPE_PNG;
    local quality = wx.wxIMAGE_QUALITY_HIGH
    
    -- check if the image name contains an "/" symbol:
    local index = name:find("@")
    local link = nil;
    if index then
        link = name:sub(index+1)
        name = name:sub(1,index-1)
        wx.wxLogVerbose("Using link image: ".. link .. " with main image: ".. name);
    end
    
    if ext ~= "png" then
        wx.wxLogWarning("Support for non PNG images not implemented yet here, need to set the BITMAP_TYPE flag to the appropriate type.")
        return;
    end
    
    
    local img = wx.wxImage(path..name.."."..ext,btype)
    
    if size > 0 then
        img:Rescale(size,size,quality);
    end

    if link then
        local linkimg = wx.wxImage(path..link.."."..ext,btype)
        if size > 0 then
            linkimg:Rescale(size/2,size/2,quality);
        end
        
        local img2;
        
        if true then
            -- With this implementation, the white background issue is fixed when merging two images.
            img2 = wx.wxImage(img:GetWidth(),img:GetHeight());
            
            if not giCommon.Tools.concatenateImages(wx2intro(img),wx2intro(linkimg),wx2intro(img2)) then
                wx.wxLogError("Cannot concatenate images properly");
                return
            end        
        else
            -- prepare the rendering bitmap:
            local tmpbmp = wx.wxBitmap(img:GetWidth(),img:GetHeight(),-1); -- deletethis after usage.
            local dc = wx.wxMemoryDC();
            dc:SelectObject(tmpbmp);
            
            local bmp1 = wx.wxBitmap(img,-1);
            local bmp2 = wx.wxBitmap(linkimg,-1);
            
            dc:Clear();
            --dc:SetPen(wx.wxTRANSPARENT_PEN)
            --dc:SetBrush(wx.wxTRANSPARENT_BRUSH)
            --dc:DrawRectangle(0,0,img:GetWidth(),img:GetHeight())
            dc:DrawBitmap(bmp1,0,0,true);
            dc:DrawBitmap(bmp2,bmp1:GetWidth()/2,bmp1:GetHeight()/2,true);
            
            -- create the final image from the resulting bitmap:
            img2 = tmpbmp:ConvertToImage();
            
            -- release temp resources:
           dc:delete()
           tmpbmp:delete()
           bmp1:delete()
           bmp2:delete()
        end
        
        return img2
    end
    
    return img;
end

function getBitmap(name,size,path,ext)
    local img = getImage(name,size,path,ext);
    return wx.wxBitmap(img,-1);
end

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
    
    function interface:registerCloseCallback(func,cbname)
        if type(func) ~= "function" then
            wx.wxLogError("Invalid function in interface:registerCloseCallback()");
            return;
        end
        
        if self.close_cbs[cbname] then
            wx.wxLogWarning("Overriding close callback "..cbname.." for interface "..name)
        end
        
        self.close_cbs[cbname] = func;
    end
    
    function interface:onLicenseChanged() 
        --wx.wxLogMessage("Executing onLicenseChanged callback");
        
        --Handle the book pages:
        for k,v in ipairs(self.licensedBookPages) do
            -- hide/show the page if needed:
            local show = hasFeature(v.right);
            if show ~= v.visible then
                -- toggle the visibility status:
                v.page:Show(show);
                if show then
                    v.book:InsertPage(math.min(v.index,v.book:GetPageCount()),v.page,v.caption,v.selected,v.img)
                else
                    local pagefound = false;
                    for i=0,v.book:GetPageCount()-1 do
                        if giCommon.Tools.areEquals(wx2intro(v.book:GetPage(i)),wx2intro(v.page)) then
                            v.book:RemovePage(i)
                            pagefound=true
                            break;
                        end
                    end
                    
                    if not pagefound then
                        wx.wxLogWarning("Could not find page to hide in the license changed process.");
                    end
                end
                
                v.visible = show;
            end
        end
        
        -- Handle stand alone controls:
        for k,v in ipairs(self.licensedControls) do
            -- hide/show the page if needed:
            local show = hasFeature(v.right);
            if show ~= v.visible then
                -- toggle the visibility status:
                v.sizer:Show(v.ctrl,show,false);
                v.sizer:Layout()
                v.visible = show;
            end
        end
    end
    
    local cb = createLuaCallback(function() interface:onLicenseChanged() end)
    cb:setName("licenseChanged callback proxy for ".. interface.name);
    general.tools.registerCallback(this_env:getProject(),"licenseChanged",cb);
    
    function interface:show(enabled)
        if(enabled) then
            self:updateSelectors()
            self:updateEntries()
        end
        general.guimanager.toggleAUIPane(self,enabled)
    end
    
    function interface:addScrolledWindow(win)
        self.scrolled_windows = self.scrolled_windows or {}
        table.insert(self.scrolled_windows,win)
    end
    
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
    
    function interface:updateSelectors(name)
        for k,v in pairs(self.providers) do
            v:update(name)
        end
    end
    
    function interface:updateCustoms(cat)
        self.customs[cat] = self.customs[cat] or {}
        for k,v in ipairs(self.customs[cat]) do
            v();
        end
    end
    
    function interface:addCustomUpdate(cat,func)
        self.customs[cat] = self.customs[cat] or {}        
        if not func then
            wx.wxLogError("Invalid custom function.")
            return;
        end
        table.insert(self.customs[cat],func)
    end
    
    -- using getCurrentProject below is not a valid option since the current project might be different from the project running this scripting environment
    -- and this may introduce undesired references.
    interface.project = this_env:getProject() --giProject.ProjectManager.getCurrentProject();
    
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
    
    function interface:pushPanel(options)
        --wx.wxLogMessage("Building an panel parent")
        local panel = wx.wxPanel(self:getCurrentParent(),options.id or wx.wxID_ANY);
        self:addControl(panel,options)
        -- assign a sizer to this panel:
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
        panel:SetSizer(sizer)
        self:pushParent(panel,sizer)
        return panel
    end

    function interface:pushCollapsiblePanel(options)
        --wx.wxLogMessage("Building an panel parent")
        if options.topline then
            -- Add a top horizontal line to the previous parent:
            self:addStaticLine(options);
        end
        -- Here we add the body of the collapsable panel:
        -- prepare the bitmaps to use:
        local extendbmp = getBitmap("arrow_extend",10);
        local collapsebmp = getBitmap("arrow_collapse",10);
        
        -- first we have the main line on the previous parent:
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
            --local bmpbut =  wx.wxPanel(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxSize(10,10));
            --self:addControl(bmpbut,{prop=0,flags=0})
            local bmpbut = self:addStaticBitmap{bitmap=options.collapsedByDefault and extendbmp or collapsebmp,flags=wx.wxALIGN_CENTER_VERTICAL}
            self:addSpacer{size=3}
            if options.text then
                self:addStaticText{text=options.text,flags=wx.wxALIGN_CENTER_VERTICAL}
            end
            if options.entryfunc and options.entryargs then
                -- Here we might also want to add a regulare entry:
                options.entryfunc(self,options.entryargs)
            end
        self:popSizer() -- end sizer
        
        -- Now add the panel container:
        local panel = wx.wxPanel(self:getCurrentParent(),options.id or wx.wxID_ANY);
        local oldflags = options.flags
        options.flags = wx.wxALL+wx.wxEXPAND
        options.border=5
        self:addControl(panel,options)
        options.flags = oldflags
        options.border=nil
        -- assign a sizer to this panel:
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
        panel:SetSizer(sizer)
        
        -- keep an handle on the previous parent:
        local parent = self:getCurrentParent()
        local toggleFunction = function()
            local parent2 = parent:GetParent()
            parent2:Freeze()
            panel:Show(not panel:IsShown());
            parent:GetSizer():Layout()
            if parent2:GetSizer() then
                parent2:GetSizer():Layout(); -- to be able to add collapsable panel inside a collapsible panel.
            end
            parent2:Thaw();
            
            local size = self.frame:GetSize()
            local pos = self.frame:GetPosition()
            self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight()+1);
            self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight());
            
            --[[
            for k,v in ipairs(self.scrolled_windows) do
                --wx.wxLogMessage("Updating scrollbars...");
                local xx,yy = v:GetViewStart();
                --self.frame:SetScrollbars(20, 20, 50, 50);
                --
                local ww,hh = v:GetVirtualSizeWH();
                local csize = v:GetClientSize();
                local cww,chh = csize:GetWidth(),csize:GetHeight()
                
                wx.wxLogMessage("Using virtual size of ".. ww .."x" .. hh)
                 wx.wxLogMessage("Using client size of ".. cww .."x" .. chh)
                 
                v:SetScrollbars((self.noHScroll or ww <= cww) and 0 or math.floor(ww/50), (hh <= chh and 0) or math.floor(hh/50), (self.noHScroll or ww <= cww) and 0 or 50, (hh <= chh and 0) or 50);
                --v:Layout()
                --wx.wxLogMessage("Scrolling to location ".. xx.. ","..yy)
                v:Scroll(xx,yy)
            end
            ]]
            return panel:IsShown()
        end
        
        -- toggle the panel visibility right now:
        panel:Show(not options.collapsedByDefault);
        
        -- Now assign a click event handler on the bitmap button:
        local toggleHandler = function(intf,event)
            local visible = toggleFunction();
            --wx.wxLogMessage("Setting bitmap to " .. (visible and "Collapse" or "Extend"))
            bmpbut:SetBitmap((visible and collapsebmp) or extendbmp);
            bmpbut:Refresh(true)
        end
        
        -- Override the paint handler for the staticbitmap!!!
        --[[local OnPaint = function(event)
            wx.wxLogMessage("I'm in the paint handler! panel is " .. (panel:IsShown() and "visible" or "hidden"));
            local dc = wx.wxPaintDC(bmpbut)
            dc:DrawBitmap((panel:IsShown() and collapsebmp) or extendbmp,0,0,true)
            dc:delete()
        end
        ]]
        --bmpbut:Connect(wx.wxEVT_PAINT,OnPaint)
        
        self:connectHandler(bmpbut,wx.wxEVT_LEFT_UP,toggleHandler)
        
        -- Change the cursor for the bitmap button:
        bmpbut:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
        
        if options.bottomline then
            -- Add a bottom horizontal line to the previous parent:
            self:addStaticLine(options);
        end

        -- Only push the new panel parent AFTER adding the bottom line:
        self:pushParent(panel,sizer)
        return panel
    end

    function interface:pushWizard(options)
        --wx.wxLogMessage("Building a Wizard")
        local parent = options.parent or intro2wx(giDisplay.GreenIsisFrame.instance());
        local wiz = wx.wxWizard(parent);
        local title = options.title or ""
        wiz:SetTitle(title);
        wiz:SetPageSize(options.size or wx.wxSize(500,200));
        self:pushParent(wiz)
        -- also connect the finsh handler is any:
        if options.handler then 
            self:connectHandler(wiz,options.eventType or wx.wxEVT_WIZARD_FINISHED,options.handler)
        end
        
        return wiz
    end
    
    function interface:pushWizardPage(options)
        --wx.wxLogMessage("Building a wizard page")
        local page = wx.wxWizardPageSimple(self:getCurrentParent());
        -- assign a sizer to this panel:
        local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
        page:SetSizer(sizer)
        self:pushParent(page,sizer)
        
        -- Also add that page to the wizard page list:
        self.wiz_pages = self.wiz_pages or {}
        table.insert(self.wiz_pages,page);
        return page
    end
    
    function interface:runWizard()
        --ensure the wizard pages are properly chained:
        local pages = self.wiz_pages or {};
        for i=2,#pages do 
            wx.wxWizardPageSimple.Chain(pages[i-1],pages[i]);
        end
        
        if #pages == 0 then
            wx.wxLogError("No page in wizard!");
            return;
        end
        local wiz = self:getCurrentParent()
        --wiz:GetPageAreaSizer():Layout() --SetSize(wx.wxSize(500,200));
        --wiz:GetSizer():Layout()
        
        wiz:RunWizard(pages[1]);
        wiz:Destroy();
        self:popParent()
        self.wiz_pages = nil;
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
    
    function interface:addListBox(options)
        options = options or {}
        local ctrl = wx.wxListBox(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_EXTENDED);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,options.handler)
        end
        return self:addControl(ctrl,options)
    end
 
     function interface:addCheckListBox(options)
        options = options or {}
        options.prop = options.prop or 1
        options.flags = options.flags or wx.wxEXPAND+wx.wxALL;
        local ctrl = wx.wxCheckListBox(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_SINGLE);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,options.handler)
        end
        return self:addControl(ctrl,options)
    end
    
    function interface:addRadioBox(options)
        assert(options and options.text, "a valid 'text' entry is required to build a wxRadioBox.")
        local ctrl = wx.wxRadioBox(self:getCurrentParent(),wx.wxID_ANY,options.text,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},0,options.style or wx.wxRA_SPECIFY_ROWS);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_RADIOBOX_SELECTED,options.handler)
        end
        return self:addControl(ctrl,options)
    end
    
    function interface:addComboBox(options)
        options = options or {}
        local ctrl = wx.wxComboBox(self:getCurrentParent(),options.id or wx.wxID_ANY,options.choices and options.choices[1] or "",wx.wxDefaultPosition,options.size or wx.wxSize(-1,20),options.choices or {},options.style or wx.wxCB_DROPDOWN+wx.wxCB_READONLY);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COMBOBOX_SELECTED,options.handler)
        end
        return self:addControl(ctrl,options)
    end
    
    function interface:addSpacer(options)
        -- Has no effect on toolbars:
        if self.isToolbar then
            return;
        end
        
        assert(options and (options.size or options.prop),"A valid 'size' or 'prop' entry is needed to build a spacer.")
        if options.prop then
            self:getCurrentSizer():AddStretchSpacer(options.prop)
        else
            self:getCurrentSizer():AddSpacer(options.size)
        end
    end
    
    function interface:addListCtrl(options)
        options = options or {}
        local ctrl = nil
        if options.style and bit.band(options.style,wx.wxLC_VIRTUAL) ~= 0 then
            assert(options.callback,"A valid 'callback' entry must be provided to create a virtual listctrl.")
            -- create a virtual list ctrl object
            ctrl = giDisplay.LuaVirtualListCtrl(wx2intro(self:getCurrentParent()),wx.wxID_ANY,this_env,options.style);
            registerVirtualListCtrlFunction(ctrl,options.callback)
            ctrl:setItemCount(options.count or 0)
            -- convert the control into a regular wx window:
            ctrl = intro2wx(ctrl):DynamicCast("wxListCtrl")
        else
            -- create a regular listctrl directly:
            ctrl = wx.wxListCtrl(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxLC_REPORT+wx.wxLC_HRULES+wx.wxLC_VRULES);
        end
        -- add the columns if any:
        if options.columns then
            for k,v in ipairs(options.columns) do
                ctrl:InsertColumn(k-1,v)
            end
        end
        if options.images then
            -- assign the image list to the control.
            local butsize = options and options.butsize or 16
        
            local imglist = wx.wxImageList(butsize,butsize,true);
            for k,v in ipairs(options.images) do
                imglist:Add(getBitmap(v,butsize))
            end
            ctrl:AssignImageList(imglist,wx.wxIMAGE_LIST_SMALL) --wxIMAGE_LIST_NORMAL);
            --self.image_lists = self.image_lists or {}
            --table.insert(self.image_lists,imglist) -- keep a reference.
        end
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LIST_ITEM_ACTIVATED,options.handler)
        end 
        return self:addControl(ctrl,options)
    end    
    
    function interface:addMediaCtrl(options)
        local ctrl = wx.wxMediaCtrl(self:getCurrentParent(),wx.wxID_ANY);       
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_MEDIA_STATECHANGED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end

    function interface:add3DCanvas(options)
        local root = options and options.root or osg.Group()
        local proj = options and options.project or this_env:getProject()
        
        local canvas = giCommon.Tools.createOSGCanvas(wx2intro(self:getCurrentParent()),root,proj)
        local ctrl = intro2wx(canvas)
        return self:addControl(ctrl,options)
    end
    
    function interface:addButton(options)
        assert(options and options.text,"A valid 'text' entry is needed to build a wxButton.")
        local ctrl = wx.wxButton(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_BUTTON_CLICKED,options.handler)
        end        
        return self:addControl(ctrl,options)
    end
    
    function interface:addSlider(options)
        options = options or {}
        local ctrl = wx.wxSlider(self:getCurrentParent(),options.id or wx.wxID_ANY,0,0,options.range or 10000);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_SCROLL_CHANGED,options.handler)  --THUMBRELEASE
        end     
        return self:addControl(ctrl,options)
    end
    
    function interface:addStaticText(options)
        assert(options and options.text,"A valid 'text' entry is needed to build a wxStaticText.")
        local ctrl = wx.wxStaticText(self:getCurrentParent(),wx.wxID_ANY,options.text);
        ctrl:SetFont(options.font or labelFont);
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        return self:addControl(ctrl,options)
    end

    function interface:addStaticLine(options)
        local ctrl = wx.wxStaticLine(self:getCurrentParent(),wx.wxID_ANY);       
        options.flags = options.flags or wx.wxALL+wx.wxEXPAND
        return self:addControl(ctrl,options)
    end
    
    function interface:addStaticBitmap(options)
        assert(options and options.bitmap,"A valid 'bitmap' entry is needed to build a wxStaticBitmap.")
        local ctrl = wx.wxStaticBitmap(self:getCurrentParent(),wx.wxID_ANY,options.bitmap);       
        options.flags = options.flags or 0
        return self:addControl(ctrl,options)
    end
    
    function interface:addHyperlinkCtrl(options)
        local ctrl = wx.wxHyperlinkCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text,options.url,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHL_DEFAULT_STYLE);       
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_HYPERLINK,options.handler)
        end  
        return self:addControl(ctrl,options)
    end
    
    function interface:addHTMLWindow(options)
        local ctrl = wx.wxHtmlWindow(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHW_SCROLLBAR_NEVER);       
        options.flags = options.flags or wx.wxALL
        return self:addControl(ctrl,options)
    end
    
    function interface:addTextCtrl(options)
        local ctrl = wx.wxTextCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxTE_RICH2,options.validator or wx.wxDefaultValidator);       
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        ctrl:SetFont(options.font or textFont);
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_TEXT_UPDATED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end

    function interface:addSpinCtrl(options)
        local ctrl = wx.wxSpinCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.defaultValue.."",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxSP_ARROW_KEYS,options.range[1],options.range[2]);
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_SPINCTRL_UPDATED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end
    
    function interface:addFilePickerCtrl(options)
        local ctrl = wx.wxFilePickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a file", options.wildcard or "*.*",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxFLP_DEFAULT_STYLE);       
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_FILEPICKER_CHANGED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end
    

    
    function interface:addDirPickerCtrl(options)
        local ctrl = wx.wxDirPickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a folder",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxDIRP_DEFAULT_STYLE);       
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_DIRPICKER_CHANGED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end
    
    function interface:addColorCtrl(options)
        local ctrl = wx.wxColourPickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxGREEN,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxCLRP_USE_TEXTCTRL)
        options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
        if options.handler then
            self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COLOURPICKER_CHANGED,options.handler)
        end  
        return self:addControl(ctrl,options)
    end
    
    --------------------------------------------------------------------------------------------
    function interface:updateEntries()
       
        -- iterate on the entry table
        self:updateCustoms("pre-entries")
        for k,entry in pairs(self.entries) do
           entry:updateDisplay(self.project)
        end
        self:updateCustoms("entries")
        self:updateCustoms("post-entries")
    end
    
    function interface:setDefaultProvider(provider)
        self.defaultProvider = provider;
    end
    
    function interface:createProvider(options)
        assert(options,"Invalid options table in createProvider")
        self.providers = self.providers or {}
        
        local prov;
        if options.vector then
            prov = self:createVectorProvider(options)
        elseif options.simplemap then
            prov = self:createSimpleMapProvider(options)
        elseif options.vectorname then
            prov = self:createNamedVectorProvider(options)
        elseif options.simplemapname then
            prov = self:createNamedSimpleMapProvider(options)
        else 
            prov = self:createAppConfigProvider(options)
        end
        
        function prov:update(name)
            if(self.selector) then
                --wx.wxLogMessage("In provider update.");
                local vec = (self.type=="vector" or self.type=="vectorname") and self:getContainer() -- this is an anyvector:
                local map = (self.type=="simplemap" or self.type=="simplemapname") and self:getContainer() -- this is an anymap:
                -- try to keep the previous selection:
                name = name or self.selector:GetStringSelection()
                self.selector:Clear()

                if vec then
                    --wx.wxLogMessage("[guitools] Found selector provider, container with "..(#vec).." items")
                    local arr = wx.wxArrayString();
                    for i=0,#vec-1 do
                        arr:Add(vec[i].name)
                    end
                    self.selector:Append(arr);                    
                elseif map then
                    local arr = wx.wxArrayString();
                    for i=0,#map-1 do
                        arr:Add(map:getKey(i))
                    end
                    self.selector:Append(arr);                    
                end

                if self.selector:GetCount() ~= 0 then
                    if name~="" then
                        self.selector:SetStringSelection(name);
                    else
                        --wx.wxLogMessage("In provider update: setting first item.");
                        self.selector:SetSelection(0)
                    end
                end                    

            end
        end
        
        table.insert(self.providers,prov)
        return prov;
    end
    
    function interface:createAppConfigProvider(options)
        local provider = {}
        

        function provider:getCurrentItem()            
            return "dummy"; -- return a dummy item as this may be used for some entries to change the enable status (for instance ActionButton entries)
        end
        
        function provider:get(entry)
            -- here we retrieve the value depending on the entry type:
            local type = entry.type
            if type == "double" then
                return giCommon.Config.readDouble(entry.name,entry.defaultValue);
            elseif type == "integer" then
                return giCommon.Config.readInt(entry.name,entry.defaultValue);
            else
                return giCommon.Config.readAny(entry.name,entry.defaultValue);
            end
        end
        
        function provider:set(entry,val)
            -- Also use the proper setter to avoid improper conversions:
            local type = entry.type
            if type == "double" then
                giCommon.Config.writeDouble(entry.name,val);
            elseif type == "integer" then
                giCommon.Config.writeInt(entry.name,val);
            else
                giCommon.Config.writeAny(entry.name,val);
            end            
            
            return true;
        end
        
        return provider
    end
    
    function interface:createSimpleMapProvider(options)
        assert(options and options.simplemap,"Invalid simple map container in createSimpleMapProvider")
        local provider = {}
        
        provider.container = options.simplemap
        provider.type = "simplemap"
        
        -- a simple map provider may optionally be linked to a selector:
        provider.selector = options.selector;
        provider.autoCreate = options.autoCreate;
        
        if provider.selector then
            function selectHandler(self,event)
                -- if this provider has children then we should also update them ad this point:
                for k,v in pairs(provider.children or {}) do
                    v:update();
                end
                
                self:updateEntries();
            end
            
            self:connectHandler(provider.selector,wx.wxEVT_COMMAND_COMBOBOX_SELECTED,selectHandler)
        end
        
        function provider:setContainer(cont)
            self.container = cont; -- dynamically change the container.
        end
        
        function provider:getContainer()
            return self.container;
        end
        
        function provider:getCurrentItem()
            if self.selector then
                -- Assume that selector is a ComboBox:
                local itemname = self.selector:GetStringSelection();
                
                -- assume that we need to iterate on the vector, and each item is an AnyMap, where we should find a key named "name"
                -- and we use the selector current selection to find the proper object:
                if self.container:hasKey(itemname) then
                    return self.container[itemname];
                end
                
                -- if the item doesn't exit yet create it as an anymap, if allowed to do so:
                if self.autoCreate then
                    local item = giScript.AnyMap()
                    item:set("name",itemname)
                    provider.container:set(itemname,item)
                    return item;
                end            
            else
                return self.container;
            end
        end
        
        function provider:get(entry)
            local item = self:getCurrentItem()
            if not item then
                return nil;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just return the value under the key entry.name
            -- or assign the default entry value:
            --wx.wxLogMessage("Entry name is:"..entry.name)
            return item:get(entry.name,entry.defaultValue)
        end
        
        function provider:set(entry,val)
            local item = self:getCurrentItem()
            if not item then
                return false;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just set the value under the key entry.name
            item:set(entry.name,val)
            return true;
        end
        
        return provider
    end
    
    function interface:createNamedSimpleMapProvider(options)
        assert(options and options.simplemapname,"Invalid simple map container in createSimpleMapProvider")
        local provider = {}
        
        provider.name = options.simplemapname
        provider.intf = self
        provider.parent = options.parent
        provider.type = "simplemapname"
        
        if provider.parent then
            provider.parent.children = provider.parent.children or {}
            table.insert(provider.parent.children,provider);
        end
        
        -- a simple map provider may optionally be linked to a selector:
        provider.selector = options.selector;
        provider.autoCreate = options.autoCreate;
        
        if provider.selector then
            function selectHandler(self,event)
                -- if this provider has children then we should also update them ad this point:
                for k,v in pairs(provider.children or {}) do
                    v:update();
                end
                
                self:updateEntries();
            end
            
            self:connectHandler(provider.selector,wx.wxEVT_COMMAND_COMBOBOX_SELECTED,selectHandler)
        end
        
        function provider:getContainer()
            -- if we have a valid parent, then assume this parent is another provider,
            -- and retrieve the container from that parent provider instead of the target project
            -- itself:
            local num = #(self.name)
            if num <= 0 then
                wx.wxLogError("Invalid simple map name in provider.")
                return;
            end
            
            local map = nil -- prepare the nil map.
            
            if self.parent then
                if not self.parent:getCurrentItem() then
                    return nil;
                end
                
                map = self.parent:getCurrentItem():get(self.name[1],giScript.AnyMap());
                
            else
                local proj = self.intf.project;
                if not proj then
                    return;
                end
                
                --wx.wxLogMessage("Size of vector name is "..num)
                
                map = proj:readAny(self.name[1],giScript.AnyMap());
            end
            
            -- iterate on the sub maps:
            for i=2,num do
                map = map:get(self.name[i],giScript.AnyMap());
            end
            
            return map;
        end
        
        function provider:getCurrentItem()   
            if self.selector then
                -- Assume that selector is a ComboBox:
                local itemname = self.selector:GetStringSelection();
                
                local cont = self:getContainer();
                
                -- assume that we need to iterate on the vector, and each item is an AnyMap, where we should find a key named "name"
                -- and we use the selector current selection to find the proper object:
                if cont:hasKey(itemname) then
                    return cont[itemname];
                end
                
                -- if the item doesn't exit yet create it as an anymap, if allowed to do so:
                if self.autoCreate then
                    local item = giScript.AnyMap()
                    item:set("name",itemname)
                    cont:set(itemname,item)
                    return item;
                end            
            else
                return self:getContainer();
            end
        end
        
        function provider:get(entry)
            local item = self:getCurrentItem()
            if not item then
                return nil;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just return the value under the key entry.name
            -- or assign the default entry value:
            --wx.wxLogMessage("Entry name is:"..entry.name)
            return item:get(entry.name,entry.defaultValue)
        end
        
        function provider:set(entry,val)
            local item = self:getCurrentItem()
            if not item then
                return false;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just set the value under the key entry.name
            item:set(entry.name,val)
            return true;
        end
        
        return provider
    end
    
    function interface:createVectorProvider(options)
        assert(options and options.vector,"Invalid any vector in createVectorProvider")
        assert(options and options.selector,"Invalid selector in createVectorProvider")
        local provider = {}
        
        provider.container = options.vector
        provider.selector = options.selector
        provider.autoCreate = options.autoCreate;
        provider.type = "vector"
        
        -- Assume the selector is a wxComboBox for the moment.
        -- Assign the updateentries function as an handler for the selection event:
        function selectHandler(self,event)
            -- if this provider has children then we should also update them ad this point:
            for k,v in pairs(provider.children or {}) do
                v:update();
            end
            
            self:updateEntries();
        end
        
        self:connectHandler(provider.selector,wx.wxEVT_COMMAND_COMBOBOX_SELECTED,selectHandler)
        
        function provider:getContainer()
            return self.container
        end
        
        function provider:getCurrentItem()
            -- Assume that selector is a ComboBox:
            local itemname = self.selector:GetStringSelection();
            
            -- assume that we need to iterate on the vector, and each item is an AnyMap, where we should find a key named "name"
            -- and we use the selector current selection to find the proper object:
            local num = provider.container:getNumItems()
            for i=0,num-1 do
                local item = provider.container[i];
                if item:get("name") == itemname then
                    -- this is the correct object, return it:
                    return item;
                end
            end
            
            -- if the item doesn't exit yet create it as an anymap, if allowed to do so:
            if self.autoCreate then
                local item = giScript.AnyMap()
                item:set("name",itemname)
                provider.container:push_back(item)
                return item;
            end
            
            return nil;
        end
        
        function provider:get(entry)
            local item = self:getCurrentItem()
            if not item then
                return nil;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just return the value under the key entry.name
            -- or assign the default entry value:
            --wx.wxLogMessage("Entry name is:"..entry.name)
            return item:get(entry.name,entry.defaultValue)
        end
        
        function provider:set(entry,val)
            local item = self:getCurrentItem()
            if not item then
                return false;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just set the value under the key entry.name
            item:set(entry.name,val)
            return true;
        end
        
        return provider
    end
    
    function interface:createNamedVectorProvider(options)
        assert(options and options.vectorname,"Invalid any vector name in createNamedVectorProvider")
        assert(options and options.selector,"Invalid selector in createNamedVectorProvider")
        local provider = {}
        
        provider.vectorname = options.vectorname;
        provider.selector = options.selector
        provider.autoCreate = options.autoCreate;
        provider.parent = options.parent
        provider.intf = self; -- store the interface here to access the project member.
        provider.type = "vectorname"
       
       if provider.parent then
            provider.parent.children = provider.parent.children or {}
            table.insert(provider.parent.children,provider);
        end


        -- Assume the selector is a wxComboBox for the moment.
        -- Assign the updateentries function as an handler for the selection event:
        function selectHandler(self,event)
            for k,v in pairs(provider.children or {}) do
                v:update();
            end
            
            self:updateEntries();
        end
        
        self:connectHandler(provider.selector,wx.wxEVT_COMMAND_COMBOBOX_SELECTED,selectHandler)
        
        function provider:onRefreshProject()
        
        end
        
        function provider:getContainer()
            local num = #(self.vectorname)
            if num <= 0 then
                wx.wxLogError("Invalid vector name in provider.")
                return;
            end
            
            --wx.wxLogMessage("Size of vector name is "..num)
            if self.parent then
                if not self.parent:getCurrentItem() then
                    return nil;
                end
                
                if num >= 2 then
                    -- retrieve the first anymap:
                    local map = self.parent:getCurrentItem():get(self.vectorname[1],giScript.AnyMap());
                    -- iterate on the sub maps:
                    for i=2,num-1 do
                        map = map:get(self.vectorname[i],giScript.AnyMap());
                    end
                    -- retrieve the final vector:
                    return map:get(self.vectorname[num],giScript.AnyVector());
                else
                    -- num == 1 so retrieve the vector directly from the project:
                    return self.parent:getCurrentItem():get(self.vectorname[1],giScript.AnyVector())
                end            
            else
                local proj = self.intf.project;
                if not proj then
                    return;
                end
                
                if num >= 2 then
                    -- retrieve the first anymap:
                    local map = proj:readAny(self.vectorname[1],giScript.AnyMap());
                    -- iterate on the sub maps:
                    for i=2,num-1 do
                        map = map:get(self.vectorname[i],giScript.AnyMap());
                    end
                    -- retrieve the final vector:
                    return map:get(self.vectorname[num],giScript.AnyVector());
                else
                    -- num == 1 so retrieve the vector directly from the project:
                    return proj:readAny(self.vectorname[1],giScript.AnyVector())
                end
            end
            
        end
        
        function provider:getCurrentItem()
            -- Assume that selector is a ComboBox:
            local itemname = self.selector:GetStringSelection();
            --wx.wxLogMessage("Selector name is : "..itemname)
            
            
            -- assume that we need to iterate on the vector, and each item is an AnyMap, where we should find a key named "name"
            -- and we use the selector current selection to find the proper object:
            local container = provider:getContainer()
            if not container then
                return nil
            end
            local num = container:getNumItems()
            for i=0,num-1 do
                local item = container[i];
                if item:get("name") == itemname then
                    -- this is the correct object, return it:
                    return item;
                end
            end
            
            -- if the item doesn't exit yet create it as an anymap, if allowed to do so:
            if self.autoCreate then
                local item = giScript.AnyMap()
                item:set("name",itemname)
                container:push_back(item)
                return item;
            end
            
            return nil;
        end
        
        function provider:get(entry)
            local item = self:getCurrentItem()
            if not item then
                return nil;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just return the value under the key entry.name
            -- or assign the default entry value:
            --wx.wxLogMessage("Entry name is:"..entry.name)
            local result = item:get(entry.name,entry.defaultValue)

--[[
            if entry.type =="vector" then
                wx.wxLogMessage("[provider:get()] entry name="..entry.name.." item name="..item.name.." default size="..#(entry.defaultValue).." result size="..#result);
            end
    ]]        
            return result;
        end
        
        function provider:set(entry,val)
            local item = self:getCurrentItem()
            if not item then
                return false;
            end
            
            -- the item is assumed to be a valid anymap,
            -- just set the value under the key entry.name
            item:set(entry.name,val)
            return true;
        end
        
        return provider
    end
    
    function interface:getDefaultProvider()
        return self.defaultProvider;
    end
    
    function interface:addEntry(options)
        local entry = options;
        entry.provider = entry.provider or self.defaultProvider
        entry.class = {}
        entry.enabled = true -- enabled by default.
        
        assert(entry.provider,"Invalid provider for new entry.")
        
        -- if the entry has a "parent" field and it is a string then look for the corresponding parent entry:
        if entry.parent then
            -- assume the parent field is a string for the moment.
            local eparent = self:getEntry(entry.parent);
            if not eparent then
                wx.wxLogError("Cannot find parent entry named "..entry.parent)
            end
            
            entry.parent = eparent;
            
            -- also add this entry to the children list of the parent:
            if entry.parent then
                entry.parent:addChild(entry)
            end
        end
        
        function entry:addChild(child)
            self.children = self.children or {}
            
            table.insert(self.children,child)
        end
        
        function entry:updateValue()
            --wx.wxLogMessage("Updating value for entry "..self.name)
            if self.type == "void" or self.type == "dummy" then
                self.value = self.provider:getCurrentItem();
                return self.value;
            end
            
            self.value = self.provider:get(self) -- retrieve the current value for that entry.
            if self.states then
                -- if this entry is a state entry, then also update the currentState member:
                self.currentState = nil -- invalid the current state.
                for k,v in ipairs(self.states) do
                    if v.id == self.value then
                        self.currentState = (k-1);
                        break;
                    end
                end
                if not self.currentState and self.value then
                    wx.wxLogError("Cannot find id "..self.value.." in list")
                end
            end

            return self.value
        end
    
        function entry:getValue()
            return self:updateValue()
        end
        
        function entry:handle(val)
            -- if there is an handler, then call it:
            if self.handler then
                local data = {
                    value=val,
                    item=self.provider:getCurrentItem(),
                    name=self.name,
                    entry=self,
                    intf=interface}
                self.handler(data)
            end        
        end
        
        function entry:setValue(val)
            self.value = val;
            if val~=nil and self.provider:set(self,val) then
                self:handle(val);
                
                -- update the children if any:
                for k,v in pairs(self.children or {}) do
                    v:updateDisplay()
                end                
            end
        end
        
        -- This refs ticket #283.
        -- add a function to check if this entry should be activated or not.
        -- only add this method if it doesnt exist yet:
        if not entry.areChildrenEnabled then
            function entry:areChildrenEnabled() -- override this function for valid parent.
                return true;
            end
        end
       
        function entry:isEnabled()
            if self.parent then
                -- Assume the parent is a valid entry;
                if self.invertActivation then
                    return not self.parent:areChildrenEnabled();
                end
                return self.parent:areChildrenEnabled();
            end
            
            return self.enabled;
        end
               
        function entry:enable(enabled)
            self.enabled = enabled;
        end
        
        function entry:show(visible)
            for k2,ctrl in pairs(self.controls) do
                local win = className and className~="wxAuiToolBarItem" and intro2wx(ctrl) or ctrl;
                win:Show(visible)
            end
        end
        
        function entry:setControlValue(ctrl,className,project)
            assert(ctrl,"Invalid parameters in setEntryControlValue()");
            local type = self.type
            local val = self.value;
            local range = self.range;
            if type == "vec3d" then
                range = self.range[ctrl:GetId()+1]
            end
            
            local class = className or ctrl:GetClassInfo():GetClassName()
            if class == "wxSlider" then
                if type == "color" then
                    val = val:a() -- retrieve the alpha value of the color.
                end
                if type == "vec3d" then
                    val = val[ctrl:GetId()]
                end
                ctrl:SetValue((val-range[1])/(range[2]-range[1])*10000);
            elseif class == "wxControl" or class == "wxPanel" then
                ctrl:Refresh()
            elseif class == "wxTextCtrl" then
                local unit = (self.unit or "")
                if type == "color" then
                    ctrl:ChangeValue(string.format(self.numFormat,val:a()*100.0) .. unit);
                elseif type == "string" then
                    ctrl:ChangeValue(val);
                elseif type == "vec3d" then
                    ctrl:ChangeValue(string.format(self.numFormat,val[ctrl:GetId()]) .. unit);
                else
                    --wx.wxLogMessage("Setting text value to ".. val)
                    ctrl:ChangeValue(string.format(self.numFormat,val) .. unit);
                end
            elseif class == "wxDatePickerCtrl" then
                if type == "datetime" then
                    -- build a datetime object from the map details:
                    local date = wx.wxDateTime();
                    --wx.wxLogMessage(string.format("Setting date %d/%d/%d",val.year,val.month-1,val.day))
                    date:SetToCurrent()
                    date:SetYear(val.year);
                    date:SetMonth(val.month-1); 
                    date:SetDay(val.day);
                    date:ResetTime()
                    if not date:IsEqualTo(ctrl:GetValue()) then
                        ctrl:SetValue(date)
                    end
                end
            elseif class == "TimeCtrl" then
                if type == "datetime" then
                    -- build a time string
                    local time = string.format("%02d:%02d:%02d",val.hour,val.min,math.floor(val.sec))
                    if platform~="win32" then ctrl:ChangeValue(time) else ctrl:SetValue(time) end
                end
            elseif class == "wxTreeCtrl" then
                if type == "tree" then
                    self.tree:setRoot(val,project);
                end    
            elseif class == "wxSpinCtrl" then
                if type == "integer" then
                    ctrl:SetValue(string.format("%.0f",val));
                end
            elseif class == "wxFilePickerCtrl" then
                if type == "string" then
                    ctrl:SetPath(val);
                end
            elseif class == "wxFontPickerCtrl" then
                if type == "font" then
                    ctrl:SetSelectedFont(general.tools.mapToFont(val));
                end
            elseif class == "wxComboBox" then
                if type == "string" then
                    --wx.wxLogMessage("Should set the combo text: "..val)
                    --ctrl:SetValue(val)
                    if platform=="linux64" then ctrl:ChangeValue(val); else ctrl:SetValue(val) end;
                    --wx.wxLogMessage("Text set.")
                elseif type == "nodepath" then
                    -- display the scene in the combo box:
                    --ctrl:SetValue(val.scene)
                    if platform=="linux64" then ctrl:ChangeValue(val.scene) else ctrl:SetValue(val.scene) end;
                elseif type == "statecb" then
                    local str = "";
                    for k,v in pairs(self.states) do
                        if v.id == val then
                            str = v.caption
                        end
                    end
                    -- display the scene in the combo box:
                    --ctrl:SetValue(str)
                    if platform=="linux64" then ctrl:ChangeValue(str) else ctrl:SetValue(str) end;
                end 
            elseif class == "wxChoicebook" then
                if type == "string" then
                    -- retrieve the proper page in the choice book and select it:
                    local count = ctrl:GetPageCount()
                    for i=0,count-1 do
                        if ctrl:GetPageText(i) == val then
                            ctrl:ChangeSelection(i)
                            return
                        end
                    end
                    --wx.wxLogWarning("Could not find choicebook page named '"..val.."'");
                    --wx.wxLogWarning(debug.traceback());
                end
            elseif class == "wxChoice" then
                if type == "string" then
                    ctrl:SetStringSelection(val);
                end                  
            elseif class == "NodePathTreeCtrl" then
                if type == "nodepath" then
                    -- retrieve the scene root object.
                    -- select the object:
                    --wx.wxLogMessage("Setting up Nodepath in nodepath control")
                    
                    if not val.nodepath:isValid() then
                        wx.wxLogError("Invalid nodepath object in nodepath entry.");
                        return;
                    end
                    --wx.wxLogMessage("Looking for scene ".. val.scene.." in project "..project:getName());
                    local scene = project and project:getScene(val.scene)
                    if not scene then
                        --wx.wxLogMessage("Invalid scene in nodepath entry.");
                        return
                    end
                    
                    ctrl:setRoot(scene:getRoot(),project);
                    if val.nodepath:getNumItems()~=0 then
                        --wx.wxLogMessage("Assigning Nodepath in nodepath control")
                        ctrl:setNodePath(val.nodepath:getNodePath())
                    end
                end
            elseif class == "wxCheckListBox" then
                if type == "vector" then
                    ctrl:Clear()
                    self:refreshCheckList()
                end
            elseif class == "wxListBox" then
                if type == "vector" then
                    ctrl:Clear()
                    self:refreshList()
                end                
            elseif class == "wxListCtrl" then
                if type == "map" then
                    self:refreshList()
                end
            elseif class == "wxDirPickerCtrl" then
                if type == "string" then
                    ctrl:SetPath(val);
                end
            elseif class == "wxCheckBox" then
                if type == "bool" then
                    ctrl:SetValue(val);
                end
            elseif class == "wxButton" then
                --wx.wxLogMessage("Updating button")
                if type == "statebutton" then
                    --wx.wxLogMessage("Updated caption is:"..entry.states[entry.currentState+1].caption)
                    ctrl:SetLabel(entry.states[entry.currentState+1].caption);
                end
            elseif class == "wxRadioBox" then
                --wx.wxLogMessage("Updating radiobox")
                if type == "stateradio" then
                    ctrl:SetSelection(entry.currentState);
                end
            elseif class == "wxColourPickerCtrl" then
                --wx.wxLogMessage("Updating radiobox")
                if type == "color" then
                    local col = wx.wxColour(math.floor(val:r()*255),math.floor(val:g()*255),math.floor(val:b()*255))
                    ctrl:SetColour(col);
                end
            end
        end
        
        function entry:updateDisplay(project)
            -- retrieve the current entry value:           
           --wx.wxLogMessage("Updating display for entry ".. self.name .. " with value: ".. val);
            --wx.wxLogMessage("Updating display for entry ".. self.name .. " containing " .. #self.controls .. " controls");
                        
            local val = self:updateValue()

            local activated = self:isEnabled()
         
            -- iterate on the entry controls, and update each of them:
            for k2,ctrl in pairs(self.controls) do
                -- fix the TimeCtrl issue (cannot use Enable() on those objects);
                local className = self.class[ctrl]
                local win = className and className~="wxAuiToolBarItem" and intro2wx(ctrl) or ctrl;
                className = className or ctrl:GetClassInfo():GetClassName()
                
                --wx.wxLogMessage("Updating control of class ".. className)
                
                if className == "TimeCtrl" then
                    if val then
                        self:setControlValue(ctrl,self.class[ctrl],project)
                    end
                else
                    if val==nil then -- the value can still be "false"
                        if className == "wxTreeCtrl" and self.type == "tree" then
                            self.tree:setRoot{}
                        end
                        if (className=="wxAuiToolBarItem") then
                            win:SetActive(false)
                        else
                            win:Enable(false)
                        end
                    else
                        if (className=="wxAuiToolBarItem") then
                            win:SetActive(false)
                        else
                            win:Enable(activated)
                        end
                        self:setControlValue(ctrl,self.class[ctrl],project)
                    end
                end
            end
            
        end
        
        table.insert(self.entries,entry)
    end
    
    function interface:getEntry(name)
        for k,v in pairs(self.entries) do
            if v.name == name then
                return v;
            end
        end
    end

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
    
    function interface:addComboBoxSelector(options)
        assert(options and (options.vector or options.vectorname or options.simplemap or options.simplemapname ),"A valid 'vector' or 'vectorname' or 'simplemap' or 'simplemapname' entry is needed to build a ComboBox selector.");
          
        --self:pushSizer{orient=wx.wxHORIZONTAL, prop=0, flags=wx.wxALL+wx.wxEXPAND}
        --local cb = self:addComboBox{prop=1, flags=wx.wxALL, choices=options.choices or {}}
        --local cb = self:addSingleChoiceEntry(options);
        
        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
        if options.text then
            self:addStaticText{text=(options.text=="") and "Show details for: " or options.text}
        end
        local cb = self:addComboBox{prop=1, flags=wx.wxALL, choices=options.choices or {},tip=options.tip,size=options.cbsize}
 
        local prov = self:createProvider{simplemap=options.simplemap,simplemapname=options.simplemapname,vectorname=options.vectorname,vector=options.vector,selector=cb,autoCreate=options.autoCreate,parent=options.parent}
        if not options.noProvider then 
            self:setDefaultProvider(prov) -- use this combobox as the entries provider
        end
        
        local butHandler = function(intf,event,actionName)
            --local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
            
            -- prepare the data for the real event handler:
            local list = cb;
            
            local val = list:GetStringSelection()
            local selId = list:GetSelection()            
            
            local data = {
                id=selId, -- here we provide an additional id field to specify the item to be removed.
                value=val,
                provider=prov,
                item=prov:getCurrentItem(),
                action=actionName,
                intf=self
            }
            
            if options.actionHandler then
                options.actionHandler(data) 
            end       
        end
        
        
        -- the bitmap buttons for the available actions:
        if options.actionHandler then
            local actions = options.actions or {}
            for k,act in ipairs(actions) do
                local ctrl, istool = self:addBitmapButton{src=act.src or act.name,name=act.name,size=options.size,right=act.right,handler=butHandler,border=1,flags=wx.wxALIGN_CENTER_VERTICAL};
                if not istool then
                    ctrl:SetName(act.name);
                end
            end
        end

        self:popSizer() 
        
        --self:popSizer()
        return cb;
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
