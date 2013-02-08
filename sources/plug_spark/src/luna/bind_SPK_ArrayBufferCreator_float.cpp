#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_ArrayBufferCreator_float {
public:
	typedef Luna< SPK::ArrayBufferCreator< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5928724) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::ArrayBufferCreator< float >*)");
		}

		SPK::ArrayBufferCreator< float >* rhs =(Luna< SPK::ArrayBufferCreator< float > >::check(L,2));
		SPK::ArrayBufferCreator< float >* self=(Luna< SPK::ArrayBufferCreator< float > >::check(L,1));
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

		SPK::ArrayBufferCreator< float >* self=(Luna< SPK::ArrayBufferCreator< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::ArrayBufferCreator< float >");
		
		return luna_dynamicCast(L,converters,"SPK::ArrayBufferCreator< float >",name);
	}

};

SPK::ArrayBufferCreator< float >* LunaTraits< SPK::ArrayBufferCreator< float > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< SPK::ArrayBufferCreator< float > >::_bind_dtor(SPK::ArrayBufferCreator< float >* obj) {
	delete obj;
}

const char LunaTraits< SPK::ArrayBufferCreator< float > >::className[] = "SPK_ArrayBufferCreator_float";
const char LunaTraits< SPK::ArrayBufferCreator< float > >::fullName[] = "SPK::ArrayBufferCreator< float >";
const char LunaTraits< SPK::ArrayBufferCreator< float > >::moduleName[] = "spark";
const char* LunaTraits< SPK::ArrayBufferCreator< float > >::parents[] = {0};
const int LunaTraits< SPK::ArrayBufferCreator< float > >::hash = 5928724;
const int LunaTraits< SPK::ArrayBufferCreator< float > >::uniqueIDs[] = {5928724,0};

luna_RegType LunaTraits< SPK::ArrayBufferCreator< float > >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_ArrayBufferCreator_float::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_ArrayBufferCreator_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< SPK::ArrayBufferCreator< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::ArrayBufferCreator< float > >::enumValues[] = {
	{0,0}
};


