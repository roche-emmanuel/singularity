#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_MultiTouchTrackballManipulator.h>

class luna_wrapper_osgGA_MultiTouchTrackballManipulator {
public:
	typedef Luna< osgGA::MultiTouchTrackballManipulator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgGA::MultiTouchTrackballManipulator* ptr= dynamic_cast< osgGA::MultiTouchTrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::MultiTouchTrackballManipulator* ptr= luna_caster< osg::Referenced, osgGA::MultiTouchTrackballManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::MultiTouchTrackballManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getHomePosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_finishAnimation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTrackballSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWheelZoomFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMinimumDistance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::MultiTouchTrackballManipulator(flags);
	}

	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::MultiTouchTrackballManipulator* tm_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osgGA::MultiTouchTrackballManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::MultiTouchTrackballManipulator(tm, copyOp);
	}

	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new wrapper_osgGA_MultiTouchTrackballManipulator(L,NULL, flags);
	}

	// osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator(lua_Table * data, const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::MultiTouchTrackballManipulator* tm_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,2));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osgGA::MultiTouchTrackballManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>2 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgGA_MultiTouchTrackballManipulator(L,NULL, tm, copyOp);
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::MultiTouchTrackballManipulator
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function MultiTouchTrackballManipulator, cannot match any of the overloads for function MultiTouchTrackballManipulator:\n  MultiTouchTrackballManipulator(int)\n  MultiTouchTrackballManipulator(const osgGA::MultiTouchTrackballManipulator &, const osg::CopyOp &)\n  MultiTouchTrackballManipulator(lua_Table *, int)\n  MultiTouchTrackballManipulator(lua_Table *, const osgGA::MultiTouchTrackballManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::className() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::MultiTouchTrackballManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::MultiTouchTrackballManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setName(const std::string &)");
		}
		self->MultiTouchTrackballManipulator::setName(name);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_computeDataVariance()");
		}
		self->MultiTouchTrackballManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setUserData(osg::Referenced *)");
		}
		self->MultiTouchTrackballManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData()\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData()");
		}
		osg::Referenced * lret = self->MultiTouchTrackballManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::MultiTouchTrackballManipulator::base_getUserData() const");
		}
		const osg::Referenced * lret = self->MultiTouchTrackballManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_releaseGLObjects(osg::State *) const");
		}
		self->MultiTouchTrackballManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_event(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->MultiTouchTrackballManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *)");
		}
		self->MultiTouchTrackballManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::MultiTouchTrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::MultiTouchTrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool)");
		}
		self->MultiTouchTrackballManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::MultiTouchTrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::MultiTouchTrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const");
		}
		self->MultiTouchTrackballManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setAutoComputeHomePosition(bool)");
		}
		self->MultiTouchTrackballManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Camera* camera=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) : (const osg::Camera*)((void *) 0);
		bool useBoundingBox=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_computeHomePosition(const osg::Camera *, bool)");
		}
		self->MultiTouchTrackballManipulator::computeHomePosition(camera, useBoundingBox);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setNode(osg::Node *)");
		}
		self->MultiTouchTrackballManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode() const");
		}
		const osg::Node * lret = self->MultiTouchTrackballManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode()\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::MultiTouchTrackballManipulator::base_getNode()");
		}
		osg::Node * lret = self->MultiTouchTrackballManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setVerticalAxisFixed(bool value)
	static int _bind_base_setVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_base_setVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setVerticalAxisFixed(bool value) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setVerticalAxisFixed(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setVerticalAxisFixed(bool)");
		}
		self->MultiTouchTrackballManipulator::setVerticalAxisFixed(value);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setAllowThrow(bool allowThrow)
	static int _bind_base_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_base_setAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setAllowThrow(bool allowThrow)\nClass arguments details:\n");
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setAllowThrow(bool)");
		}
		self->MultiTouchTrackballManipulator::setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setAnimationTime(const double t)
	static int _bind_base_setAnimationTime(lua_State *L) {
		if (!_lg_typecheck_base_setAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setAnimationTime(const double t) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setAnimationTime(const double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setAnimationTime(const double)");
		}
		self->MultiTouchTrackballManipulator::setAnimationTime(t);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_finishAnimation()
	static int _bind_base_finishAnimation(lua_State *L) {
		if (!_lg_typecheck_base_finishAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_finishAnimation() function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_finishAnimation()\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_finishAnimation()");
		}
		self->MultiTouchTrackballManipulator::finishAnimation();

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::MultiTouchTrackballManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->MultiTouchTrackballManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_home(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_home(double)");
		}
		self->MultiTouchTrackballManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::MultiTouchTrackballManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		self->MultiTouchTrackballManipulator::init(_arg1, _arg2);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_getUsage(osg::ApplicationUsage &) const");
		}
		self->MultiTouchTrackballManipulator::getUsage(_arg1);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::MultiTouchTrackballManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setByMatrix(const osg::Matrixd &)");
		}
		self->MultiTouchTrackballManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::MultiTouchTrackballManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setByInverseMatrix(const osg::Matrixd &)");
		}
		self->MultiTouchTrackballManipulator::setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getMatrix() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getMatrix() const");
		}
		osg::Matrixd stack_lret = self->MultiTouchTrackballManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::MultiTouchTrackballManipulator::base_getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->MultiTouchTrackballManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	static int _bind_base_setTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::MultiTouchTrackballManipulator::base_setTransformation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d &, const osg::Quat &)");
		}
		self->MultiTouchTrackballManipulator::setTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_base_setTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::MultiTouchTrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::MultiTouchTrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)");
		}
		self->MultiTouchTrackballManipulator::setTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::base_setTransformation
	static int _bind_base_setTransformation(lua_State *L) {
		if (_lg_typecheck_base_setTransformation_overload_1(L)) return _bind_base_setTransformation_overload_1(L);
		if (_lg_typecheck_base_setTransformation_overload_2(L)) return _bind_base_setTransformation_overload_2(L);

		luaL_error(L, "error in function base_setTransformation, cannot match any of the overloads for function base_setTransformation:\n  base_setTransformation(const osg::Vec3d &, const osg::Quat &)\n  base_setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	static int _bind_base_getTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::MultiTouchTrackballManipulator::base_getTransformation function");
		}
		osg::Quat & rotation=*rotation_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d &, osg::Quat &) const");
		}
		self->MultiTouchTrackballManipulator::getTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::MultiTouchTrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::MultiTouchTrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::MultiTouchTrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const");
		}
		self->MultiTouchTrackballManipulator::getTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::MultiTouchTrackballManipulator::base_getTransformation
	static int _bind_base_getTransformation(lua_State *L) {
		if (_lg_typecheck_base_getTransformation_overload_1(L)) return _bind_base_getTransformation_overload_1(L);
		if (_lg_typecheck_base_getTransformation_overload_2(L)) return _bind_base_getTransformation_overload_2(L);

		luaL_error(L, "error in function base_getTransformation, cannot match any of the overloads for function base_getTransformation:\n  base_getTransformation(osg::Vec3d &, osg::Quat &)\n  base_getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setCenter(const osg::Vec3d & center)
	static int _bind_base_setCenter(lua_State *L) {
		if (!_lg_typecheck_base_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setCenter(const osg::Vec3d & center) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setCenter(const osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::MultiTouchTrackballManipulator::base_setCenter function");
		}
		const osg::Vec3d & center=*center_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setCenter(const osg::Vec3d &)");
		}
		self->MultiTouchTrackballManipulator::setCenter(center);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setRotation(const osg::Quat & rotation)
	static int _bind_base_setRotation(lua_State *L) {
		if (!_lg_typecheck_base_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setRotation(const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setRotation(const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::MultiTouchTrackballManipulator::base_setRotation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setRotation(const osg::Quat &)");
		}
		self->MultiTouchTrackballManipulator::setRotation(rotation);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setDistance(double distance)
	static int _bind_base_setDistance(lua_State *L) {
		if (!_lg_typecheck_base_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setDistance(double distance) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setDistance(double distance)\nClass arguments details:\n");
		}

		double distance=(double)lua_tonumber(L,2);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setDistance(double)");
		}
		self->MultiTouchTrackballManipulator::setDistance(distance);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setTrackballSize(const double & size)
	static int _bind_base_setTrackballSize(lua_State *L) {
		if (!_lg_typecheck_base_setTrackballSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setTrackballSize(const double & size) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setTrackballSize(const double & size)\nClass arguments details:\n");
		}

		double size=(double)lua_tonumber(L,2);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setTrackballSize(const double &)");
		}
		self->MultiTouchTrackballManipulator::setTrackballSize(size);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor)
	static int _bind_base_setWheelZoomFactor(lua_State *L) {
		if (!_lg_typecheck_base_setWheelZoomFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor)\nClass arguments details:\n");
		}

		double wheelZoomFactor=(double)lua_tonumber(L,2);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setWheelZoomFactor(double)");
		}
		self->MultiTouchTrackballManipulator::setWheelZoomFactor(wheelZoomFactor);

		return 0;
	}

	// void osgGA::MultiTouchTrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = NULL)
	static int _bind_base_setMinimumDistance(lua_State *L) {
		if (!_lg_typecheck_base_setMinimumDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = NULL) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double minimumDistance=(double)lua_tonumber(L,2);
		bool relativeToModelSize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : ((void *) 0);

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::base_setMinimumDistance(const double &, bool)");
		}
		self->MultiTouchTrackballManipulator::setMinimumDistance(minimumDistance, relativeToModelSize);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceMode() const");
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->MultiTouchTrackballManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::MultiTouchTrackballManipulator::base_getFusionDistanceValue() const");
		}
		float lret = self->MultiTouchTrackballManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osgGA::MultiTouchTrackballManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::base_cloneType() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::base_cloneType() const");
		}
		osg::Object * lret = self->MultiTouchTrackballManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::MultiTouchTrackballManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::MultiTouchTrackballManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::MultiTouchTrackballManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::MultiTouchTrackballManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::MultiTouchTrackballManipulator::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->MultiTouchTrackballManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->MultiTouchTrackballManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::base_libraryName() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::base_libraryName() const");
		}
		const char * lret = self->MultiTouchTrackballManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::MultiTouchTrackballManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::MultiTouchTrackballManipulator::base_className() const function, expected prototype:\nconst char * osgGA::MultiTouchTrackballManipulator::base_className() const\nClass arguments details:\n");
		}


		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::MultiTouchTrackballManipulator::base_className() const");
		}
		const char * lret = self->MultiTouchTrackballManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgGA::MultiTouchTrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::MultiTouchTrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::MultiTouchTrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::MultiTouchTrackballManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::MultiTouchTrackballManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::MultiTouchTrackballManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->MultiTouchTrackballManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgGA::MultiTouchTrackballManipulator* LunaTraits< osgGA::MultiTouchTrackballManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgGA::MultiTouchTrackballManipulator >::_bind_dtor(osgGA::MultiTouchTrackballManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::className[] = "MultiTouchTrackballManipulator";
const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::fullName[] = "osgGA::MultiTouchTrackballManipulator";
const char LunaTraits< osgGA::MultiTouchTrackballManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::MultiTouchTrackballManipulator >::parents[] = {"osgGA.TrackballManipulator", 0};
const int LunaTraits< osgGA::MultiTouchTrackballManipulator >::hash = 26730151;
const int LunaTraits< osgGA::MultiTouchTrackballManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::MultiTouchTrackballManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_className},
	{"handle", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_handle},
	{"base_setName", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_releaseGLObjects},
	{"base_event", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_setHomePosition", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_computeHomePosition", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_computeHomePosition},
	{"base_setNode", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getNode},
	{"base_setVerticalAxisFixed", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setVerticalAxisFixed},
	{"base_setAllowThrow", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setAllowThrow},
	{"base_setAnimationTime", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setAnimationTime},
	{"base_finishAnimation", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_finishAnimation},
	{"base_home", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_init},
	{"base_getUsage", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getUsage},
	{"base_setByMatrix", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getInverseMatrix},
	{"base_setTransformation", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setTransformation},
	{"base_getTransformation", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getTransformation},
	{"base_setCenter", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setCenter},
	{"base_setRotation", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setRotation},
	{"base_setDistance", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setDistance},
	{"base_setTrackballSize", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setTrackballSize},
	{"base_setWheelZoomFactor", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setWheelZoomFactor},
	{"base_setMinimumDistance", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_setMinimumDistance},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_getFusionDistanceValue},
	{"base_cloneType", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_className},
	{"base_handle", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_base_handle},
	{"__eq", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind___eq},
	{"getTable", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::MultiTouchTrackballManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_MultiTouchTrackballManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::MultiTouchTrackballManipulator >::enumValues[] = {
	{0,0}
};


