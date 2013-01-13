#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BufferData.h>

class luna_wrapper_osg_BufferData {
public:
	typedef Luna< osg::BufferData > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::BufferData* ptr= dynamic_cast< osg::BufferData* >(Luna< osg::Referenced >::check(L,1));
		osg::BufferData* ptr= luna_caster< osg::Referenced, osg::BufferData >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BufferData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setModifiedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModifiedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BufferData::BufferData(lua_Table * data)
	static osg::BufferData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferData::BufferData(lua_Table * data) function, expected prototype:\nosg::BufferData::BufferData(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_BufferData(L,NULL);
	}

	// osg::BufferData::BufferData(lua_Table * data, const osg::BufferData & bd, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BufferData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferData::BufferData(lua_Table * data, const osg::BufferData & bd, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BufferData::BufferData(lua_Table * data, const osg::BufferData & bd, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::BufferData* bd_ptr=(Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,2));
		if( !bd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bd in osg::BufferData::BufferData function");
		}
		const osg::BufferData & bd=*bd_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BufferData::BufferData function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_BufferData(L,NULL, bd, copyop);
	}

	// Overload binder for osg::BufferData::BufferData
	static osg::BufferData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BufferData, cannot match any of the overloads for function BufferData:\n  BufferData(lua_Table *)\n  BufferData(lua_Table *, const osg::BufferData &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::BufferData::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferData::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BufferData::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferData::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BufferData::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferData::libraryName() const function, expected prototype:\nconst char * osg::BufferData::libraryName() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferData::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BufferData::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferData::className() const function, expected prototype:\nconst char * osg::BufferData::className() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferData::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::BufferData::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::BufferData::getDataPointer() const function, expected prototype:\nconst void * osg::BufferData::getDataPointer() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::BufferData::getDataPointer() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::BufferData::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferData::getTotalDataSize() const function, expected prototype:\nunsigned int osg::BufferData::getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferData::getTotalDataSize() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferData::setBufferObject(osg::BufferObject * bufferObject)
	static int _bind_setBufferObject(lua_State *L) {
		if (!_lg_typecheck_setBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::setBufferObject(osg::BufferObject * bufferObject) function, expected prototype:\nvoid osg::BufferData::setBufferObject(osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::setBufferObject(osg::BufferObject *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setBufferObject(bufferObject);

		return 0;
	}

	// osg::BufferObject * osg::BufferData::getBufferObject()
	static int _bind_getBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBufferObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObject * osg::BufferData::getBufferObject() function, expected prototype:\nosg::BufferObject * osg::BufferData::getBufferObject()\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferObject * osg::BufferData::getBufferObject(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::BufferObject * osg::BufferData::getBufferObject() const
	static int _bind_getBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBufferObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BufferObject * osg::BufferData::getBufferObject() const function, expected prototype:\nconst osg::BufferObject * osg::BufferData::getBufferObject() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BufferObject * osg::BufferData::getBufferObject() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferData::getBufferObject
	static int _bind_getBufferObject(lua_State *L) {
		if (_lg_typecheck_getBufferObject_overload_1(L)) return _bind_getBufferObject_overload_1(L);
		if (_lg_typecheck_getBufferObject_overload_2(L)) return _bind_getBufferObject_overload_2(L);

		luaL_error(L, "error in function getBufferObject, cannot match any of the overloads for function getBufferObject:\n  getBufferObject()\n  getBufferObject()\n");
		return 0;
	}

	// void osg::BufferData::setBufferIndex(unsigned int index)
	static int _bind_setBufferIndex(lua_State *L) {
		if (!_lg_typecheck_setBufferIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::setBufferIndex(unsigned int index) function, expected prototype:\nvoid osg::BufferData::setBufferIndex(unsigned int index)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::setBufferIndex(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setBufferIndex(index);

		return 0;
	}

	// unsigned int osg::BufferData::getBufferIndex() const
	static int _bind_getBufferIndex(lua_State *L) {
		if (!_lg_typecheck_getBufferIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferData::getBufferIndex() const function, expected prototype:\nunsigned int osg::BufferData::getBufferIndex() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferData::getBufferIndex() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getBufferIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::GLBufferObject * osg::BufferData::getGLBufferObject(unsigned int contextID) const
	static int _bind_getGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_getGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::BufferData::getGLBufferObject(unsigned int contextID) const function, expected prototype:\nosg::GLBufferObject * osg::BufferData::getGLBufferObject(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::BufferData::getGLBufferObject(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::GLBufferObject * lret = self->getGLBufferObject(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// osg::GLBufferObject * osg::BufferData::getOrCreateGLBufferObject(unsigned int contextID) const
	static int _bind_getOrCreateGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_getOrCreateGLBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::BufferData::getOrCreateGLBufferObject(unsigned int contextID) const function, expected prototype:\nosg::GLBufferObject * osg::BufferData::getOrCreateGLBufferObject(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::BufferData::getOrCreateGLBufferObject(unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::GLBufferObject * lret = self->getOrCreateGLBufferObject(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::BufferData::setModifiedCallback(osg::BufferData::ModifiedCallback * md)
	static int _bind_setModifiedCallback(lua_State *L) {
		if (!_lg_typecheck_setModifiedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::setModifiedCallback(osg::BufferData::ModifiedCallback * md) function, expected prototype:\nvoid osg::BufferData::setModifiedCallback(osg::BufferData::ModifiedCallback * md)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::BufferData::ModifiedCallback* md=(Luna< osg::Referenced >::checkSubType< osg::BufferData::ModifiedCallback >(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::setModifiedCallback(osg::BufferData::ModifiedCallback *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setModifiedCallback(md);

		return 0;
	}

	// osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback()
	static int _bind_getModifiedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getModifiedCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback() function, expected prototype:\nosg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback()\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::BufferData::ModifiedCallback * lret = self->getModifiedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferData::ModifiedCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback() const
	static int _bind_getModifiedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getModifiedCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback() const function, expected prototype:\nconst osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BufferData::ModifiedCallback * osg::BufferData::getModifiedCallback() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::BufferData::ModifiedCallback * lret = self->getModifiedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferData::ModifiedCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferData::getModifiedCallback
	static int _bind_getModifiedCallback(lua_State *L) {
		if (_lg_typecheck_getModifiedCallback_overload_1(L)) return _bind_getModifiedCallback_overload_1(L);
		if (_lg_typecheck_getModifiedCallback_overload_2(L)) return _bind_getModifiedCallback_overload_2(L);

		luaL_error(L, "error in function getModifiedCallback, cannot match any of the overloads for function getModifiedCallback:\n  getModifiedCallback()\n  getModifiedCallback()\n");
		return 0;
	}

	// void osg::BufferData::dirty()
	static int _bind_dirty(lua_State *L) {
		if (!_lg_typecheck_dirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::dirty() function, expected prototype:\nvoid osg::BufferData::dirty()\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::dirty(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->dirty();

		return 0;
	}

	// void osg::BufferData::setModifiedCount(unsigned int value)
	static int _bind_setModifiedCount(lua_State *L) {
		if (!_lg_typecheck_setModifiedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::setModifiedCount(unsigned int value) function, expected prototype:\nvoid osg::BufferData::setModifiedCount(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::setModifiedCount(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setModifiedCount(value);

		return 0;
	}

	// unsigned int osg::BufferData::getModifiedCount() const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferData::getModifiedCount() const function, expected prototype:\nunsigned int osg::BufferData::getModifiedCount() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferData::getModifiedCount() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getModifiedCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::BufferData::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::BufferData::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BufferData::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->BufferData::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BufferData::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BufferData::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->BufferData::setName(name);

		return 0;
	}

	// void osg::BufferData::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::base_computeDataVariance() function, expected prototype:\nvoid osg::BufferData::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->BufferData::computeDataVariance();

		return 0;
	}

	// void osg::BufferData::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BufferData::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->BufferData::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BufferData::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BufferData::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BufferData::base_getUserData()\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BufferData::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->BufferData::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BufferData::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BufferData::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BufferData::base_getUserData() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BufferData::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->BufferData::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferData::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// bool osg::BufferData::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferData::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BufferData::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferData::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->BufferData::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BufferData::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferData::base_libraryName() const function, expected prototype:\nconst char * osg::BufferData::base_libraryName() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferData::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->BufferData::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BufferData::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BufferData::base_className() const function, expected prototype:\nconst char * osg::BufferData::base_className() const\nClass arguments details:\n");
		}


		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BufferData::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->BufferData::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::BufferData::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferData::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::BufferData::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BufferData* self=Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferData::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->BufferData::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osg::BufferData* LunaTraits< osg::BufferData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BufferData::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const void * osg::BufferData::getDataPointer() const
	// unsigned int osg::BufferData::getTotalDataSize() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::BufferData >::_bind_dtor(osg::BufferData* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BufferData >::className[] = "BufferData";
const char LunaTraits< osg::BufferData >::fullName[] = "osg::BufferData";
const char LunaTraits< osg::BufferData >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferData >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::BufferData >::hash = 23720674;
const int LunaTraits< osg::BufferData >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BufferData >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_BufferData::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BufferData::_bind_libraryName},
	{"className", &luna_wrapper_osg_BufferData::_bind_className},
	{"getDataPointer", &luna_wrapper_osg_BufferData::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_BufferData::_bind_getTotalDataSize},
	{"setBufferObject", &luna_wrapper_osg_BufferData::_bind_setBufferObject},
	{"getBufferObject", &luna_wrapper_osg_BufferData::_bind_getBufferObject},
	{"setBufferIndex", &luna_wrapper_osg_BufferData::_bind_setBufferIndex},
	{"getBufferIndex", &luna_wrapper_osg_BufferData::_bind_getBufferIndex},
	{"getGLBufferObject", &luna_wrapper_osg_BufferData::_bind_getGLBufferObject},
	{"getOrCreateGLBufferObject", &luna_wrapper_osg_BufferData::_bind_getOrCreateGLBufferObject},
	{"setModifiedCallback", &luna_wrapper_osg_BufferData::_bind_setModifiedCallback},
	{"getModifiedCallback", &luna_wrapper_osg_BufferData::_bind_getModifiedCallback},
	{"dirty", &luna_wrapper_osg_BufferData::_bind_dirty},
	{"setModifiedCount", &luna_wrapper_osg_BufferData::_bind_setModifiedCount},
	{"getModifiedCount", &luna_wrapper_osg_BufferData::_bind_getModifiedCount},
	{"releaseGLObjects", &luna_wrapper_osg_BufferData::_bind_releaseGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BufferData::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_BufferData::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BufferData::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BufferData::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BufferData::_bind_base_getUserData},
	{"base_isSameKindAs", &luna_wrapper_osg_BufferData::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BufferData::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BufferData::_bind_base_className},
	{"base_releaseGLObjects", &luna_wrapper_osg_BufferData::_bind_base_releaseGLObjects},
	{"__eq", &luna_wrapper_osg_BufferData::_bind___eq},
	{"getTable", &luna_wrapper_osg_BufferData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferData >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BufferData::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferData >::enumValues[] = {
	{0,0}
};


