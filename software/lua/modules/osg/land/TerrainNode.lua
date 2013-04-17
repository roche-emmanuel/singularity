local Class = require("classBuilder"){name="TerrainNode",bases="base.Object"};

require "osg"
require "sgtLand"

local HORIZON_SIZE = 256

function Class:initialize(options)	
	self:info("Creating TerrainNode.")
	self._root = osg.Group()
	self._transform = osg.MatrixTransform()
	self._root:addChild(self._transform)
	
	self._ss = self._root:getOrCreateStateSet()
	
	-- attach to parent if provide:
	if options and options.parent then
		options.parent:addChild(self._root)
	end
	
	-- Create the deformation object:
	local Deformation = require "osg.land.Deformation"
	self._deform = Deformation{node=self}
	
	self._splitFactor = options and options.splitFactor or 2.0;
	self._splitDist = 1.1; -- the viewer distance at which the quad is subdivided.
	self._splitInvisibleQuads = false;
    self._horizonCulling = true;
	self._maxLevel = 7;
	self._horizon = {};
	self._frustumPlanes = {}
	
	--self._deformedCameraPos = osg.Vec3d();
	--self._localCameraPos = osg.Vec3d();
	
	-- create the shared tile geode:
	self:info("Creating Tile geode.")
	self:createTileGeode()
	
	-- create the quad tree:
	self:info("Creating root TerrainQuad.")
	local TerrainQuad = require "osg.land.TerrainQuad"
	self._quad = TerrainQuad{node=self}
	self._transform:addChild(self._quad:getRoot())
	
	self:_root:setCullCB(function(node,nv)
		-- compute the local to world mat:
		--local ltow = osg.computeLocalToWorld(nv:getNodePath())
		
		local cv = nv:dynCast("osgUtil::CullVisitor")
		self:check(cv,"Invalid cull visitor.")
		
		local mv = cv:getModelViewMatrix()
		local proj = cv:getProjectionMatrix();
		local cullSet = cv:getCurrentCullingSet();
		local frustum = cullSet:getFrustum();
		local viewport = cv:getViewport();
		self:check(viewport,"Invalid viewport object.")
		
		-- retrieve the frustum planes:
		for i = 0,5 do
			self._frustumPlanes[i+1] = frustum:
		end
		
		local res, fovy, aspect, znear, zfar = proj:getPerspective(0.0,0.0,0.0,0.0);
		self:check(res,"Could not get perspective settings from projection matrix ",proj)
		
		-- compute the fovx angle:
		-- The computed relation is:
		-- fovx = 2 * atan( aspect * tan(fovy/2))
		local fovx = 2.0 * math.atan(aspect* math.tan(math.rad(fovy/2.0))); -- in radians.
		
		self._projection = proj;
		--local mvp = mv*proj;
		
		local mv_inv = osg.Matrixd.inverse(mv);
		self._deformedCameraPos = mv_inv:getTrans();

		self._localCameraPos = self._deform:deformedToLocal(self._deformedCameraPos);

		local m = deform:localToDeformedDifferential(self._localCameraPos, true);
		self._distFactor = max(m:getRow3(0):length(), m:getRow3(1):length());

		self._splitDist = self._splitFactor * viewport:width() / 1024.0 * tan(math.rad(40.0)) / tan(fovx / 2.0);
		if (splitDist < 1.1 or not stg.isFinite(splitDist)) then
			splitDist = 1.1;
		end

		-- initializes data structures for horizon occlusion culling
		if (self._horizonCulling and self._localCameraPos:z() <= self._quad:getZmax()) then
			local deformedDir = mv_inv * osg.ZAXIS;
			local localDir = (self._deform:deformedToLocal(deformedDir) - self._localCameraPos).xy()
			localDir:normalize();
			
			self._localCameraDir = sgt.mat2f(localDir.y, -localDir.x, -localDir.x, -localDir.y);
			for i = 1,HORIZON_SIZE do
				self._horizon[i] = -sgt.INFINITY;
			end
		end

		self._quad:update();		
	end)
end

function Class:getVisibility(box)
	return self._deform:getVisibility(box)
end

function Class:getDeformedFrustumPlanes()
	self:check(#self._frustumPlanes == 6, "Invalid frustum planes.")
	return self._frustumPlanes
end

function Class:getDeformedCamera()
	self:check(self._deformedCameraPos,"Invalid deformedCameraPos vector")
	return self._deformedCameraPos
end

function Class:getSplitDistance()
    self:check(self._splitDist > 1.0,"Invalid splidDist value: ",self._splitDist);
    return self._splitDist;
end

function Class:getCameraToScreen()
	self:check(self._projection,"Invalid projection matrix")
	return self._projection
end

function Class:getLocalCamera()
	self:check(self._localCameraPos,"Invalid localCameraPos vector")
	return self._localCameraPos
end

function Class:getLocalToCamera()
	self:no_impl()
end

function Class:getLocalToWorld()
	self:no_impl()
end

function Class:createTileGeode()
	self._tileGeode = osg.Geode()
	
	local geom = osg.Geometry()
	geom:setUseVertexBufferObjects(true)
	self._tileGeode:addDrwable(geom)
	
	local vertices = osg.Vec3Array()
	vertices:push_back(osg.Vec3f(0.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,0.0,0.0))
	vertices:push_back(osg.Vec3f(0.0,1.0,0.0))
	vertices:push_back(osg.Vec3f(1.0,1.0,0.0))
	
	geom:setVertexArray(vertices)
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
end

function Class:setupProgram()
	local shman = require "osg.ShaderManager"
	local prog = shman:loadProgram{"terrain_shader_minimal"}
	self._ss:setAttributeAndModes(prog)	
end

function Class:getTileGeode()
	self:check(self._tileGeode,"Invalid tile geode.")
	return self._tileGeode
end

function Class:getRoot()
	return self._root
end

return Class
