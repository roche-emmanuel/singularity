#include <plug_common.h>

#include <luna/wrappers/wrapper_btNodeOverlapCallback.h>

class luna_wrapper_btNodeOverlapCallback {
public:
	typedef Luna< btNodeOverlapCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btNodeOverlapCallback* self=(Luna< btNodeOverlapCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btNodeOverlapCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47895716) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btNodeOverlapCallback*)");
		}

		btNodeOverlapCallback* rhs =(Luna< btNodeOverlapCallback >::check(L,2));
		btNodeOverlapCallback* self=(Luna< btNodeOverlapCallback >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btNodeOverlapCallback* self= (btNodeOverlapCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btNodeOverlapCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47895716) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btNodeOverlapCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btNodeOverlapCallback* self=(Luna< btNodeOverlapCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btNodeOverlapCallback");
		
		return luna_dynamicCast(L,converters,"btNodeOverlapCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processNode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btNodeOverlapCallback::btNodeOverlapCallback(lua_Table * data)
	static btNodeOverlapCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btNodeOverlapCallback::btNodeOverlapCallback(lua_Table * data) function, expected prototype:\nbtNodeOverlapCallback::btNodeOverlapCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btNodeOverlapCallback(L,NULL);
	}


	// Function binds:
	// void btNodeOverlapCallback::processNode(int subPart, int triangleIndex)
	static int _bind_processNode(lua_State *L) {
		if (!_lg_typecheck_processNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btNodeOverlapCallback::processNode(int subPart, int triangleIndex) function, expected prototype:\nvoid btNodeOverlapCallback::processNode(int subPart, int triangleIndex)\nClass arguments details:\n");
		}

		int subPart=(int)lua_tointeger(L,2);
		int triangleIndex=(int)lua_tointeger(L,3);

		btNodeOverlapCallback* self=(Luna< btNodeOverlapCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btNodeOverlapCallback::processNode(int, int). Got : '%s'",typeid(Luna< btNodeOverlapCallback >::check(L,1)).name());
		}
		self->processNode(subPart, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btNodeOverlapCallback* LunaTraits< btNodeOverlapCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btNodeOverlapCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btNodeOverlapCallback::processNode(int subPart, int triangleIndex)
}

void LunaTraits< btNodeOverlapCallback >::_bind_dtor(btNodeOverlapCallback* obj) {
	delete obj;
}

const char LunaTraits< btNodeOverlapCallback >::className[] = "btNodeOverlapCallback";
const char LunaTraits< btNodeOverlapCallback >::fullName[] = "btNodeOverlapCallback";
const char LunaTraits< btNodeOverlapCallback >::moduleName[] = "bullet";
const char* LunaTraits< btNodeOverlapCallback >::parents[] = {0};
const int LunaTraits< btNodeOverlapCallback >::hash = 47895716;
const int LunaTraits< btNodeOverlapCallback >::uniqueIDs[] = {47895716,0};

luna_RegType LunaTraits< btNodeOverlapCallback >::methods[] = {
	{"processNode", &luna_wrapper_btNodeOverlapCallback::_bind_processNode},
	{"dynCast", &luna_wrapper_btNodeOverlapCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btNodeOverlapCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btNodeOverlapCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btNodeOverlapCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btNodeOverlapCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btNodeOverlapCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btNodeOverlapCallback >::enumValues[] = {
	{0,0}
};


