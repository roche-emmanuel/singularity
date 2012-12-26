#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_FireEffect.h>

class luna_wrapper_osgParticle_FireEffect {
public:
	typedef Luna< osgParticle::FireEffect > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgParticle::FireEffect* ptr= dynamic_cast< osgParticle::FireEffect* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::FireEffect* ptr= luna_caster< osg::Referenced, osgParticle::FireEffect >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::FireEffect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_buildEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::FireEffect::FireEffect(bool automaticSetup = true)
	static osgParticle::FireEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(bool automaticSetup = true) function, expected prototype:\nosgParticle::FireEffect::FireEffect(bool automaticSetup = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new osgParticle::FireEffect(automaticSetup);
	}

	// osgParticle::FireEffect::FireEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::FireEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::FireEffect::FireEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::FireEffect::FireEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;
		float intensity=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new osgParticle::FireEffect(position, scale, intensity);
	}

	// osgParticle::FireEffect::FireEffect(const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FireEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FireEffect::FireEffect(const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::FireEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FireEffect::FireEffect function");
		}
		const osgParticle::FireEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FireEffect::FireEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::FireEffect(copy, copyop);
	}

	// osgParticle::FireEffect::FireEffect(lua_Table * data, bool automaticSetup = true)
	static osgParticle::FireEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(lua_Table * data, bool automaticSetup = true) function, expected prototype:\nosgParticle::FireEffect::FireEffect(lua_Table * data, bool automaticSetup = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wrapper_osgParticle_FireEffect(L,NULL, automaticSetup);
	}

	// osgParticle::FireEffect::FireEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::FireEffect* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::FireEffect::FireEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::FireEffect::FireEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;
		float intensity=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;

		return new wrapper_osgParticle_FireEffect(L,NULL, position, scale, intensity);
	}

	// osgParticle::FireEffect::FireEffect(lua_Table * data, const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FireEffect* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FireEffect::FireEffect(lua_Table * data, const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FireEffect::FireEffect(lua_Table * data, const osgParticle::FireEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::FireEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FireEffect::FireEffect function");
		}
		const osgParticle::FireEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FireEffect::FireEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_FireEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::FireEffect::FireEffect
	static osgParticle::FireEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function FireEffect, cannot match any of the overloads for function FireEffect:\n  FireEffect(bool)\n  FireEffect(const osg::Vec3f &, float, float)\n  FireEffect(const osgParticle::FireEffect &, const osg::CopyOp &)\n  FireEffect(lua_Table *, bool)\n  FireEffect(lua_Table *, const osg::Vec3f &, float, float)\n  FireEffect(lua_Table *, const osgParticle::FireEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::FireEffect::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FireEffect::cloneType() const function, expected prototype:\nosg::Object * osgParticle::FireEffect::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FireEffect::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FireEffect::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FireEffect::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::FireEffect::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FireEffect::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FireEffect::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FireEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FireEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FireEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FireEffect::className() const function, expected prototype:\nconst char * osgParticle::FireEffect::className() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FireEffect::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FireEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FireEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::FireEffect::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FireEffect::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FireEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FireEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FireEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::FireEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::setDefaults() function, expected prototype:\nvoid osgParticle::FireEffect::setDefaults()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::FireEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::FireEffect::setUpEmitterAndProgram()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::setUpEmitterAndProgram()");
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::FireEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::FireEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::FireEffect::getEmitter()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::FireEffect::getEmitter()");
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::FireEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::FireEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::FireEffect::getEmitter() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::FireEffect::getEmitter() const");
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::FireEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::FireEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::FireEffect::getProgram()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::FireEffect::getProgram()");
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::FireEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::FireEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::FireEffect::getProgram() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::FireEffect::getProgram() const");
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}

	// void osgParticle::FireEffect::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::FireEffect::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_setName(const std::string &)");
		}
		self->FireEffect::setName(name);

		return 0;
	}

	// void osgParticle::FireEffect::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::FireEffect::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_computeDataVariance()");
		}
		self->FireEffect::computeDataVariance();

		return 0;
	}

	// void osgParticle::FireEffect::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::FireEffect::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_setUserData(osg::Referenced *)");
		}
		self->FireEffect::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::FireEffect::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::FireEffect::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::FireEffect::base_getUserData()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::FireEffect::base_getUserData()");
		}
		osg::Referenced * lret = self->FireEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::FireEffect::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::FireEffect::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::FireEffect::base_getUserData() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::FireEffect::base_getUserData() const");
		}
		const osg::Referenced * lret = self->FireEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osgParticle::FireEffect::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::FireEffect::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::FireEffect::base_asTransform()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::FireEffect::base_asTransform()");
		}
		osg::Transform * lret = self->FireEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::FireEffect::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::FireEffect::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::FireEffect::base_asTransform() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::FireEffect::base_asTransform() const");
		}
		const osg::Transform * lret = self->FireEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Switch * osgParticle::FireEffect::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::FireEffect::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::FireEffect::base_asSwitch()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::FireEffect::base_asSwitch()");
		}
		osg::Switch * lret = self->FireEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::FireEffect::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::FireEffect::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::FireEffect::base_asSwitch() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::FireEffect::base_asSwitch() const");
		}
		const osg::Switch * lret = self->FireEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::FireEffect::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::FireEffect::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::FireEffect::base_asGeode()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::FireEffect::base_asGeode()");
		}
		osg::Geode * lret = self->FireEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::FireEffect::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::FireEffect::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::FireEffect::base_asGeode() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::FireEffect::base_asGeode() const");
		}
		const osg::Geode * lret = self->FireEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::FireEffect::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FireEffect::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FireEffect::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_ascend(osg::NodeVisitor &)");
		}
		self->FireEffect::ascend(nv);

		return 0;
	}

	// osg::Group * osgParticle::FireEffect::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::FireEffect::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::FireEffect::base_asGroup()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::FireEffect::base_asGroup()");
		}
		osg::Group * lret = self->FireEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::FireEffect::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::FireEffect::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::FireEffect::base_asGroup() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::FireEffect::base_asGroup() const");
		}
		const osg::Group * lret = self->FireEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osgParticle::FireEffect::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::FireEffect::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::FireEffect::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_traverse(osg::NodeVisitor &)");
		}
		self->FireEffect::traverse(_arg1);

		return 0;
	}

	// bool osgParticle::FireEffect::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_addChild(osg::Node * child) function, expected prototype:\nbool osgParticle::FireEffect::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_addChild(osg::Node *)");
		}
		bool lret = self->FireEffect::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::FireEffect::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osgParticle::FireEffect::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_insertChild(unsigned int, osg::Node *)");
		}
		bool lret = self->FireEffect::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::FireEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osgParticle::FireEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->FireEffect::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::FireEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osgParticle::FireEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_replaceChild(osg::Node *, osg::Node *)");
		}
		bool lret = self->FireEffect::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::FireEffect::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osgParticle::FireEffect::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_setChild(unsigned int, osg::Node *)");
		}
		bool lret = self->FireEffect::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::FireEffect::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::FireEffect::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_releaseGLObjects(osg::State *) const");
		}
		self->FireEffect::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::FireEffect::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::FireEffect::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::FireEffect::base_computeBound() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::FireEffect::base_computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->FireEffect::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::FireEffect::base_buildEffect()
	static int _bind_base_buildEffect(lua_State *L) {
		if (!_lg_typecheck_base_buildEffect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_buildEffect() function, expected prototype:\nvoid osgParticle::FireEffect::base_buildEffect()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_buildEffect()");
		}
		self->FireEffect::buildEffect();

		return 0;
	}

	// osg::Object * osgParticle::FireEffect::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FireEffect::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::FireEffect::base_cloneType() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FireEffect::base_cloneType() const");
		}
		osg::Object * lret = self->FireEffect::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FireEffect::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FireEffect::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::FireEffect::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FireEffect::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FireEffect::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->FireEffect::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FireEffect::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FireEffect::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FireEffect::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FireEffect::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->FireEffect::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FireEffect::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FireEffect::base_className() const function, expected prototype:\nconst char * osgParticle::FireEffect::base_className() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FireEffect::base_className() const");
		}
		const char * lret = self->FireEffect::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FireEffect::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FireEffect::base_libraryName() const function, expected prototype:\nconst char * osgParticle::FireEffect::base_libraryName() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FireEffect::base_libraryName() const");
		}
		const char * lret = self->FireEffect::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FireEffect::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FireEffect::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FireEffect::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_accept(osg::NodeVisitor &)");
		}
		self->FireEffect::accept(nv);

		return 0;
	}

	// void osgParticle::FireEffect::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_setDefaults() function, expected prototype:\nvoid osgParticle::FireEffect::base_setDefaults()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_setDefaults()");
		}
		self->FireEffect::setDefaults();

		return 0;
	}

	// void osgParticle::FireEffect::base_setUpEmitterAndProgram()
	static int _bind_base_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_base_setUpEmitterAndProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FireEffect::base_setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::FireEffect::base_setUpEmitterAndProgram()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FireEffect::base_setUpEmitterAndProgram()");
		}
		self->FireEffect::setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter()
	static int _bind_base_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::FireEffect::base_getEmitter()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter()");
		}
		osgParticle::Emitter * lret = self->FireEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter() const
	static int _bind_base_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::FireEffect::base_getEmitter() const");
		}
		const osgParticle::Emitter * lret = self->FireEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_getEmitter
	static int _bind_base_getEmitter(lua_State *L) {
		if (_lg_typecheck_base_getEmitter_overload_1(L)) return _bind_base_getEmitter_overload_1(L);
		if (_lg_typecheck_base_getEmitter_overload_2(L)) return _bind_base_getEmitter_overload_2(L);

		luaL_error(L, "error in function base_getEmitter, cannot match any of the overloads for function base_getEmitter:\n  base_getEmitter()\n  base_getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::FireEffect::base_getProgram()
	static int _bind_base_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::FireEffect::base_getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::FireEffect::base_getProgram()\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::FireEffect::base_getProgram()");
		}
		osgParticle::Program * lret = self->FireEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::FireEffect::base_getProgram() const
	static int _bind_base_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::FireEffect::base_getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::FireEffect::base_getProgram() const\nClass arguments details:\n");
		}


		osgParticle::FireEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::FireEffect >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::FireEffect::base_getProgram() const");
		}
		const osgParticle::Program * lret = self->FireEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FireEffect::base_getProgram
	static int _bind_base_getProgram(lua_State *L) {
		if (_lg_typecheck_base_getProgram_overload_1(L)) return _bind_base_getProgram_overload_1(L);
		if (_lg_typecheck_base_getProgram_overload_2(L)) return _bind_base_getProgram_overload_2(L);

		luaL_error(L, "error in function base_getProgram, cannot match any of the overloads for function base_getProgram:\n  base_getProgram()\n  base_getProgram()\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::FireEffect* LunaTraits< osgParticle::FireEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_FireEffect::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgParticle::FireEffect >::_bind_dtor(osgParticle::FireEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::FireEffect >::className[] = "FireEffect";
const char LunaTraits< osgParticle::FireEffect >::fullName[] = "osgParticle::FireEffect";
const char LunaTraits< osgParticle::FireEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::FireEffect >::parents[] = {"osgParticle.ParticleEffect", 0};
const int LunaTraits< osgParticle::FireEffect >::hash = 60829417;
const int LunaTraits< osgParticle::FireEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::FireEffect >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_FireEffect::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_FireEffect::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_FireEffect::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_FireEffect::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_FireEffect::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_FireEffect::_bind_accept},
	{"setDefaults", &luna_wrapper_osgParticle_FireEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_FireEffect::_bind_setUpEmitterAndProgram},
	{"getEmitter", &luna_wrapper_osgParticle_FireEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_FireEffect::_bind_getProgram},
	{"base_setName", &luna_wrapper_osgParticle_FireEffect::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_FireEffect::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_FireEffect::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_FireEffect::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osgParticle_FireEffect::_bind_base_asTransform},
	{"base_asSwitch", &luna_wrapper_osgParticle_FireEffect::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_FireEffect::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_FireEffect::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osgParticle_FireEffect::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osgParticle_FireEffect::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osgParticle_FireEffect::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osgParticle_FireEffect::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osgParticle_FireEffect::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osgParticle_FireEffect::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osgParticle_FireEffect::_bind_base_setChild},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_FireEffect::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgParticle_FireEffect::_bind_base_computeBound},
	{"base_buildEffect", &luna_wrapper_osgParticle_FireEffect::_bind_base_buildEffect},
	{"base_cloneType", &luna_wrapper_osgParticle_FireEffect::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_FireEffect::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_FireEffect::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_FireEffect::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_FireEffect::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_FireEffect::_bind_base_accept},
	{"base_setDefaults", &luna_wrapper_osgParticle_FireEffect::_bind_base_setDefaults},
	{"base_setUpEmitterAndProgram", &luna_wrapper_osgParticle_FireEffect::_bind_base_setUpEmitterAndProgram},
	{"base_getEmitter", &luna_wrapper_osgParticle_FireEffect::_bind_base_getEmitter},
	{"base_getProgram", &luna_wrapper_osgParticle_FireEffect::_bind_base_getProgram},
	{"__eq", &luna_wrapper_osgParticle_FireEffect::_bind___eq},
	{"getTable", &luna_wrapper_osgParticle_FireEffect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::FireEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_FireEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::FireEffect >::enumValues[] = {
	{0,0}
};


