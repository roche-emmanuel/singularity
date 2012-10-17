#include <plug_common.h>

class luna_wrapper_osg_Vec4sArray {
public:
	typedef Luna< osg::Vec4sArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97070066) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec4sArray*)");
		}

		osg::Vec4sArray* rhs =(Luna< osg::Vec4sArray >::check(L,2));
		osg::Vec4sArray* self=(Luna< osg::Vec4sArray >::check(L,1));
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

		osg::Vec4sArray* self=(Luna< osg::Vec4sArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4sArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec4sArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec4sArray* LunaTraits< osg::Vec4sArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec4sArray >::_bind_dtor(osg::Vec4sArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec4sArray >::className[] = "Vec4sArray";
const char LunaTraits< osg::Vec4sArray >::fullName[] = "osg::Vec4sArray";
const char LunaTraits< osg::Vec4sArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4sArray >::parents[] = {0};
const int LunaTraits< osg::Vec4sArray >::hash = 97070066;
const int LunaTraits< osg::Vec4sArray >::uniqueIDs[] = {97070066,0};

luna_RegType LunaTraits< osg::Vec4sArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec4sArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec4sArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4sArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4sArray >::enumValues[] = {
	{0,0}
};


