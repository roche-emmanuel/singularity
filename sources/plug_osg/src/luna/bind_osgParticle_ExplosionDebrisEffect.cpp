#include <plug_common.h>

class luna_wrapper_osgParticle_ExplosionDebrisEffect {
public:
	typedef Luna< osgParticle::ExplosionDebrisEffect > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::ExplosionDebrisEffect* ptr= dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ExplosionDebrisEffect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(bool automaticSetup = true)
	static osgParticle::ExplosionDebrisEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(bool automaticSetup = true) function, expected prototype:\nosgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(bool automaticSetup = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new osgParticle::ExplosionDebrisEffect(automaticSetup);
	}

	// osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::ExplosionDebrisEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;
		float intensity=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new osgParticle::ExplosionDebrisEffect(position, scale, intensity);
	}

	// osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osgParticle::ExplosionDebrisEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ExplosionDebrisEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osgParticle::ExplosionDebrisEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect(const osgParticle::ExplosionDebrisEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ExplosionDebrisEffect* copy_ptr=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect function");
		}
		const osgParticle::ExplosionDebrisEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ExplosionDebrisEffect(copy, copyop);
	}

	// Overload binder for osgParticle::ExplosionDebrisEffect::ExplosionDebrisEffect
	static osgParticle::ExplosionDebrisEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ExplosionDebrisEffect, cannot match any of the overloads for function ExplosionDebrisEffect:\n  ExplosionDebrisEffect(bool)\n  ExplosionDebrisEffect(const osg::Vec3f &, float, float)\n  ExplosionDebrisEffect(const osgParticle::ExplosionDebrisEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ExplosionDebrisEffect::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ExplosionDebrisEffect::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ExplosionDebrisEffect::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ExplosionDebrisEffect::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ExplosionDebrisEffect::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ExplosionDebrisEffect::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ExplosionDebrisEffect::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ExplosionDebrisEffect::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ExplosionDebrisEffect::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ExplosionDebrisEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ExplosionDebrisEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ExplosionDebrisEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ExplosionDebrisEffect::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ExplosionDebrisEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ExplosionDebrisEffect::className() const function, expected prototype:\nconst char * osgParticle::ExplosionDebrisEffect::className() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ExplosionDebrisEffect::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ExplosionDebrisEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ExplosionDebrisEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::ExplosionDebrisEffect::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ExplosionDebrisEffect::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ExplosionDebrisEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionDebrisEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ExplosionDebrisEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ExplosionDebrisEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionDebrisEffect::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::ExplosionDebrisEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionDebrisEffect::setDefaults() function, expected prototype:\nvoid osgParticle::ExplosionDebrisEffect::setDefaults()\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionDebrisEffect::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::ExplosionDebrisEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ExplosionDebrisEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::ExplosionDebrisEffect::setUpEmitterAndProgram()\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ExplosionDebrisEffect::setUpEmitterAndProgram()");
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter()\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter()");
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::ExplosionDebrisEffect::getEmitter() const");
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ExplosionDebrisEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram()\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram()");
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram() const\nClass arguments details:\n");
		}


		osgParticle::ExplosionDebrisEffect* self=dynamic_cast< osgParticle::ExplosionDebrisEffect* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::ExplosionDebrisEffect::getProgram() const");
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ExplosionDebrisEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::ExplosionDebrisEffect* LunaTraits< osgParticle::ExplosionDebrisEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::ExplosionDebrisEffect >::_bind_dtor(osgParticle::ExplosionDebrisEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ExplosionDebrisEffect >::className[] = "ExplosionDebrisEffect";
const char LunaTraits< osgParticle::ExplosionDebrisEffect >::fullName[] = "osgParticle::ExplosionDebrisEffect";
const char LunaTraits< osgParticle::ExplosionDebrisEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ExplosionDebrisEffect >::parents[] = {"osgParticle.ParticleEffect", 0};
const int LunaTraits< osgParticle::ExplosionDebrisEffect >::hash = 28033650;
const int LunaTraits< osgParticle::ExplosionDebrisEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ExplosionDebrisEffect >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_accept},
	{"setDefaults", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_setUpEmitterAndProgram},
	{"getEmitter", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_bind_getProgram},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ExplosionDebrisEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ExplosionDebrisEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ExplosionDebrisEffect >::enumValues[] = {
	{0,0}
};


