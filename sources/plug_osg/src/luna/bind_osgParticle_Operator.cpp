#include <plug_common.h>

class luna_wrapper_osgParticle_Operator {
public:
	typedef Luna< osgParticle::Operator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::Operator* ptr= dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Operator >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_operateParticles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endOperate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Operator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::libraryName() const function, expected prototype:\nconst char * osgParticle::Operator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Operator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::className() const function, expected prototype:\nconst char * osgParticle::Operator::className() const\nClass arguments details:\n");
		}


		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Operator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::Operator::isEnabled() const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Operator::isEnabled() const function, expected prototype:\nbool osgParticle::Operator::isEnabled() const\nClass arguments details:\n");
		}


		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Operator::isEnabled() const");
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Operator::setEnabled(bool v)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::setEnabled(bool v) function, expected prototype:\nvoid osgParticle::Operator::setEnabled(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::setEnabled(bool)");
		}
		self->setEnabled(v);

		return 0;
	}

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_operateParticles(lua_State *L) {
		if (!_lg_typecheck_operateParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem *, double)");
		}
		self->operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::Operator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::Operator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::operate(osgParticle::Particle *, double)");
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::Operator::beginOperate(osgParticle::Program * )
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::beginOperate(osgParticle::Program * ) function, expected prototype:\nvoid osgParticle::Operator::beginOperate(osgParticle::Program * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* _arg1=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(_arg1);

		return 0;
	}

	// void osgParticle::Operator::endOperate()
	static int _bind_endOperate(lua_State *L) {
		if (!_lg_typecheck_endOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::endOperate() function, expected prototype:\nvoid osgParticle::Operator::endOperate()\nClass arguments details:\n");
		}


		osgParticle::Operator* self=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::endOperate()");
		}
		self->endOperate();

		return 0;
	}


	// Operator binds:

};

osgParticle::Operator* LunaTraits< osgParticle::Operator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Operator::operate(osgParticle::Particle * P, double dt)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgParticle::Operator >::_bind_dtor(osgParticle::Operator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Operator >::className[] = "Operator";
const char LunaTraits< osgParticle::Operator >::fullName[] = "osgParticle::Operator";
const char LunaTraits< osgParticle::Operator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Operator >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Operator >::hash = 7325659;
const int LunaTraits< osgParticle::Operator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Operator >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Operator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Operator::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Operator::_bind_isSameKindAs},
	{"isEnabled", &luna_wrapper_osgParticle_Operator::_bind_isEnabled},
	{"setEnabled", &luna_wrapper_osgParticle_Operator::_bind_setEnabled},
	{"operateParticles", &luna_wrapper_osgParticle_Operator::_bind_operateParticles},
	{"operate", &luna_wrapper_osgParticle_Operator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_Operator::_bind_beginOperate},
	{"endOperate", &luna_wrapper_osgParticle_Operator::_bind_endOperate},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Operator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Operator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Operator >::enumValues[] = {
	{0,0}
};


