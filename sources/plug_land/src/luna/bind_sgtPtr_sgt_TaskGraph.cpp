#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_sgt_TaskGraph {
public:
	typedef Luna< sgtPtr< sgt::TaskGraph > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63812206) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< sgt::TaskGraph >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::TaskGraph >* rhs =(Luna< sgtPtr< sgt::TaskGraph > >::check(L,2));
		sgtPtr< sgt::TaskGraph >* self=(Luna< sgtPtr< sgt::TaskGraph > >::check(L,1));
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

		sgtPtr< sgt::TaskGraph >* self=(Luna< sgtPtr< sgt::TaskGraph > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< sgt::TaskGraph >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< sgt::TaskGraph >",name);
	}

};

sgtPtr< sgt::TaskGraph >* LunaTraits< sgtPtr< sgt::TaskGraph > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< sgt::TaskGraph >();
}

void LunaTraits< sgtPtr< sgt::TaskGraph > >::_bind_dtor(sgtPtr< sgt::TaskGraph >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< sgt::TaskGraph > >::className[] = "sgtPtr_sgt_TaskGraph";
const char LunaTraits< sgtPtr< sgt::TaskGraph > >::fullName[] = "sgtPtr< sgt::TaskGraph >";
const char LunaTraits< sgtPtr< sgt::TaskGraph > >::moduleName[] = "land";
const char* LunaTraits< sgtPtr< sgt::TaskGraph > >::parents[] = {0};
const int LunaTraits< sgtPtr< sgt::TaskGraph > >::hash = 63812206;
const int LunaTraits< sgtPtr< sgt::TaskGraph > >::uniqueIDs[] = {63812206,0};

luna_RegType LunaTraits< sgtPtr< sgt::TaskGraph > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_sgt_TaskGraph::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_sgt_TaskGraph::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< sgt::TaskGraph > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< sgt::TaskGraph > >::enumValues[] = {
	{0,0}
};


