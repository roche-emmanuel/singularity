#include <plug_common.h>

class luna_wrapper_CProfileSample {
public:
	typedef Luna< CProfileSample > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5560690) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CProfileSample*)");
		}

		CProfileSample* rhs =(Luna< CProfileSample >::check(L,2));
		CProfileSample* self=(Luna< CProfileSample >::check(L,1));
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

		CProfileSample* self=(Luna< CProfileSample >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CProfileSample");
		
		return luna_dynamicCast(L,converters,"CProfileSample",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CProfileSample::CProfileSample(const char * name)
	static CProfileSample* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in CProfileSample::CProfileSample(const char * name) function, expected prototype:\nCProfileSample::CProfileSample(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,1);

		return new CProfileSample(name);
	}


	// Function binds:

	// Operator binds:

};

CProfileSample* LunaTraits< CProfileSample >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CProfileSample::_bind_ctor(L);
}

void LunaTraits< CProfileSample >::_bind_dtor(CProfileSample* obj) {
	delete obj;
}

const char LunaTraits< CProfileSample >::className[] = "CProfileSample";
const char LunaTraits< CProfileSample >::fullName[] = "CProfileSample";
const char LunaTraits< CProfileSample >::moduleName[] = "bullet";
const char* LunaTraits< CProfileSample >::parents[] = {0};
const int LunaTraits< CProfileSample >::hash = 5560690;
const int LunaTraits< CProfileSample >::uniqueIDs[] = {5560690,0};

luna_RegType LunaTraits< CProfileSample >::methods[] = {
	{"dynCast", &luna_wrapper_CProfileSample::_bind_dynCast},
	{"__eq", &luna_wrapper_CProfileSample::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< CProfileSample >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CProfileSample >::enumValues[] = {
	{0,0}
};


