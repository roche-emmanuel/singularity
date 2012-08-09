#include <plug_common.h>

class luna_wrapper_osgDB_IntLookup {
public:
	typedef Luna< osgDB::IntLookup > luna_t;

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

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::IntLookup");
		
		return luna_dynamicCast(L,converters,"osgDB::IntLookup",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::IntLookup::IntLookup()
	static osgDB::IntLookup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::IntLookup::IntLookup() function, expected prototype:\nosgDB::IntLookup::IntLookup()\nClass arguments details:\n");
		}


		return new osgDB::IntLookup();
	}


	// Function binds:
	// unsigned int osgDB::IntLookup::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::IntLookup::size() const function, expected prototype:\nunsigned int osgDB::IntLookup::size() const\nClass arguments details:\n");
		}


		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::IntLookup::size() const");
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::IntLookup::add(const char * str, int value)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::IntLookup::add(const char * str, int value) function, expected prototype:\nvoid osgDB::IntLookup::add(const char * str, int value)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);
		int value=(int)lua_tointeger(L,3);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::IntLookup::add(const char *, int)");
		}
		self->add(str, value);

		return 0;
	}

	// int osgDB::IntLookup::getValue(const char * str)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::IntLookup::getValue(const char * str) function, expected prototype:\nint osgDB::IntLookup::getValue(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::IntLookup::getValue(const char *)");
		}
		int lret = self->getValue(str);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::string & osgDB::IntLookup::getString(int value)
	static int _bind_getString(lua_State *L) {
		if (!_lg_typecheck_getString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::IntLookup::getString(int value) function, expected prototype:\nconst std::string & osgDB::IntLookup::getString(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::IntLookup::getString(int)");
		}
		const std::string & lret = self->getString(value);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::IntLookup* LunaTraits< osgDB::IntLookup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_IntLookup::_bind_ctor(L);
}

void LunaTraits< osgDB::IntLookup >::_bind_dtor(osgDB::IntLookup* obj) {
	delete obj;
}

const char LunaTraits< osgDB::IntLookup >::className[] = "IntLookup";
const char LunaTraits< osgDB::IntLookup >::fullName[] = "osgDB::IntLookup";
const char LunaTraits< osgDB::IntLookup >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::IntLookup >::parents[] = {0};
const int LunaTraits< osgDB::IntLookup >::hash = 10250166;
const int LunaTraits< osgDB::IntLookup >::uniqueIDs[] = {10250166,0};

luna_RegType LunaTraits< osgDB::IntLookup >::methods[] = {
	{"size", &luna_wrapper_osgDB_IntLookup::_bind_size},
	{"add", &luna_wrapper_osgDB_IntLookup::_bind_add},
	{"getValue", &luna_wrapper_osgDB_IntLookup::_bind_getValue},
	{"getString", &luna_wrapper_osgDB_IntLookup::_bind_getString},
	{"dynCast", &luna_wrapper_osgDB_IntLookup::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::IntLookup >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::IntLookup >::enumValues[] = {
	{0,0}
};

