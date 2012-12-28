local Class = require("classBuilder"){name="OSGTestApp",bases="gui.wx.SimpleApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize()
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame()}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	local ctrl, canvas = intf:addOSGCtrl{}
	intf:popParent(true)

	self:getFrame():Layout()
	self._canvas = canvas;
end

function Class:loadModel(filename)
	local node = tools:loadModel(fs:getRootPath(true) .. filename)
	
	local mt = osg.MatrixTransform()
	mt:addChild(node)
	
	self._canvas:getRoot():addChild(mt)
	self._canvas:home()
	return mt
end

function Class:createCube(size)
	local cube = osg.Box(osg.Vec3f(0.0,0.0,0.0),size)
	local drawable = osg.ShapeDrawable(cube,nil)
	local geode = osg.Geode()
	geode:addDrawable(drawable)

	self._canvas:getRoot():addChild(geode)
	self._canvas:home()
	return geode	
end

function Class:createAnimationPath(radius, duration )
	local path = osg.AnimationPath();
	path:setLoopMode(osg.AnimationPath.LOOP)
	    
    local numSamples = 32;
    local delta_yaw = 2.0 * math.pi/(numSamples - 1.0);
    local delta_time = duration / numSamples;
    for i=0,numSamples-1 do
        local yaw = delta_yaw * i;
        local pos = osg.Vec3f(math.sin(yaw)*radius, math.cos(yaw)*radius, 0.0);
        local rot = osg.Quat( -yaw, osg.ZAXIS );
        path:insert( delta_time * i, osg.AnimationPath.ControlPoint(pos, rot) );
    end
	
    return path;    
end

return Class -- return class instance.
