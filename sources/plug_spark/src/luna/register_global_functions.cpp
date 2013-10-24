#include <plug_common.h>

#include <Core/SPK_Particle.h>
#include <Core/SPK_Vector3D.h>

// Function checkers:
inline static bool _lg_typecheck_isFurtherToCamera(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,73657533) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapParticles(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,73657533) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
	return true;
}

inline static bool _lg_typecheck_getSqrDist(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
	return true;
}

inline static bool _lg_typecheck_getDist(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
	return true;
}

inline static bool _lg_typecheck_dotProduct(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
	return true;
}

inline static bool _lg_typecheck_crossProduct_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
	if( (!(Luna< SPK::Vector3D >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
	if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_crossProduct_overload_2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
	if( (!(Luna< SPK::Vector3D >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
	if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
	if( (!(Luna< SPK::Vector3D >::check(L,3))) ) return false;
	return true;
}


// Function binds:
// bool SPK::isFurtherToCamera(const SPK::Particle & a, const SPK::Particle & b)
static int _bind_isFurtherToCamera(lua_State *L) {
	if (!_lg_typecheck_isFurtherToCamera(L)) {
		luaL_error(L, "luna typecheck failed in bool SPK::isFurtherToCamera(const SPK::Particle & a, const SPK::Particle & b) function, expected prototype:\nbool SPK::isFurtherToCamera(const SPK::Particle & a, const SPK::Particle & b)\nClass arguments details:\narg 1 ID = 73657533\narg 2 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Particle* a_ptr=(Luna< SPK::Particle >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in SPK::isFurtherToCamera function");
	}
	const SPK::Particle & a=*a_ptr;
	const SPK::Particle* b_ptr=(Luna< SPK::Particle >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in SPK::isFurtherToCamera function");
	}
	const SPK::Particle & b=*b_ptr;

	bool lret = SPK::isFurtherToCamera(a, b);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void SPK::swapParticles(SPK::Particle & a, SPK::Particle & b)
static int _bind_swapParticles(lua_State *L) {
	if (!_lg_typecheck_swapParticles(L)) {
		luaL_error(L, "luna typecheck failed in void SPK::swapParticles(SPK::Particle & a, SPK::Particle & b) function, expected prototype:\nvoid SPK::swapParticles(SPK::Particle & a, SPK::Particle & b)\nClass arguments details:\narg 1 ID = 73657533\narg 2 ID = 73657533\n\n%s",luna_dumpStack(L).c_str());
	}

	SPK::Particle* a_ptr=(Luna< SPK::Particle >::check(L,1));
	if( !a_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg a in SPK::swapParticles function");
	}
	SPK::Particle & a=*a_ptr;
	SPK::Particle* b_ptr=(Luna< SPK::Particle >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in SPK::swapParticles function");
	}
	SPK::Particle & b=*b_ptr;

	SPK::swapParticles(a, b);

	return 0;
}

// float SPK::getSqrDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1)
static int _bind_getSqrDist(lua_State *L) {
	if (!_lg_typecheck_getSqrDist(L)) {
		luaL_error(L, "luna typecheck failed in float SPK::getSqrDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1) function, expected prototype:\nfloat SPK::getSqrDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::getSqrDist function");
	}
	const SPK::Vector3D & v0=*v0_ptr;
	const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::getSqrDist function");
	}
	const SPK::Vector3D & v1=*v1_ptr;

	float lret = SPK::getSqrDist(v0, v1);
	lua_pushnumber(L,lret);

	return 1;
}

// float SPK::getDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1)
static int _bind_getDist(lua_State *L) {
	if (!_lg_typecheck_getDist(L)) {
		luaL_error(L, "luna typecheck failed in float SPK::getDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1) function, expected prototype:\nfloat SPK::getDist(const SPK::Vector3D & v0, const SPK::Vector3D & v1)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::getDist function");
	}
	const SPK::Vector3D & v0=*v0_ptr;
	const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::getDist function");
	}
	const SPK::Vector3D & v1=*v1_ptr;

	float lret = SPK::getDist(v0, v1);
	lua_pushnumber(L,lret);

	return 1;
}

// float SPK::dotProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1)
static int _bind_dotProduct(lua_State *L) {
	if (!_lg_typecheck_dotProduct(L)) {
		luaL_error(L, "luna typecheck failed in float SPK::dotProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1) function, expected prototype:\nfloat SPK::dotProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::dotProduct function");
	}
	const SPK::Vector3D & v0=*v0_ptr;
	const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::dotProduct function");
	}
	const SPK::Vector3D & v1=*v1_ptr;

	float lret = SPK::dotProduct(v0, v1);
	lua_pushnumber(L,lret);

	return 1;
}

// SPK::Vector3D SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1)
static int _bind_crossProduct_overload_1(lua_State *L) {
	if (!_lg_typecheck_crossProduct_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1) function, expected prototype:\nSPK::Vector3D SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::crossProduct function");
	}
	const SPK::Vector3D & v0=*v0_ptr;
	const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::crossProduct function");
	}
	const SPK::Vector3D & v1=*v1_ptr;

	SPK::Vector3D stack_lret = SPK::crossProduct(v0, v1);
	SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SPK::Vector3D >::push(L,lret,true);

	return 1;
}

// void SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D & result)
static int _bind_crossProduct_overload_2(lua_State *L) {
	if (!_lg_typecheck_crossProduct_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D & result) function, expected prototype:\nvoid SPK::crossProduct(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D & result)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
	}

	const SPK::Vector3D* v0_ptr=(Luna< SPK::Vector3D >::check(L,1));
	if( !v0_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v0 in SPK::crossProduct function");
	}
	const SPK::Vector3D & v0=*v0_ptr;
	const SPK::Vector3D* v1_ptr=(Luna< SPK::Vector3D >::check(L,2));
	if( !v1_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg v1 in SPK::crossProduct function");
	}
	const SPK::Vector3D & v1=*v1_ptr;
	SPK::Vector3D* result_ptr=(Luna< SPK::Vector3D >::check(L,3));
	if( !result_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg result in SPK::crossProduct function");
	}
	SPK::Vector3D & result=*result_ptr;

	SPK::crossProduct(v0, v1, result);

	return 0;
}

// Overload binder for SPK::crossProduct
static int _bind_crossProduct(lua_State *L) {
	if (_lg_typecheck_crossProduct_overload_1(L)) return _bind_crossProduct_overload_1(L);
	if (_lg_typecheck_crossProduct_overload_2(L)) return _bind_crossProduct_overload_2(L);

	luaL_error(L, "error in function crossProduct, cannot match any of the overloads for function crossProduct:\n  crossProduct(const SPK::Vector3D &, const SPK::Vector3D &)\n  crossProduct(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Vector3D &)\n");
	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"spark");
	lua_pushcfunction(L, _bind_isFurtherToCamera); lua_setfield(L,-2,"isFurtherToCamera");
	lua_pushcfunction(L, _bind_swapParticles); lua_setfield(L,-2,"swapParticles");
	lua_pushcfunction(L, _bind_getSqrDist); lua_setfield(L,-2,"getSqrDist");
	lua_pushcfunction(L, _bind_getDist); lua_setfield(L,-2,"getDist");
	lua_pushcfunction(L, _bind_dotProduct); lua_setfield(L,-2,"dotProduct");
	lua_pushcfunction(L, _bind_crossProduct); lua_setfield(L,-2,"crossProduct");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

