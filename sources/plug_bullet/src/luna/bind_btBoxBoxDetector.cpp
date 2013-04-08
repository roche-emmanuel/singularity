#include <plug_common.h>

#include <luna/wrappers/wrapper_btBoxBoxDetector.h>

class luna_wrapper_btBoxBoxDetector {
public:
	typedef Luna< btBoxBoxDetector > luna_t;

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

		btBoxBoxDetector* self= (btBoxBoxDetector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBoxBoxDetector >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_btDiscreteCollisionDetectorInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btBoxBoxDetector* ptr= dynamic_cast< btBoxBoxDetector* >(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		btBoxBoxDetector* ptr= luna_caster< btDiscreteCollisionDetectorInterface, btBoxBoxDetector >::cast(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBoxBoxDetector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,3)) ) ) return false;
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

	inline static bool _lg_typecheck_getBox1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBox2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getClosestPoints(lua_State *L) {
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
	// btBoxBoxDetector::btBoxBoxDetector(const btBoxShape * box1, const btBoxShape * box2)
	static btBoxBoxDetector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBoxBoxDetector::btBoxBoxDetector(const btBoxShape * box1, const btBoxShape * box2) function, expected prototype:\nbtBoxBoxDetector::btBoxBoxDetector(const btBoxShape * box1, const btBoxShape * box2)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\n");
		}

		const btBoxShape* box1=(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,1));
		const btBoxShape* box2=(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,2));

		return new btBoxBoxDetector(box1, box2);
	}

	// btBoxBoxDetector::btBoxBoxDetector(lua_Table * data, const btBoxShape * box1, const btBoxShape * box2)
	static btBoxBoxDetector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBoxBoxDetector::btBoxBoxDetector(lua_Table * data, const btBoxShape * box1, const btBoxShape * box2) function, expected prototype:\nbtBoxBoxDetector::btBoxBoxDetector(lua_Table * data, const btBoxShape * box1, const btBoxShape * box2)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\n");
		}

		const btBoxShape* box1=(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,2));
		const btBoxShape* box2=(Luna< btCollisionShape >::checkSubType< btBoxShape >(L,3));

		return new wrapper_btBoxBoxDetector(L,NULL, box1, box2);
	}

	// Overload binder for btBoxBoxDetector::btBoxBoxDetector
	static btBoxBoxDetector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btBoxBoxDetector, cannot match any of the overloads for function btBoxBoxDetector:\n  btBoxBoxDetector(const btBoxShape *, const btBoxShape *)\n  btBoxBoxDetector(lua_Table *, const btBoxShape *, const btBoxShape *)\n");
		return NULL;
	}


	// Function binds:
	// void btBoxBoxDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBoxBoxDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid btBoxBoxDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btBoxBoxDetector::getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btBoxBoxDetector::getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		btBoxBoxDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btBoxBoxDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBoxBoxDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}

	// const btBoxShape * btBoxBoxDetector::m_box1()
	static int _bind_getBox1(lua_State *L) {
		if (!_lg_typecheck_getBox1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBoxShape * btBoxBoxDetector::m_box1() function, expected prototype:\nconst btBoxShape * btBoxBoxDetector::m_box1()\nClass arguments details:\n");
		}


		btBoxBoxDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btBoxBoxDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBoxShape * btBoxBoxDetector::m_box1(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		const btBoxShape * lret = self->m_box1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBoxShape >::push(L,lret,false);

		return 1;
	}

	// const btBoxShape * btBoxBoxDetector::m_box2()
	static int _bind_getBox2(lua_State *L) {
		if (!_lg_typecheck_getBox2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBoxShape * btBoxBoxDetector::m_box2() function, expected prototype:\nconst btBoxShape * btBoxBoxDetector::m_box2()\nClass arguments details:\n");
		}


		btBoxBoxDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btBoxBoxDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBoxShape * btBoxBoxDetector::m_box2(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		const btBoxShape * lret = self->m_box2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBoxShape >::push(L,lret,false);

		return 1;
	}

	// void btBoxBoxDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_base_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_base_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBoxBoxDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid btBoxBoxDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btBoxBoxDetector::base_getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btBoxBoxDetector::base_getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		btBoxBoxDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btBoxBoxDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBoxBoxDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->btBoxBoxDetector::getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}


	// Operator binds:

};

btBoxBoxDetector* LunaTraits< btBoxBoxDetector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBoxBoxDetector::_bind_ctor(L);
}

void LunaTraits< btBoxBoxDetector >::_bind_dtor(btBoxBoxDetector* obj) {
	delete obj;
}

const char LunaTraits< btBoxBoxDetector >::className[] = "btBoxBoxDetector";
const char LunaTraits< btBoxBoxDetector >::fullName[] = "btBoxBoxDetector";
const char LunaTraits< btBoxBoxDetector >::moduleName[] = "bullet";
const char* LunaTraits< btBoxBoxDetector >::parents[] = {"bullet.btDiscreteCollisionDetectorInterface", 0};
const int LunaTraits< btBoxBoxDetector >::hash = 88417573;
const int LunaTraits< btBoxBoxDetector >::uniqueIDs[] = {36160911,0};

luna_RegType LunaTraits< btBoxBoxDetector >::methods[] = {
	{"getClosestPoints", &luna_wrapper_btBoxBoxDetector::_bind_getClosestPoints},
	{"getBox1", &luna_wrapper_btBoxBoxDetector::_bind_getBox1},
	{"getBox2", &luna_wrapper_btBoxBoxDetector::_bind_getBox2},
	{"base_getClosestPoints", &luna_wrapper_btBoxBoxDetector::_bind_base_getClosestPoints},
	{"fromVoid", &luna_wrapper_btBoxBoxDetector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBoxBoxDetector::_bind_asVoid},
	{"getTable", &luna_wrapper_btBoxBoxDetector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBoxBoxDetector >::converters[] = {
	{"btDiscreteCollisionDetectorInterface", &luna_wrapper_btBoxBoxDetector::_cast_from_btDiscreteCollisionDetectorInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btBoxBoxDetector >::enumValues[] = {
	{0,0}
};


