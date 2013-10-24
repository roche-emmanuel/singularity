#include <plug_common.h>

class luna_wrapper_btTransformUtil {
public:
	typedef Luna< btTransformUtil > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32029898) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTransformUtil*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTransformUtil* rhs =(Luna< btTransformUtil >::check(L,2));
		btTransformUtil* self=(Luna< btTransformUtil >::check(L,1));
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

		btTransformUtil* self= (btTransformUtil*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTransformUtil >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32029898) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btTransformUtil >::check(L,1));
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

		btTransformUtil* self=(Luna< btTransformUtil >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTransformUtil");
		
		return luna_dynamicCast(L,converters,"btTransformUtil",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_integrateTransform(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateVelocityQuaternion(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2139400) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,2139400) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateDiffAxisAngleQuaternion(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateVelocity(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateDiffAxisAngle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void btTransformUtil::integrateTransform(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btTransform & predictedTransform)
	static int _bind_integrateTransform(lua_State *L) {
		if (!_lg_typecheck_integrateTransform(L)) {
			luaL_error(L, "luna typecheck failed in static void btTransformUtil::integrateTransform(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btTransform & predictedTransform) function, expected prototype:\nstatic void btTransformUtil::integrateTransform(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btTransform & predictedTransform)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 5 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* curTrans_ptr=(Luna< btTransform >::check(L,1));
		if( !curTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curTrans in btTransformUtil::integrateTransform function");
		}
		const btTransform & curTrans=*curTrans_ptr;
		const btVector3* linvel_ptr=(Luna< btVector3 >::check(L,2));
		if( !linvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvel in btTransformUtil::integrateTransform function");
		}
		const btVector3 & linvel=*linvel_ptr;
		const btVector3* angvel_ptr=(Luna< btVector3 >::check(L,3));
		if( !angvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvel in btTransformUtil::integrateTransform function");
		}
		const btVector3 & angvel=*angvel_ptr;
		float timeStep=(float)lua_tonumber(L,4);
		btTransform* predictedTransform_ptr=(Luna< btTransform >::check(L,5));
		if( !predictedTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg predictedTransform in btTransformUtil::integrateTransform function");
		}
		btTransform & predictedTransform=*predictedTransform_ptr;

		btTransformUtil::integrateTransform(curTrans, linvel, angvel, timeStep, predictedTransform);

		return 0;
	}

	// static void btTransformUtil::calculateVelocityQuaternion(const btVector3 & pos0, const btVector3 & pos1, const btQuaternion & orn0, const btQuaternion & orn1, float timeStep, btVector3 & linVel, btVector3 & angVel)
	static int _bind_calculateVelocityQuaternion(lua_State *L) {
		if (!_lg_typecheck_calculateVelocityQuaternion(L)) {
			luaL_error(L, "luna typecheck failed in static void btTransformUtil::calculateVelocityQuaternion(const btVector3 & pos0, const btVector3 & pos1, const btQuaternion & orn0, const btQuaternion & orn1, float timeStep, btVector3 & linVel, btVector3 & angVel) function, expected prototype:\nstatic void btTransformUtil::calculateVelocityQuaternion(const btVector3 & pos0, const btVector3 & pos1, const btQuaternion & orn0, const btQuaternion & orn1, float timeStep, btVector3 & linVel, btVector3 & angVel)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 2139400\narg 4 ID = 2139400\narg 6 ID = 91544891\narg 7 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pos0_ptr=(Luna< btVector3 >::check(L,1));
		if( !pos0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos0 in btTransformUtil::calculateVelocityQuaternion function");
		}
		const btVector3 & pos0=*pos0_ptr;
		const btVector3* pos1_ptr=(Luna< btVector3 >::check(L,2));
		if( !pos1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos1 in btTransformUtil::calculateVelocityQuaternion function");
		}
		const btVector3 & pos1=*pos1_ptr;
		const btQuaternion* orn0_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,3));
		if( !orn0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orn0 in btTransformUtil::calculateVelocityQuaternion function");
		}
		const btQuaternion & orn0=*orn0_ptr;
		const btQuaternion* orn1_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,4));
		if( !orn1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orn1 in btTransformUtil::calculateVelocityQuaternion function");
		}
		const btQuaternion & orn1=*orn1_ptr;
		float timeStep=(float)lua_tonumber(L,5);
		btVector3* linVel_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVel in btTransformUtil::calculateVelocityQuaternion function");
		}
		btVector3 & linVel=*linVel_ptr;
		btVector3* angVel_ptr=(Luna< btVector3 >::check(L,7));
		if( !angVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVel in btTransformUtil::calculateVelocityQuaternion function");
		}
		btVector3 & angVel=*angVel_ptr;

		btTransformUtil::calculateVelocityQuaternion(pos0, pos1, orn0, orn1, timeStep, linVel, angVel);

		return 0;
	}

	// static void btTransformUtil::calculateDiffAxisAngleQuaternion(const btQuaternion & orn0, const btQuaternion & orn1a, btVector3 & axis, float & angle)
	static int _bind_calculateDiffAxisAngleQuaternion(lua_State *L) {
		if (!_lg_typecheck_calculateDiffAxisAngleQuaternion(L)) {
			luaL_error(L, "luna typecheck failed in static void btTransformUtil::calculateDiffAxisAngleQuaternion(const btQuaternion & orn0, const btQuaternion & orn1a, btVector3 & axis, float & angle) function, expected prototype:\nstatic void btTransformUtil::calculateDiffAxisAngleQuaternion(const btQuaternion & orn0, const btQuaternion & orn1a, btVector3 & axis, float & angle)\nClass arguments details:\narg 1 ID = 2139400\narg 2 ID = 2139400\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* orn0_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,1));
		if( !orn0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orn0 in btTransformUtil::calculateDiffAxisAngleQuaternion function");
		}
		const btQuaternion & orn0=*orn0_ptr;
		const btQuaternion* orn1a_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !orn1a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orn1a in btTransformUtil::calculateDiffAxisAngleQuaternion function");
		}
		const btQuaternion & orn1a=*orn1a_ptr;
		btVector3* axis_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btTransformUtil::calculateDiffAxisAngleQuaternion function");
		}
		btVector3 & axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,4);

		btTransformUtil::calculateDiffAxisAngleQuaternion(orn0, orn1a, axis, angle);

		lua_pushnumber(L,angle);
		return 1;
	}

	// static void btTransformUtil::calculateVelocity(const btTransform & transform0, const btTransform & transform1, float timeStep, btVector3 & linVel, btVector3 & angVel)
	static int _bind_calculateVelocity(lua_State *L) {
		if (!_lg_typecheck_calculateVelocity(L)) {
			luaL_error(L, "luna typecheck failed in static void btTransformUtil::calculateVelocity(const btTransform & transform0, const btTransform & transform1, float timeStep, btVector3 & linVel, btVector3 & angVel) function, expected prototype:\nstatic void btTransformUtil::calculateVelocity(const btTransform & transform0, const btTransform & transform1, float timeStep, btVector3 & linVel, btVector3 & angVel)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* transform0_ptr=(Luna< btTransform >::check(L,1));
		if( !transform0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform0 in btTransformUtil::calculateVelocity function");
		}
		const btTransform & transform0=*transform0_ptr;
		const btTransform* transform1_ptr=(Luna< btTransform >::check(L,2));
		if( !transform1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform1 in btTransformUtil::calculateVelocity function");
		}
		const btTransform & transform1=*transform1_ptr;
		float timeStep=(float)lua_tonumber(L,3);
		btVector3* linVel_ptr=(Luna< btVector3 >::check(L,4));
		if( !linVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVel in btTransformUtil::calculateVelocity function");
		}
		btVector3 & linVel=*linVel_ptr;
		btVector3* angVel_ptr=(Luna< btVector3 >::check(L,5));
		if( !angVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVel in btTransformUtil::calculateVelocity function");
		}
		btVector3 & angVel=*angVel_ptr;

		btTransformUtil::calculateVelocity(transform0, transform1, timeStep, linVel, angVel);

		return 0;
	}

	// static void btTransformUtil::calculateDiffAxisAngle(const btTransform & transform0, const btTransform & transform1, btVector3 & axis, float & angle)
	static int _bind_calculateDiffAxisAngle(lua_State *L) {
		if (!_lg_typecheck_calculateDiffAxisAngle(L)) {
			luaL_error(L, "luna typecheck failed in static void btTransformUtil::calculateDiffAxisAngle(const btTransform & transform0, const btTransform & transform1, btVector3 & axis, float & angle) function, expected prototype:\nstatic void btTransformUtil::calculateDiffAxisAngle(const btTransform & transform0, const btTransform & transform1, btVector3 & axis, float & angle)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* transform0_ptr=(Luna< btTransform >::check(L,1));
		if( !transform0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform0 in btTransformUtil::calculateDiffAxisAngle function");
		}
		const btTransform & transform0=*transform0_ptr;
		const btTransform* transform1_ptr=(Luna< btTransform >::check(L,2));
		if( !transform1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform1 in btTransformUtil::calculateDiffAxisAngle function");
		}
		const btTransform & transform1=*transform1_ptr;
		btVector3* axis_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btTransformUtil::calculateDiffAxisAngle function");
		}
		btVector3 & axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,4);

		btTransformUtil::calculateDiffAxisAngle(transform0, transform1, axis, angle);

		lua_pushnumber(L,angle);
		return 1;
	}


	// Operator binds:

};

btTransformUtil* LunaTraits< btTransformUtil >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTransformUtil >::_bind_dtor(btTransformUtil* obj) {
	delete obj;
}

const char LunaTraits< btTransformUtil >::className[] = "btTransformUtil";
const char LunaTraits< btTransformUtil >::fullName[] = "btTransformUtil";
const char LunaTraits< btTransformUtil >::moduleName[] = "bullet";
const char* LunaTraits< btTransformUtil >::parents[] = {0};
const int LunaTraits< btTransformUtil >::hash = 32029898;
const int LunaTraits< btTransformUtil >::uniqueIDs[] = {32029898,0};

luna_RegType LunaTraits< btTransformUtil >::methods[] = {
	{"integrateTransform", &luna_wrapper_btTransformUtil::_bind_integrateTransform},
	{"calculateVelocityQuaternion", &luna_wrapper_btTransformUtil::_bind_calculateVelocityQuaternion},
	{"calculateDiffAxisAngleQuaternion", &luna_wrapper_btTransformUtil::_bind_calculateDiffAxisAngleQuaternion},
	{"calculateVelocity", &luna_wrapper_btTransformUtil::_bind_calculateVelocity},
	{"calculateDiffAxisAngle", &luna_wrapper_btTransformUtil::_bind_calculateDiffAxisAngle},
	{"dynCast", &luna_wrapper_btTransformUtil::_bind_dynCast},
	{"__eq", &luna_wrapper_btTransformUtil::_bind___eq},
	{"fromVoid", &luna_wrapper_btTransformUtil::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTransformUtil::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTransformUtil >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTransformUtil >::enumValues[] = {
	{0,0}
};


