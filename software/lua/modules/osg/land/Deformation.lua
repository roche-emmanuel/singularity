local Class = require("classBuilder"){name="Deformation",bases="base.Object"};

require "osg"
require "sgtLand"

SceneManager = require "osg.land.SceneManager"

function Class:initialize(options)	
	self:check(options and options.node,"Invalid terrain node for deformation creation.")
	self._node = options.node
	
	self:setTerrainUniforms()
end

function Class:setTerrainUniforms()
	local ss = self._node:getOrCreateStateSet()
	
	self._blendingU = osg.Uniform(osg.Uniform.FLOAT_VEC2,"deformation.blending")
	ss:addUniform(self._blendingU)
	
	self._localToScreenU = osg.Uniform(osg.Uniform.FLOAT_MAT4,"deformation.localToScreen")
	ss:addUniform(self._localToScreenU)
	
	self._tileToTangentU = osg.Uniform(osg.Uniform.FLOAT_MAT3,"deformation.tileToTangent")
	ss:addUniform(self._tileToTangentU)
end

function Class:update()
	-- update the terrain uniforms:
	local d1 = self._node:getSplitDistance() + 1.0;
	local d2 = 2.0 * self._node:getSplitDistance();
	self._blendingU:set(osg.Vec2f(d1, d2 - d1));
	
    self._cameraToScreen = self._node:getCameraToScreen();
    self._localToScreen = self._node:getLocalToCamera() * self._cameraToScreen;
	self._localToScreenU:set(self._localToScreen);
	
	local localCameraPos = self._node:getLocalCamera();
	local worldCamera = context->getOwner()->getCameraNode()->getWorldPos();
	local deformedCamera = self:localToDeformed(localCameraPos);
	local A = self:localToDeformedDifferential(localCameraPos);
	local B = self:deformedToTangentFrame(worldCamera);
	local ltow = self._node:getLocalToWorld();
	local ltot = A * ltow * B;
	self._localToTangent = mat3f(ltot[0][0], ltot[0][1], ltot[0][3],
						   ltot[1][0], ltot[1][1], ltot[1][3],
						   ltot[3][0], ltot[3][1], ltot[3][3]);	
end

-- transform a local point into deformed coordinates.
function Class:localToDeformed(localPt)
	return osg.Vec3d(localPt)
end

-- returns the differential matrix around a given point.
function Class:localToDeformedDifferential(localPt, clamp)
	return osg.Matrixd.translate(localPt:x(),localPt:y(),0.0)
end

-- Transforms coordinates from deformed space to local space.
function Class:deformedToLocal(deformedPt)
	return osg.Vec3d(deformedPt)
end

-- compute the local bounding box corresponding to the given source disk with center and radius in deformed space.
function Class:deformedToLocalBounds(deformedCenter, deformedRadius)
	return sgt.box2f(deformedCenter:x() - deformedRadius, deformedCenter:x() + deformedRadius,
        deformedCenter:y() - deformedRadius, deformedCenter:y() + deformedRadius)
end

-- Returns an orthonormal reference frame of the tangent space at the given deformed point.
function Class:deformedToTangentFrame(deformedPt)
	return osg.Matrixd.translate(-deformedPt:x(),-deformedPt:y(),0.0);	
end

function Class:getVisibility(localBox)
	return SceneManager:getVisibility(t:getDeformedFrustumPlanes(), localBox);
end

function Class:setUniforms(ptr<SceneNode> context, ptr<TerrainNode> n, ptr<Program> prog)

end

return Class
