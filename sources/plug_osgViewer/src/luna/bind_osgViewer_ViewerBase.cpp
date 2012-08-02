#include <plug_common.h>

class luna_wrapper_osgViewer_ViewerBase {
public:
	typedef Luna< osgViewer::ViewerBase > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::ViewerBase* ptr= dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ViewerBase >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
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

	inline static bool _lg_typecheck_setEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_done(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQuitEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQuitEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReleaseContextAtEndOfFrameHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReleaseContextAtEndOfFrameHint(lua_State *L) {
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

	inline static bool _lg_typecheck_setUpdateOperations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateOperations_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateOperations_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addUpdateOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUpdateOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRealizeOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRealizeOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRunFrameScheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRunFrameScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRunMaxFrameRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRunMaxFrameRate(lua_State *L) {
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

	inline static bool _lg_typecheck_frame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_renderingTraversals(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,62380053) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98734151) ) return false;
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

	inline static bool _lg_typecheck_checkWindowStatus_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkWindowStatus_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,62380053) ) return false;
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

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)
	static int _bind_setViewerStats(lua_State *L) {
		if (!_lg_typecheck_setViewerStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats) function, expected prototype:\nvoid osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Stats* stats=dynamic_cast< osg::Stats* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setViewerStats(osg::Stats *)");
		}
		self->setViewerStats(stats);

		return 0;
	}

	// osg::Stats * osgViewer::ViewerBase::getViewerStats()
	static int _bind_getViewerStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stats * osgViewer::ViewerBase::getViewerStats() function, expected prototype:\nosg::Stats * osgViewer::ViewerBase::getViewerStats()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stats * osgViewer::ViewerBase::getViewerStats()");
		}
		osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osgViewer::ViewerBase::getViewerStats() const
	static int _bind_getViewerStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Stats * osgViewer::ViewerBase::getViewerStats() const function, expected prototype:\nconst osg::Stats * osgViewer::ViewerBase::getViewerStats() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Stats * osgViewer::ViewerBase::getViewerStats() const");
		}
		const osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getViewerStats
	static int _bind_getViewerStats(lua_State *L) {
		if (_lg_typecheck_getViewerStats_overload_1(L)) return _bind_getViewerStats_overload_1(L);
		if (_lg_typecheck_getViewerStats_overload_2(L)) return _bind_getViewerStats_overload_2(L);

		luaL_error(L, "error in function getViewerStats, cannot match any of the overloads for function getViewerStats:\n  getViewerStats()\n  getViewerStats()\n");
		return 0;
	}

	// bool osgViewer::ViewerBase::readConfiguration(const std::string & filename)
	static int _bind_readConfiguration(lua_State *L) {
		if (!_lg_typecheck_readConfiguration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::readConfiguration(const std::string & filename) function, expected prototype:\nbool osgViewer::ViewerBase::readConfiguration(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::readConfiguration(const std::string &)");
		}
		bool lret = self->readConfiguration(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::ViewerBase::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::isRealized() const function, expected prototype:\nbool osgViewer::ViewerBase::isRealized() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::isRealized() const");
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::realize() function, expected prototype:\nvoid osgViewer::ViewerBase::realize()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::realize()");
		}
		self->realize();

		return 0;
	}

	// void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp)
	static int _bind_setEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_setEndBarrierPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp) function, expected prototype:\nvoid osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp)\nClass arguments details:\n");
		}

		osgViewer::ViewerBase::BarrierPosition bp=(osgViewer::ViewerBase::BarrierPosition)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition)");
		}
		self->setEndBarrierPosition(bp);

		return 0;
	}

	// osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const
	static int _bind_getEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_getEndBarrierPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const function, expected prototype:\nosgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const");
		}
		osgViewer::ViewerBase::BarrierPosition lret = self->getEndBarrierPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setDone(bool done)
	static int _bind_setDone(lua_State *L) {
		if (!_lg_typecheck_setDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setDone(bool done) function, expected prototype:\nvoid osgViewer::ViewerBase::setDone(bool done)\nClass arguments details:\n");
		}

		bool done=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setDone(bool)");
		}
		self->setDone(done);

		return 0;
	}

	// bool osgViewer::ViewerBase::done() const
	static int _bind_done(lua_State *L) {
		if (!_lg_typecheck_done(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::done() const function, expected prototype:\nbool osgViewer::ViewerBase::done() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::done() const");
		}
		bool lret = self->done();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor)
	static int _bind_setEventVisitor(lua_State *L) {
		if (!_lg_typecheck_setEventVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor) function, expected prototype:\nvoid osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::EventVisitor* eventVisitor=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor *)");
		}
		self->setEventVisitor(eventVisitor);

		return 0;
	}

	// osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor()
	static int _bind_getEventVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() function, expected prototype:\nosgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor()");
		}
		osgGA::EventVisitor * lret = self->getEventVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const
	static int _bind_getEventVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const function, expected prototype:\nconst osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const");
		}
		const osgGA::EventVisitor * lret = self->getEventVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getEventVisitor
	static int _bind_getEventVisitor(lua_State *L) {
		if (_lg_typecheck_getEventVisitor_overload_1(L)) return _bind_getEventVisitor_overload_1(L);
		if (_lg_typecheck_getEventVisitor_overload_2(L)) return _bind_getEventVisitor_overload_2(L);

		luaL_error(L, "error in function getEventVisitor, cannot match any of the overloads for function getEventVisitor:\n  getEventVisitor()\n  getEventVisitor()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::setKeyEventSetsDone(int key)
	static int _bind_setKeyEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_setKeyEventSetsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setKeyEventSetsDone(int key) function, expected prototype:\nvoid osgViewer::ViewerBase::setKeyEventSetsDone(int key)\nClass arguments details:\n");
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setKeyEventSetsDone(int)");
		}
		self->setKeyEventSetsDone(key);

		return 0;
	}

	// int osgViewer::ViewerBase::getKeyEventSetsDone() const
	static int _bind_getKeyEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_getKeyEventSetsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ViewerBase::getKeyEventSetsDone() const function, expected prototype:\nint osgViewer::ViewerBase::getKeyEventSetsDone() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ViewerBase::getKeyEventSetsDone() const");
		}
		int lret = self->getKeyEventSetsDone();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setQuitEventSetsDone(bool flag)
	static int _bind_setQuitEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_setQuitEventSetsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setQuitEventSetsDone(bool flag) function, expected prototype:\nvoid osgViewer::ViewerBase::setQuitEventSetsDone(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setQuitEventSetsDone(bool)");
		}
		self->setQuitEventSetsDone(flag);

		return 0;
	}

	// bool osgViewer::ViewerBase::getQuitEventSetsDone() const
	static int _bind_getQuitEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_getQuitEventSetsDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::getQuitEventSetsDone() const function, expected prototype:\nbool osgViewer::ViewerBase::getQuitEventSetsDone() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::getQuitEventSetsDone() const");
		}
		bool lret = self->getQuitEventSetsDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint)
	static int _bind_setReleaseContextAtEndOfFrameHint(lua_State *L) {
		if (!_lg_typecheck_setReleaseContextAtEndOfFrameHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint) function, expected prototype:\nvoid osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint)\nClass arguments details:\n");
		}

		bool hint=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool)");
		}
		self->setReleaseContextAtEndOfFrameHint(hint);

		return 0;
	}

	// bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const
	static int _bind_getReleaseContextAtEndOfFrameHint(lua_State *L) {
		if (!_lg_typecheck_getReleaseContextAtEndOfFrameHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const function, expected prototype:\nbool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const");
		}
		bool lret = self->getReleaseContextAtEndOfFrameHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor)
	static int _bind_setUpdateVisitor(lua_State *L) {
		if (!_lg_typecheck_setUpdateVisitor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor) function, expected prototype:\nvoid osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::UpdateVisitor* updateVisitor=dynamic_cast< osgUtil::UpdateVisitor* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor *)");
		}
		self->setUpdateVisitor(updateVisitor);

		return 0;
	}

	// osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor()
	static int _bind_getUpdateVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() function, expected prototype:\nosgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor()");
		}
		osgUtil::UpdateVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::UpdateVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const
	static int _bind_getUpdateVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const function, expected prototype:\nconst osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const");
		}
		const osgUtil::UpdateVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::UpdateVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getUpdateVisitor
	static int _bind_getUpdateVisitor(lua_State *L) {
		if (_lg_typecheck_getUpdateVisitor_overload_1(L)) return _bind_getUpdateVisitor_overload_1(L);
		if (_lg_typecheck_getUpdateVisitor_overload_2(L)) return _bind_getUpdateVisitor_overload_2(L);

		luaL_error(L, "error in function getUpdateVisitor, cannot match any of the overloads for function getUpdateVisitor:\n  getUpdateVisitor()\n  getUpdateVisitor()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations)
	static int _bind_setUpdateOperations(lua_State *L) {
		if (!_lg_typecheck_setUpdateOperations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations) function, expected prototype:\nvoid osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OperationQueue* operations=dynamic_cast< osg::OperationQueue* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue *)");
		}
		self->setUpdateOperations(operations);

		return 0;
	}

	// osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations()
	static int _bind_getUpdateOperations_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateOperations_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() function, expected prototype:\nosg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations()");
		}
		osg::OperationQueue * lret = self->getUpdateOperations();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const
	static int _bind_getUpdateOperations_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateOperations_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const function, expected prototype:\nconst osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const");
		}
		const osg::OperationQueue * lret = self->getUpdateOperations();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getUpdateOperations
	static int _bind_getUpdateOperations(lua_State *L) {
		if (_lg_typecheck_getUpdateOperations_overload_1(L)) return _bind_getUpdateOperations_overload_1(L);
		if (_lg_typecheck_getUpdateOperations_overload_2(L)) return _bind_getUpdateOperations_overload_2(L);

		luaL_error(L, "error in function getUpdateOperations, cannot match any of the overloads for function getUpdateOperations:\n  getUpdateOperations()\n  getUpdateOperations()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation)
	static int _bind_addUpdateOperation(lua_State *L) {
		if (!_lg_typecheck_addUpdateOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation) function, expected prototype:\nvoid osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Operation* operation=dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::addUpdateOperation(osg::Operation *)");
		}
		self->addUpdateOperation(operation);

		return 0;
	}

	// void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation)
	static int _bind_removeUpdateOperation(lua_State *L) {
		if (!_lg_typecheck_removeUpdateOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation) function, expected prototype:\nvoid osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Operation* operation=dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation *)");
		}
		self->removeUpdateOperation(operation);

		return 0;
	}

	// void osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op)
	static int _bind_setRealizeOperation(lua_State *L) {
		if (!_lg_typecheck_setRealizeOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op) function, expected prototype:\nvoid osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Operation* op=dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRealizeOperation(osg::Operation *)");
		}
		self->setRealizeOperation(op);

		return 0;
	}

	// osg::Operation * osgViewer::ViewerBase::getRealizeOperation()
	static int _bind_getRealizeOperation(lua_State *L) {
		if (!_lg_typecheck_getRealizeOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Operation * osgViewer::ViewerBase::getRealizeOperation() function, expected prototype:\nosg::Operation * osgViewer::ViewerBase::getRealizeOperation()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Operation * osgViewer::ViewerBase::getRealizeOperation()");
		}
		osg::Operation * lret = self->getRealizeOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Operation >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs)
	static int _bind_setRunFrameScheme(lua_State *L) {
		if (!_lg_typecheck_setRunFrameScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs) function, expected prototype:\nvoid osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs)\nClass arguments details:\n");
		}

		osgViewer::ViewerBase::FrameScheme fs=(osgViewer::ViewerBase::FrameScheme)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme)");
		}
		self->setRunFrameScheme(fs);

		return 0;
	}

	// osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const
	static int _bind_getRunFrameScheme(lua_State *L) {
		if (!_lg_typecheck_getRunFrameScheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const function, expected prototype:\nosgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const");
		}
		osgViewer::ViewerBase::FrameScheme lret = self->getRunFrameScheme();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate)
	static int _bind_setRunMaxFrameRate(lua_State *L) {
		if (!_lg_typecheck_setRunMaxFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate) function, expected prototype:\nvoid osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate)\nClass arguments details:\n");
		}

		double frameRate=(double)lua_tonumber(L,2);

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRunMaxFrameRate(double)");
		}
		self->setRunMaxFrameRate(frameRate);

		return 0;
	}

	// double osgViewer::ViewerBase::getRunMaxFrameRate() const
	static int _bind_getRunMaxFrameRate(lua_State *L) {
		if (!_lg_typecheck_getRunMaxFrameRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::ViewerBase::getRunMaxFrameRate() const function, expected prototype:\ndouble osgViewer::ViewerBase::getRunMaxFrameRate() const\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::ViewerBase::getRunMaxFrameRate() const");
		}
		double lret = self->getRunMaxFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgViewer::ViewerBase::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::ViewerBase::run() function, expected prototype:\nint osgViewer::ViewerBase::run()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::ViewerBase::run()");
		}
		int lret = self->run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::ViewerBase::checkNeedToDoFrame()
	static int _bind_checkNeedToDoFrame(lua_State *L) {
		if (!_lg_typecheck_checkNeedToDoFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::checkNeedToDoFrame() function, expected prototype:\nbool osgViewer::ViewerBase::checkNeedToDoFrame()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::checkNeedToDoFrame()");
		}
		bool lret = self->checkNeedToDoFrame();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	static int _bind_frame(lua_State *L) {
		if (!_lg_typecheck_frame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::frame(double)");
		}
		self->frame(simulationTime);

		return 0;
	}

	// void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)
	static int _bind_advance(lua_State *L) {
		if (!_lg_typecheck_advance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::advance(double)");
		}
		self->advance(simulationTime);

		return 0;
	}

	// void osgViewer::ViewerBase::eventTraversal()
	static int _bind_eventTraversal(lua_State *L) {
		if (!_lg_typecheck_eventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::eventTraversal() function, expected prototype:\nvoid osgViewer::ViewerBase::eventTraversal()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::eventTraversal()");
		}
		self->eventTraversal();

		return 0;
	}

	// void osgViewer::ViewerBase::updateTraversal()
	static int _bind_updateTraversal(lua_State *L) {
		if (!_lg_typecheck_updateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::updateTraversal() function, expected prototype:\nvoid osgViewer::ViewerBase::updateTraversal()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::updateTraversal()");
		}
		self->updateTraversal();

		return 0;
	}

	// void osgViewer::ViewerBase::renderingTraversals()
	static int _bind_renderingTraversals(lua_State *L) {
		if (!_lg_typecheck_renderingTraversals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::renderingTraversals() function, expected prototype:\nvoid osgViewer::ViewerBase::renderingTraversals()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::renderingTraversals()");
		}
		self->renderingTraversals();

		return 0;
	}

	// void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	static int _bind_getCameras(lua_State *L) {
		if (!_lg_typecheck_getCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 18740017\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Cameras* cameras_ptr=(Luna< osgViewer::ViewerBase::Cameras >::check(L,2));
		if( !cameras_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameras in osgViewer::ViewerBase::getCameras function");
		}
		osgViewer::ViewerBase::Cameras & cameras=*cameras_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras &, bool)");
		}
		self->getCameras(cameras, onlyActive);

		return 0;
	}

	// void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	static int _bind_getContexts(lua_State *L) {
		if (!_lg_typecheck_getContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 62380053\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< osgViewer::ViewerBase::Contexts >::check(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::ViewerBase::getContexts function");
		}
		osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts &, bool)");
		}
		self->getContexts(contexts, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	static int _bind_getWindows(lua_State *L) {
		if (!_lg_typecheck_getWindows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98734151\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Windows* windows_ptr=(Luna< osgViewer::ViewerBase::Windows >::check(L,2));
		if( !windows_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windows in osgViewer::ViewerBase::getWindows function");
		}
		osgViewer::ViewerBase::Windows & windows=*windows_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows &, bool)");
		}
		self->getWindows(windows, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	static int _bind_getScenes(lua_State *L) {
		if (!_lg_typecheck_getScenes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98997480\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Scenes* scenes_ptr=(Luna< osgViewer::ViewerBase::Scenes >::check(L,2));
		if( !scenes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scenes in osgViewer::ViewerBase::getScenes function");
		}
		osgViewer::ViewerBase::Scenes & scenes=*scenes_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes &, bool)");
		}
		self->getScenes(scenes, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 2917259\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Views* views_ptr=(Luna< osgViewer::ViewerBase::Views >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::ViewerBase::getViews function");
		}
		osgViewer::ViewerBase::Views & views=*views_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views &, bool)");
		}
		self->getViews(views, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::checkWindowStatus()
	static int _bind_checkWindowStatus_overload_1(lua_State *L) {
		if (!_lg_typecheck_checkWindowStatus_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::checkWindowStatus() function, expected prototype:\nvoid osgViewer::ViewerBase::checkWindowStatus()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::checkWindowStatus()");
		}
		self->checkWindowStatus();

		return 0;
	}

	// void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts)
	static int _bind_checkWindowStatus_overload_2(lua_State *L) {
		if (!_lg_typecheck_checkWindowStatus_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts) function, expected prototype:\nvoid osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts)\nClass arguments details:\narg 1 ID = 62380053\n");
		}

		const osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< osgViewer::ViewerBase::Contexts >::check(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::ViewerBase::checkWindowStatus function");
		}
		const osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts &)");
		}
		self->checkWindowStatus(contexts);

		return 0;
	}

	// Overload binder for osgViewer::ViewerBase::checkWindowStatus
	static int _bind_checkWindowStatus(lua_State *L) {
		if (_lg_typecheck_checkWindowStatus_overload_1(L)) return _bind_checkWindowStatus_overload_1(L);
		if (_lg_typecheck_checkWindowStatus_overload_2(L)) return _bind_checkWindowStatus_overload_2(L);

		luaL_error(L, "error in function checkWindowStatus, cannot match any of the overloads for function checkWindowStatus:\n  checkWindowStatus()\n  checkWindowStatus(const osgViewer::ViewerBase::Contexts &)\n");
		return 0;
	}

	// double osgViewer::ViewerBase::elapsedTime()
	static int _bind_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_elapsedTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::ViewerBase::elapsedTime() function, expected prototype:\ndouble osgViewer::ViewerBase::elapsedTime()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::ViewerBase::elapsedTime()");
		}
		double lret = self->elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()
	static int _bind_getViewerFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getViewerFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()\nClass arguments details:\n");
		}


		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()");
		}
		osg::FrameStamp * lret = self->getViewerFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ViewerBase::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ViewerBase* self=dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::ViewerBase* LunaTraits< osgViewer::ViewerBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)
	// osg::Stats * osgViewer::ViewerBase::getViewerStats()
	// const osg::Stats * osgViewer::ViewerBase::getViewerStats() const
	// bool osgViewer::ViewerBase::readConfiguration(const std::string & filename)
	// bool osgViewer::ViewerBase::isRealized() const
	// void osgViewer::ViewerBase::realize()
	// bool osgViewer::ViewerBase::checkNeedToDoFrame()
	// void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)
	// void osgViewer::ViewerBase::eventTraversal()
	// void osgViewer::ViewerBase::updateTraversal()
	// void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	// void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	// void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)
	// void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)
	// void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	// void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	// double osgViewer::ViewerBase::elapsedTime()
	// osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()
	// void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const
	// void osgViewer::ViewerBase::viewerInit()
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const

	// Abstract operators:
}

void LunaTraits< osgViewer::ViewerBase >::_bind_dtor(osgViewer::ViewerBase* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ViewerBase >::className[] = "ViewerBase";
const char LunaTraits< osgViewer::ViewerBase >::fullName[] = "osgViewer::ViewerBase";
const char LunaTraits< osgViewer::ViewerBase >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ViewerBase >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgViewer::ViewerBase >::hash = 64483830;
const int LunaTraits< osgViewer::ViewerBase >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ViewerBase >::methods[] = {
	{"setViewerStats", &luna_wrapper_osgViewer_ViewerBase::_bind_setViewerStats},
	{"getViewerStats", &luna_wrapper_osgViewer_ViewerBase::_bind_getViewerStats},
	{"readConfiguration", &luna_wrapper_osgViewer_ViewerBase::_bind_readConfiguration},
	{"isRealized", &luna_wrapper_osgViewer_ViewerBase::_bind_isRealized},
	{"realize", &luna_wrapper_osgViewer_ViewerBase::_bind_realize},
	{"setEndBarrierPosition", &luna_wrapper_osgViewer_ViewerBase::_bind_setEndBarrierPosition},
	{"getEndBarrierPosition", &luna_wrapper_osgViewer_ViewerBase::_bind_getEndBarrierPosition},
	{"setDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setDone},
	{"done", &luna_wrapper_osgViewer_ViewerBase::_bind_done},
	{"setEventVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_setEventVisitor},
	{"getEventVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_getEventVisitor},
	{"setKeyEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setKeyEventSetsDone},
	{"getKeyEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_getKeyEventSetsDone},
	{"setQuitEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setQuitEventSetsDone},
	{"getQuitEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_getQuitEventSetsDone},
	{"setReleaseContextAtEndOfFrameHint", &luna_wrapper_osgViewer_ViewerBase::_bind_setReleaseContextAtEndOfFrameHint},
	{"getReleaseContextAtEndOfFrameHint", &luna_wrapper_osgViewer_ViewerBase::_bind_getReleaseContextAtEndOfFrameHint},
	{"setUpdateVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_setUpdateVisitor},
	{"getUpdateVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_getUpdateVisitor},
	{"setUpdateOperations", &luna_wrapper_osgViewer_ViewerBase::_bind_setUpdateOperations},
	{"getUpdateOperations", &luna_wrapper_osgViewer_ViewerBase::_bind_getUpdateOperations},
	{"addUpdateOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_addUpdateOperation},
	{"removeUpdateOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_removeUpdateOperation},
	{"setRealizeOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_setRealizeOperation},
	{"getRealizeOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_getRealizeOperation},
	{"setRunFrameScheme", &luna_wrapper_osgViewer_ViewerBase::_bind_setRunFrameScheme},
	{"getRunFrameScheme", &luna_wrapper_osgViewer_ViewerBase::_bind_getRunFrameScheme},
	{"setRunMaxFrameRate", &luna_wrapper_osgViewer_ViewerBase::_bind_setRunMaxFrameRate},
	{"getRunMaxFrameRate", &luna_wrapper_osgViewer_ViewerBase::_bind_getRunMaxFrameRate},
	{"run", &luna_wrapper_osgViewer_ViewerBase::_bind_run},
	{"checkNeedToDoFrame", &luna_wrapper_osgViewer_ViewerBase::_bind_checkNeedToDoFrame},
	{"frame", &luna_wrapper_osgViewer_ViewerBase::_bind_frame},
	{"advance", &luna_wrapper_osgViewer_ViewerBase::_bind_advance},
	{"eventTraversal", &luna_wrapper_osgViewer_ViewerBase::_bind_eventTraversal},
	{"updateTraversal", &luna_wrapper_osgViewer_ViewerBase::_bind_updateTraversal},
	{"renderingTraversals", &luna_wrapper_osgViewer_ViewerBase::_bind_renderingTraversals},
	{"getCameras", &luna_wrapper_osgViewer_ViewerBase::_bind_getCameras},
	{"getContexts", &luna_wrapper_osgViewer_ViewerBase::_bind_getContexts},
	{"getWindows", &luna_wrapper_osgViewer_ViewerBase::_bind_getWindows},
	{"getScenes", &luna_wrapper_osgViewer_ViewerBase::_bind_getScenes},
	{"getViews", &luna_wrapper_osgViewer_ViewerBase::_bind_getViews},
	{"checkWindowStatus", &luna_wrapper_osgViewer_ViewerBase::_bind_checkWindowStatus},
	{"elapsedTime", &luna_wrapper_osgViewer_ViewerBase::_bind_elapsedTime},
	{"getViewerFrameStamp", &luna_wrapper_osgViewer_ViewerBase::_bind_getViewerFrameStamp},
	{"getUsage", &luna_wrapper_osgViewer_ViewerBase::_bind_getUsage},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ViewerBase::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase >::enumValues[] = {
	{"SingleThreaded", osgViewer::ViewerBase::SingleThreaded},
	{"CullDrawThreadPerContext", osgViewer::ViewerBase::CullDrawThreadPerContext},
	{"ThreadPerContext", osgViewer::ViewerBase::ThreadPerContext},
	{"DrawThreadPerContext", osgViewer::ViewerBase::DrawThreadPerContext},
	{"CullThreadPerCameraDrawThreadPerContext", osgViewer::ViewerBase::CullThreadPerCameraDrawThreadPerContext},
	{"ThreadPerCamera", osgViewer::ViewerBase::ThreadPerCamera},
	{"AutomaticSelection", osgViewer::ViewerBase::AutomaticSelection},
	{"BeforeSwapBuffers", osgViewer::ViewerBase::BeforeSwapBuffers},
	{"AfterSwapBuffers", osgViewer::ViewerBase::AfterSwapBuffers},
	{"ON_DEMAND", osgViewer::ViewerBase::ON_DEMAND},
	{"CONTINUOUS", osgViewer::ViewerBase::CONTINUOUS},
	{0,0}
};


