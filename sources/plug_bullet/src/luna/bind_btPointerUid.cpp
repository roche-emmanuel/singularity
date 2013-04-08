#include <plug_common.h>

class luna_wrapper_btPointerUid {
public:
	typedef Luna< btPointerUid > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86408151) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPointerUid*)");
		}

		btPointerUid* rhs =(Luna< btPointerUid >::check(L,2));
		btPointerUid* self=(Luna< btPointerUid >::check(L,1));
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

		btPointerUid* self= (btPointerUid*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPointerUid >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86408151) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btPointerUid >::check(L,1));
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

		btPointerUid* self=(Luna< btPointerUid >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPointerUid");
		
		return luna_dynamicCast(L,converters,"btPointerUid",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * btPointerUid::m_ptr()
	static int _bind_getPtr(lua_State *L) {
		if (!_lg_typecheck_getPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btPointerUid::m_ptr() function, expected prototype:\nvoid * btPointerUid::m_ptr()\nClass arguments details:\n");
		}


		btPointerUid* self=(Luna< btPointerUid >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btPointerUid::m_ptr(). Got : '%s'",typeid(Luna< btPointerUid >::check(L,1)).name());
		}
		void * lret = self->m_ptr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btPointerUid::m_ptr(void * value)
	static int _bind_setPtr(lua_State *L) {
		if (!_lg_typecheck_setPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPointerUid::m_ptr(void * value) function, expected prototype:\nvoid btPointerUid::m_ptr(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btPointerUid* self=(Luna< btPointerUid >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPointerUid::m_ptr(void *). Got : '%s'",typeid(Luna< btPointerUid >::check(L,1)).name());
		}
		self->m_ptr = value;

		return 0;
	}


	// Operator binds:

};

btPointerUid* LunaTraits< btPointerUid >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btPointerUid >::_bind_dtor(btPointerUid* obj) {
	delete obj;
}

const char LunaTraits< btPointerUid >::className[] = "btPointerUid";
const char LunaTraits< btPointerUid >::fullName[] = "btPointerUid";
const char LunaTraits< btPointerUid >::moduleName[] = "bullet";
const char* LunaTraits< btPointerUid >::parents[] = {0};
const int LunaTraits< btPointerUid >::hash = 86408151;
const int LunaTraits< btPointerUid >::uniqueIDs[] = {86408151,0};

luna_RegType LunaTraits< btPointerUid >::methods[] = {
	{"getPtr", &luna_wrapper_btPointerUid::_bind_getPtr},
	{"setPtr", &luna_wrapper_btPointerUid::_bind_setPtr},
	{"dynCast", &luna_wrapper_btPointerUid::_bind_dynCast},
	{"__eq", &luna_wrapper_btPointerUid::_bind___eq},
	{"fromVoid", &luna_wrapper_btPointerUid::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPointerUid::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPointerUid >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPointerUid >::enumValues[] = {
	{0,0}
};


