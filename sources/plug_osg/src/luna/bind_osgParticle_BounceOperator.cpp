#include <plug_common.h>

class luna_wrapper_osgParticle_BounceOperator {
public:
	typedef Luna< osgParticle::BounceOperator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::BounceOperator* ptr= dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::BounceOperator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResilience(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResilience(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCutoff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::BounceOperator::BounceOperator()
	static osgParticle::BounceOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::BounceOperator::BounceOperator() function, expected prototype:\nosgParticle::BounceOperator::BounceOperator()\nClass arguments details:\n");
		}


		return new osgParticle::BounceOperator();
	}

	// osgParticle::BounceOperator::BounceOperator(const osgParticle::BounceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::BounceOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::BounceOperator::BounceOperator(const osgParticle::BounceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::BounceOperator::BounceOperator(const osgParticle::BounceOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::BounceOperator* copy_ptr=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::BounceOperator::BounceOperator function");
		}
		const osgParticle::BounceOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::BounceOperator::BounceOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::BounceOperator(copy, copyop);
	}

	// Overload binder for osgParticle::BounceOperator::BounceOperator
	static osgParticle::BounceOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BounceOperator, cannot match any of the overloads for function BounceOperator:\n  BounceOperator()\n  BounceOperator(const osgParticle::BounceOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::BounceOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BounceOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::BounceOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BounceOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::BounceOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BounceOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::BounceOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::BounceOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BounceOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::BounceOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::BounceOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::BounceOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::BounceOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::BounceOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BounceOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::BounceOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::BounceOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::BounceOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BounceOperator::className() const function, expected prototype:\nconst char * osgParticle::BounceOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::BounceOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::BounceOperator::setFriction(float f)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BounceOperator::setFriction(float f) function, expected prototype:\nvoid osgParticle::BounceOperator::setFriction(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BounceOperator::setFriction(float)");
		}
		self->setFriction(f);

		return 0;
	}

	// float osgParticle::BounceOperator::getFriction() const
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::BounceOperator::getFriction() const function, expected prototype:\nfloat osgParticle::BounceOperator::getFriction() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::BounceOperator::getFriction() const");
		}
		float lret = self->getFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::BounceOperator::setResilience(float r)
	static int _bind_setResilience(lua_State *L) {
		if (!_lg_typecheck_setResilience(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BounceOperator::setResilience(float r) function, expected prototype:\nvoid osgParticle::BounceOperator::setResilience(float r)\nClass arguments details:\n");
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BounceOperator::setResilience(float)");
		}
		self->setResilience(r);

		return 0;
	}

	// float osgParticle::BounceOperator::getResilience() const
	static int _bind_getResilience(lua_State *L) {
		if (!_lg_typecheck_getResilience(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::BounceOperator::getResilience() const function, expected prototype:\nfloat osgParticle::BounceOperator::getResilience() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::BounceOperator::getResilience() const");
		}
		float lret = self->getResilience();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::BounceOperator::setCutoff(float v)
	static int _bind_setCutoff(lua_State *L) {
		if (!_lg_typecheck_setCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::BounceOperator::setCutoff(float v) function, expected prototype:\nvoid osgParticle::BounceOperator::setCutoff(float v)\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::BounceOperator::setCutoff(float)");
		}
		self->setCutoff(v);

		return 0;
	}

	// float osgParticle::BounceOperator::getCutoff() const
	static int _bind_getCutoff(lua_State *L) {
		if (!_lg_typecheck_getCutoff(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::BounceOperator::getCutoff() const function, expected prototype:\nfloat osgParticle::BounceOperator::getCutoff() const\nClass arguments details:\n");
		}


		osgParticle::BounceOperator* self=dynamic_cast< osgParticle::BounceOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::BounceOperator::getCutoff() const");
		}
		float lret = self->getCutoff();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::BounceOperator* LunaTraits< osgParticle::BounceOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_BounceOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::BounceOperator >::_bind_dtor(osgParticle::BounceOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::BounceOperator >::className[] = "BounceOperator";
const char LunaTraits< osgParticle::BounceOperator >::fullName[] = "osgParticle::BounceOperator";
const char LunaTraits< osgParticle::BounceOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::BounceOperator >::parents[] = {"osgParticle.DomainOperator", 0};
const int LunaTraits< osgParticle::BounceOperator >::hash = 76709753;
const int LunaTraits< osgParticle::BounceOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::BounceOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_BounceOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_BounceOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_BounceOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_BounceOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_BounceOperator::_bind_className},
	{"setFriction", &luna_wrapper_osgParticle_BounceOperator::_bind_setFriction},
	{"getFriction", &luna_wrapper_osgParticle_BounceOperator::_bind_getFriction},
	{"setResilience", &luna_wrapper_osgParticle_BounceOperator::_bind_setResilience},
	{"getResilience", &luna_wrapper_osgParticle_BounceOperator::_bind_getResilience},
	{"setCutoff", &luna_wrapper_osgParticle_BounceOperator::_bind_setCutoff},
	{"getCutoff", &luna_wrapper_osgParticle_BounceOperator::_bind_getCutoff},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::BounceOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_BounceOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::BounceOperator >::enumValues[] = {
	{0,0}
};

