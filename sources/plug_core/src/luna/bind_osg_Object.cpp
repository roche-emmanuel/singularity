#include <plug_common.h>

class luna_wrapper_osg_Object {
public:
	typedef Luna< osg::Object > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Object* ptr= dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Object >::push(L,ptr,false);
		return 1;
	};


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

	inline static bool _lg_typecheck_setName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataVariance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserDataContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,87260941)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserDataContainer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserDataContainer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateUserDataContainer(lua_State *L) {
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

	inline static bool _lg_typecheck_resizeGLObjectBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89979598)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Object * osg::Object::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::cloneType() const function, expected prototype:\nosg::Object * osg::Object::cloneType() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Object::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Object::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Object::isSameKindAs(const osg::Object * ) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Object::isSameKindAs(const osg::Object * ) const function, expected prototype:\nbool osg::Object::isSameKindAs(const osg::Object * ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* _arg1=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Object::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Object::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Object::libraryName() const function, expected prototype:\nconst char * osg::Object::libraryName() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Object::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Object::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Object::className() const function, expected prototype:\nconst char * osg::Object::className() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Object::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Object::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setThreadSafeRefUnref(bool)");
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Object::setName(const std::string & name)
	static int _bind_setName_overload_1(lua_State *L) {
		if (!_lg_typecheck_setName_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setName(const std::string & name) function, expected prototype:\nvoid osg::Object::setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setName(const std::string &)");
		}
		self->setName(name);

		return 0;
	}

	// void osg::Object::setName(const char * name)
	static int _bind_setName_overload_2(lua_State *L) {
		if (!_lg_typecheck_setName_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setName(const char * name) function, expected prototype:\nvoid osg::Object::setName(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setName(const char *)");
		}
		self->setName(name);

		return 0;
	}

	// Overload binder for osg::Object::setName
	static int _bind_setName(lua_State *L) {
		if (_lg_typecheck_setName_overload_1(L)) return _bind_setName_overload_1(L);
		if (_lg_typecheck_setName_overload_2(L)) return _bind_setName_overload_2(L);

		luaL_error(L, "error in function setName, cannot match any of the overloads for function setName:\n  setName(const std::string &)\n  setName(const char *)\n");
		return 0;
	}

	// const std::string & osg::Object::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::Object::getName() const function, expected prototype:\nconst std::string & osg::Object::getName() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::Object::getName() const");
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Object::setDataVariance(osg::Object::DataVariance dv)
	static int _bind_setDataVariance(lua_State *L) {
		if (!_lg_typecheck_setDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setDataVariance(osg::Object::DataVariance dv) function, expected prototype:\nvoid osg::Object::setDataVariance(osg::Object::DataVariance dv)\nClass arguments details:\n");
		}

		osg::Object::DataVariance dv=(osg::Object::DataVariance)lua_tointeger(L,2);

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setDataVariance(osg::Object::DataVariance)");
		}
		self->setDataVariance(dv);

		return 0;
	}

	// osg::Object::DataVariance osg::Object::getDataVariance() const
	static int _bind_getDataVariance(lua_State *L) {
		if (!_lg_typecheck_getDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object::DataVariance osg::Object::getDataVariance() const function, expected prototype:\nosg::Object::DataVariance osg::Object::getDataVariance() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object::DataVariance osg::Object::getDataVariance() const");
		}
		osg::Object::DataVariance lret = self->getDataVariance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Object::computeDataVariance()
	static int _bind_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::computeDataVariance() function, expected prototype:\nvoid osg::Object::computeDataVariance()\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::computeDataVariance()");
		}
		self->computeDataVariance();

		return 0;
	}

	// void osg::Object::setUserDataContainer(osg::UserDataContainer * udc)
	static int _bind_setUserDataContainer(lua_State *L) {
		if (!_lg_typecheck_setUserDataContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setUserDataContainer(osg::UserDataContainer * udc) function, expected prototype:\nvoid osg::Object::setUserDataContainer(osg::UserDataContainer * udc)\nClass arguments details:\narg 1 ID = 87260941\n");
		}

		osg::UserDataContainer* udc=dynamic_cast< osg::UserDataContainer* >(Luna< osg::Referenced >::check(L,2));

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setUserDataContainer(osg::UserDataContainer *)");
		}
		self->setUserDataContainer(udc);

		return 0;
	}

	// osg::UserDataContainer * osg::Object::getUserDataContainer()
	static int _bind_getUserDataContainer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserDataContainer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer * osg::Object::getUserDataContainer() function, expected prototype:\nosg::UserDataContainer * osg::Object::getUserDataContainer()\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::UserDataContainer * osg::Object::getUserDataContainer()");
		}
		osg::UserDataContainer * lret = self->getUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer * osg::Object::getUserDataContainer() const
	static int _bind_getUserDataContainer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserDataContainer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer * osg::Object::getUserDataContainer() const function, expected prototype:\nconst osg::UserDataContainer * osg::Object::getUserDataContainer() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer * osg::Object::getUserDataContainer() const");
		}
		const osg::UserDataContainer * lret = self->getUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Object::getUserDataContainer
	static int _bind_getUserDataContainer(lua_State *L) {
		if (_lg_typecheck_getUserDataContainer_overload_1(L)) return _bind_getUserDataContainer_overload_1(L);
		if (_lg_typecheck_getUserDataContainer_overload_2(L)) return _bind_getUserDataContainer_overload_2(L);

		luaL_error(L, "error in function getUserDataContainer, cannot match any of the overloads for function getUserDataContainer:\n  getUserDataContainer()\n  getUserDataContainer()\n");
		return 0;
	}

	// osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer()
	static int _bind_getOrCreateUserDataContainer(lua_State *L) {
		if (!_lg_typecheck_getOrCreateUserDataContainer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer() function, expected prototype:\nosg::UserDataContainer * osg::Object::getOrCreateUserDataContainer()\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer()");
		}
		osg::UserDataContainer * lret = self->getOrCreateUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// void osg::Object::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Object::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::setUserData(osg::Referenced *)");
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Object::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Object::getUserData() function, expected prototype:\nosg::Referenced * osg::Object::getUserData()\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Object::getUserData()");
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Object::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Object::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Object::getUserData() const\nClass arguments details:\n");
		}


		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Object::getUserData() const");
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Object::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// void osg::Object::resizeGLObjectBuffers(unsigned int)
	static int _bind_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::resizeGLObjectBuffers(unsigned int) function, expected prototype:\nvoid osg::Object::resizeGLObjectBuffers(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::resizeGLObjectBuffers(unsigned)");
		}
		self->resizeGLObjectBuffers(_arg1);

		return 0;
	}

	// void osg::Object::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Object::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::Object::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 89979598\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::Object* self=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Object::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Object* LunaTraits< osg::Object >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const

	// Abstract operators:
}

void LunaTraits< osg::Object >::_bind_dtor(osg::Object* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Object >::className[] = "Object";
const char LunaTraits< osg::Object >::fullName[] = "osg::Object";
const char LunaTraits< osg::Object >::moduleName[] = "osg";
const char* LunaTraits< osg::Object >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Object >::hash = 58481028;
const int LunaTraits< osg::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Object >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Object::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Object::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Object::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Object::_bind_libraryName},
	{"className", &luna_wrapper_osg_Object::_bind_className},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Object::_bind_setThreadSafeRefUnref},
	{"setName", &luna_wrapper_osg_Object::_bind_setName},
	{"getName", &luna_wrapper_osg_Object::_bind_getName},
	{"setDataVariance", &luna_wrapper_osg_Object::_bind_setDataVariance},
	{"getDataVariance", &luna_wrapper_osg_Object::_bind_getDataVariance},
	{"computeDataVariance", &luna_wrapper_osg_Object::_bind_computeDataVariance},
	{"setUserDataContainer", &luna_wrapper_osg_Object::_bind_setUserDataContainer},
	{"getUserDataContainer", &luna_wrapper_osg_Object::_bind_getUserDataContainer},
	{"getOrCreateUserDataContainer", &luna_wrapper_osg_Object::_bind_getOrCreateUserDataContainer},
	{"setUserData", &luna_wrapper_osg_Object::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_Object::_bind_getUserData},
	{"resizeGLObjectBuffers", &luna_wrapper_osg_Object::_bind_resizeGLObjectBuffers},
	{"releaseGLObjects", &luna_wrapper_osg_Object::_bind_releaseGLObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Object >::enumValues[] = {
	{"DYNAMIC", osg::Object::DYNAMIC},
	{"STATIC", osg::Object::STATIC},
	{"UNSPECIFIED", osg::Object::UNSPECIFIED},
	{0,0}
};

