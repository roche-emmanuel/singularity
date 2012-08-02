#include <plug_common.h>

class luna_wrapper_osg_KdTree_KdNodeList {
public:
	typedef Luna< osg::KdTree::KdNodeList > luna_t;

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

		osg::KdTree::KdNodeList* self=(Luna< osg::KdTree::KdNodeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::KdNodeList");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::KdNodeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::KdTree::KdNodeList* LunaTraits< osg::KdTree::KdNodeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::KdTree::KdNodeList >::_bind_dtor(osg::KdTree::KdNodeList* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::KdNodeList >::className[] = "KdNodeList";
const char LunaTraits< osg::KdTree::KdNodeList >::fullName[] = "osg::KdTree::KdNodeList";
const char LunaTraits< osg::KdTree::KdNodeList >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::KdNodeList >::parents[] = {0};
const int LunaTraits< osg::KdTree::KdNodeList >::hash = 4517862;
const int LunaTraits< osg::KdTree::KdNodeList >::uniqueIDs[] = {4517862,0};

luna_RegType LunaTraits< osg::KdTree::KdNodeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_KdNodeList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::KdNodeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::KdNodeList >::enumValues[] = {
	{0,0}
};


