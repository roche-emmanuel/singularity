#include <plug_common.h>

class luna_wrapper_osg_Program_UniformBlockInfo {
public:
	typedef Luna< osg::Program::UniformBlockInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92598171) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::UniformBlockInfo*)");
		}

		osg::Program::UniformBlockInfo* rhs =(Luna< osg::Program::UniformBlockInfo >::check(L,2));
		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
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

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::UniformBlockInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::UniformBlockInfo",name);
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
	inline static bool _lg_typecheck_get_index(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_size(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Program::UniformBlockInfo::UniformBlockInfo()
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo() function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo()\nClass arguments details:\n");
		}


		return new osg::Program::UniformBlockInfo();
	}

	// osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size) function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);

		return new osg::Program::UniformBlockInfo(index, size);
	}

	// Overload binder for osg::Program::UniformBlockInfo::UniformBlockInfo
	static osg::Program::UniformBlockInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UniformBlockInfo, cannot match any of the overloads for function UniformBlockInfo:\n  UniformBlockInfo()\n  UniformBlockInfo(unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::Program::UniformBlockInfo::_index()
	static int _bind_get_index(lua_State *L) {
		if (!_lg_typecheck_get_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::UniformBlockInfo::_index() function, expected prototype:\nunsigned int osg::Program::UniformBlockInfo::_index()\nClass arguments details:\n");
		}


		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::UniformBlockInfo::_index(). Got : '%s'",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name());
		}
		unsigned int lret = self->_index;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::UniformBlockInfo::_size()
	static int _bind_get_size(lua_State *L) {
		if (!_lg_typecheck_get_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Program::UniformBlockInfo::_size() function, expected prototype:\nint osg::Program::UniformBlockInfo::_size()\nClass arguments details:\n");
		}


		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Program::UniformBlockInfo::_size(). Got : '%s'",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name());
		}
		int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::UniformBlockInfo::_index(unsigned int value)
	static int _bind_set_index(lua_State *L) {
		if (!_lg_typecheck_set_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::UniformBlockInfo::_index(unsigned int value) function, expected prototype:\nvoid osg::Program::UniformBlockInfo::_index(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::UniformBlockInfo::_index(unsigned int). Got : '%s'",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name());
		}
		self->_index = value;

		return 0;
	}

	// void osg::Program::UniformBlockInfo::_size(int value)
	static int _bind_set_size(lua_State *L) {
		if (!_lg_typecheck_set_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::UniformBlockInfo::_size(int value) function, expected prototype:\nvoid osg::Program::UniformBlockInfo::_size(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::UniformBlockInfo::_size(int). Got : '%s'",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:

};

osg::Program::UniformBlockInfo* LunaTraits< osg::Program::UniformBlockInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_UniformBlockInfo::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Program::UniformBlockInfo >::_bind_dtor(osg::Program::UniformBlockInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::UniformBlockInfo >::className[] = "Program_UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::fullName[] = "osg::Program::UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::UniformBlockInfo >::parents[] = {0};
const int LunaTraits< osg::Program::UniformBlockInfo >::hash = 92598171;
const int LunaTraits< osg::Program::UniformBlockInfo >::uniqueIDs[] = {92598171,0};

luna_RegType LunaTraits< osg::Program::UniformBlockInfo >::methods[] = {
	{"get_index", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_get_index},
	{"get_size", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_get_size},
	{"set_index", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_set_index},
	{"set_size", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_set_size},
	{"dynCast", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_UniformBlockInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::UniformBlockInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::UniformBlockInfo >::enumValues[] = {
	{0,0}
};


