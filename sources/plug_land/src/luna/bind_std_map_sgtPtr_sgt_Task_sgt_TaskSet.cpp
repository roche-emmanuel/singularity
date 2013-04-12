#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_TaskSet {
public:
	typedef Luna< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61782390) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< sgtPtr< sgt::Task >, sgt::TaskSet >*)");
		}

		std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* rhs =(Luna< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::check(L,2));
		std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* self=(Luna< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::check(L,1));
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

		std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* self=(Luna< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< sgtPtr< sgt::Task >, sgt::TaskSet >");
		
		return luna_dynamicCast(L,converters,"std::map< sgtPtr< sgt::Task >, sgt::TaskSet >",name);
	}

};

std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::_bind_ctor(lua_State *L) {
	return new std::map< sgtPtr< sgt::Task >, sgt::TaskSet >();
}

void LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::_bind_dtor(std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* obj) {
	delete obj;
}

const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::className[] = "std_map_sgtPtr_sgt_Task_sgt_TaskSet";
const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::fullName[] = "std::map< sgtPtr< sgt::Task >, sgt::TaskSet >";
const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::moduleName[] = "land";
const char* LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::parents[] = {0};
const int LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::hash = 61782390;
const int LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::uniqueIDs[] = {61782390,0};

luna_RegType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_TaskSet::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_TaskSet::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > >::enumValues[] = {
	{0,0}
};


