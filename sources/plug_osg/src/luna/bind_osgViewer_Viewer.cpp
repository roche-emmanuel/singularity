#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_Viewer.h>

class luna_wrapper_osgViewer_Viewer {
public:
	typedef Luna< osgViewer::Viewer > luna_t;

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
		//osgViewer::Viewer* ptr= dynamic_cast< osgViewer::Viewer* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::Viewer* ptr= luna_caster< osg::Referenced, osgViewer::Viewer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::Viewer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::Viewer* ptr= dynamic_cast< osgViewer::Viewer* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		osgViewer::Viewer* ptr= luna_caster< osgGA::GUIActionAdapter, osgViewer::Viewer >::cast(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::Viewer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		if( (!dynamic_cast< osg::ArgumentParser* >(Luna< osg::ArgumentParser >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgViewer::Viewer* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		if( (!dynamic_cast< osg::ArgumentParser* >(Luna< osg::ArgumentParser >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgViewer::Viewer* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewerStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readConfiguration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewerAsEmbeddedInWindow(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_elapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkNeedToDoFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_eventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraWithFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraWithFocus_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraWithFocus_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameras(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18740017) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContexts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48105087) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScenes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98997480) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2917259) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_frame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_renderingTraversals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getWindows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98734151) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setViewerStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getViewerStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewerStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readConfiguration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpViewerAsEmbeddedInWindow(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_elapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewerFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkNeedToDoFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_advance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_eventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCameras(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18740017) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getContexts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48105087) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getScenes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98997480) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2917259) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::Viewer::Viewer()
	static osgViewer::Viewer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer() function, expected prototype:\nosgViewer::Viewer::Viewer()\nClass arguments details:\n");
		}


		return new osgViewer::Viewer();
	}

	// osgViewer::Viewer::Viewer(osg::ArgumentParser & arguments)
	static osgViewer::Viewer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer(osg::ArgumentParser & arguments) function, expected prototype:\nosgViewer::Viewer::Viewer(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,1));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osgViewer::Viewer::Viewer function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new osgViewer::Viewer(arguments);
	}

	// osgViewer::Viewer::Viewer(const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::Viewer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer(const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::Viewer::Viewer(const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgViewer::Viewer* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::Viewer::Viewer function");
		}
		const osgViewer::Viewer & viewer=*viewer_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::Viewer::Viewer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgViewer::Viewer(viewer, copyop);
	}

	// osgViewer::Viewer::Viewer(lua_Table * data)
	static osgViewer::Viewer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer(lua_Table * data) function, expected prototype:\nosgViewer::Viewer::Viewer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgViewer_Viewer(L,NULL);
	}

	// osgViewer::Viewer::Viewer(lua_Table * data, osg::ArgumentParser & arguments)
	static osgViewer::Viewer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer(lua_Table * data, osg::ArgumentParser & arguments) function, expected prototype:\nosgViewer::Viewer::Viewer(lua_Table * data, osg::ArgumentParser & arguments)\nClass arguments details:\narg 2 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osgViewer::Viewer::Viewer function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new wrapper_osgViewer_Viewer(L,NULL, arguments);
	}

	// osgViewer::Viewer::Viewer(lua_Table * data, const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::Viewer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Viewer::Viewer(lua_Table * data, const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::Viewer::Viewer(lua_Table * data, const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgViewer::Viewer* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::Viewer::Viewer function");
		}
		const osgViewer::Viewer & viewer=*viewer_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::Viewer::Viewer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgViewer_Viewer(L,NULL, viewer, copyop);
	}

	// Overload binder for osgViewer::Viewer::Viewer
	static osgViewer::Viewer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Viewer, cannot match any of the overloads for function Viewer:\n  Viewer()\n  Viewer(osg::ArgumentParser &)\n  Viewer(const osgViewer::Viewer &, const osg::CopyOp &)\n  Viewer(lua_Table *)\n  Viewer(lua_Table *, osg::ArgumentParser &)\n  Viewer(lua_Table *, const osgViewer::Viewer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::Viewer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::Viewer::cloneType() const function, expected prototype:\nosg::Object * osgViewer::Viewer::cloneType() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::Viewer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::Viewer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::Viewer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::Viewer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::Viewer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::Viewer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::Viewer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::Viewer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::Viewer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Viewer::libraryName() const function, expected prototype:\nconst char * osgViewer::Viewer::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::Viewer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::Viewer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Viewer::className() const function, expected prototype:\nconst char * osgViewer::Viewer::className() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::Viewer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::Viewer::take(osg::View & rhs)
	static int _bind_take(lua_State *L) {
		if (!_lg_typecheck_take(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::take(osg::View & rhs) function, expected prototype:\nvoid osgViewer::Viewer::take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgViewer::Viewer::take function");
		}
		osg::View & rhs=*rhs_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::take(osg::View &)");
		}
		self->take(rhs);

		return 0;
	}

	// void osgViewer::Viewer::setViewerStats(osg::Stats * stats)
	static int _bind_setViewerStats(lua_State *L) {
		if (!_lg_typecheck_setViewerStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::setViewerStats(osg::Stats * stats) function, expected prototype:\nvoid osgViewer::Viewer::setViewerStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::setViewerStats(osg::Stats *)");
		}
		self->setViewerStats(stats);

		return 0;
	}

	// osg::Stats * osgViewer::Viewer::getViewerStats()
	static int _bind_getViewerStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stats * osgViewer::Viewer::getViewerStats() function, expected prototype:\nosg::Stats * osgViewer::Viewer::getViewerStats()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stats * osgViewer::Viewer::getViewerStats()");
		}
		osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osgViewer::Viewer::getViewerStats() const
	static int _bind_getViewerStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Stats * osgViewer::Viewer::getViewerStats() const function, expected prototype:\nconst osg::Stats * osgViewer::Viewer::getViewerStats() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Stats * osgViewer::Viewer::getViewerStats() const");
		}
		const osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Viewer::getViewerStats
	static int _bind_getViewerStats(lua_State *L) {
		if (_lg_typecheck_getViewerStats_overload_1(L)) return _bind_getViewerStats_overload_1(L);
		if (_lg_typecheck_getViewerStats_overload_2(L)) return _bind_getViewerStats_overload_2(L);

		luaL_error(L, "error in function getViewerStats, cannot match any of the overloads for function getViewerStats:\n  getViewerStats()\n  getViewerStats()\n");
		return 0;
	}

	// bool osgViewer::Viewer::readConfiguration(const std::string & filename)
	static int _bind_readConfiguration(lua_State *L) {
		if (!_lg_typecheck_readConfiguration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::readConfiguration(const std::string & filename) function, expected prototype:\nbool osgViewer::Viewer::readConfiguration(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::readConfiguration(const std::string &)");
		}
		bool lret = self->readConfiguration(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::Viewer::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::isRealized() const function, expected prototype:\nbool osgViewer::Viewer::isRealized() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::isRealized() const");
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Viewer::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::realize() function, expected prototype:\nvoid osgViewer::Viewer::realize()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::realize()");
		}
		self->realize();

		return 0;
	}

	// void osgViewer::Viewer::setStartTick(unsigned long long tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::setStartTick(unsigned long long tick) function, expected prototype:\nvoid osgViewer::Viewer::setStartTick(unsigned long long tick)\nClass arguments details:\n");
		}

		unsigned long long tick=(unsigned long long)lua_tointeger(L,2);

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::setStartTick(unsigned long long)");
		}
		self->setStartTick(tick);

		return 0;
	}

	// void osgViewer::Viewer::setReferenceTime(double time = 0.0)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::setReferenceTime(double time = 0.0) function, expected prototype:\nvoid osgViewer::Viewer::setReferenceTime(double time = 0.0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double time=luatop>1 ? (double)lua_tonumber(L,2) : 0.0;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::setReferenceTime(double)");
		}
		self->setReferenceTime(time);

		return 0;
	}

	// void osgViewer::Viewer::setSceneData(osg::Node * node)
	static int _bind_setSceneData(lua_State *L) {
		if (!_lg_typecheck_setSceneData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::Viewer::setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::setSceneData(osg::Node *)");
		}
		self->setSceneData(node);

		return 0;
	}

	// osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)
	static int _bind_setUpViewerAsEmbeddedInWindow(lua_State *L) {
		if (!_lg_typecheck_setUpViewerAsEmbeddedInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height) function, expected prototype:\nosgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int, int, int, int)");
		}
		osgViewer::GraphicsWindowEmbedded * lret = self->setUpViewerAsEmbeddedInWindow(x, y, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,lret,false);

		return 1;
	}

	// double osgViewer::Viewer::elapsedTime()
	static int _bind_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_elapsedTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::Viewer::elapsedTime() function, expected prototype:\ndouble osgViewer::Viewer::elapsedTime()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::Viewer::elapsedTime()");
		}
		double lret = self->elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp()
	static int _bind_getViewerFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getViewerFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp()");
		}
		osg::FrameStamp * lret = self->getViewerFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// int osgViewer::Viewer::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::Viewer::run() function, expected prototype:\nint osgViewer::Viewer::run()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::Viewer::run()");
		}
		int lret = self->run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::Viewer::checkNeedToDoFrame()
	static int _bind_checkNeedToDoFrame(lua_State *L) {
		if (!_lg_typecheck_checkNeedToDoFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::checkNeedToDoFrame() function, expected prototype:\nbool osgViewer::Viewer::checkNeedToDoFrame()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::checkNeedToDoFrame()");
		}
		bool lret = self->checkNeedToDoFrame();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Viewer::advance(double simulationTime = DBL_MAX)
	static int _bind_advance(lua_State *L) {
		if (!_lg_typecheck_advance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::advance(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::Viewer::advance(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::advance(double)");
		}
		self->advance(simulationTime);

		return 0;
	}

	// void osgViewer::Viewer::eventTraversal()
	static int _bind_eventTraversal(lua_State *L) {
		if (!_lg_typecheck_eventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::eventTraversal() function, expected prototype:\nvoid osgViewer::Viewer::eventTraversal()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::eventTraversal()");
		}
		self->eventTraversal();

		return 0;
	}

	// void osgViewer::Viewer::updateTraversal()
	static int _bind_updateTraversal(lua_State *L) {
		if (!_lg_typecheck_updateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::updateTraversal() function, expected prototype:\nvoid osgViewer::Viewer::updateTraversal()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::updateTraversal()");
		}
		self->updateTraversal();

		return 0;
	}

	// void osgViewer::Viewer::setCameraWithFocus(osg::Camera * camera)
	static int _bind_setCameraWithFocus(lua_State *L) {
		if (!_lg_typecheck_setCameraWithFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::setCameraWithFocus(osg::Camera * camera) function, expected prototype:\nvoid osgViewer::Viewer::setCameraWithFocus(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::setCameraWithFocus(osg::Camera *)");
		}
		self->setCameraWithFocus(camera);

		return 0;
	}

	// osg::Camera * osgViewer::Viewer::getCameraWithFocus()
	static int _bind_getCameraWithFocus_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameraWithFocus_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::Viewer::getCameraWithFocus() function, expected prototype:\nosg::Camera * osgViewer::Viewer::getCameraWithFocus()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::Viewer::getCameraWithFocus()");
		}
		osg::Camera * lret = self->getCameraWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::Viewer::getCameraWithFocus() const
	static int _bind_getCameraWithFocus_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameraWithFocus_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::Viewer::getCameraWithFocus() const function, expected prototype:\nconst osg::Camera * osgViewer::Viewer::getCameraWithFocus() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::Viewer::getCameraWithFocus() const");
		}
		const osg::Camera * lret = self->getCameraWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Viewer::getCameraWithFocus
	static int _bind_getCameraWithFocus(lua_State *L) {
		if (_lg_typecheck_getCameraWithFocus_overload_1(L)) return _bind_getCameraWithFocus_overload_1(L);
		if (_lg_typecheck_getCameraWithFocus_overload_2(L)) return _bind_getCameraWithFocus_overload_2(L);

		luaL_error(L, "error in function getCameraWithFocus, cannot match any of the overloads for function getCameraWithFocus:\n  getCameraWithFocus()\n  getCameraWithFocus()\n");
		return 0;
	}

	// void osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	static int _bind_getCameras(lua_State *L) {
		if (!_lg_typecheck_getCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 18740017\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Cameras* cameras_ptr=(Luna< osgViewer::ViewerBase::Cameras >::check(L,2));
		if( !cameras_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameras in osgViewer::Viewer::getCameras function");
		}
		osgViewer::ViewerBase::Cameras & cameras=*cameras_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras &, bool)");
		}
		self->getCameras(cameras, onlyActive);

		return 0;
	}

	// void osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	static int _bind_getContexts(lua_State *L) {
		if (!_lg_typecheck_getContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 48105087\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< osgViewer::ViewerBase::Contexts >::check(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::Viewer::getContexts function");
		}
		osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts &, bool)");
		}
		self->getContexts(contexts, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	static int _bind_getScenes(lua_State *L) {
		if (!_lg_typecheck_getScenes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98997480\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Scenes* scenes_ptr=(Luna< osgViewer::ViewerBase::Scenes >::check(L,2));
		if( !scenes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scenes in osgViewer::Viewer::getScenes function");
		}
		osgViewer::ViewerBase::Scenes & scenes=*scenes_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes &, bool)");
		}
		self->getScenes(scenes, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 2917259\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Views* views_ptr=(Luna< osgViewer::ViewerBase::Views >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::Viewer::getViews function");
		}
		osgViewer::ViewerBase::Views & views=*views_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views &, bool)");
		}
		self->getViews(views, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::Viewer::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::Viewer::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::Viewer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::Viewer::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_setName(const std::string &)");
		}
		self->Viewer::setName(name);

		return 0;
	}

	// void osgViewer::Viewer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::Viewer::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_computeDataVariance()");
		}
		self->Viewer::computeDataVariance();

		return 0;
	}

	// void osgViewer::Viewer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::Viewer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_setUserData(osg::Referenced *)");
		}
		self->Viewer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::Viewer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::Viewer::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::Viewer::base_getUserData()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::Viewer::base_getUserData()");
		}
		osg::Referenced * lret = self->Viewer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::Viewer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::Viewer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::Viewer::base_getUserData() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::Viewer::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Viewer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Viewer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::Viewer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::Viewer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_releaseGLObjects(osg::State *) const");
		}
		self->Viewer::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgViewer::Viewer::base_frame(double simulationTime = DBL_MAX)
	static int _bind_base_frame(lua_State *L) {
		if (!_lg_typecheck_base_frame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_frame(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::Viewer::base_frame(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_frame(double)");
		}
		self->Viewer::frame(simulationTime);

		return 0;
	}

	// void osgViewer::Viewer::base_renderingTraversals()
	static int _bind_base_renderingTraversals(lua_State *L) {
		if (!_lg_typecheck_base_renderingTraversals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_renderingTraversals() function, expected prototype:\nvoid osgViewer::Viewer::base_renderingTraversals()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_renderingTraversals()");
		}
		self->Viewer::renderingTraversals();

		return 0;
	}

	// void osgViewer::Viewer::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	static int _bind_base_getWindows(lua_State *L) {
		if (!_lg_typecheck_base_getWindows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98734151\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Windows* windows_ptr=(Luna< osgViewer::ViewerBase::Windows >::check(L,2));
		if( !windows_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windows in osgViewer::Viewer::base_getWindows function");
		}
		osgViewer::ViewerBase::Windows & windows=*windows_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getWindows(osgViewer::ViewerBase::Windows &, bool)");
		}
		self->Viewer::getWindows(windows, onlyValid);

		return 0;
	}

	// osg::View * osgViewer::Viewer::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::Viewer::base_asView() function, expected prototype:\nosg::View * osgViewer::Viewer::base_asView()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::Viewer::base_asView()");
		}
		osg::View * lret = self->Viewer::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::Viewer::base_requestRedraw()
	static int _bind_base_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_base_requestRedraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_requestRedraw() function, expected prototype:\nvoid osgViewer::Viewer::base_requestRedraw()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_requestRedraw()");
		}
		self->Viewer::requestRedraw();

		return 0;
	}

	// void osgViewer::Viewer::base_requestContinuousUpdate(bool needed = true)
	static int _bind_base_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_base_requestContinuousUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::Viewer::base_requestContinuousUpdate(bool needed = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_requestContinuousUpdate(bool)");
		}
		self->Viewer::requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::Viewer::base_requestWarpPointer(float x, float y)
	static int _bind_base_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_requestWarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::Viewer::base_requestWarpPointer(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_requestWarpPointer(float, float)");
		}
		self->Viewer::requestWarpPointer(x, y);

		return 0;
	}

	// osg::Object * osgViewer::Viewer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::Viewer::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::Viewer::base_cloneType() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::Viewer::base_cloneType() const");
		}
		osg::Object * lret = self->Viewer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::Viewer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::Viewer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::Viewer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::Viewer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::Viewer::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Viewer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::Viewer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::Viewer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Viewer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::Viewer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Viewer::base_libraryName() const function, expected prototype:\nconst char * osgViewer::Viewer::base_libraryName() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::Viewer::base_libraryName() const");
		}
		const char * lret = self->Viewer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::Viewer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Viewer::base_className() const function, expected prototype:\nconst char * osgViewer::Viewer::base_className() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::Viewer::base_className() const");
		}
		const char * lret = self->Viewer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::Viewer::base_take(osg::View & rhs)
	static int _bind_base_take(lua_State *L) {
		if (!_lg_typecheck_base_take(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_take(osg::View & rhs) function, expected prototype:\nvoid osgViewer::Viewer::base_take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgViewer::Viewer::base_take function");
		}
		osg::View & rhs=*rhs_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_take(osg::View &)");
		}
		self->Viewer::take(rhs);

		return 0;
	}

	// void osgViewer::Viewer::base_setViewerStats(osg::Stats * stats)
	static int _bind_base_setViewerStats(lua_State *L) {
		if (!_lg_typecheck_base_setViewerStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_setViewerStats(osg::Stats * stats) function, expected prototype:\nvoid osgViewer::Viewer::base_setViewerStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_setViewerStats(osg::Stats *)");
		}
		self->Viewer::setViewerStats(stats);

		return 0;
	}

	// osg::Stats * osgViewer::Viewer::base_getViewerStats()
	static int _bind_base_getViewerStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getViewerStats_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stats * osgViewer::Viewer::base_getViewerStats() function, expected prototype:\nosg::Stats * osgViewer::Viewer::base_getViewerStats()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stats * osgViewer::Viewer::base_getViewerStats()");
		}
		osg::Stats * lret = self->Viewer::getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osgViewer::Viewer::base_getViewerStats() const
	static int _bind_base_getViewerStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getViewerStats_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Stats * osgViewer::Viewer::base_getViewerStats() const function, expected prototype:\nconst osg::Stats * osgViewer::Viewer::base_getViewerStats() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Stats * osgViewer::Viewer::base_getViewerStats() const");
		}
		const osg::Stats * lret = self->Viewer::getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Viewer::base_getViewerStats
	static int _bind_base_getViewerStats(lua_State *L) {
		if (_lg_typecheck_base_getViewerStats_overload_1(L)) return _bind_base_getViewerStats_overload_1(L);
		if (_lg_typecheck_base_getViewerStats_overload_2(L)) return _bind_base_getViewerStats_overload_2(L);

		luaL_error(L, "error in function base_getViewerStats, cannot match any of the overloads for function base_getViewerStats:\n  base_getViewerStats()\n  base_getViewerStats()\n");
		return 0;
	}

	// bool osgViewer::Viewer::base_readConfiguration(const std::string & filename)
	static int _bind_base_readConfiguration(lua_State *L) {
		if (!_lg_typecheck_base_readConfiguration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::base_readConfiguration(const std::string & filename) function, expected prototype:\nbool osgViewer::Viewer::base_readConfiguration(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::base_readConfiguration(const std::string &)");
		}
		bool lret = self->Viewer::readConfiguration(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::Viewer::base_isRealized() const
	static int _bind_base_isRealized(lua_State *L) {
		if (!_lg_typecheck_base_isRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::base_isRealized() const function, expected prototype:\nbool osgViewer::Viewer::base_isRealized() const\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::base_isRealized() const");
		}
		bool lret = self->Viewer::isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Viewer::base_realize()
	static int _bind_base_realize(lua_State *L) {
		if (!_lg_typecheck_base_realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_realize() function, expected prototype:\nvoid osgViewer::Viewer::base_realize()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_realize()");
		}
		self->Viewer::realize();

		return 0;
	}

	// void osgViewer::Viewer::base_setStartTick(unsigned long long tick)
	static int _bind_base_setStartTick(lua_State *L) {
		if (!_lg_typecheck_base_setStartTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_setStartTick(unsigned long long tick) function, expected prototype:\nvoid osgViewer::Viewer::base_setStartTick(unsigned long long tick)\nClass arguments details:\n");
		}

		unsigned long long tick=(unsigned long long)lua_tointeger(L,2);

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_setStartTick(unsigned long long)");
		}
		self->Viewer::setStartTick(tick);

		return 0;
	}

	// void osgViewer::Viewer::base_setSceneData(osg::Node * node)
	static int _bind_base_setSceneData(lua_State *L) {
		if (!_lg_typecheck_base_setSceneData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::Viewer::base_setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_setSceneData(osg::Node *)");
		}
		self->Viewer::setSceneData(node);

		return 0;
	}

	// osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::base_setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)
	static int _bind_base_setUpViewerAsEmbeddedInWindow(lua_State *L) {
		if (!_lg_typecheck_base_setUpViewerAsEmbeddedInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::base_setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height) function, expected prototype:\nosgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::base_setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::base_setUpViewerAsEmbeddedInWindow(int, int, int, int)");
		}
		osgViewer::GraphicsWindowEmbedded * lret = self->Viewer::setUpViewerAsEmbeddedInWindow(x, y, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::GraphicsWindowEmbedded >::push(L,lret,false);

		return 1;
	}

	// double osgViewer::Viewer::base_elapsedTime()
	static int _bind_base_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_base_elapsedTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::Viewer::base_elapsedTime() function, expected prototype:\ndouble osgViewer::Viewer::base_elapsedTime()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::Viewer::base_elapsedTime()");
		}
		double lret = self->Viewer::elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FrameStamp * osgViewer::Viewer::base_getViewerFrameStamp()
	static int _bind_base_getViewerFrameStamp(lua_State *L) {
		if (!_lg_typecheck_base_getViewerFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::Viewer::base_getViewerFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::Viewer::base_getViewerFrameStamp()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::Viewer::base_getViewerFrameStamp()");
		}
		osg::FrameStamp * lret = self->Viewer::getViewerFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// int osgViewer::Viewer::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::Viewer::base_run() function, expected prototype:\nint osgViewer::Viewer::base_run()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::Viewer::base_run()");
		}
		int lret = self->Viewer::run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::Viewer::base_checkNeedToDoFrame()
	static int _bind_base_checkNeedToDoFrame(lua_State *L) {
		if (!_lg_typecheck_base_checkNeedToDoFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::Viewer::base_checkNeedToDoFrame() function, expected prototype:\nbool osgViewer::Viewer::base_checkNeedToDoFrame()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::Viewer::base_checkNeedToDoFrame()");
		}
		bool lret = self->Viewer::checkNeedToDoFrame();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Viewer::base_advance(double simulationTime = DBL_MAX)
	static int _bind_base_advance(lua_State *L) {
		if (!_lg_typecheck_base_advance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_advance(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::Viewer::base_advance(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_advance(double)");
		}
		self->Viewer::advance(simulationTime);

		return 0;
	}

	// void osgViewer::Viewer::base_eventTraversal()
	static int _bind_base_eventTraversal(lua_State *L) {
		if (!_lg_typecheck_base_eventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_eventTraversal() function, expected prototype:\nvoid osgViewer::Viewer::base_eventTraversal()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_eventTraversal()");
		}
		self->Viewer::eventTraversal();

		return 0;
	}

	// void osgViewer::Viewer::base_updateTraversal()
	static int _bind_base_updateTraversal(lua_State *L) {
		if (!_lg_typecheck_base_updateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_updateTraversal() function, expected prototype:\nvoid osgViewer::Viewer::base_updateTraversal()\nClass arguments details:\n");
		}


		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_updateTraversal()");
		}
		self->Viewer::updateTraversal();

		return 0;
	}

	// void osgViewer::Viewer::base_getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	static int _bind_base_getCameras(lua_State *L) {
		if (!_lg_typecheck_base_getCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::Viewer::base_getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 18740017\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Cameras* cameras_ptr=(Luna< osgViewer::ViewerBase::Cameras >::check(L,2));
		if( !cameras_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameras in osgViewer::Viewer::base_getCameras function");
		}
		osgViewer::ViewerBase::Cameras & cameras=*cameras_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getCameras(osgViewer::ViewerBase::Cameras &, bool)");
		}
		self->Viewer::getCameras(cameras, onlyActive);

		return 0;
	}

	// void osgViewer::Viewer::base_getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	static int _bind_base_getContexts(lua_State *L) {
		if (!_lg_typecheck_base_getContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::base_getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 48105087\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< osgViewer::ViewerBase::Contexts >::check(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::Viewer::base_getContexts function");
		}
		osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getContexts(osgViewer::ViewerBase::Contexts &, bool)");
		}
		self->Viewer::getContexts(contexts, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::base_getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	static int _bind_base_getScenes(lua_State *L) {
		if (!_lg_typecheck_base_getScenes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::base_getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98997480\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Scenes* scenes_ptr=(Luna< osgViewer::ViewerBase::Scenes >::check(L,2));
		if( !scenes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scenes in osgViewer::Viewer::base_getScenes function");
		}
		osgViewer::ViewerBase::Scenes & scenes=*scenes_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getScenes(osgViewer::ViewerBase::Scenes &, bool)");
		}
		self->Viewer::getScenes(scenes, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::base_getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	static int _bind_base_getViews(lua_State *L) {
		if (!_lg_typecheck_base_getViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::Viewer::base_getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 2917259\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Views* views_ptr=(Luna< osgViewer::ViewerBase::Views >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::Viewer::base_getViews function");
		}
		osgViewer::ViewerBase::Views & views=*views_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getViews(osgViewer::ViewerBase::Views &, bool)");
		}
		self->Viewer::getViews(views, onlyValid);

		return 0;
	}

	// void osgViewer::Viewer::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::Viewer::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::Viewer::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::Viewer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Viewer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::base_getUsage(osg::ApplicationUsage &) const");
		}
		self->Viewer::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::Viewer* LunaTraits< osgViewer::Viewer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_Viewer::_bind_ctor(L);
}

void LunaTraits< osgViewer::Viewer >::_bind_dtor(osgViewer::Viewer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::Viewer >::className[] = "Viewer";
const char LunaTraits< osgViewer::Viewer >::fullName[] = "osgViewer::Viewer";
const char LunaTraits< osgViewer::Viewer >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::Viewer >::parents[] = {"osgViewer.ViewerBase", "osgViewer.View", 0};
const int LunaTraits< osgViewer::Viewer >::hash = 66109567;
const int LunaTraits< osgViewer::Viewer >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::Viewer >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_Viewer::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_Viewer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_Viewer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_Viewer::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_Viewer::_bind_className},
	{"take", &luna_wrapper_osgViewer_Viewer::_bind_take},
	{"setViewerStats", &luna_wrapper_osgViewer_Viewer::_bind_setViewerStats},
	{"getViewerStats", &luna_wrapper_osgViewer_Viewer::_bind_getViewerStats},
	{"readConfiguration", &luna_wrapper_osgViewer_Viewer::_bind_readConfiguration},
	{"isRealized", &luna_wrapper_osgViewer_Viewer::_bind_isRealized},
	{"realize", &luna_wrapper_osgViewer_Viewer::_bind_realize},
	{"setStartTick", &luna_wrapper_osgViewer_Viewer::_bind_setStartTick},
	{"setReferenceTime", &luna_wrapper_osgViewer_Viewer::_bind_setReferenceTime},
	{"setSceneData", &luna_wrapper_osgViewer_Viewer::_bind_setSceneData},
	{"setUpViewerAsEmbeddedInWindow", &luna_wrapper_osgViewer_Viewer::_bind_setUpViewerAsEmbeddedInWindow},
	{"elapsedTime", &luna_wrapper_osgViewer_Viewer::_bind_elapsedTime},
	{"getViewerFrameStamp", &luna_wrapper_osgViewer_Viewer::_bind_getViewerFrameStamp},
	{"run", &luna_wrapper_osgViewer_Viewer::_bind_run},
	{"checkNeedToDoFrame", &luna_wrapper_osgViewer_Viewer::_bind_checkNeedToDoFrame},
	{"advance", &luna_wrapper_osgViewer_Viewer::_bind_advance},
	{"eventTraversal", &luna_wrapper_osgViewer_Viewer::_bind_eventTraversal},
	{"updateTraversal", &luna_wrapper_osgViewer_Viewer::_bind_updateTraversal},
	{"setCameraWithFocus", &luna_wrapper_osgViewer_Viewer::_bind_setCameraWithFocus},
	{"getCameraWithFocus", &luna_wrapper_osgViewer_Viewer::_bind_getCameraWithFocus},
	{"getCameras", &luna_wrapper_osgViewer_Viewer::_bind_getCameras},
	{"getContexts", &luna_wrapper_osgViewer_Viewer::_bind_getContexts},
	{"getScenes", &luna_wrapper_osgViewer_Viewer::_bind_getScenes},
	{"getViews", &luna_wrapper_osgViewer_Viewer::_bind_getViews},
	{"getUsage", &luna_wrapper_osgViewer_Viewer::_bind_getUsage},
	{"base_setName", &luna_wrapper_osgViewer_Viewer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_Viewer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_Viewer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_Viewer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_Viewer::_bind_base_releaseGLObjects},
	{"base_frame", &luna_wrapper_osgViewer_Viewer::_bind_base_frame},
	{"base_renderingTraversals", &luna_wrapper_osgViewer_Viewer::_bind_base_renderingTraversals},
	{"base_getWindows", &luna_wrapper_osgViewer_Viewer::_bind_base_getWindows},
	{"base_asView", &luna_wrapper_osgViewer_Viewer::_bind_base_asView},
	{"base_requestRedraw", &luna_wrapper_osgViewer_Viewer::_bind_base_requestRedraw},
	{"base_requestContinuousUpdate", &luna_wrapper_osgViewer_Viewer::_bind_base_requestContinuousUpdate},
	{"base_requestWarpPointer", &luna_wrapper_osgViewer_Viewer::_bind_base_requestWarpPointer},
	{"base_cloneType", &luna_wrapper_osgViewer_Viewer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_Viewer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_Viewer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_Viewer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_Viewer::_bind_base_className},
	{"base_take", &luna_wrapper_osgViewer_Viewer::_bind_base_take},
	{"base_setViewerStats", &luna_wrapper_osgViewer_Viewer::_bind_base_setViewerStats},
	{"base_getViewerStats", &luna_wrapper_osgViewer_Viewer::_bind_base_getViewerStats},
	{"base_readConfiguration", &luna_wrapper_osgViewer_Viewer::_bind_base_readConfiguration},
	{"base_isRealized", &luna_wrapper_osgViewer_Viewer::_bind_base_isRealized},
	{"base_realize", &luna_wrapper_osgViewer_Viewer::_bind_base_realize},
	{"base_setStartTick", &luna_wrapper_osgViewer_Viewer::_bind_base_setStartTick},
	{"base_setSceneData", &luna_wrapper_osgViewer_Viewer::_bind_base_setSceneData},
	{"base_setUpViewerAsEmbeddedInWindow", &luna_wrapper_osgViewer_Viewer::_bind_base_setUpViewerAsEmbeddedInWindow},
	{"base_elapsedTime", &luna_wrapper_osgViewer_Viewer::_bind_base_elapsedTime},
	{"base_getViewerFrameStamp", &luna_wrapper_osgViewer_Viewer::_bind_base_getViewerFrameStamp},
	{"base_run", &luna_wrapper_osgViewer_Viewer::_bind_base_run},
	{"base_checkNeedToDoFrame", &luna_wrapper_osgViewer_Viewer::_bind_base_checkNeedToDoFrame},
	{"base_advance", &luna_wrapper_osgViewer_Viewer::_bind_base_advance},
	{"base_eventTraversal", &luna_wrapper_osgViewer_Viewer::_bind_base_eventTraversal},
	{"base_updateTraversal", &luna_wrapper_osgViewer_Viewer::_bind_base_updateTraversal},
	{"base_getCameras", &luna_wrapper_osgViewer_Viewer::_bind_base_getCameras},
	{"base_getContexts", &luna_wrapper_osgViewer_Viewer::_bind_base_getContexts},
	{"base_getScenes", &luna_wrapper_osgViewer_Viewer::_bind_base_getScenes},
	{"base_getViews", &luna_wrapper_osgViewer_Viewer::_bind_base_getViews},
	{"base_getUsage", &luna_wrapper_osgViewer_Viewer::_bind_base_getUsage},
	{"__eq", &luna_wrapper_osgViewer_Viewer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::Viewer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_Viewer::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_Viewer::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::Viewer >::enumValues[] = {
	{0,0}
};


