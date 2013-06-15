#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Value {
public:
	typedef Luna< ptr< Value > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3814840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Value >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Value >* rhs =(Luna< ptr< Value > >::check(L,2));
		ptr< Value >* self=(Luna< ptr< Value > >::check(L,1));
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

		ptr< Value >* self=(Luna< ptr< Value > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Value >");
		
		return luna_dynamicCast(L,converters,"ptr< Value >",name);
	}

};

ptr< Value >* LunaTraits< ptr< Value > >::_bind_ctor(lua_State *L) {
	return new ptr< Value >();
}

void LunaTraits< ptr< Value > >::_bind_dtor(ptr< Value >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Value > >::className[] = "ptr_Value";
const char LunaTraits< ptr< Value > >::fullName[] = "ptr< Value >";
const char LunaTraits< ptr< Value > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Value > >::parents[] = {0};
const int LunaTraits< ptr< Value > >::hash = 3814840;
const int LunaTraits< ptr< Value > >::uniqueIDs[] = {3814840,0};

luna_RegType LunaTraits< ptr< Value > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Value::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Value::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Value > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Value > >::enumValues[] = {
	{0,0}
};


