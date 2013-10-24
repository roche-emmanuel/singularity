#include <plug_common.h>

#include <luna/wrappers/wrapper_btDiscreteCollisionDetectorInterface_Result.h>

class luna_wrapper_btDiscreteCollisionDetectorInterface_Result {
public:
	typedef Luna< btDiscreteCollisionDetectorInterface::Result > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDiscreteCollisionDetectorInterface::Result,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25324514) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface::Result*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDiscreteCollisionDetectorInterface::Result* rhs =(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,2));
		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
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

		btDiscreteCollisionDetectorInterface::Result* self= (btDiscreteCollisionDetectorInterface::Result*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDiscreteCollisionDetectorInterface::Result >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25324514) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
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

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDiscreteCollisionDetectorInterface::Result");
		
		return luna_dynamicCast(L,converters,"btDiscreteCollisionDetectorInterface::Result",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setShapeIdentifiersA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShapeIdentifiersB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDiscreteCollisionDetectorInterface::Result::Result(lua_Table * data)
	static btDiscreteCollisionDetectorInterface::Result* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btDiscreteCollisionDetectorInterface::Result::Result(lua_Table * data) function, expected prototype:\nbtDiscreteCollisionDetectorInterface::Result::Result(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btDiscreteCollisionDetectorInterface_Result(L,NULL);
	}


	// Function binds:
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0)
	static int _bind_setShapeIdentifiersA(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersA(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int partId0=(int)lua_tointeger(L,2);
		int index0=(int)lua_tointeger(L,3);

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int, int). Got : '%s'\n%s",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShapeIdentifiersA(partId0, index0);

		return 0;
	}

	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1)
	static int _bind_setShapeIdentifiersB(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersB(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int partId1=(int)lua_tointeger(L,2);
		int index1=(int)lua_tointeger(L,3);

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int, int). Got : '%s'\n%s",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShapeIdentifiersB(partId1, index1);

		return 0;
	}

	// void btDiscreteCollisionDetectorInterface::Result::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_addContactPoint(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::Result::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::Result::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btDiscreteCollisionDetectorInterface::Result::addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btDiscreteCollisionDetectorInterface::Result::addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::Result::addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'\n%s",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}


	// Operator binds:

};

btDiscreteCollisionDetectorInterface::Result* LunaTraits< btDiscreteCollisionDetectorInterface::Result >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersA(int partId0, int index0)
	// void btDiscreteCollisionDetectorInterface::Result::setShapeIdentifiersB(int partId1, int index1)
	// void btDiscreteCollisionDetectorInterface::Result::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
}

void LunaTraits< btDiscreteCollisionDetectorInterface::Result >::_bind_dtor(btDiscreteCollisionDetectorInterface::Result* obj) {
	delete obj;
}

const char LunaTraits< btDiscreteCollisionDetectorInterface::Result >::className[] = "btDiscreteCollisionDetectorInterface_Result";
const char LunaTraits< btDiscreteCollisionDetectorInterface::Result >::fullName[] = "btDiscreteCollisionDetectorInterface::Result";
const char LunaTraits< btDiscreteCollisionDetectorInterface::Result >::moduleName[] = "bullet";
const char* LunaTraits< btDiscreteCollisionDetectorInterface::Result >::parents[] = {0};
const int LunaTraits< btDiscreteCollisionDetectorInterface::Result >::hash = 25324514;
const int LunaTraits< btDiscreteCollisionDetectorInterface::Result >::uniqueIDs[] = {25324514,0};

luna_RegType LunaTraits< btDiscreteCollisionDetectorInterface::Result >::methods[] = {
	{"setShapeIdentifiersA", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_setShapeIdentifiersA},
	{"setShapeIdentifiersB", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_setShapeIdentifiersB},
	{"addContactPoint", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_addContactPoint},
	{"dynCast", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_dynCast},
	{"__eq", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind___eq},
	{"fromVoid", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_asVoid},
	{"getTable", &luna_wrapper_btDiscreteCollisionDetectorInterface_Result::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDiscreteCollisionDetectorInterface::Result >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDiscreteCollisionDetectorInterface::Result >::enumValues[] = {
	{0,0}
};


