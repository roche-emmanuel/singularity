local Class = require("classBuilder"){name="TerrainNode",bases="base.Object"};

require "osg"
	
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
		
		local fov = 70.0; -- Need to retrieve FOV here!
		
		self._projection = proj;
		local mvp = mv*proj;
		
		self._deformedCameraPos = osg.Matrixd.inverse(mv):getTrans();
		SceneManager::getFrustumPlanes(mvp, deformedFrustumPlanes);

		self._localCameraPos = self._deform:deformedToLocal(self._deformedCameraPos);

		local m = deform:localToDeformedDifferential(self._localCameraPos, true);
		self._distFactor = max(m:getRow3(0):length(), m:getRow3(1):length());

		-- to be analyzed:
		vec3d left = deformedFrustumPlanes[0].xyz().normalize();
		vec3d right = deformedFrustumPlanes[1].xyz().normalize();
		float fov = (float) safe_acos(-left.dotproduct(right));
		splitDist = splitFactor * fb->getViewport().z / 1024.0f * tan(40.0f / 180.0f * M_PI) / tan(fov / 2.0f);
		if (splitDist < 1.1f || !(isFinite(splitDist))) {
			splitDist = 1.1f;
		}

		// initializes data structures for horizon occlusion culling
		if (horizonCulling && localCameraPos.z <= root->zmax) {
			vec3d deformedDir = owner->getLocalToCamera().inverse() * vec3d::UNIT_Z;
			vec2d localDir = (deform->deformedToLocal(deformedDir) - localCameraPos).xy().normalize();
			localCameraDir = mat2f(localDir.y, -localDir.x, -localDir.x, -localDir.y);
			for (int i = 0; i < HORIZON_SIZE; ++i) {
				horizon[i] = -INFINITY;
			}
		}

		root->update();		
	end)
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
