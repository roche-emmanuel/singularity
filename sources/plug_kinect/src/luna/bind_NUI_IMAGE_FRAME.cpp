#include <plug_common.h>

class luna_wrapper_NUI_IMAGE_FRAME {
public:
	typedef Luna< NUI_IMAGE_FRAME > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23034412) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(NUI_IMAGE_FRAME*)");
		}

		NUI_IMAGE_FRAME* rhs =(Luna< NUI_IMAGE_FRAME >::check(L,2));
		NUI_IMAGE_FRAME* self=(Luna< NUI_IMAGE_FRAME >::check(L,1));
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

		NUI_IMAGE_FRAME* self=(Luna< NUI_IMAGE_FRAME >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("NUI_IMAGE_FRAME");
		
		return luna_dynamicCast(L,converters,"NUI_IMAGE_FRAME",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

NUI_IMAGE_FRAME* LunaTraits< NUI_IMAGE_FRAME >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< NUI_IMAGE_FRAME >::_bind_dtor(NUI_IMAGE_FRAME* obj) {
	delete obj;
}

const char LunaTraits< NUI_IMAGE_FRAME >::className[] = "NUI_IMAGE_FRAME";
const char LunaTraits< NUI_IMAGE_FRAME >::fullName[] = "NUI_IMAGE_FRAME";
const char LunaTraits< NUI_IMAGE_FRAME >::moduleName[] = "kinect";
const char* LunaTraits< NUI_IMAGE_FRAME >::parents[] = {0};
const int LunaTraits< NUI_IMAGE_FRAME >::hash = 23034412;
const int LunaTraits< NUI_IMAGE_FRAME >::uniqueIDs[] = {23034412,0};

luna_RegType LunaTraits< NUI_IMAGE_FRAME >::methods[] = {
	{"dynCast", &luna_wrapper_NUI_IMAGE_FRAME::_bind_dynCast},
	{"__eq", &luna_wrapper_NUI_IMAGE_FRAME::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< NUI_IMAGE_FRAME >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< NUI_IMAGE_FRAME >::enumValues[] = {
	{0,0}
};


