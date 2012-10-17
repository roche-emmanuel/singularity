#include <plug_common.h>

class luna_wrapper_osgParticle_FluidProgram {
public:
	typedef Luna< osgParticle::FluidProgram > luna_t;

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
		osgParticle::FluidProgram* ptr= dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::FluidProgram >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFluidViscosity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidViscosity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAcceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setToGravity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFluidToAir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidToWater(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::FluidProgram::FluidProgram()
	static osgParticle::FluidProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram() function, expected prototype:\nosgParticle::FluidProgram::FluidProgram()\nClass arguments details:\n");
		}


		return new osgParticle::FluidProgram();
	}

	// osgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FluidProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::FluidProgram* copy_ptr=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FluidProgram::FluidProgram function");
		}
		const osgParticle::FluidProgram & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::FluidProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::FluidProgram(copy, copyop);
	}

	// Overload binder for osgParticle::FluidProgram::FluidProgram
	static osgParticle::FluidProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FluidProgram, cannot match any of the overloads for function FluidProgram:\n  FluidProgram()\n  FluidProgram(const osgParticle::FluidProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::FluidProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::cloneType() const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::FluidProgram::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FluidProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::className() const function, expected prototype:\nconst char * osgParticle::FluidProgram::className() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FluidProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::libraryName() const function, expected prototype:\nconst char * osgParticle::FluidProgram::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FluidProgram::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FluidProgram::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidViscosity(float v)
	static int _bind_setFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_setFluidViscosity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidViscosity(float v) function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidViscosity(float v)\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidViscosity(float)");
		}
		self->setFluidViscosity(v);

		return 0;
	}

	// float osgParticle::FluidProgram::getFluidViscosity() const
	static int _bind_getFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_getFluidViscosity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidProgram::getFluidViscosity() const function, expected prototype:\nfloat osgParticle::FluidProgram::getFluidViscosity() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::FluidProgram::getFluidViscosity() const");
		}
		float lret = self->getFluidViscosity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::setFluidDensity(float d)
	static int _bind_setFluidDensity(lua_State *L) {
		if (!_lg_typecheck_setFluidDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidDensity(float d) function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidDensity(float d)\nClass arguments details:\n");
		}

		float d=(float)lua_tonumber(L,2);

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidDensity(float)");
		}
		self->setFluidDensity(d);

		return 0;
	}

	// float osgParticle::FluidProgram::getFluidDensity() const
	static int _bind_getFluidDensity(lua_State *L) {
		if (!_lg_typecheck_getFluidDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidProgram::getFluidDensity() const function, expected prototype:\nfloat osgParticle::FluidProgram::getFluidDensity() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::FluidProgram::getFluidDensity() const");
		}
		float lret = self->getFluidDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::FluidProgram::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::FluidProgram::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setWind(const osg::Vec3f &)");
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::FluidProgram::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::FluidProgram::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::FluidProgram::getWind() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::FluidProgram::getWind() const");
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v)
	static int _bind_setAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::FluidProgram::setAcceleration function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f &)");
		}
		self->setAcceleration(v);

		return 0;
	}

	// const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const
	static int _bind_getAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAcceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const function, expected prototype:\nconst osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const");
		}
		const osg::Vec3f* lret = &self->getAcceleration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::FluidProgram::setToGravity(float scale = 1.0f)
	static int _bind_setToGravity(lua_State *L) {
		if (!_lg_typecheck_setToGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setToGravity(float scale = 1.0f) function, expected prototype:\nvoid osgParticle::FluidProgram::setToGravity(float scale = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scale=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setToGravity(float)");
		}
		self->setToGravity(scale);

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidToAir()
	static int _bind_setFluidToAir(lua_State *L) {
		if (!_lg_typecheck_setFluidToAir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidToAir() function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidToAir()\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidToAir()");
		}
		self->setFluidToAir();

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidToWater()
	static int _bind_setFluidToWater(lua_State *L) {
		if (!_lg_typecheck_setFluidToWater(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidToWater() function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidToWater()\nClass arguments details:\n");
		}


		osgParticle::FluidProgram* self=dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidToWater()");
		}
		self->setFluidToWater();

		return 0;
	}


	// Operator binds:

};

osgParticle::FluidProgram* LunaTraits< osgParticle::FluidProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_FluidProgram::_bind_ctor(L);
}

void LunaTraits< osgParticle::FluidProgram >::_bind_dtor(osgParticle::FluidProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::FluidProgram >::className[] = "FluidProgram";
const char LunaTraits< osgParticle::FluidProgram >::fullName[] = "osgParticle::FluidProgram";
const char LunaTraits< osgParticle::FluidProgram >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::FluidProgram >::parents[] = {"osgParticle.Program", 0};
const int LunaTraits< osgParticle::FluidProgram >::hash = 33104881;
const int LunaTraits< osgParticle::FluidProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::FluidProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_FluidProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_FluidProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_FluidProgram::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_FluidProgram::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_FluidProgram::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_FluidProgram::_bind_accept},
	{"setFluidViscosity", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidViscosity},
	{"getFluidViscosity", &luna_wrapper_osgParticle_FluidProgram::_bind_getFluidViscosity},
	{"setFluidDensity", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidDensity},
	{"getFluidDensity", &luna_wrapper_osgParticle_FluidProgram::_bind_getFluidDensity},
	{"setWind", &luna_wrapper_osgParticle_FluidProgram::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_FluidProgram::_bind_getWind},
	{"setAcceleration", &luna_wrapper_osgParticle_FluidProgram::_bind_setAcceleration},
	{"getAcceleration", &luna_wrapper_osgParticle_FluidProgram::_bind_getAcceleration},
	{"setToGravity", &luna_wrapper_osgParticle_FluidProgram::_bind_setToGravity},
	{"setFluidToAir", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidToAir},
	{"setFluidToWater", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidToWater},
	{"__eq", &luna_wrapper_osgParticle_FluidProgram::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::FluidProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_FluidProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::FluidProgram >::enumValues[] = {
	{0,0}
};


