local Class = require("classBuilder"){name="JoystickPanel",bases="gui.wx.InterfaceComponent"};

function Class:buildComponent(intf)

	self._panel = intf:pushPanel{flag=0,prop=0}
	intf:popParent(true)
	
	-- Prepare the joystick:
	local joy = wx.wxJoystick()
	self._joystick = joy
	--self:info("Joystick name is: ",joy:GetProductName())
	self:info("Num buttons ",joy:GetNumberButtons())
	
	joy:SetCapture(self._panel);
	intf:connectHandler(self._panel,wx.wxEVT_JOY_BUTTON_DOWN,"onButtonPressed")
	intf:connectHandler(self._panel,wx.wxEVT_JOY_BUTTON_UP,"onButtonReleased")
	intf:connectHandler(self._panel,wx.wxEVT_JOY_MOVE,"onMove")
	intf:connectHandler(self._panel,wx.wxEVT_JOY_ZMOVE,"onZMove")
end

function Class:onButtonPressed(intf,event)
	self:info("Joystick button pressed.")
end

function Class:onButtonReleased(intf,event)
	self:info("Joystick button released.")
end

function Class:onMove(intf,event)
	self:info("Joystick moved.")
end

function Class:onZMove(intf,event)
	self:info("Joystick Z moved.")
end

return Class 
