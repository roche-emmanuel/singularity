#include <plug_common.h>

class luna_wrapper_osg_BufferObject {
public:
	typedef Luna< osg::BufferObject > luna_t;

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
		osg::BufferObject* ptr= dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BufferObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
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

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProfile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProfile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCopyDataAndReleaseGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCopyDataAndReleaseGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBufferData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeBufferData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeBufferData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBufferData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumBufferData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRequiredBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::BufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferObject::libraryName() const function, expected prototype:\nconst char * osg::BufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferObject::className() const function, expected prototype:\nconst char * osg::BufferObject::className() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::BufferObject::setTarget(unsigned int target)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::setTarget(unsigned int target) function, expected prototype:\nvoid osg::BufferObject::setTarget(unsigned int target)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::setTarget(unsigned int)");
		}
		self->setTarget(target);

		return 0;
	}

	// unsigned int osg::BufferObject::getTarget() const
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObject::getTarget() const function, expected prototype:\nunsigned int osg::BufferObject::getTarget() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObject::getTarget() const");
		}
		unsigned int lret = self->getTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferObject::setUsage(unsigned int usage)
	static int _bind_setUsage(lua_State *L) {
		if (!_lg_typecheck_setUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::setUsage(unsigned int usage) function, expected prototype:\nvoid osg::BufferObject::setUsage(unsigned int usage)\nClass arguments details:\n");
		}

		unsigned int usage=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::setUsage(unsigned int)");
		}
		self->setUsage(usage);

		return 0;
	}

	// unsigned int osg::BufferObject::getUsage() const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObject::getUsage() const function, expected prototype:\nunsigned int osg::BufferObject::getUsage() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObject::getUsage() const");
		}
		unsigned int lret = self->getUsage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::BufferObjectProfile & osg::BufferObject::getProfile()
	static int _bind_getProfile_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProfile_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile & osg::BufferObject::getProfile() function, expected prototype:\nosg::BufferObjectProfile & osg::BufferObject::getProfile()\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferObjectProfile & osg::BufferObject::getProfile()");
		}
		const osg::BufferObjectProfile* lret = &self->getProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObjectProfile >::push(L,lret,false);

		return 1;
	}

	// const osg::BufferObjectProfile & osg::BufferObject::getProfile() const
	static int _bind_getProfile_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProfile_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BufferObjectProfile & osg::BufferObject::getProfile() const function, expected prototype:\nconst osg::BufferObjectProfile & osg::BufferObject::getProfile() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BufferObjectProfile & osg::BufferObject::getProfile() const");
		}
		const osg::BufferObjectProfile* lret = &self->getProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObjectProfile >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferObject::getProfile
	static int _bind_getProfile(lua_State *L) {
		if (_lg_typecheck_getProfile_overload_1(L)) return _bind_getProfile_overload_1(L);
		if (_lg_typecheck_getProfile_overload_2(L)) return _bind_getProfile_overload_2(L);

		luaL_error(L, "error in function getProfile, cannot match any of the overloads for function getProfile:\n  getProfile()\n  getProfile()\n");
		return 0;
	}

	// void osg::BufferObject::setCopyDataAndReleaseGLBufferObject(bool copyAndRelease)
	static int _bind_setCopyDataAndReleaseGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_setCopyDataAndReleaseGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::setCopyDataAndReleaseGLBufferObject(bool copyAndRelease) function, expected prototype:\nvoid osg::BufferObject::setCopyDataAndReleaseGLBufferObject(bool copyAndRelease)\nClass arguments details:\n");
		}

		bool copyAndRelease=(bool)(lua_toboolean(L,2)==1);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::setCopyDataAndReleaseGLBufferObject(bool)");
		}
		self->setCopyDataAndReleaseGLBufferObject(copyAndRelease);

		return 0;
	}

	// bool osg::BufferObject::getCopyDataAndReleaseGLBufferObject() const
	static int _bind_getCopyDataAndReleaseGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_getCopyDataAndReleaseGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferObject::getCopyDataAndReleaseGLBufferObject() const function, expected prototype:\nbool osg::BufferObject::getCopyDataAndReleaseGLBufferObject() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferObject::getCopyDataAndReleaseGLBufferObject() const");
		}
		bool lret = self->getCopyDataAndReleaseGLBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BufferObject::dirty()
	static int _bind_dirty(lua_State *L) {
		if (!_lg_typecheck_dirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::dirty() function, expected prototype:\nvoid osg::BufferObject::dirty()\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::dirty()");
		}
		self->dirty();

		return 0;
	}

	// void osg::BufferObject::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::BufferObject::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// unsigned int osg::BufferObject::addBufferData(osg::BufferData * bd)
	static int _bind_addBufferData(lua_State *L) {
		if (!_lg_typecheck_addBufferData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObject::addBufferData(osg::BufferData * bd) function, expected prototype:\nunsigned int osg::BufferObject::addBufferData(osg::BufferData * bd)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferData* bd=dynamic_cast< osg::BufferData* >(Luna< osg::Referenced >::check(L,2));

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObject::addBufferData(osg::BufferData *)");
		}
		unsigned int lret = self->addBufferData(bd);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferObject::removeBufferData(unsigned int index)
	static int _bind_removeBufferData_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeBufferData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::removeBufferData(unsigned int index) function, expected prototype:\nvoid osg::BufferObject::removeBufferData(unsigned int index)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::removeBufferData(unsigned int)");
		}
		self->removeBufferData(index);

		return 0;
	}

	// void osg::BufferObject::removeBufferData(osg::BufferData * bd)
	static int _bind_removeBufferData_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeBufferData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::removeBufferData(osg::BufferData * bd) function, expected prototype:\nvoid osg::BufferObject::removeBufferData(osg::BufferData * bd)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferData* bd=dynamic_cast< osg::BufferData* >(Luna< osg::Referenced >::check(L,2));

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::removeBufferData(osg::BufferData *)");
		}
		self->removeBufferData(bd);

		return 0;
	}

	// Overload binder for osg::BufferObject::removeBufferData
	static int _bind_removeBufferData(lua_State *L) {
		if (_lg_typecheck_removeBufferData_overload_1(L)) return _bind_removeBufferData_overload_1(L);
		if (_lg_typecheck_removeBufferData_overload_2(L)) return _bind_removeBufferData_overload_2(L);

		luaL_error(L, "error in function removeBufferData, cannot match any of the overloads for function removeBufferData:\n  removeBufferData(unsigned int)\n  removeBufferData(osg::BufferData *)\n");
		return 0;
	}

	// void osg::BufferObject::setBufferData(unsigned int index, osg::BufferData * bd)
	static int _bind_setBufferData(lua_State *L) {
		if (!_lg_typecheck_setBufferData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::setBufferData(unsigned int index, osg::BufferData * bd) function, expected prototype:\nvoid osg::BufferObject::setBufferData(unsigned int index, osg::BufferData * bd)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::BufferData* bd=dynamic_cast< osg::BufferData* >(Luna< osg::Referenced >::check(L,3));

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::setBufferData(unsigned int, osg::BufferData *)");
		}
		self->setBufferData(index, bd);

		return 0;
	}

	// osg::BufferData * osg::BufferObject::getBufferData(unsigned int index)
	static int _bind_getBufferData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBufferData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferData * osg::BufferObject::getBufferData(unsigned int index) function, expected prototype:\nosg::BufferData * osg::BufferObject::getBufferData(unsigned int index)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferData * osg::BufferObject::getBufferData(unsigned int)");
		}
		osg::BufferData * lret = self->getBufferData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferData >::push(L,lret,false);

		return 1;
	}

	// const osg::BufferData * osg::BufferObject::getBufferData(unsigned int index) const
	static int _bind_getBufferData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBufferData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BufferData * osg::BufferObject::getBufferData(unsigned int index) const function, expected prototype:\nconst osg::BufferData * osg::BufferObject::getBufferData(unsigned int index) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BufferData * osg::BufferObject::getBufferData(unsigned int) const");
		}
		const osg::BufferData * lret = self->getBufferData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferObject::getBufferData
	static int _bind_getBufferData(lua_State *L) {
		if (_lg_typecheck_getBufferData_overload_1(L)) return _bind_getBufferData_overload_1(L);
		if (_lg_typecheck_getBufferData_overload_2(L)) return _bind_getBufferData_overload_2(L);

		luaL_error(L, "error in function getBufferData, cannot match any of the overloads for function getBufferData:\n  getBufferData(unsigned int)\n  getBufferData(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::BufferObject::getNumBufferData() const
	static int _bind_getNumBufferData(lua_State *L) {
		if (!_lg_typecheck_getNumBufferData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObject::getNumBufferData() const function, expected prototype:\nunsigned int osg::BufferObject::getNumBufferData() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObject::getNumBufferData() const");
		}
		unsigned int lret = self->getNumBufferData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferObject::setGLBufferObject(unsigned int contextID, osg::GLBufferObject * glbo)
	static int _bind_setGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_setGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObject::setGLBufferObject(unsigned int contextID, osg::GLBufferObject * glbo) function, expected prototype:\nvoid osg::BufferObject::setGLBufferObject(unsigned int contextID, osg::GLBufferObject * glbo)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		osg::GLBufferObject* glbo=dynamic_cast< osg::GLBufferObject* >(Luna< osg::Referenced >::check(L,3));

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObject::setGLBufferObject(unsigned int, osg::GLBufferObject *)");
		}
		self->setGLBufferObject(contextID, glbo);

		return 0;
	}

	// osg::GLBufferObject * osg::BufferObject::getGLBufferObject(unsigned int contextID) const
	static int _bind_getGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_getGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::BufferObject::getGLBufferObject(unsigned int contextID) const function, expected prototype:\nosg::GLBufferObject * osg::BufferObject::getGLBufferObject(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::BufferObject::getGLBufferObject(unsigned int) const");
		}
		osg::GLBufferObject * lret = self->getGLBufferObject(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// osg::GLBufferObject * osg::BufferObject::getOrCreateGLBufferObject(unsigned int contextID) const
	static int _bind_getOrCreateGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_getOrCreateGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::BufferObject::getOrCreateGLBufferObject(unsigned int contextID) const function, expected prototype:\nosg::GLBufferObject * osg::BufferObject::getOrCreateGLBufferObject(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::BufferObject::getOrCreateGLBufferObject(unsigned int) const");
		}
		osg::GLBufferObject * lret = self->getOrCreateGLBufferObject(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::BufferObject::computeRequiredBufferSize() const
	static int _bind_computeRequiredBufferSize(lua_State *L) {
		if (!_lg_typecheck_computeRequiredBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObject::computeRequiredBufferSize() const function, expected prototype:\nunsigned int osg::BufferObject::computeRequiredBufferSize() const\nClass arguments details:\n");
		}


		osg::BufferObject* self=dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObject::computeRequiredBufferSize() const");
		}
		unsigned int lret = self->computeRequiredBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::BufferObject::deleteBufferObject(unsigned int contextID, unsigned int globj)
	static int _bind_deleteBufferObject(lua_State *L) {
		if (!_lg_typecheck_deleteBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::BufferObject::deleteBufferObject(unsigned int contextID, unsigned int globj) function, expected prototype:\nstatic void osg::BufferObject::deleteBufferObject(unsigned int contextID, unsigned int globj)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int globj=(unsigned int)lua_tointeger(L,2);

		osg::BufferObject::deleteBufferObject(contextID, globj);

		return 0;
	}


	// Operator binds:

};

osg::BufferObject* LunaTraits< osg::BufferObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::BufferObject >::_bind_dtor(osg::BufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BufferObject >::className[] = "BufferObject";
const char LunaTraits< osg::BufferObject >::fullName[] = "osg::BufferObject";
const char LunaTraits< osg::BufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferObject >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::BufferObject >::hash = 11117305;
const int LunaTraits< osg::BufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BufferObject >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_BufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_BufferObject::_bind_className},
	{"setTarget", &luna_wrapper_osg_BufferObject::_bind_setTarget},
	{"getTarget", &luna_wrapper_osg_BufferObject::_bind_getTarget},
	{"setUsage", &luna_wrapper_osg_BufferObject::_bind_setUsage},
	{"getUsage", &luna_wrapper_osg_BufferObject::_bind_getUsage},
	{"getProfile", &luna_wrapper_osg_BufferObject::_bind_getProfile},
	{"setCopyDataAndReleaseGLBufferObject", &luna_wrapper_osg_BufferObject::_bind_setCopyDataAndReleaseGLBufferObject},
	{"getCopyDataAndReleaseGLBufferObject", &luna_wrapper_osg_BufferObject::_bind_getCopyDataAndReleaseGLBufferObject},
	{"dirty", &luna_wrapper_osg_BufferObject::_bind_dirty},
	{"releaseGLObjects", &luna_wrapper_osg_BufferObject::_bind_releaseGLObjects},
	{"addBufferData", &luna_wrapper_osg_BufferObject::_bind_addBufferData},
	{"removeBufferData", &luna_wrapper_osg_BufferObject::_bind_removeBufferData},
	{"setBufferData", &luna_wrapper_osg_BufferObject::_bind_setBufferData},
	{"getBufferData", &luna_wrapper_osg_BufferObject::_bind_getBufferData},
	{"getNumBufferData", &luna_wrapper_osg_BufferObject::_bind_getNumBufferData},
	{"setGLBufferObject", &luna_wrapper_osg_BufferObject::_bind_setGLBufferObject},
	{"getGLBufferObject", &luna_wrapper_osg_BufferObject::_bind_getGLBufferObject},
	{"getOrCreateGLBufferObject", &luna_wrapper_osg_BufferObject::_bind_getOrCreateGLBufferObject},
	{"computeRequiredBufferSize", &luna_wrapper_osg_BufferObject::_bind_computeRequiredBufferSize},
	{"deleteBufferObject", &luna_wrapper_osg_BufferObject::_bind_deleteBufferObject},
	{"__eq", &luna_wrapper_osg_BufferObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferObject >::enumValues[] = {
	{0,0}
};


