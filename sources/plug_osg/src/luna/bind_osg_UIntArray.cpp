#include <plug_common.h>

class luna_wrapper_osg_UIntArray {
public:
	typedef Luna< osg::UIntArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86600648) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::UIntArray*)");
		}

		osg::UIntArray* rhs =(Luna< osg::UIntArray >::check(L,2));
		osg::UIntArray* self=(Luna< osg::UIntArray >::check(L,1));
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

		osg::UIntArray* self=(Luna< osg::UIntArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UIntArray");
		
		return luna_dynamicCast(L,converters,"osg::UIntArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UIntArray* LunaTraits< osg::UIntArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::UIntArray >::_bind_dtor(osg::UIntArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::UIntArray >::className[] = "UIntArray";
const char LunaTraits< osg::UIntArray >::fullName[] = "osg::UIntArray";
const char LunaTraits< osg::UIntArray >::moduleName[] = "osg";
const char* LunaTraits< osg::UIntArray >::parents[] = {0};
const int LunaTraits< osg::UIntArray >::hash = 86600648;
const int LunaTraits< osg::UIntArray >::uniqueIDs[] = {86600648,0};

luna_RegType LunaTraits< osg::UIntArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UIntArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_UIntArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UIntArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UIntArray >::enumValues[] = {
	{0,0}
};


