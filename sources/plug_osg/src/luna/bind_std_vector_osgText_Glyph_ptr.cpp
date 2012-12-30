#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgText_Glyph_ptr {
public:
	typedef Luna< std::vector< osgText::Glyph * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57567263) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgText::Glyph * >*)");
		}

		std::vector< osgText::Glyph * >* rhs =(Luna< std::vector< osgText::Glyph * > >::check(L,2));
		std::vector< osgText::Glyph * >* self=(Luna< std::vector< osgText::Glyph * > >::check(L,1));
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

		std::vector< osgText::Glyph * >* self=(Luna< std::vector< osgText::Glyph * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgText::Glyph * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgText::Glyph * >",name);
	}
};

std::vector< osgText::Glyph * >* LunaTraits< std::vector< osgText::Glyph * > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osgText::Glyph * > >::_bind_dtor(std::vector< osgText::Glyph * >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osgText::Glyph * > >::className[] = "std_vector_osgText_Glyph_ptr";
const char LunaTraits< std::vector< osgText::Glyph * > >::fullName[] = "std::vector< osgText::Glyph * >";
const char LunaTraits< std::vector< osgText::Glyph * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgText::Glyph * > >::parents[] = {0};
const int LunaTraits< std::vector< osgText::Glyph * > >::hash = 57567263;
const int LunaTraits< std::vector< osgText::Glyph * > >::uniqueIDs[] = {57567263,0};

luna_RegType LunaTraits< std::vector< osgText::Glyph * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgText_Glyph_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgText_Glyph_ptr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgText::Glyph * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgText::Glyph * > >::enumValues[] = {
	{0,0}
};

