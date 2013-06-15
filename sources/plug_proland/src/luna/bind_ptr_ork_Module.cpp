#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_ork_Module {
public:
	typedef Luna< ptr< ork::Module > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98748177) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< ork::Module >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< ork::Module >* rhs =(Luna< ptr< ork::Module > >::check(L,2));
		ptr< ork::Module >* self=(Luna< ptr< ork::Module > >::check(L,1));
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

		ptr< ork::Module >* self=(Luna< ptr< ork::Module > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< ork::Module >");
		
		return luna_dynamicCast(L,converters,"ptr< ork::Module >",name);
	}

};

ptr< ork::Module >* LunaTraits< ptr< ork::Module > >::_bind_ctor(lua_State *L) {
	return new ptr< ork::Module >();
}

void LunaTraits< ptr< ork::Module > >::_bind_dtor(ptr< ork::Module >* obj) {
	delete obj;
}

const char LunaTraits< ptr< ork::Module > >::className[] = "ptr_ork_Module";
const char LunaTraits< ptr< ork::Module > >::fullName[] = "ptr< ork::Module >";
const char LunaTraits< ptr< ork::Module > >::moduleName[] = "proland";
const char* LunaTraits< ptr< ork::Module > >::parents[] = {0};
const int LunaTraits< ptr< ork::Module > >::hash = 98748177;
const int LunaTraits< ptr< ork::Module > >::uniqueIDs[] = {98748177,0};

luna_RegType LunaTraits< ptr< ork::Module > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_ork_Module::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_ork_Module::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< ork::Module > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< ork::Module > >::enumValues[] = {
	{0,0}
};


