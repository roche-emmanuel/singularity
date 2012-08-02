#include <plug_common.h>

class luna_wrapper_osg_DefaultUserDataContainer {
public:
	typedef Luna< osg::DefaultUserDataContainer > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::DefaultUserDataContainer* ptr= dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DefaultUserDataContainer >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_addUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumUserObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserObjectIndex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObjectIndex_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescriptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13881074) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumDescriptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DefaultUserDataContainer::DefaultUserDataContainer()
	static osg::DefaultUserDataContainer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer() function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer()\nClass arguments details:\n");
		}


		return new osg::DefaultUserDataContainer();
	}

	// osg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DefaultUserDataContainer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DefaultUserDataContainer* udc_ptr=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if( !udc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg udc in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::DefaultUserDataContainer & udc=*udc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::DefaultUserDataContainer(udc, copyop);
	}

	// Overload binder for osg::DefaultUserDataContainer::DefaultUserDataContainer
	static osg::DefaultUserDataContainer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DefaultUserDataContainer, cannot match any of the overloads for function DefaultUserDataContainer:\n  DefaultUserDataContainer()\n  DefaultUserDataContainer(const osg::DefaultUserDataContainer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DefaultUserDataContainer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::cloneType() const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::cloneType() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DefaultUserDataContainer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::libraryName() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::libraryName() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::className() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::className() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool)");
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setUserData(osg::Referenced *)");
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DefaultUserDataContainer::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DefaultUserDataContainer::getUserData() function, expected prototype:\nosg::Referenced * osg::DefaultUserDataContainer::getUserData()\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DefaultUserDataContainer::getUserData()");
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DefaultUserDataContainer::getUserData() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const");
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)
	static int _bind_addUserObject(lua_State *L) {
		if (!_lg_typecheck_addUserObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj) function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object *)");
		}
		unsigned int lret = self->addUserObject(obj);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	static int _bind_setUserObject(lua_State *L) {
		if (!_lg_typecheck_setUserObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,3));

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setUserObject(unsigned int, osg::Object *)");
		}
		self->setUserObject(i, obj);

		return 0;
	}

	// void osg::DefaultUserDataContainer::removeUserObject(unsigned int i)
	static int _bind_removeUserObject(lua_State *L) {
		if (!_lg_typecheck_removeUserObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::removeUserObject(unsigned int i) function, expected prototype:\nvoid osg::DefaultUserDataContainer::removeUserObject(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::removeUserObject(unsigned int)");
		}
		self->removeUserObject(i);

		return 0;
	}

	// osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)
	static int _bind_getUserObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int)");
		}
		osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const
	static int _bind_getUserObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const function, expected prototype:\nconst osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int) const");
		}
		const osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserObject
	static int _bind_getUserObject(lua_State *L) {
		if (_lg_typecheck_getUserObject_overload_1(L)) return _bind_getUserObject_overload_1(L);
		if (_lg_typecheck_getUserObject_overload_2(L)) return _bind_getUserObject_overload_2(L);

		luaL_error(L, "error in function getUserObject, cannot match any of the overloads for function getUserObject:\n  getUserObject(unsigned int)\n  getUserObject(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const
	static int _bind_getNumUserObjects(lua_State *L) {
		if (!_lg_typecheck_getNumUserObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getNumUserObjects() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const");
		}
		unsigned int lret = self->getNumUserObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object *, unsigned int) const");
		}
		unsigned int lret = self->getUserObjectIndex(obj, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string &, unsigned int) const");
		}
		unsigned int lret = self->getUserObjectIndex(name, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserObjectIndex
	static int _bind_getUserObjectIndex(lua_State *L) {
		if (_lg_typecheck_getUserObjectIndex_overload_1(L)) return _bind_getUserObjectIndex_overload_1(L);
		if (_lg_typecheck_getUserObjectIndex_overload_2(L)) return _bind_getUserObjectIndex_overload_2(L);

		luaL_error(L, "error in function getUserObjectIndex, cannot match any of the overloads for function getUserObjectIndex:\n  getUserObjectIndex(const osg::Object *, unsigned int)\n  getUserObjectIndex(const std::string &, unsigned int)\n");
		return 0;
	}

	// void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	static int _bind_setDescriptions(lua_State *L) {
		if (!_lg_typecheck_setDescriptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)\nClass arguments details:\narg 1 ID = 13881074\n");
		}

		const osg::UserDataContainer::DescriptionList* descriptions_ptr=(Luna< osg::UserDataContainer::DescriptionList >::check(L,2));
		if( !descriptions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg descriptions in osg::DefaultUserDataContainer::setDescriptions function");
		}
		const osg::UserDataContainer::DescriptionList & descriptions=*descriptions_ptr;

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList &)");
		}
		self->setDescriptions(descriptions);

		return 0;
	}

	// osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()
	static int _bind_getDescriptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() function, expected prototype:\nosg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()");
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const
	static int _bind_getDescriptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const function, expected prototype:\nconst osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const");
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getDescriptions
	static int _bind_getDescriptions(lua_State *L) {
		if (_lg_typecheck_getDescriptions_overload_1(L)) return _bind_getDescriptions_overload_1(L);
		if (_lg_typecheck_getDescriptions_overload_2(L)) return _bind_getDescriptions_overload_2(L);

		luaL_error(L, "error in function getDescriptions, cannot match any of the overloads for function getDescriptions:\n  getDescriptions()\n  getDescriptions()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const
	static int _bind_getNumDescriptions(lua_State *L) {
		if (!_lg_typecheck_getNumDescriptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getNumDescriptions() const\nClass arguments details:\n");
		}


		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const");
		}
		unsigned int lret = self->getNumDescriptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::addDescription(const std::string & desc)
	static int _bind_addDescription(lua_State *L) {
		if (!_lg_typecheck_addDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::addDescription(const std::string & desc) function, expected prototype:\nvoid osg::DefaultUserDataContainer::addDescription(const std::string & desc)\nClass arguments details:\n");
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::DefaultUserDataContainer* self=dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::addDescription(const std::string &)");
		}
		self->addDescription(desc);

		return 0;
	}


	// Operator binds:

};

osg::DefaultUserDataContainer* LunaTraits< osg::DefaultUserDataContainer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DefaultUserDataContainer::_bind_ctor(L);
}

void LunaTraits< osg::DefaultUserDataContainer >::_bind_dtor(osg::DefaultUserDataContainer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DefaultUserDataContainer >::className[] = "DefaultUserDataContainer";
const char LunaTraits< osg::DefaultUserDataContainer >::fullName[] = "osg::DefaultUserDataContainer";
const char LunaTraits< osg::DefaultUserDataContainer >::moduleName[] = "osg";
const char* LunaTraits< osg::DefaultUserDataContainer >::parents[] = {"osg.UserDataContainer", 0};
const int LunaTraits< osg::DefaultUserDataContainer >::hash = 14029964;
const int LunaTraits< osg::DefaultUserDataContainer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DefaultUserDataContainer >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DefaultUserDataContainer::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DefaultUserDataContainer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DefaultUserDataContainer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DefaultUserDataContainer::_bind_libraryName},
	{"className", &luna_wrapper_osg_DefaultUserDataContainer::_bind_className},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setThreadSafeRefUnref},
	{"setUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserData},
	{"addUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_addUserObject},
	{"setUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setUserObject},
	{"removeUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_removeUserObject},
	{"getUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserObject},
	{"getNumUserObjects", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getNumUserObjects},
	{"getUserObjectIndex", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserObjectIndex},
	{"setDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setDescriptions},
	{"getDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getDescriptions},
	{"getNumDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getNumDescriptions},
	{"addDescription", &luna_wrapper_osg_DefaultUserDataContainer::_bind_addDescription},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DefaultUserDataContainer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DefaultUserDataContainer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DefaultUserDataContainer >::enumValues[] = {
	{0,0}
};


