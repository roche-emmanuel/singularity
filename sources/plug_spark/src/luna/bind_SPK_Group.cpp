#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_Group {
public:
	typedef Luna< SPK::Group > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36788392) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Group*)");
		}

		SPK::Group* rhs =(Luna< SPK::Group >::check(L,2));
		SPK::Group* self=(Luna< SPK::Group >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Group* self=(Luna< SPK::Group >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Group");
		
		return luna_dynamicCast(L,converters,"SPK::Group",name);
	}

	inline static bool _lg_typecheck_setCustomUpdate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Group *'
		////////////////////////////////////////////////////////////////////
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7361390)) ) return false;
		return true;
	}


	// void SPK::Group *::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb)
	static int _bind_setCustomUpdate(lua_State *L) {
		if (!_lg_typecheck_setCustomUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group *::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb) function, expected prototype:\nvoid SPK::Group *::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb)\nClass arguments details:\narg 2 ID = 7361390\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'SPK::Group *' baseTypeName is 'SPK::Group'
		////////////////////////////////////////////////////////////////////
		spark::GroupCustomUpdate* cb=(Luna< spark::GroupCustomUpdate >::check(L,2));

		setCustomUpdate(&grp, cb);

		return 0;
	}

};

SPK::Group* LunaTraits< SPK::Group >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::Group >::_bind_dtor(SPK::Group* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< SPK::Group >::className[] = "SPK_Group";
const char LunaTraits< SPK::Group >::fullName[] = "SPK::Group";
const char LunaTraits< SPK::Group >::moduleName[] = "spark";
const char* LunaTraits< SPK::Group >::parents[] = {0};
const int LunaTraits< SPK::Group >::hash = 36788392;
const int LunaTraits< SPK::Group >::uniqueIDs[] = {36788392,0};

luna_RegType LunaTraits< SPK::Group >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_Group::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Group::_bind___eq},
	
	{"setCustomUpdate", &luna_wrapper_SPK_Group::_bind_setCustomUpdate},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Group >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Group >::enumValues[] = {
	{0,0}
};


