#include <plug_common.h>

class luna_wrapper_osgDB_ofstream {
public:
	typedef Luna< osgDB::ofstream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78216342) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ofstream*)");
		}

		osgDB::ofstream* rhs =(Luna< osgDB::ofstream >::check(L,2));
		osgDB::ofstream* self=(Luna< osgDB::ofstream >::check(L,1));
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

		osgDB::ofstream* self=(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ofstream");
		
		return luna_dynamicCast(L,converters,"osgDB::ofstream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ofstream::ofstream()
	static osgDB::ofstream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ofstream::ofstream() function, expected prototype:\nosgDB::ofstream::ofstream()\nClass arguments details:\n");
		}


		return new osgDB::ofstream();
	}


	// Function binds:

	// Operator binds:

};

osgDB::ofstream* LunaTraits< osgDB::ofstream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ofstream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ofstream >::_bind_dtor(osgDB::ofstream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ofstream >::className[] = "ofstream";
const char LunaTraits< osgDB::ofstream >::fullName[] = "osgDB::ofstream";
const char LunaTraits< osgDB::ofstream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ofstream >::parents[] = {0};
const int LunaTraits< osgDB::ofstream >::hash = 78216342;
const int LunaTraits< osgDB::ofstream >::uniqueIDs[] = {78216342,0};

luna_RegType LunaTraits< osgDB::ofstream >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ofstream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ofstream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ofstream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ofstream >::enumValues[] = {
	{0,0}
};


