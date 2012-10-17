#include <plug_common.h>

class luna_wrapper_osg_Cylinder {
public:
	typedef Luna< osg::Cylinder > luna_t;

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
		osg::Cylinder* ptr= dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Cylinder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
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
	// osg::Cylinder::Cylinder()
	static osg::Cylinder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder() function, expected prototype:\nosg::Cylinder::Cylinder()\nClass arguments details:\n");
		}


		return new osg::Cylinder();
	}

	// osg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height)
	static osg::Cylinder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nosg::Cylinder::Cylinder(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::Cylinder function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);

		return new osg::Cylinder(center, radius, height);
	}

	// osg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Cylinder* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Cylinder::Cylinder(const osg::Cylinder & cylinder, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Cylinder* cylinder_ptr=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if( !cylinder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cylinder in osg::Cylinder::Cylinder function");
		}
		const osg::Cylinder & cylinder=*cylinder_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Cylinder::Cylinder function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Cylinder(cylinder, copyop);
	}

	// Overload binder for osg::Cylinder::Cylinder
	static osg::Cylinder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Cylinder, cannot match any of the overloads for function Cylinder:\n  Cylinder()\n  Cylinder(const osg::Vec3f &, float, float)\n  Cylinder(const osg::Cylinder &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Cylinder::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::cloneType() const function, expected prototype:\nosg::Object * osg::Cylinder::cloneType() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Cylinder::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Cylinder::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Cylinder::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Cylinder::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Cylinder::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Cylinder::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Cylinder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::libraryName() const function, expected prototype:\nconst char * osg::Cylinder::libraryName() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Cylinder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Cylinder::className() const function, expected prototype:\nconst char * osg::Cylinder::className() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Cylinder::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Cylinder::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::Cylinder::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Cylinder::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::Cylinder::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Cylinder::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Cylinder::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Cylinder::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::valid() const function, expected prototype:\nbool osg::Cylinder::valid() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Cylinder::set(const osg::Vec3f & center, float radius, float height)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::set(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nvoid osg::Cylinder::set(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::set(const osg::Vec3f &, float, float)");
		}
		self->set(center, radius, height);

		return 0;
	}

	// void osg::Cylinder::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Cylinder::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Cylinder::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Cylinder::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Cylinder::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Cylinder::getCenter() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Cylinder::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Cylinder::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setRadius(float radius) function, expected prototype:\nvoid osg::Cylinder::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setRadius(float)");
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::Cylinder::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Cylinder::getRadius() const function, expected prototype:\nfloat osg::Cylinder::getRadius() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Cylinder::getRadius() const");
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Cylinder::setHeight(float height)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setHeight(float height) function, expected prototype:\nvoid osg::Cylinder::setHeight(float height)\nClass arguments details:\n");
		}

		float height=(float)lua_tonumber(L,2);

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setHeight(float)");
		}
		self->setHeight(height);

		return 0;
	}

	// float osg::Cylinder::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Cylinder::getHeight() const function, expected prototype:\nfloat osg::Cylinder::getHeight() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Cylinder::getHeight() const");
		}
		float lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Cylinder::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Cylinder::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::Cylinder::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Cylinder::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Cylinder::setRotation(const osg::Quat &)");
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::Cylinder::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::Cylinder::getRotation() const function, expected prototype:\nconst osg::Quat & osg::Cylinder::getRotation() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::Cylinder::getRotation() const");
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::Cylinder::computeRotationMatrix() const
	static int _bind_computeRotationMatrix(lua_State *L) {
		if (!_lg_typecheck_computeRotationMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Cylinder::computeRotationMatrix() const function, expected prototype:\nosg::Matrixd osg::Cylinder::computeRotationMatrix() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Cylinder::computeRotationMatrix() const");
		}
		osg::Matrixd stack_lret = self->computeRotationMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// bool osg::Cylinder::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Cylinder::zeroRotation() const function, expected prototype:\nbool osg::Cylinder::zeroRotation() const\nClass arguments details:\n");
		}


		osg::Cylinder* self=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Cylinder::zeroRotation() const");
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::Cylinder* LunaTraits< osg::Cylinder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Cylinder::_bind_ctor(L);
}

void LunaTraits< osg::Cylinder >::_bind_dtor(osg::Cylinder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Cylinder >::className[] = "Cylinder";
const char LunaTraits< osg::Cylinder >::fullName[] = "osg::Cylinder";
const char LunaTraits< osg::Cylinder >::moduleName[] = "osg";
const char* LunaTraits< osg::Cylinder >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Cylinder >::hash = 22778725;
const int LunaTraits< osg::Cylinder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Cylinder >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Cylinder::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Cylinder::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Cylinder::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Cylinder::_bind_libraryName},
	{"className", &luna_wrapper_osg_Cylinder::_bind_className},
	{"accept", &luna_wrapper_osg_Cylinder::_bind_accept},
	{"valid", &luna_wrapper_osg_Cylinder::_bind_valid},
	{"set", &luna_wrapper_osg_Cylinder::_bind_set},
	{"setCenter", &luna_wrapper_osg_Cylinder::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Cylinder::_bind_getCenter},
	{"setRadius", &luna_wrapper_osg_Cylinder::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_Cylinder::_bind_getRadius},
	{"setHeight", &luna_wrapper_osg_Cylinder::_bind_setHeight},
	{"getHeight", &luna_wrapper_osg_Cylinder::_bind_getHeight},
	{"setRotation", &luna_wrapper_osg_Cylinder::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_Cylinder::_bind_getRotation},
	{"computeRotationMatrix", &luna_wrapper_osg_Cylinder::_bind_computeRotationMatrix},
	{"zeroRotation", &luna_wrapper_osg_Cylinder::_bind_zeroRotation},
	{"__eq", &luna_wrapper_osg_Cylinder::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Cylinder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Cylinder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Cylinder >::enumValues[] = {
	{0,0}
};


