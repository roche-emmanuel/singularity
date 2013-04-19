#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_sgt_Task {
public:
	typedef Luna< sgtPtr< sgt::Task > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6988042) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< sgt::Task >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::Task >* rhs =(Luna< sgtPtr< sgt::Task > >::check(L,2));
		sgtPtr< sgt::Task >* self=(Luna< sgtPtr< sgt::Task > >::check(L,1));
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

		sgtPtr< sgt::Task >* self=(Luna< sgtPtr< sgt::Task > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< sgt::Task >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< sgt::Task >",name);
	}

};

sgtPtr< sgt::Task >* LunaTraits< sgtPtr< sgt::Task > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< sgt::Task >();
}

void LunaTraits< sgtPtr< sgt::Task > >::_bind_dtor(sgtPtr< sgt::Task >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< sgt::Task > >::className[] = "sgtPtr_sgt_Task";
const char LunaTraits< sgtPtr< sgt::Task > >::fullName[] = "sgtPtr< sgt::Task >";
const char LunaTraits< sgtPtr< sgt::Task > >::moduleName[] = "land";
const char* LunaTraits< sgtPtr< sgt::Task > >::parents[] = {0};
const int LunaTraits< sgtPtr< sgt::Task > >::hash = 6988042;
const int LunaTraits< sgtPtr< sgt::Task > >::uniqueIDs[] = {6988042,0};

luna_RegType LunaTraits< sgtPtr< sgt::Task > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_sgt_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_sgt_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< sgt::Task > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< sgt::Task > >::enumValues[] = {
	{0,0}
};


