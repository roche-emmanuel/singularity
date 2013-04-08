#include <plug_common.h>

#include <luna/wrappers/wrapper_btOverlapCallback.h>

class luna_wrapper_btOverlapCallback {
public:
	typedef Luna< btOverlapCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btOverlapCallback* self=(Luna< btOverlapCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btOverlapCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83643253) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOverlapCallback*)");
		}

		btOverlapCallback* rhs =(Luna< btOverlapCallback >::check(L,2));
		btOverlapCallback* self=(Luna< btOverlapCallback >::check(L,1));
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

		btOverlapCallback* self= (btOverlapCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btOverlapCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83643253) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btOverlapCallback >::check(L,1));
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

		btOverlapCallback* self=(Luna< btOverlapCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOverlapCallback");
		
		return luna_dynamicCast(L,converters,"btOverlapCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processOverlap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btOverlapCallback::btOverlapCallback(lua_Table * data)
	static btOverlapCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlapCallback::btOverlapCallback(lua_Table * data) function, expected prototype:\nbtOverlapCallback::btOverlapCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btOverlapCallback(L,NULL);
	}


	// Function binds:
	// bool btOverlapCallback::processOverlap(btBroadphasePair & pair)
	static int _bind_processOverlap(lua_State *L) {
		if (!_lg_typecheck_processOverlap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btOverlapCallback::processOverlap(btBroadphasePair & pair) function, expected prototype:\nbool btOverlapCallback::processOverlap(btBroadphasePair & pair)\nClass arguments details:\narg 1 ID = 82050774\n");
		}

		btBroadphasePair* pair_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !pair_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pair in btOverlapCallback::processOverlap function");
		}
		btBroadphasePair & pair=*pair_ptr;

		btOverlapCallback* self=(Luna< btOverlapCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btOverlapCallback::processOverlap(btBroadphasePair &). Got : '%s'",typeid(Luna< btOverlapCallback >::check(L,1)).name());
		}
		bool lret = self->processOverlap(pair);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btOverlapCallback* LunaTraits< btOverlapCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btOverlapCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btOverlapCallback::processOverlap(btBroadphasePair & pair)
}

void LunaTraits< btOverlapCallback >::_bind_dtor(btOverlapCallback* obj) {
	delete obj;
}

const char LunaTraits< btOverlapCallback >::className[] = "btOverlapCallback";
const char LunaTraits< btOverlapCallback >::fullName[] = "btOverlapCallback";
const char LunaTraits< btOverlapCallback >::moduleName[] = "bullet";
const char* LunaTraits< btOverlapCallback >::parents[] = {0};
const int LunaTraits< btOverlapCallback >::hash = 83643253;
const int LunaTraits< btOverlapCallback >::uniqueIDs[] = {83643253,0};

luna_RegType LunaTraits< btOverlapCallback >::methods[] = {
	{"processOverlap", &luna_wrapper_btOverlapCallback::_bind_processOverlap},
	{"dynCast", &luna_wrapper_btOverlapCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btOverlapCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btOverlapCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btOverlapCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btOverlapCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btOverlapCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOverlapCallback >::enumValues[] = {
	{0,0}
};


