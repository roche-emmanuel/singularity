#include <plug_common.h>

class luna_wrapper_osgDB_ObjectProperty {
public:
	typedef Luna< osgDB::ObjectProperty > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23791141) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectProperty*)");
		}

		osgDB::ObjectProperty* rhs =(Luna< osgDB::ObjectProperty >::check(L,2));
		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
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

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectProperty");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectProperty",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23791141) ) return false;
		if( (!(Luna< osgDB::ObjectProperty >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_proto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_value(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_mapProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_value(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_mapProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false)
	static osgDB::ObjectProperty* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false) function, expected prototype:\nosgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,1);
		int value=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		bool useMap=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		return new osgDB::ObjectProperty(name, value, useMap);
	}

	// osgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy)
	static osgDB::ObjectProperty* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy) function, expected prototype:\nosgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy)\nClass arguments details:\narg 1 ID = 23791141\n");
		}

		const osgDB::ObjectProperty* copy_ptr=(Luna< osgDB::ObjectProperty >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgDB::ObjectProperty::ObjectProperty function");
		}
		const osgDB::ObjectProperty & copy=*copy_ptr;

		return new osgDB::ObjectProperty(copy);
	}

	// Overload binder for osgDB::ObjectProperty::ObjectProperty
	static osgDB::ObjectProperty* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectProperty, cannot match any of the overloads for function ObjectProperty:\n  ObjectProperty(const char *, int, bool)\n  ObjectProperty(const osgDB::ObjectProperty &)\n");
		return NULL;
	}


	// Function binds:
	// osgDB::ObjectProperty & osgDB::ObjectProperty::proto(const char * name)
	static int _bind_proto(lua_State *L) {
		if (!_lg_typecheck_proto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty & osgDB::ObjectProperty::proto(const char * name) function, expected prototype:\nosgDB::ObjectProperty & osgDB::ObjectProperty::proto(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ObjectProperty & osgDB::ObjectProperty::proto(const char *). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		const osgDB::ObjectProperty* lret = &self->proto(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectProperty >::push(L,lret,false);

		return 1;
	}

	// void osgDB::ObjectProperty::set(int v)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::set(int v) function, expected prototype:\nvoid osgDB::ObjectProperty::set(int v)\nClass arguments details:\n");
		}

		int v=(int)lua_tointeger(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::set(int). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		self->set(v);

		return 0;
	}

	// int osgDB::ObjectProperty::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectProperty::get() const function, expected prototype:\nint osgDB::ObjectProperty::get() const\nClass arguments details:\n");
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::ObjectProperty::get() const. Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		int lret = self->get();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::ObjectProperty::_name()
	static int _bind_get_name(lua_State *L) {
		if (!_lg_typecheck_get_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::ObjectProperty::_name() function, expected prototype:\nstd::string osgDB::ObjectProperty::_name()\nClass arguments details:\n");
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::ObjectProperty::_name(). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		std::string lret = self->_name;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int osgDB::ObjectProperty::_value()
	static int _bind_get_value(lua_State *L) {
		if (!_lg_typecheck_get_value(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectProperty::_value() function, expected prototype:\nint osgDB::ObjectProperty::_value()\nClass arguments details:\n");
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::ObjectProperty::_value(). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		int lret = self->_value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ObjectProperty::_mapProperty()
	static int _bind_get_mapProperty(lua_State *L) {
		if (!_lg_typecheck_get_mapProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ObjectProperty::_mapProperty() function, expected prototype:\nbool osgDB::ObjectProperty::_mapProperty()\nClass arguments details:\n");
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ObjectProperty::_mapProperty(). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		bool lret = self->_mapProperty;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ObjectProperty::_name(std::string value)
	static int _bind_set_name(lua_State *L) {
		if (!_lg_typecheck_set_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_name(std::string value) function, expected prototype:\nvoid osgDB::ObjectProperty::_name(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_name(std::string). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		self->_name = value;

		return 0;
	}

	// void osgDB::ObjectProperty::_value(int value)
	static int _bind_set_value(lua_State *L) {
		if (!_lg_typecheck_set_value(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_value(int value) function, expected prototype:\nvoid osgDB::ObjectProperty::_value(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_value(int). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		self->_value = value;

		return 0;
	}

	// void osgDB::ObjectProperty::_mapProperty(bool value)
	static int _bind_set_mapProperty(lua_State *L) {
		if (!_lg_typecheck_set_mapProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_mapProperty(bool value) function, expected prototype:\nvoid osgDB::ObjectProperty::_mapProperty(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_mapProperty(bool). Got : '%s'",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name());
		}
		self->_mapProperty = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ObjectProperty* LunaTraits< osgDB::ObjectProperty >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectProperty::_bind_ctor(L);
}

void LunaTraits< osgDB::ObjectProperty >::_bind_dtor(osgDB::ObjectProperty* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectProperty >::className[] = "ObjectProperty";
const char LunaTraits< osgDB::ObjectProperty >::fullName[] = "osgDB::ObjectProperty";
const char LunaTraits< osgDB::ObjectProperty >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectProperty >::parents[] = {0};
const int LunaTraits< osgDB::ObjectProperty >::hash = 23791141;
const int LunaTraits< osgDB::ObjectProperty >::uniqueIDs[] = {23791141,0};

luna_RegType LunaTraits< osgDB::ObjectProperty >::methods[] = {
	{"proto", &luna_wrapper_osgDB_ObjectProperty::_bind_proto},
	{"set", &luna_wrapper_osgDB_ObjectProperty::_bind_set},
	{"get", &luna_wrapper_osgDB_ObjectProperty::_bind_get},
	{"get_name", &luna_wrapper_osgDB_ObjectProperty::_bind_get_name},
	{"get_value", &luna_wrapper_osgDB_ObjectProperty::_bind_get_value},
	{"get_mapProperty", &luna_wrapper_osgDB_ObjectProperty::_bind_get_mapProperty},
	{"set_name", &luna_wrapper_osgDB_ObjectProperty::_bind_set_name},
	{"set_value", &luna_wrapper_osgDB_ObjectProperty::_bind_set_value},
	{"set_mapProperty", &luna_wrapper_osgDB_ObjectProperty::_bind_set_mapProperty},
	{"dynCast", &luna_wrapper_osgDB_ObjectProperty::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectProperty::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectProperty >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectProperty >::enumValues[] = {
	{0,0}
};


