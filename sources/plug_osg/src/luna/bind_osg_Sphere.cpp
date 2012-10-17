#include <plug_common.h>

class luna_wrapper_osg_Sphere {
public:
	typedef Luna< osg::Sphere > luna_t;

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
		osg::Sphere* ptr= dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Sphere >::push(L,ptr,false);
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
		if( lua_isnumber(L,2)==0 ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Sphere::Sphere()
	static osg::Sphere* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere() function, expected prototype:\nosg::Sphere::Sphere()\nClass arguments details:\n");
		}


		return new osg::Sphere();
	}

	// osg::Sphere::Sphere(const osg::Vec3f & center, float radius)
	static osg::Sphere* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(const osg::Vec3f & center, float radius) function, expected prototype:\nosg::Sphere::Sphere(const osg::Vec3f & center, float radius)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::Sphere function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,2);

		return new osg::Sphere(center, radius);
	}

	// osg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sphere* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Sphere* sphere_ptr=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if( !sphere_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sphere in osg::Sphere::Sphere function");
		}
		const osg::Sphere & sphere=*sphere_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sphere::Sphere function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Sphere(sphere, copyop);
	}

	// Overload binder for osg::Sphere::Sphere
	static osg::Sphere* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Sphere, cannot match any of the overloads for function Sphere:\n  Sphere()\n  Sphere(const osg::Vec3f &, float)\n  Sphere(const osg::Sphere &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Sphere::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::cloneType() const function, expected prototype:\nosg::Object * osg::Sphere::cloneType() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sphere::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Sphere::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sphere::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sphere::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sphere::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sphere::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sphere::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::libraryName() const function, expected prototype:\nconst char * osg::Sphere::libraryName() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sphere::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::className() const function, expected prototype:\nconst char * osg::Sphere::className() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sphere::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sphere::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::Sphere::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sphere::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Sphere::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sphere::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::Sphere::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sphere::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Sphere::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Sphere::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sphere::valid() const function, expected prototype:\nbool osg::Sphere::valid() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sphere::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sphere::set(const osg::Vec3f & center, float radius)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sphere::set(const osg::Vec3f & center, float radius) function, expected prototype:\nvoid osg::Sphere::set(const osg::Vec3f & center, float radius)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sphere::set(const osg::Vec3f &, float)");
		}
		self->set(center, radius);

		return 0;
	}

	// void osg::Sphere::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sphere::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Sphere::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sphere::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Sphere::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Sphere::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Sphere::getCenter() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Sphere::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Sphere::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sphere::setRadius(float radius) function, expected prototype:\nvoid osg::Sphere::setRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sphere::setRadius(float)");
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::Sphere::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Sphere::getRadius() const function, expected prototype:\nfloat osg::Sphere::getRadius() const\nClass arguments details:\n");
		}


		osg::Sphere* self=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Sphere::getRadius() const");
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Sphere* LunaTraits< osg::Sphere >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Sphere::_bind_ctor(L);
}

void LunaTraits< osg::Sphere >::_bind_dtor(osg::Sphere* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Sphere >::className[] = "Sphere";
const char LunaTraits< osg::Sphere >::fullName[] = "osg::Sphere";
const char LunaTraits< osg::Sphere >::moduleName[] = "osg";
const char* LunaTraits< osg::Sphere >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Sphere >::hash = 85867783;
const int LunaTraits< osg::Sphere >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Sphere >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Sphere::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Sphere::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Sphere::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Sphere::_bind_libraryName},
	{"className", &luna_wrapper_osg_Sphere::_bind_className},
	{"accept", &luna_wrapper_osg_Sphere::_bind_accept},
	{"valid", &luna_wrapper_osg_Sphere::_bind_valid},
	{"set", &luna_wrapper_osg_Sphere::_bind_set},
	{"setCenter", &luna_wrapper_osg_Sphere::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Sphere::_bind_getCenter},
	{"setRadius", &luna_wrapper_osg_Sphere::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_Sphere::_bind_getRadius},
	{"__eq", &luna_wrapper_osg_Sphere::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Sphere >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Sphere::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Sphere >::enumValues[] = {
	{0,0}
};


