#include <plug_common.h>

class luna_wrapper_osg_NodeVisitor {
public:
	typedef Luna< osg::NodeVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::NodeVisitor* ptr= dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeVisitor >::push(L,ptr,false);
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

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisitorType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisitorType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNodeMaskOverride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeMaskOverride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validNodeMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushOntoNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popFromNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseRequestHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequestHandler_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequestHandler_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImageRequestHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageRequestHandler_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageRequestHandler_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode tm=luatop>0 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,1) : osg::NodeVisitor::TRAVERSE_NONE;

		return new osg::NodeVisitor(tm);
	}

	// osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::VisitorType type=(osg::NodeVisitor::VisitorType)lua_tointeger(L,1);
		osg::NodeVisitor::TraversalMode tm=luatop>1 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,2) : osg::NodeVisitor::TRAVERSE_NONE;

		return new osg::NodeVisitor(type, tm);
	}

	// Overload binder for osg::NodeVisitor::NodeVisitor
	static osg::NodeVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function NodeVisitor, cannot match any of the overloads for function NodeVisitor:\n  NodeVisitor(osg::NodeVisitor::TraversalMode)\n  NodeVisitor(osg::NodeVisitor::VisitorType, osg::NodeVisitor::TraversalMode)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::NodeVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::libraryName() const function, expected prototype:\nconst char * osg::NodeVisitor::libraryName() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::className() const function, expected prototype:\nconst char * osg::NodeVisitor::className() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::reset() function, expected prototype:\nvoid osg::NodeVisitor::reset()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type)
	static int _bind_setVisitorType(lua_State *L) {
		if (!_lg_typecheck_setVisitorType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type) function, expected prototype:\nvoid osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type)\nClass arguments details:\n");
		}

		osg::NodeVisitor::VisitorType type=(osg::NodeVisitor::VisitorType)lua_tointeger(L,2);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType)");
		}
		self->setVisitorType(type);

		return 0;
	}

	// osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const
	static int _bind_getVisitorType(lua_State *L) {
		if (!_lg_typecheck_getVisitorType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const function, expected prototype:\nosg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const");
		}
		osg::NodeVisitor::VisitorType lret = self->getVisitorType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalNumber(unsigned int fn)
	static int _bind_setTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_setTraversalNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalNumber(unsigned int fn) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalNumber(unsigned int fn)\nClass arguments details:\n");
		}

		unsigned int fn=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalNumber(unsigned int)");
		}
		self->setTraversalNumber(fn);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getTraversalNumber() const
	static int _bind_getTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_getTraversalNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getTraversalNumber() const function, expected prototype:\nunsigned int osg::NodeVisitor::getTraversalNumber() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getTraversalNumber() const");
		}
		unsigned int lret = self->getTraversalNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs)
	static int _bind_setFrameStamp(lua_State *L) {
		if (!_lg_typecheck_setFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::FrameStamp* fs=dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setFrameStamp(osg::FrameStamp *)");
		}
		self->setFrameStamp(fs);

		return 0;
	}

	// const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const
	static int _bind_getFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const");
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalMask(unsigned int mask)
	static int _bind_setTraversalMask(lua_State *L) {
		if (!_lg_typecheck_setTraversalMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalMask(unsigned int mask) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalMask(unsigned int)");
		}
		self->setTraversalMask(mask);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getTraversalMask() const
	static int _bind_getTraversalMask(lua_State *L) {
		if (!_lg_typecheck_getTraversalMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getTraversalMask() const function, expected prototype:\nunsigned int osg::NodeVisitor::getTraversalMask() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getTraversalMask() const");
		}
		unsigned int lret = self->getTraversalMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setNodeMaskOverride(unsigned int mask)
	static int _bind_setNodeMaskOverride(lua_State *L) {
		if (!_lg_typecheck_setNodeMaskOverride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setNodeMaskOverride(unsigned int mask) function, expected prototype:\nvoid osg::NodeVisitor::setNodeMaskOverride(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setNodeMaskOverride(unsigned int)");
		}
		self->setNodeMaskOverride(mask);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getNodeMaskOverride() const
	static int _bind_getNodeMaskOverride(lua_State *L) {
		if (!_lg_typecheck_getNodeMaskOverride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getNodeMaskOverride() const function, expected prototype:\nunsigned int osg::NodeVisitor::getNodeMaskOverride() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getNodeMaskOverride() const");
		}
		unsigned int lret = self->getNodeMaskOverride();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::NodeVisitor::validNodeMask(const osg::Node & node) const
	static int _bind_validNodeMask(lua_State *L) {
		if (!_lg_typecheck_validNodeMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::NodeVisitor::validNodeMask(const osg::Node & node) const function, expected prototype:\nbool osg::NodeVisitor::validNodeMask(const osg::Node & node) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::validNodeMask function");
		}
		const osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::NodeVisitor::validNodeMask(const osg::Node &) const");
		}
		bool lret = self->validNodeMask(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode)
	static int _bind_setTraversalMode(lua_State *L) {
		if (!_lg_typecheck_setTraversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode)\nClass arguments details:\n");
		}

		osg::NodeVisitor::TraversalMode mode=(osg::NodeVisitor::TraversalMode)lua_tointeger(L,2);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode)");
		}
		self->setTraversalMode(mode);

		return 0;
	}

	// osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const
	static int _bind_getTraversalMode(lua_State *L) {
		if (!_lg_typecheck_getTraversalMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const function, expected prototype:\nosg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const");
		}
		osg::NodeVisitor::TraversalMode lret = self->getTraversalMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::NodeVisitor::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setUserData(osg::Referenced *)");
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::NodeVisitor::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::NodeVisitor::getUserData() function, expected prototype:\nosg::Referenced * osg::NodeVisitor::getUserData()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::NodeVisitor::getUserData()");
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::NodeVisitor::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::NodeVisitor::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::NodeVisitor::getUserData() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::NodeVisitor::getUserData() const");
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// void osg::NodeVisitor::traverse(osg::Node & node)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::traverse(osg::Node & node) function, expected prototype:\nvoid osg::NodeVisitor::traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::traverse function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::traverse(osg::Node &)");
		}
		self->traverse(node);

		return 0;
	}

	// void osg::NodeVisitor::pushOntoNodePath(osg::Node * node)
	static int _bind_pushOntoNodePath(lua_State *L) {
		if (!_lg_typecheck_pushOntoNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::pushOntoNodePath(osg::Node * node) function, expected prototype:\nvoid osg::NodeVisitor::pushOntoNodePath(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::pushOntoNodePath(osg::Node *)");
		}
		self->pushOntoNodePath(node);

		return 0;
	}

	// void osg::NodeVisitor::popFromNodePath()
	static int _bind_popFromNodePath(lua_State *L) {
		if (!_lg_typecheck_popFromNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::popFromNodePath() function, expected prototype:\nvoid osg::NodeVisitor::popFromNodePath()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::popFromNodePath()");
		}
		self->popFromNodePath();

		return 0;
	}

	// osg::NodePath & osg::NodeVisitor::getNodePath()
	static int _bind_getNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath & osg::NodeVisitor::getNodePath() function, expected prototype:\nosg::NodePath & osg::NodeVisitor::getNodePath()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath & osg::NodeVisitor::getNodePath()");
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// const osg::NodePath & osg::NodeVisitor::getNodePath() const
	static int _bind_getNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodePath & osg::NodeVisitor::getNodePath() const function, expected prototype:\nconst osg::NodePath & osg::NodeVisitor::getNodePath() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodePath & osg::NodeVisitor::getNodePath() const");
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getNodePath
	static int _bind_getNodePath(lua_State *L) {
		if (_lg_typecheck_getNodePath_overload_1(L)) return _bind_getNodePath_overload_1(L);
		if (_lg_typecheck_getNodePath_overload_2(L)) return _bind_getNodePath_overload_2(L);

		luaL_error(L, "error in function getNodePath, cannot match any of the overloads for function getNodePath:\n  getNodePath()\n  getNodePath()\n");
		return 0;
	}

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::getEyePoint() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	static int _bind_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::getViewPoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::getViewPoint() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const
	static int _bind_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & , bool ) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Billboard &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::ProxyNode & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::ProxyNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::ProxyNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ProxyNode* node_ptr=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::ProxyNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::ProxyNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Projection &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CoordinateSystemNode* node_ptr=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::CoordinateSystemNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::CoordinateSystemNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::ClipNode & node)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::ClipNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::ClipNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClipNode* node_ptr=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::ClipNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::ClipNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::TexGenNode & node)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::TexGenNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::TexGenNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexGenNode* node_ptr=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::TexGenNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::TexGenNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::LightSource & node)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::LightSource & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::LightSource &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Camera & node)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Camera & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Camera & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* node_ptr=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Camera & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Camera &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::CameraView & node)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::CameraView & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::CameraView & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CameraView* node_ptr=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::CameraView & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::CameraView &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::MatrixTransform & node)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::MatrixTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::MatrixTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::MatrixTransform* node_ptr=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::MatrixTransform & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::MatrixTransform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PositionAttitudeTransform* node_ptr=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::PositionAttitudeTransform & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::PositionAttitudeTransform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Sequence & node)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Sequence & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Sequence & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Sequence* node_ptr=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Sequence & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Sequence &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::PagedLOD & node)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::PagedLOD & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::PagedLOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PagedLOD* node_ptr=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::PagedLOD & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::PagedLOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::ClearNode & node)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::ClearNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::ClearNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClearNode* node_ptr=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::ClearNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::ClearNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::OccluderNode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)
	static int _bind_apply_overload_22(lua_State *L) {
		if (!_lg_typecheck_apply_overload_22(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OcclusionQueryNode* node_ptr=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::OcclusionQueryNode & node=*node_ptr;

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::OcclusionQueryNode &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osg::NodeVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);
		if (_lg_typecheck_apply_overload_12(L)) return _bind_apply_overload_12(L);
		if (_lg_typecheck_apply_overload_13(L)) return _bind_apply_overload_13(L);
		if (_lg_typecheck_apply_overload_14(L)) return _bind_apply_overload_14(L);
		if (_lg_typecheck_apply_overload_15(L)) return _bind_apply_overload_15(L);
		if (_lg_typecheck_apply_overload_16(L)) return _bind_apply_overload_16(L);
		if (_lg_typecheck_apply_overload_17(L)) return _bind_apply_overload_17(L);
		if (_lg_typecheck_apply_overload_18(L)) return _bind_apply_overload_18(L);
		if (_lg_typecheck_apply_overload_19(L)) return _bind_apply_overload_19(L);
		if (_lg_typecheck_apply_overload_20(L)) return _bind_apply_overload_20(L);
		if (_lg_typecheck_apply_overload_21(L)) return _bind_apply_overload_21(L);
		if (_lg_typecheck_apply_overload_22(L)) return _bind_apply_overload_22(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::Group &)\n  apply(osg::ProxyNode &)\n  apply(osg::Projection &)\n  apply(osg::CoordinateSystemNode &)\n  apply(osg::ClipNode &)\n  apply(osg::TexGenNode &)\n  apply(osg::LightSource &)\n  apply(osg::Transform &)\n  apply(osg::Camera &)\n  apply(osg::CameraView &)\n  apply(osg::MatrixTransform &)\n  apply(osg::PositionAttitudeTransform &)\n  apply(osg::Switch &)\n  apply(osg::Sequence &)\n  apply(osg::LOD &)\n  apply(osg::PagedLOD &)\n  apply(osg::ClearNode &)\n  apply(osg::OccluderNode &)\n  apply(osg::OcclusionQueryNode &)\n");
		return 0;
	}

	// void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler)
	static int _bind_setDatabaseRequestHandler(lua_State *L) {
		if (!_lg_typecheck_setDatabaseRequestHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler) function, expected prototype:\nvoid osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor::DatabaseRequestHandler* handler=dynamic_cast< osg::NodeVisitor::DatabaseRequestHandler* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler *)");
		}
		self->setDatabaseRequestHandler(handler);

		return 0;
	}

	// osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler()
	static int _bind_getDatabaseRequestHandler_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequestHandler_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() function, expected prototype:\nosg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler()");
		}
		osg::NodeVisitor::DatabaseRequestHandler * lret = self->getDatabaseRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const
	static int _bind_getDatabaseRequestHandler_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequestHandler_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const function, expected prototype:\nconst osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const");
		}
		const osg::NodeVisitor::DatabaseRequestHandler * lret = self->getDatabaseRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getDatabaseRequestHandler
	static int _bind_getDatabaseRequestHandler(lua_State *L) {
		if (_lg_typecheck_getDatabaseRequestHandler_overload_1(L)) return _bind_getDatabaseRequestHandler_overload_1(L);
		if (_lg_typecheck_getDatabaseRequestHandler_overload_2(L)) return _bind_getDatabaseRequestHandler_overload_2(L);

		luaL_error(L, "error in function getDatabaseRequestHandler, cannot match any of the overloads for function getDatabaseRequestHandler:\n  getDatabaseRequestHandler()\n  getDatabaseRequestHandler()\n");
		return 0;
	}

	// void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler)
	static int _bind_setImageRequestHandler(lua_State *L) {
		if (!_lg_typecheck_setImageRequestHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler) function, expected prototype:\nvoid osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor::ImageRequestHandler* handler=dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler *)");
		}
		self->setImageRequestHandler(handler);

		return 0;
	}

	// osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler()
	static int _bind_getImageRequestHandler_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImageRequestHandler_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() function, expected prototype:\nosg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler()\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler()");
		}
		osg::NodeVisitor::ImageRequestHandler * lret = self->getImageRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const
	static int _bind_getImageRequestHandler_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImageRequestHandler_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const function, expected prototype:\nconst osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const\nClass arguments details:\n");
		}


		osg::NodeVisitor* self=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const");
		}
		const osg::NodeVisitor::ImageRequestHandler * lret = self->getImageRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getImageRequestHandler
	static int _bind_getImageRequestHandler(lua_State *L) {
		if (_lg_typecheck_getImageRequestHandler_overload_1(L)) return _bind_getImageRequestHandler_overload_1(L);
		if (_lg_typecheck_getImageRequestHandler_overload_2(L)) return _bind_getImageRequestHandler_overload_2(L);

		luaL_error(L, "error in function getImageRequestHandler, cannot match any of the overloads for function getImageRequestHandler:\n  getImageRequestHandler()\n  getImageRequestHandler()\n");
		return 0;
	}


	// Operator binds:

};

osg::NodeVisitor* LunaTraits< osg::NodeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::NodeVisitor >::_bind_dtor(osg::NodeVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeVisitor >::className[] = "NodeVisitor";
const char LunaTraits< osg::NodeVisitor >::fullName[] = "osg::NodeVisitor";
const char LunaTraits< osg::NodeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeVisitor >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NodeVisitor >::hash = 49057446;
const int LunaTraits< osg::NodeVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osg_NodeVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osg_NodeVisitor::_bind_className},
	{"reset", &luna_wrapper_osg_NodeVisitor::_bind_reset},
	{"setVisitorType", &luna_wrapper_osg_NodeVisitor::_bind_setVisitorType},
	{"getVisitorType", &luna_wrapper_osg_NodeVisitor::_bind_getVisitorType},
	{"setTraversalNumber", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalNumber},
	{"getTraversalNumber", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalNumber},
	{"setFrameStamp", &luna_wrapper_osg_NodeVisitor::_bind_setFrameStamp},
	{"getFrameStamp", &luna_wrapper_osg_NodeVisitor::_bind_getFrameStamp},
	{"setTraversalMask", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalMask},
	{"getTraversalMask", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalMask},
	{"setNodeMaskOverride", &luna_wrapper_osg_NodeVisitor::_bind_setNodeMaskOverride},
	{"getNodeMaskOverride", &luna_wrapper_osg_NodeVisitor::_bind_getNodeMaskOverride},
	{"validNodeMask", &luna_wrapper_osg_NodeVisitor::_bind_validNodeMask},
	{"setTraversalMode", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalMode},
	{"getTraversalMode", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalMode},
	{"setUserData", &luna_wrapper_osg_NodeVisitor::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_NodeVisitor::_bind_getUserData},
	{"traverse", &luna_wrapper_osg_NodeVisitor::_bind_traverse},
	{"pushOntoNodePath", &luna_wrapper_osg_NodeVisitor::_bind_pushOntoNodePath},
	{"popFromNodePath", &luna_wrapper_osg_NodeVisitor::_bind_popFromNodePath},
	{"getNodePath", &luna_wrapper_osg_NodeVisitor::_bind_getNodePath},
	{"getEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getEyePoint},
	{"getViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_getViewPoint},
	{"getDistanceToEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceToEyePoint},
	{"getDistanceFromEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceFromEyePoint},
	{"getDistanceToViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceToViewPoint},
	{"apply", &luna_wrapper_osg_NodeVisitor::_bind_apply},
	{"setDatabaseRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_setDatabaseRequestHandler},
	{"getDatabaseRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_getDatabaseRequestHandler},
	{"setImageRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_setImageRequestHandler},
	{"getImageRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_getImageRequestHandler},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeVisitor >::enumValues[] = {
	{"TRAVERSE_NONE", osg::NodeVisitor::TRAVERSE_NONE},
	{"TRAVERSE_PARENTS", osg::NodeVisitor::TRAVERSE_PARENTS},
	{"TRAVERSE_ALL_CHILDREN", osg::NodeVisitor::TRAVERSE_ALL_CHILDREN},
	{"TRAVERSE_ACTIVE_CHILDREN", osg::NodeVisitor::TRAVERSE_ACTIVE_CHILDREN},
	{"NODE_VISITOR", osg::NodeVisitor::NODE_VISITOR},
	{"UPDATE_VISITOR", osg::NodeVisitor::UPDATE_VISITOR},
	{"EVENT_VISITOR", osg::NodeVisitor::EVENT_VISITOR},
	{"COLLECT_OCCLUDER_VISITOR", osg::NodeVisitor::COLLECT_OCCLUDER_VISITOR},
	{"CULL_VISITOR", osg::NodeVisitor::CULL_VISITOR},
	{0,0}
};


