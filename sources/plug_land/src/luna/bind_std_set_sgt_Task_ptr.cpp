#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_sgt_Task_ptr {
public:
	typedef Luna< std::set< sgt::Task * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42469568) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< sgt::Task * >*)");
		}

		std::set< sgt::Task * >* rhs =(Luna< std::set< sgt::Task * > >::check(L,2));
		std::set< sgt::Task * >* self=(Luna< std::set< sgt::Task * > >::check(L,1));
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

		std::set< sgt::Task * >* self=(Luna< std::set< sgt::Task * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< sgt::Task * >");
		
		return luna_dynamicCast(L,converters,"std::set< sgt::Task * >",name);
	}

};

std::set< sgt::Task * >* LunaTraits< std::set< sgt::Task * > >::_bind_ctor(lua_State *L) {
	return new std::set< sgt::Task * >();
}

void LunaTraits< std::set< sgt::Task * > >::_bind_dtor(std::set< sgt::Task * >* obj) {
	delete obj;
}

const char LunaTraits< std::set< sgt::Task * > >::className[] = "std_set_sgt_Task_ptr";
const char LunaTraits< std::set< sgt::Task * > >::fullName[] = "std::set< sgt::Task * >";
const char LunaTraits< std::set< sgt::Task * > >::moduleName[] = "land";
const char* LunaTraits< std::set< sgt::Task * > >::parents[] = {0};
const int LunaTraits< std::set< sgt::Task * > >::hash = 42469568;
const int LunaTraits< std::set< sgt::Task * > >::uniqueIDs[] = {42469568,0};

luna_RegType LunaTraits< std::set< sgt::Task * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_sgt_Task_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_sgt_Task_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< sgt::Task * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< sgt::Task * > >::enumValues[] = {
	{0,0}
};


