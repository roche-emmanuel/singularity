#include <plug_common.h>

class luna_wrapper_osgViewer_View {
public:
	typedef Luna< osgViewer::View > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::View* ptr= dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::View >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::View* ptr= dynamic_cast< osgViewer::View* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::View >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScene_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScene_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImagePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventQueue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraManipulator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraManipulator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraManipulator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventHandlers_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventHandlers_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateSystemNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateSystemNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeActiveCoordinateSystemNodePath(lua_State *L) {
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

	inline static bool _lg_typecheck_setUpViewAcrossAllScreens(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpViewInWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewOnSingleScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewFor3DSphericalDisplay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewForPanoramicSphericalDisplay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewForWoWVxDisplay(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpDepthPartitionForCamera(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpDepthPartition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraContainingPosition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeIntersections_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,19574398) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeIntersections_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52841328) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,19574398) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_assignSceneDataToCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::View::View()
	static osgViewer::View* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::View::View() function, expected prototype:\nosgViewer::View::View()\nClass arguments details:\n");
		}


		return new osgViewer::View();
	}

	// osgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::View* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgViewer::View* view_ptr=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgViewer::View::View function");
		}
		const osgViewer::View & view=*view_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::View::View function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgViewer::View(view, copyop);
	}

	// Overload binder for osgViewer::View::View
	static osgViewer::View* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function View, cannot match any of the overloads for function View:\n  View()\n  View(const osgViewer::View &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::View::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::cloneType() const function, expected prototype:\nosg::Object * osgViewer::View::cloneType() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::View::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgViewer::View::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::View::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::View::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::View::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::View::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::libraryName() const function, expected prototype:\nconst char * osgViewer::View::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::View::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::className() const function, expected prototype:\nconst char * osgViewer::View::className() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::View * osgViewer::View::asView()
	static int _bind_asView(lua_State *L) {
		if (!_lg_typecheck_asView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::View::asView() function, expected prototype:\nosg::View * osgViewer::View::asView()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::View::asView()");
		}
		osg::View * lret = self->asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// osgViewer::ViewerBase * osgViewer::View::getViewerBase()
	static int _bind_getViewerBase(lua_State *L) {
		if (!_lg_typecheck_getViewerBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase * osgViewer::View::getViewerBase() function, expected prototype:\nosgViewer::ViewerBase * osgViewer::View::getViewerBase()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase * osgViewer::View::getViewerBase()");
		}
		osgViewer::ViewerBase * lret = self->getViewerBase();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::ViewerBase >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::View::take(osg::View & rhs)
	static int _bind_take(lua_State *L) {
		if (!_lg_typecheck_take(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::take(osg::View & rhs) function, expected prototype:\nvoid osgViewer::View::take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::View* rhs_ptr=dynamic_cast< osg::View* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgViewer::View::take function");
		}
		osg::View & rhs=*rhs_ptr;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::take(osg::View &)");
		}
		self->take(rhs);

		return 0;
	}

	// void osgViewer::View::setStartTick(unsigned long long tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setStartTick(unsigned long long tick) function, expected prototype:\nvoid osgViewer::View::setStartTick(unsigned long long tick)\nClass arguments details:\n");
		}

		unsigned long long tick=(unsigned long long)lua_tointeger(L,2);

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setStartTick(unsigned long long)");
		}
		self->setStartTick(tick);

		return 0;
	}

	// unsigned long long osgViewer::View::getStartTick() const
	static int _bind_getStartTick(lua_State *L) {
		if (!_lg_typecheck_getStartTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long long osgViewer::View::getStartTick() const function, expected prototype:\nunsigned long long osgViewer::View::getStartTick() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long long osgViewer::View::getStartTick() const");
		}
		unsigned long long lret = self->getStartTick();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgViewer::Scene * osgViewer::View::getScene()
	static int _bind_getScene_overload_1(lua_State *L) {
		if (!_lg_typecheck_getScene_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::Scene * osgViewer::View::getScene() function, expected prototype:\nosgViewer::Scene * osgViewer::View::getScene()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::Scene * osgViewer::View::getScene()");
		}
		osgViewer::Scene * lret = self->getScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::Scene * osgViewer::View::getScene() const
	static int _bind_getScene_overload_2(lua_State *L) {
		if (!_lg_typecheck_getScene_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgViewer::Scene * osgViewer::View::getScene() const function, expected prototype:\nconst osgViewer::Scene * osgViewer::View::getScene() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgViewer::Scene * osgViewer::View::getScene() const");
		}
		const osgViewer::Scene * lret = self->getScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getScene
	static int _bind_getScene(lua_State *L) {
		if (_lg_typecheck_getScene_overload_1(L)) return _bind_getScene_overload_1(L);
		if (_lg_typecheck_getScene_overload_2(L)) return _bind_getScene_overload_2(L);

		luaL_error(L, "error in function getScene, cannot match any of the overloads for function getScene:\n  getScene()\n  getScene()\n");
		return 0;
	}

	// void osgViewer::View::setSceneData(osg::Node * node)
	static int _bind_setSceneData(lua_State *L) {
		if (!_lg_typecheck_setSceneData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::View::setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setSceneData(osg::Node *)");
		}
		self->setSceneData(node);

		return 0;
	}

	// osg::Node * osgViewer::View::getSceneData()
	static int _bind_getSceneData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgViewer::View::getSceneData() function, expected prototype:\nosg::Node * osgViewer::View::getSceneData()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgViewer::View::getSceneData()");
		}
		osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osgViewer::View::getSceneData() const
	static int _bind_getSceneData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgViewer::View::getSceneData() const function, expected prototype:\nconst osg::Node * osgViewer::View::getSceneData() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgViewer::View::getSceneData() const");
		}
		const osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getSceneData
	static int _bind_getSceneData(lua_State *L) {
		if (_lg_typecheck_getSceneData_overload_1(L)) return _bind_getSceneData_overload_1(L);
		if (_lg_typecheck_getSceneData_overload_2(L)) return _bind_getSceneData_overload_2(L);

		luaL_error(L, "error in function getSceneData, cannot match any of the overloads for function getSceneData:\n  getSceneData()\n  getSceneData()\n");
		return 0;
	}

	// void osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp)
	static int _bind_setDatabasePager(lua_State *L) {
		if (!_lg_typecheck_setDatabasePager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp) function, expected prototype:\nvoid osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::DatabasePager* dp=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setDatabasePager(osgDB::DatabasePager *)");
		}
		self->setDatabasePager(dp);

		return 0;
	}

	// osgDB::DatabasePager * osgViewer::View::getDatabasePager()
	static int _bind_getDatabasePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgViewer::View::getDatabasePager() function, expected prototype:\nosgDB::DatabasePager * osgViewer::View::getDatabasePager()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgViewer::View::getDatabasePager()");
		}
		osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const
	static int _bind_getDatabasePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const function, expected prototype:\nconst osgDB::DatabasePager * osgViewer::View::getDatabasePager() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const");
		}
		const osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getDatabasePager
	static int _bind_getDatabasePager(lua_State *L) {
		if (_lg_typecheck_getDatabasePager_overload_1(L)) return _bind_getDatabasePager_overload_1(L);
		if (_lg_typecheck_getDatabasePager_overload_2(L)) return _bind_getDatabasePager_overload_2(L);

		luaL_error(L, "error in function getDatabasePager, cannot match any of the overloads for function getDatabasePager:\n  getDatabasePager()\n  getDatabasePager()\n");
		return 0;
	}

	// void osgViewer::View::setImagePager(osgDB::ImagePager * ip)
	static int _bind_setImagePager(lua_State *L) {
		if (!_lg_typecheck_setImagePager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setImagePager(osgDB::ImagePager * ip) function, expected prototype:\nvoid osgViewer::View::setImagePager(osgDB::ImagePager * ip)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::ImagePager* ip=dynamic_cast< osgDB::ImagePager* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setImagePager(osgDB::ImagePager *)");
		}
		self->setImagePager(ip);

		return 0;
	}

	// osgDB::ImagePager * osgViewer::View::getImagePager()
	static int _bind_getImagePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImagePager * osgViewer::View::getImagePager() function, expected prototype:\nosgDB::ImagePager * osgViewer::View::getImagePager()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ImagePager * osgViewer::View::getImagePager()");
		}
		osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ImagePager * osgViewer::View::getImagePager() const
	static int _bind_getImagePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::ImagePager * osgViewer::View::getImagePager() const function, expected prototype:\nconst osgDB::ImagePager * osgViewer::View::getImagePager() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::ImagePager * osgViewer::View::getImagePager() const");
		}
		const osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getImagePager
	static int _bind_getImagePager(lua_State *L) {
		if (_lg_typecheck_getImagePager_overload_1(L)) return _bind_getImagePager_overload_1(L);
		if (_lg_typecheck_getImagePager_overload_2(L)) return _bind_getImagePager_overload_2(L);

		luaL_error(L, "error in function getImagePager, cannot match any of the overloads for function getImagePager:\n  getImagePager()\n  getImagePager()\n");
		return 0;
	}

	// void osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue)
	static int _bind_setEventQueue(lua_State *L) {
		if (!_lg_typecheck_setEventQueue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue) function, expected prototype:\nvoid osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::EventQueue* eventQueue=dynamic_cast< osgGA::EventQueue* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setEventQueue(osgGA::EventQueue *)");
		}
		self->setEventQueue(eventQueue);

		return 0;
	}

	// osgGA::EventQueue * osgViewer::View::getEventQueue()
	static int _bind_getEventQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue * osgViewer::View::getEventQueue() function, expected prototype:\nosgGA::EventQueue * osgViewer::View::getEventQueue()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::EventQueue * osgViewer::View::getEventQueue()");
		}
		osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue * osgViewer::View::getEventQueue() const
	static int _bind_getEventQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue * osgViewer::View::getEventQueue() const function, expected prototype:\nconst osgGA::EventQueue * osgViewer::View::getEventQueue() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue * osgViewer::View::getEventQueue() const");
		}
		const osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getEventQueue
	static int _bind_getEventQueue(lua_State *L) {
		if (_lg_typecheck_getEventQueue_overload_1(L)) return _bind_getEventQueue_overload_1(L);
		if (_lg_typecheck_getEventQueue_overload_2(L)) return _bind_getEventQueue_overload_2(L);

		luaL_error(L, "error in function getEventQueue, cannot match any of the overloads for function getEventQueue:\n  getEventQueue()\n  getEventQueue()\n");
		return 0;
	}

	// void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true)
	static int _bind_setCameraManipulator(lua_State *L) {
		if (!_lg_typecheck_setCameraManipulator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true) function, expected prototype:\nvoid osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgGA::CameraManipulator* manipulator=dynamic_cast< osgGA::CameraManipulator* >(Luna< osg::Referenced >::check(L,2));
		bool resetPosition=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator *, bool)");
		}
		self->setCameraManipulator(manipulator, resetPosition);

		return 0;
	}

	// osgGA::CameraManipulator * osgViewer::View::getCameraManipulator()
	static int _bind_getCameraManipulator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameraManipulator_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() function, expected prototype:\nosgGA::CameraManipulator * osgViewer::View::getCameraManipulator()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgViewer::View::getCameraManipulator()");
		}
		osgGA::CameraManipulator * lret = self->getCameraManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const
	static int _bind_getCameraManipulator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameraManipulator_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const function, expected prototype:\nconst osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const");
		}
		const osgGA::CameraManipulator * lret = self->getCameraManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getCameraManipulator
	static int _bind_getCameraManipulator(lua_State *L) {
		if (_lg_typecheck_getCameraManipulator_overload_1(L)) return _bind_getCameraManipulator_overload_1(L);
		if (_lg_typecheck_getCameraManipulator_overload_2(L)) return _bind_getCameraManipulator_overload_2(L);

		luaL_error(L, "error in function getCameraManipulator, cannot match any of the overloads for function getCameraManipulator:\n  getCameraManipulator()\n  getCameraManipulator()\n");
		return 0;
	}

	// void osgViewer::View::home()
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::home() function, expected prototype:\nvoid osgViewer::View::home()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::home()");
		}
		self->home();

		return 0;
	}

	// void osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler)
	static int _bind_addEventHandler(lua_State *L) {
		if (!_lg_typecheck_addEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler) function, expected prototype:\nvoid osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::GUIEventHandler* eventHandler=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::addEventHandler(osgGA::GUIEventHandler *)");
		}
		self->addEventHandler(eventHandler);

		return 0;
	}

	// void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler)
	static int _bind_removeEventHandler(lua_State *L) {
		if (!_lg_typecheck_removeEventHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler) function, expected prototype:\nvoid osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::GUIEventHandler* eventHandler=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler *)");
		}
		self->removeEventHandler(eventHandler);

		return 0;
	}

	// osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers()
	static int _bind_getEventHandlers_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventHandlers_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() function, expected prototype:\nosgViewer::View::EventHandlers & osgViewer::View::getEventHandlers()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers()");
		}
		const osgViewer::View::EventHandlers* lret = &self->getEventHandlers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View::EventHandlers >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const
	static int _bind_getEventHandlers_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventHandlers_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const function, expected prototype:\nconst osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const");
		}
		const osgViewer::View::EventHandlers* lret = &self->getEventHandlers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View::EventHandlers >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getEventHandlers
	static int _bind_getEventHandlers(lua_State *L) {
		if (_lg_typecheck_getEventHandlers_overload_1(L)) return _bind_getEventHandlers_overload_1(L);
		if (_lg_typecheck_getEventHandlers_overload_2(L)) return _bind_getEventHandlers_overload_2(L);

		luaL_error(L, "error in function getEventHandlers, cannot match any of the overloads for function getEventHandlers:\n  getEventHandlers()\n  getEventHandlers()\n");
		return 0;
	}

	// void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath)
	static int _bind_setCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_setCoordinateSystemNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgViewer::View::setCoordinateSystemNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath &)");
		}
		self->setCoordinateSystemNodePath(nodePath);

		return 0;
	}

	// osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const
	static int _bind_getCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_getCoordinateSystemNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const function, expected prototype:\nosg::NodePath osgViewer::View::getCoordinateSystemNodePath() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const");
		}
		osg::NodePath stack_lret = self->getCoordinateSystemNodePath();
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}

	// void osgViewer::View::computeActiveCoordinateSystemNodePath()
	static int _bind_computeActiveCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_computeActiveCoordinateSystemNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::computeActiveCoordinateSystemNodePath() function, expected prototype:\nvoid osgViewer::View::computeActiveCoordinateSystemNodePath()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::computeActiveCoordinateSystemNodePath()");
		}
		self->computeActiveCoordinateSystemNodePath();

		return 0;
	}

	// void osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds) function, expected prototype:\nvoid osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::DisplaySettings* ds=dynamic_cast< osg::DisplaySettings* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setDisplaySettings(osg::DisplaySettings *)");
		}
		self->setDisplaySettings(ds);

		return 0;
	}

	// osg::DisplaySettings * osgViewer::View::getDisplaySettings()
	static int _bind_getDisplaySettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings * osgViewer::View::getDisplaySettings() function, expected prototype:\nosg::DisplaySettings * osgViewer::View::getDisplaySettings()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DisplaySettings * osgViewer::View::getDisplaySettings()");
		}
		osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const
	static int _bind_getDisplaySettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osgViewer::View::getDisplaySettings() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const");
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getDisplaySettings
	static int _bind_getDisplaySettings(lua_State *L) {
		if (_lg_typecheck_getDisplaySettings_overload_1(L)) return _bind_getDisplaySettings_overload_1(L);
		if (_lg_typecheck_getDisplaySettings_overload_2(L)) return _bind_getDisplaySettings_overload_2(L);

		luaL_error(L, "error in function getDisplaySettings, cannot match any of the overloads for function getDisplaySettings:\n  getDisplaySettings()\n  getDisplaySettings()\n");
		return 0;
	}

	// void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)
	static int _bind_setFusionDistance(lua_State *L) {
		if (!_lg_typecheck_setFusionDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f) function, expected prototype:\nvoid osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::SceneView::FusionDistanceMode mode=(osgUtil::SceneView::FusionDistanceMode)lua_tointeger(L,2);
		float value=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode, float)");
		}
		self->setFusionDistance(mode, value);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgViewer::View::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgViewer::View::getFusionDistanceValue() const function, expected prototype:\nfloat osgViewer::View::getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgViewer::View::getFusionDistanceValue() const");
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::View::setUpViewAcrossAllScreens()
	static int _bind_setUpViewAcrossAllScreens(lua_State *L) {
		if (!_lg_typecheck_setUpViewAcrossAllScreens(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewAcrossAllScreens() function, expected prototype:\nvoid osgViewer::View::setUpViewAcrossAllScreens()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewAcrossAllScreens()");
		}
		self->setUpViewAcrossAllScreens();

		return 0;
	}

	// void osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0)
	static int _bind_setUpViewInWindow(lua_State *L) {
		if (!_lg_typecheck_setUpViewInWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0) function, expected prototype:\nvoid osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int screenNum=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewInWindow(int, int, int, int, unsigned int)");
		}
		self->setUpViewInWindow(x, y, width, height, screenNum);

		return 0;
	}

	// void osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0)
	static int _bind_setUpViewOnSingleScreen(lua_State *L) {
		if (!_lg_typecheck_setUpViewOnSingleScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0) function, expected prototype:\nvoid osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int screenNum=luatop>1 ? (unsigned int)lua_tointeger(L,2) : 0;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewOnSingleScreen(unsigned int)");
		}
		self->setUpViewOnSingleScreen(screenNum);

		return 0;
	}

	// void osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())
	static int _bind_setUpViewFor3DSphericalDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewFor3DSphericalDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ()) function, expected prototype:\nvoid osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())\nClass arguments details:\narg 4 ID = 50169651\narg 5 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		double radius=luatop>1 ? (double)lua_tonumber(L,2) : 1.0;
		double collar=luatop>2 ? (double)lua_tonumber(L,3) : 0.45;
		unsigned int screenNum=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 0;
		osg::Image* intensityMap=luatop>4 ? dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,5)) : (osg::Image*)0;
		const osg::Matrixd* projectorMatrix_ptr=luatop>5 ? (Luna< osg::Matrixd >::check(L,6)) : NULL;
		if( luatop>5 && !projectorMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectorMatrix in osgViewer::View::setUpViewFor3DSphericalDisplay function");
		}
		const osg::Matrixd & projectorMatrix=luatop>5 ? *projectorMatrix_ptr : osg::Matrixd ();

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewFor3DSphericalDisplay(double, double, unsigned int, osg::Image *, const osg::Matrixd &)");
		}
		self->setUpViewFor3DSphericalDisplay(radius, collar, screenNum, intensityMap, projectorMatrix);

		return 0;
	}

	// void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())
	static int _bind_setUpViewForPanoramicSphericalDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewForPanoramicSphericalDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ()) function, expected prototype:\nvoid osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())\nClass arguments details:\narg 4 ID = 50169651\narg 5 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		double radius=luatop>1 ? (double)lua_tonumber(L,2) : 1.0;
		double collar=luatop>2 ? (double)lua_tonumber(L,3) : 0.45;
		unsigned int screenNum=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 0;
		osg::Image* intensityMap=luatop>4 ? dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,5)) : (osg::Image*)0;
		const osg::Matrixd* projectorMatrix_ptr=luatop>5 ? (Luna< osg::Matrixd >::check(L,6)) : NULL;
		if( luatop>5 && !projectorMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectorMatrix in osgViewer::View::setUpViewForPanoramicSphericalDisplay function");
		}
		const osg::Matrixd & projectorMatrix=luatop>5 ? *projectorMatrix_ptr : osg::Matrixd ();

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double, double, unsigned int, osg::Image *, const osg::Matrixd &)");
		}
		self->setUpViewForPanoramicSphericalDisplay(radius, collar, screenNum, intensityMap, projectorMatrix);

		return 0;
	}

	// void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C)
	static int _bind_setUpViewForWoWVxDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewForWoWVxDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C) function, expected prototype:\nvoid osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C)\nClass arguments details:\n");
		}

		unsigned int screenNum=(unsigned int)lua_tointeger(L,2);
		unsigned char wow_content = (unsigned char)(lua_tointeger(L,3));
		unsigned char wow_factor = (unsigned char)(lua_tointeger(L,4));
		unsigned char wow_offset = (unsigned char)(lua_tointeger(L,5));
		float wow_disparity_Zd=(float)lua_tonumber(L,6);
		float wow_disparity_vz=(float)lua_tonumber(L,7);
		float wow_disparity_M=(float)lua_tonumber(L,8);
		float wow_disparity_C=(float)lua_tonumber(L,9);

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int, unsigned char, unsigned char, unsigned char, float, float, float, float)");
		}
		self->setUpViewForWoWVxDisplay(screenNum, wow_content, wow_factor, wow_offset, wow_disparity_Zd, wow_disparity_vz, wow_disparity_M, wow_disparity_C);

		return 0;
	}

	// bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0)
	static int _bind_setUpDepthPartitionForCamera(lua_State *L) {
		if (!_lg_typecheck_setUpDepthPartitionForCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0) function, expected prototype:\nbool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Camera* cameraToPartition=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		osgViewer::DepthPartitionSettings* dps=luatop>2 ? dynamic_cast< osgViewer::DepthPartitionSettings* >(Luna< osg::Referenced >::check(L,3)) : (osgViewer::DepthPartitionSettings*)0;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera *, osgViewer::DepthPartitionSettings *)");
		}
		bool lret = self->setUpDepthPartitionForCamera(cameraToPartition, dps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0)
	static int _bind_setUpDepthPartition(lua_State *L) {
		if (!_lg_typecheck_setUpDepthPartition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0) function, expected prototype:\nbool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::DepthPartitionSettings* dsp=luatop>1 ? dynamic_cast< osgViewer::DepthPartitionSettings* >(Luna< osg::Referenced >::check(L,2)) : (osgViewer::DepthPartitionSettings*)0;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings *)");
		}
		bool lret = self->setUpDepthPartition(dsp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::containsCamera(const osg::Camera * camera) const
	static int _bind_containsCamera(lua_State *L) {
		if (!_lg_typecheck_containsCamera(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::containsCamera(const osg::Camera * camera) const function, expected prototype:\nbool osgViewer::View::containsCamera(const osg::Camera * camera) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::containsCamera(const osg::Camera *) const");
		}
		bool lret = self->containsCamera(camera);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const
	static int _bind_getCameraContainingPosition(lua_State *L) {
		if (!_lg_typecheck_getCameraContainingPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const function, expected prototype:\nconst osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float local_x=(float)lua_tonumber(L,4);
		float local_y=(float)lua_tonumber(L,5);

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::View::getCameraContainingPosition(float, float, float &, float &) const");
		}
		const osg::Camera * lret = self->getCameraContainingPosition(x, y, local_x, local_y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)
	static int _bind_computeIntersections_overload_1(lua_State *L) {
		if (!_lg_typecheck_computeIntersections_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) function, expected prototype:\nbool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)\nClass arguments details:\narg 3 ID = 19574398\n");
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		osgUtil::LineSegmentIntersector::Intersections* intersections_ptr=(Luna< osgUtil::LineSegmentIntersector::Intersections >::check(L,4));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osgViewer::View::computeIntersections function");
		}
		osgUtil::LineSegmentIntersector::Intersections & intersections=*intersections_ptr;
		unsigned int traversalMask=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 0xffffffff;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::computeIntersections(float, float, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)");
		}
		bool lret = self->computeIntersections(x, y, intersections, traversalMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)
	static int _bind_computeIntersections_overload_2(lua_State *L) {
		if (!_lg_typecheck_computeIntersections_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) function, expected prototype:\nbool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)\nClass arguments details:\narg 3 ID = 52841328\narg 4 ID = 19574398\n");
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,4));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgViewer::View::computeIntersections function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;
		osgUtil::LineSegmentIntersector::Intersections* intersections_ptr=(Luna< osgUtil::LineSegmentIntersector::Intersections >::check(L,5));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osgViewer::View::computeIntersections function");
		}
		osgUtil::LineSegmentIntersector::Intersections & intersections=*intersections_ptr;
		unsigned int traversalMask=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0xffffffff;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::View::computeIntersections(float, float, const osg::NodePath &, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)");
		}
		bool lret = self->computeIntersections(x, y, nodePath, intersections, traversalMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgViewer::View::computeIntersections
	static int _bind_computeIntersections(lua_State *L) {
		if (_lg_typecheck_computeIntersections_overload_1(L)) return _bind_computeIntersections_overload_1(L);
		if (_lg_typecheck_computeIntersections_overload_2(L)) return _bind_computeIntersections_overload_2(L);

		luaL_error(L, "error in function computeIntersections, cannot match any of the overloads for function computeIntersections:\n  computeIntersections(float, float, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)\n  computeIntersections(float, float, const osg::NodePath &, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)\n");
		return 0;
	}

	// void osgViewer::View::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestRedraw() function, expected prototype:\nvoid osgViewer::View::requestRedraw()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestRedraw()");
		}
		self->requestRedraw();

		return 0;
	}

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::View::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestContinuousUpdate(bool)");
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::View::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::View::requestWarpPointer(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestWarpPointer(float, float)");
		}
		self->requestWarpPointer(x, y);

		return 0;
	}

	// void osgViewer::View::assignSceneDataToCameras()
	static int _bind_assignSceneDataToCameras(lua_State *L) {
		if (!_lg_typecheck_assignSceneDataToCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::assignSceneDataToCameras() function, expected prototype:\nvoid osgViewer::View::assignSceneDataToCameras()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::assignSceneDataToCameras()");
		}
		self->assignSceneDataToCameras();

		return 0;
	}

	// void osgViewer::View::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::View::init() function, expected prototype:\nvoid osgViewer::View::init()\nClass arguments details:\n");
		}


		osgViewer::View* self=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::View::init()");
		}
		self->init();

		return 0;
	}


	// Operator binds:

};

osgViewer::View* LunaTraits< osgViewer::View >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_View::_bind_ctor(L);
}

void LunaTraits< osgViewer::View >::_bind_dtor(osgViewer::View* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::View >::className[] = "View";
const char LunaTraits< osgViewer::View >::fullName[] = "osgViewer::View";
const char LunaTraits< osgViewer::View >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::View >::parents[] = {"osg.View", "osgGA.GUIActionAdapter", 0};
const int LunaTraits< osgViewer::View >::hash = 42836746;
const int LunaTraits< osgViewer::View >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::View >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_View::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_View::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_View::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_View::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_View::_bind_className},
	{"asView", &luna_wrapper_osgViewer_View::_bind_asView},
	{"getViewerBase", &luna_wrapper_osgViewer_View::_bind_getViewerBase},
	{"take", &luna_wrapper_osgViewer_View::_bind_take},
	{"setStartTick", &luna_wrapper_osgViewer_View::_bind_setStartTick},
	{"getStartTick", &luna_wrapper_osgViewer_View::_bind_getStartTick},
	{"getScene", &luna_wrapper_osgViewer_View::_bind_getScene},
	{"setSceneData", &luna_wrapper_osgViewer_View::_bind_setSceneData},
	{"getSceneData", &luna_wrapper_osgViewer_View::_bind_getSceneData},
	{"setDatabasePager", &luna_wrapper_osgViewer_View::_bind_setDatabasePager},
	{"getDatabasePager", &luna_wrapper_osgViewer_View::_bind_getDatabasePager},
	{"setImagePager", &luna_wrapper_osgViewer_View::_bind_setImagePager},
	{"getImagePager", &luna_wrapper_osgViewer_View::_bind_getImagePager},
	{"setEventQueue", &luna_wrapper_osgViewer_View::_bind_setEventQueue},
	{"getEventQueue", &luna_wrapper_osgViewer_View::_bind_getEventQueue},
	{"setCameraManipulator", &luna_wrapper_osgViewer_View::_bind_setCameraManipulator},
	{"getCameraManipulator", &luna_wrapper_osgViewer_View::_bind_getCameraManipulator},
	{"home", &luna_wrapper_osgViewer_View::_bind_home},
	{"addEventHandler", &luna_wrapper_osgViewer_View::_bind_addEventHandler},
	{"removeEventHandler", &luna_wrapper_osgViewer_View::_bind_removeEventHandler},
	{"getEventHandlers", &luna_wrapper_osgViewer_View::_bind_getEventHandlers},
	{"setCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_setCoordinateSystemNodePath},
	{"getCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_getCoordinateSystemNodePath},
	{"computeActiveCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_computeActiveCoordinateSystemNodePath},
	{"setDisplaySettings", &luna_wrapper_osgViewer_View::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osgViewer_View::_bind_getDisplaySettings},
	{"setFusionDistance", &luna_wrapper_osgViewer_View::_bind_setFusionDistance},
	{"getFusionDistanceMode", &luna_wrapper_osgViewer_View::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgViewer_View::_bind_getFusionDistanceValue},
	{"setUpViewAcrossAllScreens", &luna_wrapper_osgViewer_View::_bind_setUpViewAcrossAllScreens},
	{"setUpViewInWindow", &luna_wrapper_osgViewer_View::_bind_setUpViewInWindow},
	{"setUpViewOnSingleScreen", &luna_wrapper_osgViewer_View::_bind_setUpViewOnSingleScreen},
	{"setUpViewFor3DSphericalDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewFor3DSphericalDisplay},
	{"setUpViewForPanoramicSphericalDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewForPanoramicSphericalDisplay},
	{"setUpViewForWoWVxDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewForWoWVxDisplay},
	{"setUpDepthPartitionForCamera", &luna_wrapper_osgViewer_View::_bind_setUpDepthPartitionForCamera},
	{"setUpDepthPartition", &luna_wrapper_osgViewer_View::_bind_setUpDepthPartition},
	{"containsCamera", &luna_wrapper_osgViewer_View::_bind_containsCamera},
	{"getCameraContainingPosition", &luna_wrapper_osgViewer_View::_bind_getCameraContainingPosition},
	{"computeIntersections", &luna_wrapper_osgViewer_View::_bind_computeIntersections},
	{"requestRedraw", &luna_wrapper_osgViewer_View::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgViewer_View::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgViewer_View::_bind_requestWarpPointer},
	{"assignSceneDataToCameras", &luna_wrapper_osgViewer_View::_bind_assignSceneDataToCameras},
	{"init", &luna_wrapper_osgViewer_View::_bind_init},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::View >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_View::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_View::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::View >::enumValues[] = {
	{0,0}
};


