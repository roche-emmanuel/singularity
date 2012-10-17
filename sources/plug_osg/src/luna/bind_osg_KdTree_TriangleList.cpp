#include <plug_common.h>

class luna_wrapper_osg_KdTree_TriangleList {
public:
	typedef Luna< osg::KdTree::TriangleList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51468997) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::TriangleList*)");
		}

		osg::KdTree::TriangleList* rhs =(Luna< osg::KdTree::TriangleList >::check(L,2));
		osg::KdTree::TriangleList* self=(Luna< osg::KdTree::TriangleList >::check(L,1));
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

		osg::KdTree::TriangleList* self=(Luna< osg::KdTree::TriangleList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::TriangleList");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::TriangleList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::KdTree::TriangleList* LunaTraits< osg::KdTree::TriangleList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::KdTree::TriangleList >::_bind_dtor(osg::KdTree::TriangleList* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::TriangleList >::className[] = "TriangleList";
const char LunaTraits< osg::KdTree::TriangleList >::fullName[] = "osg::KdTree::TriangleList";
const char LunaTraits< osg::KdTree::TriangleList >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::TriangleList >::parents[] = {0};
const int LunaTraits< osg::KdTree::TriangleList >::hash = 51468997;
const int LunaTraits< osg::KdTree::TriangleList >::uniqueIDs[] = {51468997,0};

luna_RegType LunaTraits< osg::KdTree::TriangleList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_TriangleList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_TriangleList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::TriangleList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::TriangleList >::enumValues[] = {
	{0,0}
};


