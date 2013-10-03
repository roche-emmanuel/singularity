local Class = require("classBuilder"){name="SteeringTransducer",bases={"gui.wx.BasicWindow","base.EventHandler"}};

local wx = require "wx"

local Event = require "base.Event"
local im = require "gui.wx.ImageManager"

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
		
	-- prepare the slew position values:
	-- those position values should be in the range  [-1,1]
	self._pos = osg.Vec2d()
	self._acquired = false
	
	-- create a simple window:
	local win = wx.wxWindow:new(self._parent,wx.wxID_ANY)
	self._window = win
	
	local size = 250
	win:SetMinSize(wx.wxSize(size,size))
	win:SetMaxSize(wx.wxSize(size,size))
	
	local im = require "gui.wx.ImageManager"
	
	self._slewBmp = im:getBitmap{"control_slew",size=50}
	self._slewSize = self._slewBmp:GetWidth()/2.0

			
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
		dc:SetBrush(wx.wxBrush(wx.wxColour(255,255,255,255)))
		dc:DrawRectangle(0, 0, size:GetWidth(), size:GetHeight());
		
		-- draw circles from the center:
		
		local center = self:getCenter()
		local maxRadius = self:getMaxRadius()
		
		dc:SetPen(wx.wxPen(wx.wxColour(0,0,255),2,wx.wxPENSTYLE_DOT)) 
		dc:SetBrush(wx.wxTRANSPARENT_BRUSH)
		
		for _,ratio in ipairs{0.25,0.5,1.0} do
			dc:DrawCircle(center:x(),center:y(),math.floor(maxRadius*ratio+0.5))
		end
			
		-- draw the slew control in the center with a given offset:		
		local pos = self:coordsToWindow(self:getSlewPosition()) - osg.Vec2d(self._slewSize,self._slewSize)
		
		dc:DrawBitmap(self._slewBmp,math.floor(pos:x()+0.5),math.floor(pos:y()+0.5),false)
		
		dc:delete()
	end)
	
	local releaseThumb = function(intf,event)
		-- first reposition the cursor to the current location of the slew control center:
		-- local pos = self:coordsToWindow(self._pos)
		-- win:WarpPointer(math.floor(pos:x()+0.5),math.floor(pos:y()+0.5))
		local pos = self:getCenter()
		win:WarpPointer(pos:x(),pos:y())
		
		self:setSlewPosition(osg.Vec2d(0.0,0.0))
		
		if win:HasCapture() then
			win:ReleaseMouse()
		end
		
		win:SetCursor(wx.wxNullCursor)
		win:Refresh()
	end
	
	-- Handle the lost of capture:
	self:connectHandler(win,wx.wxEVT_MOUSE_CAPTURE_LOST,releaseThumb)

	-- Connect the left down handler:
	self:connectHandler(win,wx.wxEVT_LEFT_DOWN,function(intf,event)
		-- check if we clicked on the slew control:
		-- at the point we should have xpos == ypos == 0.0
		self:check(self:getSlewPosition():length()==0.0 ,"Invalid slew control position in left down event: ",self:getSlewPosition())
		
		local pos = self:windowToCentered(osg.Vec2d(event:GetX(),event:GetY()))
				
		if pos:length() > self._slewSize then
			-- we should not acquire the control, because the user didn't clik on the slew control button.
			return
		end
		
		-- The user clicked on the slew control button so we need to acquire the control:
		-- win:SetCursor(wx.wxCursor(wx.wxCURSOR_BLANK))
		-- self:check(wx.wxCURSOR_BLANK,"Invalid blank cursor index!")
		-- win:SetCursor(wx.wxCursor(wx.wxCURSOR_BLANK))
		win:SetCursor(im:getCursor{name="transparent_cursor",ext="png"})
		win:CaptureMouse()
	end)
	
	self:connectHandler(win,wx.wxEVT_RIGHT_DOWN,function(intf,event)
		if win:HasCapture() then
			self:setSlewPosition(osg.Vec2d(0.0,0.0))
			local cen = self:getCenter()
			win:WarpPointer(cen:x(),cen:y())
			win:Refresh()
		end
	end)

	-- Connect the left up handler:
	self:connectHandler(win,wx.wxEVT_LEFT_UP,releaseThumb)
	
	-- connect the motion handler:
	self:connectHandler(win,wx.wxEVT_MOTION,function(intf,event)
		-- if the mouse is not captured do noting:
		if not win:HasCapture() then
			return
		end
		
		-- The mouse is captured, compute the current coords:
		local pos = self:windowToCoords(osg.Vec2d(event:GetX(),event:GetY()))
		
		if pos:length() > 1.0 then
			-- prevent abovve unity values:
			pos:normalize()
		end
		
		self:setSlewPosition(pos)
		win:Refresh()
	end)

	self:debug4("Steering Transducer created.")
end

--[[
Function: setSlewPosition

Set the current slew position value as an <osg.Vec2d>.
]]
function Class:setSlewPosition(pos)
	self._pos:set(pos:x(),pos:y())
	self:debug3_v("Setting slew position to: ",self._pos)
	
	if self._turret then
		-- if there is a turret assigned then update this slew position:
		self._turret:getGimbal():setSlewPosition(self._pos)
	end
end

--[[
Function: getSlewPosition

Retrieve the current slew position value.
  
Returns:
	An <osg.Vec2d>
]]
function Class:getSlewPosition()
	return self._pos
end

--[[
Function: getCenter

Retrieve the center of the window as integer coords.
  
Returns:
	The center coords as an <osg.Vec2d>
]]
function Class:getCenter()
	local size = self._window:GetClientSize()
	local xc=math.floor(size:GetWidth()/2.0 + 0.5)
	local yc=math.floor(size:GetHeight()/2.0 + 0.5)

	return osg.Vec2d(xc,yc)
end

--[[
Function: getMaxRadius

Get the maximum radius where the slew control center can move the window center in pixels.
]]
function Class:getMaxRadius()
	local center = self:getCenter()
	return math.max(math.min(center:x(),center:y()) - self._slewSize - 5.0,0.0)
end

--[[
Function: coordsToWindow

Convert slew control normalized coords into window pixel coords.
]]
function Class:coordsToWindow(pos)
	return self:getCenter() + osg.Vec2d(pos:x(),-pos:y()) * self:getMaxRadius()
end

--[[
Function: windowToCentered

Convert window coordinates into centered coordinates (but not normalized).
]]
function Class:windowToCentered(pos)
	return pos - self:getCenter()
end

--[[
Function: windowToCoords

Convert window coords into normalized slew control coords.
]]
function Class:windowToCoords(pos)
	local res = self:windowToCentered(pos)/self:getMaxRadius()
	return osg.Vec2d(res:x(),-res:y())
end

--[[
Function: setTargetTurret

Assign a givent turret as target turret for this slew transducer.

Parameters:
	turret - The <mx.Turret> to be assigned as target.
]]
function Class:setTargetTurret(turret)
	if self._turret==turret then
		return -- nothing to do in that case.
	end
	
	if self._turret then
		-- reset the slew position for the previously controlled turret:
		self._turret:getGimbal():setSlewPosition(osg.Vec2d(0.0,0.0))
	end
	
	self._turret = turret
	
	if self._turret then
		-- initialize the current slew position:
		self._turret:getGimbal():setSlewPosition(self:getSlewPosition())
	end
end

return Class
