#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Task {
public:
	typedef Luna< ptr< Task > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30158358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Task >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Task >* rhs =(Luna< ptr< Task > >::check(L,2));
		ptr< Task >* self=(Luna< ptr< Task > >::check(L,1));
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

		ptr< Task >* self=(Luna< ptr< Task > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Task >");
		
		return luna_dynamicCast(L,converters,"ptr< Task >",name);
	}

};

ptr< Task >* LunaTraits< ptr< Task > >::_bind_ctor(lua_State *L) {
	return new ptr< Task >();
}

void LunaTraits< ptr< Task > >::_bind_dtor(ptr< Task >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Task > >::className[] = "ptr_Task";
const char LunaTraits< ptr< Task > >::fullName[] = "ptr< Task >";
const char LunaTraits< ptr< Task > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Task > >::parents[] = {0};
const int LunaTraits< ptr< Task > >::hash = 30158358;
const int LunaTraits< ptr< Task > >::uniqueIDs[] = {30158358,0};

luna_RegType LunaTraits< ptr< Task > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Task > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Task > >::enumValues[] = {
	{0,0}
};


