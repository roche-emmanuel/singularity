#include <plug_common.h>

class luna_wrapper_osg_Box {
public:
	typedef Luna< osg::Box > luna_t;

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
		osg::Box* ptr= dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Box >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!dynamic_cast< osg::ShapeVisitor* >(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!dynamic_cast< osg::ConstShapeVisitor* >(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHalfLengths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHalfLengths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeRotationMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_zeroRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Box::Box()
	static osg::Box* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Box::Box() function, expected prototype:\nosg::Box::Box()\nClass arguments details:\n");
		}


		return new osg::Box();
	}

	// osg::Box::Box(const osg::Vec3f & center, float width)
	static osg::Box* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Box::Box(const osg::Vec3f & center, float width) function, expected prototype:\nosg::Box::Box(const osg::Vec3f & center, float width)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Box::Box function");
		}
		const osg::Vec3f & center=*center_ptr;
		float width=(float)lua_tonumber(L,2);

		return new osg::Box(center, width);
	}

	// osg::Box::Box(const osg::Vec3f & center, float lengthX, float lengthY, float lengthZ)
	static osg::Box* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Box::Box(const osg::Vec3f & center, float lengthX, float lengthY, float lengthZ) function, expected prototype:\nosg::Box::Box(const osg::Vec3f & center, float lengthX, float lengthY, float lengthZ)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Box::Box function");
		}
		const osg::Vec3f & center=*center_ptr;
		float lengthX=(float)lua_tonumber(L,2);
		float lengthY=(float)lua_tonumber(L,3);
		float lengthZ=(float)lua_tonumber(L,4);

		return new osg::Box(center, lengthX, lengthY, lengthZ);
	}

	// osg::Box::Box(const osg::Box & box, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Box* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Box::Box(const osg::Box & box, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Box::Box(const osg::Box & box, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Box* box_ptr=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in osg::Box::Box function");
		}
		const osg::Box & box=*box_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Box::Box function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Box(box, copyop);
	}

	// Overload binder for osg::Box::Box
	static osg::Box* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Box, cannot match any of the overloads for function Box:\n  Box()\n  Box(const osg::Vec3f &, float)\n  Box(const osg::Vec3f &, float, float, float)\n  Box(const osg::Box &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Box::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Box::cloneType() const function, expected prototype:\nosg::Object * osg::Box::cloneType() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Box::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Box::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Box::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Box::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Box::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Box::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Box::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Box::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Box::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Box::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Box::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Box::libraryName() const function, expected prototype:\nconst char * osg::Box::libraryName() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Box::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Box::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Box::className() const function, expected prototype:\nconst char * osg::Box::className() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Box::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Box::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::Box::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Box::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Box::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::Box::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Box::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Box::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Box::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Box::valid() const function, expected prototype:\nbool osg::Box::valid() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Box::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Box::set(const osg::Vec3f & center, const osg::Vec3f & halfLengths)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::set(const osg::Vec3f & center, const osg::Vec3f & halfLengths) function, expected prototype:\nvoid osg::Box::set(const osg::Vec3f & center, const osg::Vec3f & halfLengths)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Box::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		const osg::Vec3f* halfLengths_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !halfLengths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg halfLengths in osg::Box::set function");
		}
		const osg::Vec3f & halfLengths=*halfLengths_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::set(const osg::Vec3f &, const osg::Vec3f &)");
		}
		self->set(center, halfLengths);

		return 0;
	}

	// void osg::Box::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Box::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Box::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Box::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Box::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Box::getCenter() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Box::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Box::setHalfLengths(const osg::Vec3f & halfLengths)
	static int _bind_setHalfLengths(lua_State *L) {
		if (!_lg_typecheck_setHalfLengths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::setHalfLengths(const osg::Vec3f & halfLengths) function, expected prototype:\nvoid osg::Box::setHalfLengths(const osg::Vec3f & halfLengths)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* halfLengths_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !halfLengths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg halfLengths in osg::Box::setHalfLengths function");
		}
		const osg::Vec3f & halfLengths=*halfLengths_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::setHalfLengths(const osg::Vec3f &)");
		}
		self->setHalfLengths(halfLengths);

		return 0;
	}

	// const osg::Vec3f & osg::Box::getHalfLengths() const
	static int _bind_getHalfLengths(lua_State *L) {
		if (!_lg_typecheck_getHalfLengths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Box::getHalfLengths() const function, expected prototype:\nconst osg::Vec3f & osg::Box::getHalfLengths() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Box::getHalfLengths() const");
		}
		const osg::Vec3f* lret = &self->getHalfLengths();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Box::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Box::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::Box::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Box::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Box::setRotation(const osg::Quat &)");
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::Box::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::Box::getRotation() const function, expected prototype:\nconst osg::Quat & osg::Box::getRotation() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::Box::getRotation() const");
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::Box::computeRotationMatrix() const
	static int _bind_computeRotationMatrix(lua_State *L) {
		if (!_lg_typecheck_computeRotationMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Box::computeRotationMatrix() const function, expected prototype:\nosg::Matrixd osg::Box::computeRotationMatrix() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Box::computeRotationMatrix() const");
		}
		osg::Matrixd stack_lret = self->computeRotationMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// bool osg::Box::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Box::zeroRotation() const function, expected prototype:\nbool osg::Box::zeroRotation() const\nClass arguments details:\n");
		}


		osg::Box* self=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Box::zeroRotation() const");
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::Box* LunaTraits< osg::Box >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Box::_bind_ctor(L);
}

void LunaTraits< osg::Box >::_bind_dtor(osg::Box* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Box >::className[] = "Box";
const char LunaTraits< osg::Box >::fullName[] = "osg::Box";
const char LunaTraits< osg::Box >::moduleName[] = "osg";
const char* LunaTraits< osg::Box >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Box >::hash = 67090692;
const int LunaTraits< osg::Box >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Box >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Box::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Box::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Box::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Box::_bind_libraryName},
	{"className", &luna_wrapper_osg_Box::_bind_className},
	{"accept", &luna_wrapper_osg_Box::_bind_accept},
	{"valid", &luna_wrapper_osg_Box::_bind_valid},
	{"set", &luna_wrapper_osg_Box::_bind_set},
	{"setCenter", &luna_wrapper_osg_Box::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Box::_bind_getCenter},
	{"setHalfLengths", &luna_wrapper_osg_Box::_bind_setHalfLengths},
	{"getHalfLengths", &luna_wrapper_osg_Box::_bind_getHalfLengths},
	{"setRotation", &luna_wrapper_osg_Box::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_Box::_bind_getRotation},
	{"computeRotationMatrix", &luna_wrapper_osg_Box::_bind_computeRotationMatrix},
	{"zeroRotation", &luna_wrapper_osg_Box::_bind_zeroRotation},
	{"__eq", &luna_wrapper_osg_Box::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Box >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Box::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Box >::enumValues[] = {
	{0,0}
};


