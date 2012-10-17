#include <plug_common.h>

class luna_wrapper_osgText_String {
public:
	typedef Luna< osgText::String > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086333) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::String*)");
		}

		osgText::String* rhs =(Luna< osgText::String >::check(L,2));
		osgText::String* self=(Luna< osgText::String >::check(L,1));
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

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::String");
		
		return luna_dynamicCast(L,converters,"osgText::String",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createUTF8EncodedString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::String::String()
	static osgText::String* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::String::String() function, expected prototype:\nosgText::String::String()\nClass arguments details:\n");
		}


		return new osgText::String();
	}

	// osgText::String::String(const osgText::String & str)
	static osgText::String* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::String::String(const osgText::String & str) function, expected prototype:\nosgText::String::String(const osgText::String & str)\nClass arguments details:\narg 1 ID = 42086333\n");
		}

		const osgText::String* str_ptr=(Luna< osgText::String >::check(L,1));
		if( !str_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg str in osgText::String::String function");
		}
		const osgText::String & str=*str_ptr;

		return new osgText::String(str);
	}

	// osgText::String::String(const std::string & str)
	static osgText::String* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::String::String(const std::string & str) function, expected prototype:\nosgText::String::String(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		return new osgText::String(str);
	}

	// osgText::String::String(const std::string & text, osgText::String::Encoding encoding)
	static osgText::String* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::String::String(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nosgText::String::String(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n");
		}

		std::string text(lua_tostring(L,1),lua_objlen(L,1));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,2);

		return new osgText::String(text, encoding);
	}

	// Overload binder for osgText::String::String
	static osgText::String* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function String, cannot match any of the overloads for function String:\n  String()\n  String(const osgText::String &)\n  String(const std::string &)\n  String(const std::string &, osgText::String::Encoding)\n");
		return NULL;
	}


	// Function binds:
	// void osgText::String::set(const std::string & str)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::String::set(const std::string & str) function, expected prototype:\nvoid osgText::String::set(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::String::set(const std::string &)");
		}
		self->set(str);

		return 0;
	}

	// void osgText::String::set(const std::string & text, osgText::String::Encoding encoding)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::String::set(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nvoid osgText::String::set(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n");
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,3);

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::String::set(const std::string &, osgText::String::Encoding)");
		}
		self->set(text, encoding);

		return 0;
	}

	// Overload binder for osgText::String::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const std::string &)\n  set(const std::string &, osgText::String::Encoding)\n");
		return 0;
	}

	// std::string osgText::String::createUTF8EncodedString() const
	static int _bind_createUTF8EncodedString(lua_State *L) {
		if (!_lg_typecheck_createUTF8EncodedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgText::String::createUTF8EncodedString() const function, expected prototype:\nstd::string osgText::String::createUTF8EncodedString() const\nClass arguments details:\n");
		}


		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgText::String::createUTF8EncodedString() const");
		}
		std::string lret = self->createUTF8EncodedString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgText::String* LunaTraits< osgText::String >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_String::_bind_ctor(L);
}

void LunaTraits< osgText::String >::_bind_dtor(osgText::String* obj) {
	delete obj;
}

const char LunaTraits< osgText::String >::className[] = "String";
const char LunaTraits< osgText::String >::fullName[] = "osgText::String";
const char LunaTraits< osgText::String >::moduleName[] = "osgText";
const char* LunaTraits< osgText::String >::parents[] = {0};
const int LunaTraits< osgText::String >::hash = 42086333;
const int LunaTraits< osgText::String >::uniqueIDs[] = {42086333,0};

luna_RegType LunaTraits< osgText::String >::methods[] = {
	{"set", &luna_wrapper_osgText_String::_bind_set},
	{"createUTF8EncodedString", &luna_wrapper_osgText_String::_bind_createUTF8EncodedString},
	{"dynCast", &luna_wrapper_osgText_String::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_String::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::String >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::String >::enumValues[] = {
	{"ENCODING_UNDEFINED", osgText::String::ENCODING_UNDEFINED},
	{"ENCODING_ASCII", osgText::String::ENCODING_ASCII},
	{"ENCODING_UTF8", osgText::String::ENCODING_UTF8},
	{"ENCODING_UTF16", osgText::String::ENCODING_UTF16},
	{"ENCODING_UTF16_BE", osgText::String::ENCODING_UTF16_BE},
	{"ENCODING_UTF16_LE", osgText::String::ENCODING_UTF16_LE},
	{"ENCODING_UTF32", osgText::String::ENCODING_UTF32},
	{"ENCODING_UTF32_BE", osgText::String::ENCODING_UTF32_BE},
	{"ENCODING_UTF32_LE", osgText::String::ENCODING_UTF32_LE},
	{"ENCODING_SIGNATURE", osgText::String::ENCODING_SIGNATURE},
	{0,0}
};


