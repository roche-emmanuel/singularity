#include <plug_common.h>

class luna_wrapper_osg_ObserverSet {
public:
	typedef Luna< osg::ObserverSet > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ObserverSet* ptr= dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ObserverSet >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getObserverdObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObserverdObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addRefLock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addObserver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58375525)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeObserver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58375525)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_signalObjectDeleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObservers_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObservers_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ObserverSet::ObserverSet(const osg::Referenced * observedObject)
	static osg::ObserverSet* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverSet::ObserverSet(const osg::Referenced * observedObject) function, expected prototype:\nosg::ObserverSet::ObserverSet(const osg::Referenced * observedObject)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Referenced* observedObject=(Luna< osg::Referenced >::check(L,1));

		return new osg::ObserverSet(observedObject);
	}


	// Function binds:
	// osg::Referenced * osg::ObserverSet::getObserverdObject()
	static int _bind_getObserverdObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getObserverdObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ObserverSet::getObserverdObject() function, expected prototype:\nosg::Referenced * osg::ObserverSet::getObserverdObject()\nClass arguments details:\n");
		}


		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ObserverSet::getObserverdObject()");
		}
		osg::Referenced * lret = self->getObserverdObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ObserverSet::getObserverdObject() const
	static int _bind_getObserverdObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getObserverdObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ObserverSet::getObserverdObject() const function, expected prototype:\nconst osg::Referenced * osg::ObserverSet::getObserverdObject() const\nClass arguments details:\n");
		}


		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ObserverSet::getObserverdObject() const");
		}
		const osg::Referenced * lret = self->getObserverdObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ObserverSet::getObserverdObject
	static int _bind_getObserverdObject(lua_State *L) {
		if (_lg_typecheck_getObserverdObject_overload_1(L)) return _bind_getObserverdObject_overload_1(L);
		if (_lg_typecheck_getObserverdObject_overload_2(L)) return _bind_getObserverdObject_overload_2(L);

		luaL_error(L, "error in function getObserverdObject, cannot match any of the overloads for function getObserverdObject:\n  getObserverdObject()\n  getObserverdObject()\n");
		return 0;
	}

	// osg::Referenced * osg::ObserverSet::addRefLock()
	static int _bind_addRefLock(lua_State *L) {
		if (!_lg_typecheck_addRefLock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ObserverSet::addRefLock() function, expected prototype:\nosg::Referenced * osg::ObserverSet::addRefLock()\nClass arguments details:\n");
		}


		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ObserverSet::addRefLock()");
		}
		osg::Referenced * lret = self->addRefLock();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// void osg::ObserverSet::addObserver(osg::Observer * observer)
	static int _bind_addObserver(lua_State *L) {
		if (!_lg_typecheck_addObserver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverSet::addObserver(osg::Observer * observer) function, expected prototype:\nvoid osg::ObserverSet::addObserver(osg::Observer * observer)\nClass arguments details:\narg 1 ID = 58375525\n");
		}

		osg::Observer* observer=(Luna< osg::Observer >::check(L,2));

		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverSet::addObserver(osg::Observer *)");
		}
		self->addObserver(observer);

		return 0;
	}

	// void osg::ObserverSet::removeObserver(osg::Observer * observer)
	static int _bind_removeObserver(lua_State *L) {
		if (!_lg_typecheck_removeObserver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverSet::removeObserver(osg::Observer * observer) function, expected prototype:\nvoid osg::ObserverSet::removeObserver(osg::Observer * observer)\nClass arguments details:\narg 1 ID = 58375525\n");
		}

		osg::Observer* observer=(Luna< osg::Observer >::check(L,2));

		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverSet::removeObserver(osg::Observer *)");
		}
		self->removeObserver(observer);

		return 0;
	}

	// void osg::ObserverSet::signalObjectDeleted(void * ptr)
	static int _bind_signalObjectDeleted(lua_State *L) {
		if (!_lg_typecheck_signalObjectDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverSet::signalObjectDeleted(void * ptr) function, expected prototype:\nvoid osg::ObserverSet::signalObjectDeleted(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverSet::signalObjectDeleted(void *)");
		}
		self->signalObjectDeleted(ptr);

		return 0;
	}

	// osg::ObserverSet::Observers & osg::ObserverSet::getObservers()
	static int _bind_getObservers_overload_1(lua_State *L) {
		if (!_lg_typecheck_getObservers_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverSet::Observers & osg::ObserverSet::getObservers() function, expected prototype:\nosg::ObserverSet::Observers & osg::ObserverSet::getObservers()\nClass arguments details:\n");
		}


		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ObserverSet::Observers & osg::ObserverSet::getObservers()");
		}
		const osg::ObserverSet::Observers* lret = &self->getObservers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverSet::Observers >::push(L,lret,false);

		return 1;
	}

	// const osg::ObserverSet::Observers & osg::ObserverSet::getObservers() const
	static int _bind_getObservers_overload_2(lua_State *L) {
		if (!_lg_typecheck_getObservers_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ObserverSet::Observers & osg::ObserverSet::getObservers() const function, expected prototype:\nconst osg::ObserverSet::Observers & osg::ObserverSet::getObservers() const\nClass arguments details:\n");
		}


		osg::ObserverSet* self=dynamic_cast< osg::ObserverSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ObserverSet::Observers & osg::ObserverSet::getObservers() const");
		}
		const osg::ObserverSet::Observers* lret = &self->getObservers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverSet::Observers >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ObserverSet::getObservers
	static int _bind_getObservers(lua_State *L) {
		if (_lg_typecheck_getObservers_overload_1(L)) return _bind_getObservers_overload_1(L);
		if (_lg_typecheck_getObservers_overload_2(L)) return _bind_getObservers_overload_2(L);

		luaL_error(L, "error in function getObservers, cannot match any of the overloads for function getObservers:\n  getObservers()\n  getObservers()\n");
		return 0;
	}


	// Operator binds:

};

osg::ObserverSet* LunaTraits< osg::ObserverSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ObserverSet::_bind_ctor(L);
}

void LunaTraits< osg::ObserverSet >::_bind_dtor(osg::ObserverSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ObserverSet >::className[] = "ObserverSet";
const char LunaTraits< osg::ObserverSet >::fullName[] = "osg::ObserverSet";
const char LunaTraits< osg::ObserverSet >::moduleName[] = "osg";
const char* LunaTraits< osg::ObserverSet >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ObserverSet >::hash = 65104703;
const int LunaTraits< osg::ObserverSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ObserverSet >::methods[] = {
	{"getObserverdObject", &luna_wrapper_osg_ObserverSet::_bind_getObserverdObject},
	{"addRefLock", &luna_wrapper_osg_ObserverSet::_bind_addRefLock},
	{"addObserver", &luna_wrapper_osg_ObserverSet::_bind_addObserver},
	{"removeObserver", &luna_wrapper_osg_ObserverSet::_bind_removeObserver},
	{"signalObjectDeleted", &luna_wrapper_osg_ObserverSet::_bind_signalObjectDeleted},
	{"getObservers", &luna_wrapper_osg_ObserverSet::_bind_getObservers},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ObserverSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ObserverSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ObserverSet >::enumValues[] = {
	{0,0}
};


