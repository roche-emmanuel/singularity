#include <plug_common.h>

class luna_wrapper_osg_PixelBufferObject {
public:
	typedef Luna< osg::PixelBufferObject > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::PixelBufferObject* ptr= dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PixelBufferObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPBOSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PixelBufferObject::PixelBufferObject(osg::Image * image = 0)
	static osg::PixelBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject::PixelBufferObject(osg::Image * image = 0) function, expected prototype:\nosg::PixelBufferObject::PixelBufferObject(osg::Image * image = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Image* image=luatop>0 ? dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1)) : (osg::Image*)0;

		return new osg::PixelBufferObject(image);
	}

	// osg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PixelBufferObject* pbo_ptr=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::PixelBufferObject::PixelBufferObject function");
		}
		const osg::PixelBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PixelBufferObject::PixelBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PixelBufferObject(pbo, copyop);
	}

	// Overload binder for osg::PixelBufferObject::PixelBufferObject
	static osg::PixelBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PixelBufferObject, cannot match any of the overloads for function PixelBufferObject:\n  PixelBufferObject(osg::Image *)\n  PixelBufferObject(const osg::PixelBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PixelBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::PixelBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelBufferObject::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PixelBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PixelBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PixelBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PixelBufferObject::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PixelBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelBufferObject::libraryName() const function, expected prototype:\nconst char * osg::PixelBufferObject::libraryName() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelBufferObject::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PixelBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelBufferObject::className() const function, expected prototype:\nconst char * osg::PixelBufferObject::className() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelBufferObject::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PixelBufferObject::setImage(osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelBufferObject::setImage(osg::Image * image) function, expected prototype:\nvoid osg::PixelBufferObject::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelBufferObject::setImage(osg::Image *)");
		}
		self->setImage(image);

		return 0;
	}

	// osg::Image * osg::PixelBufferObject::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::PixelBufferObject::getImage() function, expected prototype:\nosg::Image * osg::PixelBufferObject::getImage()\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::PixelBufferObject::getImage()");
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::PixelBufferObject::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::PixelBufferObject::getImage() const function, expected prototype:\nconst osg::Image * osg::PixelBufferObject::getImage() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::PixelBufferObject::getImage() const");
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PixelBufferObject::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n");
		return 0;
	}

	// bool osg::PixelBufferObject::isPBOSupported(unsigned int contextID) const
	static int _bind_isPBOSupported(lua_State *L) {
		if (!_lg_typecheck_isPBOSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PixelBufferObject::isPBOSupported(unsigned int contextID) const function, expected prototype:\nbool osg::PixelBufferObject::isPBOSupported(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelBufferObject* self=dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PixelBufferObject::isPBOSupported(unsigned int) const");
		}
		bool lret = self->isPBOSupported(contextID);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PixelBufferObject* LunaTraits< osg::PixelBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::PixelBufferObject >::_bind_dtor(osg::PixelBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PixelBufferObject >::className[] = "PixelBufferObject";
const char LunaTraits< osg::PixelBufferObject >::fullName[] = "osg::PixelBufferObject";
const char LunaTraits< osg::PixelBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::PixelBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::PixelBufferObject >::hash = 19951806;
const int LunaTraits< osg::PixelBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PixelBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PixelBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PixelBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PixelBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PixelBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_PixelBufferObject::_bind_className},
	{"setImage", &luna_wrapper_osg_PixelBufferObject::_bind_setImage},
	{"getImage", &luna_wrapper_osg_PixelBufferObject::_bind_getImage},
	{"isPBOSupported", &luna_wrapper_osg_PixelBufferObject::_bind_isPBOSupported},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PixelBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelBufferObject >::enumValues[] = {
	{0,0}
};

