#include <plug_common.h>

class luna_wrapper_osg_KdTree_BuildOptions {
public:
	typedef Luna< osg::KdTree::BuildOptions > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4714115) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::BuildOptions*)");
		}

		osg::KdTree::BuildOptions* rhs =(Luna< osg::KdTree::BuildOptions >::check(L,2));
		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
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

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::BuildOptions");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::BuildOptions",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_numVerticesProcessed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_targetNumTrianglesPerLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_maxNumLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_numVerticesProcessed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_targetNumTrianglesPerLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_maxNumLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::BuildOptions::BuildOptions()
	static osg::KdTree::BuildOptions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::BuildOptions::BuildOptions() function, expected prototype:\nosg::KdTree::BuildOptions::BuildOptions()\nClass arguments details:\n");
		}


		return new osg::KdTree::BuildOptions();
	}


	// Function binds:
	// unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed()
	static int _bind_get_numVerticesProcessed(lua_State *L) {
		if (!_lg_typecheck_get_numVerticesProcessed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_numVerticesProcessed()\nClass arguments details:\n");
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed(). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		unsigned int lret = self->_numVerticesProcessed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf()
	static int _bind_get_targetNumTrianglesPerLeaf(lua_State *L) {
		if (!_lg_typecheck_get_targetNumTrianglesPerLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf()\nClass arguments details:\n");
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		unsigned int lret = self->_targetNumTrianglesPerLeaf;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::BuildOptions::_maxNumLevels()
	static int _bind_get_maxNumLevels(lua_State *L) {
		if (!_lg_typecheck_get_maxNumLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_maxNumLevels() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_maxNumLevels()\nClass arguments details:\n");
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_maxNumLevels(). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		unsigned int lret = self->_maxNumLevels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value)
	static int _bind_set_numVerticesProcessed(lua_State *L) {
		if (!_lg_typecheck_set_numVerticesProcessed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		self->_numVerticesProcessed = value;

		return 0;
	}

	// void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value)
	static int _bind_set_targetNumTrianglesPerLeaf(lua_State *L) {
		if (!_lg_typecheck_set_targetNumTrianglesPerLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		self->_targetNumTrianglesPerLeaf = value;

		return 0;
	}

	// void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value)
	static int _bind_set_maxNumLevels(lua_State *L) {
		if (!_lg_typecheck_set_maxNumLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name());
		}
		self->_maxNumLevels = value;

		return 0;
	}


	// Operator binds:

};

osg::KdTree::BuildOptions* LunaTraits< osg::KdTree::BuildOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_BuildOptions::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::BuildOptions >::_bind_dtor(osg::KdTree::BuildOptions* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::BuildOptions >::className[] = "KdTree_BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::fullName[] = "osg::KdTree::BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::BuildOptions >::parents[] = {0};
const int LunaTraits< osg::KdTree::BuildOptions >::hash = 4714115;
const int LunaTraits< osg::KdTree::BuildOptions >::uniqueIDs[] = {4714115,0};

luna_RegType LunaTraits< osg::KdTree::BuildOptions >::methods[] = {
	{"get_numVerticesProcessed", &luna_wrapper_osg_KdTree_BuildOptions::_bind_get_numVerticesProcessed},
	{"get_targetNumTrianglesPerLeaf", &luna_wrapper_osg_KdTree_BuildOptions::_bind_get_targetNumTrianglesPerLeaf},
	{"get_maxNumLevels", &luna_wrapper_osg_KdTree_BuildOptions::_bind_get_maxNumLevels},
	{"set_numVerticesProcessed", &luna_wrapper_osg_KdTree_BuildOptions::_bind_set_numVerticesProcessed},
	{"set_targetNumTrianglesPerLeaf", &luna_wrapper_osg_KdTree_BuildOptions::_bind_set_targetNumTrianglesPerLeaf},
	{"set_maxNumLevels", &luna_wrapper_osg_KdTree_BuildOptions::_bind_set_maxNumLevels},
	{"dynCast", &luna_wrapper_osg_KdTree_BuildOptions::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_BuildOptions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::BuildOptions >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::BuildOptions >::enumValues[] = {
	{0,0}
};


