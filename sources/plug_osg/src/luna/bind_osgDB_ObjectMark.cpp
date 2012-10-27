#include <plug_common.h>

class luna_wrapper_osgDB_ObjectMark {
public:
	typedef Luna< osgDB::ObjectMark > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60066730) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectMark*)");
		}

		osgDB::ObjectMark* rhs =(Luna< osgDB::ObjectMark >::check(L,2));
		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
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

		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectMark");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectMark",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60066730) ) return false;
		if( (!dynamic_cast< osgDB::ObjectMark* >(Luna< osgDB::ObjectMark >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ObjectMark::ObjectMark(const char * name, int delta = 0)
	static osgDB::ObjectMark* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectMark::ObjectMark(const char * name, int delta = 0) function, expected prototype:\nosgDB::ObjectMark::ObjectMark(const char * name, int delta = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,1);
		int delta=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new osgDB::ObjectMark(name, delta);
	}

	// osgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy)
	static osgDB::ObjectMark* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy) function, expected prototype:\nosgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy)\nClass arguments details:\narg 1 ID = 60066730\n");
		}

		const osgDB::ObjectMark* copy_ptr=(Luna< osgDB::ObjectMark >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgDB::ObjectMark::ObjectMark function");
		}
		const osgDB::ObjectMark & copy=*copy_ptr;

		return new osgDB::ObjectMark(copy);
	}

	// Overload binder for osgDB::ObjectMark::ObjectMark
	static osgDB::ObjectMark* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectMark, cannot match any of the overloads for function ObjectMark:\n  ObjectMark(const char *, int)\n  ObjectMark(const osgDB::ObjectMark &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osgDB::ObjectMark* LunaTraits< osgDB::ObjectMark >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectMark::_bind_ctor(L);
}

void LunaTraits< osgDB::ObjectMark >::_bind_dtor(osgDB::ObjectMark* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectMark >::className[] = "ObjectMark";
const char LunaTraits< osgDB::ObjectMark >::fullName[] = "osgDB::ObjectMark";
const char LunaTraits< osgDB::ObjectMark >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectMark >::parents[] = {0};
const int LunaTraits< osgDB::ObjectMark >::hash = 60066730;
const int LunaTraits< osgDB::ObjectMark >::uniqueIDs[] = {60066730,0};

luna_RegType LunaTraits< osgDB::ObjectMark >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectMark::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectMark::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectMark >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectMark >::enumValues[] = {
	{0,0}
};


