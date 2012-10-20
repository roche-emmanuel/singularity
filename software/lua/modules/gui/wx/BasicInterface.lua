local Class = require("classBuilder"){name="BasicInterface",
  bases={"gui.EventHandler"}};

local wx = require "wx"

local evtman = require "gui.EventManager"
local winman = require "gui.wx.WindowManager"

local Vector = require "std.Vector"
local LicensedItem = require "gui.wx.LicensedItem"

wx.wxInitAllImageHandlers() -- init all image handlers.

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self._sizerStack = Vector() -- stack of sizers.
	self._parentStack = Vector() -- stack of parent windows.
	self._licensedObjects = Vector() 
	self._root =  options.root
	if self._root then
		local sizer = self._root:GetSizer()
		if not sizer then
			self:info("Auto creating sizer for interface root.")
			sizer = wx.wxBoxSizer(wx.wxVERTICAL)
			self._root:SetSizer(sizer)
		end
		self:pushParent(self._root,sizer)
	end
	evtman:addListener("LicenseChanged",self)
end

function Class:uninitialize()
	evtman:removeListener("LicenseChanged",self)
end

-- Called to update the interface when the current license is changed.
function Class:onLicenseChanged()     
    for _,obj in self._licensedObjects:sequence() do
		obj:checkVisibility()
    end
end

function Class:show(enabled)
    --if(enabled) then
    --    self:updateProviders()
    --    self:updateEntries()
    --end
    winman:togglePane(self,enabled)
end

function Class:getPaneInfo()
	self:no_impl()
end

-- Retrieve the root window for this interface.
function Class:getRootWindow()
	self:no_impl();
	return nil;
end

-- should return true if this interface is built as a toolbar
function Class:isToolbar() 
	return false;
end

function Class:addLicensedItem(item,right)
    if item and right then
       self._licensedObjects:push_back(LicensedItem{item=item,sizer=self:getCurrentSizer(),visible=true,right=right})
    end
end

function Class:addLicensedPage(page,right)
	self:no_impl()
end

function Class:layout()
	self:check(self._sizerStack,"Invalid sizer stack.")
    for _, sizer in self._sizerStack:sequence() do
        sizer:Layout()
    end
    --for _, parent in self._parentStack:sequence() do
    --    parent:Layout()
    --end
end

-- Retrieve the current sizer on the top of the stack.
function Class:getCurrentSizer()
	self:check(self._sizerStack,"Invalid sizer stack.")
    return self._sizerStack:back()
end
    
function Class:getCurrentParent()
    if self:isToolbar() then
        return self:getRootWindow()
    end
	
	self:check(self._parentStack,"Invalid parent stack.")
    return self._parentStack:back()    
end

function Class:popSizer()
    return self._sizerStack:pop_back()  
end

function Class:popParent(andSizer)
	local sizer = andSizer and self:popSizer()
    return self._parentStack:pop_back(), sizer  
end

-- helper function to push a new sizer on the stack:
function Class:pushSizer(options)
    --has no effect with toolbars:
    if self:isToolbar() then
        return;
    end
    
    local sizer;
    local orient = options.orient
    local prop = options.prop or 0
    local flags = options.flags or wx.wxALL
    local border = options.border or 2
    if options.text then
        self:check(options.orient,"Invalid orientation")
        -- create a statictext box sizer:
        sizer = wx.wxStaticBoxSizer(orient,self:getCurrentParent(),options.text);
    elseif options.nrows and options.ncols then
        sizer = wx.wxFlexGridSizer(options.nrows, options.ncols, options.vgap or 0, options.hgap or 0)
        if options.growables then
            for k,v in ipairs(options.growables) do
                sizer:AddGrowableCol(v[1],v[2])
            end
        end
    else
        self:check(options.orient,"Invalid orientation")
        sizer = wx.wxBoxSizer(orient)
    end
    
    self:addLicensedItem(sizer,options.right) -- it's OK to consider the sizer as a regular control here.

    self:getCurrentSizer():Add(sizer,prop,flags,border);
    self:pushSizerObject(sizer)
end

function Class:pushSizerObject(sizer)
    self:check(self._sizerStack,"Invalid sizer stack.")
    self:check(sizer,"Invalid sizer object.")
    self._sizerStack:push_back(sizer)
end

function Class:pushParent(parent,sizer)
    self:check(self._parentStack,"Invalid parent stack.")
    self:check(parent,"Invalid parent object.")
    self._parentStack:push_back(parent)
    
    if sizer then
        self:pushSizerObject(sizer)
    end
end

function Class:connectHandler(ctrl,eventType,func,id,data)
    self:check(ctrl,"Invalid control in connectHandler")
    self:check(eventType,"Invalid event type in connectHandler")
    self:check(func,"Invalid event handler in connectHandler")
    
    ctrl:connect(id or wx.wxID_ANY,eventType,function(event) 
    	local className = event:GetClassInfo():GetClassName()
    	self:info("Casting event to class: ",className)
    	event = event:dynCast(className)
    	self:check(event,"Invalid event after cast to ",className)
    	func(self,event,data) 
	end)
end

function Class:addSpacer(options)
    -- Has no effect on toolbars:
    if self:isToolbar() then
        return;
    end
    
    self:check(options and (options.size or options.prop),"A valid 'size' or 'prop' entry is needed to build a spacer.")
    if options.prop then
        self:getCurrentSizer():AddStretchSpacer(options.prop)
    else
        self:getCurrentSizer():AddSpacer(options.size)
    end
end

return Class
