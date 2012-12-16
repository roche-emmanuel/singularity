#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GLBufferObject.h>

class luna_wrapper_osg_GLBufferObject {
public:
	typedef Luna< osg::GLBufferObject > luna_t;

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
		//osg::GLBufferObject* ptr= dynamic_cast< osg::GLBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::GLBufferObject* ptr= luna_caster< osg::Referenced, osg::GLBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GLBufferObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::BufferObject* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setProfile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProfile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGLObjectID_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGLObjectID_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bindBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unbindBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteGLObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPBOSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteAllBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardAllBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardAllDeletedBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GLBufferObject::GLBufferObject(unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0)
	static osg::GLBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::GLBufferObject(unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0) function, expected prototype:\nosg::GLBufferObject::GLBufferObject(unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));
		unsigned int glObjectID=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		return new osg::GLBufferObject(contextID, bufferObject, glObjectID);
	}

	// osg::GLBufferObject::GLBufferObject(lua_Table * data, unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0)
	static osg::GLBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::GLBufferObject(lua_Table * data, unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0) function, expected prototype:\nosg::GLBufferObject::GLBufferObject(lua_Table * data, unsigned int contextID, osg::BufferObject * bufferObject, unsigned int glObjectID = 0)\nClass arguments details:\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,3));
		unsigned int glObjectID=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 0;

		return new wrapper_osg_GLBufferObject(L,NULL, contextID, bufferObject, glObjectID);
	}

	// Overload binder for osg::GLBufferObject::GLBufferObject
	static osg::GLBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GLBufferObject, cannot match any of the overloads for function GLBufferObject:\n  GLBufferObject(unsigned int, osg::BufferObject *, unsigned int)\n  GLBufferObject(lua_Table *, unsigned int, osg::BufferObject *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GLBufferObject::setProfile(const osg::BufferObjectProfile & profile)
	static int _bind_setProfile(lua_State *L) {
		if (!_lg_typecheck_setProfile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::setProfile(const osg::BufferObjectProfile & profile) function, expected prototype:\nvoid osg::GLBufferObject::setProfile(const osg::BufferObjectProfile & profile)\nClass arguments details:\narg 1 ID = 12032151\n");
		}

		const osg::BufferObjectProfile* profile_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::GLBufferObject::setProfile function");
		}
		const osg::BufferObjectProfile & profile=*profile_ptr;

		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::setProfile(const osg::BufferObjectProfile &)");
		}
		self->setProfile(profile);

		return 0;
	}

	// const osg::BufferObjectProfile & osg::GLBufferObject::getProfile() const
	static int _bind_getProfile(lua_State *L) {
		if (!_lg_typecheck_getProfile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BufferObjectProfile & osg::GLBufferObject::getProfile() const function, expected prototype:\nconst osg::BufferObjectProfile & osg::GLBufferObject::getProfile() const\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BufferObjectProfile & osg::GLBufferObject::getProfile() const");
		}
		const osg::BufferObjectProfile* lret = &self->getProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObjectProfile >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObject::setBufferObject(osg::BufferObject * bufferObject)
	static int _bind_setBufferObject(lua_State *L) {
		if (!_lg_typecheck_setBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::setBufferObject(osg::BufferObject * bufferObject) function, expected prototype:\nvoid osg::GLBufferObject::setBufferObject(osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::setBufferObject(osg::BufferObject *)");
		}
		self->setBufferObject(bufferObject);

		return 0;
	}

	// osg::BufferObject * osg::GLBufferObject::getBufferObject()
	static int _bind_getBufferObject(lua_State *L) {
		if (!_lg_typecheck_getBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObject * osg::GLBufferObject::getBufferObject() function, expected prototype:\nosg::BufferObject * osg::GLBufferObject::getBufferObject()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferObject * osg::GLBufferObject::getBufferObject()");
		}
		osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::GLBufferObject::getContextID() const
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObject::getContextID() const function, expected prototype:\nunsigned int osg::GLBufferObject::getContextID() const\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObject::getContextID() const");
		}
		unsigned int lret = self->getContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::GLBufferObject::getGLObjectID()
	static int _bind_getGLObjectID_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGLObjectID_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObject::getGLObjectID() function, expected prototype:\nunsigned int & osg::GLBufferObject::getGLObjectID()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObject::getGLObjectID()");
		}
		unsigned int & lret = self->getGLObjectID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObject::getGLObjectID() const
	static int _bind_getGLObjectID_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGLObjectID_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObject::getGLObjectID() const function, expected prototype:\nunsigned int osg::GLBufferObject::getGLObjectID() const\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObject::getGLObjectID() const");
		}
		unsigned int lret = self->getGLObjectID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::GLBufferObject::getGLObjectID
	static int _bind_getGLObjectID(lua_State *L) {
		if (_lg_typecheck_getGLObjectID_overload_1(L)) return _bind_getGLObjectID_overload_1(L);
		if (_lg_typecheck_getGLObjectID_overload_2(L)) return _bind_getGLObjectID_overload_2(L);

		luaL_error(L, "error in function getGLObjectID, cannot match any of the overloads for function getGLObjectID:\n  getGLObjectID()\n  getGLObjectID()\n");
		return 0;
	}

	// int osg::GLBufferObject::getOffset(unsigned int i) const
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GLBufferObject::getOffset(unsigned int i) const function, expected prototype:\nint osg::GLBufferObject::getOffset(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GLBufferObject::getOffset(unsigned int) const");
		}
		int lret = self->getOffset(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GLBufferObject::bindBuffer()
	static int _bind_bindBuffer(lua_State *L) {
		if (!_lg_typecheck_bindBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::bindBuffer() function, expected prototype:\nvoid osg::GLBufferObject::bindBuffer()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::bindBuffer()");
		}
		self->bindBuffer();

		return 0;
	}

	// void osg::GLBufferObject::unbindBuffer()
	static int _bind_unbindBuffer(lua_State *L) {
		if (!_lg_typecheck_unbindBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::unbindBuffer() function, expected prototype:\nvoid osg::GLBufferObject::unbindBuffer()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::unbindBuffer()");
		}
		self->unbindBuffer();

		return 0;
	}

	// bool osg::GLBufferObject::isDirty() const
	static int _bind_isDirty(lua_State *L) {
		if (!_lg_typecheck_isDirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObject::isDirty() const function, expected prototype:\nbool osg::GLBufferObject::isDirty() const\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObject::isDirty() const");
		}
		bool lret = self->isDirty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GLBufferObject::dirty()
	static int _bind_dirty(lua_State *L) {
		if (!_lg_typecheck_dirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::dirty() function, expected prototype:\nvoid osg::GLBufferObject::dirty()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::dirty()");
		}
		self->dirty();

		return 0;
	}

	// void osg::GLBufferObject::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::clear() function, expected prototype:\nvoid osg::GLBufferObject::clear()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::clear()");
		}
		self->clear();

		return 0;
	}

	// void osg::GLBufferObject::compileBuffer()
	static int _bind_compileBuffer(lua_State *L) {
		if (!_lg_typecheck_compileBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::compileBuffer() function, expected prototype:\nvoid osg::GLBufferObject::compileBuffer()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::compileBuffer()");
		}
		self->compileBuffer();

		return 0;
	}

	// void osg::GLBufferObject::deleteGLObject()
	static int _bind_deleteGLObject(lua_State *L) {
		if (!_lg_typecheck_deleteGLObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::deleteGLObject() function, expected prototype:\nvoid osg::GLBufferObject::deleteGLObject()\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::deleteGLObject()");
		}
		self->deleteGLObject();

		return 0;
	}

	// void osg::GLBufferObject::assign(osg::BufferObject * bufferObject)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::assign(osg::BufferObject * bufferObject) function, expected prototype:\nvoid osg::GLBufferObject::assign(osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::assign(osg::BufferObject *)");
		}
		self->assign(bufferObject);

		return 0;
	}

	// bool osg::GLBufferObject::isPBOSupported() const
	static int _bind_isPBOSupported(lua_State *L) {
		if (!_lg_typecheck_isPBOSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObject::isPBOSupported() const function, expected prototype:\nbool osg::GLBufferObject::isPBOSupported() const\nClass arguments details:\n");
		}


		osg::GLBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObject::isPBOSupported() const");
		}
		bool lret = self->isPBOSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static osg::GLBufferObject * osg::GLBufferObject::createGLBufferObject(unsigned int contextID, const osg::BufferObject * bufferObject)
	static int _bind_createGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_createGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GLBufferObject * osg::GLBufferObject::createGLBufferObject(unsigned int contextID, const osg::BufferObject * bufferObject) function, expected prototype:\nstatic osg::GLBufferObject * osg::GLBufferObject::createGLBufferObject(unsigned int contextID, const osg::BufferObject * bufferObject)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		const osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObject * lret = osg::GLBufferObject::createGLBufferObject(contextID, bufferObject);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// static void osg::GLBufferObject::deleteAllBufferObjects(unsigned int contextID)
	static int _bind_deleteAllBufferObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::deleteAllBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::GLBufferObject::deleteAllBufferObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GLBufferObject::deleteAllBufferObjects(contextID);

		return 0;
	}

	// static void osg::GLBufferObject::discardAllBufferObjects(unsigned int contextID)
	static int _bind_discardAllBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::discardAllBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::GLBufferObject::discardAllBufferObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GLBufferObject::discardAllBufferObjects(contextID);

		return 0;
	}

	// static void osg::GLBufferObject::flushAllDeletedBufferObjects(unsigned int contextID)
	static int _bind_flushAllDeletedBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::flushAllDeletedBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::GLBufferObject::flushAllDeletedBufferObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GLBufferObject::flushAllDeletedBufferObjects(contextID);

		return 0;
	}

	// static void osg::GLBufferObject::discardAllDeletedBufferObjects(unsigned int contextID)
	static int _bind_discardAllDeletedBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::discardAllDeletedBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::GLBufferObject::discardAllDeletedBufferObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GLBufferObject::discardAllDeletedBufferObjects(contextID);

		return 0;
	}

	// static void osg::GLBufferObject::flushDeletedBufferObjects(unsigned int contextID, double currentTime, double & availbleTime)
	static int _bind_flushDeletedBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::flushDeletedBufferObjects(unsigned int contextID, double currentTime, double & availbleTime) function, expected prototype:\nstatic void osg::GLBufferObject::flushDeletedBufferObjects(unsigned int contextID, double currentTime, double & availbleTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availbleTime=(double)lua_tonumber(L,3);

		osg::GLBufferObject::flushDeletedBufferObjects(contextID, currentTime, availbleTime);

		return 0;
	}

	// static void osg::GLBufferObject::releaseGLBufferObject(unsigned int contextID, osg::GLBufferObject * to)
	static int _bind_releaseGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_releaseGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::releaseGLBufferObject(unsigned int contextID, osg::GLBufferObject * to) function, expected prototype:\nstatic void osg::GLBufferObject::releaseGLBufferObject(unsigned int contextID, osg::GLBufferObject * to)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObject::releaseGLBufferObject(contextID, to);

		return 0;
	}

	// static osg::GLBufferObject::Extensions * osg::GLBufferObject::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GLBufferObject::Extensions * osg::GLBufferObject::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::GLBufferObject::Extensions * osg::GLBufferObject::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::GLBufferObject::Extensions * lret = osg::GLBufferObject::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::GLBufferObject::setExtensions(unsigned int contextID, osg::GLBufferObject::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GLBufferObject::setExtensions(unsigned int contextID, osg::GLBufferObject::Extensions * extensions) function, expected prototype:\nstatic void osg::GLBufferObject::setExtensions(unsigned int contextID, osg::GLBufferObject::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::GLBufferObject::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject::Extensions >(L,2));

		osg::GLBufferObject::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::GLBufferObject* LunaTraits< osg::GLBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObject >::_bind_dtor(osg::GLBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GLBufferObject >::className[] = "GLBufferObject";
const char LunaTraits< osg::GLBufferObject >::fullName[] = "osg::GLBufferObject";
const char LunaTraits< osg::GLBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObject >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GLBufferObject >::hash = 50702980;
const int LunaTraits< osg::GLBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GLBufferObject >::methods[] = {
	{"setProfile", &luna_wrapper_osg_GLBufferObject::_bind_setProfile},
	{"getProfile", &luna_wrapper_osg_GLBufferObject::_bind_getProfile},
	{"setBufferObject", &luna_wrapper_osg_GLBufferObject::_bind_setBufferObject},
	{"getBufferObject", &luna_wrapper_osg_GLBufferObject::_bind_getBufferObject},
	{"getContextID", &luna_wrapper_osg_GLBufferObject::_bind_getContextID},
	{"getGLObjectID", &luna_wrapper_osg_GLBufferObject::_bind_getGLObjectID},
	{"getOffset", &luna_wrapper_osg_GLBufferObject::_bind_getOffset},
	{"bindBuffer", &luna_wrapper_osg_GLBufferObject::_bind_bindBuffer},
	{"unbindBuffer", &luna_wrapper_osg_GLBufferObject::_bind_unbindBuffer},
	{"isDirty", &luna_wrapper_osg_GLBufferObject::_bind_isDirty},
	{"dirty", &luna_wrapper_osg_GLBufferObject::_bind_dirty},
	{"clear", &luna_wrapper_osg_GLBufferObject::_bind_clear},
	{"compileBuffer", &luna_wrapper_osg_GLBufferObject::_bind_compileBuffer},
	{"deleteGLObject", &luna_wrapper_osg_GLBufferObject::_bind_deleteGLObject},
	{"assign", &luna_wrapper_osg_GLBufferObject::_bind_assign},
	{"isPBOSupported", &luna_wrapper_osg_GLBufferObject::_bind_isPBOSupported},
	{"createGLBufferObject", &luna_wrapper_osg_GLBufferObject::_bind_createGLBufferObject},
	{"deleteAllBufferObjects", &luna_wrapper_osg_GLBufferObject::_bind_deleteAllBufferObjects},
	{"discardAllBufferObjects", &luna_wrapper_osg_GLBufferObject::_bind_discardAllBufferObjects},
	{"flushAllDeletedBufferObjects", &luna_wrapper_osg_GLBufferObject::_bind_flushAllDeletedBufferObjects},
	{"discardAllDeletedBufferObjects", &luna_wrapper_osg_GLBufferObject::_bind_discardAllDeletedBufferObjects},
	{"flushDeletedBufferObjects", &luna_wrapper_osg_GLBufferObject::_bind_flushDeletedBufferObjects},
	{"releaseGLBufferObject", &luna_wrapper_osg_GLBufferObject::_bind_releaseGLBufferObject},
	{"getExtensions", &luna_wrapper_osg_GLBufferObject::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_GLBufferObject::_bind_setExtensions},
	{"__eq", &luna_wrapper_osg_GLBufferObject::_bind___eq},
	{"getTable", &luna_wrapper_osg_GLBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GLBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObject >::enumValues[] = {
	{0,0}
};


