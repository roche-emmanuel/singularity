#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_SceneView.h>

class luna_wrapper_osgUtil_SceneView {
public:
	typedef Luna< osgUtil::SceneView > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::SceneView* ptr= dynamic_cast< osgUtil::SceneView* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::SceneView* ptr= luna_caster< osg::Referenced, osgUtil::SceneView >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SceneView >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_CullSettings(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::SceneView* ptr= dynamic_cast< osgUtil::SceneView* >(Luna< osg::CullSettings >::check(L,1));
		osgUtil::SceneView* ptr= luna_caster< osg::CullSettings, osgUtil::SceneView >::cast(Luna< osg::CullSettings >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SceneView >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::SceneView* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::SceneView* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaults_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaults_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCamera(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumSceneData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRedrawInterlacedStereoStencilMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRedrawInterlacedStereoStencilMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlobalStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlobalStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondaryStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecondaryStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActiveUniforms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLightingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLightingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getView_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getView_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderInfo_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderInfo_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsOrtho(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsOrtho2D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsFrustum(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsPerspective(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsOrtho(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsFrustum(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsPerspective(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewMatrixAsLookAt(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewMatrixAsLookAt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInitVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpdateVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCullVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullVisitorLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullVisitorLeft_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCullVisitorLeft_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullVisitorRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullVisitorRight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCullVisitorRight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollectOccludersVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollectOccludersVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollectOccludersVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateGraph_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateGraph_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateGraphLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateGraphLeft_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateGraphLeft_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateGraphRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateGraphRight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateGraphRight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderStage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderStage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderStage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderStageLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderStageLeft_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderStageLeft_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderStageRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderStageRight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderStageRight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_collateReferencesToDependentCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearReferencesToDependentCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawBufferValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawBufferValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFusionDistance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrioritizeTextures(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrioritizeTextures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setComputeStereoMatricesCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComputeStereoMatricesCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getComputeStereoMatricesCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_projectWindowIntoObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_projectWindowXYIntoObject(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_projectObjectIntoWindow(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeProjectionImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeViewImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeProjectionImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeViewImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inheritCullSettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!dynamic_cast< osg::CullSettings* >(Luna< osg::CullSettings >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inheritCullSettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!dynamic_cast< osg::CullSettings* >(Luna< osg::CullSettings >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDynamicObjectCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseAllGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushDeletedGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutomaticFlush(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutomaticFlush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDefaults_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDefaults_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeLeftEyeProjectionImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeLeftEyeViewImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeRightEyeProjectionImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeRightEyeViewImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_inheritCullSettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!dynamic_cast< osg::CullSettings* >(Luna< osg::CullSettings >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_inheritCullSettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!dynamic_cast< osg::CullSettings* >(Luna< osg::CullSettings >::check(L,2))) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseAllGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_flushAllDeletedGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_flushDeletedGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::SceneView::SceneView(osg::DisplaySettings * ds = NULL)
	static osgUtil::SceneView* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::SceneView(osg::DisplaySettings * ds = NULL) function, expected prototype:\nosgUtil::SceneView::SceneView(osg::DisplaySettings * ds = NULL)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1)) : (osg::DisplaySettings*)((void *) 0);

		return new osgUtil::SceneView(ds);
	}

	// osgUtil::SceneView::SceneView(const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ())
	static osgUtil::SceneView* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::SceneView(const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ()) function, expected prototype:\nosgUtil::SceneView::SceneView(const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ())\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::SceneView* sceneview_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1));
		if( !sceneview_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sceneview in osgUtil::SceneView::SceneView function");
		}
		const osgUtil::SceneView & sceneview=*sceneview_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::SceneView::SceneView function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp ();

		return new osgUtil::SceneView(sceneview, copyop);
	}

	// osgUtil::SceneView::SceneView(lua_Table * data, osg::DisplaySettings * ds = NULL)
	static osgUtil::SceneView* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::SceneView(lua_Table * data, osg::DisplaySettings * ds = NULL) function, expected prototype:\nosgUtil::SceneView::SceneView(lua_Table * data, osg::DisplaySettings * ds = NULL)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2)) : (osg::DisplaySettings*)((void *) 0);

		return new wrapper_osgUtil_SceneView(L,NULL, ds);
	}

	// osgUtil::SceneView::SceneView(lua_Table * data, const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ())
	static osgUtil::SceneView* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::SceneView(lua_Table * data, const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ()) function, expected prototype:\nosgUtil::SceneView::SceneView(lua_Table * data, const osgUtil::SceneView & sceneview, const osg::CopyOp & copyop = osg::CopyOp ())\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::SceneView* sceneview_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,2));
		if( !sceneview_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sceneview in osgUtil::SceneView::SceneView function");
		}
		const osgUtil::SceneView & sceneview=*sceneview_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::SceneView::SceneView function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp ();

		return new wrapper_osgUtil_SceneView(L,NULL, sceneview, copyop);
	}

	// Overload binder for osgUtil::SceneView::SceneView
	static osgUtil::SceneView* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function SceneView, cannot match any of the overloads for function SceneView:\n  SceneView(osg::DisplaySettings *)\n  SceneView(const osgUtil::SceneView &, const osg::CopyOp &)\n  SceneView(lua_Table *, osg::DisplaySettings *)\n  SceneView(lua_Table *, const osgUtil::SceneView &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgUtil::SceneView::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::SceneView::cloneType() const function, expected prototype:\nosg::Object * osgUtil::SceneView::cloneType() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::SceneView::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::SceneView::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::SceneView::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::SceneView::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::SceneView::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::SceneView::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::SceneView::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::SceneView::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::SceneView::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SceneView::libraryName() const function, expected prototype:\nconst char * osgUtil::SceneView::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SceneView::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::SceneView::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SceneView::className() const function, expected prototype:\nconst char * osgUtil::SceneView::className() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SceneView::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::setDefaults()
	static int _bind_setDefaults_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDefaults_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setDefaults() function, expected prototype:\nvoid osgUtil::SceneView::setDefaults()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osgUtil::SceneView::setDefaults(unsigned int options)
	static int _bind_setDefaults_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDefaults_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setDefaults(unsigned int options) function, expected prototype:\nvoid osgUtil::SceneView::setDefaults(unsigned int options)\nClass arguments details:\n");
		}

		unsigned int options=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setDefaults(unsigned int)");
		}
		self->setDefaults(options);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::setDefaults
	static int _bind_setDefaults(lua_State *L) {
		if (_lg_typecheck_setDefaults_overload_1(L)) return _bind_setDefaults_overload_1(L);
		if (_lg_typecheck_setDefaults_overload_2(L)) return _bind_setDefaults_overload_2(L);

		luaL_error(L, "error in function setDefaults, cannot match any of the overloads for function setDefaults:\n  setDefaults()\n  setDefaults(unsigned int)\n");
		return 0;
	}

	// void osgUtil::SceneView::setCamera(osg::Camera * camera, bool assumeOwnershipOfCamera = true)
	static int _bind_setCamera(lua_State *L) {
		if (!_lg_typecheck_setCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setCamera(osg::Camera * camera, bool assumeOwnershipOfCamera = true) function, expected prototype:\nvoid osgUtil::SceneView::setCamera(osg::Camera * camera, bool assumeOwnershipOfCamera = true)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		bool assumeOwnershipOfCamera=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setCamera(osg::Camera *, bool)");
		}
		self->setCamera(camera, assumeOwnershipOfCamera);

		return 0;
	}

	// osg::Camera * osgUtil::SceneView::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgUtil::SceneView::getCamera() function, expected prototype:\nosg::Camera * osgUtil::SceneView::getCamera()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgUtil::SceneView::getCamera()");
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgUtil::SceneView::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgUtil::SceneView::getCamera() const function, expected prototype:\nconst osg::Camera * osgUtil::SceneView::getCamera() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgUtil::SceneView::getCamera() const");
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// void osgUtil::SceneView::setSceneData(osg::Node * node)
	static int _bind_setSceneData(lua_State *L) {
		if (!_lg_typecheck_setSceneData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setSceneData(osg::Node * node) function, expected prototype:\nvoid osgUtil::SceneView::setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setSceneData(osg::Node *)");
		}
		self->setSceneData(node);

		return 0;
	}

	// osg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0)
	static int _bind_getSceneData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0) function, expected prototype:\nosg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int childNo=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgUtil::SceneView::getSceneData(unsigned int)");
		}
		osg::Node * lret = self->getSceneData(childNo);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0) const
	static int _bind_getSceneData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0) const function, expected prototype:\nconst osg::Node * osgUtil::SceneView::getSceneData(unsigned int childNo = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int childNo=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgUtil::SceneView::getSceneData(unsigned int) const");
		}
		const osg::Node * lret = self->getSceneData(childNo);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getSceneData
	static int _bind_getSceneData(lua_State *L) {
		if (_lg_typecheck_getSceneData_overload_1(L)) return _bind_getSceneData_overload_1(L);
		if (_lg_typecheck_getSceneData_overload_2(L)) return _bind_getSceneData_overload_2(L);

		luaL_error(L, "error in function getSceneData, cannot match any of the overloads for function getSceneData:\n  getSceneData(unsigned int)\n  getSceneData(unsigned int)\n");
		return 0;
	}

	// unsigned int osgUtil::SceneView::getNumSceneData() const
	static int _bind_getNumSceneData(lua_State *L) {
		if (!_lg_typecheck_getNumSceneData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::SceneView::getNumSceneData() const function, expected prototype:\nunsigned int osgUtil::SceneView::getNumSceneData() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::SceneView::getNumSceneData() const");
		}
		unsigned int lret = self->getNumSceneData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::setViewport(osg::Viewport * viewport)
	static int _bind_setViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setViewport(osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::SceneView::setViewport(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setViewport(osg::Viewport *)");
		}
		self->setViewport(viewport);

		return 0;
	}

	// void osgUtil::SceneView::setViewport(int x, int y, int width, int height)
	static int _bind_setViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setViewport(int x, int y, int width, int height) function, expected prototype:\nvoid osgUtil::SceneView::setViewport(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setViewport(int, int, int, int)");
		}
		self->setViewport(x, y, width, height);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::setViewport
	static int _bind_setViewport(lua_State *L) {
		if (_lg_typecheck_setViewport_overload_1(L)) return _bind_setViewport_overload_1(L);
		if (_lg_typecheck_setViewport_overload_2(L)) return _bind_setViewport_overload_2(L);

		luaL_error(L, "error in function setViewport, cannot match any of the overloads for function setViewport:\n  setViewport(osg::Viewport *)\n  setViewport(int, int, int, int)\n");
		return 0;
	}

	// osg::Viewport * osgUtil::SceneView::getViewport()
	static int _bind_getViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Viewport * osgUtil::SceneView::getViewport() function, expected prototype:\nosg::Viewport * osgUtil::SceneView::getViewport()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Viewport * osgUtil::SceneView::getViewport()");
		}
		osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// const osg::Viewport * osgUtil::SceneView::getViewport() const
	static int _bind_getViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Viewport * osgUtil::SceneView::getViewport() const function, expected prototype:\nconst osg::Viewport * osgUtil::SceneView::getViewport() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Viewport * osgUtil::SceneView::getViewport() const");
		}
		const osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getViewport
	static int _bind_getViewport(lua_State *L) {
		if (_lg_typecheck_getViewport_overload_1(L)) return _bind_getViewport_overload_1(L);
		if (_lg_typecheck_getViewport_overload_2(L)) return _bind_getViewport_overload_2(L);

		luaL_error(L, "error in function getViewport, cannot match any of the overloads for function getViewport:\n  getViewport()\n  getViewport()\n");
		return 0;
	}

	// void osgUtil::SceneView::setDisplaySettings(osg::DisplaySettings * vs)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setDisplaySettings(osg::DisplaySettings * vs) function, expected prototype:\nvoid osgUtil::SceneView::setDisplaySettings(osg::DisplaySettings * vs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::DisplaySettings* vs=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setDisplaySettings(osg::DisplaySettings *)");
		}
		self->setDisplaySettings(vs);

		return 0;
	}

	// const osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings() const
	static int _bind_getDisplaySettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings() const");
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings()
	static int _bind_getDisplaySettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings() function, expected prototype:\nosg::DisplaySettings * osgUtil::SceneView::getDisplaySettings()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings * osgUtil::SceneView::getDisplaySettings()");
		}
		osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getDisplaySettings
	static int _bind_getDisplaySettings(lua_State *L) {
		if (_lg_typecheck_getDisplaySettings_overload_1(L)) return _bind_getDisplaySettings_overload_1(L);
		if (_lg_typecheck_getDisplaySettings_overload_2(L)) return _bind_getDisplaySettings_overload_2(L);

		luaL_error(L, "error in function getDisplaySettings, cannot match any of the overloads for function getDisplaySettings:\n  getDisplaySettings()\n  getDisplaySettings()\n");
		return 0;
	}

	// void osgUtil::SceneView::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::SceneView::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::SceneView::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setClearColor(const osg::Vec4f &)");
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osgUtil::SceneView::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgUtil::SceneView::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osgUtil::SceneView::getClearColor() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgUtil::SceneView::getClearColor() const");
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::SceneView::setRedrawInterlacedStereoStencilMask(bool flag)
	static int _bind_setRedrawInterlacedStereoStencilMask(lua_State *L) {
		if (!_lg_typecheck_setRedrawInterlacedStereoStencilMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setRedrawInterlacedStereoStencilMask(bool flag) function, expected prototype:\nvoid osgUtil::SceneView::setRedrawInterlacedStereoStencilMask(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setRedrawInterlacedStereoStencilMask(bool)");
		}
		self->setRedrawInterlacedStereoStencilMask(flag);

		return 0;
	}

	// bool osgUtil::SceneView::getRedrawInterlacedStereoStencilMask() const
	static int _bind_getRedrawInterlacedStereoStencilMask(lua_State *L) {
		if (!_lg_typecheck_getRedrawInterlacedStereoStencilMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getRedrawInterlacedStereoStencilMask() const function, expected prototype:\nbool osgUtil::SceneView::getRedrawInterlacedStereoStencilMask() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getRedrawInterlacedStereoStencilMask() const");
		}
		bool lret = self->getRedrawInterlacedStereoStencilMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::setGlobalStateSet(osg::StateSet * state)
	static int _bind_setGlobalStateSet(lua_State *L) {
		if (!_lg_typecheck_setGlobalStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setGlobalStateSet(osg::StateSet * state) function, expected prototype:\nvoid osgUtil::SceneView::setGlobalStateSet(osg::StateSet * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* state=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setGlobalStateSet(osg::StateSet *)");
		}
		self->setGlobalStateSet(state);

		return 0;
	}

	// osg::StateSet * osgUtil::SceneView::getGlobalStateSet()
	static int _bind_getGlobalStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGlobalStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::SceneView::getGlobalStateSet() function, expected prototype:\nosg::StateSet * osgUtil::SceneView::getGlobalStateSet()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::SceneView::getGlobalStateSet()");
		}
		osg::StateSet * lret = self->getGlobalStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgUtil::SceneView::getGlobalStateSet() const
	static int _bind_getGlobalStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGlobalStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgUtil::SceneView::getGlobalStateSet() const function, expected prototype:\nconst osg::StateSet * osgUtil::SceneView::getGlobalStateSet() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgUtil::SceneView::getGlobalStateSet() const");
		}
		const osg::StateSet * lret = self->getGlobalStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getGlobalStateSet
	static int _bind_getGlobalStateSet(lua_State *L) {
		if (_lg_typecheck_getGlobalStateSet_overload_1(L)) return _bind_getGlobalStateSet_overload_1(L);
		if (_lg_typecheck_getGlobalStateSet_overload_2(L)) return _bind_getGlobalStateSet_overload_2(L);

		luaL_error(L, "error in function getGlobalStateSet, cannot match any of the overloads for function getGlobalStateSet:\n  getGlobalStateSet()\n  getGlobalStateSet()\n");
		return 0;
	}

	// void osgUtil::SceneView::setSecondaryStateSet(osg::StateSet * state)
	static int _bind_setSecondaryStateSet(lua_State *L) {
		if (!_lg_typecheck_setSecondaryStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setSecondaryStateSet(osg::StateSet * state) function, expected prototype:\nvoid osgUtil::SceneView::setSecondaryStateSet(osg::StateSet * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* state=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setSecondaryStateSet(osg::StateSet *)");
		}
		self->setSecondaryStateSet(state);

		return 0;
	}

	// osg::StateSet * osgUtil::SceneView::getSecondaryStateSet()
	static int _bind_getSecondaryStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSecondaryStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::SceneView::getSecondaryStateSet() function, expected prototype:\nosg::StateSet * osgUtil::SceneView::getSecondaryStateSet()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::SceneView::getSecondaryStateSet()");
		}
		osg::StateSet * lret = self->getSecondaryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgUtil::SceneView::getSecondaryStateSet() const
	static int _bind_getSecondaryStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSecondaryStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgUtil::SceneView::getSecondaryStateSet() const function, expected prototype:\nconst osg::StateSet * osgUtil::SceneView::getSecondaryStateSet() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgUtil::SceneView::getSecondaryStateSet() const");
		}
		const osg::StateSet * lret = self->getSecondaryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getSecondaryStateSet
	static int _bind_getSecondaryStateSet(lua_State *L) {
		if (_lg_typecheck_getSecondaryStateSet_overload_1(L)) return _bind_getSecondaryStateSet_overload_1(L);
		if (_lg_typecheck_getSecondaryStateSet_overload_2(L)) return _bind_getSecondaryStateSet_overload_2(L);

		luaL_error(L, "error in function getSecondaryStateSet, cannot match any of the overloads for function getSecondaryStateSet:\n  getSecondaryStateSet()\n  getSecondaryStateSet()\n");
		return 0;
	}

	// void osgUtil::SceneView::setLocalStateSet(osg::StateSet * state)
	static int _bind_setLocalStateSet(lua_State *L) {
		if (!_lg_typecheck_setLocalStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setLocalStateSet(osg::StateSet * state) function, expected prototype:\nvoid osgUtil::SceneView::setLocalStateSet(osg::StateSet * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* state=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setLocalStateSet(osg::StateSet *)");
		}
		self->setLocalStateSet(state);

		return 0;
	}

	// osg::StateSet * osgUtil::SceneView::getLocalStateSet()
	static int _bind_getLocalStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLocalStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::SceneView::getLocalStateSet() function, expected prototype:\nosg::StateSet * osgUtil::SceneView::getLocalStateSet()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::SceneView::getLocalStateSet()");
		}
		osg::StateSet * lret = self->getLocalStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgUtil::SceneView::getLocalStateSet() const
	static int _bind_getLocalStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLocalStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgUtil::SceneView::getLocalStateSet() const function, expected prototype:\nconst osg::StateSet * osgUtil::SceneView::getLocalStateSet() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgUtil::SceneView::getLocalStateSet() const");
		}
		const osg::StateSet * lret = self->getLocalStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getLocalStateSet
	static int _bind_getLocalStateSet(lua_State *L) {
		if (_lg_typecheck_getLocalStateSet_overload_1(L)) return _bind_getLocalStateSet_overload_1(L);
		if (_lg_typecheck_getLocalStateSet_overload_2(L)) return _bind_getLocalStateSet_overload_2(L);

		luaL_error(L, "error in function getLocalStateSet, cannot match any of the overloads for function getLocalStateSet:\n  getLocalStateSet()\n  getLocalStateSet()\n");
		return 0;
	}

	// void osgUtil::SceneView::setActiveUniforms(int activeUniforms)
	static int _bind_setActiveUniforms(lua_State *L) {
		if (!_lg_typecheck_setActiveUniforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setActiveUniforms(int activeUniforms) function, expected prototype:\nvoid osgUtil::SceneView::setActiveUniforms(int activeUniforms)\nClass arguments details:\n");
		}

		int activeUniforms=(int)lua_tointeger(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setActiveUniforms(int)");
		}
		self->setActiveUniforms(activeUniforms);

		return 0;
	}

	// int osgUtil::SceneView::getActiveUniforms() const
	static int _bind_getActiveUniforms(lua_State *L) {
		if (!_lg_typecheck_getActiveUniforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgUtil::SceneView::getActiveUniforms() const function, expected prototype:\nint osgUtil::SceneView::getActiveUniforms() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgUtil::SceneView::getActiveUniforms() const");
		}
		int lret = self->getActiveUniforms();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::updateUniforms()
	static int _bind_updateUniforms(lua_State *L) {
		if (!_lg_typecheck_updateUniforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::updateUniforms() function, expected prototype:\nvoid osgUtil::SceneView::updateUniforms()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::updateUniforms()");
		}
		self->updateUniforms();

		return 0;
	}

	// void osgUtil::SceneView::setLightingMode(osgUtil::SceneView::Options mode)
	static int _bind_setLightingMode(lua_State *L) {
		if (!_lg_typecheck_setLightingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setLightingMode(osgUtil::SceneView::Options mode) function, expected prototype:\nvoid osgUtil::SceneView::setLightingMode(osgUtil::SceneView::Options mode)\nClass arguments details:\n");
		}

		osgUtil::SceneView::Options mode=(osgUtil::SceneView::Options)lua_tointeger(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setLightingMode(osgUtil::SceneView::Options)");
		}
		self->setLightingMode(mode);

		return 0;
	}

	// osgUtil::SceneView::Options osgUtil::SceneView::getLightingMode() const
	static int _bind_getLightingMode(lua_State *L) {
		if (!_lg_typecheck_getLightingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::Options osgUtil::SceneView::getLightingMode() const function, expected prototype:\nosgUtil::SceneView::Options osgUtil::SceneView::getLightingMode() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::Options osgUtil::SceneView::getLightingMode() const");
		}
		osgUtil::SceneView::Options lret = self->getLightingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::setLight(osg::Light * light)
	static int _bind_setLight(lua_State *L) {
		if (!_lg_typecheck_setLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setLight(osg::Light * light) function, expected prototype:\nvoid osgUtil::SceneView::setLight(osg::Light * light)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Light* light=(Luna< osg::Referenced >::checkSubType< osg::Light >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setLight(osg::Light *)");
		}
		self->setLight(light);

		return 0;
	}

	// osg::Light * osgUtil::SceneView::getLight()
	static int _bind_getLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Light * osgUtil::SceneView::getLight() function, expected prototype:\nosg::Light * osgUtil::SceneView::getLight()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Light * osgUtil::SceneView::getLight()");
		}
		osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// const osg::Light * osgUtil::SceneView::getLight() const
	static int _bind_getLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Light * osgUtil::SceneView::getLight() const function, expected prototype:\nconst osg::Light * osgUtil::SceneView::getLight() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Light * osgUtil::SceneView::getLight() const");
		}
		const osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getLight
	static int _bind_getLight(lua_State *L) {
		if (_lg_typecheck_getLight_overload_1(L)) return _bind_getLight_overload_1(L);
		if (_lg_typecheck_getLight_overload_2(L)) return _bind_getLight_overload_2(L);

		luaL_error(L, "error in function getLight, cannot match any of the overloads for function getLight:\n  getLight()\n  getLight()\n");
		return 0;
	}

	// void osgUtil::SceneView::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setState(osg::State * state) function, expected prototype:\nvoid osgUtil::SceneView::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setState(osg::State *)");
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osgUtil::SceneView::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::State * osgUtil::SceneView::getState() function, expected prototype:\nosg::State * osgUtil::SceneView::getState()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::State * osgUtil::SceneView::getState()");
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osgUtil::SceneView::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::State * osgUtil::SceneView::getState() const function, expected prototype:\nconst osg::State * osgUtil::SceneView::getState() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::State * osgUtil::SceneView::getState() const");
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osgUtil::SceneView::setView(osg::View * view)
	static int _bind_setView(lua_State *L) {
		if (!_lg_typecheck_setView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setView(osg::View * view) function, expected prototype:\nvoid osgUtil::SceneView::setView(osg::View * view)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* view=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setView(osg::View *)");
		}
		self->setView(view);

		return 0;
	}

	// osg::View * osgUtil::SceneView::getView()
	static int _bind_getView_overload_1(lua_State *L) {
		if (!_lg_typecheck_getView_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View * osgUtil::SceneView::getView() function, expected prototype:\nosg::View * osgUtil::SceneView::getView()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::View * osgUtil::SceneView::getView()");
		}
		osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// const osg::View * osgUtil::SceneView::getView() const
	static int _bind_getView_overload_2(lua_State *L) {
		if (!_lg_typecheck_getView_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::View * osgUtil::SceneView::getView() const function, expected prototype:\nconst osg::View * osgUtil::SceneView::getView() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::View * osgUtil::SceneView::getView() const");
		}
		const osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getView
	static int _bind_getView(lua_State *L) {
		if (_lg_typecheck_getView_overload_1(L)) return _bind_getView_overload_1(L);
		if (_lg_typecheck_getView_overload_2(L)) return _bind_getView_overload_2(L);

		luaL_error(L, "error in function getView, cannot match any of the overloads for function getView:\n  getView()\n  getView()\n");
		return 0;
	}

	// void osgUtil::SceneView::setRenderInfo(osg::RenderInfo & renderInfo)
	static int _bind_setRenderInfo(lua_State *L) {
		if (!_lg_typecheck_setRenderInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setRenderInfo(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osgUtil::SceneView::setRenderInfo(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::SceneView::setRenderInfo function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setRenderInfo(osg::RenderInfo &)");
		}
		self->setRenderInfo(renderInfo);

		return 0;
	}

	// osg::RenderInfo & osgUtil::SceneView::getRenderInfo()
	static int _bind_getRenderInfo_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderInfo_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RenderInfo & osgUtil::SceneView::getRenderInfo() function, expected prototype:\nosg::RenderInfo & osgUtil::SceneView::getRenderInfo()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RenderInfo & osgUtil::SceneView::getRenderInfo()");
		}
		const osg::RenderInfo* lret = &self->getRenderInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}

	// const osg::RenderInfo & osgUtil::SceneView::getRenderInfo() const
	static int _bind_getRenderInfo_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderInfo_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RenderInfo & osgUtil::SceneView::getRenderInfo() const function, expected prototype:\nconst osg::RenderInfo & osgUtil::SceneView::getRenderInfo() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RenderInfo & osgUtil::SceneView::getRenderInfo() const");
		}
		const osg::RenderInfo* lret = &self->getRenderInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getRenderInfo
	static int _bind_getRenderInfo(lua_State *L) {
		if (_lg_typecheck_getRenderInfo_overload_1(L)) return _bind_getRenderInfo_overload_1(L);
		if (_lg_typecheck_getRenderInfo_overload_2(L)) return _bind_getRenderInfo_overload_2(L);

		luaL_error(L, "error in function getRenderInfo, cannot match any of the overloads for function getRenderInfo:\n  getRenderInfo()\n  getRenderInfo()\n");
		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixf & matrix)
	static int _bind_setProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixf & matrix) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrix(const osg::Matrixf & matrix)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		const osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::SceneView::setProjectionMatrix function");
		}
		const osg::Matrixf & matrix=*matrix_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixf &)");
		}
		self->setProjectionMatrix(matrix);

		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixd & matrix)
	static int _bind_setProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::SceneView::setProjectionMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrix(const osg::Matrixd &)");
		}
		self->setProjectionMatrix(matrix);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::setProjectionMatrix
	static int _bind_setProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_setProjectionMatrix_overload_1(L)) return _bind_setProjectionMatrix_overload_1(L);
		if (_lg_typecheck_setProjectionMatrix_overload_2(L)) return _bind_setProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function setProjectionMatrix, cannot match any of the overloads for function setProjectionMatrix:\n  setProjectionMatrix(const osg::Matrixf &)\n  setProjectionMatrix(const osg::Matrixd &)\n");
		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsOrtho(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsOrtho(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrixAsOrtho(double, double, double, double, double, double)");
		}
		self->setProjectionMatrixAsOrtho(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top)
	static int _bind_setProjectionMatrixAsOrtho2D(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsOrtho2D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top)\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrixAsOrtho2D(double, double, double, double)");
		}
		self->setProjectionMatrixAsOrtho2D(left, right, bottom, top);

		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsFrustum(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsFrustum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrixAsFrustum(double, double, double, double, double, double)");
		}
		self->setProjectionMatrixAsFrustum(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// void osgUtil::SceneView::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsPerspective(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsPerspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar) function, expected prototype:\nvoid osgUtil::SceneView::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar)\nClass arguments details:\n");
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setProjectionMatrixAsPerspective(double, double, double, double)");
		}
		self->setProjectionMatrixAsPerspective(fovy, aspectRatio, zNear, zFar);

		return 0;
	}

	// osg::Matrixd & osgUtil::SceneView::getProjectionMatrix()
	static int _bind_getProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osgUtil::SceneView::getProjectionMatrix() function, expected prototype:\nosg::Matrixd & osgUtil::SceneView::getProjectionMatrix()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd & osgUtil::SceneView::getProjectionMatrix()");
		}
		const osg::Matrixd* lret = &self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgUtil::SceneView::getProjectionMatrix() const
	static int _bind_getProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgUtil::SceneView::getProjectionMatrix() const function, expected prototype:\nconst osg::Matrixd & osgUtil::SceneView::getProjectionMatrix() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgUtil::SceneView::getProjectionMatrix() const");
		}
		const osg::Matrixd* lret = &self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getProjectionMatrix
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_getProjectionMatrix_overload_1(L)) return _bind_getProjectionMatrix_overload_1(L);
		if (_lg_typecheck_getProjectionMatrix_overload_2(L)) return _bind_getProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function getProjectionMatrix, cannot match any of the overloads for function getProjectionMatrix:\n  getProjectionMatrix()\n  getProjectionMatrix()\n");
		return 0;
	}

	// bool osgUtil::SceneView::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsOrtho(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsOrtho(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osgUtil::SceneView::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getProjectionMatrixAsOrtho(double &, double &, double &, double &, double &, double &) const");
		}
		bool lret = self->getProjectionMatrixAsOrtho(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::SceneView::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsFrustum(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsFrustum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osgUtil::SceneView::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getProjectionMatrixAsFrustum(double &, double &, double &, double &, double &, double &) const");
		}
		bool lret = self->getProjectionMatrixAsFrustum(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::SceneView::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsPerspective(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsPerspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const function, expected prototype:\nbool osgUtil::SceneView::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const\nClass arguments details:\n");
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getProjectionMatrixAsPerspective(double &, double &, double &, double &) const");
		}
		bool lret = self->getProjectionMatrixAsPerspective(fovy, aspectRatio, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::setViewMatrix(const osg::Matrixf & matrix)
	static int _bind_setViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_setViewMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setViewMatrix(const osg::Matrixf & matrix) function, expected prototype:\nvoid osgUtil::SceneView::setViewMatrix(const osg::Matrixf & matrix)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		const osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::SceneView::setViewMatrix function");
		}
		const osg::Matrixf & matrix=*matrix_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setViewMatrix(const osg::Matrixf &)");
		}
		self->setViewMatrix(matrix);

		return 0;
	}

	// void osgUtil::SceneView::setViewMatrix(const osg::Matrixd & matrix)
	static int _bind_setViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_setViewMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setViewMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgUtil::SceneView::setViewMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::SceneView::setViewMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setViewMatrix(const osg::Matrixd &)");
		}
		self->setViewMatrix(matrix);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::setViewMatrix
	static int _bind_setViewMatrix(lua_State *L) {
		if (_lg_typecheck_setViewMatrix_overload_1(L)) return _bind_setViewMatrix_overload_1(L);
		if (_lg_typecheck_setViewMatrix_overload_2(L)) return _bind_setViewMatrix_overload_2(L);

		luaL_error(L, "error in function setViewMatrix, cannot match any of the overloads for function setViewMatrix:\n  setViewMatrix(const osg::Matrixf &)\n  setViewMatrix(const osg::Matrixd &)\n");
		return 0;
	}

	// void osgUtil::SceneView::setViewMatrixAsLookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up)
	static int _bind_setViewMatrixAsLookAt(lua_State *L) {
		if (!_lg_typecheck_setViewMatrixAsLookAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setViewMatrixAsLookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up) function, expected prototype:\nvoid osgUtil::SceneView::setViewMatrixAsLookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		const osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgUtil::SceneView::setViewMatrixAsLookAt function");
		}
		const osg::Vec3f & eye=*eye_ptr;
		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgUtil::SceneView::setViewMatrixAsLookAt function");
		}
		const osg::Vec3f & center=*center_ptr;
		const osg::Vec3f* up_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgUtil::SceneView::setViewMatrixAsLookAt function");
		}
		const osg::Vec3f & up=*up_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setViewMatrixAsLookAt(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &)");
		}
		self->setViewMatrixAsLookAt(eye, center, up);

		return 0;
	}

	// osg::Matrixd & osgUtil::SceneView::getViewMatrix()
	static int _bind_getViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osgUtil::SceneView::getViewMatrix() function, expected prototype:\nosg::Matrixd & osgUtil::SceneView::getViewMatrix()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd & osgUtil::SceneView::getViewMatrix()");
		}
		const osg::Matrixd* lret = &self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgUtil::SceneView::getViewMatrix() const
	static int _bind_getViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgUtil::SceneView::getViewMatrix() const function, expected prototype:\nconst osg::Matrixd & osgUtil::SceneView::getViewMatrix() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgUtil::SceneView::getViewMatrix() const");
		}
		const osg::Matrixd* lret = &self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getViewMatrix
	static int _bind_getViewMatrix(lua_State *L) {
		if (_lg_typecheck_getViewMatrix_overload_1(L)) return _bind_getViewMatrix_overload_1(L);
		if (_lg_typecheck_getViewMatrix_overload_2(L)) return _bind_getViewMatrix_overload_2(L);

		luaL_error(L, "error in function getViewMatrix, cannot match any of the overloads for function getViewMatrix:\n  getViewMatrix()\n  getViewMatrix()\n");
		return 0;
	}

	// void osgUtil::SceneView::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const
	static int _bind_getViewMatrixAsLookAt(lua_State *L) {
		if (!_lg_typecheck_getViewMatrixAsLookAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const function, expected prototype:\nvoid osgUtil::SceneView::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgUtil::SceneView::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & eye=*eye_ptr;
		osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgUtil::SceneView::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & center=*center_ptr;
		osg::Vec3f* up_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgUtil::SceneView::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & up=*up_ptr;
		float lookDistance=luatop>4 ? (float)lua_tonumber(L,5) : 1.0f;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::getViewMatrixAsLookAt(osg::Vec3f &, osg::Vec3f &, osg::Vec3f &, float) const");
		}
		self->getViewMatrixAsLookAt(eye, center, up, lookDistance);

		return 0;
	}

	// void osgUtil::SceneView::setInitVisitor(osg::NodeVisitor * av)
	static int _bind_setInitVisitor(lua_State *L) {
		if (!_lg_typecheck_setInitVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setInitVisitor(osg::NodeVisitor * av) function, expected prototype:\nvoid osgUtil::SceneView::setInitVisitor(osg::NodeVisitor * av)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* av=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setInitVisitor(osg::NodeVisitor *)");
		}
		self->setInitVisitor(av);

		return 0;
	}

	// osg::NodeVisitor * osgUtil::SceneView::getInitVisitor()
	static int _bind_getInitVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInitVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor * osgUtil::SceneView::getInitVisitor() function, expected prototype:\nosg::NodeVisitor * osgUtil::SceneView::getInitVisitor()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor * osgUtil::SceneView::getInitVisitor()");
		}
		osg::NodeVisitor * lret = self->getInitVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor * osgUtil::SceneView::getInitVisitor() const
	static int _bind_getInitVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInitVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor * osgUtil::SceneView::getInitVisitor() const function, expected prototype:\nconst osg::NodeVisitor * osgUtil::SceneView::getInitVisitor() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor * osgUtil::SceneView::getInitVisitor() const");
		}
		const osg::NodeVisitor * lret = self->getInitVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getInitVisitor
	static int _bind_getInitVisitor(lua_State *L) {
		if (_lg_typecheck_getInitVisitor_overload_1(L)) return _bind_getInitVisitor_overload_1(L);
		if (_lg_typecheck_getInitVisitor_overload_2(L)) return _bind_getInitVisitor_overload_2(L);

		luaL_error(L, "error in function getInitVisitor, cannot match any of the overloads for function getInitVisitor:\n  getInitVisitor()\n  getInitVisitor()\n");
		return 0;
	}

	// void osgUtil::SceneView::setUpdateVisitor(osg::NodeVisitor * av)
	static int _bind_setUpdateVisitor(lua_State *L) {
		if (!_lg_typecheck_setUpdateVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setUpdateVisitor(osg::NodeVisitor * av) function, expected prototype:\nvoid osgUtil::SceneView::setUpdateVisitor(osg::NodeVisitor * av)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* av=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setUpdateVisitor(osg::NodeVisitor *)");
		}
		self->setUpdateVisitor(av);

		return 0;
	}

	// osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor()
	static int _bind_getUpdateVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor() function, expected prototype:\nosg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor()");
		}
		osg::NodeVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor() const
	static int _bind_getUpdateVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor() const function, expected prototype:\nconst osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor * osgUtil::SceneView::getUpdateVisitor() const");
		}
		const osg::NodeVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getUpdateVisitor
	static int _bind_getUpdateVisitor(lua_State *L) {
		if (_lg_typecheck_getUpdateVisitor_overload_1(L)) return _bind_getUpdateVisitor_overload_1(L);
		if (_lg_typecheck_getUpdateVisitor_overload_2(L)) return _bind_getUpdateVisitor_overload_2(L);

		luaL_error(L, "error in function getUpdateVisitor, cannot match any of the overloads for function getUpdateVisitor:\n  getUpdateVisitor()\n  getUpdateVisitor()\n");
		return 0;
	}

	// void osgUtil::SceneView::setCullVisitor(osgUtil::CullVisitor * cv)
	static int _bind_setCullVisitor(lua_State *L) {
		if (!_lg_typecheck_setCullVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setCullVisitor(osgUtil::CullVisitor * cv) function, expected prototype:\nvoid osgUtil::SceneView::setCullVisitor(osgUtil::CullVisitor * cv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::CullVisitor* cv=(Luna< osg::Referenced >::checkSubType< osgUtil::CullVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setCullVisitor(osgUtil::CullVisitor *)");
		}
		self->setCullVisitor(cv);

		return 0;
	}

	// osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor()
	static int _bind_getCullVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCullVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor() function, expected prototype:\nosgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor()");
		}
		osgUtil::CullVisitor * lret = self->getCullVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor() const
	static int _bind_getCullVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCullVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor() const function, expected prototype:\nconst osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitor() const");
		}
		const osgUtil::CullVisitor * lret = self->getCullVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getCullVisitor
	static int _bind_getCullVisitor(lua_State *L) {
		if (_lg_typecheck_getCullVisitor_overload_1(L)) return _bind_getCullVisitor_overload_1(L);
		if (_lg_typecheck_getCullVisitor_overload_2(L)) return _bind_getCullVisitor_overload_2(L);

		luaL_error(L, "error in function getCullVisitor, cannot match any of the overloads for function getCullVisitor:\n  getCullVisitor()\n  getCullVisitor()\n");
		return 0;
	}

	// void osgUtil::SceneView::setCullVisitorLeft(osgUtil::CullVisitor * cv)
	static int _bind_setCullVisitorLeft(lua_State *L) {
		if (!_lg_typecheck_setCullVisitorLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setCullVisitorLeft(osgUtil::CullVisitor * cv) function, expected prototype:\nvoid osgUtil::SceneView::setCullVisitorLeft(osgUtil::CullVisitor * cv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::CullVisitor* cv=(Luna< osg::Referenced >::checkSubType< osgUtil::CullVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setCullVisitorLeft(osgUtil::CullVisitor *)");
		}
		self->setCullVisitorLeft(cv);

		return 0;
	}

	// osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft()
	static int _bind_getCullVisitorLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCullVisitorLeft_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft() function, expected prototype:\nosgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft()");
		}
		osgUtil::CullVisitor * lret = self->getCullVisitorLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft() const
	static int _bind_getCullVisitorLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCullVisitorLeft_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft() const function, expected prototype:\nconst osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorLeft() const");
		}
		const osgUtil::CullVisitor * lret = self->getCullVisitorLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getCullVisitorLeft
	static int _bind_getCullVisitorLeft(lua_State *L) {
		if (_lg_typecheck_getCullVisitorLeft_overload_1(L)) return _bind_getCullVisitorLeft_overload_1(L);
		if (_lg_typecheck_getCullVisitorLeft_overload_2(L)) return _bind_getCullVisitorLeft_overload_2(L);

		luaL_error(L, "error in function getCullVisitorLeft, cannot match any of the overloads for function getCullVisitorLeft:\n  getCullVisitorLeft()\n  getCullVisitorLeft()\n");
		return 0;
	}

	// void osgUtil::SceneView::setCullVisitorRight(osgUtil::CullVisitor * cv)
	static int _bind_setCullVisitorRight(lua_State *L) {
		if (!_lg_typecheck_setCullVisitorRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setCullVisitorRight(osgUtil::CullVisitor * cv) function, expected prototype:\nvoid osgUtil::SceneView::setCullVisitorRight(osgUtil::CullVisitor * cv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::CullVisitor* cv=(Luna< osg::Referenced >::checkSubType< osgUtil::CullVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setCullVisitorRight(osgUtil::CullVisitor *)");
		}
		self->setCullVisitorRight(cv);

		return 0;
	}

	// osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight()
	static int _bind_getCullVisitorRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCullVisitorRight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight() function, expected prototype:\nosgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight()");
		}
		osgUtil::CullVisitor * lret = self->getCullVisitorRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight() const
	static int _bind_getCullVisitorRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCullVisitorRight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight() const function, expected prototype:\nconst osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::CullVisitor * osgUtil::SceneView::getCullVisitorRight() const");
		}
		const osgUtil::CullVisitor * lret = self->getCullVisitorRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::CullVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getCullVisitorRight
	static int _bind_getCullVisitorRight(lua_State *L) {
		if (_lg_typecheck_getCullVisitorRight_overload_1(L)) return _bind_getCullVisitorRight_overload_1(L);
		if (_lg_typecheck_getCullVisitorRight_overload_2(L)) return _bind_getCullVisitorRight_overload_2(L);

		luaL_error(L, "error in function getCullVisitorRight, cannot match any of the overloads for function getCullVisitorRight:\n  getCullVisitorRight()\n  getCullVisitorRight()\n");
		return 0;
	}

	// void osgUtil::SceneView::setCollectOccludersVisitor(osg::CollectOccludersVisitor * cov)
	static int _bind_setCollectOccludersVisitor(lua_State *L) {
		if (!_lg_typecheck_setCollectOccludersVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setCollectOccludersVisitor(osg::CollectOccludersVisitor * cov) function, expected prototype:\nvoid osgUtil::SceneView::setCollectOccludersVisitor(osg::CollectOccludersVisitor * cov)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CollectOccludersVisitor* cov=(Luna< osg::Referenced >::checkSubType< osg::CollectOccludersVisitor >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setCollectOccludersVisitor(osg::CollectOccludersVisitor *)");
		}
		self->setCollectOccludersVisitor(cov);

		return 0;
	}

	// osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor()
	static int _bind_getCollectOccludersVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollectOccludersVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor() function, expected prototype:\nosg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor()");
		}
		osg::CollectOccludersVisitor * lret = self->getCollectOccludersVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor >::push(L,lret,false);

		return 1;
	}

	// const osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor() const
	static int _bind_getCollectOccludersVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollectOccludersVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor() const function, expected prototype:\nconst osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::CollectOccludersVisitor * osgUtil::SceneView::getCollectOccludersVisitor() const");
		}
		const osg::CollectOccludersVisitor * lret = self->getCollectOccludersVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getCollectOccludersVisitor
	static int _bind_getCollectOccludersVisitor(lua_State *L) {
		if (_lg_typecheck_getCollectOccludersVisitor_overload_1(L)) return _bind_getCollectOccludersVisitor_overload_1(L);
		if (_lg_typecheck_getCollectOccludersVisitor_overload_2(L)) return _bind_getCollectOccludersVisitor_overload_2(L);

		luaL_error(L, "error in function getCollectOccludersVisitor, cannot match any of the overloads for function getCollectOccludersVisitor:\n  getCollectOccludersVisitor()\n  getCollectOccludersVisitor()\n");
		return 0;
	}

	// void osgUtil::SceneView::setStateGraph(osgUtil::StateGraph * rg)
	static int _bind_setStateGraph(lua_State *L) {
		if (!_lg_typecheck_setStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setStateGraph(osgUtil::StateGraph * rg) function, expected prototype:\nvoid osgUtil::SceneView::setStateGraph(osgUtil::StateGraph * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* rg=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setStateGraph(osgUtil::StateGraph *)");
		}
		self->setStateGraph(rg);

		return 0;
	}

	// osgUtil::StateGraph * osgUtil::SceneView::getStateGraph()
	static int _bind_getStateGraph_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateGraph_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::SceneView::getStateGraph() function, expected prototype:\nosgUtil::StateGraph * osgUtil::SceneView::getStateGraph()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::SceneView::getStateGraph()");
		}
		osgUtil::StateGraph * lret = self->getStateGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::StateGraph * osgUtil::SceneView::getStateGraph() const
	static int _bind_getStateGraph_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateGraph_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::StateGraph * osgUtil::SceneView::getStateGraph() const function, expected prototype:\nconst osgUtil::StateGraph * osgUtil::SceneView::getStateGraph() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::StateGraph * osgUtil::SceneView::getStateGraph() const");
		}
		const osgUtil::StateGraph * lret = self->getStateGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getStateGraph
	static int _bind_getStateGraph(lua_State *L) {
		if (_lg_typecheck_getStateGraph_overload_1(L)) return _bind_getStateGraph_overload_1(L);
		if (_lg_typecheck_getStateGraph_overload_2(L)) return _bind_getStateGraph_overload_2(L);

		luaL_error(L, "error in function getStateGraph, cannot match any of the overloads for function getStateGraph:\n  getStateGraph()\n  getStateGraph()\n");
		return 0;
	}

	// void osgUtil::SceneView::setStateGraphLeft(osgUtil::StateGraph * rg)
	static int _bind_setStateGraphLeft(lua_State *L) {
		if (!_lg_typecheck_setStateGraphLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setStateGraphLeft(osgUtil::StateGraph * rg) function, expected prototype:\nvoid osgUtil::SceneView::setStateGraphLeft(osgUtil::StateGraph * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* rg=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setStateGraphLeft(osgUtil::StateGraph *)");
		}
		self->setStateGraphLeft(rg);

		return 0;
	}

	// osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft()
	static int _bind_getStateGraphLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateGraphLeft_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft() function, expected prototype:\nosgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft()");
		}
		osgUtil::StateGraph * lret = self->getStateGraphLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft() const
	static int _bind_getStateGraphLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateGraphLeft_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft() const function, expected prototype:\nconst osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphLeft() const");
		}
		const osgUtil::StateGraph * lret = self->getStateGraphLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getStateGraphLeft
	static int _bind_getStateGraphLeft(lua_State *L) {
		if (_lg_typecheck_getStateGraphLeft_overload_1(L)) return _bind_getStateGraphLeft_overload_1(L);
		if (_lg_typecheck_getStateGraphLeft_overload_2(L)) return _bind_getStateGraphLeft_overload_2(L);

		luaL_error(L, "error in function getStateGraphLeft, cannot match any of the overloads for function getStateGraphLeft:\n  getStateGraphLeft()\n  getStateGraphLeft()\n");
		return 0;
	}

	// void osgUtil::SceneView::setStateGraphRight(osgUtil::StateGraph * rg)
	static int _bind_setStateGraphRight(lua_State *L) {
		if (!_lg_typecheck_setStateGraphRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setStateGraphRight(osgUtil::StateGraph * rg) function, expected prototype:\nvoid osgUtil::SceneView::setStateGraphRight(osgUtil::StateGraph * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* rg=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setStateGraphRight(osgUtil::StateGraph *)");
		}
		self->setStateGraphRight(rg);

		return 0;
	}

	// osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight()
	static int _bind_getStateGraphRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateGraphRight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight() function, expected prototype:\nosgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight()");
		}
		osgUtil::StateGraph * lret = self->getStateGraphRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight() const
	static int _bind_getStateGraphRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateGraphRight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight() const function, expected prototype:\nconst osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::StateGraph * osgUtil::SceneView::getStateGraphRight() const");
		}
		const osgUtil::StateGraph * lret = self->getStateGraphRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getStateGraphRight
	static int _bind_getStateGraphRight(lua_State *L) {
		if (_lg_typecheck_getStateGraphRight_overload_1(L)) return _bind_getStateGraphRight_overload_1(L);
		if (_lg_typecheck_getStateGraphRight_overload_2(L)) return _bind_getStateGraphRight_overload_2(L);

		luaL_error(L, "error in function getStateGraphRight, cannot match any of the overloads for function getStateGraphRight:\n  getStateGraphRight()\n  getStateGraphRight()\n");
		return 0;
	}

	// void osgUtil::SceneView::setRenderStage(osgUtil::RenderStage * rs)
	static int _bind_setRenderStage(lua_State *L) {
		if (!_lg_typecheck_setRenderStage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setRenderStage(osgUtil::RenderStage * rs) function, expected prototype:\nvoid osgUtil::SceneView::setRenderStage(osgUtil::RenderStage * rs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setRenderStage(osgUtil::RenderStage *)");
		}
		self->setRenderStage(rs);

		return 0;
	}

	// osgUtil::RenderStage * osgUtil::SceneView::getRenderStage()
	static int _bind_getRenderStage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderStage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::SceneView::getRenderStage() function, expected prototype:\nosgUtil::RenderStage * osgUtil::SceneView::getRenderStage()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::SceneView::getRenderStage()");
		}
		osgUtil::RenderStage * lret = self->getRenderStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderStage * osgUtil::SceneView::getRenderStage() const
	static int _bind_getRenderStage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderStage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderStage * osgUtil::SceneView::getRenderStage() const function, expected prototype:\nconst osgUtil::RenderStage * osgUtil::SceneView::getRenderStage() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderStage * osgUtil::SceneView::getRenderStage() const");
		}
		const osgUtil::RenderStage * lret = self->getRenderStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getRenderStage
	static int _bind_getRenderStage(lua_State *L) {
		if (_lg_typecheck_getRenderStage_overload_1(L)) return _bind_getRenderStage_overload_1(L);
		if (_lg_typecheck_getRenderStage_overload_2(L)) return _bind_getRenderStage_overload_2(L);

		luaL_error(L, "error in function getRenderStage, cannot match any of the overloads for function getRenderStage:\n  getRenderStage()\n  getRenderStage()\n");
		return 0;
	}

	// void osgUtil::SceneView::setRenderStageLeft(osgUtil::RenderStage * rs)
	static int _bind_setRenderStageLeft(lua_State *L) {
		if (!_lg_typecheck_setRenderStageLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setRenderStageLeft(osgUtil::RenderStage * rs) function, expected prototype:\nvoid osgUtil::SceneView::setRenderStageLeft(osgUtil::RenderStage * rs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setRenderStageLeft(osgUtil::RenderStage *)");
		}
		self->setRenderStageLeft(rs);

		return 0;
	}

	// osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft()
	static int _bind_getRenderStageLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderStageLeft_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft() function, expected prototype:\nosgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft()");
		}
		osgUtil::RenderStage * lret = self->getRenderStageLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft() const
	static int _bind_getRenderStageLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderStageLeft_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft() const function, expected prototype:\nconst osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageLeft() const");
		}
		const osgUtil::RenderStage * lret = self->getRenderStageLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getRenderStageLeft
	static int _bind_getRenderStageLeft(lua_State *L) {
		if (_lg_typecheck_getRenderStageLeft_overload_1(L)) return _bind_getRenderStageLeft_overload_1(L);
		if (_lg_typecheck_getRenderStageLeft_overload_2(L)) return _bind_getRenderStageLeft_overload_2(L);

		luaL_error(L, "error in function getRenderStageLeft, cannot match any of the overloads for function getRenderStageLeft:\n  getRenderStageLeft()\n  getRenderStageLeft()\n");
		return 0;
	}

	// void osgUtil::SceneView::setRenderStageRight(osgUtil::RenderStage * rs)
	static int _bind_setRenderStageRight(lua_State *L) {
		if (!_lg_typecheck_setRenderStageRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setRenderStageRight(osgUtil::RenderStage * rs) function, expected prototype:\nvoid osgUtil::SceneView::setRenderStageRight(osgUtil::RenderStage * rs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setRenderStageRight(osgUtil::RenderStage *)");
		}
		self->setRenderStageRight(rs);

		return 0;
	}

	// osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight()
	static int _bind_getRenderStageRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderStageRight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight() function, expected prototype:\nosgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight()");
		}
		osgUtil::RenderStage * lret = self->getRenderStageRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight() const
	static int _bind_getRenderStageRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderStageRight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight() const function, expected prototype:\nconst osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderStage * osgUtil::SceneView::getRenderStageRight() const");
		}
		const osgUtil::RenderStage * lret = self->getRenderStageRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getRenderStageRight
	static int _bind_getRenderStageRight(lua_State *L) {
		if (_lg_typecheck_getRenderStageRight_overload_1(L)) return _bind_getRenderStageRight_overload_1(L);
		if (_lg_typecheck_getRenderStageRight_overload_2(L)) return _bind_getRenderStageRight_overload_2(L);

		luaL_error(L, "error in function getRenderStageRight, cannot match any of the overloads for function getRenderStageRight:\n  getRenderStageRight()\n  getRenderStageRight()\n");
		return 0;
	}

	// void osgUtil::SceneView::collateReferencesToDependentCameras()
	static int _bind_collateReferencesToDependentCameras(lua_State *L) {
		if (!_lg_typecheck_collateReferencesToDependentCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::collateReferencesToDependentCameras() function, expected prototype:\nvoid osgUtil::SceneView::collateReferencesToDependentCameras()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::collateReferencesToDependentCameras()");
		}
		self->collateReferencesToDependentCameras();

		return 0;
	}

	// void osgUtil::SceneView::clearReferencesToDependentCameras()
	static int _bind_clearReferencesToDependentCameras(lua_State *L) {
		if (!_lg_typecheck_clearReferencesToDependentCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::clearReferencesToDependentCameras() function, expected prototype:\nvoid osgUtil::SceneView::clearReferencesToDependentCameras()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::clearReferencesToDependentCameras()");
		}
		self->clearReferencesToDependentCameras();

		return 0;
	}

	// void osgUtil::SceneView::setDrawBufferValue(unsigned int drawBufferValue)
	static int _bind_setDrawBufferValue(lua_State *L) {
		if (!_lg_typecheck_setDrawBufferValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setDrawBufferValue(unsigned int drawBufferValue) function, expected prototype:\nvoid osgUtil::SceneView::setDrawBufferValue(unsigned int drawBufferValue)\nClass arguments details:\n");
		}

		unsigned int drawBufferValue=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setDrawBufferValue(unsigned int)");
		}
		self->setDrawBufferValue(drawBufferValue);

		return 0;
	}

	// unsigned int osgUtil::SceneView::getDrawBufferValue() const
	static int _bind_getDrawBufferValue(lua_State *L) {
		if (!_lg_typecheck_getDrawBufferValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::SceneView::getDrawBufferValue() const function, expected prototype:\nunsigned int osgUtil::SceneView::getDrawBufferValue() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::SceneView::getDrawBufferValue() const");
		}
		unsigned int lret = self->getDrawBufferValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)
	static int _bind_setFusionDistance(lua_State *L) {
		if (!_lg_typecheck_setFusionDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f) function, expected prototype:\nvoid osgUtil::SceneView::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::SceneView::FusionDistanceMode mode=(osgUtil::SceneView::FusionDistanceMode)lua_tointeger(L,2);
		float value=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setFusionDistance(osgUtil::SceneView::FusionDistanceMode, float)");
		}
		self->setFusionDistance(mode, value);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgUtil::SceneView::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgUtil::SceneView::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgUtil::SceneView::getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgUtil::SceneView::getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::SceneView::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::SceneView::getFusionDistanceValue() const function, expected prototype:\nfloat osgUtil::SceneView::getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::SceneView::getFusionDistanceValue() const");
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::setPrioritizeTextures(bool pt)
	static int _bind_setPrioritizeTextures(lua_State *L) {
		if (!_lg_typecheck_setPrioritizeTextures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setPrioritizeTextures(bool pt) function, expected prototype:\nvoid osgUtil::SceneView::setPrioritizeTextures(bool pt)\nClass arguments details:\n");
		}

		bool pt=(bool)(lua_toboolean(L,2)==1);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setPrioritizeTextures(bool)");
		}
		self->setPrioritizeTextures(pt);

		return 0;
	}

	// bool osgUtil::SceneView::getPrioritizeTextures() const
	static int _bind_getPrioritizeTextures(lua_State *L) {
		if (!_lg_typecheck_getPrioritizeTextures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getPrioritizeTextures() const function, expected prototype:\nbool osgUtil::SceneView::getPrioritizeTextures() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getPrioritizeTextures() const");
		}
		bool lret = self->getPrioritizeTextures();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::setComputeStereoMatricesCallback(osgUtil::SceneView::ComputeStereoMatricesCallback * callback)
	static int _bind_setComputeStereoMatricesCallback(lua_State *L) {
		if (!_lg_typecheck_setComputeStereoMatricesCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setComputeStereoMatricesCallback(osgUtil::SceneView::ComputeStereoMatricesCallback * callback) function, expected prototype:\nvoid osgUtil::SceneView::setComputeStereoMatricesCallback(osgUtil::SceneView::ComputeStereoMatricesCallback * callback)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::SceneView::ComputeStereoMatricesCallback* callback=(Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setComputeStereoMatricesCallback(osgUtil::SceneView::ComputeStereoMatricesCallback *)");
		}
		self->setComputeStereoMatricesCallback(callback);

		return 0;
	}

	// osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback()
	static int _bind_getComputeStereoMatricesCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getComputeStereoMatricesCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback() function, expected prototype:\nosgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback()");
		}
		osgUtil::SceneView::ComputeStereoMatricesCallback * lret = self->getComputeStereoMatricesCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback() const
	static int _bind_getComputeStereoMatricesCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getComputeStereoMatricesCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback() const function, expected prototype:\nconst osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::SceneView::ComputeStereoMatricesCallback * osgUtil::SceneView::getComputeStereoMatricesCallback() const");
		}
		const osgUtil::SceneView::ComputeStereoMatricesCallback * lret = self->getComputeStereoMatricesCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::getComputeStereoMatricesCallback
	static int _bind_getComputeStereoMatricesCallback(lua_State *L) {
		if (_lg_typecheck_getComputeStereoMatricesCallback_overload_1(L)) return _bind_getComputeStereoMatricesCallback_overload_1(L);
		if (_lg_typecheck_getComputeStereoMatricesCallback_overload_2(L)) return _bind_getComputeStereoMatricesCallback_overload_2(L);

		luaL_error(L, "error in function getComputeStereoMatricesCallback, cannot match any of the overloads for function getComputeStereoMatricesCallback:\n  getComputeStereoMatricesCallback()\n  getComputeStereoMatricesCallback()\n");
		return 0;
	}

	// bool osgUtil::SceneView::projectWindowIntoObject(const osg::Vec3f & window, osg::Vec3f & object) const
	static int _bind_projectWindowIntoObject(lua_State *L) {
		if (!_lg_typecheck_projectWindowIntoObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::projectWindowIntoObject(const osg::Vec3f & window, osg::Vec3f & object) const function, expected prototype:\nbool osgUtil::SceneView::projectWindowIntoObject(const osg::Vec3f & window, osg::Vec3f & object) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* window_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !window_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg window in osgUtil::SceneView::projectWindowIntoObject function");
		}
		const osg::Vec3f & window=*window_ptr;
		osg::Vec3f* object_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !object_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg object in osgUtil::SceneView::projectWindowIntoObject function");
		}
		osg::Vec3f & object=*object_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::projectWindowIntoObject(const osg::Vec3f &, osg::Vec3f &) const");
		}
		bool lret = self->projectWindowIntoObject(window, object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::SceneView::projectWindowXYIntoObject(int x, int y, osg::Vec3f & near_point, osg::Vec3f & far_point) const
	static int _bind_projectWindowXYIntoObject(lua_State *L) {
		if (!_lg_typecheck_projectWindowXYIntoObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::projectWindowXYIntoObject(int x, int y, osg::Vec3f & near_point, osg::Vec3f & far_point) const function, expected prototype:\nbool osgUtil::SceneView::projectWindowXYIntoObject(int x, int y, osg::Vec3f & near_point, osg::Vec3f & far_point) const\nClass arguments details:\narg 3 ID = 92303204\narg 4 ID = 92303204\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		osg::Vec3f* near_point_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !near_point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg near_point in osgUtil::SceneView::projectWindowXYIntoObject function");
		}
		osg::Vec3f & near_point=*near_point_ptr;
		osg::Vec3f* far_point_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !far_point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg far_point in osgUtil::SceneView::projectWindowXYIntoObject function");
		}
		osg::Vec3f & far_point=*far_point_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::projectWindowXYIntoObject(int, int, osg::Vec3f &, osg::Vec3f &) const");
		}
		bool lret = self->projectWindowXYIntoObject(x, y, near_point, far_point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::SceneView::projectObjectIntoWindow(const osg::Vec3f & object, osg::Vec3f & window) const
	static int _bind_projectObjectIntoWindow(lua_State *L) {
		if (!_lg_typecheck_projectObjectIntoWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::projectObjectIntoWindow(const osg::Vec3f & object, osg::Vec3f & window) const function, expected prototype:\nbool osgUtil::SceneView::projectObjectIntoWindow(const osg::Vec3f & object, osg::Vec3f & window) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* object_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !object_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg object in osgUtil::SceneView::projectObjectIntoWindow function");
		}
		const osg::Vec3f & object=*object_ptr;
		osg::Vec3f* window_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !window_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg window in osgUtil::SceneView::projectObjectIntoWindow function");
		}
		osg::Vec3f & window=*window_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::projectObjectIntoWindow(const osg::Vec3f &, osg::Vec3f &) const");
		}
		bool lret = self->projectObjectIntoWindow(object, window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::setFrameStamp(osg::FrameStamp * fs)
	static int _bind_setFrameStamp(lua_State *L) {
		if (!_lg_typecheck_setFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setFrameStamp(osg::FrameStamp * fs) function, expected prototype:\nvoid osgUtil::SceneView::setFrameStamp(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setFrameStamp(osg::FrameStamp *)");
		}
		self->setFrameStamp(fs);

		return 0;
	}

	// const osg::FrameStamp * osgUtil::SceneView::getFrameStamp() const
	static int _bind_getFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osgUtil::SceneView::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osgUtil::SceneView::getFrameStamp() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osgUtil::SceneView::getFrameStamp() const");
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeLeftEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeLeftEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeLeftEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::computeLeftEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeLeftEyeProjection(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeView(const osg::Matrixd & view) const
	static int _bind_computeLeftEyeView(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeLeftEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeLeftEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::computeLeftEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeLeftEyeView(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeRightEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeRightEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeRightEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeRightEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::computeRightEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeRightEyeProjection(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeRightEyeView(const osg::Matrixd & view) const
	static int _bind_computeRightEyeView(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeRightEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeRightEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::computeRightEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeRightEyeView(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const
	static int _bind_computeLeftEyeProjectionImplementation(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeProjectionImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::computeLeftEyeProjectionImplementation function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeLeftEyeProjectionImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeProjectionImplementation(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd & view) const
	static int _bind_computeLeftEyeViewImplementation(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeViewImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::computeLeftEyeViewImplementation function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeLeftEyeViewImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeLeftEyeViewImplementation(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const
	static int _bind_computeRightEyeProjectionImplementation(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeProjectionImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::computeRightEyeProjectionImplementation function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeRightEyeProjectionImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeProjectionImplementation(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd & view) const
	static int _bind_computeRightEyeViewImplementation(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeViewImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::computeRightEyeViewImplementation function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::computeRightEyeViewImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->computeRightEyeViewImplementation(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings)
	static int _bind_inheritCullSettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_inheritCullSettings_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n");
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osgUtil::SceneView::inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings &)");
		}
		self->inheritCullSettings(settings);

		return 0;
	}

	// void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_inheritCullSettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_inheritCullSettings_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osgUtil::SceneView::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n");
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osgUtil::SceneView::inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::inheritCullSettings(const osg::CullSettings &, unsigned int)");
		}
		self->inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::inheritCullSettings
	static int _bind_inheritCullSettings(lua_State *L) {
		if (_lg_typecheck_inheritCullSettings_overload_1(L)) return _bind_inheritCullSettings_overload_1(L);
		if (_lg_typecheck_inheritCullSettings_overload_2(L)) return _bind_inheritCullSettings_overload_2(L);

		luaL_error(L, "error in function inheritCullSettings, cannot match any of the overloads for function inheritCullSettings:\n  inheritCullSettings(const osg::CullSettings &)\n  inheritCullSettings(const osg::CullSettings &, unsigned int)\n");
		return 0;
	}

	// void osgUtil::SceneView::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::init() function, expected prototype:\nvoid osgUtil::SceneView::init()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::init()");
		}
		self->init();

		return 0;
	}

	// void osgUtil::SceneView::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::update() function, expected prototype:\nvoid osgUtil::SceneView::update()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::update()");
		}
		self->update();

		return 0;
	}

	// void osgUtil::SceneView::cull()
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::cull() function, expected prototype:\nvoid osgUtil::SceneView::cull()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::cull()");
		}
		self->cull();

		return 0;
	}

	// void osgUtil::SceneView::draw()
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::draw() function, expected prototype:\nvoid osgUtil::SceneView::draw()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::draw()");
		}
		self->draw();

		return 0;
	}

	// unsigned int osgUtil::SceneView::getDynamicObjectCount() const
	static int _bind_getDynamicObjectCount(lua_State *L) {
		if (!_lg_typecheck_getDynamicObjectCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::SceneView::getDynamicObjectCount() const function, expected prototype:\nunsigned int osgUtil::SceneView::getDynamicObjectCount() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::SceneView::getDynamicObjectCount() const");
		}
		unsigned int lret = self->getDynamicObjectCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::releaseAllGLObjects()
	static int _bind_releaseAllGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseAllGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::releaseAllGLObjects() function, expected prototype:\nvoid osgUtil::SceneView::releaseAllGLObjects()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::releaseAllGLObjects()");
		}
		self->releaseAllGLObjects();

		return 0;
	}

	// void osgUtil::SceneView::flushAllDeletedGLObjects()
	static int _bind_flushAllDeletedGLObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::flushAllDeletedGLObjects() function, expected prototype:\nvoid osgUtil::SceneView::flushAllDeletedGLObjects()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::flushAllDeletedGLObjects()");
		}
		self->flushAllDeletedGLObjects();

		return 0;
	}

	// void osgUtil::SceneView::flushDeletedGLObjects(double & availableTime)
	static int _bind_flushDeletedGLObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::flushDeletedGLObjects(double & availableTime) function, expected prototype:\nvoid osgUtil::SceneView::flushDeletedGLObjects(double & availableTime)\nClass arguments details:\n");
		}

		double availableTime=(double)lua_tonumber(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::flushDeletedGLObjects(double &)");
		}
		self->flushDeletedGLObjects(availableTime);

		return 0;
	}

	// bool osgUtil::SceneView::getStats(osgUtil::Statistics & primStats)
	static int _bind_getStats(lua_State *L) {
		if (!_lg_typecheck_getStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getStats(osgUtil::Statistics & primStats) function, expected prototype:\nbool osgUtil::SceneView::getStats(osgUtil::Statistics & primStats)\nClass arguments details:\narg 1 ID = 95996950\n");
		}

		osgUtil::Statistics* primStats_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !primStats_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primStats in osgUtil::SceneView::getStats function");
		}
		osgUtil::Statistics & primStats=*primStats_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getStats(osgUtil::Statistics &)");
		}
		bool lret = self->getStats(primStats);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::setAutomaticFlush(bool automaticFlush)
	static int _bind_setAutomaticFlush(lua_State *L) {
		if (!_lg_typecheck_setAutomaticFlush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::setAutomaticFlush(bool automaticFlush) function, expected prototype:\nvoid osgUtil::SceneView::setAutomaticFlush(bool automaticFlush)\nClass arguments details:\n");
		}

		bool automaticFlush=(bool)(lua_toboolean(L,2)==1);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::setAutomaticFlush(bool)");
		}
		self->setAutomaticFlush(automaticFlush);

		return 0;
	}

	// bool osgUtil::SceneView::getAutomaticFlush() const
	static int _bind_getAutomaticFlush(lua_State *L) {
		if (!_lg_typecheck_getAutomaticFlush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::getAutomaticFlush() const function, expected prototype:\nbool osgUtil::SceneView::getAutomaticFlush() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::getAutomaticFlush() const");
		}
		bool lret = self->getAutomaticFlush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::SceneView::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_setName(const std::string & name) function, expected prototype:\nvoid osgUtil::SceneView::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_setName(const std::string &)");
		}
		self->SceneView::setName(name);

		return 0;
	}

	// void osgUtil::SceneView::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_computeDataVariance() function, expected prototype:\nvoid osgUtil::SceneView::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_computeDataVariance()");
		}
		self->SceneView::computeDataVariance();

		return 0;
	}

	// void osgUtil::SceneView::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::SceneView::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_setUserData(osg::Referenced *)");
		}
		self->SceneView::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::SceneView::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::SceneView::base_getUserData() function, expected prototype:\nosg::Referenced * osgUtil::SceneView::base_getUserData()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::SceneView::base_getUserData()");
		}
		osg::Referenced * lret = self->SceneView::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::SceneView::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::SceneView::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::SceneView::base_getUserData() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::SceneView::base_getUserData() const");
		}
		const osg::Referenced * lret = self->SceneView::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::SceneView::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgUtil::SceneView::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgUtil::SceneView::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_releaseGLObjects(osg::State *) const");
		}
		self->SceneView::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgUtil::SceneView::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::SceneView::base_cloneType() const function, expected prototype:\nosg::Object * osgUtil::SceneView::base_cloneType() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::SceneView::base_cloneType() const");
		}
		osg::Object * lret = self->SceneView::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::SceneView::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::SceneView::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::SceneView::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::SceneView::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::SceneView::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->SceneView::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::SceneView::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::SceneView::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::SceneView::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::SceneView::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->SceneView::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::SceneView::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SceneView::base_libraryName() const function, expected prototype:\nconst char * osgUtil::SceneView::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SceneView::base_libraryName() const");
		}
		const char * lret = self->SceneView::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::SceneView::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::SceneView::base_className() const function, expected prototype:\nconst char * osgUtil::SceneView::base_className() const\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::SceneView::base_className() const");
		}
		const char * lret = self->SceneView::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::SceneView::base_setDefaults()
	static int _bind_base_setDefaults_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_setDefaults() function, expected prototype:\nvoid osgUtil::SceneView::base_setDefaults()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_setDefaults()");
		}
		self->SceneView::setDefaults();

		return 0;
	}

	// void osgUtil::SceneView::base_setDefaults(unsigned int options)
	static int _bind_base_setDefaults_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_setDefaults(unsigned int options) function, expected prototype:\nvoid osgUtil::SceneView::base_setDefaults(unsigned int options)\nClass arguments details:\n");
		}

		unsigned int options=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_setDefaults(unsigned int)");
		}
		self->SceneView::setDefaults(options);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::base_setDefaults
	static int _bind_base_setDefaults(lua_State *L) {
		if (_lg_typecheck_base_setDefaults_overload_1(L)) return _bind_base_setDefaults_overload_1(L);
		if (_lg_typecheck_base_setDefaults_overload_2(L)) return _bind_base_setDefaults_overload_2(L);

		luaL_error(L, "error in function base_setDefaults, cannot match any of the overloads for function base_setDefaults:\n  base_setDefaults()\n  base_setDefaults(unsigned int)\n");
		return 0;
	}

	// osg::Matrixd osgUtil::SceneView::base_computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const
	static int _bind_base_computeLeftEyeProjectionImplementation(lua_State *L) {
		if (!_lg_typecheck_base_computeLeftEyeProjectionImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::base_computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::base_computeLeftEyeProjectionImplementation(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::base_computeLeftEyeProjectionImplementation function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::base_computeLeftEyeProjectionImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->SceneView::computeLeftEyeProjectionImplementation(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::base_computeLeftEyeViewImplementation(const osg::Matrixd & view) const
	static int _bind_base_computeLeftEyeViewImplementation(lua_State *L) {
		if (!_lg_typecheck_base_computeLeftEyeViewImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::base_computeLeftEyeViewImplementation(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::base_computeLeftEyeViewImplementation(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::base_computeLeftEyeViewImplementation function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::base_computeLeftEyeViewImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->SceneView::computeLeftEyeViewImplementation(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::base_computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const
	static int _bind_base_computeRightEyeProjectionImplementation(lua_State *L) {
		if (!_lg_typecheck_base_computeRightEyeProjectionImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::base_computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::base_computeRightEyeProjectionImplementation(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::base_computeRightEyeProjectionImplementation function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::base_computeRightEyeProjectionImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->SceneView::computeRightEyeProjectionImplementation(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::base_computeRightEyeViewImplementation(const osg::Matrixd & view) const
	static int _bind_base_computeRightEyeViewImplementation(lua_State *L) {
		if (!_lg_typecheck_base_computeRightEyeViewImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::base_computeRightEyeViewImplementation(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::base_computeRightEyeViewImplementation(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::base_computeRightEyeViewImplementation function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::base_computeRightEyeViewImplementation(const osg::Matrixd &) const");
		}
		osg::Matrixd stack_lret = self->SceneView::computeRightEyeViewImplementation(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings)
	static int _bind_base_inheritCullSettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n");
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osgUtil::SceneView::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings &)");
		}
		self->SceneView::inheritCullSettings(settings);

		return 0;
	}

	// void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_base_inheritCullSettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n");
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osgUtil::SceneView::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_inheritCullSettings(const osg::CullSettings &, unsigned int)");
		}
		self->SceneView::inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// Overload binder for osgUtil::SceneView::base_inheritCullSettings
	static int _bind_base_inheritCullSettings(lua_State *L) {
		if (_lg_typecheck_base_inheritCullSettings_overload_1(L)) return _bind_base_inheritCullSettings_overload_1(L);
		if (_lg_typecheck_base_inheritCullSettings_overload_2(L)) return _bind_base_inheritCullSettings_overload_2(L);

		luaL_error(L, "error in function base_inheritCullSettings, cannot match any of the overloads for function base_inheritCullSettings:\n  base_inheritCullSettings(const osg::CullSettings &)\n  base_inheritCullSettings(const osg::CullSettings &, unsigned int)\n");
		return 0;
	}

	// void osgUtil::SceneView::base_init()
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_init() function, expected prototype:\nvoid osgUtil::SceneView::base_init()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_init()");
		}
		self->SceneView::init();

		return 0;
	}

	// void osgUtil::SceneView::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_update() function, expected prototype:\nvoid osgUtil::SceneView::base_update()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_update()");
		}
		self->SceneView::update();

		return 0;
	}

	// void osgUtil::SceneView::base_cull()
	static int _bind_base_cull(lua_State *L) {
		if (!_lg_typecheck_base_cull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_cull() function, expected prototype:\nvoid osgUtil::SceneView::base_cull()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_cull()");
		}
		self->SceneView::cull();

		return 0;
	}

	// void osgUtil::SceneView::base_draw()
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_draw() function, expected prototype:\nvoid osgUtil::SceneView::base_draw()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_draw()");
		}
		self->SceneView::draw();

		return 0;
	}

	// void osgUtil::SceneView::base_releaseAllGLObjects()
	static int _bind_base_releaseAllGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseAllGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_releaseAllGLObjects() function, expected prototype:\nvoid osgUtil::SceneView::base_releaseAllGLObjects()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_releaseAllGLObjects()");
		}
		self->SceneView::releaseAllGLObjects();

		return 0;
	}

	// void osgUtil::SceneView::base_flushAllDeletedGLObjects()
	static int _bind_base_flushAllDeletedGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_flushAllDeletedGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_flushAllDeletedGLObjects() function, expected prototype:\nvoid osgUtil::SceneView::base_flushAllDeletedGLObjects()\nClass arguments details:\n");
		}


		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_flushAllDeletedGLObjects()");
		}
		self->SceneView::flushAllDeletedGLObjects();

		return 0;
	}

	// void osgUtil::SceneView::base_flushDeletedGLObjects(double & availableTime)
	static int _bind_base_flushDeletedGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_flushDeletedGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::base_flushDeletedGLObjects(double & availableTime) function, expected prototype:\nvoid osgUtil::SceneView::base_flushDeletedGLObjects(double & availableTime)\nClass arguments details:\n");
		}

		double availableTime=(double)lua_tonumber(L,2);

		osgUtil::SceneView* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::base_flushDeletedGLObjects(double &)");
		}
		self->SceneView::flushDeletedGLObjects(availableTime);

		return 0;
	}


	// Operator binds:

};

osgUtil::SceneView* LunaTraits< osgUtil::SceneView >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_SceneView::_bind_ctor(L);
}

void LunaTraits< osgUtil::SceneView >::_bind_dtor(osgUtil::SceneView* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::SceneView >::className[] = "SceneView";
const char LunaTraits< osgUtil::SceneView >::fullName[] = "osgUtil::SceneView";
const char LunaTraits< osgUtil::SceneView >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SceneView >::parents[] = {"osg.Object", "osg.CullSettings", 0};
const int LunaTraits< osgUtil::SceneView >::hash = 7563323;
const int LunaTraits< osgUtil::SceneView >::uniqueIDs[] = {50169651, 31435107,0};

luna_RegType LunaTraits< osgUtil::SceneView >::methods[] = {
	{"cloneType", &luna_wrapper_osgUtil_SceneView::_bind_cloneType},
	{"clone", &luna_wrapper_osgUtil_SceneView::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgUtil_SceneView::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgUtil_SceneView::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_SceneView::_bind_className},
	{"setDefaults", &luna_wrapper_osgUtil_SceneView::_bind_setDefaults},
	{"setCamera", &luna_wrapper_osgUtil_SceneView::_bind_setCamera},
	{"getCamera", &luna_wrapper_osgUtil_SceneView::_bind_getCamera},
	{"setSceneData", &luna_wrapper_osgUtil_SceneView::_bind_setSceneData},
	{"getSceneData", &luna_wrapper_osgUtil_SceneView::_bind_getSceneData},
	{"getNumSceneData", &luna_wrapper_osgUtil_SceneView::_bind_getNumSceneData},
	{"setViewport", &luna_wrapper_osgUtil_SceneView::_bind_setViewport},
	{"getViewport", &luna_wrapper_osgUtil_SceneView::_bind_getViewport},
	{"setDisplaySettings", &luna_wrapper_osgUtil_SceneView::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osgUtil_SceneView::_bind_getDisplaySettings},
	{"setClearColor", &luna_wrapper_osgUtil_SceneView::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osgUtil_SceneView::_bind_getClearColor},
	{"setRedrawInterlacedStereoStencilMask", &luna_wrapper_osgUtil_SceneView::_bind_setRedrawInterlacedStereoStencilMask},
	{"getRedrawInterlacedStereoStencilMask", &luna_wrapper_osgUtil_SceneView::_bind_getRedrawInterlacedStereoStencilMask},
	{"setGlobalStateSet", &luna_wrapper_osgUtil_SceneView::_bind_setGlobalStateSet},
	{"getGlobalStateSet", &luna_wrapper_osgUtil_SceneView::_bind_getGlobalStateSet},
	{"setSecondaryStateSet", &luna_wrapper_osgUtil_SceneView::_bind_setSecondaryStateSet},
	{"getSecondaryStateSet", &luna_wrapper_osgUtil_SceneView::_bind_getSecondaryStateSet},
	{"setLocalStateSet", &luna_wrapper_osgUtil_SceneView::_bind_setLocalStateSet},
	{"getLocalStateSet", &luna_wrapper_osgUtil_SceneView::_bind_getLocalStateSet},
	{"setActiveUniforms", &luna_wrapper_osgUtil_SceneView::_bind_setActiveUniforms},
	{"getActiveUniforms", &luna_wrapper_osgUtil_SceneView::_bind_getActiveUniforms},
	{"updateUniforms", &luna_wrapper_osgUtil_SceneView::_bind_updateUniforms},
	{"setLightingMode", &luna_wrapper_osgUtil_SceneView::_bind_setLightingMode},
	{"getLightingMode", &luna_wrapper_osgUtil_SceneView::_bind_getLightingMode},
	{"setLight", &luna_wrapper_osgUtil_SceneView::_bind_setLight},
	{"getLight", &luna_wrapper_osgUtil_SceneView::_bind_getLight},
	{"setState", &luna_wrapper_osgUtil_SceneView::_bind_setState},
	{"getState", &luna_wrapper_osgUtil_SceneView::_bind_getState},
	{"setView", &luna_wrapper_osgUtil_SceneView::_bind_setView},
	{"getView", &luna_wrapper_osgUtil_SceneView::_bind_getView},
	{"setRenderInfo", &luna_wrapper_osgUtil_SceneView::_bind_setRenderInfo},
	{"getRenderInfo", &luna_wrapper_osgUtil_SceneView::_bind_getRenderInfo},
	{"setProjectionMatrix", &luna_wrapper_osgUtil_SceneView::_bind_setProjectionMatrix},
	{"setProjectionMatrixAsOrtho", &luna_wrapper_osgUtil_SceneView::_bind_setProjectionMatrixAsOrtho},
	{"setProjectionMatrixAsOrtho2D", &luna_wrapper_osgUtil_SceneView::_bind_setProjectionMatrixAsOrtho2D},
	{"setProjectionMatrixAsFrustum", &luna_wrapper_osgUtil_SceneView::_bind_setProjectionMatrixAsFrustum},
	{"setProjectionMatrixAsPerspective", &luna_wrapper_osgUtil_SceneView::_bind_setProjectionMatrixAsPerspective},
	{"getProjectionMatrix", &luna_wrapper_osgUtil_SceneView::_bind_getProjectionMatrix},
	{"getProjectionMatrixAsOrtho", &luna_wrapper_osgUtil_SceneView::_bind_getProjectionMatrixAsOrtho},
	{"getProjectionMatrixAsFrustum", &luna_wrapper_osgUtil_SceneView::_bind_getProjectionMatrixAsFrustum},
	{"getProjectionMatrixAsPerspective", &luna_wrapper_osgUtil_SceneView::_bind_getProjectionMatrixAsPerspective},
	{"setViewMatrix", &luna_wrapper_osgUtil_SceneView::_bind_setViewMatrix},
	{"setViewMatrixAsLookAt", &luna_wrapper_osgUtil_SceneView::_bind_setViewMatrixAsLookAt},
	{"getViewMatrix", &luna_wrapper_osgUtil_SceneView::_bind_getViewMatrix},
	{"getViewMatrixAsLookAt", &luna_wrapper_osgUtil_SceneView::_bind_getViewMatrixAsLookAt},
	{"setInitVisitor", &luna_wrapper_osgUtil_SceneView::_bind_setInitVisitor},
	{"getInitVisitor", &luna_wrapper_osgUtil_SceneView::_bind_getInitVisitor},
	{"setUpdateVisitor", &luna_wrapper_osgUtil_SceneView::_bind_setUpdateVisitor},
	{"getUpdateVisitor", &luna_wrapper_osgUtil_SceneView::_bind_getUpdateVisitor},
	{"setCullVisitor", &luna_wrapper_osgUtil_SceneView::_bind_setCullVisitor},
	{"getCullVisitor", &luna_wrapper_osgUtil_SceneView::_bind_getCullVisitor},
	{"setCullVisitorLeft", &luna_wrapper_osgUtil_SceneView::_bind_setCullVisitorLeft},
	{"getCullVisitorLeft", &luna_wrapper_osgUtil_SceneView::_bind_getCullVisitorLeft},
	{"setCullVisitorRight", &luna_wrapper_osgUtil_SceneView::_bind_setCullVisitorRight},
	{"getCullVisitorRight", &luna_wrapper_osgUtil_SceneView::_bind_getCullVisitorRight},
	{"setCollectOccludersVisitor", &luna_wrapper_osgUtil_SceneView::_bind_setCollectOccludersVisitor},
	{"getCollectOccludersVisitor", &luna_wrapper_osgUtil_SceneView::_bind_getCollectOccludersVisitor},
	{"setStateGraph", &luna_wrapper_osgUtil_SceneView::_bind_setStateGraph},
	{"getStateGraph", &luna_wrapper_osgUtil_SceneView::_bind_getStateGraph},
	{"setStateGraphLeft", &luna_wrapper_osgUtil_SceneView::_bind_setStateGraphLeft},
	{"getStateGraphLeft", &luna_wrapper_osgUtil_SceneView::_bind_getStateGraphLeft},
	{"setStateGraphRight", &luna_wrapper_osgUtil_SceneView::_bind_setStateGraphRight},
	{"getStateGraphRight", &luna_wrapper_osgUtil_SceneView::_bind_getStateGraphRight},
	{"setRenderStage", &luna_wrapper_osgUtil_SceneView::_bind_setRenderStage},
	{"getRenderStage", &luna_wrapper_osgUtil_SceneView::_bind_getRenderStage},
	{"setRenderStageLeft", &luna_wrapper_osgUtil_SceneView::_bind_setRenderStageLeft},
	{"getRenderStageLeft", &luna_wrapper_osgUtil_SceneView::_bind_getRenderStageLeft},
	{"setRenderStageRight", &luna_wrapper_osgUtil_SceneView::_bind_setRenderStageRight},
	{"getRenderStageRight", &luna_wrapper_osgUtil_SceneView::_bind_getRenderStageRight},
	{"collateReferencesToDependentCameras", &luna_wrapper_osgUtil_SceneView::_bind_collateReferencesToDependentCameras},
	{"clearReferencesToDependentCameras", &luna_wrapper_osgUtil_SceneView::_bind_clearReferencesToDependentCameras},
	{"setDrawBufferValue", &luna_wrapper_osgUtil_SceneView::_bind_setDrawBufferValue},
	{"getDrawBufferValue", &luna_wrapper_osgUtil_SceneView::_bind_getDrawBufferValue},
	{"setFusionDistance", &luna_wrapper_osgUtil_SceneView::_bind_setFusionDistance},
	{"getFusionDistanceMode", &luna_wrapper_osgUtil_SceneView::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgUtil_SceneView::_bind_getFusionDistanceValue},
	{"setPrioritizeTextures", &luna_wrapper_osgUtil_SceneView::_bind_setPrioritizeTextures},
	{"getPrioritizeTextures", &luna_wrapper_osgUtil_SceneView::_bind_getPrioritizeTextures},
	{"setComputeStereoMatricesCallback", &luna_wrapper_osgUtil_SceneView::_bind_setComputeStereoMatricesCallback},
	{"getComputeStereoMatricesCallback", &luna_wrapper_osgUtil_SceneView::_bind_getComputeStereoMatricesCallback},
	{"projectWindowIntoObject", &luna_wrapper_osgUtil_SceneView::_bind_projectWindowIntoObject},
	{"projectWindowXYIntoObject", &luna_wrapper_osgUtil_SceneView::_bind_projectWindowXYIntoObject},
	{"projectObjectIntoWindow", &luna_wrapper_osgUtil_SceneView::_bind_projectObjectIntoWindow},
	{"setFrameStamp", &luna_wrapper_osgUtil_SceneView::_bind_setFrameStamp},
	{"getFrameStamp", &luna_wrapper_osgUtil_SceneView::_bind_getFrameStamp},
	{"computeLeftEyeProjection", &luna_wrapper_osgUtil_SceneView::_bind_computeLeftEyeProjection},
	{"computeLeftEyeView", &luna_wrapper_osgUtil_SceneView::_bind_computeLeftEyeView},
	{"computeRightEyeProjection", &luna_wrapper_osgUtil_SceneView::_bind_computeRightEyeProjection},
	{"computeRightEyeView", &luna_wrapper_osgUtil_SceneView::_bind_computeRightEyeView},
	{"computeLeftEyeProjectionImplementation", &luna_wrapper_osgUtil_SceneView::_bind_computeLeftEyeProjectionImplementation},
	{"computeLeftEyeViewImplementation", &luna_wrapper_osgUtil_SceneView::_bind_computeLeftEyeViewImplementation},
	{"computeRightEyeProjectionImplementation", &luna_wrapper_osgUtil_SceneView::_bind_computeRightEyeProjectionImplementation},
	{"computeRightEyeViewImplementation", &luna_wrapper_osgUtil_SceneView::_bind_computeRightEyeViewImplementation},
	{"inheritCullSettings", &luna_wrapper_osgUtil_SceneView::_bind_inheritCullSettings},
	{"init", &luna_wrapper_osgUtil_SceneView::_bind_init},
	{"update", &luna_wrapper_osgUtil_SceneView::_bind_update},
	{"cull", &luna_wrapper_osgUtil_SceneView::_bind_cull},
	{"draw", &luna_wrapper_osgUtil_SceneView::_bind_draw},
	{"getDynamicObjectCount", &luna_wrapper_osgUtil_SceneView::_bind_getDynamicObjectCount},
	{"releaseAllGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_releaseAllGLObjects},
	{"flushAllDeletedGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_flushAllDeletedGLObjects},
	{"flushDeletedGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_flushDeletedGLObjects},
	{"getStats", &luna_wrapper_osgUtil_SceneView::_bind_getStats},
	{"setAutomaticFlush", &luna_wrapper_osgUtil_SceneView::_bind_setAutomaticFlush},
	{"getAutomaticFlush", &luna_wrapper_osgUtil_SceneView::_bind_getAutomaticFlush},
	{"base_setName", &luna_wrapper_osgUtil_SceneView::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgUtil_SceneView::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgUtil_SceneView::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgUtil_SceneView::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgUtil_SceneView::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgUtil_SceneView::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgUtil_SceneView::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgUtil_SceneView::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_SceneView::_bind_base_className},
	{"base_setDefaults", &luna_wrapper_osgUtil_SceneView::_bind_base_setDefaults},
	{"base_computeLeftEyeProjectionImplementation", &luna_wrapper_osgUtil_SceneView::_bind_base_computeLeftEyeProjectionImplementation},
	{"base_computeLeftEyeViewImplementation", &luna_wrapper_osgUtil_SceneView::_bind_base_computeLeftEyeViewImplementation},
	{"base_computeRightEyeProjectionImplementation", &luna_wrapper_osgUtil_SceneView::_bind_base_computeRightEyeProjectionImplementation},
	{"base_computeRightEyeViewImplementation", &luna_wrapper_osgUtil_SceneView::_bind_base_computeRightEyeViewImplementation},
	{"base_inheritCullSettings", &luna_wrapper_osgUtil_SceneView::_bind_base_inheritCullSettings},
	{"base_init", &luna_wrapper_osgUtil_SceneView::_bind_base_init},
	{"base_update", &luna_wrapper_osgUtil_SceneView::_bind_base_update},
	{"base_cull", &luna_wrapper_osgUtil_SceneView::_bind_base_cull},
	{"base_draw", &luna_wrapper_osgUtil_SceneView::_bind_base_draw},
	{"base_releaseAllGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_base_releaseAllGLObjects},
	{"base_flushAllDeletedGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_base_flushAllDeletedGLObjects},
	{"base_flushDeletedGLObjects", &luna_wrapper_osgUtil_SceneView::_bind_base_flushDeletedGLObjects},
	{"__eq", &luna_wrapper_osgUtil_SceneView::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SceneView >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_SceneView::_cast_from_Referenced},
	{"osg::CullSettings", &luna_wrapper_osgUtil_SceneView::_cast_from_CullSettings},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SceneView >::enumValues[] = {
	{"NO_SCENEVIEW_LIGHT", osgUtil::SceneView::NO_SCENEVIEW_LIGHT},
	{"HEADLIGHT", osgUtil::SceneView::HEADLIGHT},
	{"SKY_LIGHT", osgUtil::SceneView::SKY_LIGHT},
	{"COMPILE_GLOBJECTS_AT_INIT", osgUtil::SceneView::COMPILE_GLOBJECTS_AT_INIT},
	{"STANDARD_SETTINGS", osgUtil::SceneView::STANDARD_SETTINGS},
	{"FRAME_NUMBER_UNIFORM", osgUtil::SceneView::FRAME_NUMBER_UNIFORM},
	{"FRAME_TIME_UNIFORM", osgUtil::SceneView::FRAME_TIME_UNIFORM},
	{"DELTA_FRAME_TIME_UNIFORM", osgUtil::SceneView::DELTA_FRAME_TIME_UNIFORM},
	{"SIMULATION_TIME_UNIFORM", osgUtil::SceneView::SIMULATION_TIME_UNIFORM},
	{"DELTA_SIMULATION_TIME_UNIFORM", osgUtil::SceneView::DELTA_SIMULATION_TIME_UNIFORM},
	{"VIEW_MATRIX_UNIFORM", osgUtil::SceneView::VIEW_MATRIX_UNIFORM},
	{"VIEW_MATRIX_INVERSE_UNIFORM", osgUtil::SceneView::VIEW_MATRIX_INVERSE_UNIFORM},
	{"DEFAULT_UNIFORMS", osgUtil::SceneView::DEFAULT_UNIFORMS},
	{"ALL_UNIFORMS", osgUtil::SceneView::ALL_UNIFORMS},
	{"USE_FUSION_DISTANCE_VALUE", osgUtil::SceneView::USE_FUSION_DISTANCE_VALUE},
	{"PROPORTIONAL_TO_SCREEN_DISTANCE", osgUtil::SceneView::PROPORTIONAL_TO_SCREEN_DISTANCE},
	{0,0}
};


