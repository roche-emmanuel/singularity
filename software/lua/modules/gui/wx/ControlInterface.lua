local Class = require("classBuilder"){name="ControlInterface",bases="gui.wx.BasicInterface"};

local im = require "gui.wx.ImageManager"
local utils = require "utils"
local wx = require "wx"
local winman = require "gui.wx.WindowManager"

wx.wxDefaultPosition = wx.wxPoint(-1,-1);
wx.wxDefaultSize = wx.wxSize(-1,-1);
wx.wxDefaultValidator = wx.wxValidator();

-- This class provides functions to add wx controls.
function Class:initialize(options)
	 
end

function Class:addControl(ctrl,options)
    if self:isToolbar() then
        local obj = ctrl:dynCast("wxControl");
        if obj then
            self:getRootWindow():AddControl(obj);
        else
            self:warn("Ignoring non-wxControl object for ToolBar interface. Object type is: ",utils.typeEx(obj));
        end
    else
    	--self:info("Adding new control to current sizer.")
        self:getCurrentSizer():Add(ctrl,options.prop or 0,options.flags or wx.wxALL,options.border or 2);
        self:addLicensedItem(ctrl,options.right)
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

function Class:pushPanel(options)
    self:debug3("Building an panel parent")
    local parent = self:getCurrentParent()
    self:check(parent,"Invalid parent object")
    local panel = wx.wxPanel(self:getCurrentParent(),options.id or wx.wxID_ANY);
    self:addControl(panel,options)
    
    -- assign a sizer to this panel:
    local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
    panel:SetSizer(sizer)
    self:pushParent(panel,sizer)
    return panel
end

function Class:addStaticText(options)
	--self:info("Adding static text.")
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxStaticText.")
    local ctrl = wx.wxStaticText(self:getCurrentParent(),wx.wxID_ANY,options.text);
    if options.font then
    	ctrl:SetFont(options.font);
    end
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    return self:addControl(ctrl,options)
end

function Class:addStaticLine(options)
    local ctrl = wx.wxStaticLine(self:getCurrentParent(),wx.wxID_ANY);       
    options.flags = options.flags or wx.wxALL+wx.wxEXPAND
    return self:addControl(ctrl,options)
end

function Class:addStaticBitmap(options)
    self:check(options and options.bitmap,"A valid 'bitmap' entry is needed to build a wxStaticBitmap.")
    local ctrl = wx.wxStaticBitmap(self:getCurrentParent(),wx.wxID_ANY,options.bitmap);       
    options.flags = options.flags or 0
    return self:addControl(ctrl,options)
end

function Class:addSlider(options)
    options = options or {}
    local ctrl = wx.wxSlider(self:getCurrentParent(),options.id or wx.wxID_ANY,0,0,options.range or 10000);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_SCROLL_CHANGED,options.handler)  --THUMBRELEASE
    end     
    return self:addControl(ctrl,options)
end

function Class:addButton(options)
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxButton.")
    local ctrl = wx.wxButton(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_BUTTON_CLICKED,options.handler)
    end        
    return self:addControl(ctrl,options)
end

function Class:addHyperlinkCtrl(options)
    local ctrl = wx.wxHyperlinkCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text,options.url,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHL_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_HYPERLINK,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addHTMLWindow(options)
    local ctrl = wx.wxHtmlWindow(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHW_SCROLLBAR_NEVER);       
    options.flags = options.flags or wx.wxALL
    return self:addControl(ctrl,options)
end
    
function Class:addTextCtrl(options)
    local ctrl = wx.wxTextCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxTE_RICH2,options.validator or wx.wxDefaultValidator);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.font then
    	ctrl:SetFont(options.font);
    end
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_TEXT_UPDATED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addSpinCtrl(options)
    local ctrl = wx.wxSpinCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.defaultValue.."",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxSP_ARROW_KEYS,options.range[1],options.range[2]);
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_SPINCTRL_UPDATED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
    
function Class:addFilePickerCtrl(options)
    local ctrl = wx.wxFilePickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a file", options.wildcard or "*.*",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxFLP_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_FILEPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
      
function Class:addDirPickerCtrl(options)
    local ctrl = wx.wxDirPickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a folder",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxDIRP_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_DIRPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
    
function Class:addColorCtrl(options)
    local ctrl = wx.wxColourPickerCtrl(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxGREEN,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxCLRP_USE_TEXTCTRL)
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COLOURPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addMediaCtrl(options)
    local ctrl = wx.wxMediaCtrl(self:getCurrentParent(),wx.wxID_ANY);       
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_MEDIA_STATECHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addListBox(options)
    options = options or {}
    local ctrl = wx.wxListBox(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_EXTENDED);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,options.handler)
    end
    return self:addControl(ctrl,options)
end
 
 function Class:addCheckListBox(options)
    options = options or {}
    options.prop = options.prop or 1
    options.flags = options.flags or wx.wxEXPAND+wx.wxALL;
    local ctrl = wx.wxCheckListBox(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_SINGLE);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,options.handler)
    end
    return self:addControl(ctrl,options)
end
    
function Class:addRadioBox(options)
    self:check(options and options.text, "a valid 'text' entry is required to build a wxRadioBox.")
    local ctrl = wx.wxRadioBox(self:getCurrentParent(),wx.wxID_ANY,options.text,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},0,options.style or wx.wxRA_SPECIFY_ROWS);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_RADIOBOX_SELECTED,options.handler)
    end
    return self:addControl(ctrl,options)
end
    
function Class:addComboBox(options)
    options = options or {}
    local ctrl = wx.wxComboBox(self:getCurrentParent(),options.id or wx.wxID_ANY,options.choices and options.choices[1] or "",wx.wxDefaultPosition,options.size or wx.wxSize(-1,20),options.choices or {},options.style or wx.wxCB_DROPDOWN+wx.wxCB_READONLY);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COMBOBOX_SELECTED,options.handler)
    end
    return self:addControl(ctrl,options)
end
    
function Class:addListCtrl(options)
    options = options or {}
    local ctrl = nil
    if options.style and bit.band(options.style,wx.wxLC_VIRTUAL) ~= 0 then
        self:no_impl();
        --self:check(options.callback,"A valid 'callback' entry must be provided to create a virtual listctrl.")
        -- create a virtual list ctrl object
        --ctrl = giDisplay.LuaVirtualListCtrl(wx2intro(self:getCurrentParent()),wx.wxID_ANY,this_env,options.style);
        --registerVirtualListCtrlFunction(ctrl,options.callback)
        --ctrl:setItemCount(options.count or 0)
        -- convert the control into a regular wx window:
        --ctrl = intro2wx(ctrl):DynamicCast("wxListCtrl")
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
            imglist:Add(im:getBitmap{name=v,size=butsize})
        end
        ctrl:AssignImageList(imglist,wx.wxIMAGE_LIST_SMALL) --wxIMAGE_LIST_NORMAL);
    end
    
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LIST_ITEM_ACTIVATED,options.handler)
    end 
    
    return self:addControl(ctrl,options)
end

function Class:pushWizard(options)
    self:debug3("Building a Wizard")
    local parent = options.parent or winman:getMainFrame();
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

function Class:pushWizardPage(options)
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

function Class:runWizard()
    --ensure the wizard pages are properly chained:
    local pages = self.wiz_pages or {};
    if #pages == 0 then
        self:error("No page in wizard!");
        return;
    end

    for i=2,#pages do 
        wx.wxWizardPageSimple.Chain(pages[i-1],pages[i]);
    end
    
    local wiz = self:getCurrentParent()
    
    wiz:RunWizard(pages[1]);
    wiz:Destroy();
    self:popParent()
    self.wiz_pages = nil;
end
    
function Class:pushCollapsiblePanel(options)
    self:debug3("Building an callpsible panel parent")
    if options.topline then
        -- Add a top horizontal line to the previous parent:
        self:addStaticLine(options);
    end
    
    -- Here we add the body of the collapsable panel:
    -- prepare the bitmaps to use:
    local extendbmp = im:getBitmap{name="arrow_extend",size=10};
    local collapsebmp = im:getBitmap{name="arrow_collapse",size=10};
    
    -- first we have the main line on the previous parent:
    self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
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
        
        -- this is a tweak needed in to force the update of the collapsible panel in NG3DV
        self:warn("We might need to fix the frame size here ???")
        --local size = self.frame:GetSize()
        --local pos = self.frame:GetPosition()
        --self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight()+1);
        --self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight());
        
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

        
return Class
