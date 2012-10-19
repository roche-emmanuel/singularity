module("general.guimanager",package.seeall)

require("general","general.gui")

-- this is a library of common functions used in the other gui modules:

local proj = this_env:getProject(); -- the current project, used is some of the following methods.
local settings = proj:readAny("settings",giScript.AnyMap());
numFormat = "%.6f";

findItem = function(vector,name)
    local num = vector:getNumItems()
    
    for i=0,num-1 do
           local item = vector:get(i)
           if item:get("name") == name then
                return item,i;
           end
    end
    
    -- item not found:
    return;
end

-- Method call each time we need to apply the parameter change to the simulation:
updateParameter = function(interface,name,val)
    local func = interface.funcs[name]
    local list = interface.list
    if list then
        local itemName = list:GetStringSelection();  
        local items = interface.items;
        local itemKey = interface.itemKey
        
        local obj = findItem(items,itemName)
        obj:set(name,val)
        if func then
            func(itemName,val)
        end
    else
        -- We have no list of objects, just project level settings:
        if interface.currentProjSettings and interface.currentProjSettings[name] then
            local currentProj = giProject.ProjectManager.getCurrentProject()
            local currentSettings = currentProj:readAny(interface.mapName,giScript.AnyMap());            
            currentSettings:set(name,val)
        else
            settings:set(name,val)
        end
        if func then
            func(name,val)
        end
    end 
end

-- this method is called when the user clicks on the "close box" on any of the interfaces:
function closeFrame(frame)
    frame:Show(false);
end

getParamDesc = function(interface,name)
    for k,v in pairs(interface.options.params) do
        if v.name == name then
            return v;
        end
    end
end

-- this method is called to update the content of the main list on each setting interface (list of antennas, of navaid objects, clouds, etc)
function updateMainList(interface)
    local list = interface.list
    local items = interface.items
        
    list:Clear();
    local num = items:getNumItems()
    local count = 0;
    for i=0,num-1 do
        local obj = items:get(i)
        local enabled = obj:get("enabled",false)
        if enabled then
            local name = obj:get("name")
            if name then
                list:Append(name);
                count = count+1
            end
        end
    end

    if count > 0 then
        list:SetSelection(count-1);
    end

    -- We also update the currently display parameters:
    updateParameters(interface);
end

setListCtrlItems = function(interface,name,obj)
    local listctrl = interface.gui[name].listctrl
    
    listctrl:Freeze();
    listctrl:DeleteAllItems()
    local items = obj:get("cp",giScript.AnyVector());
    local mode = obj:get("cpMode","radius/theta");
    
    local item = wx.wxListItem()
    
    
    if mode == "radius/theta" then
        -- set Radius/theta columns:
        item:SetText("Radius (nm)")
        listctrl:SetColumn(2,item)
        item:SetText("Theta (deg)")
        listctrl:SetColumn(3,item)    
    else
        -- set Lon/lat columns:
        item:SetText("Longitude (deg)")
        listctrl:SetColumn(2,item)
        item:SetText("Latitude (deg)")
        listctrl:SetColumn(3,item)
    end
    
    local count = 0;
    -- the items object is a vector of vectors
    local num = items:getNumItems();
    for i=0,num-1 do
        local obj = items:get(i)
        local num2 = obj:getNumItems()
        local id = 0.0;
        for j=0,num2-1 do
            if j == 0 then
                id = listctrl:InsertItem(count,obj:get(j))
                count = count +1;
            else
                listctrl:SetItem(id,j,string.format("%.6f",obj:get(j)));
            end
        end
    end
    
    listctrl:Thaw();

    --for i=0,4 do
    --    listctrl:setColumnWidth(
    --end
end

-- Method to update the displayed value of each parameter depending on the currently selected item in the main list of the given interface.
function updateParameters(interface)
    local list = interface.list
    local gui = interface.gui
    local ranges = interface.ranges
    local itemKey = interface.itemKey
     local items = interface.items
     local findFunc = interface.findFunc
     local defaults = interface.defaults or {}
     local cSets = interface.currentProjSettings or {}
     
    -- Retrieve the current selection in the list:
    local selection = 0
    
    if list then
        selection = list:GetCurrentSelection();
        selectionName = list:GetStringSelection();
    end
    
    if selection == -1 then
        -- we disable the controls:
        for k,v  in pairs(gui) do
            if v.textctrl then
                v.textctrl:SetValue("Not set");
                v.textctrl:Disable();
            end
            if v.checkbox then
                v.checkbox:SetValue(false);
                v.checkbox:Disable();
            end
            if v.button then
                v.button:Disable();
            end
            if v.slider then
                v.slider:SetValue(0);
                v.slider:Disable();
            end
            if v.combobox then
                v.combobox:Disable();
            end
            if v.colorpicker then
                v.colorpicker:Disable();
            end
            if v.listctrl then
                v.listctrl:DeleteAllItems();
                v.listctrl:Disable();
            end
            if v.radiobox then
                v.radiobox:Disable();
            end
        end
        return;
    end

    -- We enable the controls 
    -- And we update the parameter values: (all the values are doubles for now)
    local obj
    if items and findFunc then
        obj = findFunc(selectionName)
    else
        obj = settings
    end
        
    local currentProj = giProject.ProjectManager.getCurrentProject()
    local currentSettings = currentProj:readAny(interface.mapName,giScript.AnyMap());            
    
    for k,v  in pairs(gui) do
        local range = ranges[k];
        if v.textctrl then
            local val = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and range[1]) or defaults[k]); --(cSets[k] and currentSettings or obj):get(k,0.0);
            v.textctrl:Enable(true);
            v.textctrl:SetValue(string.format(numFormat,val))
        end
        if v.checkbox then
            local val = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and true) or defaults[k]);
            v.checkbox:Enable(true);
            v.checkbox:SetValue(val);
        end        
        if v.button then
            v.button:Enable(true);
        end        
        if v.slider then
            local val = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and range[1]) or defaults[k]); --(cSets[k] and currentSettings or obj):get(k,range[1]);
            v.slider:Enable(true)
            v.slider:SetValue((val-range[1])/(range[2]-range[1])*10000);
        end
        if v.combobox then
            local txt = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and "") or defaults[k]);
            v.combobox:Enable(true);
            v.combobox:SetStringSelection(txt);
        end
        if v.colorpicker then
            v.colorpicker:Enable(true)
            local val = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and osg.Vec3(0.0,0.0,0.0)) or defaults[k]); --(cSets[k] and currentSettings or obj):get(k,osg.Vec3(0.0,0.0,0.0));
            local col = wx.wxColour(val:x()*255,val:y()*255,val:z()*255)
            v.colorpicker:SetColour(col);
        end
        if v.listctrl then
            v.listctrl:Enable(true)
            --local val = obj:get(k,giScript.AnyVector()); -- val should be a vertor of vector
            setListCtrlItems(interface,k,(cSets[k] and currentSettings or obj))
        end
        if v.radiobox then
            local val = (cSets[k] and currentSettings or obj):get(k,(defaults[k]==nil and "") or defaults[k]);
            v.radiobox:SetStringSelection(val);
        end
    end
    
    if(interface.updateFunc) then
        interface:updateFunc()
    end
end


-- Event handler processing the mouse drag event on a given parameter label.
function labelHandler(interface,event)
    if(event:GetEventObject() == general.gui.pressedLabel) then
        local gui = interface.gui
        local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
        local range = interface.ranges[name]
       
        local delta = (event:GetX() - general.gui.posX)/10.0;
        general.gui.posX = event:GetX()
        delta = delta * 0.00001;
        
        -- check if the value should be of integer type:
        local desc = getParamDesc(interface,name)
        if desc and desc.valType == "int" then
            -- convert the value to int:
            delta = 1.0;
        end 
        
        if event:ControlDown() then
            delta = delta*10;
        end
        if event:ShiftDown() then
            delta = delta*10;
        end
        if event:AltDown() then
            delta = delta*10;
        end
        
        local val = tonumber(gui[name].textctrl:GetValue())
        if not val then
            wx.wxLogError("Invalid number for "..name.." text ctrl.");
            return;
        end

        val = val + delta;

        -- update the slider and the text ctrl:
        gui[name].textctrl:SetValue(""..val)
        gui[name].slider:SetValue((val-range[1])/(range[2]-range[1])*10000)

        -- send the command:
        updateParameter(interface,name,val)
    end
end

-- Event handler processing the slider drag event on a given parameter slider.
function sliderHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    
    local pos = event:GetPosition()/10000.0;
    
    -- convert the value to the corresponding range:
    local range = interface.ranges[name];
    local val = range[1] + (range[2]-range[1])*pos;
    
    -- check if the value should be of integer type:
    local desc = getParamDesc(interface,name)
    if desc and desc.valType == "int" then
        -- convert the value to int:
        val = math.floor(val+0.5);
    end
        
    -- update the text ctrl value:
    local gui = interface.gui
    gui[name].textctrl:SetValue(string.format(numFormat,val));
    
    -- send the command:
    updateParameter(interface,name,val)
end

-- Event handler processing the user pressing enter in the parameter text ctrl
function textCtrlHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    local gui = interface.gui
    
    local val = tonumber(gui[name].textctrl:GetValue());
    if not val then
        wx.wxLogError("Invalid value in "..name.." text ctrl");
        return;
    end
        
    -- check if the value should be of integer type:
    local desc = getParamDesc(interface,name)
    if desc and desc.valType == "int" then
        -- convert the value to int:
        local val2 = math.floor(val+0.5);
        if val2 ~= val then
            wx.wxLogDebug("Updating textctrl value for "..name.." to value of "..val2);
            gui[name].textctrl:SetValue(val2.."")
        end
    end
        
    -- update the slider position:
    local range = interface.ranges[name];
    gui[name].slider:SetValue((val-range[1])/(range[2]-range[1])*10000)
    
    -- send the command
    updateParameter(interface,name,val)
end

-- Event handler processing a selection of color in a color picker.
function colorHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    
    local gui = interface.gui
    local val = gui[name].colorpicker:GetColour();
    local col = osg.Vec3d(val:Red()/255.0,val:Green()/255.0,val:Blue()/255.0);
    
    -- send the command
    updateParameter(interface,name,col)
end

-- Event handler processing a check box event.
function checkHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    
    local gui = interface.gui
    local val = gui[name].checkbox:GetValue();
    
    -- send the command
    updateParameter(interface,name,val)
end

-- Event handler processing a check box event.
function buttonHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()

    local list = interface.list
    local itemName = list:GetStringSelection();  
    
    local func = interface.funcs[name]
    if func then
        func(itemName)
    end
end

-- Event handler called when selecting a string in a combobox
function typeHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    
    local gui = interface.gui
    local val = gui[name].combobox:GetStringSelection();
            
    -- send the command
    updateParameter(interface,name,val)
end

function radioboxHandler(interface,event)
    local name = event:GetEventObject():DynamicCast("wxWindow"):GetName()
    
    local gui = interface.gui
    local val = gui[name].radiobox:GetStringSelection();
            
    -- send the command
    updateParameter(interface,name,val)
end

-- Method called to generate the interface frame the first time we need it:
function genFrame(interface,options)

    if not interface.frame then
        local options = interface.options
 		local style = bit.bor(wx.wxRESIZE_BORDER,wx.wxCAPTION,wx.wxSYSTEM_MENU,wx.wxCLOSE_BOX,wx.wxCLIP_CHILDREN,wx.wxFRAME_FLOAT_ON_PARENT,wx.wxFRAME_TOOL_WINDOW) --wx.wxFRAME_NO_TASKBAR) --)
        local title = options and options.title or "Interface"
        local listLabel = options and options.listLabel or "Items: "
        local params = options and options.params or {}
        local noList = options and options.noList
        local useTabs = options and options.useTabs
        local importFunc = interface.importFunc
        local exportFunc = interface.exportFunc
        local createFunc = interface.createFunc
        local destroyFunc = interface.destroyFunc
          
       -- create the frame window
        interface.frame = wx.wxFrame( wx.wxGetApp():GetTopWindow(), wx.wxID_ANY, title,
                            wx.wxDefaultPosition, wx.wxSize(450, 450),
                            style )

        local frame = interface.frame;
        
		local frameSizer = wx.wxBoxSizer(wx.wxVERTICAL)
		frame:SetSizer(frameSizer)

		-- create a background panel on this frame:
		local panel = wx.wxPanel(frame,wx.wxID_ANY)
		frameSizer:Add(panel,1,wx.wxEXPAND,0)

		-- Add a top sizer on the panel object
		local sizerTop = wx.wxBoxSizer(wx.wxVERTICAL)
		panel:SetSizer(sizerTop)

        -- Add the list of available antennas:
        local s0 = wx.wxBoxSizer(wx.wxHORIZONTAL);
        sizerTop:Add(s0,0,wx.wxEXPAND);
        
        local list = nil;
        local addAntennaBut = nil
        local removeAntennaBut = nil
        
        if not noList then
            local txt1 = wx.wxStaticText(panel,wx.wxID_ANY,listLabel);
            s0:Add(txt1,0,wx.wxALIGN_CENTER_VERTICAL+wx.wxALL,2);

            local style = bit.bor(wx.wxCB_READONLY,wx.wxCB_DROPDOWN,wx.wxCB_SORT);
            local listItems = wx.wxArrayString();
            interface.list = wx.wxComboBox(panel,wx.wxID_ANY,"",wx.wxDefaultPosition,wx.wxDefaultSize,listItems,style);
            list = interface.list
            s0:Add(list,1,wx.wxALIGN_CENTER_VERTICAL+wx.wxALL,2);

            local butSize = 16;

            if createFunc then
                local imgAdd = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/add.png",wx.wxBITMAP_TYPE_PNG);
                imgAdd:Rescale(butSize,butSize,wx.wxIMAGE_QUALITY_HIGH);

                addAntennaBut = wx.wxBitmapButton(panel,wx.wxID_ANY,wx.wxBitmap(imgAdd));
                s0:Add(addAntennaBut,0,wx.wxALL+wx.wxALIGN_CENTER_VERTICAL,1);
                addAntennaBut:SetToolTip("Add a new "..interface.itemKey..".");
            end
            
            if destroyFunc then
                local imgRemove = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/remove.png",wx.wxBITMAP_TYPE_PNG);
                imgRemove:Rescale(butSize,butSize,wx.wxIMAGE_QUALITY_HIGH);

                removeAntennaBut = wx.wxBitmapButton(panel,wx.wxID_ANY,wx.wxBitmap(imgRemove));
                s0:Add(removeAntennaBut,0,wx.wxALL+wx.wxALIGN_CENTER_VERTICAL,1);
                removeAntennaBut:SetToolTip("Remove the last "..interface.itemKey..".");
            end
            
            s0:AddSpacer(5)
            
            if importFunc then
                local imgFile = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/open_file.png",wx.wxBITMAP_TYPE_PNG);
                imgFile:Rescale(butSize,butSize,wx.wxIMAGE_QUALITY_HIGH);

                local fileBut = wx.wxBitmapButton(panel,wx.wxID_ANY,wx.wxBitmap(imgFile));
                s0:Add(fileBut,0,wx.wxALL+wx.wxALIGN_CENTER_VERTICAL,1);
                fileBut:SetToolTip("Load items from file");
                
                fileBut:Connect(wx.wxID_ANY,wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) importFunc(); general.guimanager.updateMainList(interface); end)
            end
            
            if exportFunc then
                local imgFile = wx.wxImage(giCommon.Engine.getRootDir().."data/icons/save_file.png",wx.wxBITMAP_TYPE_PNG);
                imgFile:Rescale(butSize,butSize,wx.wxIMAGE_QUALITY_HIGH);

                local fileBut = wx.wxBitmapButton(panel,wx.wxID_ANY,wx.wxBitmap(imgFile));
                s0:Add(fileBut,0,wx.wxALL+wx.wxALIGN_CENTER_VERTICAL,1);
                fileBut:SetToolTip("Save items to file");
                
                fileBut:Connect(wx.wxID_ANY,wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) exportFunc(); end)
            end

            sizerTop:AddSpacer(1);
        end
        
        local book = nil;
        local tabs = nil
        local s1 = nil
        if useTabs then
            book = wx.wxNotebook(panel,wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize); --,wx.wxNB_NOPAGETHEME);
            sizerTop:Add(book,1,wx.wxEXPAND+wx.wxALL,2);
            tabs = {}
        else
            s1 = wx.wxStaticBoxSizer(wx.wxVERTICAL,panel,"Settings");
            sizerTop:Add(s1,1,wx.wxEXPAND+wx.wxALL,2);        
        end
        
        -- Add the parameters gui:
        for k,v in ipairs(params) do
            local subpanel = panel
            if useTabs and v.tab then
                subpanel = tabs[v.tab]
                if not subpanel then
                    subpanel = wx.wxPanel(book,wx.wxID_ANY);
                    local sizer = wx.wxBoxSizer(wx.wxVERTICAL);
                    subpanel:SetSizer(sizer)
                    tabs[v.tab] = subpanel;
                    subpanel:SetBackgroundColour(panel:GetBackgroundColour()) -- set the grey color.
                    book:AddPage(subpanel,v.tab);
                end
            end
            
            if v.guiFunc == "std" then
                local sliderHandler = nil;
                local tbHandler = nil
                if v.mode=="release" then
                    tbHandler = function(event) general.guimanager.sliderHandler(interface,event) end
                else
                    sliderHandler = function(event) general.guimanager.sliderHandler(interface,event) end
                end
                
                general.gui.addStandardEntry(subpanel,v.name,{caption=v.caption,units=v.units,value="",sizer=s1,
                    labelHandler=function(event) general.guimanager.labelHandler(interface,event) end,
                    slHandler= sliderHandler, thumbHandler= tbHandler,
                    tcHandler=function(event) general.guimanager.textCtrlHandler(interface,event) end,
                    holder=interface.gui})
            end
            if v.guiFunc ==  "combobox" then
                  general.gui.addComboBoxEntry(subpanel,v.name,{caption=v.caption,units=v.units,value="",sizer=s1,
                    cbHandler= function(event) general.guimanager.typeHandler(interface,event) end,
                    choices=v.choices,
                    holder=interface.gui})
            end
            if v.guiFunc ==  "radiobox" then
                  general.gui.addRadioButtonEntry(subpanel,v.name,{caption=v.caption,sizer=s1,
                    radioButtonHandler= function(event) general.guimanager.radioboxHandler(interface,event) end,
                    choices=v.choices,orientation=v.orientation,
                    holder=interface.gui})
            end
            if v.guiFunc == "color" then
                    general.gui.addColorEntry(subpanel,v.name,{caption=v.caption,units=v.units,value="",sizer=s1,
                    colorHandler=function(event) general.guimanager.colorHandler(interface,event) end,
                    choices=v.choices,
                    holder=interface.gui})              
            end
            if v.guiFunc == "check" then
                    general.gui.addCheckBoxEntry(subpanel,v.name,{caption=v.caption,sizer=s1,
                    checkHandler=function(event) general.guimanager.checkHandler(interface,event) end,
                    holder=interface.gui})
            end
            if v.guiFunc == "button" then
                    general.gui.addButtonEntry(subpanel,v.name,{caption=v.caption,sizer=s1,
                    buttonHandler=function(event) general.guimanager.buttonHandler(interface,event) end,
                    holder=interface.gui})
            end
            if v.guiFunc == "panel" then
                    v.func(subpanel,v.name,{sizer=s1,holder=interface.gui,interface=interface})              
            end
        end
        
		frameSizer:SetSizeHints(frame)
		frameSizer:Fit(frame)

           -- Connect the event handler
        frame:Connect(wx.wxEVT_CLOSE_WINDOW, function(event) general.guimanager.closeFrame(event:GetEventObject():DynamicCast("wxWindow")) end)
        
        frame:Connect(wx.wxEVT_SHOW, function(event) if event:GetShow() then general.guimanager.updateParameters(interface); end end)
        
        if noList then
            general.guimanager.updateParameters(interface);
        else
            -- fill up the antenna list:
            general.guimanager.updateMainList(interface);

            local listHandler = function(event)
                updateParameters(interface);
            end
            
            list:Connect(wx.wxID_ANY,wx.wxEVT_COMMAND_COMBOBOX_SELECTED, function(event) listHandler(event) end)

            if createFunc then
                local addHandler = function(event)
                    local items = interface.items
                    local itemKey = interface.itemKey
                    local defaultName = interface.defaultName;
                    local num = items:getNumItems(); -- retrieve the current numer of antenna.
                    
                    local dlg = wx.wxTextEntryDialog(wx.NULL,defaultName.." name: ","Enter a name for the new "..itemKey..":",defaultName.." "..num);

                    if dlg:ShowModal() == wx.wxID_OK then
                        wx.wxLogDebug("Adding item.")
                        
                        local name = dlg:GetValue();

                        -- Add the antenna to the scene:
                       interface.createFunc(name);

                        -- Update the list:
                        updateMainList(interface);
                        wx.wxLogDebug("Item added.")
                    end
                    
                end
                
                addAntennaBut:Connect(wx.wxID_ANY,wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) addHandler(event) end)
            end
            
            if destroyFunc then
                local removeHandler = function(event)
                    local list = interface.list
                    local items = interface.items
                    local num = items:getNumItems(); -- retrieve the current numer of antenna.
         
                    if list:GetCount() == 0 then
                        return;
                    end
                        
                    interface.destroyFunc(list:GetStringSelection());

                    -- Update the list:
                    updateMainList(interface);
                    wx.wxLogDebug("Item removed.")
                end
                
                removeAntennaBut:Connect(wx.wxID_ANY,wx.wxEVT_COMMAND_BUTTON_CLICKED, function(event) removeHandler(event) end)
            end
        end
    end

    -- show the frame window
    interface.frame:Show(true)
end

function updateAUIManager()
    local frame = giDisplay.GreenIsisFrame.instance();
    local book = frame:getMainNotebook();
    local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");
    local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);
    mgr:Update()
end

function getAUIManager()
    local frame = giDisplay.GreenIsisFrame.instance()
    local book = frame:getMainNotebook();
    local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");
    local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);
    return mgr;
end

function registerAUIInterface(interface,project)
    -- check that the frame object is now available:
    if not interface.frame then
        wx.wxLogError("Cannot create the 'frame' object in the interface")
        return;
    end

    -- the frame is available, try to register it on the aui manager:
    local frame = giDisplay.GreenIsisFrame.instance()
    local book = frame:getMainNotebook();
    local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");
    local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);
    
    local pane = mgr:GetPane(interface.paneInfo.name)
    if pane:IsOk() then
        -- need to remove the previous pane first:
        wx.wxLogMessage("Removing old pane "..interface.paneInfo.name);
        local win = pane.window
        mgr:DetachPane(win);
        win:Destroy();
    end
    
    mgr:AddPane(interface.frame,interface.paneInfo)
    
    local pane = mgr:GetPane(interface.paneInfo.name)
    
    -- check if we have some perspective information available for this pane in the app config:
    local str = ""
    local saveInProject = giCommon.Config.readAny("config.save_perspectives_in_project",false)
    if saveInProject and project then
        wx.wxLogVerbose("Loading perspective config from project for pane "..name)
        str = project:readAny("pane_infos",giScript.AnyMap()):get("perspective."..name,"")
    end
    
    if str == "" then
        -- fallback on the app level config anyway.
        str = giCommon.Config.readString("perspective."..interface.paneInfo.name,"")
    end
    
    if str ~= "" then
        -- apply the saved perspective details:
        mgr:LoadPaneInfo(str,pane);

        wx.wxLogVerbose("Loaded perspective details: "..str.." for pane "..interface.paneInfo.name)
    end
    mgr:Update()
    
    -- also register the close function to unload this frame from the manager:
    registerCloseFunction(function()
        local frame = giDisplay.GreenIsisFrame.instance()
        local book = frame:getMainNotebook();
        local wxbook = intro2wx(book):DynamicCast("wxAuiNotebook");
        local mgr = wxaui.wxAuiManager.GetManager(platform~="win32" and intro2wx(frame) or wxbook);

        wx.wxLogMessage("Detaching pane named '"..interface.paneInfo.name.."'")
        local pane = mgr:GetPane(interface.paneInfo.name)
        if not pane:IsOk() then
            wx.wxLogMessage("The AUI pane with name "..interface.paneInfo.name.." doesn't exist anymore.")
        else
            -- before detaching, save the current configuration:
            local str = mgr:SavePaneInfo(pane)
            giCommon.Config.writeString("perspective."..pane.name,str)
            
            -- Now detach:
            mgr:DetachPane(pane.window)
            mgr:Update()
        end
    end,"closeAUIPaneFunc_"..pane.name)
    
    return pane;
end

function registerInterface(interface,project)
	local win = wx.wxGetApp():GetTopWindow()
	local mainframe = win:DynamicCast("wxFrame") -- We know that the window is actually the GreenIsisFrame...	
	local menubar = mainframe:GetMenuBar();
	local menuName = interface and interface.menuName
    interface.mapName = interface.mapName or "settings"
    
    if menuName == "" then
        wx.wxLogError("A name must be provided for the menu.");
        return;
    end
    
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
    
    proj:registerMenuId(menu_id);
    proj:registerMenu(menuName);

    -- Remove the previous item if any:
    local menuItemName = interface.menuItemName
    local menuItemDesc = interface.menuItemDesc
    
    local itemId = projectMenu:FindItem(menuItemName);
    if itemId ~= -1 then
        wx.wxLogMessage("Removing previous menu item.");
        projectMenu:Destroy(itemId);
    end

    -- Add the new item:
    projectMenu:Append(menu_id, menuItemName, menuItemDesc,interface.paneInfo and interface.displayFrame and wx.wxITEM_CHECK or wx.wxITEM_NORMAL)
	
    -- Check if we want to register this interface as a AUI pane:
    if interface.paneInfo and interface.displayFrame then
        -- call the display frame function here to build the frame object:
        interface:displayFrame();
        
        local pane = registerAUIInterface(interface,project)

        -- connect the menu item any way, to toggle the frame on/off:
        mainframe:Connect(menu_id, wx.wxEVT_COMMAND_MENU_SELECTED,function(event) general.guimanager.toggleAUIPane(interface) end)
        
        -- set the current menu item check status to reflect the real status of the pane:
        projectMenu:Check(menu_id,pane:IsShown())
     
    elseif interface.displayFrame then
        -- Extended mechanism to support interface specific construction functions more easily.
        -- Note that the displayFrame function must be implemented as an object function (using the "self" parameter)
        mainframe:Connect(menu_id, wx.wxEVT_COMMAND_MENU_SELECTED,function(event) interface:displayFrame() end)
    else
        mainframe:Connect(menu_id, wx.wxEVT_COMMAND_MENU_SELECTED,function(event) general.guimanager.genFrame(interface) end)
    end
end
