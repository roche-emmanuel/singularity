#include <plug_common.h>

class luna_wrapper_osgUtil_IntersectionVisitor {
public:
	typedef Luna< osgUtil::IntersectionVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IntersectionVisitor* ptr= dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectionVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_setIntersector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersector_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersector_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseKdTreeWhenAvailable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseKdTreeWhenAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoDummyTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoDummyTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushWindowMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushWindowMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popWindowMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_pushViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_pushModelMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popModelMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceEyePoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceEyePointCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceEyePointCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)
	static osgUtil::IntersectionVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0) function, expected prototype:\nosgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector* intersector=luatop>0 ? dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1)) : (osgUtil::Intersector*)0;
		osgUtil::IntersectionVisitor::ReadCallback* readCallback=luatop>1 ? dynamic_cast< osgUtil::IntersectionVisitor::ReadCallback* >(Luna< osg::Referenced >::check(L,2)) : (osgUtil::IntersectionVisitor::ReadCallback*)0;

		return new osgUtil::IntersectionVisitor(intersector, readCallback);
	}


	// Function binds:
	// const char * osgUtil::IntersectionVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::IntersectionVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::className() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::reset() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector)
	static int _bind_setIntersector(lua_State *L) {
		if (!_lg_typecheck_setIntersector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::Intersector* intersector=dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector *)");
		}
		self->setIntersector(intersector);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector()
	static int _bind_getIntersector_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIntersector_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() function, expected prototype:\nosgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector()");
		}
		osgUtil::Intersector * lret = self->getIntersector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const
	static int _bind_getIntersector_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIntersector_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const function, expected prototype:\nconst osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const");
		}
		const osgUtil::Intersector * lret = self->getIntersector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getIntersector
	static int _bind_getIntersector(lua_State *L) {
		if (_lg_typecheck_getIntersector_overload_1(L)) return _bind_getIntersector_overload_1(L);
		if (_lg_typecheck_getIntersector_overload_2(L)) return _bind_getIntersector_overload_2(L);

		luaL_error(L, "error in function getIntersector, cannot match any of the overloads for function getIntersector:\n  getIntersector()\n  getIntersector()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees)
	static int _bind_setUseKdTreeWhenAvailable(lua_State *L) {
		if (!_lg_typecheck_setUseKdTreeWhenAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees)\nClass arguments details:\n");
		}

		bool useKdTrees=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool)");
		}
		self->setUseKdTreeWhenAvailable(useKdTrees);

		return 0;
	}

	// bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const
	static int _bind_getUseKdTreeWhenAvailable(lua_State *L) {
		if (!_lg_typecheck_getUseKdTreeWhenAvailable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const function, expected prototype:\nbool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const");
		}
		bool lret = self->getUseKdTreeWhenAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy)
	static int _bind_setDoDummyTraversal(lua_State *L) {
		if (!_lg_typecheck_setDoDummyTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy)\nClass arguments details:\n");
		}

		bool dummy=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool)");
		}
		self->setDoDummyTraversal(dummy);

		return 0;
	}

	// bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const
	static int _bind_getDoDummyTraversal(lua_State *L) {
		if (!_lg_typecheck_getDoDummyTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const function, expected prototype:\nbool osgUtil::IntersectionVisitor::getDoDummyTraversal() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const");
		}
		bool lret = self->getDoDummyTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc)
	static int _bind_setReadCallback(lua_State *L) {
		if (!_lg_typecheck_setReadCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::IntersectionVisitor::ReadCallback* rc=dynamic_cast< osgUtil::IntersectionVisitor::ReadCallback* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback *)");
		}
		self->setReadCallback(rc);

		return 0;
	}

	// osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback()
	static int _bind_getReadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReadCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() function, expected prototype:\nosgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback()");
		}
		osgUtil::IntersectionVisitor::ReadCallback * lret = self->getReadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const
	static int _bind_getReadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReadCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const function, expected prototype:\nconst osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const");
		}
		const osgUtil::IntersectionVisitor::ReadCallback * lret = self->getReadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getReadCallback
	static int _bind_getReadCallback(lua_State *L) {
		if (_lg_typecheck_getReadCallback_overload_1(L)) return _bind_getReadCallback_overload_1(L);
		if (_lg_typecheck_getReadCallback_overload_2(L)) return _bind_getReadCallback_overload_2(L);

		luaL_error(L, "error in function getReadCallback, cannot match any of the overloads for function getReadCallback:\n  getReadCallback()\n  getReadCallback()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushWindowMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_pushWindowMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd *)");
		}
		self->pushWindowMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport)
	static int _bind_pushWindowMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_pushWindowMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Viewport* viewport=dynamic_cast< osg::Viewport* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport *)");
		}
		self->pushWindowMatrix(viewport);

		return 0;
	}

	// Overload binder for osgUtil::IntersectionVisitor::pushWindowMatrix
	static int _bind_pushWindowMatrix(lua_State *L) {
		if (_lg_typecheck_pushWindowMatrix_overload_1(L)) return _bind_pushWindowMatrix_overload_1(L);
		if (_lg_typecheck_pushWindowMatrix_overload_2(L)) return _bind_pushWindowMatrix_overload_2(L);

		luaL_error(L, "error in function pushWindowMatrix, cannot match any of the overloads for function pushWindowMatrix:\n  pushWindowMatrix(osg::RefMatrixd *)\n  pushWindowMatrix(osg::Viewport *)\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::popWindowMatrix()
	static int _bind_popWindowMatrix(lua_State *L) {
		if (!_lg_typecheck_popWindowMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popWindowMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popWindowMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popWindowMatrix()");
		}
		self->popWindowMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix()
	static int _bind_getWindowMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWindowMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix()");
		}
		osg::RefMatrixd * lret = self->getWindowMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const
	static int _bind_getWindowMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWindowMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const");
		}
		const osg::RefMatrixd * lret = self->getWindowMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getWindowMatrix
	static int _bind_getWindowMatrix(lua_State *L) {
		if (_lg_typecheck_getWindowMatrix_overload_1(L)) return _bind_getWindowMatrix_overload_1(L);
		if (_lg_typecheck_getWindowMatrix_overload_2(L)) return _bind_getWindowMatrix_overload_2(L);

		luaL_error(L, "error in function getWindowMatrix, cannot match any of the overloads for function getWindowMatrix:\n  getWindowMatrix()\n  getWindowMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_pushProjectionMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd *)");
		}
		self->pushProjectionMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popProjectionMatrix()
	static int _bind_popProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_popProjectionMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popProjectionMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popProjectionMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popProjectionMatrix()");
		}
		self->popProjectionMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix()
	static int _bind_getProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix()");
		}
		osg::RefMatrixd * lret = self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const
	static int _bind_getProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const");
		}
		const osg::RefMatrixd * lret = self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getProjectionMatrix
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_getProjectionMatrix_overload_1(L)) return _bind_getProjectionMatrix_overload_1(L);
		if (_lg_typecheck_getProjectionMatrix_overload_2(L)) return _bind_getProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function getProjectionMatrix, cannot match any of the overloads for function getProjectionMatrix:\n  getProjectionMatrix()\n  getProjectionMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushViewMatrix(lua_State *L) {
		if (!_lg_typecheck_pushViewMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd *)");
		}
		self->pushViewMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popViewMatrix()
	static int _bind_popViewMatrix(lua_State *L) {
		if (!_lg_typecheck_popViewMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popViewMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popViewMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popViewMatrix()");
		}
		self->popViewMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix()
	static int _bind_getViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix()");
		}
		osg::RefMatrixd * lret = self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const
	static int _bind_getViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const");
		}
		const osg::RefMatrixd * lret = self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getViewMatrix
	static int _bind_getViewMatrix(lua_State *L) {
		if (_lg_typecheck_getViewMatrix_overload_1(L)) return _bind_getViewMatrix_overload_1(L);
		if (_lg_typecheck_getViewMatrix_overload_2(L)) return _bind_getViewMatrix_overload_2(L);

		luaL_error(L, "error in function getViewMatrix, cannot match any of the overloads for function getViewMatrix:\n  getViewMatrix()\n  getViewMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushModelMatrix(lua_State *L) {
		if (!_lg_typecheck_pushModelMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd *)");
		}
		self->pushModelMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popModelMatrix()
	static int _bind_popModelMatrix(lua_State *L) {
		if (!_lg_typecheck_popModelMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popModelMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popModelMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popModelMatrix()");
		}
		self->popModelMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix()
	static int _bind_getModelMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getModelMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix()\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix()");
		}
		osg::RefMatrixd * lret = self->getModelMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const
	static int _bind_getModelMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getModelMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const");
		}
		const osg::RefMatrixd * lret = self->getModelMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getModelMatrix
	static int _bind_getModelMatrix(lua_State *L) {
		if (_lg_typecheck_getModelMatrix_overload_1(L)) return _bind_getModelMatrix_overload_1(L);
		if (_lg_typecheck_getModelMatrix_overload_2(L)) return _bind_getModelMatrix_overload_2(L);

		luaL_error(L, "error in function getModelMatrix, cannot match any of the overloads for function getModelMatrix:\n  getModelMatrix()\n  getModelMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep)
	static int _bind_setReferenceEyePoint(lua_State *L) {
		if (!_lg_typecheck_setReferenceEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* ep_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !ep_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ep in osgUtil::IntersectionVisitor::setReferenceEyePoint function");
		}
		const osg::Vec3f & ep=*ep_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f &)");
		}
		self->setReferenceEyePoint(ep);

		return 0;
	}

	// const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const
	static int _bind_getReferenceEyePoint(lua_State *L) {
		if (!_lg_typecheck_getReferenceEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const function, expected prototype:\nconst osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const");
		}
		const osg::Vec3f* lret = &self->getReferenceEyePoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)
	static int _bind_setReferenceEyePointCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceEyePointCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)\nClass arguments details:\n");
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame)");
		}
		self->setReferenceEyePointCoordinateFrame(cf);

		return 0;
	}

	// osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const
	static int _bind_getReferenceEyePointCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceEyePointCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const function, expected prototype:\nosgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const");
		}
		osgUtil::Intersector::CoordinateFrame lret = self->getReferenceEyePointCoordinateFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode)
	static int _bind_setLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_setLODSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode)\nClass arguments details:\n");
		}

		osgUtil::IntersectionVisitor::LODSelectionMode mode=(osgUtil::IntersectionVisitor::LODSelectionMode)lua_tointeger(L,2);

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode)");
		}
		self->setLODSelectionMode(mode);

		return 0;
	}

	// osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const
	static int _bind_getLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_getLODSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const function, expected prototype:\nosgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const\nClass arguments details:\n");
		}


		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const");
		}
		osgUtil::IntersectionVisitor::LODSelectionMode lret = self->getLODSelectionMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const function, expected prototype:\nfloat osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::IntersectionVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		bool withLODScale=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToEyePoint(pos, withLODScale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* geode_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Billboard & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Billboard &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Group & group)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Group & group) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Group & group)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* group_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Group & group=*group_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Group &)");
		}
		self->apply(group);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::LOD & lod)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::LOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::LOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* lod_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::apply function");
		}
		osg::LOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::LOD &)");
		}
		self->apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PagedLOD* lod_ptr=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::apply function");
		}
		osg::PagedLOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::PagedLOD &)");
		}
		self->apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Transform & transform)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Transform & transform) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* transform_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Transform &)");
		}
		self->apply(transform);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Projection & projection)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* projection_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Projection &)");
		}
		self->apply(projection);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Camera & camera)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera_ptr=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::IntersectionVisitor* self=dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Camera &)");
		}
		self->apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::IntersectionVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::Group &)\n  apply(osg::LOD &)\n  apply(osg::PagedLOD &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Camera &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::IntersectionVisitor* LunaTraits< osgUtil::IntersectionVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectionVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::IntersectionVisitor >::_bind_dtor(osgUtil::IntersectionVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectionVisitor >::className[] = "IntersectionVisitor";
const char LunaTraits< osgUtil::IntersectionVisitor >::fullName[] = "osgUtil::IntersectionVisitor";
const char LunaTraits< osgUtil::IntersectionVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectionVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::IntersectionVisitor >::hash = 40140775;
const int LunaTraits< osgUtil::IntersectionVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectionVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_reset},
	{"setIntersector", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setIntersector},
	{"getIntersector", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getIntersector},
	{"setUseKdTreeWhenAvailable", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setUseKdTreeWhenAvailable},
	{"getUseKdTreeWhenAvailable", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getUseKdTreeWhenAvailable},
	{"setDoDummyTraversal", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setDoDummyTraversal},
	{"getDoDummyTraversal", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getDoDummyTraversal},
	{"setReadCallback", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReadCallback},
	{"getReadCallback", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReadCallback},
	{"pushWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushWindowMatrix},
	{"popWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popWindowMatrix},
	{"getWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getWindowMatrix},
	{"pushProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushProjectionMatrix},
	{"popProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popProjectionMatrix},
	{"getProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getProjectionMatrix},
	{"pushViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushViewMatrix},
	{"popViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popViewMatrix},
	{"getViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getViewMatrix},
	{"pushModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushModelMatrix},
	{"popModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popModelMatrix},
	{"getModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getModelMatrix},
	{"setReferenceEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReferenceEyePoint},
	{"getReferenceEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReferenceEyePoint},
	{"setReferenceEyePointCoordinateFrame", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReferenceEyePointCoordinateFrame},
	{"getReferenceEyePointCoordinateFrame", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReferenceEyePointCoordinateFrame},
	{"getEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getEyePoint},
	{"setLODSelectionMode", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setLODSelectionMode},
	{"getLODSelectionMode", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getLODSelectionMode},
	{"getDistanceToEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getDistanceToEyePoint},
	{"apply", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectionVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectionVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectionVisitor >::enumValues[] = {
	{"USE_HIGHEST_LEVEL_OF_DETAIL", osgUtil::IntersectionVisitor::USE_HIGHEST_LEVEL_OF_DETAIL},
	{"USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION", osgUtil::IntersectionVisitor::USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION},
	{0,0}
};

