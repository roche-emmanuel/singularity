local Class = require("classBuilder"){name="SimpleApp",bases="base.Object"};

local wx = require "wx"

local i18n = require "i18n"
local cfg = require "config"
local evtman = require "gui.EventManager"

--- Initialize the mainframe display:
function Class:initialize(options)
	self:debug4("Initializing mainframe.")
	
	self._eventManager = evtman
	
	-- create the mainframe:
    self._frame = wx.wxFrame:new( nil,            -- no parent for toplevel windows
                wx.wxID_ANY,          -- don't need a wxWindow ID
                i18n.mainframe_title,-- caption on the frame
                wx.wxPoint(-1,-1), -- let system place the frame
                wx.wxSize(450, 450),  -- set the size of the frame
                wx.wxDEFAULT_FRAME_STYLE ) -- use default frame styles
                
	-- Display mainframe:
	self._frame:Show(true)
	
	-- Set this frame as master application frame:
	wx.wxGetApp():SetTopWindow(frame)
    wx.wxGetApp():SetExitOnFrameDelete(true)
    
    self._frame:connect(wx.wxID_ANY,wx.wxEVT_CLOSE_WINDOW,function(event)
		self._eventManager:fireEvent("AppClosing")
		self:debug("Destroying mainframe."); 
		self._frame:Destroy(); 
	end)
	
	self:debug("Mainframe initialization done.")
end

function Class:getFrame()
	return self._frame
end

function Class:run()
	-- run the application event loop:
	self:debug4("Running application event loop...")
	wx.wxGetApp():MainLoop();
	self:debug4("Application event loop done.")
end

return Class -- return class instance.
