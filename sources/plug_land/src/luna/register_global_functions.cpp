#include <plug_common.h>

#include <math/half.h>
#include <plug_extensions.h>
#include <scene/Tools.h>

// Function checkers:
inline static bool _lg_typecheck_isNaN_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
	if( (!(Luna< sgt::half >::check(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_isNaN_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isFinite(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isInf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isSubnormal(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getInfinity(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// bool isNaN(sgt::half x)
static int _bind_isNaN_overload_1(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool isNaN(sgt::half x) function, expected prototype:\nbool isNaN(sgt::half x)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
	}

	sgt::half* x_ptr=(Luna< sgt::half >::check(L,1));
	if( !x_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg x in isNaN function");
	}
	sgt::half x=*x_ptr;

	bool lret = ::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isNaN(double x)
static int _bind_isNaN_overload_2(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool isNaN(double x) function, expected prototype:\nbool isNaN(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for isNaN
static int _bind_isNaN(lua_State *L) {
	if (_lg_typecheck_isNaN_overload_1(L)) return _bind_isNaN_overload_1(L);
	if (_lg_typecheck_isNaN_overload_2(L)) return _bind_isNaN_overload_2(L);

	luaL_error(L, "error in function isNaN, cannot match any of the overloads for function isNaN:\n  isNaN(sgt::half)\n  isNaN(double)\n");
	return 0;
}

// bool isFinite(double x)
static int _bind_isFinite(lua_State *L) {
	if (!_lg_typecheck_isFinite(L)) {
		luaL_error(L, "luna typecheck failed in bool isFinite(double x) function, expected prototype:\nbool isFinite(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isFinite(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isInf(double x)
static int _bind_isInf(lua_State *L) {
	if (!_lg_typecheck_isInf(L)) {
		luaL_error(L, "luna typecheck failed in bool isInf(double x) function, expected prototype:\nbool isInf(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isInf(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool isSubnormal(double x)
static int _bind_isSubnormal(lua_State *L) {
	if (!_lg_typecheck_isSubnormal(L)) {
		luaL_error(L, "luna typecheck failed in bool isSubnormal(double x) function, expected prototype:\nbool isSubnormal(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::isSubnormal(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// double getInfinity()
static int _bind_getInfinity(lua_State *L) {
	if (!_lg_typecheck_getInfinity(L)) {
		luaL_error(L, "luna typecheck failed in double getInfinity() function, expected prototype:\ndouble getInfinity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	double lret = ::getInfinity();
	lua_pushnumber(L,lret);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_floatToHalf(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_halfToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getVisibility_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
	if( (!(Luna< osg::Polytope::PlaneList >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
	if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_getVisibility_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
	if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
	if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
	return true;
}

inline static bool _lg_typecheck_getFrustumPlanes(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,67824815) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,33161232) ) return false;
	return true;
}


// Function binds:
// unsigned short sgt::floatToHalf(float x)
static int _bind_floatToHalf(lua_State *L) {
	if (!_lg_typecheck_floatToHalf(L)) {
		luaL_error(L, "luna typecheck failed in unsigned short sgt::floatToHalf(float x) function, expected prototype:\nunsigned short sgt::floatToHalf(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	float x=(float)lua_tonumber(L,1);

	unsigned short lret = sgt::floatToHalf(x);
	lua_pushnumber(L,lret);

	return 1;
}

// float sgt::halfToFloat(unsigned short h)
static int _bind_halfToFloat(lua_State *L) {
	if (!_lg_typecheck_halfToFloat(L)) {
		luaL_error(L, "luna typecheck failed in float sgt::halfToFloat(unsigned short h) function, expected prototype:\nfloat sgt::halfToFloat(unsigned short h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned short h=(unsigned short)lua_tointeger(L,1);

	float lret = sgt::halfToFloat(h);
	lua_pushnumber(L,lret);

	return 1;
}

// sgt::VisibilityMode sgt::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b)
static int _bind_getVisibility_overload_1(lua_State *L) {
	if (!_lg_typecheck_getVisibility_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in sgt::VisibilityMode sgt::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b) function, expected prototype:\nsgt::VisibilityMode sgt::getVisibility(const osg::Polytope::PlaneList & frustumPlanes, const sgt::box3d & b)\nClass arguments details:\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Polytope::PlaneList* frustumPlanes_ptr=(Luna< osg::Polytope::PlaneList >::check(L,1));
	if( !frustumPlanes_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg frustumPlanes in sgt::getVisibility function");
	}
	const osg::Polytope::PlaneList & frustumPlanes=*frustumPlanes_ptr;
	const sgt::box3d* b_ptr=(Luna< sgt::box3d >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::getVisibility function");
	}
	const sgt::box3d & b=*b_ptr;

	sgt::VisibilityMode lret = sgt::getVisibility(frustumPlanes, b);
	lua_pushnumber(L,lret);

	return 1;
}

// sgt::VisibilityMode sgt::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b)
static int _bind_getVisibility_overload_2(lua_State *L) {
	if (!_lg_typecheck_getVisibility_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in sgt::VisibilityMode sgt::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b) function, expected prototype:\nsgt::VisibilityMode sgt::getVisibility(const osg::Vec4d & clip, const sgt::box3d & b)\nClass arguments details:\narg 2 ID = 58086971\n\n%s",luna_dumpStack(L).c_str());
	}

	const osg::Vec4d* clip_ptr=(Luna< osg::Vec4d >::check(L,1));
	if( !clip_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg clip in sgt::getVisibility function");
	}
	const osg::Vec4d & clip=*clip_ptr;
	const sgt::box3d* b_ptr=(Luna< sgt::box3d >::check(L,2));
	if( !b_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::getVisibility function");
	}
	const sgt::box3d & b=*b_ptr;

	sgt::VisibilityMode lret = sgt::getVisibility(clip, b);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for sgt::getVisibility
static int _bind_getVisibility(lua_State *L) {
	if (_lg_typecheck_getVisibility_overload_1(L)) return _bind_getVisibility_overload_1(L);
	if (_lg_typecheck_getVisibility_overload_2(L)) return _bind_getVisibility_overload_2(L);

	luaL_error(L, "error in function getVisibility, cannot match any of the overloads for function getVisibility:\n  getVisibility(const osg::Polytope::PlaneList &, const sgt::box3d &)\n  getVisibility(const osg::Vec4d &, const sgt::box3d &)\n");
	return 0;
}

// void sgt::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes)
static int _bind_getFrustumPlanes(lua_State *L) {
	if (!_lg_typecheck_getFrustumPlanes(L)) {
		luaL_error(L, "luna typecheck failed in void sgt::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes) function, expected prototype:\nvoid sgt::getFrustumPlanes(const sgt::mat4d & toScreen, osg::Polytope::PlaneList & planes)\nClass arguments details:\narg 1 ID = 67824815\n\n%s",luna_dumpStack(L).c_str());
	}

	const sgt::mat4d* toScreen_ptr=(Luna< sgt::mat4d >::check(L,1));
	if( !toScreen_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg toScreen in sgt::getFrustumPlanes function");
	}
	const sgt::mat4d & toScreen=*toScreen_ptr;
	osg::Polytope::PlaneList* planes_ptr=(Luna< osg::Polytope::PlaneList >::check(L,2));
	if( !planes_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg planes in sgt::getFrustumPlanes function");
	}
	osg::Polytope::PlaneList & planes=*planes_ptr;

	sgt::getFrustumPlanes(toScreen, planes);

	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"sgt");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	lua_pushcfunction(L, _bind_isFinite); lua_setfield(L,-2,"isFinite");
	lua_pushcfunction(L, _bind_isInf); lua_setfield(L,-2,"isInf");
	lua_pushcfunction(L, _bind_isSubnormal); lua_setfield(L,-2,"isSubnormal");
	lua_pushcfunction(L, _bind_getInfinity); lua_setfield(L,-2,"getInfinity");
	lua_pushcfunction(L, _bind_floatToHalf); lua_setfield(L,-2,"floatToHalf");
	lua_pushcfunction(L, _bind_halfToFloat); lua_setfield(L,-2,"halfToFloat");
	lua_pushcfunction(L, _bind_getVisibility); lua_setfield(L,-2,"getVisibility");
	lua_pushcfunction(L, _bind_getFrustumPlanes); lua_setfield(L,-2,"getFrustumPlanes");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

