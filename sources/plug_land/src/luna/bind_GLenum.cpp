#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_GLenum {
public:
	typedef Luna< GLenum > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5975528) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GLenum*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		GLenum* rhs =(Luna< GLenum >::check(L,2));
		GLenum* self=(Luna< GLenum >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		GLenum* self=(Luna< GLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GLenum");
		
		return luna_dynamicCast(L,converters,"GLenum",name);
	}

};

GLenum* LunaTraits< GLenum >::_bind_ctor(lua_State *L) {
	return new GLenum();
}

void LunaTraits< GLenum >::_bind_dtor(GLenum* obj) {
	delete obj;
}

const char LunaTraits< GLenum >::className[] = "GLenum";
const char LunaTraits< GLenum >::fullName[] = "GLenum";
const char LunaTraits< GLenum >::moduleName[] = "land";
const char* LunaTraits< GLenum >::parents[] = {0};
const int LunaTraits< GLenum >::hash = 5975528;
const int LunaTraits< GLenum >::uniqueIDs[] = {5975528,0};

luna_RegType LunaTraits< GLenum >::methods[] = {
	{"dynCast", &luna_wrapper_GLenum::_bind_dynCast},
	{"__eq", &luna_wrapper_GLenum::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< GLenum >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GLenum >::enumValues[] = {
	{0,0}
};


