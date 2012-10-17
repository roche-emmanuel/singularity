#include <plug_common.h>

class luna_wrapper_osg_ArgumentParser_Parameter {
public:
	typedef Luna< osg::ArgumentParser::Parameter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67360031) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ArgumentParser::Parameter*)");
		}

		osg::ArgumentParser::Parameter* rhs =(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		osg::ArgumentParser::Parameter* self=(Luna< osg::ArgumentParser::Parameter >::check(L,1));
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

		osg::ArgumentParser::Parameter* self=(Luna< osg::ArgumentParser::Parameter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ArgumentParser::Parameter");
		
		return luna_dynamicCast(L,converters,"osg::ArgumentParser::Parameter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67360031) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ArgumentParser::Parameter::Parameter(bool & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(bool & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(bool & value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,1)==1);

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(float & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(float & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(float & value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,1);

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(double & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(double & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(double & value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,1);

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(int & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(int & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(int & value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,1);

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(unsigned int & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(unsigned int & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(unsigned int & value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,1);

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(std::string & value)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(std::string & value) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(std::string & value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,1),lua_objlen(L,1));

		return new osg::ArgumentParser::Parameter(value);
	}

	// osg::ArgumentParser::Parameter::Parameter(const osg::ArgumentParser::Parameter & param)
	static osg::ArgumentParser::Parameter* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::Parameter::Parameter(const osg::ArgumentParser::Parameter & param) function, expected prototype:\nosg::ArgumentParser::Parameter::Parameter(const osg::ArgumentParser::Parameter & param)\nClass arguments details:\narg 1 ID = 67360031\n");
		}

		const osg::ArgumentParser::Parameter* param_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,1));
		if( !param_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg param in osg::ArgumentParser::Parameter::Parameter function");
		}
		const osg::ArgumentParser::Parameter & param=*param_ptr;

		return new osg::ArgumentParser::Parameter(param);
	}

	// Overload binder for osg::ArgumentParser::Parameter::Parameter
	static osg::ArgumentParser::Parameter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);

		luaL_error(L, "error in function Parameter, cannot match any of the overloads for function Parameter:\n  Parameter(bool &)\n  Parameter(float &)\n  Parameter(double &)\n  Parameter(int &)\n  Parameter(unsigned int &)\n  Parameter(std::string &)\n  Parameter(const osg::ArgumentParser::Parameter &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::ArgumentParser::Parameter::valid(const char * str) const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::Parameter::valid(const char * str) const function, expected prototype:\nbool osg::ArgumentParser::Parameter::valid(const char * str) const\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		osg::ArgumentParser::Parameter* self=(Luna< osg::ArgumentParser::Parameter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::Parameter::valid(const char *) const");
		}
		bool lret = self->valid(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::Parameter::assign(const char * str)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::Parameter::assign(const char * str) function, expected prototype:\nbool osg::ArgumentParser::Parameter::assign(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		osg::ArgumentParser::Parameter* self=(Luna< osg::ArgumentParser::Parameter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::Parameter::assign(const char *)");
		}
		bool lret = self->assign(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::ArgumentParser::Parameter* LunaTraits< osg::ArgumentParser::Parameter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ArgumentParser_Parameter::_bind_ctor(L);
}

void LunaTraits< osg::ArgumentParser::Parameter >::_bind_dtor(osg::ArgumentParser::Parameter* obj) {
	delete obj;
}

const char LunaTraits< osg::ArgumentParser::Parameter >::className[] = "Parameter";
const char LunaTraits< osg::ArgumentParser::Parameter >::fullName[] = "osg::ArgumentParser::Parameter";
const char LunaTraits< osg::ArgumentParser::Parameter >::moduleName[] = "osg";
const char* LunaTraits< osg::ArgumentParser::Parameter >::parents[] = {0};
const int LunaTraits< osg::ArgumentParser::Parameter >::hash = 67360031;
const int LunaTraits< osg::ArgumentParser::Parameter >::uniqueIDs[] = {67360031,0};

luna_RegType LunaTraits< osg::ArgumentParser::Parameter >::methods[] = {
	{"valid", &luna_wrapper_osg_ArgumentParser_Parameter::_bind_valid},
	{"assign", &luna_wrapper_osg_ArgumentParser_Parameter::_bind_assign},
	{"dynCast", &luna_wrapper_osg_ArgumentParser_Parameter::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ArgumentParser_Parameter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ArgumentParser::Parameter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ArgumentParser::Parameter >::enumValues[] = {
	{"BOOL_PARAMETER", osg::ArgumentParser::Parameter::BOOL_PARAMETER},
	{"FLOAT_PARAMETER", osg::ArgumentParser::Parameter::FLOAT_PARAMETER},
	{"DOUBLE_PARAMETER", osg::ArgumentParser::Parameter::DOUBLE_PARAMETER},
	{"INT_PARAMETER", osg::ArgumentParser::Parameter::INT_PARAMETER},
	{"UNSIGNED_INT_PARAMETER", osg::ArgumentParser::Parameter::UNSIGNED_INT_PARAMETER},
	{"STRING_PARAMETER", osg::ArgumentParser::Parameter::STRING_PARAMETER},
	{0,0}
};


