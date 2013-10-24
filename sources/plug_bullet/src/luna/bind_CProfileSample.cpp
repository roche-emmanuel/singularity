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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CProfileSample*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CProfileSample* rhs =(Luna< CProfileSample >::check(L,2));
		CProfileSample* self=(Luna< CProfileSample >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CProfileSample* self= (CProfileSample*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CProfileSample >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5560690) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CProfileSample >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CProfileSample::CProfileSample(const char * name)
	static CProfileSample* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CProfileSample::CProfileSample(const char * name) function, expected prototype:\nCProfileSample::CProfileSample(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
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
	{"fromVoid", &luna_wrapper_CProfileSample::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CProfileSample::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< CProfileSample >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CProfileSample >::enumValues[] = {
	{0,0}
};


