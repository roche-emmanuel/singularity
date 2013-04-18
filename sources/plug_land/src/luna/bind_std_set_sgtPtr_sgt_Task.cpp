#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_sgtPtr_sgt_Task {
public:
	typedef Luna< std::set< sgtPtr< sgt::Task > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24456226) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< sgtPtr< sgt::Task > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< sgtPtr< sgt::Task > >* rhs =(Luna< std::set< sgtPtr< sgt::Task > > >::check(L,2));
		std::set< sgtPtr< sgt::Task > >* self=(Luna< std::set< sgtPtr< sgt::Task > > >::check(L,1));
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

		std::set< sgtPtr< sgt::Task > >* self=(Luna< std::set< sgtPtr< sgt::Task > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< sgtPtr< sgt::Task > >");
		
		return luna_dynamicCast(L,converters,"std::set< sgtPtr< sgt::Task > >",name);
	}

};

std::set< sgtPtr< sgt::Task > >* LunaTraits< std::set< sgtPtr< sgt::Task > > >::_bind_ctor(lua_State *L) {
	return new std::set< sgtPtr< sgt::Task > >();
}

void LunaTraits< std::set< sgtPtr< sgt::Task > > >::_bind_dtor(std::set< sgtPtr< sgt::Task > >* obj) {
	delete obj;
}

const char LunaTraits< std::set< sgtPtr< sgt::Task > > >::className[] = "std_set_sgtPtr_sgt_Task";
const char LunaTraits< std::set< sgtPtr< sgt::Task > > >::fullName[] = "std::set< sgtPtr< sgt::Task > >";
const char LunaTraits< std::set< sgtPtr< sgt::Task > > >::moduleName[] = "land";
const char* LunaTraits< std::set< sgtPtr< sgt::Task > > >::parents[] = {0};
const int LunaTraits< std::set< sgtPtr< sgt::Task > > >::hash = 24456226;
const int LunaTraits< std::set< sgtPtr< sgt::Task > > >::uniqueIDs[] = {24456226,0};

luna_RegType LunaTraits< std::set< sgtPtr< sgt::Task > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_sgtPtr_sgt_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_sgtPtr_sgt_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< sgtPtr< sgt::Task > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< sgtPtr< sgt::Task > > >::enumValues[] = {
	{0,0}
};


