#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TerrainNode.h>

class luna_wrapper_sgt_TerrainNode {
public:
	typedef Luna< sgt::TerrainNode > luna_t;

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

		sgt::TerrainNode* self= (sgt::TerrainNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TerrainNode >::push(L,self,false);
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
		//sgt::TerrainNode* ptr= dynamic_cast< sgt::TerrainNode* >(Luna< osg::Referenced >::check(L,1));
		sgt::TerrainNode* ptr= luna_caster< osg::Referenced, sgt::TerrainNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TerrainNode >::push(L,ptr,false);
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
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1)) ) ) return false;
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
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,2)) ) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67824815) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67824815) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOccluded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
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

	inline static bool _lg_typecheck_getGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextGroundHeightAtCamera(lua_State *L) {
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

	inline static bool _lg_typecheck_setDeform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6233128) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59711174) ) return false;
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

	inline static bool _lg_typecheck_setCameraToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraWorldPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
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
	// sgt::TerrainNode::TerrainNode()
	static sgt::TerrainNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode() function, expected prototype:\nsgt::TerrainNode::TerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::TerrainNode();
	}

	// sgt::TerrainNode::TerrainNode(sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)
	static sgt::TerrainNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode(sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) function, expected prototype:\nsgt::TerrainNode::TerrainNode(sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Deformation* deform=(Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1));
		osg::Geode* tile=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		double half_size=(double)lua_tonumber(L,3);
		double zmin=(double)lua_tonumber(L,4);
		double zmax=(double)lua_tonumber(L,5);
		float splitFactor=(float)lua_tonumber(L,6);
		int maxLevel=(int)lua_tointeger(L,7);

		return new sgt::TerrainNode(deform, tile, half_size, zmin, zmax, splitFactor, maxLevel);
	}

	// sgt::TerrainNode::TerrainNode(lua_Table * data)
	static sgt::TerrainNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode(lua_Table * data) function, expected prototype:\nsgt::TerrainNode::TerrainNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_TerrainNode(L,NULL);
	}

	// sgt::TerrainNode::TerrainNode(lua_Table * data, sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)
	static sgt::TerrainNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode(lua_Table * data, sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) function, expected prototype:\nsgt::TerrainNode::TerrainNode(lua_Table * data, sgt::Deformation * deform, osg::Geode * tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel)\nClass arguments details:\narg 2 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Deformation* deform=(Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,2));
		osg::Geode* tile=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,3));
		double half_size=(double)lua_tonumber(L,4);
		double zmin=(double)lua_tonumber(L,5);
		double zmax=(double)lua_tonumber(L,6);
		float splitFactor=(float)lua_tonumber(L,7);
		int maxLevel=(int)lua_tointeger(L,8);

		return new wrapper_sgt_TerrainNode(L,NULL, deform, tile, half_size, zmin, zmax, splitFactor, maxLevel);
	}

	// Overload binder for sgt::TerrainNode::TerrainNode
	static sgt::TerrainNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TerrainNode, cannot match any of the overloads for function TerrainNode:\n  TerrainNode()\n  TerrainNode(sgt::Deformation *, osg::Geode *, double, double, double, float, int)\n  TerrainNode(lua_Table *)\n  TerrainNode(lua_Table *, sgt::Deformation *, osg::Geode *, double, double, double, float, int)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec3d sgt::TerrainNode::getDeformedCamera() const
	static int _bind_getDeformedCamera(lua_State *L) {
		if (!_lg_typecheck_getDeformedCamera(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::TerrainNode::getDeformedCamera() const function, expected prototype:\nsgt::vec3d sgt::TerrainNode::getDeformedCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::TerrainNode::getDeformedCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->getDeformedCamera();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const
	static int _bind_getDeformedFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getDeformedFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const function, expected prototype:\nconst osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::PlaneList* lret = &self->getDeformedFrustumPlanes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::PlaneList >::push(L,lret,false);

		return 1;
	}

	// sgt::vec3d sgt::TerrainNode::getLocalCamera() const
	static int _bind_getLocalCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalCamera(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::TerrainNode::getLocalCamera() const function, expected prototype:\nsgt::vec3d sgt::TerrainNode::getLocalCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::TerrainNode::getLocalCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->getLocalCamera();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// float sgt::TerrainNode::getCameraDist(const sgt::box3d & localBox) const
	static int _bind_getCameraDist(lua_State *L) {
		if (!_lg_typecheck_getCameraDist(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::getCameraDist(const sgt::box3d & localBox) const function, expected prototype:\nfloat sgt::TerrainNode::getCameraDist(const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::TerrainNode::getCameraDist function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::getCameraDist(const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCameraDist(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::LandManager::Visibility sgt::TerrainNode::getVisibility(const sgt::box3d & localBox) const
	static int _bind_getVisibility(lua_State *L) {
		if (!_lg_typecheck_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LandManager::Visibility sgt::TerrainNode::getVisibility(const sgt::box3d & localBox) const function, expected prototype:\nsgt::LandManager::Visibility sgt::TerrainNode::getVisibility(const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::TerrainNode::getVisibility function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::LandManager::Visibility sgt::TerrainNode::getVisibility(const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::LandManager::Visibility lret = self->getVisibility(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainNode::getSplitDistance() const
	static int _bind_getSplitDistance(lua_State *L) {
		if (!_lg_typecheck_getSplitDistance(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::getSplitDistance() const function, expected prototype:\nfloat sgt::TerrainNode::getSplitDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::getSplitDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSplitDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainNode::getDistFactor() const
	static int _bind_getDistFactor(lua_State *L) {
		if (!_lg_typecheck_getDistFactor(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::getDistFactor() const function, expected prototype:\nfloat sgt::TerrainNode::getDistFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::getDistFactor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TerrainNode::update(const sgt::mat4d & ltow, const sgt::mat4d & viewMatrix, const sgt::mat4d & proj, osg::Viewport * vp)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::update(const sgt::mat4d & ltow, const sgt::mat4d & viewMatrix, const sgt::mat4d & proj, osg::Viewport * vp) function, expected prototype:\nvoid sgt::TerrainNode::update(const sgt::mat4d & ltow, const sgt::mat4d & viewMatrix, const sgt::mat4d & proj, osg::Viewport * vp)\nClass arguments details:\narg 1 ID = 67824815\narg 2 ID = 67824815\narg 3 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::mat4d* ltow_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !ltow_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ltow in sgt::TerrainNode::update function");
		}
		const sgt::mat4d & ltow=*ltow_ptr;
		const sgt::mat4d* viewMatrix_ptr=(Luna< sgt::mat4d >::check(L,3));
		if( !viewMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewMatrix in sgt::TerrainNode::update function");
		}
		const sgt::mat4d & viewMatrix=*viewMatrix_ptr;
		const sgt::mat4d* proj_ptr=(Luna< sgt::mat4d >::check(L,4));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in sgt::TerrainNode::update function");
		}
		const sgt::mat4d & proj=*proj_ptr;
		osg::Viewport* vp=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,5));

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::update(const sgt::mat4d &, const sgt::mat4d &, const sgt::mat4d &, osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(ltow, viewMatrix, proj, vp);

		return 0;
	}

	// bool sgt::TerrainNode::addOccluder(const sgt::box3d & occluder)
	static int _bind_addOccluder(lua_State *L) {
		if (!_lg_typecheck_addOccluder(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainNode::addOccluder(const sgt::box3d & occluder) function, expected prototype:\nbool sgt::TerrainNode::addOccluder(const sgt::box3d & occluder)\nClass arguments details:\narg 1 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::box3d* occluder_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !occluder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg occluder in sgt::TerrainNode::addOccluder function");
		}
		const sgt::box3d & occluder=*occluder_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainNode::addOccluder(const sgt::box3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addOccluder(occluder);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::TerrainNode::isOccluded(const sgt::box3d & box)
	static int _bind_isOccluded(lua_State *L) {
		if (!_lg_typecheck_isOccluded(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainNode::isOccluded(const sgt::box3d & box) function, expected prototype:\nbool sgt::TerrainNode::isOccluded(const sgt::box3d & box)\nClass arguments details:\narg 1 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::box3d* box_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in sgt::TerrainNode::isOccluded function");
		}
		const sgt::box3d & box=*box_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainNode::isOccluded(const sgt::box3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOccluded(box);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TerrainNode::traverse(osg::NodeVisitor & nv)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid sgt::TerrainNode::traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in sgt::TerrainNode::traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(nv);

		return 0;
	}

	// osg::BoundingSphere sgt::TerrainNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere sgt::TerrainNode::computeBound() const function, expected prototype:\nosg::BoundingSphere sgt::TerrainNode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere sgt::TerrainNode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}

	// sgtPtr< sgt::Deformation > sgt::TerrainNode::deform()
	static int _bind_getDeform(lua_State *L) {
		if (!_lg_typecheck_getDeform(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< sgt::Deformation > sgt::TerrainNode::deform() function, expected prototype:\nsgtPtr< sgt::Deformation > sgt::TerrainNode::deform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< sgt::Deformation > sgt::TerrainNode::deform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< sgt::Deformation >* lret = &self->deform;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< sgt::Deformation > >::push(L,lret,false);

		return 1;
	}

	// sgtPtr< sgt::TerrainQuad > sgt::TerrainNode::root()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< sgt::TerrainQuad > sgt::TerrainNode::root() function, expected prototype:\nsgtPtr< sgt::TerrainQuad > sgt::TerrainNode::root()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< sgt::TerrainQuad > sgt::TerrainNode::root(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgtPtr< sgt::TerrainQuad >* lret = &self->root;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< sgt::TerrainQuad > >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Geode > sgt::TerrainNode::tileGeode()
	static int _bind_getTileGeode(lua_State *L) {
		if (!_lg_typecheck_getTileGeode(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Geode > sgt::TerrainNode::tileGeode() function, expected prototype:\nosg::ref_ptr< osg::Geode > sgt::TerrainNode::tileGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Geode > sgt::TerrainNode::tileGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Geode > lret = self->tileGeode;
		Luna< osg::Geode >::push(L,lret.get(),false);

		return 1;
	}

	// float sgt::TerrainNode::splitFactor()
	static int _bind_getSplitFactor(lua_State *L) {
		if (!_lg_typecheck_getSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::splitFactor() function, expected prototype:\nfloat sgt::TerrainNode::splitFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::splitFactor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->splitFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::TerrainNode::splitInvisibleQuads()
	static int _bind_getSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_getSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainNode::splitInvisibleQuads() function, expected prototype:\nbool sgt::TerrainNode::splitInvisibleQuads()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainNode::splitInvisibleQuads(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->splitInvisibleQuads;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::TerrainNode::horizonCulling()
	static int _bind_getHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_getHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TerrainNode::horizonCulling() function, expected prototype:\nbool sgt::TerrainNode::horizonCulling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TerrainNode::horizonCulling(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->horizonCulling;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgt::TerrainNode::maxLevel()
	static int _bind_getMaxLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TerrainNode::maxLevel() function, expected prototype:\nint sgt::TerrainNode::maxLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TerrainNode::maxLevel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->maxLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainNode::groundHeightAtCamera()
	static int _bind_getGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::groundHeightAtCamera() function, expected prototype:\nfloat sgt::TerrainNode::groundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::groundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->groundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TerrainNode::nextGroundHeightAtCamera()
	static int _bind_getNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TerrainNode::nextGroundHeightAtCamera() function, expected prototype:\nfloat sgt::TerrainNode::nextGroundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TerrainNode::nextGroundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->nextGroundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::mat4d sgt::TerrainNode::cameraToScreen()
	static int _bind_getCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_getCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::TerrainNode::cameraToScreen() function, expected prototype:\nsgt::mat4d sgt::TerrainNode::cameraToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::TerrainNode::cameraToScreen(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::mat4d* lret = &self->cameraToScreen;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,false);

		return 1;
	}

	// sgt::mat4d sgt::TerrainNode::localToCamera()
	static int _bind_getLocalToCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalToCamera(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::TerrainNode::localToCamera() function, expected prototype:\nsgt::mat4d sgt::TerrainNode::localToCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::TerrainNode::localToCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::mat4d* lret = &self->localToCamera;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,false);

		return 1;
	}

	// sgt::mat4d sgt::TerrainNode::localToWorld()
	static int _bind_getLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_getLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::TerrainNode::localToWorld() function, expected prototype:\nsgt::mat4d sgt::TerrainNode::localToWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::TerrainNode::localToWorld(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::mat4d* lret = &self->localToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,false);

		return 1;
	}

	// sgt::vec3d sgt::TerrainNode::cameraWorldPos()
	static int _bind_getCameraWorldPos(lua_State *L) {
		if (!_lg_typecheck_getCameraWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::TerrainNode::cameraWorldPos() function, expected prototype:\nsgt::vec3d sgt::TerrainNode::cameraWorldPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::TerrainNode::cameraWorldPos(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::vec3d* lret = &self->cameraWorldPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainNode::blendingU()
	static int _bind_getBlendingU(lua_State *L) {
		if (!_lg_typecheck_getBlendingU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainNode::blendingU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainNode::blendingU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainNode::blendingU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->blendingU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Uniform > sgt::TerrainNode::localToScreenU()
	static int _bind_getLocalToScreenU(lua_State *L) {
		if (!_lg_typecheck_getLocalToScreenU(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Uniform > sgt::TerrainNode::localToScreenU() function, expected prototype:\nosg::ref_ptr< osg::Uniform > sgt::TerrainNode::localToScreenU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Uniform > sgt::TerrainNode::localToScreenU(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Uniform > lret = self->localToScreenU;
		Luna< osg::Uniform >::push(L,lret.get(),false);

		return 1;
	}

	// void sgt::TerrainNode::deform(sgtPtr< sgt::Deformation > value)
	static int _bind_setDeform(lua_State *L) {
		if (!_lg_typecheck_setDeform(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::deform(sgtPtr< sgt::Deformation > value) function, expected prototype:\nvoid sgt::TerrainNode::deform(sgtPtr< sgt::Deformation > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::Deformation >* value_ptr=(Luna< sgtPtr< sgt::Deformation > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::deform function");
		}
		sgtPtr< sgt::Deformation > value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::deform(sgtPtr< sgt::Deformation >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deform = value;

		return 0;
	}

	// void sgt::TerrainNode::root(sgtPtr< sgt::TerrainQuad > value)
	static int _bind_setRoot(lua_State *L) {
		if (!_lg_typecheck_setRoot(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::root(sgtPtr< sgt::TerrainQuad > value) function, expected prototype:\nvoid sgt::TerrainNode::root(sgtPtr< sgt::TerrainQuad > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::TerrainQuad >* value_ptr=(Luna< sgtPtr< sgt::TerrainQuad > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::root function");
		}
		sgtPtr< sgt::TerrainQuad > value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::root(sgtPtr< sgt::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->root = value;

		return 0;
	}

	// void sgt::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value)
	static int _bind_setTileGeode(lua_State *L) {
		if (!_lg_typecheck_setTileGeode(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value) function, expected prototype:\nvoid sgt::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Geode > value = dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::tileGeode(osg::ref_ptr< osg::Geode >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tileGeode = value;

		return 0;
	}

	// void sgt::TerrainNode::splitFactor(float value)
	static int _bind_setSplitFactor(lua_State *L) {
		if (!_lg_typecheck_setSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::splitFactor(float value) function, expected prototype:\nvoid sgt::TerrainNode::splitFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::splitFactor(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitFactor = value;

		return 0;
	}

	// void sgt::TerrainNode::splitInvisibleQuads(bool value)
	static int _bind_setSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_setSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::splitInvisibleQuads(bool value) function, expected prototype:\nvoid sgt::TerrainNode::splitInvisibleQuads(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::splitInvisibleQuads(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitInvisibleQuads = value;

		return 0;
	}

	// void sgt::TerrainNode::horizonCulling(bool value)
	static int _bind_setHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_setHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::horizonCulling(bool value) function, expected prototype:\nvoid sgt::TerrainNode::horizonCulling(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::horizonCulling(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->horizonCulling = value;

		return 0;
	}

	// void sgt::TerrainNode::maxLevel(int value)
	static int _bind_setMaxLevel(lua_State *L) {
		if (!_lg_typecheck_setMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::maxLevel(int value) function, expected prototype:\nvoid sgt::TerrainNode::maxLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::maxLevel(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxLevel = value;

		return 0;
	}

	// void sgt::TerrainNode::groundHeightAtCamera(float value)
	static int _bind_setGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::groundHeightAtCamera(float value) function, expected prototype:\nvoid sgt::TerrainNode::groundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::groundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->groundHeightAtCamera = value;

		return 0;
	}

	// void sgt::TerrainNode::nextGroundHeightAtCamera(float value)
	static int _bind_setNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::nextGroundHeightAtCamera(float value) function, expected prototype:\nvoid sgt::TerrainNode::nextGroundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::nextGroundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nextGroundHeightAtCamera = value;

		return 0;
	}

	// void sgt::TerrainNode::cameraToScreen(sgt::mat4d value)
	static int _bind_setCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_setCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::cameraToScreen(sgt::mat4d value) function, expected prototype:\nvoid sgt::TerrainNode::cameraToScreen(sgt::mat4d value)\nClass arguments details:\narg 1 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::mat4d* value_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::cameraToScreen function");
		}
		sgt::mat4d value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::cameraToScreen(sgt::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraToScreen = value;

		return 0;
	}

	// void sgt::TerrainNode::localToCamera(sgt::mat4d value)
	static int _bind_setLocalToCamera(lua_State *L) {
		if (!_lg_typecheck_setLocalToCamera(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::localToCamera(sgt::mat4d value) function, expected prototype:\nvoid sgt::TerrainNode::localToCamera(sgt::mat4d value)\nClass arguments details:\narg 1 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::mat4d* value_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::localToCamera function");
		}
		sgt::mat4d value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::localToCamera(sgt::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToCamera = value;

		return 0;
	}

	// void sgt::TerrainNode::localToWorld(sgt::mat4d value)
	static int _bind_setLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_setLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::localToWorld(sgt::mat4d value) function, expected prototype:\nvoid sgt::TerrainNode::localToWorld(sgt::mat4d value)\nClass arguments details:\narg 1 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::mat4d* value_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::localToWorld function");
		}
		sgt::mat4d value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::localToWorld(sgt::mat4d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToWorld = value;

		return 0;
	}

	// void sgt::TerrainNode::cameraWorldPos(sgt::vec3d value)
	static int _bind_setCameraWorldPos(lua_State *L) {
		if (!_lg_typecheck_setCameraWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::cameraWorldPos(sgt::vec3d value) function, expected prototype:\nvoid sgt::TerrainNode::cameraWorldPos(sgt::vec3d value)\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::vec3d* value_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TerrainNode::cameraWorldPos function");
		}
		sgt::vec3d value=*value_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::cameraWorldPos(sgt::vec3d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraWorldPos = value;

		return 0;
	}

	// void sgt::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setBlendingU(lua_State *L) {
		if (!_lg_typecheck_setBlendingU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::blendingU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blendingU = value;

		return 0;
	}

	// void sgt::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value)
	static int _bind_setLocalToScreenU(lua_State *L) {
		if (!_lg_typecheck_setLocalToScreenU(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value) function, expected prototype:\nvoid sgt::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Uniform > value = dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::localToScreenU(osg::ref_ptr< osg::Uniform >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToScreenU = value;

		return 0;
	}

	// void sgt::TerrainNode::base_traverse(osg::NodeVisitor & nv)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TerrainNode::base_traverse(osg::NodeVisitor & nv) function, expected prototype:\nvoid sgt::TerrainNode::base_traverse(osg::NodeVisitor & nv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in sgt::TerrainNode::base_traverse function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TerrainNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainNode::traverse(nv);

		return 0;
	}

	// osg::BoundingSphere sgt::TerrainNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphere sgt::TerrainNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphere sgt::TerrainNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphere sgt::TerrainNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphere stack_lret = self->TerrainNode::computeBound();
		osg::BoundingSphere* lret = new osg::BoundingSphere(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphere >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

sgt::TerrainNode* LunaTraits< sgt::TerrainNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TerrainNode::_bind_ctor(L);
}

void LunaTraits< sgt::TerrainNode >::_bind_dtor(sgt::TerrainNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TerrainNode >::className[] = "TerrainNode";
const char LunaTraits< sgt::TerrainNode >::fullName[] = "sgt::TerrainNode";
const char LunaTraits< sgt::TerrainNode >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TerrainNode >::parents[] = {"osg.Node", 0};
const int LunaTraits< sgt::TerrainNode >::hash = 32276046;
const int LunaTraits< sgt::TerrainNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TerrainNode >::methods[] = {
	{"getDeformedCamera", &luna_wrapper_sgt_TerrainNode::_bind_getDeformedCamera},
	{"getDeformedFrustumPlanes", &luna_wrapper_sgt_TerrainNode::_bind_getDeformedFrustumPlanes},
	{"getLocalCamera", &luna_wrapper_sgt_TerrainNode::_bind_getLocalCamera},
	{"getCameraDist", &luna_wrapper_sgt_TerrainNode::_bind_getCameraDist},
	{"getVisibility", &luna_wrapper_sgt_TerrainNode::_bind_getVisibility},
	{"getSplitDistance", &luna_wrapper_sgt_TerrainNode::_bind_getSplitDistance},
	{"getDistFactor", &luna_wrapper_sgt_TerrainNode::_bind_getDistFactor},
	{"update", &luna_wrapper_sgt_TerrainNode::_bind_update},
	{"addOccluder", &luna_wrapper_sgt_TerrainNode::_bind_addOccluder},
	{"isOccluded", &luna_wrapper_sgt_TerrainNode::_bind_isOccluded},
	{"traverse", &luna_wrapper_sgt_TerrainNode::_bind_traverse},
	{"computeBound", &luna_wrapper_sgt_TerrainNode::_bind_computeBound},
	{"getDeform", &luna_wrapper_sgt_TerrainNode::_bind_getDeform},
	{"getRoot", &luna_wrapper_sgt_TerrainNode::_bind_getRoot},
	{"getTileGeode", &luna_wrapper_sgt_TerrainNode::_bind_getTileGeode},
	{"getSplitFactor", &luna_wrapper_sgt_TerrainNode::_bind_getSplitFactor},
	{"getSplitInvisibleQuads", &luna_wrapper_sgt_TerrainNode::_bind_getSplitInvisibleQuads},
	{"getHorizonCulling", &luna_wrapper_sgt_TerrainNode::_bind_getHorizonCulling},
	{"getMaxLevel", &luna_wrapper_sgt_TerrainNode::_bind_getMaxLevel},
	{"getGroundHeightAtCamera", &luna_wrapper_sgt_TerrainNode::_bind_getGroundHeightAtCamera},
	{"getNextGroundHeightAtCamera", &luna_wrapper_sgt_TerrainNode::_bind_getNextGroundHeightAtCamera},
	{"getCameraToScreen", &luna_wrapper_sgt_TerrainNode::_bind_getCameraToScreen},
	{"getLocalToCamera", &luna_wrapper_sgt_TerrainNode::_bind_getLocalToCamera},
	{"getLocalToWorld", &luna_wrapper_sgt_TerrainNode::_bind_getLocalToWorld},
	{"getCameraWorldPos", &luna_wrapper_sgt_TerrainNode::_bind_getCameraWorldPos},
	{"getBlendingU", &luna_wrapper_sgt_TerrainNode::_bind_getBlendingU},
	{"getLocalToScreenU", &luna_wrapper_sgt_TerrainNode::_bind_getLocalToScreenU},
	{"setDeform", &luna_wrapper_sgt_TerrainNode::_bind_setDeform},
	{"setRoot", &luna_wrapper_sgt_TerrainNode::_bind_setRoot},
	{"setTileGeode", &luna_wrapper_sgt_TerrainNode::_bind_setTileGeode},
	{"setSplitFactor", &luna_wrapper_sgt_TerrainNode::_bind_setSplitFactor},
	{"setSplitInvisibleQuads", &luna_wrapper_sgt_TerrainNode::_bind_setSplitInvisibleQuads},
	{"setHorizonCulling", &luna_wrapper_sgt_TerrainNode::_bind_setHorizonCulling},
	{"setMaxLevel", &luna_wrapper_sgt_TerrainNode::_bind_setMaxLevel},
	{"setGroundHeightAtCamera", &luna_wrapper_sgt_TerrainNode::_bind_setGroundHeightAtCamera},
	{"setNextGroundHeightAtCamera", &luna_wrapper_sgt_TerrainNode::_bind_setNextGroundHeightAtCamera},
	{"setCameraToScreen", &luna_wrapper_sgt_TerrainNode::_bind_setCameraToScreen},
	{"setLocalToCamera", &luna_wrapper_sgt_TerrainNode::_bind_setLocalToCamera},
	{"setLocalToWorld", &luna_wrapper_sgt_TerrainNode::_bind_setLocalToWorld},
	{"setCameraWorldPos", &luna_wrapper_sgt_TerrainNode::_bind_setCameraWorldPos},
	{"setBlendingU", &luna_wrapper_sgt_TerrainNode::_bind_setBlendingU},
	{"setLocalToScreenU", &luna_wrapper_sgt_TerrainNode::_bind_setLocalToScreenU},
	{"base_traverse", &luna_wrapper_sgt_TerrainNode::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_sgt_TerrainNode::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_sgt_TerrainNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TerrainNode::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TerrainNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TerrainNode >::converters[] = {
	{"osg::Node", &luna_wrapper_sgt_TerrainNode::_cast_from_Node},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TerrainNode >::enumValues[] = {
	{0,0}
};


