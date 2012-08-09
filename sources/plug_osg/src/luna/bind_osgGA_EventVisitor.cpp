#include <plug_common.h>

class luna_wrapper_osgGA_EventVisitor {
public:
	typedef Luna< osgGA::EventVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::EventVisitor* ptr= dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::EventVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_setActionAdapter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85302998)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActionAdapter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActionAdapter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEventHandled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42735238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEvents_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEvents_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::EventVisitor::EventVisitor()
	static osgGA::EventVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor::EventVisitor() function, expected prototype:\nosgGA::EventVisitor::EventVisitor()\nClass arguments details:\n");
		}


		return new osgGA::EventVisitor();
	}


	// Function binds:
	// const char * osgGA::EventVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::EventVisitor::libraryName() const function, expected prototype:\nconst char * osgGA::EventVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::EventVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::EventVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::EventVisitor::className() const function, expected prototype:\nconst char * osgGA::EventVisitor::className() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::EventVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::EventVisitor::setActionAdapter(osgGA::GUIActionAdapter * actionAdapter)
	static int _bind_setActionAdapter(lua_State *L) {
		if (!_lg_typecheck_setActionAdapter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::setActionAdapter(osgGA::GUIActionAdapter * actionAdapter) function, expected prototype:\nvoid osgGA::EventVisitor::setActionAdapter(osgGA::GUIActionAdapter * actionAdapter)\nClass arguments details:\narg 1 ID = 85302998\n");
		}

		osgGA::GUIActionAdapter* actionAdapter=(Luna< osgGA::GUIActionAdapter >::check(L,2));

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::setActionAdapter(osgGA::GUIActionAdapter *)");
		}
		self->setActionAdapter(actionAdapter);

		return 0;
	}

	// osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter()
	static int _bind_getActionAdapter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getActionAdapter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter() function, expected prototype:\nosgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter()\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter()");
		}
		osgGA::GUIActionAdapter * lret = self->getActionAdapter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIActionAdapter >::push(L,lret,false);

		return 1;
	}

	// const osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter() const
	static int _bind_getActionAdapter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getActionAdapter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter() const function, expected prototype:\nconst osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::GUIActionAdapter * osgGA::EventVisitor::getActionAdapter() const");
		}
		const osgGA::GUIActionAdapter * lret = self->getActionAdapter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIActionAdapter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventVisitor::getActionAdapter
	static int _bind_getActionAdapter(lua_State *L) {
		if (_lg_typecheck_getActionAdapter_overload_1(L)) return _bind_getActionAdapter_overload_1(L);
		if (_lg_typecheck_getActionAdapter_overload_2(L)) return _bind_getActionAdapter_overload_2(L);

		luaL_error(L, "error in function getActionAdapter, cannot match any of the overloads for function getActionAdapter:\n  getActionAdapter()\n  getActionAdapter()\n");
		return 0;
	}

	// void osgGA::EventVisitor::addEvent(osgGA::GUIEventAdapter * event)
	static int _bind_addEvent(lua_State *L) {
		if (!_lg_typecheck_addEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::addEvent(osgGA::GUIEventAdapter * event) function, expected prototype:\nvoid osgGA::EventVisitor::addEvent(osgGA::GUIEventAdapter * event)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::GUIEventAdapter* event=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::addEvent(osgGA::GUIEventAdapter *)");
		}
		self->addEvent(event);

		return 0;
	}

	// void osgGA::EventVisitor::removeEvent(osgGA::GUIEventAdapter * event)
	static int _bind_removeEvent(lua_State *L) {
		if (!_lg_typecheck_removeEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::removeEvent(osgGA::GUIEventAdapter * event) function, expected prototype:\nvoid osgGA::EventVisitor::removeEvent(osgGA::GUIEventAdapter * event)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgGA::GUIEventAdapter* event=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::removeEvent(osgGA::GUIEventAdapter *)");
		}
		self->removeEvent(event);

		return 0;
	}

	// void osgGA::EventVisitor::setEventHandled(bool handled)
	static int _bind_setEventHandled(lua_State *L) {
		if (!_lg_typecheck_setEventHandled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::setEventHandled(bool handled) function, expected prototype:\nvoid osgGA::EventVisitor::setEventHandled(bool handled)\nClass arguments details:\n");
		}

		bool handled=(bool)(lua_toboolean(L,2)==1);

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::setEventHandled(bool)");
		}
		self->setEventHandled(handled);

		return 0;
	}

	// bool osgGA::EventVisitor::getEventHandled() const
	static int _bind_getEventHandled(lua_State *L) {
		if (!_lg_typecheck_getEventHandled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::EventVisitor::getEventHandled() const function, expected prototype:\nbool osgGA::EventVisitor::getEventHandled() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::EventVisitor::getEventHandled() const");
		}
		bool lret = self->getEventHandled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::EventVisitor::setEvents(const osgGA::EventQueue::Events & events)
	static int _bind_setEvents(lua_State *L) {
		if (!_lg_typecheck_setEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::setEvents(const osgGA::EventQueue::Events & events) function, expected prototype:\nvoid osgGA::EventVisitor::setEvents(const osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n");
		}

		const osgGA::EventQueue::Events* events_ptr=(Luna< osgGA::EventQueue::Events >::check(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::EventVisitor::setEvents function");
		}
		const osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::setEvents(const osgGA::EventQueue::Events &)");
		}
		self->setEvents(events);

		return 0;
	}

	// osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents()
	static int _bind_getEvents_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEvents_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents() function, expected prototype:\nosgGA::EventQueue::Events & osgGA::EventVisitor::getEvents()\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents()");
		}
		const osgGA::EventQueue::Events* lret = &self->getEvents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue::Events >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents() const
	static int _bind_getEvents_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEvents_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents() const function, expected prototype:\nconst osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue::Events & osgGA::EventVisitor::getEvents() const");
		}
		const osgGA::EventQueue::Events* lret = &self->getEvents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue::Events >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::EventVisitor::getEvents
	static int _bind_getEvents(lua_State *L) {
		if (_lg_typecheck_getEvents_overload_1(L)) return _bind_getEvents_overload_1(L);
		if (_lg_typecheck_getEvents_overload_2(L)) return _bind_getEvents_overload_2(L);

		luaL_error(L, "error in function getEvents, cannot match any of the overloads for function getEvents:\n  getEvents()\n  getEvents()\n");
		return 0;
	}

	// void osgGA::EventVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::reset() function, expected prototype:\nvoid osgGA::EventVisitor::reset()\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Billboard &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::LightSource & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::LightSource & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::LightSource &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Projection &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osgGA::EventVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgGA::EventVisitor* self=dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::apply(osg::OccluderNode &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osgGA::EventVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::LightSource &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Switch &)\n  apply(osg::LOD &)\n  apply(osg::OccluderNode &)\n");
		return 0;
	}


	// Operator binds:

};

osgGA::EventVisitor* LunaTraits< osgGA::EventVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_EventVisitor::_bind_ctor(L);
}

void LunaTraits< osgGA::EventVisitor >::_bind_dtor(osgGA::EventVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::EventVisitor >::className[] = "EventVisitor";
const char LunaTraits< osgGA::EventVisitor >::fullName[] = "osgGA::EventVisitor";
const char LunaTraits< osgGA::EventVisitor >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::EventVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgGA::EventVisitor >::hash = 62157260;
const int LunaTraits< osgGA::EventVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::EventVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgGA_EventVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_EventVisitor::_bind_className},
	{"setActionAdapter", &luna_wrapper_osgGA_EventVisitor::_bind_setActionAdapter},
	{"getActionAdapter", &luna_wrapper_osgGA_EventVisitor::_bind_getActionAdapter},
	{"addEvent", &luna_wrapper_osgGA_EventVisitor::_bind_addEvent},
	{"removeEvent", &luna_wrapper_osgGA_EventVisitor::_bind_removeEvent},
	{"setEventHandled", &luna_wrapper_osgGA_EventVisitor::_bind_setEventHandled},
	{"getEventHandled", &luna_wrapper_osgGA_EventVisitor::_bind_getEventHandled},
	{"setEvents", &luna_wrapper_osgGA_EventVisitor::_bind_setEvents},
	{"getEvents", &luna_wrapper_osgGA_EventVisitor::_bind_getEvents},
	{"reset", &luna_wrapper_osgGA_EventVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgGA_EventVisitor::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::EventVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_EventVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::EventVisitor >::enumValues[] = {
	{0,0}
};

