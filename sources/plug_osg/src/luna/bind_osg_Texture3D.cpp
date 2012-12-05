#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture3D.h>

class luna_wrapper_osg_Texture3D {
public:
	typedef Luna< osg::Texture3D > luna_t;

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
		osg::Texture3D* ptr= dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture3D >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_setImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3)) ) ) return false;
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

	inline static bool _lg_typecheck_getImage_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureSize(lua_State *L) {
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

	inline static bool _lg_typecheck_copyTexSubImage3D(lua_State *L) {
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
	// osg::Texture3D::Texture3D()
	static osg::Texture3D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D() function, expected prototype:\nosg::Texture3D::Texture3D()\nClass arguments details:\n");
		}


		return new osg::Texture3D();
	}

	// osg::Texture3D::Texture3D(osg::Image * image)
	static osg::Texture3D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D(osg::Image * image) function, expected prototype:\nosg::Texture3D::Texture3D(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));

		return new osg::Texture3D(image);
	}

	// osg::Texture3D::Texture3D(const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture3D* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D(const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture3D::Texture3D(const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Texture3D* text_ptr=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture3D::Texture3D function");
		}
		const osg::Texture3D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture3D::Texture3D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Texture3D(text, copyop);
	}

	// osg::Texture3D::Texture3D(lua_Table * data)
	static osg::Texture3D* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D(lua_Table * data) function, expected prototype:\nosg::Texture3D::Texture3D(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Texture3D(L,NULL);
	}

	// osg::Texture3D::Texture3D(lua_Table * data, osg::Image * image)
	static osg::Texture3D* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D(lua_Table * data, osg::Image * image) function, expected prototype:\nosg::Texture3D::Texture3D(lua_Table * data, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		return new wrapper_osg_Texture3D(L,NULL, image);
	}

	// osg::Texture3D::Texture3D(lua_Table * data, const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture3D* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Texture3D(lua_Table * data, const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture3D::Texture3D(lua_Table * data, const osg::Texture3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Texture3D* text_ptr=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture3D::Texture3D function");
		}
		const osg::Texture3D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture3D::Texture3D function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Texture3D(L,NULL, text, copyop);
	}

	// Overload binder for osg::Texture3D::Texture3D
	static osg::Texture3D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Texture3D, cannot match any of the overloads for function Texture3D:\n  Texture3D()\n  Texture3D(osg::Image *)\n  Texture3D(const osg::Texture3D &, const osg::CopyOp &)\n  Texture3D(lua_Table *)\n  Texture3D(lua_Table *, osg::Image *)\n  Texture3D(lua_Table *, const osg::Texture3D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Texture3D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture3D::cloneType() const function, expected prototype:\nosg::Object * osg::Texture3D::cloneType() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture3D::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture3D::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture3D::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Texture3D::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture3D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture3D::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture3D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture3D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture3D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture3D::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture3D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture3D::libraryName() const function, expected prototype:\nconst char * osg::Texture3D::libraryName() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture3D::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture3D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Texture3D::className() const function, expected prototype:\nconst char * osg::Texture3D::className() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Texture3D::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture3D::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture3D::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture3D::getType() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture3D::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture3D::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture3D::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture3D::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* rhs_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture3D::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture3D::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture3D::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture3D::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture3D::getTextureTarget() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture3D::getTextureTarget() const");
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture3D::setImage(osg::Image * image)
	static int _bind_setImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setImage(osg::Image * image) function, expected prototype:\nvoid osg::Texture3D::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setImage(osg::Image *)");
		}
		self->setImage(image);

		return 0;
	}

	// void osg::Texture3D::setImage(unsigned int arg1, osg::Image * image)
	static int _bind_setImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setImage(unsigned int arg1, osg::Image * image) function, expected prototype:\nvoid osg::Texture3D::setImage(unsigned int arg1, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);
		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,3));

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setImage(unsigned int, osg::Image *)");
		}
		self->setImage(_arg1, image);

		return 0;
	}

	// Overload binder for osg::Texture3D::setImage
	static int _bind_setImage(lua_State *L) {
		if (_lg_typecheck_setImage_overload_1(L)) return _bind_setImage_overload_1(L);
		if (_lg_typecheck_setImage_overload_2(L)) return _bind_setImage_overload_2(L);

		luaL_error(L, "error in function setImage, cannot match any of the overloads for function setImage:\n  setImage(osg::Image *)\n  setImage(unsigned int, osg::Image *)\n");
		return 0;
	}

	// osg::Image * osg::Texture3D::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture3D::getImage() function, expected prototype:\nosg::Image * osg::Texture3D::getImage()\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture3D::getImage()");
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture3D::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture3D::getImage() const function, expected prototype:\nconst osg::Image * osg::Texture3D::getImage() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture3D::getImage() const");
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osg::Texture3D::getImage(unsigned int arg1)
	static int _bind_getImage_overload_3(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture3D::getImage(unsigned int arg1) function, expected prototype:\nosg::Image * osg::Texture3D::getImage(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture3D::getImage(unsigned int)");
		}
		osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture3D::getImage(unsigned int arg1) const
	static int _bind_getImage_overload_4(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture3D::getImage(unsigned int arg1) const function, expected prototype:\nconst osg::Image * osg::Texture3D::getImage(unsigned int arg1) const\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture3D::getImage(unsigned int) const");
		}
		const osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture3D::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);
		if (_lg_typecheck_getImage_overload_3(L)) return _bind_getImage_overload_3(L);
		if (_lg_typecheck_getImage_overload_4(L)) return _bind_getImage_overload_4(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int & osg::Texture3D::getModifiedCount(unsigned int contextID) const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture3D::getModifiedCount(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::Texture3D::getModifiedCount(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture3D::getModifiedCount(unsigned int) const");
		}
		unsigned int & lret = self->getModifiedCount(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture3D::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture3D::getNumImages() const function, expected prototype:\nunsigned int osg::Texture3D::getNumImages() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture3D::getNumImages() const");
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture3D::setTextureSize(int width, int height, int depth) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setTextureSize(int width, int height, int depth) const function, expected prototype:\nvoid osg::Texture3D::setTextureSize(int width, int height, int depth) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=(int)lua_tointeger(L,4);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setTextureSize(int, int, int) const");
		}
		self->setTextureSize(width, height, depth);

		return 0;
	}

	// void osg::Texture3D::getTextureSize(int & width, int & height, int & depth) const
	static int _bind_getTextureSize(lua_State *L) {
		if (!_lg_typecheck_getTextureSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::getTextureSize(int & width, int & height, int & depth) const function, expected prototype:\nvoid osg::Texture3D::getTextureSize(int & width, int & height, int & depth) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=(int)lua_tointeger(L,4);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::getTextureSize(int &, int &, int &) const");
		}
		self->getTextureSize(width, height, depth);

		return 0;
	}

	// void osg::Texture3D::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setTextureWidth(int width) function, expected prototype:\nvoid osg::Texture3D::setTextureWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setTextureWidth(int)");
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::Texture3D::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setTextureHeight(int height) function, expected prototype:\nvoid osg::Texture3D::setTextureHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setTextureHeight(int)");
		}
		self->setTextureHeight(height);

		return 0;
	}

	// void osg::Texture3D::setTextureDepth(int depth)
	static int _bind_setTextureDepth(lua_State *L) {
		if (!_lg_typecheck_setTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setTextureDepth(int depth) function, expected prototype:\nvoid osg::Texture3D::setTextureDepth(int depth)\nClass arguments details:\n");
		}

		int depth=(int)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setTextureDepth(int)");
		}
		self->setTextureDepth(depth);

		return 0;
	}

	// int osg::Texture3D::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture3D::getTextureWidth() const function, expected prototype:\nint osg::Texture3D::getTextureWidth() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture3D::getTextureWidth() const");
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture3D::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture3D::getTextureHeight() const function, expected prototype:\nint osg::Texture3D::getTextureHeight() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture3D::getTextureHeight() const");
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture3D::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Texture3D::getTextureDepth() const function, expected prototype:\nint osg::Texture3D::getTextureDepth() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Texture3D::getTextureDepth() const");
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture3D::setSubloadCallback(osg::Texture3D::SubloadCallback * cb)
	static int _bind_setSubloadCallback(lua_State *L) {
		if (!_lg_typecheck_setSubloadCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setSubloadCallback(osg::Texture3D::SubloadCallback * cb) function, expected prototype:\nvoid osg::Texture3D::setSubloadCallback(osg::Texture3D::SubloadCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture3D::SubloadCallback* cb=dynamic_cast< osg::Texture3D::SubloadCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setSubloadCallback(osg::Texture3D::SubloadCallback *)");
		}
		self->setSubloadCallback(cb);

		return 0;
	}

	// osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback()
	static int _bind_getSubloadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback() function, expected prototype:\nosg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback()\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback()");
		}
		osg::Texture3D::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture3D::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback() const
	static int _bind_getSubloadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback() const function, expected prototype:\nconst osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture3D::SubloadCallback * osg::Texture3D::getSubloadCallback() const");
		}
		const osg::Texture3D::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture3D::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture3D::getSubloadCallback
	static int _bind_getSubloadCallback(lua_State *L) {
		if (_lg_typecheck_getSubloadCallback_overload_1(L)) return _bind_getSubloadCallback_overload_1(L);
		if (_lg_typecheck_getSubloadCallback_overload_2(L)) return _bind_getSubloadCallback_overload_2(L);

		luaL_error(L, "error in function getSubloadCallback, cannot match any of the overloads for function getSubloadCallback:\n  getSubloadCallback()\n  getSubloadCallback()\n");
		return 0;
	}

	// void osg::Texture3D::setNumMipmapLevels(unsigned int num) const
	static int _bind_setNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setNumMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::setNumMipmapLevels(unsigned int num) const function, expected prototype:\nvoid osg::Texture3D::setNumMipmapLevels(unsigned int num) const\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::setNumMipmapLevels(unsigned int) const");
		}
		self->setNumMipmapLevels(num);

		return 0;
	}

	// unsigned int osg::Texture3D::getNumMipmapLevels() const
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture3D::getNumMipmapLevels() const function, expected prototype:\nunsigned int osg::Texture3D::getNumMipmapLevels() const\nClass arguments details:\n");
		}


		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture3D::getNumMipmapLevels() const");
		}
		unsigned int lret = self->getNumMipmapLevels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture3D::copyTexSubImage3D(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)
	static int _bind_copyTexSubImage3D(lua_State *L) {
		if (!_lg_typecheck_copyTexSubImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::copyTexSubImage3D(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) function, expected prototype:\nvoid osg::Texture3D::copyTexSubImage3D(osg::State & state, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture3D::copyTexSubImage3D function");
		}
		osg::State & state=*state_ptr;
		int xoffset=(int)lua_tointeger(L,3);
		int yoffset=(int)lua_tointeger(L,4);
		int zoffset=(int)lua_tointeger(L,5);
		int x=(int)lua_tointeger(L,6);
		int y=(int)lua_tointeger(L,7);
		int width=(int)lua_tointeger(L,8);
		int height=(int)lua_tointeger(L,9);

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::copyTexSubImage3D(osg::State &, int, int, int, int, int, int, int)");
		}
		self->copyTexSubImage3D(state, xoffset, yoffset, zoffset, x, y, width, height);

		return 0;
	}

	// void osg::Texture3D::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture3D::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture3D::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture3D* self=dynamic_cast< osg::Texture3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture3D::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Texture3D* LunaTraits< osg::Texture3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture3D::_bind_ctor(L);
}

void LunaTraits< osg::Texture3D >::_bind_dtor(osg::Texture3D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture3D >::className[] = "Texture3D";
const char LunaTraits< osg::Texture3D >::fullName[] = "osg::Texture3D";
const char LunaTraits< osg::Texture3D >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture3D >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::Texture3D >::hash = 71812844;
const int LunaTraits< osg::Texture3D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture3D >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture3D::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture3D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture3D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture3D::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture3D::_bind_className},
	{"getType", &luna_wrapper_osg_Texture3D::_bind_getType},
	{"compare", &luna_wrapper_osg_Texture3D::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_Texture3D::_bind_getTextureTarget},
	{"setImage", &luna_wrapper_osg_Texture3D::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture3D::_bind_getImage},
	{"getModifiedCount", &luna_wrapper_osg_Texture3D::_bind_getModifiedCount},
	{"getNumImages", &luna_wrapper_osg_Texture3D::_bind_getNumImages},
	{"setTextureSize", &luna_wrapper_osg_Texture3D::_bind_setTextureSize},
	{"getTextureSize", &luna_wrapper_osg_Texture3D::_bind_getTextureSize},
	{"setTextureWidth", &luna_wrapper_osg_Texture3D::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_Texture3D::_bind_setTextureHeight},
	{"setTextureDepth", &luna_wrapper_osg_Texture3D::_bind_setTextureDepth},
	{"getTextureWidth", &luna_wrapper_osg_Texture3D::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture3D::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture3D::_bind_getTextureDepth},
	{"setSubloadCallback", &luna_wrapper_osg_Texture3D::_bind_setSubloadCallback},
	{"getSubloadCallback", &luna_wrapper_osg_Texture3D::_bind_getSubloadCallback},
	{"setNumMipmapLevels", &luna_wrapper_osg_Texture3D::_bind_setNumMipmapLevels},
	{"getNumMipmapLevels", &luna_wrapper_osg_Texture3D::_bind_getNumMipmapLevels},
	{"copyTexSubImage3D", &luna_wrapper_osg_Texture3D::_bind_copyTexSubImage3D},
	{"apply", &luna_wrapper_osg_Texture3D::_bind_apply},
	{"__eq", &luna_wrapper_osg_Texture3D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture3D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture3D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture3D >::enumValues[] = {
	{0,0}
};


