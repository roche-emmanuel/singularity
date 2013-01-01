#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullSettings_ClampProjectionMatrixCallback.h>

class luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback {
public:
	typedef Luna< osg::CullSettings::ClampProjectionMatrixCallback > luna_t;

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
		//osg::CullSettings::ClampProjectionMatrixCallback* ptr= dynamic_cast< osg::CullSettings::ClampProjectionMatrixCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::CullSettings::ClampProjectionMatrixCallback* ptr= luna_caster< osg::Referenced, osg::CullSettings::ClampProjectionMatrixCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CullSettings::ClampProjectionMatrixCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data)
	static osg::CullSettings::ClampProjectionMatrixCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data) function, expected prototype:\nosg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_CullSettings_ClampProjectionMatrixCallback(L,NULL);
	}


	// Function binds:
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const function, expected prototype:\nbool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		osg::Matrixf* projection_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation function");
		}
		osg::Matrixf & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osg::CullSettings::ClampProjectionMatrixCallback* self=Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const function, expected prototype:\nbool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation function");
		}
		osg::Matrixd & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osg::CullSettings::ClampProjectionMatrixCallback* self=Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation
	static int _bind_clampProjectionMatrixImplementation(lua_State *L) {
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) return _bind_clampProjectionMatrixImplementation_overload_1(L);
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) return _bind_clampProjectionMatrixImplementation_overload_2(L);

		luaL_error(L, "error in function clampProjectionMatrixImplementation, cannot match any of the overloads for function clampProjectionMatrixImplementation:\n  clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &)\n  clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &)\n");
		return 0;
	}


	// Operator binds:

};

osg::CullSettings::ClampProjectionMatrixCallback* LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
}

void LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::_bind_dtor(osg::CullSettings::ClampProjectionMatrixCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::className[] = "CullSettings_ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::fullName[] = "osg::CullSettings::ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::hash = 31657648;
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::methods[] = {
	{"clampProjectionMatrixImplementation", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_clampProjectionMatrixImplementation},
	{"__eq", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind___eq},
	{"getTable", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::enumValues[] = {
	{0,0}
};


