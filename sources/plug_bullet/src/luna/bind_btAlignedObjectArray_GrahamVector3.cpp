#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_GrahamVector3 {
public:
	typedef Luna< btAlignedObjectArray< GrahamVector3 > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78781161) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< GrahamVector3 >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< GrahamVector3 >* rhs =(Luna< btAlignedObjectArray< GrahamVector3 > >::check(L,2));
		btAlignedObjectArray< GrahamVector3 >* self=(Luna< btAlignedObjectArray< GrahamVector3 > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btAlignedObjectArray< GrahamVector3 >* self=(Luna< btAlignedObjectArray< GrahamVector3 > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< GrahamVector3 >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< GrahamVector3 >",name);
	}

};

btAlignedObjectArray< GrahamVector3 >* LunaTraits< btAlignedObjectArray< GrahamVector3 > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< GrahamVector3 >();
}

void LunaTraits< btAlignedObjectArray< GrahamVector3 > >::_bind_dtor(btAlignedObjectArray< GrahamVector3 >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< GrahamVector3 > >::className[] = "btAlignedObjectArray_GrahamVector3";
const char LunaTraits< btAlignedObjectArray< GrahamVector3 > >::fullName[] = "btAlignedObjectArray< GrahamVector3 >";
const char LunaTraits< btAlignedObjectArray< GrahamVector3 > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< GrahamVector3 > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< GrahamVector3 > >::hash = 78781161;
const int LunaTraits< btAlignedObjectArray< GrahamVector3 > >::uniqueIDs[] = {78781161,0};

luna_RegType LunaTraits< btAlignedObjectArray< GrahamVector3 > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_GrahamVector3::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_GrahamVector3::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< GrahamVector3 > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< GrahamVector3 > >::enumValues[] = {
	{0,0}
};


