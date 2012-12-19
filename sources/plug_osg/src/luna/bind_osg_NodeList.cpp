#include <plug_common.h>

class luna_wrapper_osg_NodeList {
public:
	typedef Luna< osg::NodeList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52729833) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::NodeList*)");
		}

		osg::NodeList* rhs =(Luna< osg::NodeList >::check(L,2));
		osg::NodeList* self=(Luna< osg::NodeList >::check(L,1));
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

		osg::NodeList* self=(Luna< osg::NodeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodeList");
		
		return luna_dynamicCast(L,converters,"osg::NodeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::NodeList* LunaTraits< osg::NodeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::NodeList >::_bind_dtor(osg::NodeList* obj) {
	delete obj;
}

const char LunaTraits< osg::NodeList >::className[] = "NodeList";
const char LunaTraits< osg::NodeList >::fullName[] = "osg::NodeList";
const char LunaTraits< osg::NodeList >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeList >::parents[] = {0};
const int LunaTraits< osg::NodeList >::hash = 52729833;
const int LunaTraits< osg::NodeList >::uniqueIDs[] = {52729833,0};

luna_RegType LunaTraits< osg::NodeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_NodeList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_NodeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeList >::enumValues[] = {
	{0,0}
};


