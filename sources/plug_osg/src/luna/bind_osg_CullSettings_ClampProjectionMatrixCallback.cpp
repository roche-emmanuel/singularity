#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullSettings_ClampProjectionMatrixCallback.h>

class luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback {
public:
	typedef Luna< osg::CullSettings::ClampProjectionMatrixCallback > luna_t;

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


	// Function checkers:
	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

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
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &) const");
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
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &) const");
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
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
}

void LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::_bind_dtor(osg::CullSettings::ClampProjectionMatrixCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::className[] = "ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::fullName[] = "osg::CullSettings::ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::hash = 31657648;
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::methods[] = {
	{"clampProjectionMatrixImplementation", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_clampProjectionMatrixImplementation},
	{"__eq", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::enumValues[] = {
	{0,0}
};


