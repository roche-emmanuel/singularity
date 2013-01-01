#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_StandardManipulator.h>

class luna_wrapper_osgGA_StandardManipulator {
public:
	typedef Luna< osgGA::StandardManipulator > luna_t;

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
		//osgGA::StandardManipulator* ptr= dynamic_cast< osgGA::StandardManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::StandardManipulator* ptr= luna_caster< osg::Referenced, osgGA::StandardManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::StandardManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAnimating(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_finishAnimation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_base_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::StandardManipulator::StandardManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::StandardManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::StandardManipulator::StandardManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::StandardManipulator::StandardManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new wrapper_osgGA_StandardManipulator(L,NULL, flags);
	}

	// osgGA::StandardManipulator::StandardManipulator(lua_Table * data, const osgGA::StandardManipulator & m, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::StandardManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::StandardManipulator::StandardManipulator(lua_Table * data, const osgGA::StandardManipulator & m, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::StandardManipulator::StandardManipulator(lua_Table * data, const osgGA::StandardManipulator & m, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::StandardManipulator* m_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osgGA::StandardManipulator::StandardManipulator function");
		}
		const osgGA::StandardManipulator & m=*m_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::StandardManipulator::StandardManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>2 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgGA_StandardManipulator(L,NULL, m, copyOp);
	}

	// Overload binder for osgGA::StandardManipulator::StandardManipulator
	static osgGA::StandardManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StandardManipulator, cannot match any of the overloads for function StandardManipulator:\n  StandardManipulator(lua_Table *, int)\n  StandardManipulator(lua_Table *, const osgGA::StandardManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::StandardManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::StandardManipulator::className() const function, expected prototype:\nconst char * osgGA::StandardManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::StandardManipulator::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	static int _bind_setTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setTransformation(const osg::Vec3d &, const osg::Quat &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_setTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::setTransformation
	static int _bind_setTransformation(lua_State *L) {
		if (_lg_typecheck_setTransformation_overload_1(L)) return _bind_setTransformation_overload_1(L);
		if (_lg_typecheck_setTransformation_overload_2(L)) return _bind_setTransformation_overload_2(L);

		luaL_error(L, "error in function setTransformation, cannot match any of the overloads for function setTransformation:\n  setTransformation(const osg::Vec3d &, const osg::Quat &)\n  setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	static int _bind_getTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const function, expected prototype:\nvoid osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Quat & rotation=*rotation_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getTransformation(osg::Vec3d &, osg::Quat &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->getTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_getTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTransformation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::getTransformation function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->getTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::getTransformation
	static int _bind_getTransformation(lua_State *L) {
		if (_lg_typecheck_getTransformation_overload_1(L)) return _bind_getTransformation_overload_1(L);
		if (_lg_typecheck_getTransformation_overload_2(L)) return _bind_getTransformation_overload_2(L);

		luaL_error(L, "error in function getTransformation, cannot match any of the overloads for function getTransformation:\n  getTransformation(osg::Vec3d &, osg::Quat &)\n  getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::setNode(osg::Node * arg1)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::StandardManipulator::setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setNode(osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::StandardManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::StandardManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::StandardManipulator::getNode() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::StandardManipulator::getNode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::StandardManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::StandardManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::StandardManipulator::getNode()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::StandardManipulator::getNode(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StandardManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::StandardManipulator::setVerticalAxisFixed(bool value)
	static int _bind_setVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_setVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setVerticalAxisFixed(bool value) function, expected prototype:\nvoid osgGA::StandardManipulator::setVerticalAxisFixed(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setVerticalAxisFixed(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setVerticalAxisFixed(value);

		return 0;
	}

	// bool osgGA::StandardManipulator::getVerticalAxisFixed() const
	static int _bind_getVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_getVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::getVerticalAxisFixed() const function, expected prototype:\nbool osgGA::StandardManipulator::getVerticalAxisFixed() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::getVerticalAxisFixed() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getVerticalAxisFixed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::StandardManipulator::getAllowThrow() const
	static int _bind_getAllowThrow(lua_State *L) {
		if (!_lg_typecheck_getAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::getAllowThrow() const function, expected prototype:\nbool osgGA::StandardManipulator::getAllowThrow() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::getAllowThrow() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getAllowThrow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::setAllowThrow(bool allowThrow)
	static int _bind_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_setAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::StandardManipulator::setAllowThrow(bool allowThrow)\nClass arguments details:\n");
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setAllowThrow(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::StandardManipulator::setAnimationTime(const double t)
	static int _bind_setAnimationTime(lua_State *L) {
		if (!_lg_typecheck_setAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::setAnimationTime(const double t) function, expected prototype:\nvoid osgGA::StandardManipulator::setAnimationTime(const double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::setAnimationTime(const double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setAnimationTime(t);

		return 0;
	}

	// double osgGA::StandardManipulator::getAnimationTime() const
	static int _bind_getAnimationTime(lua_State *L) {
		if (!_lg_typecheck_getAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgGA::StandardManipulator::getAnimationTime() const function, expected prototype:\ndouble osgGA::StandardManipulator::getAnimationTime() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgGA::StandardManipulator::getAnimationTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getAnimationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgGA::StandardManipulator::isAnimating() const
	static int _bind_isAnimating(lua_State *L) {
		if (!_lg_typecheck_isAnimating(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::isAnimating() const function, expected prototype:\nbool osgGA::StandardManipulator::isAnimating() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::isAnimating() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isAnimating();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::finishAnimation()
	static int _bind_finishAnimation(lua_State *L) {
		if (!_lg_typecheck_finishAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::finishAnimation() function, expected prototype:\nvoid osgGA::StandardManipulator::finishAnimation()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::finishAnimation(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->finishAnimation();

		return 0;
	}

	// void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::StandardManipulator::home(double arg1)
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::home(double arg1) function, expected prototype:\nvoid osgGA::StandardManipulator::home(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::home(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StandardManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::StandardManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->getUsage(_arg1);

		return 0;
	}

	// void osgGA::StandardManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setName(name);

		return 0;
	}

	// void osgGA::StandardManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::StandardManipulator::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::StandardManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::StandardManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::StandardManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::StandardManipulator::base_getUserData()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::StandardManipulator::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->StandardManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::StandardManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::StandardManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::StandardManipulator::base_getUserData() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::StandardManipulator::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->StandardManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StandardManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::StandardManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::StandardManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::StandardManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::StandardManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::StandardManipulator::base_cloneType() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::StandardManipulator::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->StandardManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::StandardManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::StandardManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::StandardManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::StandardManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->StandardManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::StandardManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::StandardManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->StandardManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::StandardManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::StandardManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::StandardManipulator::base_libraryName() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::StandardManipulator::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->StandardManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::StandardManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::StandardManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::StandardManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::StandardManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::StandardManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::StandardManipulator::base_getFusionDistanceMode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->StandardManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::StandardManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::StandardManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::StandardManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::StandardManipulator::base_getFusionDistanceValue() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->StandardManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::StandardManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::StandardManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::StandardManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::StandardManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::StandardManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::StandardManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) function, expected prototype:\nvoid osgGA::StandardManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Camera* camera=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) : (const osg::Camera*)((void *) 0);
		bool useBoundingBox=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_computeHomePosition(const osg::Camera *, bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::computeHomePosition(camera, useBoundingBox);

		return 0;
	}

	// const char * osgGA::StandardManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::StandardManipulator::base_className() const function, expected prototype:\nconst char * osgGA::StandardManipulator::base_className() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::StandardManipulator::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->StandardManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setNode(osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::StandardManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::StandardManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::StandardManipulator::base_getNode() const\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::StandardManipulator::base_getNode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Node * lret = self->StandardManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::StandardManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::StandardManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::StandardManipulator::base_getNode()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::StandardManipulator::base_getNode(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Node * lret = self->StandardManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StandardManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::StandardManipulator::base_setVerticalAxisFixed(bool value)
	static int _bind_base_setVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_base_setVerticalAxisFixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setVerticalAxisFixed(bool value) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setVerticalAxisFixed(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setVerticalAxisFixed(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setVerticalAxisFixed(value);

		return 0;
	}

	// void osgGA::StandardManipulator::base_setAllowThrow(bool allowThrow)
	static int _bind_base_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_base_setAllowThrow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setAllowThrow(bool allowThrow)\nClass arguments details:\n");
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setAllowThrow(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::StandardManipulator::base_setAnimationTime(const double t)
	static int _bind_base_setAnimationTime(lua_State *L) {
		if (!_lg_typecheck_base_setAnimationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_setAnimationTime(const double t) function, expected prototype:\nvoid osgGA::StandardManipulator::base_setAnimationTime(const double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_setAnimationTime(const double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::setAnimationTime(t);

		return 0;
	}

	// void osgGA::StandardManipulator::base_finishAnimation()
	static int _bind_base_finishAnimation(lua_State *L) {
		if (!_lg_typecheck_base_finishAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_finishAnimation() function, expected prototype:\nvoid osgGA::StandardManipulator::base_finishAnimation()\nClass arguments details:\n");
		}


		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_finishAnimation(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::finishAnimation();

		return 0;
	}

	// void osgGA::StandardManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::StandardManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::StandardManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::StandardManipulator::base_home(double arg1)\nClass arguments details:\n");
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_home(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::StandardManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// void osgGA::StandardManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::StandardManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::StandardManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::StandardManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::StandardManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StandardManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::StandardManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->StandardManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::StandardManipulator::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::StandardManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::StandardManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StandardManipulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->StandardManipulator::getUsage(_arg1);

		return 0;
	}


	// Operator binds:

};

osgGA::StandardManipulator* LunaTraits< osgGA::StandardManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_StandardManipulator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	// void osgGA::StandardManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	// void osgGA::StandardManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	// void osgGA::CameraManipulator::setByMatrix(const osg::Matrixd & matrix)
	// void osgGA::CameraManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	// osg::Matrixd osgGA::CameraManipulator::getMatrix() const
	// osg::Matrixd osgGA::CameraManipulator::getInverseMatrix() const
}

void LunaTraits< osgGA::StandardManipulator >::_bind_dtor(osgGA::StandardManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::StandardManipulator >::className[] = "StandardManipulator";
const char LunaTraits< osgGA::StandardManipulator >::fullName[] = "osgGA::StandardManipulator";
const char LunaTraits< osgGA::StandardManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::StandardManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::StandardManipulator >::hash = 14466020;
const int LunaTraits< osgGA::StandardManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::StandardManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_StandardManipulator::_bind_className},
	{"setTransformation", &luna_wrapper_osgGA_StandardManipulator::_bind_setTransformation},
	{"getTransformation", &luna_wrapper_osgGA_StandardManipulator::_bind_getTransformation},
	{"setNode", &luna_wrapper_osgGA_StandardManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_StandardManipulator::_bind_getNode},
	{"setVerticalAxisFixed", &luna_wrapper_osgGA_StandardManipulator::_bind_setVerticalAxisFixed},
	{"getVerticalAxisFixed", &luna_wrapper_osgGA_StandardManipulator::_bind_getVerticalAxisFixed},
	{"getAllowThrow", &luna_wrapper_osgGA_StandardManipulator::_bind_getAllowThrow},
	{"setAllowThrow", &luna_wrapper_osgGA_StandardManipulator::_bind_setAllowThrow},
	{"setAnimationTime", &luna_wrapper_osgGA_StandardManipulator::_bind_setAnimationTime},
	{"getAnimationTime", &luna_wrapper_osgGA_StandardManipulator::_bind_getAnimationTime},
	{"isAnimating", &luna_wrapper_osgGA_StandardManipulator::_bind_isAnimating},
	{"finishAnimation", &luna_wrapper_osgGA_StandardManipulator::_bind_finishAnimation},
	{"home", &luna_wrapper_osgGA_StandardManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_StandardManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_StandardManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_StandardManipulator::_bind_getUsage},
	{"base_setName", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_StandardManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_StandardManipulator::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_StandardManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_StandardManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_StandardManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_StandardManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_StandardManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getFusionDistanceValue},
	{"base_setHomePosition", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_computeHomePosition", &luna_wrapper_osgGA_StandardManipulator::_bind_base_computeHomePosition},
	{"base_className", &luna_wrapper_osgGA_StandardManipulator::_bind_base_className},
	{"base_setNode", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getNode},
	{"base_setVerticalAxisFixed", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setVerticalAxisFixed},
	{"base_setAllowThrow", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setAllowThrow},
	{"base_setAnimationTime", &luna_wrapper_osgGA_StandardManipulator::_bind_base_setAnimationTime},
	{"base_finishAnimation", &luna_wrapper_osgGA_StandardManipulator::_bind_base_finishAnimation},
	{"base_home", &luna_wrapper_osgGA_StandardManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_StandardManipulator::_bind_base_init},
	{"base_handle", &luna_wrapper_osgGA_StandardManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_StandardManipulator::_bind_base_getUsage},
	{"__eq", &luna_wrapper_osgGA_StandardManipulator::_bind___eq},
	{"getTable", &luna_wrapper_osgGA_StandardManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::StandardManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_StandardManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::StandardManipulator >::enumValues[] = {
	{"UPDATE_MODEL_SIZE", osgGA::StandardManipulator::UPDATE_MODEL_SIZE},
	{"COMPUTE_HOME_USING_BBOX", osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX},
	{"PROCESS_MOUSE_WHEEL", osgGA::StandardManipulator::PROCESS_MOUSE_WHEEL},
	{"SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT", osgGA::StandardManipulator::SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT},
	{"DEFAULT_SETTINGS", osgGA::StandardManipulator::DEFAULT_SETTINGS},
	{0,0}
};


