#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Array.h>

class luna_wrapper_osg_Array {
public:
	typedef Luna< osg::Array > luna_t;

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
		//osg::Array* ptr= dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,1));
		osg::Array* ptr= luna_caster< osg::Referenced, osg::Array >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Array >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35264102) ) return false;
		if( (!dynamic_cast< osg::ArrayVisitor* >(Luna< osg::ArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80735172) ) return false;
		if( (!dynamic_cast< osg::ConstArrayVisitor* >(Luna< osg::ConstArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87991103) ) return false;
		if( (!dynamic_cast< osg::ValueVisitor* >(Luna< osg::ValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86989408) ) return false;
		if( (!dynamic_cast< osg::ConstValueVisitor* >(Luna< osg::ConstValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataType(lua_State *L) {
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

	inline static bool _lg_typecheck_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::Array::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Array::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Array::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Array::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Array::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Array::libraryName() const function, expected prototype:\nconst char * osg::Array::libraryName() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Array::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Array::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Array::className() const function, expected prototype:\nconst char * osg::Array::className() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Array::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Array::accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n");
		}

		osg::ArrayVisitor* _arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Array::accept function");
		}
		osg::ArrayVisitor & _arg1=*_arg1_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::accept(osg::ArrayVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Array::accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n");
		}

		osg::ConstArrayVisitor* _arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Array::accept function");
		}
		osg::ConstArrayVisitor & _arg1=*_arg1_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::accept(osg::ConstArrayVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_accept_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* _arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Array::accept function");
		}
		osg::ValueVisitor & _arg2=*_arg2_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::accept(unsigned int, osg::ValueVisitor &)");
		}
		self->accept(index, _arg2);

		return 0;
	}

	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_accept_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* _arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Array::accept function");
		}
		osg::ConstValueVisitor & _arg2=*_arg2_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::accept(unsigned int, osg::ConstValueVisitor &) const");
		}
		self->accept(index, _arg2);

		return 0;
	}

	// Overload binder for osg::Array::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);
		if (_lg_typecheck_accept_overload_3(L)) return _bind_accept_overload_3(L);
		if (_lg_typecheck_accept_overload_4(L)) return _bind_accept_overload_4(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ArrayVisitor &)\n  accept(osg::ConstArrayVisitor &)\n  accept(unsigned int, osg::ValueVisitor &)\n  accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Array::compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Array::compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n");
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Array::compare(unsigned int, unsigned int) const");
		}
		int lret = self->compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Array::Type osg::Array::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Array::Type osg::Array::getType() const function, expected prototype:\nosg::Array::Type osg::Array::getType() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Array::Type osg::Array::getType() const");
		}
		osg::Array::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Array::getDataSize() const
	static int _bind_getDataSize(lua_State *L) {
		if (!_lg_typecheck_getDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Array::getDataSize() const function, expected prototype:\nint osg::Array::getDataSize() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Array::getDataSize() const");
		}
		int lret = self->getDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Array::getDataType() const
	static int _bind_getDataType(lua_State *L) {
		if (!_lg_typecheck_getDataType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getDataType() const function, expected prototype:\nunsigned int osg::Array::getDataType() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getDataType() const");
		}
		unsigned int lret = self->getDataType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::Array::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::Array::getDataPointer() const function, expected prototype:\nconst void * osg::Array::getDataPointer() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::Array::getDataPointer() const");
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Array::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getTotalDataSize() const function, expected prototype:\nunsigned int osg::Array::getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getTotalDataSize() const");
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Array::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getNumElements() const function, expected prototype:\nunsigned int osg::Array::getNumElements() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getNumElements() const");
		}
		unsigned int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Array::trim()
	static int _bind_trim(lua_State *L) {
		if (!_lg_typecheck_trim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::trim() function, expected prototype:\nvoid osg::Array::trim()\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::trim()");
		}
		self->trim();

		return 0;
	}

	// void osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo)
	static int _bind_setVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_setVertexBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo) function, expected prototype:\nvoid osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::VertexBufferObject* vbo=(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::setVertexBufferObject(osg::VertexBufferObject *)");
		}
		self->setVertexBufferObject(vbo);

		return 0;
	}

	// osg::VertexBufferObject * osg::Array::getVertexBufferObject()
	static int _bind_getVertexBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexBufferObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject * osg::Array::getVertexBufferObject() function, expected prototype:\nosg::VertexBufferObject * osg::Array::getVertexBufferObject()\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::VertexBufferObject * osg::Array::getVertexBufferObject()");
		}
		osg::VertexBufferObject * lret = self->getVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const
	static int _bind_getVertexBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexBufferObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const function, expected prototype:\nconst osg::VertexBufferObject * osg::Array::getVertexBufferObject() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const");
		}
		const osg::VertexBufferObject * lret = self->getVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::getVertexBufferObject
	static int _bind_getVertexBufferObject(lua_State *L) {
		if (_lg_typecheck_getVertexBufferObject_overload_1(L)) return _bind_getVertexBufferObject_overload_1(L);
		if (_lg_typecheck_getVertexBufferObject_overload_2(L)) return _bind_getVertexBufferObject_overload_2(L);

		luaL_error(L, "error in function getVertexBufferObject, cannot match any of the overloads for function getVertexBufferObject:\n  getVertexBufferObject()\n  getVertexBufferObject()\n");
		return 0;
	}

	// void osg::Array::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Array::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::base_setName(const std::string &)");
		}
		self->Array::setName(name);

		return 0;
	}

	// void osg::Array::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::base_computeDataVariance() function, expected prototype:\nvoid osg::Array::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::base_computeDataVariance()");
		}
		self->Array::computeDataVariance();

		return 0;
	}

	// void osg::Array::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Array::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::base_setUserData(osg::Referenced *)");
		}
		self->Array::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Array::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Array::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Array::base_getUserData()\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Array::base_getUserData()");
		}
		osg::Referenced * lret = self->Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Array::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Array::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Array::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Array::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Array::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Array::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::base_releaseGLObjects(osg::State *) const");
		}
		self->Array::releaseGLObjects(state);

		return 0;
	}

	// bool osg::Array::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Array::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Array::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Array::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Array::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Array::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Array::base_libraryName() const function, expected prototype:\nconst char * osg::Array::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Array::base_libraryName() const");
		}
		const char * lret = self->Array::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Array::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Array::base_className() const function, expected prototype:\nconst char * osg::Array::base_className() const\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Array::base_className() const");
		}
		const char * lret = self->Array::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Array::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Array::base_trim() function, expected prototype:\nvoid osg::Array::base_trim()\nClass arguments details:\n");
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Array::base_trim()");
		}
		self->Array::trim();

		return 0;
	}


	// Operator binds:

};

osg::Array* LunaTraits< osg::Array >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	// const void * osg::Array::getDataPointer() const
	// unsigned int osg::Array::getTotalDataSize() const
	// unsigned int osg::Array::getNumElements() const
	// const void * osg::BufferData::getDataPointer() const
	// unsigned int osg::BufferData::getTotalDataSize() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::Array >::_bind_dtor(osg::Array* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Array >::className[] = "Array";
const char LunaTraits< osg::Array >::fullName[] = "osg::Array";
const char LunaTraits< osg::Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Array >::parents[] = {"osg.BufferData", 0};
const int LunaTraits< osg::Array >::hash = 73312406;
const int LunaTraits< osg::Array >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Array >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_Array::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Array::_bind_libraryName},
	{"className", &luna_wrapper_osg_Array::_bind_className},
	{"accept", &luna_wrapper_osg_Array::_bind_accept},
	{"compare", &luna_wrapper_osg_Array::_bind_compare},
	{"getType", &luna_wrapper_osg_Array::_bind_getType},
	{"getDataSize", &luna_wrapper_osg_Array::_bind_getDataSize},
	{"getDataType", &luna_wrapper_osg_Array::_bind_getDataType},
	{"getDataPointer", &luna_wrapper_osg_Array::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_Array::_bind_getTotalDataSize},
	{"getNumElements", &luna_wrapper_osg_Array::_bind_getNumElements},
	{"trim", &luna_wrapper_osg_Array::_bind_trim},
	{"setVertexBufferObject", &luna_wrapper_osg_Array::_bind_setVertexBufferObject},
	{"getVertexBufferObject", &luna_wrapper_osg_Array::_bind_getVertexBufferObject},
	{"base_setName", &luna_wrapper_osg_Array::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Array::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Array::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Array::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Array::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_Array::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Array::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Array::_bind_base_className},
	{"base_trim", &luna_wrapper_osg_Array::_bind_base_trim},
	{"__eq", &luna_wrapper_osg_Array::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Array >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Array::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Array >::enumValues[] = {
	{"ArrayType", osg::Array::ArrayType},
	{"ByteArrayType", osg::Array::ByteArrayType},
	{"ShortArrayType", osg::Array::ShortArrayType},
	{"IntArrayType", osg::Array::IntArrayType},
	{"UByteArrayType", osg::Array::UByteArrayType},
	{"UShortArrayType", osg::Array::UShortArrayType},
	{"UIntArrayType", osg::Array::UIntArrayType},
	{"Vec4ubArrayType", osg::Array::Vec4ubArrayType},
	{"FloatArrayType", osg::Array::FloatArrayType},
	{"Vec2ArrayType", osg::Array::Vec2ArrayType},
	{"Vec3ArrayType", osg::Array::Vec3ArrayType},
	{"Vec4ArrayType", osg::Array::Vec4ArrayType},
	{"Vec2sArrayType", osg::Array::Vec2sArrayType},
	{"Vec3sArrayType", osg::Array::Vec3sArrayType},
	{"Vec4sArrayType", osg::Array::Vec4sArrayType},
	{"Vec2bArrayType", osg::Array::Vec2bArrayType},
	{"Vec3bArrayType", osg::Array::Vec3bArrayType},
	{"Vec4bArrayType", osg::Array::Vec4bArrayType},
	{"DoubleArrayType", osg::Array::DoubleArrayType},
	{"Vec2dArrayType", osg::Array::Vec2dArrayType},
	{"Vec3dArrayType", osg::Array::Vec3dArrayType},
	{"Vec4dArrayType", osg::Array::Vec4dArrayType},
	{"MatrixArrayType", osg::Array::MatrixArrayType},
	{0,0}
};


