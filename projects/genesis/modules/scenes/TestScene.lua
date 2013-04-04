local Class = require("classBuilder"){name="TestScene",bases="genesis.scene.Scene"};

local osg = require "osg"
local tools = require "osg.Tools"

-- This class is a simple test scene with default osg objects
-- and no platform registered.
function Class:initialize(options)

end

-- This class is meant to be used as extension on a OSGCanvas instance.
function Class:loadModel(filename)
	local node = tools:loadModel(fs:getRootPath(true) .. filename)
	
	local mt = osg.MatrixTransform()
	mt:addChild(node)
	
	-- canvas methods:
	self:getRoot():addChild(mt)
	return mt
end

function Class:createCube(size)
	local cube = osg.Box(osg.Vec3f(0.0,0.0,0.0),size)
	local drawable = osg.ShapeDrawable(cube,nil)
	local geode = osg.Geode()
	geode:addDrawable(drawable)

	self:getRoot():addChild(geode)
	return geode	
end

function Class:createCircleAnimationPath(radius, duration )
	local path = osg.AnimationPath();
	path:setLoopMode(osg.AnimationPath.LOOP)
	    
    local numSamples = 32;
    local delta_yaw = 2.0 * math.pi/(numSamples - 1.0);
    local delta_time = duration / numSamples;
    for i=0,numSamples-1 do
        local yaw = delta_yaw * i;
        local pos = osg.Vec3d(math.sin(yaw)*radius, math.cos(yaw)*radius, 0.0);
        local rot = osg.Quat( -yaw, osg.ZAXIS );
        path:insert( delta_time * i, osg.AnimationPath_ControlPoint(pos, rot) );
    end
	
    return path;    
end

function Class:applyCircleAnimation(model, radius, dur)
	local apcb = osg.AnimationPathCallback();
	apcb:setAnimationPath( self:createCircleAnimationPath(radius, dur));
	model:setUpdateCallback( apcb );
end

function Class:applyCircleAnimation2(model, radius, dur)
	model:setUpdateCB( function(node,nv)
		local angle = nv:getFrameStamp():getReferenceTime()*math.pi*2.0/dur;
		
		-- local pos = osg.Vec3d(radius*math.cos(angle),radius*math.sin(angle),0.0)
		local pos = osg.Vec3d(2.0,radius*math.sin(angle),0.0)
		--local att = osg.Quat(angle,osg.ZAXIS)
		local att = osg.Quat();
		model:setMatrix(osg.Matrixd.rotate(att)*osg.Matrixd.translate(pos))
		
		-- self:info("Setting model matrix to: ",model:getMatrix())
	end	);
end

function Class:createBase(options)
	local base = tools:createQuad()
	self:getRoot():addChild(base)
end

return Class
