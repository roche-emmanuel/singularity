#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Deformation.h>

class luna_wrapper_sgt_Deformation {
public:
	typedef Luna< sgt::Deformation > luna_t;

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

		sgt::Deformation* self= (sgt::Deformation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Deformation >::push(L,self,false);
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
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::Deformation* ptr= dynamic_cast< sgt::Deformation* >(Luna< osg::Referenced >::check(L,1));
		sgt::Deformation* ptr= luna_caster< osg::Referenced, sgt::Deformation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Deformation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_localToDeformed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_localToDeformedDifferential(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalDist(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniforms_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniforms_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localToDeformed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localToDeformedDifferential(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalDist(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58086971) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUniforms_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUniforms_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2)) ) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Deformation::Deformation()
	static sgt::Deformation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Deformation::Deformation() function, expected prototype:\nsgt::Deformation::Deformation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::Deformation();
	}

	// sgt::Deformation::Deformation(lua_Table * data)
	static sgt::Deformation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Deformation::Deformation(lua_Table * data) function, expected prototype:\nsgt::Deformation::Deformation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_Deformation(L,NULL);
	}

	// Overload binder for sgt::Deformation::Deformation
	static sgt::Deformation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Deformation, cannot match any of the overloads for function Deformation:\n  Deformation()\n  Deformation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec3d sgt::Deformation::localToDeformed(const sgt::vec3d & localPt) const
	static int _bind_localToDeformed(lua_State *L) {
		if (!_lg_typecheck_localToDeformed(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::Deformation::localToDeformed(const sgt::vec3d & localPt) const function, expected prototype:\nsgt::vec3d sgt::Deformation::localToDeformed(const sgt::vec3d & localPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::localToDeformed function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::Deformation::localToDeformed(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->localToDeformed(localPt);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::Deformation::localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const
	static int _bind_localToDeformedDifferential(lua_State *L) {
		if (!_lg_typecheck_localToDeformedDifferential(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::Deformation::localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const function, expected prototype:\nsgt::mat4d sgt::Deformation::localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::localToDeformedDifferential function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;
		bool clamp=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::Deformation::localToDeformedDifferential(const sgt::vec3d &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4d stack_lret = self->localToDeformedDifferential(localPt, clamp);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::Deformation::deformedToLocal(const sgt::vec3d & deformedPt) const
	static int _bind_deformedToLocal(lua_State *L) {
		if (!_lg_typecheck_deformedToLocal(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::Deformation::deformedToLocal(const sgt::vec3d & deformedPt) const function, expected prototype:\nsgt::vec3d sgt::Deformation::deformedToLocal(const sgt::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in sgt::Deformation::deformedToLocal function");
		}
		const sgt::vec3d & deformedPt=*deformedPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::Deformation::deformedToLocal(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->deformedToLocal(deformedPt);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::box2f sgt::Deformation::deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const
	static int _bind_deformedToLocalBounds(lua_State *L) {
		if (!_lg_typecheck_deformedToLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in sgt::box2f sgt::Deformation::deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const function, expected prototype:\nsgt::box2f sgt::Deformation::deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedCenter_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedCenter in sgt::Deformation::deformedToLocalBounds function");
		}
		const sgt::vec3d & deformedCenter=*deformedCenter_ptr;
		double deformedRadius=(double)lua_tonumber(L,3);

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::box2f sgt::Deformation::deformedToLocalBounds(const sgt::vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::box2f stack_lret = self->deformedToLocalBounds(deformedCenter, deformedRadius);
		sgt::box2f* lret = new sgt::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box2f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::Deformation::deformedToTangentFrame(const sgt::vec3d & deformedPt) const
	static int _bind_deformedToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_deformedToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::Deformation::deformedToTangentFrame(const sgt::vec3d & deformedPt) const function, expected prototype:\nsgt::mat4d sgt::Deformation::deformedToTangentFrame(const sgt::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in sgt::Deformation::deformedToTangentFrame function");
		}
		const sgt::vec3d & deformedPt=*deformedPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::Deformation::deformedToTangentFrame(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4d stack_lret = self->deformedToTangentFrame(deformedPt);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// float sgt::Deformation::getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const
	static int _bind_getLocalDist(lua_State *L) {
		if (!_lg_typecheck_getLocalDist(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::Deformation::getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const function, expected prototype:\nfloat sgt::Deformation::getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 76239300\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::getLocalDist function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;
		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::Deformation::getLocalDist function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::Deformation::getLocalDist(const sgt::vec3d &, const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLocalDist(localPt, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::LandManager::Visibility sgt::Deformation::getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const
	static int _bind_getVisibility(lua_State *L) {
		if (!_lg_typecheck_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LandManager::Visibility sgt::Deformation::getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const function, expected prototype:\nsgt::LandManager::Visibility sgt::Deformation::getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 80168245\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::TerrainNode* t=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2));
		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::Deformation::getVisibility function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::LandManager::Visibility sgt::Deformation::getVisibility(const sgt::TerrainNode *, const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::LandManager::Visibility lret = self->getVisibility(t, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Deformation::setUniforms(sgt::TerrainNode * n) const
	static int _bind_setUniforms_overload_1(lua_State *L) {
		if (!_lg_typecheck_setUniforms_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Deformation::setUniforms(sgt::TerrainNode * n) const function, expected prototype:\nvoid sgt::Deformation::setUniforms(sgt::TerrainNode * n) const\nClass arguments details:\narg 1 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* n=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2));

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Deformation::setUniforms(sgt::TerrainNode *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUniforms(n);

		return 0;
	}

	// void sgt::Deformation::setUniforms(sgt::TerrainQuad * q) const
	static int _bind_setUniforms_overload_2(lua_State *L) {
		if (!_lg_typecheck_setUniforms_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Deformation::setUniforms(sgt::TerrainQuad * q) const function, expected prototype:\nvoid sgt::Deformation::setUniforms(sgt::TerrainQuad * q) const\nClass arguments details:\narg 1 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainQuad* q=(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2));

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Deformation::setUniforms(sgt::TerrainQuad *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUniforms(q);

		return 0;
	}

	// Overload binder for sgt::Deformation::setUniforms
	static int _bind_setUniforms(lua_State *L) {
		if (_lg_typecheck_setUniforms_overload_1(L)) return _bind_setUniforms_overload_1(L);
		if (_lg_typecheck_setUniforms_overload_2(L)) return _bind_setUniforms_overload_2(L);

		luaL_error(L, "error in function setUniforms, cannot match any of the overloads for function setUniforms:\n  setUniforms(sgt::TerrainNode *)\n  setUniforms(sgt::TerrainQuad *)\n");
		return 0;
	}

	// sgt::vec3d sgt::Deformation::base_localToDeformed(const sgt::vec3d & localPt) const
	static int _bind_base_localToDeformed(lua_State *L) {
		if (!_lg_typecheck_base_localToDeformed(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::Deformation::base_localToDeformed(const sgt::vec3d & localPt) const function, expected prototype:\nsgt::vec3d sgt::Deformation::base_localToDeformed(const sgt::vec3d & localPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::base_localToDeformed function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::Deformation::base_localToDeformed(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->Deformation::localToDeformed(localPt);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::Deformation::base_localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const
	static int _bind_base_localToDeformedDifferential(lua_State *L) {
		if (!_lg_typecheck_base_localToDeformedDifferential(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::Deformation::base_localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const function, expected prototype:\nsgt::mat4d sgt::Deformation::base_localToDeformedDifferential(const sgt::vec3d & localPt, bool clamp = false) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::base_localToDeformedDifferential function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;
		bool clamp=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::Deformation::base_localToDeformedDifferential(const sgt::vec3d &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4d stack_lret = self->Deformation::localToDeformedDifferential(localPt, clamp);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::Deformation::base_deformedToLocal(const sgt::vec3d & deformedPt) const
	static int _bind_base_deformedToLocal(lua_State *L) {
		if (!_lg_typecheck_base_deformedToLocal(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::Deformation::base_deformedToLocal(const sgt::vec3d & deformedPt) const function, expected prototype:\nsgt::vec3d sgt::Deformation::base_deformedToLocal(const sgt::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in sgt::Deformation::base_deformedToLocal function");
		}
		const sgt::vec3d & deformedPt=*deformedPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::Deformation::base_deformedToLocal(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->Deformation::deformedToLocal(deformedPt);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::box2f sgt::Deformation::base_deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const
	static int _bind_base_deformedToLocalBounds(lua_State *L) {
		if (!_lg_typecheck_base_deformedToLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in sgt::box2f sgt::Deformation::base_deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const function, expected prototype:\nsgt::box2f sgt::Deformation::base_deformedToLocalBounds(const sgt::vec3d & deformedCenter, double deformedRadius) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedCenter_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedCenter in sgt::Deformation::base_deformedToLocalBounds function");
		}
		const sgt::vec3d & deformedCenter=*deformedCenter_ptr;
		double deformedRadius=(double)lua_tonumber(L,3);

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::box2f sgt::Deformation::base_deformedToLocalBounds(const sgt::vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::box2f stack_lret = self->Deformation::deformedToLocalBounds(deformedCenter, deformedRadius);
		sgt::box2f* lret = new sgt::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box2f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::Deformation::base_deformedToTangentFrame(const sgt::vec3d & deformedPt) const
	static int _bind_base_deformedToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_base_deformedToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::Deformation::base_deformedToTangentFrame(const sgt::vec3d & deformedPt) const function, expected prototype:\nsgt::mat4d sgt::Deformation::base_deformedToTangentFrame(const sgt::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* deformedPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in sgt::Deformation::base_deformedToTangentFrame function");
		}
		const sgt::vec3d & deformedPt=*deformedPt_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::Deformation::base_deformedToTangentFrame(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4d stack_lret = self->Deformation::deformedToTangentFrame(deformedPt);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// float sgt::Deformation::base_getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const
	static int _bind_base_getLocalDist(lua_State *L) {
		if (!_lg_typecheck_base_getLocalDist(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::Deformation::base_getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const function, expected prototype:\nfloat sgt::Deformation::base_getLocalDist(const sgt::vec3d & localPt, const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 76239300\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* localPt_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in sgt::Deformation::base_getLocalDist function");
		}
		const sgt::vec3d & localPt=*localPt_ptr;
		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::Deformation::base_getLocalDist function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::Deformation::base_getLocalDist(const sgt::vec3d &, const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Deformation::getLocalDist(localPt, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::LandManager::Visibility sgt::Deformation::base_getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const
	static int _bind_base_getVisibility(lua_State *L) {
		if (!_lg_typecheck_base_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LandManager::Visibility sgt::Deformation::base_getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const function, expected prototype:\nsgt::LandManager::Visibility sgt::Deformation::base_getVisibility(const sgt::TerrainNode * t, const sgt::box3d & localBox) const\nClass arguments details:\narg 1 ID = 80168245\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::TerrainNode* t=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2));
		const sgt::box3d* localBox_ptr=(Luna< sgt::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in sgt::Deformation::base_getVisibility function");
		}
		const sgt::box3d & localBox=*localBox_ptr;

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::LandManager::Visibility sgt::Deformation::base_getVisibility(const sgt::TerrainNode *, const sgt::box3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::LandManager::Visibility lret = self->Deformation::getVisibility(t, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::Deformation::base_setUniforms(sgt::TerrainNode * n) const
	static int _bind_base_setUniforms_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setUniforms_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Deformation::base_setUniforms(sgt::TerrainNode * n) const function, expected prototype:\nvoid sgt::Deformation::base_setUniforms(sgt::TerrainNode * n) const\nClass arguments details:\narg 1 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* n=(Luna< osg::Referenced >::checkSubType< sgt::TerrainNode >(L,2));

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Deformation::base_setUniforms(sgt::TerrainNode *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Deformation::setUniforms(n);

		return 0;
	}

	// void sgt::Deformation::base_setUniforms(sgt::TerrainQuad * q) const
	static int _bind_base_setUniforms_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setUniforms_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::Deformation::base_setUniforms(sgt::TerrainQuad * q) const function, expected prototype:\nvoid sgt::Deformation::base_setUniforms(sgt::TerrainQuad * q) const\nClass arguments details:\narg 1 ID = 80168245\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainQuad* q=(Luna< osg::Referenced >::checkSubType< sgt::TerrainQuad >(L,2));

		sgt::Deformation* self=Luna< osg::Referenced >::checkSubType< sgt::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::Deformation::base_setUniforms(sgt::TerrainQuad *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Deformation::setUniforms(q);

		return 0;
	}

	// Overload binder for sgt::Deformation::base_setUniforms
	static int _bind_base_setUniforms(lua_State *L) {
		if (_lg_typecheck_base_setUniforms_overload_1(L)) return _bind_base_setUniforms_overload_1(L);
		if (_lg_typecheck_base_setUniforms_overload_2(L)) return _bind_base_setUniforms_overload_2(L);

		luaL_error(L, "error in function base_setUniforms, cannot match any of the overloads for function base_setUniforms:\n  base_setUniforms(sgt::TerrainNode *)\n  base_setUniforms(sgt::TerrainQuad *)\n");
		return 0;
	}


	// Operator binds:

};

sgt::Deformation* LunaTraits< sgt::Deformation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Deformation::_bind_ctor(L);
}

void LunaTraits< sgt::Deformation >::_bind_dtor(sgt::Deformation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Deformation >::className[] = "Deformation";
const char LunaTraits< sgt::Deformation >::fullName[] = "sgt::Deformation";
const char LunaTraits< sgt::Deformation >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Deformation >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::Deformation >::hash = 61061622;
const int LunaTraits< sgt::Deformation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Deformation >::methods[] = {
	{"localToDeformed", &luna_wrapper_sgt_Deformation::_bind_localToDeformed},
	{"localToDeformedDifferential", &luna_wrapper_sgt_Deformation::_bind_localToDeformedDifferential},
	{"deformedToLocal", &luna_wrapper_sgt_Deformation::_bind_deformedToLocal},
	{"deformedToLocalBounds", &luna_wrapper_sgt_Deformation::_bind_deformedToLocalBounds},
	{"deformedToTangentFrame", &luna_wrapper_sgt_Deformation::_bind_deformedToTangentFrame},
	{"getLocalDist", &luna_wrapper_sgt_Deformation::_bind_getLocalDist},
	{"getVisibility", &luna_wrapper_sgt_Deformation::_bind_getVisibility},
	{"setUniforms", &luna_wrapper_sgt_Deformation::_bind_setUniforms},
	{"base_localToDeformed", &luna_wrapper_sgt_Deformation::_bind_base_localToDeformed},
	{"base_localToDeformedDifferential", &luna_wrapper_sgt_Deformation::_bind_base_localToDeformedDifferential},
	{"base_deformedToLocal", &luna_wrapper_sgt_Deformation::_bind_base_deformedToLocal},
	{"base_deformedToLocalBounds", &luna_wrapper_sgt_Deformation::_bind_base_deformedToLocalBounds},
	{"base_deformedToTangentFrame", &luna_wrapper_sgt_Deformation::_bind_base_deformedToTangentFrame},
	{"base_getLocalDist", &luna_wrapper_sgt_Deformation::_bind_base_getLocalDist},
	{"base_getVisibility", &luna_wrapper_sgt_Deformation::_bind_base_getVisibility},
	{"base_setUniforms", &luna_wrapper_sgt_Deformation::_bind_base_setUniforms},
	{"fromVoid", &luna_wrapper_sgt_Deformation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Deformation::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_Deformation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Deformation >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_Deformation::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Deformation >::enumValues[] = {
	{0,0}
};


