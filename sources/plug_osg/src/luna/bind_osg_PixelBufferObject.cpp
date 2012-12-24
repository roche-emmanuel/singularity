#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PixelBufferObject.h>

class luna_wrapper_osg_PixelBufferObject {
public:
	typedef Luna< osg::PixelBufferObject > luna_t;

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
		//osg::PixelBufferObject* ptr= dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::PixelBufferObject* ptr= luna_caster< osg::Referenced, osg::PixelBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
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
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

		osg::Image* image=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) : (osg::Image*)0;

		return new osg::PixelBufferObject(image);
	}

	// osg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelBufferObject::PixelBufferObject(const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PixelBufferObject* pbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1));
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

	// osg::PixelBufferObject::PixelBufferObject(lua_Table * data, osg::Image * image = 0)
	static osg::PixelBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject::PixelBufferObject(lua_Table * data, osg::Image * image = 0) function, expected prototype:\nosg::PixelBufferObject::PixelBufferObject(lua_Table * data, osg::Image * image = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Image* image=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) : (osg::Image*)0;

		return new wrapper_osg_PixelBufferObject(L,NULL, image);
	}

	// osg::PixelBufferObject::PixelBufferObject(lua_Table * data, const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject::PixelBufferObject(lua_Table * data, const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelBufferObject::PixelBufferObject(lua_Table * data, const osg::PixelBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PixelBufferObject* pbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,2));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::PixelBufferObject::PixelBufferObject function");
		}
		const osg::PixelBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PixelBufferObject::PixelBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PixelBufferObject(L,NULL, pbo, copyop);
	}

	// Overload binder for osg::PixelBufferObject::PixelBufferObject
	static osg::PixelBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PixelBufferObject, cannot match any of the overloads for function PixelBufferObject:\n  PixelBufferObject(osg::Image *)\n  PixelBufferObject(const osg::PixelBufferObject &, const osg::CopyOp &)\n  PixelBufferObject(lua_Table *, osg::Image *)\n  PixelBufferObject(lua_Table *, const osg::PixelBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PixelBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::PixelBufferObject::cloneType() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelBufferObject::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PixelBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
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

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PixelBufferObject::isPBOSupported(unsigned int) const");
		}
		bool lret = self->isPBOSupported(contextID);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PixelBufferObject::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelBufferObject::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PixelBufferObject::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelBufferObject::base_setName(const std::string &)");
		}
		self->PixelBufferObject::setName(name);

		return 0;
	}

	// void osg::PixelBufferObject::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelBufferObject::base_computeDataVariance() function, expected prototype:\nvoid osg::PixelBufferObject::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelBufferObject::base_computeDataVariance()");
		}
		self->PixelBufferObject::computeDataVariance();

		return 0;
	}

	// void osg::PixelBufferObject::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelBufferObject::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PixelBufferObject::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelBufferObject::base_setUserData(osg::Referenced *)");
		}
		self->PixelBufferObject::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PixelBufferObject::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PixelBufferObject::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PixelBufferObject::base_getUserData()\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PixelBufferObject::base_getUserData()");
		}
		osg::Referenced * lret = self->PixelBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PixelBufferObject::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PixelBufferObject::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PixelBufferObject::base_getUserData() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PixelBufferObject::base_getUserData() const");
		}
		const osg::Referenced * lret = self->PixelBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PixelBufferObject::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::PixelBufferObject::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelBufferObject::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::PixelBufferObject::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelBufferObject::base_releaseGLObjects(osg::State *) const");
		}
		self->PixelBufferObject::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::PixelBufferObject::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::base_cloneType() const function, expected prototype:\nosg::Object * osg::PixelBufferObject::base_cloneType() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelBufferObject::base_cloneType() const");
		}
		osg::Object * lret = self->PixelBufferObject::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelBufferObject::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelBufferObject::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PixelBufferObject::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelBufferObject::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelBufferObject::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->PixelBufferObject::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PixelBufferObject::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PixelBufferObject::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PixelBufferObject::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PixelBufferObject::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->PixelBufferObject::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PixelBufferObject::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelBufferObject::base_libraryName() const function, expected prototype:\nconst char * osg::PixelBufferObject::base_libraryName() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelBufferObject::base_libraryName() const");
		}
		const char * lret = self->PixelBufferObject::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PixelBufferObject::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PixelBufferObject::base_className() const function, expected prototype:\nconst char * osg::PixelBufferObject::base_className() const\nClass arguments details:\n");
		}


		osg::PixelBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PixelBufferObject::base_className() const");
		}
		const char * lret = self->PixelBufferObject::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::PixelBufferObject* LunaTraits< osg::PixelBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelBufferObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"base_setName", &luna_wrapper_osg_PixelBufferObject::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PixelBufferObject::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PixelBufferObject::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PixelBufferObject::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_PixelBufferObject::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_PixelBufferObject::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PixelBufferObject::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PixelBufferObject::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_PixelBufferObject::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_PixelBufferObject::_bind_base_className},
	{"__eq", &luna_wrapper_osg_PixelBufferObject::_bind___eq},
	{"getTable", &luna_wrapper_osg_PixelBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PixelBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelBufferObject >::enumValues[] = {
	{0,0}
};


