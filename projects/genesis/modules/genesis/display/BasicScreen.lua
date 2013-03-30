local Class = require("classBuilder"){name="GenesisBasicScreen",bases="base.Object"};

local wx = require "wx"

function Class:initialize(options)
	self:debug("Creating Genesis screen.")
	
	local title = options and options.title or "TurretView" 
    self._frame = wx.wxMiniFrame:new( nil, 
                wx.wxID_ANY,          -- don't need a wxWindow ID
                title,-- caption on the frame
                wx.wxPoint(-1,-1), -- let system place the frame
                wx.wxSize(450, 450),  -- set the size of the frame
                wx.wxCAPTION+wx.wxRESIZE_BORDER ) -- use default frame styles

	self:setup(options)
	
	self:getFrame():SetSize(1280,720)
	self:getFrame():Layout()
	
	self:show()
end

function Class:setup()
	-- should be overriden by the child classes.
end

function Class:close()
	self._frame:Close()
end

function Class:getFrame()
	return self._frame
end

function Class:show()
	self._frame:Show(true)
end

return Class 
