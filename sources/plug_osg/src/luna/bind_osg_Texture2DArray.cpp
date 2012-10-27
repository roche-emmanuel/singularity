#include <plug_common.h>

class luna_wrapper_osg_Texture2DArray {
public:
	typedef Luna< osg::Texture2DArray > luna_t;

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
		osg::Texture2DArray* ptr= dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2DArray >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubloadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyTexSubImage2DArray(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture2DArray::Texture2DArray()
	static osg::Texture2DArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DArray::Texture2DArray() function, expected prototype:\nosg::Texture2DArray::Texture2DArray()\nClass arguments details:\n");
		}


		return new osg::Texture2DArray();
	}

	// osg::Texture2DArray::Texture2DArray(const osg::Texture2DArray & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture2DArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DArray::Texture2DArray(const osg::Texture2DArray & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture2DArray::Texture2DArray(const osg::Texture2DArray & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Texture2DArray* cm_ptr=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::Texture2DArray::Texture2DArray function");
		}
		const osg::Texture2DArray & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture2DArray::Texture2DArray function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Texture2DArray(cm, copyop);
	}

	// Overload binder for osg::Texture2DArray::Texture2DArray
	static osg::Texture2DArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Texture2DArray, cannot match any of the overloads for function Texture2DArray:\n  Texture2DArray()\n  Texture2DArray(const osg::Texture2DArray &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Texture2DArray::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DArray::cloneType() const function, expected prototype:\nosg::Object * osg::Texture2DArray::cloneType() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DArray::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2DArray::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2DArray::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Texture2DArray::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2DArray::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2DArray::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2DArray::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture2DArray::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2DArray::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture2DArray::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2DArray::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DArray::libraryName() const function, expected prototype:\nconst char * osg::Texture2DArray::libraryName() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DArray::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2DArray::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2DArray::className() const function, expected prototype:\nconst char * osg::Texture2DArray::className() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture2DArray::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2DArray::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2DArray::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2DArray::getType() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2DArray::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DArray::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2DArray::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2DArray::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2DArray::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DArray::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2DArray::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DArray::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::setImage(unsigned int layer, osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setImage(unsigned int layer, osg::Image * image) function, expected prototype:\nvoid osg::Texture2DArray::setImage(unsigned int layer, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int layer=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3));

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setImage(unsigned int, osg::Image *)");
		}
		self->setImage(layer, image);

		return 0;
	}

	// osg::Image * osg::Texture2DArray::getImage(unsigned int layer)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2DArray::getImage(unsigned int layer) function, expected prototype:\nosg::Image * osg::Texture2DArray::getImage(unsigned int layer)\nClass arguments details:\n");
		}

		unsigned int layer=(unsigned int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2DArray::getImage(unsigned int)");
		}
		osg::Image * lret = self->getImage(layer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2DArray::getImage(unsigned int layer) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2DArray::getImage(unsigned int layer) const function, expected prototype:\nconst osg::Image * osg::Texture2DArray::getImage(unsigned int layer) const\nClass arguments details:\n");
		}

		unsigned int layer=(unsigned int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2DArray::getImage(unsigned int) const");
		}
		const osg::Image * lret = self->getImage(layer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DArray::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Texture2DArray::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DArray::getNumImages() const function, expected prototype:\nunsigned int osg::Texture2DArray::getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DArray::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::Texture2DArray::getModifiedCount(unsigned int layer, unsigned int contextID) const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture2DArray::getModifiedCount(unsigned int layer, unsigned int contextID) const function, expected prototype:\nunsigned int & osg::Texture2DArray::getModifiedCount(unsigned int layer, unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int layer=(unsigned int)lua_tointeger(L,2);
		unsigned int contextID=(unsigned int)lua_tointeger(L,3);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture2DArray::getModifiedCount(unsigned int, unsigned int) const");
		}
		unsigned int & lret = self->getModifiedCount(layer, contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::setTextureSize(int width, int height, int depth)
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setTextureSize(int width, int height, int depth) function, expected prototype:\nvoid osg::Texture2DArray::setTextureSize(int width, int height, int depth)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=(int)lua_tointeger(L,4);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setTextureSize(int, int, int)");
		}
		self->setTextureSize(width, height, depth);

		return 0;
	}

	// void osg::Texture2DArray::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setTextureWidth(int width) function, expected prototype:\nvoid osg::Texture2DArray::setTextureWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setTextureWidth(int)");
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::Texture2DArray::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setTextureHeight(int height) function, expected prototype:\nvoid osg::Texture2DArray::setTextureHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setTextureHeight(int)");
		}
		self->setTextureHeight(height);

		return 0;
	}

	// void osg::Texture2DArray::setTextureDepth(int depth)
	static int _bind_setTextureDepth(lua_State *L) {
		if (!_lg_typecheck_setTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setTextureDepth(int depth) function, expected prototype:\nvoid osg::Texture2DArray::setTextureDepth(int depth)\nClass arguments details:\n");
		}

		int depth=(int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setTextureDepth(int)");
		}
		self->setTextureDepth(depth);

		return 0;
	}

	// int osg::Texture2DArray::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::getTextureWidth() const function, expected prototype:\nint osg::Texture2DArray::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DArray::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::getTextureHeight() const function, expected prototype:\nint osg::Texture2DArray::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2DArray::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture2DArray::getTextureDepth() const function, expected prototype:\nint osg::Texture2DArray::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture2DArray::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::setSubloadCallback(osg::Texture2DArray::SubloadCallback * cb)
	static int _bind_setSubloadCallback(lua_State *L) {
		if (!_lg_typecheck_setSubloadCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setSubloadCallback(osg::Texture2DArray::SubloadCallback * cb) function, expected prototype:\nvoid osg::Texture2DArray::setSubloadCallback(osg::Texture2DArray::SubloadCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture2DArray::SubloadCallback* cb=dynamic_cast< osg::Texture2DArray::SubloadCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setSubloadCallback(osg::Texture2DArray::SubloadCallback *)");
		}
		self->setSubloadCallback(cb);

		return 0;
	}

	// osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback()
	static int _bind_getSubloadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback() function, expected prototype:\nosg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback()\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback()");
		}
		osg::Texture2DArray::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2DArray::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback() const
	static int _bind_getSubloadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback() const function, expected prototype:\nconst osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture2DArray::SubloadCallback * osg::Texture2DArray::getSubloadCallback() const");
		}
		const osg::Texture2DArray::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2DArray::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2DArray::getSubloadCallback
	static int _bind_getSubloadCallback(lua_State *L) {
		if (_lg_typecheck_getSubloadCallback_overload_1(L)) return _bind_getSubloadCallback_overload_1(L);
		if (_lg_typecheck_getSubloadCallback_overload_2(L)) return _bind_getSubloadCallback_overload_2(L);

		luaL_error(L, "error in function getSubloadCallback, cannot match any of the overloads for function getSubloadCallback:\n  getSubloadCallback()\n  getSubloadCallback()\n");
		return 0;
	}

	// void osg::Texture2DArray::setNumMipmapLevels(unsigned int num) const
	static int _bind_setNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setNumMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::setNumMipmapLevels(unsigned int num) const function, expected prototype:\nvoid osg::Texture2DArray::setNumMipmapLevels(unsigned int num) const\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::setNumMipmapLevels(unsigned int) const");
		}
		self->setNumMipmapLevels(num);

		return 0;
	}

	// unsigned int osg::Texture2DArray::getNumMipmapLevels() const
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2DArray::getNumMipmapLevels() const function, expected prototype:\nunsigned int osg::Texture2DArray::getNumMipmapLevels() const\nClass arguments details:\n");
		}


		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2DArray::getNumMipmapLevels() const");
		}
		unsigned int lret = self->getNumMipmapLevels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2DArray::copyTexSubImage2DArray(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)
	static int _bind_copyTexSubImage2DArray(lua_State *L) {
		if (!_lg_typecheck_copyTexSubImage2DArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::copyTexSubImage2DArray(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) function, expected prototype:\nvoid osg::Texture2DArray::copyTexSubImage2DArray(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::copyTexSubImage2DArray function");
		}
		osg::State & state=*state_ptr;
		int xoffset=(int)lua_tointeger(L,3);
		int yoffset=(int)lua_tointeger(L,4);
		int zoffset=(int)lua_tointeger(L,5);
		int x=(int)lua_tointeger(L,6);
		int y=(int)lua_tointeger(L,7);
		int width=(int)lua_tointeger(L,8);
		int height=(int)lua_tointeger(L,9);

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::copyTexSubImage2DArray(osg::State &, int, int, int, int, int, int, int)");
		}
		self->copyTexSubImage2DArray(state, xoffset, yoffset, zoffset, x, y, width, height);

		return 0;
	}

	// void osg::Texture2DArray::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture2DArray::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2DArray::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2DArray::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2DArray* self=dynamic_cast< osg::Texture2DArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture2DArray::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Texture2DArray* LunaTraits< osg::Texture2DArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture2DArray::_bind_ctor(L);
}

void LunaTraits< osg::Texture2DArray >::_bind_dtor(osg::Texture2DArray* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2DArray >::className[] = "Texture2DArray";
const char LunaTraits< osg::Texture2DArray >::fullName[] = "osg::Texture2DArray";
const char LunaTraits< osg::Texture2DArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2DArray >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::Texture2DArray >::hash = 22012271;
const int LunaTraits< osg::Texture2DArray >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2DArray >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture2DArray::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture2DArray::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture2DArray::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture2DArray::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture2DArray::_bind_className},
	{"getType", &luna_wrapper_osg_Texture2DArray::_bind_getType},
	{"compare", &luna_wrapper_osg_Texture2DArray::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_Texture2DArray::_bind_getTextureTarget},
	{"setImage", &luna_wrapper_osg_Texture2DArray::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture2DArray::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_Texture2DArray::_bind_getNumImages},
	{"getModifiedCount", &luna_wrapper_osg_Texture2DArray::_bind_getModifiedCount},
	{"setTextureSize", &luna_wrapper_osg_Texture2DArray::_bind_setTextureSize},
	{"setTextureWidth", &luna_wrapper_osg_Texture2DArray::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_Texture2DArray::_bind_setTextureHeight},
	{"setTextureDepth", &luna_wrapper_osg_Texture2DArray::_bind_setTextureDepth},
	{"getTextureWidth", &luna_wrapper_osg_Texture2DArray::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture2DArray::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture2DArray::_bind_getTextureDepth},
	{"setSubloadCallback", &luna_wrapper_osg_Texture2DArray::_bind_setSubloadCallback},
	{"getSubloadCallback", &luna_wrapper_osg_Texture2DArray::_bind_getSubloadCallback},
	{"setNumMipmapLevels", &luna_wrapper_osg_Texture2DArray::_bind_setNumMipmapLevels},
	{"getNumMipmapLevels", &luna_wrapper_osg_Texture2DArray::_bind_getNumMipmapLevels},
	{"copyTexSubImage2DArray", &luna_wrapper_osg_Texture2DArray::_bind_copyTexSubImage2DArray},
	{"apply", &luna_wrapper_osg_Texture2DArray::_bind_apply},
	{"__eq", &luna_wrapper_osg_Texture2DArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2DArray >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2DArray::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2DArray >::enumValues[] = {
	{0,0}
};


