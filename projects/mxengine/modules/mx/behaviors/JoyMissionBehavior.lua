local Class = require("classBuilder"){
name="JoyMissionBehavior",bases="gui.sdl.JoystickBehavior"};

local Enums = require "mx.Enums"
local sdl = require "SDL"

function Class:initialize()
	self._pos = osg.Vec2f();
	
	-- Steering mode selection:
	self:addAction{Class.BUTTON_PRESSED,4,action=function(joy,val)
		self:setSteeringMode(Enums.STEERING_FORWARD)
	end}
	self:addAction{Class.BUTTON_PRESSED,1,action=function(joy,val)
		self:setSteeringMode(Enums.STEERING_STOW)
	end}
	self:addAction{Class.BUTTON_PRESSED,2,action=function(joy,val)
		self:setSteeringMode(Enums.STEERING_MANUAL)
	end}
	self:addAction{Class.BUTTON_PRESSED,3,action=function(joy,val)
		self:setSteeringMode(Enums.STEERING_AUTO)
	end}
	
	
	-- Gimbal control:
	self:addAction{Class.AXIS_MOVED,3,action=function(joy,val)
		self._pos:set(val,self._pos:y())
		self:setSlewPosition(joy:isButtonPressed(7))
	end}
	self:addAction{Class.AXIS_MOVED,4,action=function(joy,val)
		self._pos:set(self._pos:x(),-val)
		self:setSlewPosition(joy:isButtonPressed(7))
	end}
	
	-- video control:
	self:addAction{Class.HAT_PRESSED,1,dir=sdl.SDL_HAT_LEFT,action=function(joy,val)
		self:setVIC("EOW")
	end}
	self:addAction{Class.HAT_PRESSED,1,dir=sdl.SDL_HAT_UP,action=function(joy,val)
		self:setVIC("IR")
	end}
	self:addAction{Class.HAT_PRESSED,1,dir=sdl.SDL_HAT_RIGHT,action=function(joy,val)
		self:setVIC("EON")
	end}
	self:addAction{Class.HAT_PRESSED,1,dir=sdl.SDL_HAT_DOWN,action=function(joy,val)
		self:setNextSubVIC()
	end}
	
end

function Class:addAction(options)
	local raction = options.action
	
	-- only perform the action if the turret is value:
	options.action = function(joy,...)
		if self._turret then
			return raction(joy,...)
		end
	end
	
	self.super.addAction(self,options)
end

function Class:setSteeringMode(sm)
	self._turret:getGimbal():setCurrentSteeringMode(sm)
end

function Class:setVIC(sname)
	local src = self._turret:getSensor(sname)
	if not src then
		self:warn("Sensor ",sname," is not available.")
		return
	end
	
	self._turret:setVIC(src:getID())
end

function Class:setNextSubVIC(sname)
	local vic = self._turret:getVIC()
	self:check(vic,"Invalid VIC")
	
	local num = vic:getNumCameras()
	if num > 1 then
		-- only do anything if we can have multiple sub vics:
		local id = vic:getCameraIndex(vic:getSubVIC())
		id = id+1
		vic:setSubVIC(id==num and 0 or id);
	end
end

function Class:setSlewPosition(precise)
	local pos = osg.Vec2f(self._pos:x(),self._pos:y())*(precise and 0.3 or 1.0)
	if pos:length() > 1 then
		pos:normalize();
	end
	self._turret:getGimbal():setSlewPosition(pos)
end

function Class:setTurret(turret)
	self._turret = turret
end

return Class

