#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TerrainNode.h>

class luna_wrapper_proland_TerrainNode {
public:
	typedef Luna< proland::TerrainNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainNode* self= (proland::TerrainNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Node(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TerrainNode* ptr= dynamic_cast< proland::TerrainNode* >(Luna< osg::Referenced >::check(L,1));
		proland::TerrainNode* ptr= luna_caster< osg::Referenced, proland::TerrainNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TerrainNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< proland::Deformation >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2)) ) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< proland::Deformation >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,3)) ) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDeformedCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeformedFrustumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraDist(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72889784) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72889784) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOccluded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acquire(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileGeode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitInvisibleQuads(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHorizonCulling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraWorldPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBlendingU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToScreenU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,38901418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41173863) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileGeode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24357146) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitInvisibleQuads(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHorizonCulling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraWorldPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlendingU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToScreenU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36174510) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNextGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainNode::TerrainNode()
	static proland::TerrainNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode() function, expected prototype:\nproland::TerrainNode::TerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::TerrainNode();
	}

	// proland::TerrainNode::TerrainNode(proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)
	static proland::TerrainNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode(proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) function, expected prototype:\nproland::TerrainNode::TerrainNode(proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Deformation* deform=(Luna< osg::Referenced >::checkSubType< proland::Deformation >(L,1));
		osg::Geode* tile=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		double half_size=(double)lua_tonumber(L,3);
		double zmin=(double)lua_tonumber(L,4);
		double zmax=(double)lua_tonumber(L,5);
		float splitFactor=(float)lua_tonumber(L,6);
		int maxLevel=(int)lua_tointeger(L,7);

		return new proland::TerrainNode(deform, tile, half_size, zmin, zmax, splitFactor, maxLevel);
	}

	// proland::TerrainNode::TerrainNode(lua_Table * data)
	static proland::TerrainNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode(lua_Table * data) function, expected prototype:\nproland::TerrainNode::TerrainNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_TerrainNode(L,NULL);
	}

	// proland::TerrainNode::TerrainNode(lua_Table * data, proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)
	static proland::TerrainNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode(lua_Table * data, proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) function, expected prototype:\nproland::TerrainNode::TerrainNode(lua_Table * data, proland::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)\nClass arguments details:\narg 2 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Deformation* deform=(Luna< osg::Referenced >::checkSubType< proland::Deformation >(L,2));
		osg::Geode* tile=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,3));
		double half_size=(double)lua_tonumber(L,4);
		double zmin=(double)lua_tonumber(L,5);
		double zmax=(double)lua_tonumber(L,6);
		float splitFactor=(float)lua_tonumber(L,7);
		int maxLevel=(int)lua_tointeger(L,8);

		return new wrapper_proland_TerrainNode(L,NULL, deform, tile, half_size, zmin, zmax, splitFactor, maxLevel);
	}

	// Overload binder for proland::TerrainNode::TerrainNode
	static proland::TerrainNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TerrainNode, cannot match any of the overloads for function TerrainNode:\n  TerrainNode()\n  TerrainNode(proland::Deformation *, osg::Geode *, double, double, double, float, int)\n  TerrainNode(lua_Table *)\n  TerrainNode(lua_Table *, proland::Deformation *, osg::Geode *, double, double, double, float, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d proland::TerrainNode::getDeformedCamera() const
	static int _bind_getDeformedCamera(lua_State *L) {
		if (!_lg_typecheck_getDeformedCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainNode::getDeformedCamera() const function, expected prototype:\nork::vec3d proland::TerrainNode::getDeformedCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainNode::getDeformedCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getDeformedCamera();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// const osg::Polytope::PlaneList & proland::TerrainNode::getDeformedFrustumPlanes() const
	static int _bind_getDeformedFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getDeformedFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::PlaneList & proland::TerrainNode::getDeformedFrustumPlanes() const function, expected prototype:\nconst osg::Polytope::PlaneList & proland::TerrainNode::getDeformedFrustumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::PlaneList & proland::TerrainNode::getDeformedFrustumPlanes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::PlaneList* lret = &self->getDeformedFrustumPlanes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::PlaneList >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::TerrainNode::getLocalCamera() const
	static int _bind_getLocalCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainNode::getLocalCamera() const function, expected prototype:\nork::vec3d proland::TerrainNode::getLocalCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainNode::getLocalCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getLocalCamera();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// float proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const
	static int _bind_getCameraDist(lua_State *L) {
		if (!_lg_typecheck_getCameraDist(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const function, expected prototype:\nfloat proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::TerrainNode::getCameraDist function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getCameraDist(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCameraDist(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const
	static int _bind_getVisibility(lua_State *L) {
		if (!_lg_typecheck_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const function, expected prototype:\nork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::TerrainNode::getVisibility function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->getVisibility(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::getSplitDistance() const
	static int _bind_getSplitDistance(lua_State *L) {
		if (!_lg_typecheck_getSplitDistance(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getSplitDistance() const function, expected prototype:\nfloat proland::TerrainNode::getSplitDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getSplitDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSplitDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::getDistFactor() const
	static int _bind_getDistFactor(lua_State *L) {
		if (!_lg_typecheck_getDistFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getDistFactor() const function, expected prototype:\nfloat proland::TerrainNode::getDistFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getDistFactor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainNode::update(const ork::mat4d & ltow, const ork::mat4d & viewMatrix, const ork::mat4d & proj, osg::Viewport * vp)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::update(const ork::mat4d & ltow, const ork::mat4d & viewMatrix, const ork::mat4d & proj, osg::Viewport * vp) function, expected prototype:\nvoid proland::TerrainNode::update(const ork::mat4d & ltow, const ork::mat4d & viewMatrix, const ork::mat4d & proj, osg::Viewport * vp)\nClass arguments details:\narg 1 ID = 72889784\narg 2 ID = 72889784\narg 3 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* ltow_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !ltow_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ltow in proland::TerrainNode::update function");
		}
		const ork::mat4d & ltow=*ltow_ptr;
		const ork::mat4d* viewMatrix_ptr=(Luna< ork::mat4d >::check(L,3));
		if( !viewMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewMatrix in proland::TerrainNode::update function");
		}
		const ork::mat4d & viewMatrix=*viewMatrix_ptr;
		const ork::mat4d* proj_ptr=(Luna< ork::mat4d >::check(L,4));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in proland::TerrainNode::update function");
		}
		const ork::mat4d & proj=*proj_ptr;
		osg::Viewport* vp=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,5));

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::update(const ork::mat4d &, const ork::mat4d &, const ork::mat4d &, osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(ltow, viewMatrix, proj, vp);

		return 0;
	}

	// bool proland::TerrainNode::addOccluder(const ork::box3d & occluder)
	static int _bind_addOccluder(lua_State *L) {
		if (!_lg_typecheck_addOccluder(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::addOccluder(const ork::box3d & occluder) function, expected prototype:\nbool proland::TerrainNode::addOccluder(const ork::box3d & occluder)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* occluder_ptr=(Luna< ork::box3d >::check(L,2));
		if( !occluder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg occluder in proland::TerrainNode::addOccluder function");
		}
		const ork::box3d & occluder=*occluder_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::addOccluder(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addOccluder(occluder);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TerrainNode::isOccluded(const ork::box3d & box)
	static int _bind_isOccluded(lua_State *L) {
		if (!_lg_typecheck_isOccluded(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::isOccluded(const ork::box3d & box) function, expected prototype:\nbool proland::TerrainNode::isOccluded(const ork::box3d & box)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* box_ptr=(Luna< ork::box3d >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in proland::TerrainNode::isOccluded function");
		}
		const ork::box3d & box=*box_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::isOccluded(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOccluded(box);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TerrainNode::traverse(osg::NodeVisitor & nv)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid proland::TerrainNode::traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in proland::TerrainNode::traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(nv);

		return 0;
	}

	// osg::BoundingSphere proland::TerrainNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere proland::TerrainNode::computeBound() const function, expected prototype:\nosg::BoundingSphere proland::TerrainNode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere proland::TerrainNode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}

	// void proland::TerrainNode::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::release() function, expected prototype:\nvoid proland::TerrainNode::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void proland::TerrainNode::acquire()
	static int _bind_acquire(lua_State *L) {
		if (!_lg_typecheck_acquire(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::acquire() function, expected prototype:\nvoid proland::TerrainNode::acquire()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::acquire(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->acquire();

		return 0;
	}

	// sgtPtr< proland::Deformation > proland::TerrainNode::deform()
	static int _bind_getDeform(lua_State *L) {
		if (!_lg_typecheck_getDeform(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< proland::Deformation > proland::TerrainNode::deform() function, expected prototype:\nsgtPtr< proland::Deformation > proland::TerrainNode::deform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< proland::Deformation > proland::TerrainNode::deform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< proland::Deformation >* lret = &self->deform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< proland::Deformation > >::push(L,lret,false);

		return 1;
	}

	// sgtPtr< proland::TerrainQuad > proland::TerrainNode::root()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< proland::TerrainQuad > proland::TerrainNode::root() function, expected prototype:\nsgtPtr< proland::TerrainQuad > proland::TerrainNode::root()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< proland::TerrainQuad > proland::TerrainNode::root(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< proland::TerrainQuad >* lret = &self->root;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< proland::TerrainQuad > >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Geode > proland::TerrainNode::tileGeode()
	static int _bind_getTileGeode(lua_State *L) {
		if (!_lg_typecheck_getTileGeode(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Geode > proland::TerrainNode::tileGeode() function, expected prototype:\nosg::ref_ptr< osg::Geode > proland::TerrainNode::tileGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Geode > proland::TerrainNode::tileGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Geode > lret = self->tileGeode;
		Luna< osg::Geode >::push(L,lret.get(),false);

		return 1;
	}

	// float proland::TerrainNode::splitFactor()
	static int _bind_getSplitFactor(lua_State *L) {
		if (!_lg_typecheck_getSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::splitFactor() function, expected prototype:\nfloat proland::TerrainNode::splitFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::splitFactor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->splitFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TerrainNode::splitInvisibleQuads()
	static int _bind_getSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_getSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::splitInvisibleQuads() function, expected prototype:\nbool proland::TerrainNode::splitInvisibleQuads()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::splitInvisibleQuads(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->splitInvisibleQuads;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TerrainNode::horizonCulling()
	static int _bind_getHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_getHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::horizonCulling() function, expected prototype:\nbool proland::TerrainNode::horizonCulling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::horizonCulling(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->horizonCulling;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::TerrainNode::maxLevel()
	static int _bind_getMaxLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainNode::maxLevel() function, expected prototype:\nint proland::TerrainNode::maxLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainNode::maxLevel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->maxLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::mat4d proland::TerrainNode::cameraToScreen()
	static int _bind_getCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_getCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::TerrainNode::cameraToScreen() function, expected prototype:\nork::mat4d proland::TerrainNode::cameraToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::TerrainNode::cameraToScreen(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->cameraToScreen;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::TerrainNode::localToCamera()
	static int _bind_getLocalToCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalToCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::TerrainNode::localToCamera() function, expected prototype:\nork::mat4d proland::TerrainNode::localToCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::TerrainNode::localToCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->localToCamera;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::TerrainNode::localToWorld()
	static int _bind_getLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_getLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::TerrainNode::localToWorld() function, expected prototype:\nork::mat4d proland::TerrainNode::localToWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::TerrainNode::localToWorld(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->localToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::TerrainNode::cameraWorldPos()
	static int _bind_getCameraWorldPos(lua_State *L) {
		if (!_lg_typecheck_getCameraWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainNode::cameraWorldPos() function, expected prototype:\nork::vec3d proland::TerrainNode::cameraWorldPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainNode::cameraWorldPos(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->cameraWorldPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > proland::TerrainNode::blendingU()
	static int _bind_getBlendingU(lua_State *L) {
		if (!_lg_typecheck_getBlendingU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > proland::TerrainNode::blendingU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > proland::TerrainNode::blendingU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > proland::TerrainNode::blendingU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->blendingU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > proland::TerrainNode::localToScreenU()
	static int _bind_getLocalToScreenU(lua_State *L) {
		if (!_lg_typecheck_getLocalToScreenU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > proland::TerrainNode::localToScreenU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > proland::TerrainNode::localToScreenU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > proland::TerrainNode::localToScreenU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->localToScreenU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// float proland::TerrainNode::groundHeightAtCamera()
	static int _bind_getGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::groundHeightAtCamera() function, expected prototype:\nfloat proland::TerrainNode::groundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::groundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->groundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::nextGroundHeightAtCamera()
	static int _bind_getNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::nextGroundHeightAtCamera() function, expected prototype:\nfloat proland::TerrainNode::nextGroundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::nextGroundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->nextGroundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainNode::deform(sgtPtr< proland::Deformation > value)
	static int _bind_setDeform(lua_State *L) {
		if (!_lg_typecheck_setDeform(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::deform(sgtPtr< proland::Deformation > value) function, expected prototype:\nvoid proland::TerrainNode::deform(sgtPtr< proland::Deformation > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< proland::Deformation >* value_ptr=(Luna< sgtPtr< proland::Deformation > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::deform function");
		}
		sgtPtr< proland::Deformation > value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::deform(sgtPtr< proland::Deformation >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deform = value;

		return 0;
	}

	// void proland::TerrainNode::root(sgtPtr< proland::TerrainQuad > value)
	static int _bind_setRoot(lua_State *L) {
		if (!_lg_typecheck_setRoot(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::root(sgtPtr< proland::TerrainQuad > value) function, expected prototype:\nvoid proland::TerrainNode::root(sgtPtr< proland::TerrainQuad > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< proland::TerrainQuad >* value_ptr=(Luna< sgtPtr< proland::TerrainQuad > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::root function");
		}
		sgtPtr< proland::TerrainQuad > value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::root(sgtPtr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->root = value;

		return 0;
	}

	// void proland::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value)
	static int _bind_setTileGeode(lua_State *L) {
		if (!_lg_typecheck_setTileGeode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value) function, expected prototype:\nvoid proland::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Geode > value = dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tileGeode = value;

		return 0;
	}

	// void proland::TerrainNode::splitFactor(float value)
	static int _bind_setSplitFactor(lua_State *L) {
		if (!_lg_typecheck_setSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::splitFactor(float value) function, expected prototype:\nvoid proland::TerrainNode::splitFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::splitFactor(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitFactor = value;

		return 0;
	}

	// void proland::TerrainNode::splitInvisibleQuads(bool value)
	static int _bind_setSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_setSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::splitInvisibleQuads(bool value) function, expected prototype:\nvoid proland::TerrainNode::splitInvisibleQuads(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::splitInvisibleQuads(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitInvisibleQuads = value;

		return 0;
	}

	// void proland::TerrainNode::horizonCulling(bool value)
	static int _bind_setHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_setHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::horizonCulling(bool value) function, expected prototype:\nvoid proland::TerrainNode::horizonCulling(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::horizonCulling(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->horizonCulling = value;

		return 0;
	}

	// void proland::TerrainNode::maxLevel(int value)
	static int _bind_setMaxLevel(lua_State *L) {
		if (!_lg_typecheck_setMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::maxLevel(int value) function, expected prototype:\nvoid proland::TerrainNode::maxLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::maxLevel(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxLevel = value;

		return 0;
	}

	// void proland::TerrainNode::cameraToScreen(ork::mat4d value)
	static int _bind_setCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_setCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::cameraToScreen(ork::mat4d value) function, expected prototype:\nvoid proland::TerrainNode::cameraToScreen(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::cameraToScreen function");
		}
		ork::mat4d value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::cameraToScreen(ork::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraToScreen = value;

		return 0;
	}

	// void proland::TerrainNode::localToCamera(ork::mat4d value)
	static int _bind_setLocalToCamera(lua_State *L) {
		if (!_lg_typecheck_setLocalToCamera(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::localToCamera(ork::mat4d value) function, expected prototype:\nvoid proland::TerrainNode::localToCamera(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::localToCamera function");
		}
		ork::mat4d value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::localToCamera(ork::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToCamera = value;

		return 0;
	}

	// void proland::TerrainNode::localToWorld(ork::mat4d value)
	static int _bind_setLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_setLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::localToWorld(ork::mat4d value) function, expected prototype:\nvoid proland::TerrainNode::localToWorld(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::localToWorld function");
		}
		ork::mat4d value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::localToWorld(ork::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToWorld = value;

		return 0;
	}

	// void proland::TerrainNode::cameraWorldPos(ork::vec3d value)
	static int _bind_setCameraWorldPos(lua_State *L) {
		if (!_lg_typecheck_setCameraWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::cameraWorldPos(ork::vec3d value) function, expected prototype:\nvoid proland::TerrainNode::cameraWorldPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainNode::cameraWorldPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::cameraWorldPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraWorldPos = value;

		return 0;
	}

	// void proland::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setBlendingU(lua_State *L) {
		if (!_lg_typecheck_setBlendingU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid proland::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blendingU = value;

		return 0;
	}

	// void proland::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setLocalToScreenU(lua_State *L) {
		if (!_lg_typecheck_setLocalToScreenU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid proland::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToScreenU = value;

		return 0;
	}

	// void proland::TerrainNode::groundHeightAtCamera(float value)
	static int _bind_setGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::groundHeightAtCamera(float value) function, expected prototype:\nvoid proland::TerrainNode::groundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::groundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->groundHeightAtCamera = value;

		return 0;
	}

	// void proland::TerrainNode::nextGroundHeightAtCamera(float value)
	static int _bind_setNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::nextGroundHeightAtCamera(float value) function, expected prototype:\nvoid proland::TerrainNode::nextGroundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::nextGroundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nextGroundHeightAtCamera = value;

		return 0;
	}

	// void proland::TerrainNode::base_traverse(osg::NodeVisitor & nv)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::base_traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid proland::TerrainNode::base_traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in proland::TerrainNode::base_traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainNode::traverse(nv);

		return 0;
	}

	// osg::BoundingSphere proland::TerrainNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere proland::TerrainNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphere proland::TerrainNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< osg::Referenced >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere proland::TerrainNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->TerrainNode::computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

proland::TerrainNode* LunaTraits< proland::TerrainNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainNode::_bind_ctor(L);
}

void LunaTraits< proland::TerrainNode >::_bind_dtor(proland::TerrainNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< proland::TerrainNode >::className[] = "TerrainNode";
const char LunaTraits< proland::TerrainNode >::fullName[] = "proland::TerrainNode";
const char LunaTraits< proland::TerrainNode >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainNode >::parents[] = {"osg.Node", 0};
const int LunaTraits< proland::TerrainNode >::hash = 16519225;
const int LunaTraits< proland::TerrainNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< proland::TerrainNode >::methods[] = {
	{"getDeformedCamera", &luna_wrapper_proland_TerrainNode::_bind_getDeformedCamera},
	{"getDeformedFrustumPlanes", &luna_wrapper_proland_TerrainNode::_bind_getDeformedFrustumPlanes},
	{"getLocalCamera", &luna_wrapper_proland_TerrainNode::_bind_getLocalCamera},
	{"getCameraDist", &luna_wrapper_proland_TerrainNode::_bind_getCameraDist},
	{"getVisibility", &luna_wrapper_proland_TerrainNode::_bind_getVisibility},
	{"getSplitDistance", &luna_wrapper_proland_TerrainNode::_bind_getSplitDistance},
	{"getDistFactor", &luna_wrapper_proland_TerrainNode::_bind_getDistFactor},
	{"update", &luna_wrapper_proland_TerrainNode::_bind_update},
	{"addOccluder", &luna_wrapper_proland_TerrainNode::_bind_addOccluder},
	{"isOccluded", &luna_wrapper_proland_TerrainNode::_bind_isOccluded},
	{"traverse", &luna_wrapper_proland_TerrainNode::_bind_traverse},
	{"computeBound", &luna_wrapper_proland_TerrainNode::_bind_computeBound},
	{"release", &luna_wrapper_proland_TerrainNode::_bind_release},
	{"acquire", &luna_wrapper_proland_TerrainNode::_bind_acquire},
	{"getDeform", &luna_wrapper_proland_TerrainNode::_bind_getDeform},
	{"getRoot", &luna_wrapper_proland_TerrainNode::_bind_getRoot},
	{"getTileGeode", &luna_wrapper_proland_TerrainNode::_bind_getTileGeode},
	{"getSplitFactor", &luna_wrapper_proland_TerrainNode::_bind_getSplitFactor},
	{"getSplitInvisibleQuads", &luna_wrapper_proland_TerrainNode::_bind_getSplitInvisibleQuads},
	{"getHorizonCulling", &luna_wrapper_proland_TerrainNode::_bind_getHorizonCulling},
	{"getMaxLevel", &luna_wrapper_proland_TerrainNode::_bind_getMaxLevel},
	{"getCameraToScreen", &luna_wrapper_proland_TerrainNode::_bind_getCameraToScreen},
	{"getLocalToCamera", &luna_wrapper_proland_TerrainNode::_bind_getLocalToCamera},
	{"getLocalToWorld", &luna_wrapper_proland_TerrainNode::_bind_getLocalToWorld},
	{"getCameraWorldPos", &luna_wrapper_proland_TerrainNode::_bind_getCameraWorldPos},
	{"getBlendingU", &luna_wrapper_proland_TerrainNode::_bind_getBlendingU},
	{"getLocalToScreenU", &luna_wrapper_proland_TerrainNode::_bind_getLocalToScreenU},
	{"getGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_getGroundHeightAtCamera},
	{"getNextGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_getNextGroundHeightAtCamera},
	{"setDeform", &luna_wrapper_proland_TerrainNode::_bind_setDeform},
	{"setRoot", &luna_wrapper_proland_TerrainNode::_bind_setRoot},
	{"setTileGeode", &luna_wrapper_proland_TerrainNode::_bind_setTileGeode},
	{"setSplitFactor", &luna_wrapper_proland_TerrainNode::_bind_setSplitFactor},
	{"setSplitInvisibleQuads", &luna_wrapper_proland_TerrainNode::_bind_setSplitInvisibleQuads},
	{"setHorizonCulling", &luna_wrapper_proland_TerrainNode::_bind_setHorizonCulling},
	{"setMaxLevel", &luna_wrapper_proland_TerrainNode::_bind_setMaxLevel},
	{"setCameraToScreen", &luna_wrapper_proland_TerrainNode::_bind_setCameraToScreen},
	{"setLocalToCamera", &luna_wrapper_proland_TerrainNode::_bind_setLocalToCamera},
	{"setLocalToWorld", &luna_wrapper_proland_TerrainNode::_bind_setLocalToWorld},
	{"setCameraWorldPos", &luna_wrapper_proland_TerrainNode::_bind_setCameraWorldPos},
	{"setBlendingU", &luna_wrapper_proland_TerrainNode::_bind_setBlendingU},
	{"setLocalToScreenU", &luna_wrapper_proland_TerrainNode::_bind_setLocalToScreenU},
	{"setGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_setGroundHeightAtCamera},
	{"setNextGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_setNextGroundHeightAtCamera},
	{"base_traverse", &luna_wrapper_proland_TerrainNode::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_proland_TerrainNode::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_proland_TerrainNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainNode::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TerrainNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainNode >::converters[] = {
	{"osg::Node", &luna_wrapper_proland_TerrainNode::_cast_from_Node},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainNode >::enumValues[] = {
	{0,0}
};


