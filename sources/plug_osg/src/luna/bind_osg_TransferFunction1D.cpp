#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TransferFunction1D.h>

class luna_wrapper_osg_TransferFunction1D {
public:
	typedef Luna< osg::TransferFunction1D > luna_t;

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
		osg::TransferFunction1D* ptr= dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TransferFunction1D >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getMinimum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaximum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberImageCells(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,93067344) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TransferFunction1D::TransferFunction1D()
	static osg::TransferFunction1D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D() function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D()\nClass arguments details:\n");
		}


		return new osg::TransferFunction1D();
	}

	// osg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction1D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction1D* tf_ptr=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::TransferFunction1D & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TransferFunction1D(tf, copyop);
	}

	// osg::TransferFunction1D::TransferFunction1D(lua_Table * data)
	static osg::TransferFunction1D* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(lua_Table * data) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_TransferFunction1D(L,NULL);
	}

	// osg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction1D* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction1D* tf_ptr=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,2));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::TransferFunction1D & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TransferFunction1D(L,NULL, tf, copyop);
	}

	// Overload binder for osg::TransferFunction1D::TransferFunction1D
	static osg::TransferFunction1D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TransferFunction1D, cannot match any of the overloads for function TransferFunction1D:\n  TransferFunction1D()\n  TransferFunction1D(const osg::TransferFunction1D &, const osg::CopyOp &)\n  TransferFunction1D(lua_Table *)\n  TransferFunction1D(lua_Table *, const osg::TransferFunction1D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TransferFunction1D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction1D::cloneType() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction1D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction1D::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction1D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::libraryName() const function, expected prototype:\nconst char * osg::TransferFunction1D::libraryName() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction1D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::className() const function, expected prototype:\nconst char * osg::TransferFunction1D::className() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// float osg::TransferFunction1D::getMinimum() const
	static int _bind_getMinimum(lua_State *L) {
		if (!_lg_typecheck_getMinimum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TransferFunction1D::getMinimum() const function, expected prototype:\nfloat osg::TransferFunction1D::getMinimum() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TransferFunction1D::getMinimum() const");
		}
		float lret = self->getMinimum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::TransferFunction1D::getMaximum() const
	static int _bind_getMaximum(lua_State *L) {
		if (!_lg_typecheck_getMaximum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TransferFunction1D::getMaximum() const function, expected prototype:\nfloat osg::TransferFunction1D::getMaximum() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TransferFunction1D::getMaximum() const");
		}
		float lret = self->getMaximum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TransferFunction1D::allocate(unsigned int numImageCells)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::allocate(unsigned int numImageCells) function, expected prototype:\nvoid osg::TransferFunction1D::allocate(unsigned int numImageCells)\nClass arguments details:\n");
		}

		unsigned int numImageCells=(unsigned int)lua_tointeger(L,2);

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::allocate(unsigned int)");
		}
		self->allocate(numImageCells);

		return 0;
	}

	// void osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f))
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f)) function, expected prototype:\nvoid osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f))\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec4f* color_ptr=luatop>1 ? (Luna< osg::Vec4f >::check(L,2)) : NULL;
		if( luatop>1 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TransferFunction1D::clear function");
		}
		const osg::Vec4f & color=luatop>1 ? *color_ptr : osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f);

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::clear(const osg::Vec4f &)");
		}
		self->clear(color);

		return 0;
	}

	// osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const
	static int _bind_getPixelValue(lua_State *L) {
		if (!_lg_typecheck_getPixelValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const function, expected prototype:\nosg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int) const");
		}
		osg::Vec4f stack_lret = self->getPixelValue(i);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// unsigned int osg::TransferFunction1D::getNumberImageCells() const
	static int _bind_getNumberImageCells(lua_State *L) {
		if (!_lg_typecheck_getNumberImageCells(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::TransferFunction1D::getNumberImageCells() const function, expected prototype:\nunsigned int osg::TransferFunction1D::getNumberImageCells() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::TransferFunction1D::getNumberImageCells() const");
		}
		unsigned int lret = self->getNumberImageCells();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true) function, expected prototype:\nvoid osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		int luatop = lua_gettop(L);

		float v=(float)lua_tonumber(L,2);
		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TransferFunction1D::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;
		bool updateImage=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::setColor(float, const osg::Vec4f &, bool)");
		}
		self->setColor(v, color, updateImage);

		return 0;
	}

	// osg::Vec4f osg::TransferFunction1D::getColor(float v) const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::TransferFunction1D::getColor(float v) const function, expected prototype:\nosg::Vec4f osg::TransferFunction1D::getColor(float v) const\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::TransferFunction1D::getColor(float) const");
		}
		osg::Vec4f stack_lret = self->getColor(v);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap()
	static int _bind_getColorMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorMap_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() function, expected prototype:\nosg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap()\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap()");
		}
		const osg::TransferFunction1D::ColorMap* lret = &self->getColorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TransferFunction1D::ColorMap >::push(L,lret,false);

		return 1;
	}

	// const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const
	static int _bind_getColorMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorMap_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const function, expected prototype:\nconst osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const");
		}
		const osg::TransferFunction1D::ColorMap* lret = &self->getColorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TransferFunction1D::ColorMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction1D::getColorMap
	static int _bind_getColorMap(lua_State *L) {
		if (_lg_typecheck_getColorMap_overload_1(L)) return _bind_getColorMap_overload_1(L);
		if (_lg_typecheck_getColorMap_overload_2(L)) return _bind_getColorMap_overload_2(L);

		luaL_error(L, "error in function getColorMap, cannot match any of the overloads for function getColorMap:\n  getColorMap()\n  getColorMap()\n");
		return 0;
	}

	// void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm) function, expected prototype:\nvoid osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm)\nClass arguments details:\narg 1 ID = 93067344\n");
		}

		const osg::TransferFunction1D::ColorMap* vcm_ptr=(Luna< osg::TransferFunction1D::ColorMap >::check(L,2));
		if( !vcm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vcm in osg::TransferFunction1D::assign function");
		}
		const osg::TransferFunction1D::ColorMap & vcm=*vcm_ptr;

		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap &)");
		}
		self->assign(vcm);

		return 0;
	}

	// void osg::TransferFunction1D::updateImage()
	static int _bind_updateImage(lua_State *L) {
		if (!_lg_typecheck_updateImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::updateImage() function, expected prototype:\nvoid osg::TransferFunction1D::updateImage()\nClass arguments details:\n");
		}


		osg::TransferFunction1D* self=dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::updateImage()");
		}
		self->updateImage();

		return 0;
	}


	// Operator binds:

};

osg::TransferFunction1D* LunaTraits< osg::TransferFunction1D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TransferFunction1D::_bind_ctor(L);
}

void LunaTraits< osg::TransferFunction1D >::_bind_dtor(osg::TransferFunction1D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TransferFunction1D >::className[] = "TransferFunction1D";
const char LunaTraits< osg::TransferFunction1D >::fullName[] = "osg::TransferFunction1D";
const char LunaTraits< osg::TransferFunction1D >::moduleName[] = "osg";
const char* LunaTraits< osg::TransferFunction1D >::parents[] = {"osg.TransferFunction", 0};
const int LunaTraits< osg::TransferFunction1D >::hash = 46026100;
const int LunaTraits< osg::TransferFunction1D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TransferFunction1D >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TransferFunction1D::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TransferFunction1D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TransferFunction1D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TransferFunction1D::_bind_libraryName},
	{"className", &luna_wrapper_osg_TransferFunction1D::_bind_className},
	{"getMinimum", &luna_wrapper_osg_TransferFunction1D::_bind_getMinimum},
	{"getMaximum", &luna_wrapper_osg_TransferFunction1D::_bind_getMaximum},
	{"allocate", &luna_wrapper_osg_TransferFunction1D::_bind_allocate},
	{"clear", &luna_wrapper_osg_TransferFunction1D::_bind_clear},
	{"getPixelValue", &luna_wrapper_osg_TransferFunction1D::_bind_getPixelValue},
	{"getNumberImageCells", &luna_wrapper_osg_TransferFunction1D::_bind_getNumberImageCells},
	{"setColor", &luna_wrapper_osg_TransferFunction1D::_bind_setColor},
	{"getColor", &luna_wrapper_osg_TransferFunction1D::_bind_getColor},
	{"getColorMap", &luna_wrapper_osg_TransferFunction1D::_bind_getColorMap},
	{"assign", &luna_wrapper_osg_TransferFunction1D::_bind_assign},
	{"updateImage", &luna_wrapper_osg_TransferFunction1D::_bind_updateImage},
	{"__eq", &luna_wrapper_osg_TransferFunction1D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TransferFunction1D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TransferFunction1D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TransferFunction1D >::enumValues[] = {
	{0,0}
};


