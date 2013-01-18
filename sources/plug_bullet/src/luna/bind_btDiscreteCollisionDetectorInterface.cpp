#include <plug_common.h>

#include <luna/wrappers/wrapper_btDiscreteCollisionDetectorInterface.h>

class luna_wrapper_btDiscreteCollisionDetectorInterface {
public:
	typedef Luna< btDiscreteCollisionDetectorInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDiscreteCollisionDetectorInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36160911) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface*)");
		}

		btDiscreteCollisionDetectorInterface* rhs =(Luna< btDiscreteCollisionDetectorInterface >::check(L,2));
		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
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

		btDiscreteCollisionDetectorInterface* self= (btDiscreteCollisionDetectorInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDiscreteCollisionDetectorInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36160911) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
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

		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDiscreteCollisionDetectorInterface");
		
		return luna_dynamicCast(L,converters,"btDiscreteCollisionDetectorInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClosestPoints(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99215612) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25324514) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63441741)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDiscreteCollisionDetectorInterface::btDiscreteCollisionDetectorInterface(lua_Table * data)
	static btDiscreteCollisionDetectorInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDiscreteCollisionDetectorInterface::btDiscreteCollisionDetectorInterface(lua_Table * data) function, expected prototype:\nbtDiscreteCollisionDetectorInterface::btDiscreteCollisionDetectorInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btDiscreteCollisionDetectorInterface(L,NULL);
	}


	// Function binds:
	// void btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btDiscreteCollisionDetectorInterface::getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btDiscreteCollisionDetectorInterface::getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}


	// Operator binds:

};

btDiscreteCollisionDetectorInterface* LunaTraits< btDiscreteCollisionDetectorInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
}

void LunaTraits< btDiscreteCollisionDetectorInterface >::_bind_dtor(btDiscreteCollisionDetectorInterface* obj) {
	delete obj;
}

const char LunaTraits< btDiscreteCollisionDetectorInterface >::className[] = "btDiscreteCollisionDetectorInterface";
const char LunaTraits< btDiscreteCollisionDetectorInterface >::fullName[] = "btDiscreteCollisionDetectorInterface";
const char LunaTraits< btDiscreteCollisionDetectorInterface >::moduleName[] = "bullet";
const char* LunaTraits< btDiscreteCollisionDetectorInterface >::parents[] = {0};
const int LunaTraits< btDiscreteCollisionDetectorInterface >::hash = 36160911;
const int LunaTraits< btDiscreteCollisionDetectorInterface >::uniqueIDs[] = {36160911,0};

luna_RegType LunaTraits< btDiscreteCollisionDetectorInterface >::methods[] = {
	{"getClosestPoints", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_getClosestPoints},
	{"dynCast", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_btDiscreteCollisionDetectorInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDiscreteCollisionDetectorInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDiscreteCollisionDetectorInterface >::enumValues[] = {
	{0,0}
};


