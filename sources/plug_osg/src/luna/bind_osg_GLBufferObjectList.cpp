#include <plug_common.h>

class luna_wrapper_osg_GLBufferObjectList {
public:
	typedef Luna< osg::GLBufferObjectList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59774582) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GLBufferObjectList*)");
		}

		osg::GLBufferObjectList* rhs =(Luna< osg::GLBufferObjectList >::check(L,2));
		osg::GLBufferObjectList* self=(Luna< osg::GLBufferObjectList >::check(L,1));
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

		osg::GLBufferObjectList* self=(Luna< osg::GLBufferObjectList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GLBufferObjectList");
		
		return luna_dynamicCast(L,converters,"osg::GLBufferObjectList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GLBufferObjectList* LunaTraits< osg::GLBufferObjectList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::GLBufferObjectList >::_bind_dtor(osg::GLBufferObjectList* obj) {
	delete obj;
}

const char LunaTraits< osg::GLBufferObjectList >::className[] = "GLBufferObjectList";
const char LunaTraits< osg::GLBufferObjectList >::fullName[] = "osg::GLBufferObjectList";
const char LunaTraits< osg::GLBufferObjectList >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObjectList >::parents[] = {0};
const int LunaTraits< osg::GLBufferObjectList >::hash = 59774582;
const int LunaTraits< osg::GLBufferObjectList >::uniqueIDs[] = {59774582,0};

luna_RegType LunaTraits< osg::GLBufferObjectList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GLBufferObjectList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GLBufferObjectList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObjectList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObjectList >::enumValues[] = {
	{0,0}
};


