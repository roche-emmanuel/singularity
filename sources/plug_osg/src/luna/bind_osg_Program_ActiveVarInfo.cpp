#include <plug_common.h>

class luna_wrapper_osg_Program_ActiveVarInfo {
public:
	typedef Luna< osg::Program::ActiveVarInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71916305) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::ActiveVarInfo*)");
		}

		osg::Program::ActiveVarInfo* rhs =(Luna< osg::Program::ActiveVarInfo >::check(L,2));
		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
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

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::ActiveVarInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::ActiveVarInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_location(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_location(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_type(lua_State *L) {
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
	// osg::Program::ActiveVarInfo::ActiveVarInfo()
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo() function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo()\nClass arguments details:\n");
		}


		return new osg::Program::ActiveVarInfo();
	}

	// osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size) function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)\nClass arguments details:\n");
		}

		int loc=(int)lua_tointeger(L,1);
		unsigned int type=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		return new osg::Program::ActiveVarInfo(loc, type, size);
	}

	// Overload binder for osg::Program::ActiveVarInfo::ActiveVarInfo
	static osg::Program::ActiveVarInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ActiveVarInfo, cannot match any of the overloads for function ActiveVarInfo:\n  ActiveVarInfo()\n  ActiveVarInfo(int, unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// int osg::Program::ActiveVarInfo::_location()
	static int _bind_get_location(lua_State *L) {
		if (!_lg_typecheck_get_location(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Program::ActiveVarInfo::_location() function, expected prototype:\nint osg::Program::ActiveVarInfo::_location()\nClass arguments details:\n");
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Program::ActiveVarInfo::_location(). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		int lret = self->_location;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Program::ActiveVarInfo::_type()
	static int _bind_get_type(lua_State *L) {
		if (!_lg_typecheck_get_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ActiveVarInfo::_type() function, expected prototype:\nunsigned int osg::Program::ActiveVarInfo::_type()\nClass arguments details:\n");
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ActiveVarInfo::_type(). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		unsigned int lret = self->_type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::ActiveVarInfo::_size()
	static int _bind_get_size(lua_State *L) {
		if (!_lg_typecheck_get_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Program::ActiveVarInfo::_size() function, expected prototype:\nint osg::Program::ActiveVarInfo::_size()\nClass arguments details:\n");
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Program::ActiveVarInfo::_size(). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::ActiveVarInfo::_location(int value)
	static int _bind_set_location(lua_State *L) {
		if (!_lg_typecheck_set_location(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_location(int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_location(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_location(int). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		self->_location = value;

		return 0;
	}

	// void osg::Program::ActiveVarInfo::_type(unsigned int value)
	static int _bind_set_type(lua_State *L) {
		if (!_lg_typecheck_set_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_type(unsigned int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_type(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_type(unsigned int). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		self->_type = value;

		return 0;
	}

	// void osg::Program::ActiveVarInfo::_size(int value)
	static int _bind_set_size(lua_State *L) {
		if (!_lg_typecheck_set_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_size(int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_size(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_size(int). Got : '%s'",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:

};

osg::Program::ActiveVarInfo* LunaTraits< osg::Program::ActiveVarInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_ActiveVarInfo::_bind_ctor(L);
}

void LunaTraits< osg::Program::ActiveVarInfo >::_bind_dtor(osg::Program::ActiveVarInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::ActiveVarInfo >::className[] = "Program_ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::fullName[] = "osg::Program::ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ActiveVarInfo >::parents[] = {0};
const int LunaTraits< osg::Program::ActiveVarInfo >::hash = 71916305;
const int LunaTraits< osg::Program::ActiveVarInfo >::uniqueIDs[] = {71916305,0};

luna_RegType LunaTraits< osg::Program::ActiveVarInfo >::methods[] = {
	{"get_location", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_get_location},
	{"get_type", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_get_type},
	{"get_size", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_get_size},
	{"set_location", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_set_location},
	{"set_type", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_set_type},
	{"set_size", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_set_size},
	{"dynCast", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_ActiveVarInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ActiveVarInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ActiveVarInfo >::enumValues[] = {
	{0,0}
};


