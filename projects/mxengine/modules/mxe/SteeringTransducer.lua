local Class = require("classBuilder"){name="SteeringTransducer",bases={"gui.wx.BasicWindow","base.EventHandler"}};

local wx = require "wx"

local Event = require "base.Event"

--[[
Class: mxe.SteeringTransducer

Simple implementation of a steering transducer interface.

This class inherits from <gui.wx.BasicWindow> and <base.EventHandler>.
]]

--[=[
--[[
Constructor: SteeringTransducer

Create a new instance of the class.
]]
function SteeringTransducer(options)
]=]
function Class:initialize(options)
	self:debug4("Initializing Steering Transducer.")
		
	-- create a simple window:
	local win = wx.wxWindow:new(self._parent,wx.wxID_ANY)
	self._window = win
	
	local size = 250
	win:SetMinSize(wx.wxSize(size,size))
	win:SetMaxSize(wx.wxSize(size,size))
	
	local im = require "gui.wx.ImageManager"
	
	self._slewBmp = im:getBitmap{"control_slew",size=50}
	
	-- connect erase background handler:
	self:connectHandler(win,wx.wxEVT_ERASE_BACKGROUND,function(intf,event)
		-- do nothing here.
	end)
	
	-- Connect the paint handler
	self:connectHandler(win,wx.wxEVT_PAINT,function(intf,event)
		-- paint in red for now:
		-- self:info("Drawing control...")
		
		local dc = wx.wxPaintDC(win);
	
		local size = dc:GetSize()
		dc:SetBrush(wx.wxBrush(wx.wxColour(255,0,0,255)))
		dc:DrawRectangle(0, 0, size:GetWidth(), size:GetHeight());
		
		-- draw circles from the center:
		local xc=math.floor(size:GetWidth()/2.0 + 0.5)
		local yc=math.floor(size:GetHeight()/2.0 + 0.5)
		
		local maxRadius = math.max(math.min(xc,yc)-10,0.0)
		
		dc:SetPen(wx.wxPen(wx.wxColour(0,0,255),2,wx.wxPENSTYLE_DOT)) 
		dc:SetBrush(wx.wxTRANSPARENT_BRUSH)
		
		for _,ratio in ipairs{0.25,0.33,0.75} do
			dc:DrawCircle(xc,yc,math.floor(maxRadius*ratio+0.5))
		end
		
		dc:DrawBitmap(self._slewBmp,0,0,false)
		
		dc:delete()
	end)
	
	self:debug4("Steering Transducer created.")
end

return Class
