#include <plug_common.h>

#include <luna/wrappers/wrapper_SphereTriangleDetector.h>

class luna_wrapper_SphereTriangleDetector {
public:
	typedef Luna< SphereTriangleDetector > luna_t;

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

		SphereTriangleDetector* self= (SphereTriangleDetector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SphereTriangleDetector >::push(L,self,false);
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
		//SphereTriangleDetector* ptr= dynamic_cast< SphereTriangleDetector* >(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		SphereTriangleDetector* ptr= luna_caster< btDiscreteCollisionDetectorInterface, SphereTriangleDetector >::cast(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SphereTriangleDetector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btSphereShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,2)) ) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btSphereShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,3)) ) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_collide(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
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
	// SphereTriangleDetector::SphereTriangleDetector(btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold)
	static SphereTriangleDetector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SphereTriangleDetector::SphereTriangleDetector(btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold) function, expected prototype:\nSphereTriangleDetector::SphereTriangleDetector(btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\n");
		}

		btSphereShape* sphere=(Luna< btCollisionShape >::checkSubType< btSphereShape >(L,1));
		btTriangleShape* triangle=(Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,2));
		float contactBreakingThreshold=(float)lua_tonumber(L,3);

		return new SphereTriangleDetector(sphere, triangle, contactBreakingThreshold);
	}

	// SphereTriangleDetector::SphereTriangleDetector(lua_Table * data, btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold)
	static SphereTriangleDetector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SphereTriangleDetector::SphereTriangleDetector(lua_Table * data, btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold) function, expected prototype:\nSphereTriangleDetector::SphereTriangleDetector(lua_Table * data, btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\n");
		}

		btSphereShape* sphere=(Luna< btCollisionShape >::checkSubType< btSphereShape >(L,2));
		btTriangleShape* triangle=(Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,3));
		float contactBreakingThreshold=(float)lua_tonumber(L,4);

		return new wrapper_SphereTriangleDetector(L,NULL, sphere, triangle, contactBreakingThreshold);
	}

	// Overload binder for SphereTriangleDetector::SphereTriangleDetector
	static SphereTriangleDetector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SphereTriangleDetector, cannot match any of the overloads for function SphereTriangleDetector:\n  SphereTriangleDetector(btSphereShape *, btTriangleShape *, float)\n  SphereTriangleDetector(lua_Table *, btSphereShape *, btTriangleShape *, float)\n");
		return NULL;
	}


	// Function binds:
	// void SphereTriangleDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SphereTriangleDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid SphereTriangleDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in SphereTriangleDetector::getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in SphereTriangleDetector::getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		SphereTriangleDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< SphereTriangleDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SphereTriangleDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}

	// bool SphereTriangleDetector::collide(const btVector3 & sphereCenter, btVector3 & point, btVector3 & resultNormal, float & depth, float & timeOfImpact, float contactBreakingThreshold)
	static int _bind_collide(lua_State *L) {
		if (!_lg_typecheck_collide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SphereTriangleDetector::collide(const btVector3 & sphereCenter, btVector3 & point, btVector3 & resultNormal, float & depth, float & timeOfImpact, float contactBreakingThreshold) function, expected prototype:\nbool SphereTriangleDetector::collide(const btVector3 & sphereCenter, btVector3 & point, btVector3 & resultNormal, float & depth, float & timeOfImpact, float contactBreakingThreshold)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* sphereCenter_ptr=(Luna< btVector3 >::check(L,2));
		if( !sphereCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sphereCenter in SphereTriangleDetector::collide function");
		}
		const btVector3 & sphereCenter=*sphereCenter_ptr;
		btVector3* point_ptr=(Luna< btVector3 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in SphereTriangleDetector::collide function");
		}
		btVector3 & point=*point_ptr;
		btVector3* resultNormal_ptr=(Luna< btVector3 >::check(L,4));
		if( !resultNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultNormal in SphereTriangleDetector::collide function");
		}
		btVector3 & resultNormal=*resultNormal_ptr;
		float depth=(float)lua_tonumber(L,5);
		float timeOfImpact=(float)lua_tonumber(L,6);
		float contactBreakingThreshold=(float)lua_tonumber(L,7);

		SphereTriangleDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< SphereTriangleDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SphereTriangleDetector::collide(const btVector3 &, btVector3 &, btVector3 &, float &, float &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		bool lret = self->collide(sphereCenter, point, resultNormal, depth, timeOfImpact, contactBreakingThreshold);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SphereTriangleDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_base_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_base_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SphereTriangleDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid SphereTriangleDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in SphereTriangleDetector::base_getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in SphereTriangleDetector::base_getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		SphereTriangleDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< SphereTriangleDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SphereTriangleDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->SphereTriangleDetector::getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}


	// Operator binds:

};

SphereTriangleDetector* LunaTraits< SphereTriangleDetector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SphereTriangleDetector::_bind_ctor(L);
}

void LunaTraits< SphereTriangleDetector >::_bind_dtor(SphereTriangleDetector* obj) {
	delete obj;
}

const char LunaTraits< SphereTriangleDetector >::className[] = "SphereTriangleDetector";
const char LunaTraits< SphereTriangleDetector >::fullName[] = "SphereTriangleDetector";
const char LunaTraits< SphereTriangleDetector >::moduleName[] = "bullet";
const char* LunaTraits< SphereTriangleDetector >::parents[] = {"bullet.btDiscreteCollisionDetectorInterface", 0};
const int LunaTraits< SphereTriangleDetector >::hash = 20668227;
const int LunaTraits< SphereTriangleDetector >::uniqueIDs[] = {36160911,0};

luna_RegType LunaTraits< SphereTriangleDetector >::methods[] = {
	{"getClosestPoints", &luna_wrapper_SphereTriangleDetector::_bind_getClosestPoints},
	{"collide", &luna_wrapper_SphereTriangleDetector::_bind_collide},
	{"base_getClosestPoints", &luna_wrapper_SphereTriangleDetector::_bind_base_getClosestPoints},
	{"__eq", &luna_wrapper_SphereTriangleDetector::_bind___eq},
	{"fromVoid", &luna_wrapper_SphereTriangleDetector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SphereTriangleDetector::_bind_asVoid},
	{"getTable", &luna_wrapper_SphereTriangleDetector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SphereTriangleDetector >::converters[] = {
	{"btDiscreteCollisionDetectorInterface", &luna_wrapper_SphereTriangleDetector::_cast_from_btDiscreteCollisionDetectorInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< SphereTriangleDetector >::enumValues[] = {
	{0,0}
};


