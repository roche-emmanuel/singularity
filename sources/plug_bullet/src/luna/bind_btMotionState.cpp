#include <plug_common.h>

#include <luna/wrappers/wrapper_btMotionState.h>

class luna_wrapper_btMotionState {
public:
	typedef Luna< btMotionState > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btMotionState,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40784278) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMotionState*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btMotionState* rhs =(Luna< btMotionState >::check(L,2));
		btMotionState* self=(Luna< btMotionState >::check(L,1));
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

		btMotionState* self= (btMotionState*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMotionState >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40784278) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btMotionState >::check(L,1));
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

		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMotionState");
		
		return luna_dynamicCast(L,converters,"btMotionState",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMotionState::btMotionState(lua_Table * data)
	static btMotionState* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btMotionState::btMotionState(lua_Table * data) function, expected prototype:\nbtMotionState::btMotionState(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btMotionState(L,NULL);
	}


	// Function binds:
	// void btMotionState::getWorldTransform(btTransform & worldTrans) const
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
			luaL_error(L, "luna typecheck failed in void btMotionState::getWorldTransform(btTransform & worldTrans) const function, expected prototype:\nvoid btMotionState::getWorldTransform(btTransform & worldTrans) const\nClass arguments details:\narg 1 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
		}

		btTransform* worldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTrans in btMotionState::getWorldTransform function");
		}
		btTransform & worldTrans=*worldTrans_ptr;

		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btMotionState::getWorldTransform(btTransform &) const. Got : '%s'\n%s",typeid(Luna< btMotionState >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getWorldTransform(worldTrans);

		return 0;
	}

	// void btMotionState::setWorldTransform(const btTransform & worldTrans)
	static int _bind_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setWorldTransform(L)) {
			luaL_error(L, "luna typecheck failed in void btMotionState::setWorldTransform(const btTransform & worldTrans) function, expected prototype:\nvoid btMotionState::setWorldTransform(const btTransform & worldTrans)\nClass arguments details:\narg 1 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* worldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTrans in btMotionState::setWorldTransform function");
		}
		const btTransform & worldTrans=*worldTrans_ptr;

		btMotionState* self=(Luna< btMotionState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btMotionState::setWorldTransform(const btTransform &). Got : '%s'\n%s",typeid(Luna< btMotionState >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWorldTransform(worldTrans);

		return 0;
	}


	// Operator binds:

};

btMotionState* LunaTraits< btMotionState >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMotionState::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btMotionState::getWorldTransform(btTransform & worldTrans) const
	// void btMotionState::setWorldTransform(const btTransform & worldTrans)
}

void LunaTraits< btMotionState >::_bind_dtor(btMotionState* obj) {
	delete obj;
}

const char LunaTraits< btMotionState >::className[] = "btMotionState";
const char LunaTraits< btMotionState >::fullName[] = "btMotionState";
const char LunaTraits< btMotionState >::moduleName[] = "bullet";
const char* LunaTraits< btMotionState >::parents[] = {0};
const int LunaTraits< btMotionState >::hash = 40784278;
const int LunaTraits< btMotionState >::uniqueIDs[] = {40784278,0};

luna_RegType LunaTraits< btMotionState >::methods[] = {
	{"getWorldTransform", &luna_wrapper_btMotionState::_bind_getWorldTransform},
	{"setWorldTransform", &luna_wrapper_btMotionState::_bind_setWorldTransform},
	{"dynCast", &luna_wrapper_btMotionState::_bind_dynCast},
	{"__eq", &luna_wrapper_btMotionState::_bind___eq},
	{"fromVoid", &luna_wrapper_btMotionState::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMotionState::_bind_asVoid},
	{"getTable", &luna_wrapper_btMotionState::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMotionState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMotionState >::enumValues[] = {
	{0,0}
};


