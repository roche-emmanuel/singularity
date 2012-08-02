#include <plug_common.h>

class luna_wrapper_sgt_Object {
public:
	typedef Luna< sgt::Object > luna_t;

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

		sgt::Object* self=(Luna< sgt::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::Object");
		
		return luna_dynamicCast(L,converters,"sgt::Object",name);
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
	// sgt::Object::Object()
	static sgt::Object* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object() function, expected prototype:\nsgt::Object::Object()\nClass arguments details:\n");
		}


		return new sgt::Object();
	}


	// Function binds:

	// Operator binds:

};

sgt::Object* LunaTraits< sgt::Object >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Object::_bind_ctor(L);
}

void LunaTraits< sgt::Object >::_bind_dtor(sgt::Object* obj) {
	delete obj;
}

const char LunaTraits< sgt::Object >::className[] = "Object";
const char LunaTraits< sgt::Object >::fullName[] = "sgt::Object";
const char LunaTraits< sgt::Object >::moduleName[] = "core";
const char* LunaTraits< sgt::Object >::parents[] = {0};
const int LunaTraits< sgt::Object >::hash = 44367388;
const int LunaTraits< sgt::Object >::uniqueIDs[] = {44367388,0};

luna_RegType LunaTraits< sgt::Object >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_Object::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Object >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Object >::enumValues[] = {
	{0,0}
};


