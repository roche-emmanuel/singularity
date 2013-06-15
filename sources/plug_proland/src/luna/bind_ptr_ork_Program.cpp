#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_ork_Program {
public:
	typedef Luna< ptr< ork::Program > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38954662) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< ork::Program >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< ork::Program >* rhs =(Luna< ptr< ork::Program > >::check(L,2));
		ptr< ork::Program >* self=(Luna< ptr< ork::Program > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ptr< ork::Program >* self=(Luna< ptr< ork::Program > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< ork::Program >");
		
		return luna_dynamicCast(L,converters,"ptr< ork::Program >",name);
	}

};

ptr< ork::Program >* LunaTraits< ptr< ork::Program > >::_bind_ctor(lua_State *L) {
	return new ptr< ork::Program >();
}

void LunaTraits< ptr< ork::Program > >::_bind_dtor(ptr< ork::Program >* obj) {
	delete obj;
}

const char LunaTraits< ptr< ork::Program > >::className[] = "ptr_ork_Program";
const char LunaTraits< ptr< ork::Program > >::fullName[] = "ptr< ork::Program >";
const char LunaTraits< ptr< ork::Program > >::moduleName[] = "proland";
const char* LunaTraits< ptr< ork::Program > >::parents[] = {0};
const int LunaTraits< ptr< ork::Program > >::hash = 38954662;
const int LunaTraits< ptr< ork::Program > >::uniqueIDs[] = {38954662,0};

luna_RegType LunaTraits< ptr< ork::Program > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_ork_Program::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_ork_Program::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< ork::Program > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< ork::Program > >::enumValues[] = {
	{0,0}
};


