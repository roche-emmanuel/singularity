#include <plug_common.h>

class luna_wrapper_osg_Node_ParentList {
public:
	typedef Luna< osg::Node::ParentList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44162724) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Node::ParentList*)");
		}

		osg::Node::ParentList* rhs =(Luna< osg::Node::ParentList >::check(L,2));
		osg::Node::ParentList* self=(Luna< osg::Node::ParentList >::check(L,1));
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

		osg::Node::ParentList* self=(Luna< osg::Node::ParentList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Node::ParentList");
		
		return luna_dynamicCast(L,converters,"osg::Node::ParentList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Node::ParentList* LunaTraits< osg::Node::ParentList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Node::ParentList >::_bind_dtor(osg::Node::ParentList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Node::ParentList >::className[] = "ParentList";
const char LunaTraits< osg::Node::ParentList >::fullName[] = "osg::Node::ParentList";
const char LunaTraits< osg::Node::ParentList >::moduleName[] = "osg";
const char* LunaTraits< osg::Node::ParentList >::parents[] = {0};
const int LunaTraits< osg::Node::ParentList >::hash = 44162724;
const int LunaTraits< osg::Node::ParentList >::uniqueIDs[] = {44162724,0};

luna_RegType LunaTraits< osg::Node::ParentList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Node_ParentList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Node_ParentList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Node::ParentList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Node::ParentList >::enumValues[] = {
	{0,0}
};


