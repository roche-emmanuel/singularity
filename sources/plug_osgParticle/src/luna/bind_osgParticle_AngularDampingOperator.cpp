#include <plug_common.h>

class luna_wrapper_osgParticle_AngularDampingOperator {
public:
	typedef Luna< osgParticle::AngularDampingOperator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::AngularDampingOperator* ptr= dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::AngularDampingOperator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::AngularDampingOperator::AngularDampingOperator()
	static osgParticle::AngularDampingOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularDampingOperator::AngularDampingOperator() function, expected prototype:\nosgParticle::AngularDampingOperator::AngularDampingOperator()\nClass arguments details:\n");
		}


		return new osgParticle::AngularDampingOperator();
	}

	// osgParticle::AngularDampingOperator::AngularDampingOperator(const osgParticle::AngularDampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AngularDampingOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::AngularDampingOperator::AngularDampingOperator(const osgParticle::AngularDampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AngularDampingOperator::AngularDampingOperator(const osgParticle::AngularDampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::AngularDampingOperator* copy_ptr=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AngularDampingOperator::AngularDampingOperator function");
		}
		const osgParticle::AngularDampingOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AngularDampingOperator::AngularDampingOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::AngularDampingOperator(copy, copyop);
	}

	// Overload binder for osgParticle::AngularDampingOperator::AngularDampingOperator
	static osgParticle::AngularDampingOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AngularDampingOperator, cannot match any of the overloads for function AngularDampingOperator:\n  AngularDampingOperator()\n  AngularDampingOperator(const osgParticle::AngularDampingOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::AngularDampingOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AngularDampingOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::AngularDampingOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AngularDampingOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::AngularDampingOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AngularDampingOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::AngularDampingOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AngularDampingOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AngularDampingOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::AngularDampingOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::AngularDampingOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::AngularDampingOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::AngularDampingOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::AngularDampingOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AngularDampingOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::AngularDampingOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AngularDampingOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::AngularDampingOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AngularDampingOperator::className() const function, expected prototype:\nconst char * osgParticle::AngularDampingOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::AngularDampingOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::AngularDampingOperator::setDamping(float x, float y, float z)
	static int _bind_setDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setDamping(float x, float y, float z) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setDamping(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setDamping(float, float, float)");
		}
		self->setDamping(x, y, z);

		return 0;
	}

	// void osgParticle::AngularDampingOperator::setDamping(const osg::Vec3f & damping)
	static int _bind_setDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setDamping(const osg::Vec3f & damping) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setDamping(const osg::Vec3f & damping)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* damping_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !damping_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg damping in osgParticle::AngularDampingOperator::setDamping function");
		}
		const osg::Vec3f & damping=*damping_ptr;

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setDamping(const osg::Vec3f &)");
		}
		self->setDamping(damping);

		return 0;
	}

	// void osgParticle::AngularDampingOperator::setDamping(float x)
	static int _bind_setDamping_overload_3(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setDamping(float x) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setDamping(float x)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setDamping(float)");
		}
		self->setDamping(x);

		return 0;
	}

	// Overload binder for osgParticle::AngularDampingOperator::setDamping
	static int _bind_setDamping(lua_State *L) {
		if (_lg_typecheck_setDamping_overload_1(L)) return _bind_setDamping_overload_1(L);
		if (_lg_typecheck_setDamping_overload_2(L)) return _bind_setDamping_overload_2(L);
		if (_lg_typecheck_setDamping_overload_3(L)) return _bind_setDamping_overload_3(L);

		luaL_error(L, "error in function setDamping, cannot match any of the overloads for function setDamping:\n  setDamping(float, float, float)\n  setDamping(const osg::Vec3f &)\n  setDamping(float)\n");
		return 0;
	}

	// void osgParticle::AngularDampingOperator::getDamping(float & x, float & y, float & z) const
	static int _bind_getDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::getDamping(float & x, float & y, float & z) const function, expected prototype:\nvoid osgParticle::AngularDampingOperator::getDamping(float & x, float & y, float & z) const\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::getDamping(float &, float &, float &) const");
		}
		self->getDamping(x, y, z);

		return 0;
	}

	// const osg::Vec3f & osgParticle::AngularDampingOperator::getDamping() const
	static int _bind_getDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::AngularDampingOperator::getDamping() const function, expected prototype:\nconst osg::Vec3f & osgParticle::AngularDampingOperator::getDamping() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::AngularDampingOperator::getDamping() const");
		}
		const osg::Vec3f* lret = &self->getDamping();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::AngularDampingOperator::getDamping
	static int _bind_getDamping(lua_State *L) {
		if (_lg_typecheck_getDamping_overload_1(L)) return _bind_getDamping_overload_1(L);
		if (_lg_typecheck_getDamping_overload_2(L)) return _bind_getDamping_overload_2(L);

		luaL_error(L, "error in function getDamping, cannot match any of the overloads for function getDamping:\n  getDamping(float &, float &, float &)\n  getDamping()\n");
		return 0;
	}

	// void osgParticle::AngularDampingOperator::setCutoff(float low, float high)
	static int _bind_setCutoff(lua_State *L) {
		if (!_lg_typecheck_setCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setCutoff(float low, float high) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setCutoff(float low, float high)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setCutoff(float, float)");
		}
		self->setCutoff(low, high);

		return 0;
	}

	// void osgParticle::AngularDampingOperator::setCutoffLow(float low)
	static int _bind_setCutoffLow(lua_State *L) {
		if (!_lg_typecheck_setCutoffLow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setCutoffLow(float low) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setCutoffLow(float low)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setCutoffLow(float)");
		}
		self->setCutoffLow(low);

		return 0;
	}

	// void osgParticle::AngularDampingOperator::setCutoffHigh(float low)
	static int _bind_setCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_setCutoffHigh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::setCutoffHigh(float low) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::setCutoffHigh(float low)\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::setCutoffHigh(float)");
		}
		self->setCutoffHigh(low);

		return 0;
	}

	// void osgParticle::AngularDampingOperator::getCutoff(float & low, float & high) const
	static int _bind_getCutoff(lua_State *L) {
		if (!_lg_typecheck_getCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::getCutoff(float & low, float & high) const function, expected prototype:\nvoid osgParticle::AngularDampingOperator::getCutoff(float & low, float & high) const\nClass arguments details:\n");
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::getCutoff(float &, float &) const");
		}
		self->getCutoff(low, high);

		return 0;
	}

	// float osgParticle::AngularDampingOperator::getCutoffLow() const
	static int _bind_getCutoffLow(lua_State *L) {
		if (!_lg_typecheck_getCutoffLow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::AngularDampingOperator::getCutoffLow() const function, expected prototype:\nfloat osgParticle::AngularDampingOperator::getCutoffLow() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::AngularDampingOperator::getCutoffLow() const");
		}
		float lret = self->getCutoffLow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::AngularDampingOperator::getCutoffHigh() const
	static int _bind_getCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_getCutoffHigh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::AngularDampingOperator::getCutoffHigh() const function, expected prototype:\nfloat osgParticle::AngularDampingOperator::getCutoffHigh() const\nClass arguments details:\n");
		}


		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::AngularDampingOperator::getCutoffHigh() const");
		}
		float lret = self->getCutoffHigh();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::AngularDampingOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::AngularDampingOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::AngularDampingOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AngularDampingOperator* self=dynamic_cast< osgParticle::AngularDampingOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::AngularDampingOperator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}


	// Operator binds:

};

osgParticle::AngularDampingOperator* LunaTraits< osgParticle::AngularDampingOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_AngularDampingOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::AngularDampingOperator >::_bind_dtor(osgParticle::AngularDampingOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::AngularDampingOperator >::className[] = "AngularDampingOperator";
const char LunaTraits< osgParticle::AngularDampingOperator >::fullName[] = "osgParticle::AngularDampingOperator";
const char LunaTraits< osgParticle::AngularDampingOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::AngularDampingOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::AngularDampingOperator >::hash = 84855526;
const int LunaTraits< osgParticle::AngularDampingOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::AngularDampingOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_className},
	{"setDamping", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_setDamping},
	{"getDamping", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_getDamping},
	{"setCutoff", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_setCutoff},
	{"setCutoffLow", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_setCutoffLow},
	{"setCutoffHigh", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_setCutoffHigh},
	{"getCutoff", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_getCutoff},
	{"getCutoffLow", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_getCutoffLow},
	{"getCutoffHigh", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_getCutoffHigh},
	{"operate", &luna_wrapper_osgParticle_AngularDampingOperator::_bind_operate},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::AngularDampingOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_AngularDampingOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::AngularDampingOperator >::enumValues[] = {
	{0,0}
};


