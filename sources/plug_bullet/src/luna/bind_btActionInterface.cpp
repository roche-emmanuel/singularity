#include <plug_common.h>

#include <luna/wrappers/wrapper_btActionInterface.h>

class luna_wrapper_btActionInterface {
public:
	typedef Luna< btActionInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btActionInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btActionInterface*)");
		}

		btActionInterface* rhs =(Luna< btActionInterface >::check(L,2));
		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btActionInterface* self= (btActionInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btActionInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btActionInterface >::check(L,1));
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

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btActionInterface");
		
		return luna_dynamicCast(L,converters,"btActionInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateAction(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btActionInterface::btActionInterface(lua_Table * data)
	static btActionInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btActionInterface::btActionInterface(lua_Table * data) function, expected prototype:\nbtActionInterface::btActionInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btActionInterface(L,NULL);
	}


	// Function binds:
	// void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)
	static int _bind_updateAction(lua_State *L) {
		if (!_lg_typecheck_updateAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep) function, expected prototype:\nvoid btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float deltaTimeStep=(float)lua_tonumber(L,3);

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btActionInterface::updateAction(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->updateAction(collisionWorld, deltaTimeStep);

		return 0;
	}

	// void btActionInterface::debugDraw(btIDebugDraw * debugDrawer)
	static int _bind_debugDraw(lua_State *L) {
		if (!_lg_typecheck_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btActionInterface::debugDraw(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btActionInterface::debugDraw(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btActionInterface::debugDraw(btIDebugDraw *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->debugDraw(debugDrawer);

		return 0;
	}


	// Operator binds:

};

btActionInterface* LunaTraits< btActionInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btActionInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)
	// void btActionInterface::debugDraw(btIDebugDraw * debugDrawer)
}

void LunaTraits< btActionInterface >::_bind_dtor(btActionInterface* obj) {
	delete obj;
}

const char LunaTraits< btActionInterface >::className[] = "btActionInterface";
const char LunaTraits< btActionInterface >::fullName[] = "btActionInterface";
const char LunaTraits< btActionInterface >::moduleName[] = "bullet";
const char* LunaTraits< btActionInterface >::parents[] = {0};
const int LunaTraits< btActionInterface >::hash = 91159321;
const int LunaTraits< btActionInterface >::uniqueIDs[] = {91159321,0};

luna_RegType LunaTraits< btActionInterface >::methods[] = {
	{"updateAction", &luna_wrapper_btActionInterface::_bind_updateAction},
	{"debugDraw", &luna_wrapper_btActionInterface::_bind_debugDraw},
	{"dynCast", &luna_wrapper_btActionInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_btActionInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_btActionInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btActionInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_btActionInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btActionInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btActionInterface >::enumValues[] = {
	{0,0}
};


