local Class = require("classBuilder"){name="BasicWindow",bases={"base.Object","gui.wx.HandlerConnector"}};

local wx = require "wx"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:check(options and options.parent, "A valid parent is needed to build a basic window.")
	self._parent = options.parent
	--self._flags = options.flags or wx.wxEXPAND
	--self._prop = options.prop or 1
end

function Class:createPanel(options)
	local args = {}
	if options.wrapper then
		table.insert(args, options.wrapper)
	end
	if options.parent then
		table.insert(args, options.parent)	
		table.insert(args, wx.wxID_ANY)	
	end
	
	local panel = wx.wxPanel:new(unpack(args))
    local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
    panel:SetSizer(sizer)
	
	-- We should not add the panel here, instead we let the Control interface handle that part with addControl().
	--if options.parent then
	--	self:getOrCreateSizer(options.parent):Add(panel,options.prop or self._prop,options.flags or self._flags,options.border or 0);
	--end
	
	return panel
end

function Class:getOrCreateSizer(window)
	local sizer = window:GetSizer()
	if not sizer then 
		sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
		window:SetSizer(sizer)
	end	
	
	return sizer;
end

function Class:getWindow()
	return self._window;
end

function Class:delete()
	self:info("Deleting ", self._CLASSNAME_, " object. Disconnecting handlers.")
	self:disconnectHandlers()
end

return Class
