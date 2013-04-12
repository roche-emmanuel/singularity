#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_Task_TaskSet {
public:
	typedef Luna< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26583697) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >*)");
		}

		std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >* rhs =(Luna< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::check(L,2));
		std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >* self=(Luna< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::check(L,1));
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

		std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >* self=(Luna< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >");
		
		return luna_dynamicCast(L,converters,"std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >",name);
	}

};

std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >* LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::_bind_ctor(lua_State *L) {
	return new std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >();
}

void LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::_bind_dtor(std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >* obj) {
	delete obj;
}

const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::className[] = "std_map_sgtPtr_sgt_Task_sgt_Task_TaskSet";
const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::fullName[] = "std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet >";
const char LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::moduleName[] = "land";
const char* LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::parents[] = {0};
const int LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::hash = 26583697;
const int LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::uniqueIDs[] = {26583697,0};

luna_RegType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_Task_TaskSet::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_sgtPtr_sgt_Task_sgt_Task_TaskSet::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::Task::TaskSet > >::enumValues[] = {
	{0,0}
};


