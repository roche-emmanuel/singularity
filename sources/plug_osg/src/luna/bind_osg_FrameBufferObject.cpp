#include <plug_common.h>

class luna_wrapper_osg_FrameBufferObject {
public:
	typedef Luna< osg::FrameBufferObject > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::FrameBufferObject* ptr= dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrameBufferObject >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttachmentMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttachment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,90669884) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttachment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasAttachment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasMultipleRenderingTargets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultipleRenderingTargets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisample(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteFrameBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedFrameBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedFrameBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::FrameBufferObject::FrameBufferObject()
	static osg::FrameBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject() function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject()\nClass arguments details:\n");
		}


		return new osg::FrameBufferObject();
	}

	// osg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrameBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::FrameBufferObject* copy_ptr=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::FrameBufferObject & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::FrameBufferObject(copy, copyop);
	}

	// Overload binder for osg::FrameBufferObject::FrameBufferObject
	static osg::FrameBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FrameBufferObject, cannot match any of the overloads for function FrameBufferObject:\n  FrameBufferObject()\n  FrameBufferObject(const osg::FrameBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FrameBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::FrameBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrameBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::libraryName() const function, expected prototype:\nconst char * osg::FrameBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrameBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::className() const function, expected prototype:\nconst char * osg::FrameBufferObject::className() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrameBufferObject::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrameBufferObject::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrameBufferObject::getType() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrameBufferObject::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const
	static int _bind_getAttachmentMap(lua_State *L) {
		if (!_lg_typecheck_getAttachmentMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const function, expected prototype:\nconst osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const");
		}
		const osg::FrameBufferObject::AttachmentMap* lret = &self->getAttachmentMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject::AttachmentMap >::push(L,lret,false);

		return 1;
	}

	// void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment)
	static int _bind_setAttachment(lua_State *L) {
		if (!_lg_typecheck_setAttachment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment) function, expected prototype:\nvoid osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment)\nClass arguments details:\narg 2 ID = 90669884\n");
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		const osg::FrameBufferAttachment* attachment_ptr=(Luna< osg::FrameBufferAttachment >::check(L,3));
		if( !attachment_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attachment in osg::FrameBufferObject::setAttachment function");
		}
		const osg::FrameBufferAttachment & attachment=*attachment_ptr;

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent, const osg::FrameBufferAttachment &)");
		}
		self->setAttachment(attachment_point, attachment);

		return 0;
	}

	// const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const
	static int _bind_getAttachment(lua_State *L) {
		if (!_lg_typecheck_getAttachment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const function, expected prototype:\nconst osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const\nClass arguments details:\n");
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent) const");
		}
		const osg::FrameBufferAttachment* lret = &self->getAttachment(attachment_point);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferAttachment >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const
	static int _bind_hasAttachment(lua_State *L) {
		if (!_lg_typecheck_hasAttachment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const function, expected prototype:\nbool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const\nClass arguments details:\n");
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent) const");
		}
		bool lret = self->hasAttachment(attachment_point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrameBufferObject::hasMultipleRenderingTargets() const
	static int _bind_hasMultipleRenderingTargets(lua_State *L) {
		if (!_lg_typecheck_hasMultipleRenderingTargets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::hasMultipleRenderingTargets() const function, expected prototype:\nbool osg::FrameBufferObject::hasMultipleRenderingTargets() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::hasMultipleRenderingTargets() const");
		}
		bool lret = self->hasMultipleRenderingTargets();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const
	static int _bind_getMultipleRenderingTargets(lua_State *L) {
		if (!_lg_typecheck_getMultipleRenderingTargets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const function, expected prototype:\nconst osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const");
		}
		const osg::FrameBufferObject::MultipleRenderingTargets* lret = &self->getMultipleRenderingTargets();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject::MultipleRenderingTargets >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::isMultisample() const
	static int _bind_isMultisample(lua_State *L) {
		if (!_lg_typecheck_isMultisample(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::isMultisample() const function, expected prototype:\nbool osg::FrameBufferObject::isMultisample() const\nClass arguments details:\n");
		}


		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::isMultisample() const");
		}
		bool lret = self->isMultisample();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrameBufferObject::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::FrameBufferObject::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameBufferObject::apply(osg::State & ) const
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::apply(osg::State & ) const function, expected prototype:\nvoid osg::FrameBufferObject::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const function, expected prototype:\nvoid osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::FrameBufferObject::apply function");
		}
		osg::State & state=*state_ptr;
		osg::FrameBufferObject::BindTarget target=(osg::FrameBufferObject::BindTarget)lua_tointeger(L,3);

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::apply(osg::State &, osg::FrameBufferObject::BindTarget) const");
		}
		self->apply(state, target);

		return 0;
	}

	// Overload binder for osg::FrameBufferObject::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::State &)\n  apply(osg::State &, osg::FrameBufferObject::BindTarget)\n");
		return 0;
	}

	// void osg::FrameBufferObject::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::FrameBufferObject::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::FrameBufferObject* self=dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// static void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program)
	static int _bind_deleteFrameBufferObject(lua_State *L) {
		if (!_lg_typecheck_deleteFrameBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program) function, expected prototype:\nstatic void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::FrameBufferObject::deleteFrameBufferObject(contextID, program);

		return 0;
	}

	// static void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedFrameBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedFrameBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::FrameBufferObject::flushDeletedFrameBufferObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID)
	static int _bind_discardDeletedFrameBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedFrameBufferObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::FrameBufferObject::discardDeletedFrameBufferObjects(contextID);

		return 0;
	}


	// Operator binds:

};

osg::FrameBufferObject* LunaTraits< osg::FrameBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrameBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::FrameBufferObject >::_bind_dtor(osg::FrameBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrameBufferObject >::className[] = "FrameBufferObject";
const char LunaTraits< osg::FrameBufferObject >::fullName[] = "osg::FrameBufferObject";
const char LunaTraits< osg::FrameBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameBufferObject >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FrameBufferObject >::hash = 73385588;
const int LunaTraits< osg::FrameBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrameBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FrameBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FrameBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FrameBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FrameBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_FrameBufferObject::_bind_className},
	{"getType", &luna_wrapper_osg_FrameBufferObject::_bind_getType},
	{"getAttachmentMap", &luna_wrapper_osg_FrameBufferObject::_bind_getAttachmentMap},
	{"setAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_setAttachment},
	{"getAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_getAttachment},
	{"hasAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_hasAttachment},
	{"hasMultipleRenderingTargets", &luna_wrapper_osg_FrameBufferObject::_bind_hasMultipleRenderingTargets},
	{"getMultipleRenderingTargets", &luna_wrapper_osg_FrameBufferObject::_bind_getMultipleRenderingTargets},
	{"isMultisample", &luna_wrapper_osg_FrameBufferObject::_bind_isMultisample},
	{"compare", &luna_wrapper_osg_FrameBufferObject::_bind_compare},
	{"apply", &luna_wrapper_osg_FrameBufferObject::_bind_apply},
	{"releaseGLObjects", &luna_wrapper_osg_FrameBufferObject::_bind_releaseGLObjects},
	{"deleteFrameBufferObject", &luna_wrapper_osg_FrameBufferObject::_bind_deleteFrameBufferObject},
	{"flushDeletedFrameBufferObjects", &luna_wrapper_osg_FrameBufferObject::_bind_flushDeletedFrameBufferObjects},
	{"discardDeletedFrameBufferObjects", &luna_wrapper_osg_FrameBufferObject::_bind_discardDeletedFrameBufferObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrameBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameBufferObject >::enumValues[] = {
	{"READ_FRAMEBUFFER", osg::FrameBufferObject::READ_FRAMEBUFFER},
	{"DRAW_FRAMEBUFFER", osg::FrameBufferObject::DRAW_FRAMEBUFFER},
	{"READ_DRAW_FRAMEBUFFER", osg::FrameBufferObject::READ_DRAW_FRAMEBUFFER},
	{0,0}
};


