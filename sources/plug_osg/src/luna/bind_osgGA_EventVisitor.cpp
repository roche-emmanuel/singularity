#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_EventVisitor.h>

class luna_wrapper_osgGA_EventVisitor {
public:
	typedef Luna< osgGA::EventVisitor > luna_t;

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
		//osgGA::EventVisitor* ptr= dynamic_cast< osgGA::EventVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgGA::EventVisitor* ptr= luna_caster< osg::Referenced, osgGA::EventVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::EventVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::EventVisitor::EventVisitor()
	static osgGA::EventVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor::EventVisitor() function, expected prototype:\nosgGA::EventVisitor::EventVisitor()\nClass arguments details:\n");
		}


		return new osgGA::EventVisitor();
	}

	// osgGA::EventVisitor::EventVisitor(lua_Table * data)
	static osgGA::EventVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor::EventVisitor(lua_Table * data) function, expected prototype:\nosgGA::EventVisitor::EventVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgGA_EventVisitor(L,NULL);
	}

	// Overload binder for osgGA::EventVisitor::EventVisitor
	static osgGA::EventVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EventVisitor, cannot match any of the overloads for function EventVisitor:\n  EventVisitor()\n  EventVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::EventVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::EventVisitor::libraryName() const function, expected prototype:\nconst char * osgGA::EventVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osgGA::GUIEventAdapter* event=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osgGA::GUIEventAdapter* event=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Billboard* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::LightSource* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Projection* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

		osg::OccluderNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
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

	// osg::Vec3f osgGA::EventVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgGA::EventVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgGA::EventVisitor::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgGA::EventVisitor::base_getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->EventVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgGA::EventVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgGA::EventVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgGA::EventVisitor::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgGA::EventVisitor::base_getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->EventVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgGA::EventVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::EventVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgGA::EventVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::EventVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::EventVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->EventVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::EventVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::EventVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgGA::EventVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::EventVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::EventVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->EventVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::EventVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgGA::EventVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgGA::EventVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::EventVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgGA::EventVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->EventVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgGA::EventVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::EventVisitor::base_libraryName() const function, expected prototype:\nconst char * osgGA::EventVisitor::base_libraryName() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::EventVisitor::base_libraryName() const");
		}
		const char * lret = self->EventVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::EventVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::EventVisitor::base_className() const function, expected prototype:\nconst char * osgGA::EventVisitor::base_className() const\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::EventVisitor::base_className() const");
		}
		const char * lret = self->EventVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::EventVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_reset() function, expected prototype:\nvoid osgGA::EventVisitor::base_reset()\nClass arguments details:\n");
		}


		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_reset()");
		}
		self->EventVisitor::reset();

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Node &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Geode &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Billboard & node)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Billboard & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Billboard &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::LightSource & node)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::LightSource & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LightSource* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::LightSource & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::LightSource &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Group & node)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Group & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Group & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Group &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Transform & node)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Transform & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Transform & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Transform &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Projection & node)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Projection & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Projection* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Projection & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Projection &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::Switch & node)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::Switch & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::Switch & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::Switch &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::LOD & node)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::LOD & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::LOD & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::LOD &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// void osgGA::EventVisitor::base_apply(osg::OccluderNode & node)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::base_apply(osg::OccluderNode & node) function, expected prototype:\nvoid osgGA::EventVisitor::base_apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::OccluderNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::base_apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osgGA::EventVisitor* self=Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::base_apply(osg::OccluderNode &)");
		}
		self->EventVisitor::apply(node);

		return 0;
	}

	// Overload binder for osgGA::EventVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);
		if (_lg_typecheck_base_apply_overload_9(L)) return _bind_base_apply_overload_9(L);
		if (_lg_typecheck_base_apply_overload_10(L)) return _bind_base_apply_overload_10(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Billboard &)\n  base_apply(osg::LightSource &)\n  base_apply(osg::Group &)\n  base_apply(osg::Transform &)\n  base_apply(osg::Projection &)\n  base_apply(osg::Switch &)\n  base_apply(osg::LOD &)\n  base_apply(osg::OccluderNode &)\n");
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
	{"base_getEyePoint", &luna_wrapper_osgGA_EventVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgGA_EventVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgGA_EventVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgGA_EventVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgGA_EventVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgGA_EventVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_EventVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgGA_EventVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgGA_EventVisitor::_bind_base_apply},
	{"__eq", &luna_wrapper_osgGA_EventVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::EventVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_EventVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::EventVisitor >::enumValues[] = {
	{0,0}
};


