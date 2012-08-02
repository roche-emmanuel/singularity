#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GL>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Version>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Endian>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Geometry>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GLExtensions>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GLObjects>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GLU>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Image>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ImageUtils>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Math>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Notify>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/OcclusionQueryNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Referenced>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/StateSet>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Transform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2s>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3s>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4s>

// Function checkers:
inline static bool _lg_typecheck_glLoadMatrix_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_glLoadMatrix_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultMatrix_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_glMultMatrix_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_osgGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGetSOVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// void glLoadMatrix(const float * mat)
static int _bind_glLoadMatrix_overload_1(lua_State *L) {
	if (!_lg_typecheck_glLoadMatrix_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void glLoadMatrix(const float * mat) function, expected prototype:\nvoid glLoadMatrix(const float * mat)\nClass arguments details:\n");
	}

	float mat=(float)lua_tonumber(L,1);

	glLoadMatrix(&mat);

	return 0;
}

// void glLoadMatrix(const double * mat)
static int _bind_glLoadMatrix_overload_2(lua_State *L) {
	if (!_lg_typecheck_glLoadMatrix_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void glLoadMatrix(const double * mat) function, expected prototype:\nvoid glLoadMatrix(const double * mat)\nClass arguments details:\n");
	}

	double mat=(double)lua_tonumber(L,1);

	glLoadMatrix(&mat);

	return 0;
}

// Overload binder for glLoadMatrix
static int _bind_glLoadMatrix(lua_State *L) {
	if (_lg_typecheck_glLoadMatrix_overload_1(L)) return _bind_glLoadMatrix_overload_1(L);
	if (_lg_typecheck_glLoadMatrix_overload_2(L)) return _bind_glLoadMatrix_overload_2(L);

	luaL_error(L, "error in function glLoadMatrix, cannot match any of the overloads for function glLoadMatrix:\n  glLoadMatrix(const float *)\n  glLoadMatrix(const double *)\n");
	return 0;
}

// void glMultMatrix(const float * mat)
static int _bind_glMultMatrix_overload_1(lua_State *L) {
	if (!_lg_typecheck_glMultMatrix_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void glMultMatrix(const float * mat) function, expected prototype:\nvoid glMultMatrix(const float * mat)\nClass arguments details:\n");
	}

	float mat=(float)lua_tonumber(L,1);

	glMultMatrix(&mat);

	return 0;
}

// void glMultMatrix(const double * mat)
static int _bind_glMultMatrix_overload_2(lua_State *L) {
	if (!_lg_typecheck_glMultMatrix_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void glMultMatrix(const double * mat) function, expected prototype:\nvoid glMultMatrix(const double * mat)\nClass arguments details:\n");
	}

	double mat=(double)lua_tonumber(L,1);

	glMultMatrix(&mat);

	return 0;
}

// Overload binder for glMultMatrix
static int _bind_glMultMatrix(lua_State *L) {
	if (_lg_typecheck_glMultMatrix_overload_1(L)) return _bind_glMultMatrix_overload_1(L);
	if (_lg_typecheck_glMultMatrix_overload_2(L)) return _bind_glMultMatrix_overload_2(L);

	luaL_error(L, "error in function glMultMatrix, cannot match any of the overloads for function glMultMatrix:\n  glMultMatrix(const float *)\n  glMultMatrix(const double *)\n");
	return 0;
}

// const char * osgGetVersion()
static int _bind_osgGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgGetVersion() function, expected prototype:\nconst char * osgGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGetSOVersion()
static int _bind_osgGetSOVersion(lua_State *L) {
	if (!_lg_typecheck_osgGetSOVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgGetSOVersion() function, expected prototype:\nconst char * osgGetSOVersion()\nClass arguments details:\n");
	}


	const char * lret = osgGetSOVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGetLibraryName()
static int _bind_osgGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgGetLibraryName() function, expected prototype:\nconst char * osgGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}


// Function checkers:
inline static bool _lg_typecheck_getCpuByteOrder(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_swapBytes(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes4(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes8(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_swapBytes16(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_createTexturedQuadGeometry_overload_1(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	if( lua_isnumber(L,5)==0 ) return false;
	if( lua_isnumber(L,6)==0 ) return false;
	if( lua_isnumber(L,7)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_createTexturedQuadGeometry_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
	if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
	if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLVersionNumber(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isExtensionInExtensionString(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isGLExtensionSupported(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isGLExtensionOrVersionSupported(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionFuncPtr_overload_3(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_setGLExtensionDisableString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_getGLExtensionDisableString(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_flushDeletedGLObjects(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_flushAllDeletedGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_deleteAllGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_discardAllGLObjects(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluErrorString(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluScaleImage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58853759)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluScaleImage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild1DMipmapLevels(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild1DMipmaps(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild2DMipmapLevels(lua_State *L) {
	if( lua_gettop(L)!=10 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluBuild2DMipmaps(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluNewTess(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_gluDeleteTess(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessBeginContour(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessEndContour(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessNormal(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	if( lua_isnumber(L,4)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessProperty(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessVertex(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessBeginPolygon(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluTessEndPolygon(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	return true;
}

inline static bool _lg_typecheck_gluGetTessProperty(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,37525689)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_createGeodeForImage_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_createGeodeForImage_overload_2(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeMinMax(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_offsetAndScaleImage(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_copyImage(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<11 || luatop>12 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,50169651)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
	if( luatop>11 && lua_isboolean(L,12)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_clearImageToColor(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_maximimNumOfComponents(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,71630045) ) return false;
	return true;
}

inline static bool _lg_typecheck_createImage3D(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>6 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,71630045) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_createImage3DWithAlpha(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>5 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,71630045) ) return false;
	if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_equivalent_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_equivalent_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_inDegrees_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_inDegrees_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_DegreesToRadians_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_DegreesToRadians_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_RadiansToDegrees_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_RadiansToDegrees_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_round_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_round_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isNaN_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_isNaN_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_asciiToDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_asciiToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_findAsciiToDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_findAsciiToFloat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_setNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initNotifyLevel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_isNotifyEnabled(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_setNotifyHandler(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_getNotifyHandler(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initOQState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_initOQDebugState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_intrusive_ptr_add_ref(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_intrusive_ptr_release(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_isTextureMode(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_computeLocalToWorld(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
	if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeWorldToLocal(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
	if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeLocalToEye(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_computeEyeToLocal(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303171) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303186) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303217) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_7(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_8(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentMultiply_overload_9(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303248) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303171) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_3(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303186) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_4(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_5(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_6(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303217) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303217) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_7(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_8(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
	return true;
}

inline static bool _lg_typecheck_componentDivide_overload_9(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,92303248) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
	return true;
}


// Function binds:
// osg::Endian osg::getCpuByteOrder()
static int _bind_getCpuByteOrder(lua_State *L) {
	if (!_lg_typecheck_getCpuByteOrder(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Endian osg::getCpuByteOrder() function, expected prototype:\nosg::Endian osg::getCpuByteOrder()\nClass arguments details:\n");
	}


	osg::Endian lret = getCpuByteOrder();
	lua_pushnumber(L,lret);

	return 1;
}

// void osg::swapBytes(char * in, unsigned int size)
static int _bind_swapBytes(lua_State *L) {
	if (!_lg_typecheck_swapBytes(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::swapBytes(char * in, unsigned int size) function, expected prototype:\nvoid osg::swapBytes(char * in, unsigned int size)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);
	unsigned int size=(unsigned int)lua_tointeger(L,2);

	swapBytes(&in, size);

	return 0;
}

// void osg::swapBytes2(char * in)
static int _bind_swapBytes2(lua_State *L) {
	if (!_lg_typecheck_swapBytes2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::swapBytes2(char * in) function, expected prototype:\nvoid osg::swapBytes2(char * in)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);

	swapBytes2(&in);

	return 0;
}

// void osg::swapBytes4(char * in)
static int _bind_swapBytes4(lua_State *L) {
	if (!_lg_typecheck_swapBytes4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::swapBytes4(char * in) function, expected prototype:\nvoid osg::swapBytes4(char * in)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);

	swapBytes4(&in);

	return 0;
}

// void osg::swapBytes8(char * in)
static int _bind_swapBytes8(lua_State *L) {
	if (!_lg_typecheck_swapBytes8(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::swapBytes8(char * in) function, expected prototype:\nvoid osg::swapBytes8(char * in)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);

	swapBytes8(&in);

	return 0;
}

// void osg::swapBytes16(char * in)
static int _bind_swapBytes16(lua_State *L) {
	if (!_lg_typecheck_swapBytes16(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::swapBytes16(char * in) function, expected prototype:\nvoid osg::swapBytes16(char * in)\nClass arguments details:\n");
	}

	char in=(char)lua_tointeger(L,1);

	swapBytes16(&in);

	return 0;
}

// osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t)
static int _bind_createTexturedQuadGeometry_overload_1(lua_State *L) {
	if (!_lg_typecheck_createTexturedQuadGeometry_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t) function, expected prototype:\nosg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float l, float b, float r, float t)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
	}

	const osg::Vec3f* corner_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !corner_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg corner in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & corner=*corner_ptr;
	const osg::Vec3f* widthVec_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !widthVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg widthVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & widthVec=*widthVec_ptr;
	const osg::Vec3f* heightVec_ptr=(Luna< osg::Vec3f >::check(L,3));
	if( !heightVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg heightVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & heightVec=*heightVec_ptr;
	float l=(float)lua_tonumber(L,4);
	float b=(float)lua_tonumber(L,5);
	float r=(float)lua_tonumber(L,6);
	float t=(float)lua_tonumber(L,7);

	osg::Geometry * lret = createTexturedQuadGeometry(corner, widthVec, heightVec, l, b, r, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geometry >::push(L,lret,false);

	return 1;
}

// osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f)
static int _bind_createTexturedQuadGeometry_overload_2(lua_State *L) {
	if (!_lg_typecheck_createTexturedQuadGeometry_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f) function, expected prototype:\nosg::Geometry * osg::createTexturedQuadGeometry(const osg::Vec3f & corner, const osg::Vec3f & widthVec, const osg::Vec3f & heightVec, float s = 1.0f, float t = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
	}

	int luatop = lua_gettop(L);

	const osg::Vec3f* corner_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !corner_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg corner in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & corner=*corner_ptr;
	const osg::Vec3f* widthVec_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !widthVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg widthVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & widthVec=*widthVec_ptr;
	const osg::Vec3f* heightVec_ptr=(Luna< osg::Vec3f >::check(L,3));
	if( !heightVec_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg heightVec in osg::createTexturedQuadGeometry function");
	}
	const osg::Vec3f & heightVec=*heightVec_ptr;
	float s=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;
	float t=luatop>4 ? (float)lua_tonumber(L,5) : 1.0f;

	osg::Geometry * lret = createTexturedQuadGeometry(corner, widthVec, heightVec, s, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geometry >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::createTexturedQuadGeometry
static int _bind_createTexturedQuadGeometry(lua_State *L) {
	if (_lg_typecheck_createTexturedQuadGeometry_overload_1(L)) return _bind_createTexturedQuadGeometry_overload_1(L);
	if (_lg_typecheck_createTexturedQuadGeometry_overload_2(L)) return _bind_createTexturedQuadGeometry_overload_2(L);

	luaL_error(L, "error in function createTexturedQuadGeometry, cannot match any of the overloads for function createTexturedQuadGeometry:\n  createTexturedQuadGeometry(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float, float, float, float)\n  createTexturedQuadGeometry(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float, float)\n");
	return 0;
}

// float osg::getGLVersionNumber()
static int _bind_getGLVersionNumber(lua_State *L) {
	if (!_lg_typecheck_getGLVersionNumber(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::getGLVersionNumber() function, expected prototype:\nfloat osg::getGLVersionNumber()\nClass arguments details:\n");
	}


	float lret = getGLVersionNumber();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osg::isExtensionInExtensionString(const char * extension, const char * extensionString)
static int _bind_isExtensionInExtensionString(lua_State *L) {
	if (!_lg_typecheck_isExtensionInExtensionString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isExtensionInExtensionString(const char * extension, const char * extensionString) function, expected prototype:\nbool osg::isExtensionInExtensionString(const char * extension, const char * extensionString)\nClass arguments details:\n");
	}

	const char * extension=(const char *)lua_tostring(L,1);
	const char * extensionString=(const char *)lua_tostring(L,2);

	bool lret = isExtensionInExtensionString(extension, extensionString);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isGLExtensionSupported(unsigned int contextID, const char * extension)
static int _bind_isGLExtensionSupported(lua_State *L) {
	if (!_lg_typecheck_isGLExtensionSupported(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isGLExtensionSupported(unsigned int contextID, const char * extension) function, expected prototype:\nbool osg::isGLExtensionSupported(unsigned int contextID, const char * extension)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	const char * extension=(const char *)lua_tostring(L,2);

	bool lret = isGLExtensionSupported(contextID, extension);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion)
static int _bind_isGLExtensionOrVersionSupported(lua_State *L) {
	if (!_lg_typecheck_isGLExtensionOrVersionSupported(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion) function, expected prototype:\nbool osg::isGLExtensionOrVersionSupported(unsigned int contextID, const char * extension, float requiredGlVersion)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	const char * extension=(const char *)lua_tostring(L,2);
	float requiredGlVersion=(float)lua_tonumber(L,3);

	bool lret = isGLExtensionOrVersionSupported(contextID, extension, requiredGlVersion);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName)
static int _bind_getGLExtensionFuncPtr_overload_1(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName)\nClass arguments details:\n");
	}

	const char * funcName=(const char *)lua_tostring(L,1);

	void * lret = getGLExtensionFuncPtr(funcName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName)
static int _bind_getGLExtensionFuncPtr_overload_2(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName, const char * fallbackFuncName)\nClass arguments details:\n");
	}

	const char * funcName=(const char *)lua_tostring(L,1);
	const char * fallbackFuncName=(const char *)lua_tostring(L,2);

	void * lret = getGLExtensionFuncPtr(funcName, fallbackFuncName);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3)
static int _bind_getGLExtensionFuncPtr_overload_3(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionFuncPtr_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3) function, expected prototype:\nvoid * osg::getGLExtensionFuncPtr(const char * funcName1, const char * funcName2, const char * funcName3)\nClass arguments details:\n");
	}

	const char * funcName1=(const char *)lua_tostring(L,1);
	const char * funcName2=(const char *)lua_tostring(L,2);
	const char * funcName3=(const char *)lua_tostring(L,3);

	void * lret = getGLExtensionFuncPtr(funcName1, funcName2, funcName3);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::getGLExtensionFuncPtr
static int _bind_getGLExtensionFuncPtr(lua_State *L) {
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_1(L)) return _bind_getGLExtensionFuncPtr_overload_1(L);
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_2(L)) return _bind_getGLExtensionFuncPtr_overload_2(L);
	if (_lg_typecheck_getGLExtensionFuncPtr_overload_3(L)) return _bind_getGLExtensionFuncPtr_overload_3(L);

	luaL_error(L, "error in function getGLExtensionFuncPtr, cannot match any of the overloads for function getGLExtensionFuncPtr:\n  getGLExtensionFuncPtr(const char *)\n  getGLExtensionFuncPtr(const char *, const char *)\n  getGLExtensionFuncPtr(const char *, const char *, const char *)\n");
	return 0;
}

// void osg::setGLExtensionDisableString(const std::string & disableString)
static int _bind_setGLExtensionDisableString(lua_State *L) {
	if (!_lg_typecheck_setGLExtensionDisableString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::setGLExtensionDisableString(const std::string & disableString) function, expected prototype:\nvoid osg::setGLExtensionDisableString(const std::string & disableString)\nClass arguments details:\n");
	}

	std::string disableString(lua_tostring(L,1),lua_objlen(L,1));

	setGLExtensionDisableString(disableString);

	return 0;
}

// std::string & osg::getGLExtensionDisableString()
static int _bind_getGLExtensionDisableString(lua_State *L) {
	if (!_lg_typecheck_getGLExtensionDisableString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string & osg::getGLExtensionDisableString() function, expected prototype:\nstd::string & osg::getGLExtensionDisableString()\nClass arguments details:\n");
	}


	std::string & lret = getGLExtensionDisableString();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime)
static int _bind_flushDeletedGLObjects(lua_State *L) {
	if (!_lg_typecheck_flushDeletedGLObjects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nvoid osg::flushDeletedGLObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);
	double currentTime=(double)lua_tonumber(L,2);
	double availableTime=(double)lua_tonumber(L,3);

	flushDeletedGLObjects(contextID, currentTime, availableTime);

	return 0;
}

// void osg::flushAllDeletedGLObjects(unsigned int contextID)
static int _bind_flushAllDeletedGLObjects(lua_State *L) {
	if (!_lg_typecheck_flushAllDeletedGLObjects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::flushAllDeletedGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::flushAllDeletedGLObjects(unsigned int contextID)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	flushAllDeletedGLObjects(contextID);

	return 0;
}

// void osg::deleteAllGLObjects(unsigned int contextID)
static int _bind_deleteAllGLObjects(lua_State *L) {
	if (!_lg_typecheck_deleteAllGLObjects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::deleteAllGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::deleteAllGLObjects(unsigned int contextID)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	deleteAllGLObjects(contextID);

	return 0;
}

// void osg::discardAllGLObjects(unsigned int contextID)
static int _bind_discardAllGLObjects(lua_State *L) {
	if (!_lg_typecheck_discardAllGLObjects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::discardAllGLObjects(unsigned int contextID) function, expected prototype:\nvoid osg::discardAllGLObjects(unsigned int contextID)\nClass arguments details:\n");
	}

	unsigned int contextID=(unsigned int)lua_tointeger(L,1);

	discardAllGLObjects(contextID);

	return 0;
}

// const unsigned char * osg::gluErrorString(unsigned int error)
static int _bind_gluErrorString(lua_State *L) {
	if (!_lg_typecheck_gluErrorString(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const unsigned char * osg::gluErrorString(unsigned int error) function, expected prototype:\nconst unsigned char * osg::gluErrorString(unsigned int error)\nClass arguments details:\n");
	}

	unsigned int error=(unsigned int)lua_tointeger(L,1);

	const unsigned char * lret = gluErrorString(error);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

// int osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)
static int _bind_gluScaleImage_overload_1(lua_State *L) {
	if (!_lg_typecheck_gluScaleImage_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut) function, expected prototype:\nint osg::gluScaleImage(osg::PixelStorageModes * psm, unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)\nClass arguments details:\narg 1 ID = 58853759\n");
	}

	osg::PixelStorageModes* psm=(Luna< osg::PixelStorageModes >::check(L,1));
	unsigned int format=(unsigned int)lua_tointeger(L,2);
	int wIn=(int)lua_tointeger(L,3);
	int hIn=(int)lua_tointeger(L,4);
	unsigned int typeIn=(unsigned int)lua_tointeger(L,5);
	void* dataIn=(Luna< void >::check(L,6));
	int wOut=(int)lua_tointeger(L,7);
	int hOut=(int)lua_tointeger(L,8);
	unsigned int typeOut=(unsigned int)lua_tointeger(L,9);
	void* dataOut=(Luna< void >::check(L,10));

	int lret = gluScaleImage(psm, format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)
static int _bind_gluScaleImage_overload_2(lua_State *L) {
	if (!_lg_typecheck_gluScaleImage_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut) function, expected prototype:\nint osg::gluScaleImage(unsigned int format, int wIn, int hIn, unsigned int typeIn, const void * dataIn, int wOut, int hOut, unsigned int typeOut, void * dataOut)\nClass arguments details:\n");
	}

	unsigned int format=(unsigned int)lua_tointeger(L,1);
	int wIn=(int)lua_tointeger(L,2);
	int hIn=(int)lua_tointeger(L,3);
	unsigned int typeIn=(unsigned int)lua_tointeger(L,4);
	void* dataIn=(Luna< void >::check(L,5));
	int wOut=(int)lua_tointeger(L,6);
	int hOut=(int)lua_tointeger(L,7);
	unsigned int typeOut=(unsigned int)lua_tointeger(L,8);
	void* dataOut=(Luna< void >::check(L,9));

	int lret = gluScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::gluScaleImage
static int _bind_gluScaleImage(lua_State *L) {
	if (_lg_typecheck_gluScaleImage_overload_1(L)) return _bind_gluScaleImage_overload_1(L);
	if (_lg_typecheck_gluScaleImage_overload_2(L)) return _bind_gluScaleImage_overload_2(L);

	luaL_error(L, "error in function gluScaleImage, cannot match any of the overloads for function gluScaleImage:\n  gluScaleImage(osg::PixelStorageModes *, unsigned int, int, int, unsigned int, const void *, int, int, unsigned int, void *)\n  gluScaleImage(unsigned int, int, int, unsigned int, const void *, int, int, unsigned int, void *)\n");
	return 0;
}

// int osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data)
static int _bind_gluBuild1DMipmapLevels(lua_State *L) {
	if (!_lg_typecheck_gluBuild1DMipmapLevels(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data) function, expected prototype:\nint osg::gluBuild1DMipmapLevels(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, int level, int base, int max, const void * data)\nClass arguments details:\n");
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	unsigned int format=(unsigned int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	int level=(int)lua_tointeger(L,6);
	int base=(int)lua_tointeger(L,7);
	int max=(int)lua_tointeger(L,8);
	void* data=(Luna< void >::check(L,9));

	int lret = gluBuild1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data)
static int _bind_gluBuild1DMipmaps(lua_State *L) {
	if (!_lg_typecheck_gluBuild1DMipmaps(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nint osg::gluBuild1DMipmaps(unsigned int target, int internalFormat, int width, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n");
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	unsigned int format=(unsigned int)lua_tointeger(L,4);
	unsigned int type=(unsigned int)lua_tointeger(L,5);
	void* data=(Luna< void >::check(L,6));

	int lret = gluBuild1DMipmaps(target, internalFormat, width, format, type, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data)
static int _bind_gluBuild2DMipmapLevels(lua_State *L) {
	if (!_lg_typecheck_gluBuild2DMipmapLevels(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data) function, expected prototype:\nint osg::gluBuild2DMipmapLevels(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, int level, int base, int max, const void * data)\nClass arguments details:\n");
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	int level=(int)lua_tointeger(L,7);
	int base=(int)lua_tointeger(L,8);
	int max=(int)lua_tointeger(L,9);
	void* data=(Luna< void >::check(L,10));

	int lret = gluBuild2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data);
	lua_pushnumber(L,lret);

	return 1;
}

// int osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data)
static int _bind_gluBuild2DMipmaps(lua_State *L) {
	if (!_lg_typecheck_gluBuild2DMipmaps(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data) function, expected prototype:\nint osg::gluBuild2DMipmaps(unsigned int target, int internalFormat, int width, int height, unsigned int format, unsigned int type, const void * data)\nClass arguments details:\n");
	}

	unsigned int target=(unsigned int)lua_tointeger(L,1);
	int internalFormat=(int)lua_tointeger(L,2);
	int width=(int)lua_tointeger(L,3);
	int height=(int)lua_tointeger(L,4);
	unsigned int format=(unsigned int)lua_tointeger(L,5);
	unsigned int type=(unsigned int)lua_tointeger(L,6);
	void* data=(Luna< void >::check(L,7));

	int lret = gluBuild2DMipmaps(target, internalFormat, width, height, format, type, data);
	lua_pushnumber(L,lret);

	return 1;
}

// GLUtesselator * osg::gluNewTess()
static int _bind_gluNewTess(lua_State *L) {
	if (!_lg_typecheck_gluNewTess(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in GLUtesselator * osg::gluNewTess() function, expected prototype:\nGLUtesselator * osg::gluNewTess()\nClass arguments details:\n");
	}


	GLUtesselator * lret = gluNewTess();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< GLUtesselator >::push(L,lret,false);

	return 1;
}

// void osg::gluDeleteTess(GLUtesselator * tess)
static int _bind_gluDeleteTess(lua_State *L) {
	if (!_lg_typecheck_gluDeleteTess(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluDeleteTess(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluDeleteTess(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	gluDeleteTess(tess);

	return 0;
}

// void osg::gluTessBeginContour(GLUtesselator * tess)
static int _bind_gluTessBeginContour(lua_State *L) {
	if (!_lg_typecheck_gluTessBeginContour(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessBeginContour(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessBeginContour(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	gluTessBeginContour(tess);

	return 0;
}

// void osg::gluTessEndContour(GLUtesselator * tess)
static int _bind_gluTessEndContour(lua_State *L) {
	if (!_lg_typecheck_gluTessEndContour(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessEndContour(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessEndContour(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	gluTessEndContour(tess);

	return 0;
}

// void osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ)
static int _bind_gluTessNormal(lua_State *L) {
	if (!_lg_typecheck_gluTessNormal(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ) function, expected prototype:\nvoid osg::gluTessNormal(GLUtesselator * tess, double valueX, double valueY, double valueZ)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	double valueX=(double)lua_tonumber(L,2);
	double valueY=(double)lua_tonumber(L,3);
	double valueZ=(double)lua_tonumber(L,4);

	gluTessNormal(tess, valueX, valueY, valueZ);

	return 0;
}

// void osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data)
static int _bind_gluTessProperty(lua_State *L) {
	if (!_lg_typecheck_gluTessProperty(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data) function, expected prototype:\nvoid osg::gluTessProperty(GLUtesselator * tess, unsigned int which, double data)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	unsigned int which=(unsigned int)lua_tointeger(L,2);
	double data=(double)lua_tonumber(L,3);

	gluTessProperty(tess, which, data);

	return 0;
}

// void osg::gluTessVertex(GLUtesselator * tess, double * location, void * data)
static int _bind_gluTessVertex(lua_State *L) {
	if (!_lg_typecheck_gluTessVertex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessVertex(GLUtesselator * tess, double * location, void * data) function, expected prototype:\nvoid osg::gluTessVertex(GLUtesselator * tess, double * location, void * data)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	double location=(double)lua_tonumber(L,2);
	void* data=(Luna< void >::check(L,3));

	gluTessVertex(tess, &location, data);

	return 0;
}

// void osg::gluTessBeginPolygon(GLUtesselator * tess, void * data)
static int _bind_gluTessBeginPolygon(lua_State *L) {
	if (!_lg_typecheck_gluTessBeginPolygon(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessBeginPolygon(GLUtesselator * tess, void * data) function, expected prototype:\nvoid osg::gluTessBeginPolygon(GLUtesselator * tess, void * data)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	void* data=(Luna< void >::check(L,2));

	gluTessBeginPolygon(tess, data);

	return 0;
}

// void osg::gluTessEndPolygon(GLUtesselator * tess)
static int _bind_gluTessEndPolygon(lua_State *L) {
	if (!_lg_typecheck_gluTessEndPolygon(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluTessEndPolygon(GLUtesselator * tess) function, expected prototype:\nvoid osg::gluTessEndPolygon(GLUtesselator * tess)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));

	gluTessEndPolygon(tess);

	return 0;
}

// void osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value)
static int _bind_gluGetTessProperty(lua_State *L) {
	if (!_lg_typecheck_gluGetTessProperty(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value) function, expected prototype:\nvoid osg::gluGetTessProperty(GLUtesselator * tess, unsigned int which, double * value)\nClass arguments details:\narg 1 ID = 37525689\n");
	}

	GLUtesselator* tess=(Luna< GLUtesselator >::check(L,1));
	unsigned int which=(unsigned int)lua_tointeger(L,2);
	double value=(double)lua_tonumber(L,3);

	gluGetTessProperty(tess, which, &value);

	return 0;
}

// osg::Geode * osg::createGeodeForImage(osg::Image * image)
static int _bind_createGeodeForImage_overload_1(lua_State *L) {
	if (!_lg_typecheck_createGeodeForImage_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Geode * osg::createGeodeForImage(osg::Image * image) function, expected prototype:\nosg::Geode * osg::createGeodeForImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));

	osg::Geode * lret = createGeodeForImage(image);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geode >::push(L,lret,false);

	return 1;
}

// osg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t)
static int _bind_createGeodeForImage_overload_2(lua_State *L) {
	if (!_lg_typecheck_createGeodeForImage_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t) function, expected prototype:\nosg::Geode * osg::createGeodeForImage(osg::Image * image, float s, float t)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	float s=(float)lua_tonumber(L,2);
	float t=(float)lua_tonumber(L,3);

	osg::Geode * lret = createGeodeForImage(image, s, t);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Geode >::push(L,lret,false);

	return 1;
}

// Overload binder for osg::createGeodeForImage
static int _bind_createGeodeForImage(lua_State *L) {
	if (_lg_typecheck_createGeodeForImage_overload_1(L)) return _bind_createGeodeForImage_overload_1(L);
	if (_lg_typecheck_createGeodeForImage_overload_2(L)) return _bind_createGeodeForImage_overload_2(L);

	luaL_error(L, "error in function createGeodeForImage, cannot match any of the overloads for function createGeodeForImage:\n  createGeodeForImage(osg::Image *)\n  createGeodeForImage(osg::Image *, float, float)\n");
	return 0;
}

// bool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max)
static int _bind_computeMinMax(lua_State *L) {
	if (!_lg_typecheck_computeMinMax(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max) function, expected prototype:\nbool osg::computeMinMax(const osg::Image * image, osg::Vec4f & min, osg::Vec4f & max)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\narg 3 ID = 92303235\n");
	}

	const osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	osg::Vec4f* min_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !min_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg min in osg::computeMinMax function");
	}
	osg::Vec4f & min=*min_ptr;
	osg::Vec4f* max_ptr=(Luna< osg::Vec4f >::check(L,3));
	if( !max_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg max in osg::computeMinMax function");
	}
	osg::Vec4f & max=*max_ptr;

	bool lret = computeMinMax(image, min, max);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale)
static int _bind_offsetAndScaleImage(lua_State *L) {
	if (!_lg_typecheck_offsetAndScaleImage(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale) function, expected prototype:\nbool osg::offsetAndScaleImage(osg::Image * image, const osg::Vec4f & offset, const osg::Vec4f & scale)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\narg 3 ID = 92303235\n");
	}

	osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	const osg::Vec4f* offset_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !offset_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg offset in osg::offsetAndScaleImage function");
	}
	const osg::Vec4f & offset=*offset_ptr;
	const osg::Vec4f* scale_ptr=(Luna< osg::Vec4f >::check(L,3));
	if( !scale_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::offsetAndScaleImage function");
	}
	const osg::Vec4f & scale=*scale_ptr;

	bool lret = offsetAndScaleImage(image, offset, scale);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false)
static int _bind_copyImage(lua_State *L) {
	if (!_lg_typecheck_copyImage(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false) function, expected prototype:\nbool osg::copyImage(const osg::Image * srcImage, int src_s, int src_t, int src_r, int width, int height, int depth, osg::Image * destImage, int dest_s, int dest_t, int dest_r, bool doRescale = false)\nClass arguments details:\narg 1 ID = 50169651\narg 8 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	const osg::Image* srcImage=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	int src_s=(int)lua_tointeger(L,2);
	int src_t=(int)lua_tointeger(L,3);
	int src_r=(int)lua_tointeger(L,4);
	int width=(int)lua_tointeger(L,5);
	int height=(int)lua_tointeger(L,6);
	int depth=(int)lua_tointeger(L,7);
	osg::Image* destImage=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,8));
	int dest_s=(int)lua_tointeger(L,9);
	int dest_t=(int)lua_tointeger(L,10);
	int dest_r=(int)lua_tointeger(L,11);
	bool doRescale=luatop>11 ? (bool)(lua_toboolean(L,12)==1) : false;

	bool lret = copyImage(srcImage, src_s, src_t, src_r, width, height, depth, destImage, dest_s, dest_t, dest_r, doRescale);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour)
static int _bind_clearImageToColor(lua_State *L) {
	if (!_lg_typecheck_clearImageToColor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour) function, expected prototype:\nbool osg::clearImageToColor(osg::Image * image, const osg::Vec4f & colour)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303235\n");
	}

	osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
	const osg::Vec4f* colour_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !colour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg colour in osg::clearImageToColor function");
	}
	const osg::Vec4f & colour=*colour_ptr;

	bool lret = clearImageToColor(image, colour);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// unsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList)
static int _bind_maximimNumOfComponents(lua_State *L) {
	if (!_lg_typecheck_maximimNumOfComponents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList) function, expected prototype:\nunsigned int osg::maximimNumOfComponents(const osg::ImageList & imageList)\nClass arguments details:\narg 1 ID = 71630045\n");
	}

	const osg::ImageList* imageList_ptr=(Luna< osg::ImageList >::check(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::maximimNumOfComponents function");
	}
	const osg::ImageList & imageList=*imageList_ptr;

	unsigned int lret = maximimNumOfComponents(imageList);
	lua_pushnumber(L,lret);

	return 1;
}

// osg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)
static int _bind_createImage3D(lua_State *L) {
	if (!_lg_typecheck_createImage3D(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false) function, expected prototype:\nosg::Image * osg::createImage3D(const osg::ImageList & imageList, unsigned int desiredPixelFormat, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)\nClass arguments details:\narg 1 ID = 71630045\n");
	}

	int luatop = lua_gettop(L);

	const osg::ImageList* imageList_ptr=(Luna< osg::ImageList >::check(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::createImage3D function");
	}
	const osg::ImageList & imageList=*imageList_ptr;
	unsigned int desiredPixelFormat=(unsigned int)lua_tointeger(L,2);
	int s_maximumImageSize=luatop>2 ? (int)lua_tointeger(L,3) : 1024;
	int t_maximumImageSize=luatop>3 ? (int)lua_tointeger(L,4) : 1024;
	int r_maximumImageSize=luatop>4 ? (int)lua_tointeger(L,5) : 1024;
	bool resizeToPowerOfTwo=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : false;

	osg::Image * lret = createImage3D(imageList, desiredPixelFormat, s_maximumImageSize, t_maximumImageSize, r_maximumImageSize, resizeToPowerOfTwo);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// osg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)
static int _bind_createImage3DWithAlpha(lua_State *L) {
	if (!_lg_typecheck_createImage3DWithAlpha(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false) function, expected prototype:\nosg::Image * osg::createImage3DWithAlpha(const osg::ImageList & imageList, int s_maximumImageSize = 1024, int t_maximumImageSize = 1024, int r_maximumImageSize = 1024, bool resizeToPowerOfTwo = false)\nClass arguments details:\narg 1 ID = 71630045\n");
	}

	int luatop = lua_gettop(L);

	const osg::ImageList* imageList_ptr=(Luna< osg::ImageList >::check(L,1));
	if( !imageList_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg imageList in osg::createImage3DWithAlpha function");
	}
	const osg::ImageList & imageList=*imageList_ptr;
	int s_maximumImageSize=luatop>1 ? (int)lua_tointeger(L,2) : 1024;
	int t_maximumImageSize=luatop>2 ? (int)lua_tointeger(L,3) : 1024;
	int r_maximumImageSize=luatop>3 ? (int)lua_tointeger(L,4) : 1024;
	bool resizeToPowerOfTwo=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

	osg::Image * lret = createImage3DWithAlpha(imageList, s_maximumImageSize, t_maximumImageSize, r_maximumImageSize, resizeToPowerOfTwo);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Image >::push(L,lret,false);

	return 1;
}

// bool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6)
static int _bind_equivalent_overload_1(lua_State *L) {
	if (!_lg_typecheck_equivalent_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6) function, expected prototype:\nbool osg::equivalent(float lhs, float rhs, float epsilon = 1e-6)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	float lhs=(float)lua_tonumber(L,1);
	float rhs=(float)lua_tonumber(L,2);
	float epsilon=luatop>2 ? (float)lua_tonumber(L,3) : 1e-6;

	bool lret = equivalent(lhs, rhs, epsilon);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6)
static int _bind_equivalent_overload_2(lua_State *L) {
	if (!_lg_typecheck_equivalent_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6) function, expected prototype:\nbool osg::equivalent(double lhs, double rhs, double epsilon = 1e-6)\nClass arguments details:\n");
	}

	int luatop = lua_gettop(L);

	double lhs=(double)lua_tonumber(L,1);
	double rhs=(double)lua_tonumber(L,2);
	double epsilon=luatop>2 ? (double)lua_tonumber(L,3) : 1e-6;

	bool lret = equivalent(lhs, rhs, epsilon);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osg::equivalent
static int _bind_equivalent(lua_State *L) {
	if (_lg_typecheck_equivalent_overload_1(L)) return _bind_equivalent_overload_1(L);
	if (_lg_typecheck_equivalent_overload_2(L)) return _bind_equivalent_overload_2(L);

	luaL_error(L, "error in function equivalent, cannot match any of the overloads for function equivalent:\n  equivalent(float, float, float)\n  equivalent(double, double, double)\n");
	return 0;
}

// float osg::inDegrees(float angle)
static int _bind_inDegrees_overload_1(lua_State *L) {
	if (!_lg_typecheck_inDegrees_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::inDegrees(float angle) function, expected prototype:\nfloat osg::inDegrees(float angle)\nClass arguments details:\n");
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = inDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::inDegrees(double angle)
static int _bind_inDegrees_overload_2(lua_State *L) {
	if (!_lg_typecheck_inDegrees_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::inDegrees(double angle) function, expected prototype:\ndouble osg::inDegrees(double angle)\nClass arguments details:\n");
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = inDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::inDegrees
static int _bind_inDegrees(lua_State *L) {
	if (_lg_typecheck_inDegrees_overload_1(L)) return _bind_inDegrees_overload_1(L);
	if (_lg_typecheck_inDegrees_overload_2(L)) return _bind_inDegrees_overload_2(L);

	luaL_error(L, "error in function inDegrees, cannot match any of the overloads for function inDegrees:\n  inDegrees(float)\n  inDegrees(double)\n");
	return 0;
}

// float osg::DegreesToRadians(float angle)
static int _bind_DegreesToRadians_overload_1(lua_State *L) {
	if (!_lg_typecheck_DegreesToRadians_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::DegreesToRadians(float angle) function, expected prototype:\nfloat osg::DegreesToRadians(float angle)\nClass arguments details:\n");
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = DegreesToRadians(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::DegreesToRadians(double angle)
static int _bind_DegreesToRadians_overload_2(lua_State *L) {
	if (!_lg_typecheck_DegreesToRadians_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::DegreesToRadians(double angle) function, expected prototype:\ndouble osg::DegreesToRadians(double angle)\nClass arguments details:\n");
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = DegreesToRadians(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::DegreesToRadians
static int _bind_DegreesToRadians(lua_State *L) {
	if (_lg_typecheck_DegreesToRadians_overload_1(L)) return _bind_DegreesToRadians_overload_1(L);
	if (_lg_typecheck_DegreesToRadians_overload_2(L)) return _bind_DegreesToRadians_overload_2(L);

	luaL_error(L, "error in function DegreesToRadians, cannot match any of the overloads for function DegreesToRadians:\n  DegreesToRadians(float)\n  DegreesToRadians(double)\n");
	return 0;
}

// float osg::RadiansToDegrees(float angle)
static int _bind_RadiansToDegrees_overload_1(lua_State *L) {
	if (!_lg_typecheck_RadiansToDegrees_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::RadiansToDegrees(float angle) function, expected prototype:\nfloat osg::RadiansToDegrees(float angle)\nClass arguments details:\n");
	}

	float angle=(float)lua_tonumber(L,1);

	float lret = RadiansToDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::RadiansToDegrees(double angle)
static int _bind_RadiansToDegrees_overload_2(lua_State *L) {
	if (!_lg_typecheck_RadiansToDegrees_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::RadiansToDegrees(double angle) function, expected prototype:\ndouble osg::RadiansToDegrees(double angle)\nClass arguments details:\n");
	}

	double angle=(double)lua_tonumber(L,1);

	double lret = RadiansToDegrees(angle);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::RadiansToDegrees
static int _bind_RadiansToDegrees(lua_State *L) {
	if (_lg_typecheck_RadiansToDegrees_overload_1(L)) return _bind_RadiansToDegrees_overload_1(L);
	if (_lg_typecheck_RadiansToDegrees_overload_2(L)) return _bind_RadiansToDegrees_overload_2(L);

	luaL_error(L, "error in function RadiansToDegrees, cannot match any of the overloads for function RadiansToDegrees:\n  RadiansToDegrees(float)\n  RadiansToDegrees(double)\n");
	return 0;
}

// float osg::round(float v)
static int _bind_round_overload_1(lua_State *L) {
	if (!_lg_typecheck_round_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::round(float v) function, expected prototype:\nfloat osg::round(float v)\nClass arguments details:\n");
	}

	float v=(float)lua_tonumber(L,1);

	float lret = round(v);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::round(double v)
static int _bind_round_overload_2(lua_State *L) {
	if (!_lg_typecheck_round_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::round(double v) function, expected prototype:\ndouble osg::round(double v)\nClass arguments details:\n");
	}

	double v=(double)lua_tonumber(L,1);

	double lret = round(v);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for osg::round
static int _bind_round(lua_State *L) {
	if (_lg_typecheck_round_overload_1(L)) return _bind_round_overload_1(L);
	if (_lg_typecheck_round_overload_2(L)) return _bind_round_overload_2(L);

	luaL_error(L, "error in function round, cannot match any of the overloads for function round:\n  round(float)\n  round(double)\n");
	return 0;
}

// bool osg::isNaN(float v)
static int _bind_isNaN_overload_1(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isNaN(float v) function, expected prototype:\nbool osg::isNaN(float v)\nClass arguments details:\n");
	}

	float v=(float)lua_tonumber(L,1);

	bool lret = isNaN(v);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isNaN(double v)
static int _bind_isNaN_overload_2(lua_State *L) {
	if (!_lg_typecheck_isNaN_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isNaN(double v) function, expected prototype:\nbool osg::isNaN(double v)\nClass arguments details:\n");
	}

	double v=(double)lua_tonumber(L,1);

	bool lret = isNaN(v);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for osg::isNaN
static int _bind_isNaN(lua_State *L) {
	if (_lg_typecheck_isNaN_overload_1(L)) return _bind_isNaN_overload_1(L);
	if (_lg_typecheck_isNaN_overload_2(L)) return _bind_isNaN_overload_2(L);

	luaL_error(L, "error in function isNaN, cannot match any of the overloads for function isNaN:\n  isNaN(float)\n  isNaN(double)\n");
	return 0;
}

// double osg::asciiToDouble(const char * str)
static int _bind_asciiToDouble(lua_State *L) {
	if (!_lg_typecheck_asciiToDouble(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::asciiToDouble(const char * str) function, expected prototype:\ndouble osg::asciiToDouble(const char * str)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);

	double lret = asciiToDouble(str);
	lua_pushnumber(L,lret);

	return 1;
}

// float osg::asciiToFloat(const char * str)
static int _bind_asciiToFloat(lua_State *L) {
	if (!_lg_typecheck_asciiToFloat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::asciiToFloat(const char * str) function, expected prototype:\nfloat osg::asciiToFloat(const char * str)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);

	float lret = asciiToFloat(str);
	lua_pushnumber(L,lret);

	return 1;
}

// double osg::findAsciiToDouble(const char * str)
static int _bind_findAsciiToDouble(lua_State *L) {
	if (!_lg_typecheck_findAsciiToDouble(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in double osg::findAsciiToDouble(const char * str) function, expected prototype:\ndouble osg::findAsciiToDouble(const char * str)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);

	double lret = findAsciiToDouble(str);
	lua_pushnumber(L,lret);

	return 1;
}

// float osg::findAsciiToFloat(const char * str)
static int _bind_findAsciiToFloat(lua_State *L) {
	if (!_lg_typecheck_findAsciiToFloat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in float osg::findAsciiToFloat(const char * str) function, expected prototype:\nfloat osg::findAsciiToFloat(const char * str)\nClass arguments details:\n");
	}

	const char * str=(const char *)lua_tostring(L,1);

	float lret = findAsciiToFloat(str);
	lua_pushnumber(L,lret);

	return 1;
}

// void osg::setNotifyLevel(osg::NotifySeverity severity)
static int _bind_setNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_setNotifyLevel(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::setNotifyLevel(osg::NotifySeverity severity) function, expected prototype:\nvoid osg::setNotifyLevel(osg::NotifySeverity severity)\nClass arguments details:\n");
	}

	osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,1);

	setNotifyLevel(severity);

	return 0;
}

// osg::NotifySeverity osg::getNotifyLevel()
static int _bind_getNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_getNotifyLevel(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::NotifySeverity osg::getNotifyLevel() function, expected prototype:\nosg::NotifySeverity osg::getNotifyLevel()\nClass arguments details:\n");
	}


	osg::NotifySeverity lret = getNotifyLevel();
	lua_pushnumber(L,lret);

	return 1;
}

// bool osg::initNotifyLevel()
static int _bind_initNotifyLevel(lua_State *L) {
	if (!_lg_typecheck_initNotifyLevel(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::initNotifyLevel() function, expected prototype:\nbool osg::initNotifyLevel()\nClass arguments details:\n");
	}


	bool lret = initNotifyLevel();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool osg::isNotifyEnabled(osg::NotifySeverity severity)
static int _bind_isNotifyEnabled(lua_State *L) {
	if (!_lg_typecheck_isNotifyEnabled(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isNotifyEnabled(osg::NotifySeverity severity) function, expected prototype:\nbool osg::isNotifyEnabled(osg::NotifySeverity severity)\nClass arguments details:\n");
	}

	osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,1);

	bool lret = isNotifyEnabled(severity);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void osg::setNotifyHandler(osg::NotifyHandler * handler)
static int _bind_setNotifyHandler(lua_State *L) {
	if (!_lg_typecheck_setNotifyHandler(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::setNotifyHandler(osg::NotifyHandler * handler) function, expected prototype:\nvoid osg::setNotifyHandler(osg::NotifyHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::NotifyHandler* handler=dynamic_cast< osg::NotifyHandler* >(Luna< osg::Referenced >::check(L,1));

	setNotifyHandler(handler);

	return 0;
}

// osg::NotifyHandler * osg::getNotifyHandler()
static int _bind_getNotifyHandler(lua_State *L) {
	if (!_lg_typecheck_getNotifyHandler(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::NotifyHandler * osg::getNotifyHandler() function, expected prototype:\nosg::NotifyHandler * osg::getNotifyHandler()\nClass arguments details:\n");
	}


	osg::NotifyHandler * lret = getNotifyHandler();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::NotifyHandler >::push(L,lret,false);

	return 1;
}

// osg::StateSet * osg::initOQState()
static int _bind_initOQState(lua_State *L) {
	if (!_lg_typecheck_initOQState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::StateSet * osg::initOQState() function, expected prototype:\nosg::StateSet * osg::initOQState()\nClass arguments details:\n");
	}


	osg::StateSet * lret = initOQState();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::StateSet >::push(L,lret,false);

	return 1;
}

// osg::StateSet * osg::initOQDebugState()
static int _bind_initOQDebugState(lua_State *L) {
	if (!_lg_typecheck_initOQDebugState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::StateSet * osg::initOQDebugState() function, expected prototype:\nosg::StateSet * osg::initOQDebugState()\nClass arguments details:\n");
	}


	osg::StateSet * lret = initOQDebugState();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::StateSet >::push(L,lret,false);

	return 1;
}

// void osg::intrusive_ptr_add_ref(osg::Referenced * p)
static int _bind_intrusive_ptr_add_ref(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_add_ref(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_add_ref(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_add_ref(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	intrusive_ptr_add_ref(p);

	return 0;
}

// void osg::intrusive_ptr_release(osg::Referenced * p)
static int _bind_intrusive_ptr_release(lua_State *L) {
	if (!_lg_typecheck_intrusive_ptr_release(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void osg::intrusive_ptr_release(osg::Referenced * p) function, expected prototype:\nvoid osg::intrusive_ptr_release(osg::Referenced * p)\nClass arguments details:\narg 1 ID = 50169651\n");
	}

	osg::Referenced* p=(Luna< osg::Referenced >::check(L,1));

	intrusive_ptr_release(p);

	return 0;
}

// bool osg::isTextureMode(unsigned int mode)
static int _bind_isTextureMode(lua_State *L) {
	if (!_lg_typecheck_isTextureMode(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool osg::isTextureMode(unsigned int mode) function, expected prototype:\nbool osg::isTextureMode(unsigned int mode)\nClass arguments details:\n");
	}

	unsigned int mode=(unsigned int)lua_tointeger(L,1);

	bool lret = isTextureMode(mode);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// osg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeLocalToWorld(lua_State *L) {
	if (!_lg_typecheck_computeLocalToWorld(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeLocalToWorld(const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 52841328\n");
	}

	int luatop = lua_gettop(L);

	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,1));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeLocalToWorld function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

	osg::Matrixd stack_lret = computeLocalToWorld(nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeWorldToLocal(lua_State *L) {
	if (!_lg_typecheck_computeWorldToLocal(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeWorldToLocal(const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 52841328\n");
	}

	int luatop = lua_gettop(L);

	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,1));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeWorldToLocal function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

	osg::Matrixd stack_lret = computeWorldToLocal(nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeLocalToEye(lua_State *L) {
	if (!_lg_typecheck_computeLocalToEye(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeLocalToEye(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 52841328\n");
	}

	int luatop = lua_gettop(L);

	const osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,1));
	if( !modelview_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::computeLocalToEye function");
	}
	const osg::Matrixd & modelview=*modelview_ptr;
	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeLocalToEye function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

	osg::Matrixd stack_lret = computeLocalToEye(modelview, nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)
static int _bind_computeEyeToLocal(lua_State *L) {
	if (!_lg_typecheck_computeEyeToLocal(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true) function, expected prototype:\nosg::Matrixd osg::computeEyeToLocal(const osg::Matrixd & modelview, const osg::NodePath & nodePath, bool ignoreCameras = true)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 52841328\n");
	}

	int luatop = lua_gettop(L);

	const osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,1));
	if( !modelview_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::computeEyeToLocal function");
	}
	const osg::Matrixd & modelview=*modelview_ptr;
	const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
	if( !nodePath_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::computeEyeToLocal function");
	}
	const osg::NodePath & nodePath=*nodePath_ptr;
	bool ignoreCameras=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

	osg::Matrixd stack_lret = computeEyeToLocal(modelview, nodePath, ignoreCameras);
	osg::Matrixd* lret = new osg::Matrixd(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Matrixd >::push(L,lret,true);

	return 1;
}

// osg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs)
static int _bind_componentMultiply_overload_1(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs) function, expected prototype:\nosg::Vec2d osg::componentMultiply(const osg::Vec2d & lhs, const osg::Vec2d & rhs)\nClass arguments details:\narg 1 ID = 92303171\narg 2 ID = 92303171\n");
	}

	const osg::Vec2d* lhs_ptr=(Luna< osg::Vec2d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2d & lhs=*lhs_ptr;
	const osg::Vec2d* rhs_ptr=(Luna< osg::Vec2d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2d & rhs=*rhs_ptr;

	osg::Vec2d stack_lret = componentMultiply(lhs, rhs);
	osg::Vec2d* lret = new osg::Vec2d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2d >::push(L,lret,true);

	return 1;
}

// osg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs)
static int _bind_componentMultiply_overload_2(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f osg::componentMultiply(const osg::Vec2f & lhs, const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n");
	}

	const osg::Vec2f* lhs_ptr=(Luna< osg::Vec2f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2f & lhs=*lhs_ptr;
	const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2f & rhs=*rhs_ptr;

	osg::Vec2f stack_lret = componentMultiply(lhs, rhs);
	osg::Vec2f* lret = new osg::Vec2f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2f >::push(L,lret,true);

	return 1;
}

// osg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs)
static int _bind_componentMultiply_overload_3(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s osg::componentMultiply(const osg::Vec2s & lhs, const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\narg 2 ID = 92303186\n");
	}

	const osg::Vec2s* lhs_ptr=(Luna< osg::Vec2s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec2s & lhs=*lhs_ptr;
	const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec2s & rhs=*rhs_ptr;

	osg::Vec2s stack_lret = componentMultiply(lhs, rhs);
	osg::Vec2s* lret = new osg::Vec2s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2s >::push(L,lret,true);

	return 1;
}

// osg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs)
static int _bind_componentMultiply_overload_4(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d osg::componentMultiply(const osg::Vec3d & lhs, const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
	}

	const osg::Vec3d* lhs_ptr=(Luna< osg::Vec3d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3d & lhs=*lhs_ptr;
	const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3d & rhs=*rhs_ptr;

	osg::Vec3d stack_lret = componentMultiply(lhs, rhs);
	osg::Vec3d* lret = new osg::Vec3d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3d >::push(L,lret,true);

	return 1;
}

// osg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs)
static int _bind_componentMultiply_overload_5(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_5(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f osg::componentMultiply(const osg::Vec3f & lhs, const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
	}

	const osg::Vec3f* lhs_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3f & lhs=*lhs_ptr;
	const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3f & rhs=*rhs_ptr;

	osg::Vec3f stack_lret = componentMultiply(lhs, rhs);
	osg::Vec3f* lret = new osg::Vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3f >::push(L,lret,true);

	return 1;
}

// osg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs)
static int _bind_componentMultiply_overload_6(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_6(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs) function, expected prototype:\nosg::Vec3s osg::componentMultiply(const osg::Vec3s & lhs, const osg::Vec3s & rhs)\nClass arguments details:\narg 1 ID = 92303217\narg 2 ID = 92303217\n");
	}

	const osg::Vec3s* lhs_ptr=(Luna< osg::Vec3s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec3s & lhs=*lhs_ptr;
	const osg::Vec3s* rhs_ptr=(Luna< osg::Vec3s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec3s & rhs=*rhs_ptr;

	osg::Vec3s stack_lret = componentMultiply(lhs, rhs);
	osg::Vec3s* lret = new osg::Vec3s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3s >::push(L,lret,true);

	return 1;
}

// osg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs)
static int _bind_componentMultiply_overload_7(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_7(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs) function, expected prototype:\nosg::Vec4d osg::componentMultiply(const osg::Vec4d & lhs, const osg::Vec4d & rhs)\nClass arguments details:\narg 1 ID = 92303233\narg 2 ID = 92303233\n");
	}

	const osg::Vec4d* lhs_ptr=(Luna< osg::Vec4d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4d & lhs=*lhs_ptr;
	const osg::Vec4d* rhs_ptr=(Luna< osg::Vec4d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4d & rhs=*rhs_ptr;

	osg::Vec4d stack_lret = componentMultiply(lhs, rhs);
	osg::Vec4d* lret = new osg::Vec4d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4d >::push(L,lret,true);

	return 1;
}

// osg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs)
static int _bind_componentMultiply_overload_8(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_8(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f osg::componentMultiply(const osg::Vec4f & lhs, const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\n");
	}

	const osg::Vec4f* lhs_ptr=(Luna< osg::Vec4f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4f & lhs=*lhs_ptr;
	const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4f & rhs=*rhs_ptr;

	osg::Vec4f stack_lret = componentMultiply(lhs, rhs);
	osg::Vec4f* lret = new osg::Vec4f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4f >::push(L,lret,true);

	return 1;
}

// osg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs)
static int _bind_componentMultiply_overload_9(lua_State *L) {
	if (!_lg_typecheck_componentMultiply_overload_9(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s osg::componentMultiply(const osg::Vec4s & lhs, const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\narg 2 ID = 92303248\n");
	}

	const osg::Vec4s* lhs_ptr=(Luna< osg::Vec4s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentMultiply function");
	}
	const osg::Vec4s & lhs=*lhs_ptr;
	const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentMultiply function");
	}
	const osg::Vec4s & rhs=*rhs_ptr;

	osg::Vec4s stack_lret = componentMultiply(lhs, rhs);
	osg::Vec4s* lret = new osg::Vec4s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4s >::push(L,lret,true);

	return 1;
}

// Overload binder for osg::componentMultiply
static int _bind_componentMultiply(lua_State *L) {
	if (_lg_typecheck_componentMultiply_overload_1(L)) return _bind_componentMultiply_overload_1(L);
	if (_lg_typecheck_componentMultiply_overload_2(L)) return _bind_componentMultiply_overload_2(L);
	if (_lg_typecheck_componentMultiply_overload_3(L)) return _bind_componentMultiply_overload_3(L);
	if (_lg_typecheck_componentMultiply_overload_4(L)) return _bind_componentMultiply_overload_4(L);
	if (_lg_typecheck_componentMultiply_overload_5(L)) return _bind_componentMultiply_overload_5(L);
	if (_lg_typecheck_componentMultiply_overload_6(L)) return _bind_componentMultiply_overload_6(L);
	if (_lg_typecheck_componentMultiply_overload_7(L)) return _bind_componentMultiply_overload_7(L);
	if (_lg_typecheck_componentMultiply_overload_8(L)) return _bind_componentMultiply_overload_8(L);
	if (_lg_typecheck_componentMultiply_overload_9(L)) return _bind_componentMultiply_overload_9(L);

	luaL_error(L, "error in function componentMultiply, cannot match any of the overloads for function componentMultiply:\n  componentMultiply(const osg::Vec2d &, const osg::Vec2d &)\n  componentMultiply(const osg::Vec2f &, const osg::Vec2f &)\n  componentMultiply(const osg::Vec2s &, const osg::Vec2s &)\n  componentMultiply(const osg::Vec3d &, const osg::Vec3d &)\n  componentMultiply(const osg::Vec3f &, const osg::Vec3f &)\n  componentMultiply(const osg::Vec3s &, const osg::Vec3s &)\n  componentMultiply(const osg::Vec4d &, const osg::Vec4d &)\n  componentMultiply(const osg::Vec4f &, const osg::Vec4f &)\n  componentMultiply(const osg::Vec4s &, const osg::Vec4s &)\n");
	return 0;
}

// osg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs)
static int _bind_componentDivide_overload_1(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_1(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs) function, expected prototype:\nosg::Vec2d osg::componentDivide(const osg::Vec2d & lhs, const osg::Vec2d & rhs)\nClass arguments details:\narg 1 ID = 92303171\narg 2 ID = 92303171\n");
	}

	const osg::Vec2d* lhs_ptr=(Luna< osg::Vec2d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2d & lhs=*lhs_ptr;
	const osg::Vec2d* rhs_ptr=(Luna< osg::Vec2d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2d & rhs=*rhs_ptr;

	osg::Vec2d stack_lret = componentDivide(lhs, rhs);
	osg::Vec2d* lret = new osg::Vec2d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2d >::push(L,lret,true);

	return 1;
}

// osg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs)
static int _bind_componentDivide_overload_2(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f osg::componentDivide(const osg::Vec2f & lhs, const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n");
	}

	const osg::Vec2f* lhs_ptr=(Luna< osg::Vec2f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2f & lhs=*lhs_ptr;
	const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2f & rhs=*rhs_ptr;

	osg::Vec2f stack_lret = componentDivide(lhs, rhs);
	osg::Vec2f* lret = new osg::Vec2f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2f >::push(L,lret,true);

	return 1;
}

// osg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs)
static int _bind_componentDivide_overload_3(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_3(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s osg::componentDivide(const osg::Vec2s & lhs, const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\narg 2 ID = 92303186\n");
	}

	const osg::Vec2s* lhs_ptr=(Luna< osg::Vec2s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec2s & lhs=*lhs_ptr;
	const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec2s & rhs=*rhs_ptr;

	osg::Vec2s stack_lret = componentDivide(lhs, rhs);
	osg::Vec2s* lret = new osg::Vec2s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec2s >::push(L,lret,true);

	return 1;
}

// osg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs)
static int _bind_componentDivide_overload_4(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_4(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d osg::componentDivide(const osg::Vec3d & lhs, const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
	}

	const osg::Vec3d* lhs_ptr=(Luna< osg::Vec3d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3d & lhs=*lhs_ptr;
	const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3d & rhs=*rhs_ptr;

	osg::Vec3d stack_lret = componentDivide(lhs, rhs);
	osg::Vec3d* lret = new osg::Vec3d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3d >::push(L,lret,true);

	return 1;
}

// osg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs)
static int _bind_componentDivide_overload_5(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_5(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f osg::componentDivide(const osg::Vec3f & lhs, const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
	}

	const osg::Vec3f* lhs_ptr=(Luna< osg::Vec3f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3f & lhs=*lhs_ptr;
	const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3f & rhs=*rhs_ptr;

	osg::Vec3f stack_lret = componentDivide(lhs, rhs);
	osg::Vec3f* lret = new osg::Vec3f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3f >::push(L,lret,true);

	return 1;
}

// osg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs)
static int _bind_componentDivide_overload_6(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_6(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs) function, expected prototype:\nosg::Vec3s osg::componentDivide(const osg::Vec3s & lhs, const osg::Vec3s & rhs)\nClass arguments details:\narg 1 ID = 92303217\narg 2 ID = 92303217\n");
	}

	const osg::Vec3s* lhs_ptr=(Luna< osg::Vec3s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec3s & lhs=*lhs_ptr;
	const osg::Vec3s* rhs_ptr=(Luna< osg::Vec3s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec3s & rhs=*rhs_ptr;

	osg::Vec3s stack_lret = componentDivide(lhs, rhs);
	osg::Vec3s* lret = new osg::Vec3s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec3s >::push(L,lret,true);

	return 1;
}

// osg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs)
static int _bind_componentDivide_overload_7(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_7(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs) function, expected prototype:\nosg::Vec4d osg::componentDivide(const osg::Vec4d & lhs, const osg::Vec4d & rhs)\nClass arguments details:\narg 1 ID = 92303233\narg 2 ID = 92303233\n");
	}

	const osg::Vec4d* lhs_ptr=(Luna< osg::Vec4d >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4d & lhs=*lhs_ptr;
	const osg::Vec4d* rhs_ptr=(Luna< osg::Vec4d >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4d & rhs=*rhs_ptr;

	osg::Vec4d stack_lret = componentDivide(lhs, rhs);
	osg::Vec4d* lret = new osg::Vec4d(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4d >::push(L,lret,true);

	return 1;
}

// osg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs)
static int _bind_componentDivide_overload_8(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_8(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f osg::componentDivide(const osg::Vec4f & lhs, const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\n");
	}

	const osg::Vec4f* lhs_ptr=(Luna< osg::Vec4f >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4f & lhs=*lhs_ptr;
	const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4f & rhs=*rhs_ptr;

	osg::Vec4f stack_lret = componentDivide(lhs, rhs);
	osg::Vec4f* lret = new osg::Vec4f(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4f >::push(L,lret,true);

	return 1;
}

// osg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs)
static int _bind_componentDivide_overload_9(lua_State *L) {
	if (!_lg_typecheck_componentDivide_overload_9(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s osg::componentDivide(const osg::Vec4s & lhs, const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\narg 2 ID = 92303248\n");
	}

	const osg::Vec4s* lhs_ptr=(Luna< osg::Vec4s >::check(L,1));
	if( !lhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::componentDivide function");
	}
	const osg::Vec4s & lhs=*lhs_ptr;
	const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
	if( !rhs_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::componentDivide function");
	}
	const osg::Vec4s & rhs=*rhs_ptr;

	osg::Vec4s stack_lret = componentDivide(lhs, rhs);
	osg::Vec4s* lret = new osg::Vec4s(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osg::Vec4s >::push(L,lret,true);

	return 1;
}

// Overload binder for osg::componentDivide
static int _bind_componentDivide(lua_State *L) {
	if (_lg_typecheck_componentDivide_overload_1(L)) return _bind_componentDivide_overload_1(L);
	if (_lg_typecheck_componentDivide_overload_2(L)) return _bind_componentDivide_overload_2(L);
	if (_lg_typecheck_componentDivide_overload_3(L)) return _bind_componentDivide_overload_3(L);
	if (_lg_typecheck_componentDivide_overload_4(L)) return _bind_componentDivide_overload_4(L);
	if (_lg_typecheck_componentDivide_overload_5(L)) return _bind_componentDivide_overload_5(L);
	if (_lg_typecheck_componentDivide_overload_6(L)) return _bind_componentDivide_overload_6(L);
	if (_lg_typecheck_componentDivide_overload_7(L)) return _bind_componentDivide_overload_7(L);
	if (_lg_typecheck_componentDivide_overload_8(L)) return _bind_componentDivide_overload_8(L);
	if (_lg_typecheck_componentDivide_overload_9(L)) return _bind_componentDivide_overload_9(L);

	luaL_error(L, "error in function componentDivide, cannot match any of the overloads for function componentDivide:\n  componentDivide(const osg::Vec2d &, const osg::Vec2d &)\n  componentDivide(const osg::Vec2f &, const osg::Vec2f &)\n  componentDivide(const osg::Vec2s &, const osg::Vec2s &)\n  componentDivide(const osg::Vec3d &, const osg::Vec3d &)\n  componentDivide(const osg::Vec3f &, const osg::Vec3f &)\n  componentDivide(const osg::Vec3s &, const osg::Vec3s &)\n  componentDivide(const osg::Vec4d &, const osg::Vec4d &)\n  componentDivide(const osg::Vec4f &, const osg::Vec4f &)\n  componentDivide(const osg::Vec4s &, const osg::Vec4s &)\n");
	return 0;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_glLoadMatrix); lua_setfield(L,-2,"glLoadMatrix");
	lua_pushcfunction(L, _bind_glMultMatrix); lua_setfield(L,-2,"glMultMatrix");
	lua_pushcfunction(L, _bind_osgGetVersion); lua_setfield(L,-2,"osgGetVersion");
	lua_pushcfunction(L, _bind_osgGetSOVersion); lua_setfield(L,-2,"osgGetSOVersion");
	lua_pushcfunction(L, _bind_osgGetLibraryName); lua_setfield(L,-2,"osgGetLibraryName");
	lua_pushcfunction(L, _bind_getCpuByteOrder); lua_setfield(L,-2,"getCpuByteOrder");
	lua_pushcfunction(L, _bind_swapBytes); lua_setfield(L,-2,"swapBytes");
	lua_pushcfunction(L, _bind_swapBytes2); lua_setfield(L,-2,"swapBytes2");
	lua_pushcfunction(L, _bind_swapBytes4); lua_setfield(L,-2,"swapBytes4");
	lua_pushcfunction(L, _bind_swapBytes8); lua_setfield(L,-2,"swapBytes8");
	lua_pushcfunction(L, _bind_swapBytes16); lua_setfield(L,-2,"swapBytes16");
	lua_pushcfunction(L, _bind_createTexturedQuadGeometry); lua_setfield(L,-2,"createTexturedQuadGeometry");
	lua_pushcfunction(L, _bind_getGLVersionNumber); lua_setfield(L,-2,"getGLVersionNumber");
	lua_pushcfunction(L, _bind_isExtensionInExtensionString); lua_setfield(L,-2,"isExtensionInExtensionString");
	lua_pushcfunction(L, _bind_isGLExtensionSupported); lua_setfield(L,-2,"isGLExtensionSupported");
	lua_pushcfunction(L, _bind_isGLExtensionOrVersionSupported); lua_setfield(L,-2,"isGLExtensionOrVersionSupported");
	lua_pushcfunction(L, _bind_getGLExtensionFuncPtr); lua_setfield(L,-2,"getGLExtensionFuncPtr");
	lua_pushcfunction(L, _bind_setGLExtensionDisableString); lua_setfield(L,-2,"setGLExtensionDisableString");
	lua_pushcfunction(L, _bind_getGLExtensionDisableString); lua_setfield(L,-2,"getGLExtensionDisableString");
	lua_pushcfunction(L, _bind_flushDeletedGLObjects); lua_setfield(L,-2,"flushDeletedGLObjects");
	lua_pushcfunction(L, _bind_flushAllDeletedGLObjects); lua_setfield(L,-2,"flushAllDeletedGLObjects");
	lua_pushcfunction(L, _bind_deleteAllGLObjects); lua_setfield(L,-2,"deleteAllGLObjects");
	lua_pushcfunction(L, _bind_discardAllGLObjects); lua_setfield(L,-2,"discardAllGLObjects");
	lua_pushcfunction(L, _bind_gluErrorString); lua_setfield(L,-2,"gluErrorString");
	lua_pushcfunction(L, _bind_gluScaleImage); lua_setfield(L,-2,"gluScaleImage");
	lua_pushcfunction(L, _bind_gluBuild1DMipmapLevels); lua_setfield(L,-2,"gluBuild1DMipmapLevels");
	lua_pushcfunction(L, _bind_gluBuild1DMipmaps); lua_setfield(L,-2,"gluBuild1DMipmaps");
	lua_pushcfunction(L, _bind_gluBuild2DMipmapLevels); lua_setfield(L,-2,"gluBuild2DMipmapLevels");
	lua_pushcfunction(L, _bind_gluBuild2DMipmaps); lua_setfield(L,-2,"gluBuild2DMipmaps");
	lua_pushcfunction(L, _bind_gluNewTess); lua_setfield(L,-2,"gluNewTess");
	lua_pushcfunction(L, _bind_gluDeleteTess); lua_setfield(L,-2,"gluDeleteTess");
	lua_pushcfunction(L, _bind_gluTessBeginContour); lua_setfield(L,-2,"gluTessBeginContour");
	lua_pushcfunction(L, _bind_gluTessEndContour); lua_setfield(L,-2,"gluTessEndContour");
	lua_pushcfunction(L, _bind_gluTessNormal); lua_setfield(L,-2,"gluTessNormal");
	lua_pushcfunction(L, _bind_gluTessProperty); lua_setfield(L,-2,"gluTessProperty");
	lua_pushcfunction(L, _bind_gluTessVertex); lua_setfield(L,-2,"gluTessVertex");
	lua_pushcfunction(L, _bind_gluTessBeginPolygon); lua_setfield(L,-2,"gluTessBeginPolygon");
	lua_pushcfunction(L, _bind_gluTessEndPolygon); lua_setfield(L,-2,"gluTessEndPolygon");
	lua_pushcfunction(L, _bind_gluGetTessProperty); lua_setfield(L,-2,"gluGetTessProperty");
	lua_pushcfunction(L, _bind_createGeodeForImage); lua_setfield(L,-2,"createGeodeForImage");
	lua_pushcfunction(L, _bind_computeMinMax); lua_setfield(L,-2,"computeMinMax");
	lua_pushcfunction(L, _bind_offsetAndScaleImage); lua_setfield(L,-2,"offsetAndScaleImage");
	lua_pushcfunction(L, _bind_copyImage); lua_setfield(L,-2,"copyImage");
	lua_pushcfunction(L, _bind_clearImageToColor); lua_setfield(L,-2,"clearImageToColor");
	lua_pushcfunction(L, _bind_maximimNumOfComponents); lua_setfield(L,-2,"maximimNumOfComponents");
	lua_pushcfunction(L, _bind_createImage3D); lua_setfield(L,-2,"createImage3D");
	lua_pushcfunction(L, _bind_createImage3DWithAlpha); lua_setfield(L,-2,"createImage3DWithAlpha");
	lua_pushcfunction(L, _bind_equivalent); lua_setfield(L,-2,"equivalent");
	lua_pushcfunction(L, _bind_inDegrees); lua_setfield(L,-2,"inDegrees");
	lua_pushcfunction(L, _bind_DegreesToRadians); lua_setfield(L,-2,"DegreesToRadians");
	lua_pushcfunction(L, _bind_RadiansToDegrees); lua_setfield(L,-2,"RadiansToDegrees");
	lua_pushcfunction(L, _bind_round); lua_setfield(L,-2,"round");
	lua_pushcfunction(L, _bind_isNaN); lua_setfield(L,-2,"isNaN");
	lua_pushcfunction(L, _bind_asciiToDouble); lua_setfield(L,-2,"asciiToDouble");
	lua_pushcfunction(L, _bind_asciiToFloat); lua_setfield(L,-2,"asciiToFloat");
	lua_pushcfunction(L, _bind_findAsciiToDouble); lua_setfield(L,-2,"findAsciiToDouble");
	lua_pushcfunction(L, _bind_findAsciiToFloat); lua_setfield(L,-2,"findAsciiToFloat");
	lua_pushcfunction(L, _bind_setNotifyLevel); lua_setfield(L,-2,"setNotifyLevel");
	lua_pushcfunction(L, _bind_getNotifyLevel); lua_setfield(L,-2,"getNotifyLevel");
	lua_pushcfunction(L, _bind_initNotifyLevel); lua_setfield(L,-2,"initNotifyLevel");
	lua_pushcfunction(L, _bind_isNotifyEnabled); lua_setfield(L,-2,"isNotifyEnabled");
	lua_pushcfunction(L, _bind_setNotifyHandler); lua_setfield(L,-2,"setNotifyHandler");
	lua_pushcfunction(L, _bind_getNotifyHandler); lua_setfield(L,-2,"getNotifyHandler");
	lua_pushcfunction(L, _bind_initOQState); lua_setfield(L,-2,"initOQState");
	lua_pushcfunction(L, _bind_initOQDebugState); lua_setfield(L,-2,"initOQDebugState");
	lua_pushcfunction(L, _bind_intrusive_ptr_add_ref); lua_setfield(L,-2,"intrusive_ptr_add_ref");
	lua_pushcfunction(L, _bind_intrusive_ptr_release); lua_setfield(L,-2,"intrusive_ptr_release");
	lua_pushcfunction(L, _bind_isTextureMode); lua_setfield(L,-2,"isTextureMode");
	lua_pushcfunction(L, _bind_computeLocalToWorld); lua_setfield(L,-2,"computeLocalToWorld");
	lua_pushcfunction(L, _bind_computeWorldToLocal); lua_setfield(L,-2,"computeWorldToLocal");
	lua_pushcfunction(L, _bind_computeLocalToEye); lua_setfield(L,-2,"computeLocalToEye");
	lua_pushcfunction(L, _bind_computeEyeToLocal); lua_setfield(L,-2,"computeEyeToLocal");
	lua_pushcfunction(L, _bind_componentMultiply); lua_setfield(L,-2,"componentMultiply");
	lua_pushcfunction(L, _bind_componentDivide); lua_setfield(L,-2,"componentDivide");
}

#ifdef __cplusplus
}
#endif

