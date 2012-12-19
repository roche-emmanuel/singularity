#include <plug_common.h>

class luna_wrapper_osg_ClipNode_ClipPlaneList {
public:
	typedef Luna< osg::ClipNode::ClipPlaneList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73670266) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ClipNode::ClipPlaneList*)");
		}

		osg::ClipNode::ClipPlaneList* rhs =(Luna< osg::ClipNode::ClipPlaneList >::check(L,2));
		osg::ClipNode::ClipPlaneList* self=(Luna< osg::ClipNode::ClipPlaneList >::check(L,1));
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

		osg::ClipNode::ClipPlaneList* self=(Luna< osg::ClipNode::ClipPlaneList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ClipNode::ClipPlaneList");
		
		return luna_dynamicCast(L,converters,"osg::ClipNode::ClipPlaneList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ClipNode::ClipPlaneList* LunaTraits< osg::ClipNode::ClipPlaneList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ClipNode::ClipPlaneList >::_bind_dtor(osg::ClipNode::ClipPlaneList* obj) {
	delete obj;
}

const char LunaTraits< osg::ClipNode::ClipPlaneList >::className[] = "ClipPlaneList";
const char LunaTraits< osg::ClipNode::ClipPlaneList >::fullName[] = "osg::ClipNode::ClipPlaneList";
const char LunaTraits< osg::ClipNode::ClipPlaneList >::moduleName[] = "osg";
const char* LunaTraits< osg::ClipNode::ClipPlaneList >::parents[] = {0};
const int LunaTraits< osg::ClipNode::ClipPlaneList >::hash = 73670266;
const int LunaTraits< osg::ClipNode::ClipPlaneList >::uniqueIDs[] = {73670266,0};

luna_RegType LunaTraits< osg::ClipNode::ClipPlaneList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ClipNode_ClipPlaneList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ClipNode_ClipPlaneList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClipNode::ClipPlaneList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClipNode::ClipPlaneList >::enumValues[] = {
	{0,0}
};


