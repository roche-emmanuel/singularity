#include <plug_common.h>

class luna_wrapper_osg_KdTree_KdNode {
public:
	typedef Luna< osg::KdTree::KdNode > luna_t;

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

		osg::KdTree::KdNode* self=(Luna< osg::KdTree::KdNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::KdNode");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::KdNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::KdNode::KdNode()
	static osg::KdTree::KdNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode::KdNode() function, expected prototype:\nosg::KdTree::KdNode::KdNode()\nClass arguments details:\n");
		}


		return new osg::KdTree::KdNode();
	}

	// osg::KdTree::KdNode::KdNode(int f, int s)
	static osg::KdTree::KdNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode::KdNode(int f, int s) function, expected prototype:\nosg::KdTree::KdNode::KdNode(int f, int s)\nClass arguments details:\n");
		}

		int f=(int)lua_tointeger(L,1);
		int s=(int)lua_tointeger(L,2);

		return new osg::KdTree::KdNode(f, s);
	}

	// Overload binder for osg::KdTree::KdNode::KdNode
	static osg::KdTree::KdNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KdNode, cannot match any of the overloads for function KdNode:\n  KdNode()\n  KdNode(int, int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::KdTree::KdNode* LunaTraits< osg::KdTree::KdNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_KdNode::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::KdNode >::_bind_dtor(osg::KdTree::KdNode* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::KdNode >::className[] = "KdNode";
const char LunaTraits< osg::KdTree::KdNode >::fullName[] = "osg::KdTree::KdNode";
const char LunaTraits< osg::KdTree::KdNode >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::KdNode >::parents[] = {0};
const int LunaTraits< osg::KdTree::KdNode >::hash = 72782769;
const int LunaTraits< osg::KdTree::KdNode >::uniqueIDs[] = {72782769,0};

luna_RegType LunaTraits< osg::KdTree::KdNode >::methods[] = {
	{"dynCast", &luna_wrapper_osg_KdTree_KdNode::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::KdNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::KdNode >::enumValues[] = {
	{0,0}
};


