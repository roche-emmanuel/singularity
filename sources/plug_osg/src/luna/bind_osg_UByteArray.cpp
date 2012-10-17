#include <plug_common.h>

class luna_wrapper_osg_UByteArray {
public:
	typedef Luna< osg::UByteArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72202494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::UByteArray*)");
		}

		osg::UByteArray* rhs =(Luna< osg::UByteArray >::check(L,2));
		osg::UByteArray* self=(Luna< osg::UByteArray >::check(L,1));
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

		osg::UByteArray* self=(Luna< osg::UByteArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UByteArray");
		
		return luna_dynamicCast(L,converters,"osg::UByteArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UByteArray* LunaTraits< osg::UByteArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::UByteArray >::_bind_dtor(osg::UByteArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::UByteArray >::className[] = "UByteArray";
const char LunaTraits< osg::UByteArray >::fullName[] = "osg::UByteArray";
const char LunaTraits< osg::UByteArray >::moduleName[] = "osg";
const char* LunaTraits< osg::UByteArray >::parents[] = {0};
const int LunaTraits< osg::UByteArray >::hash = 72202494;
const int LunaTraits< osg::UByteArray >::uniqueIDs[] = {72202494,0};

luna_RegType LunaTraits< osg::UByteArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UByteArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_UByteArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UByteArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UByteArray >::enumValues[] = {
	{0,0}
};


