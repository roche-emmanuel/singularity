#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Emitter.h>

class luna_wrapper_osgParticle_Emitter {
public:
	typedef Luna< osgParticle::Emitter > luna_t;

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
		osgParticle::Emitter* ptr= dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Emitter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseDefaultTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseDefaultTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Emitter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::libraryName() const function, expected prototype:\nconst char * osgParticle::Emitter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Emitter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::className() const function, expected prototype:\nconst char * osgParticle::Emitter::className() const\nClass arguments details:\n");
		}


		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Emitter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Emitter::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::Emitter::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::Emitter::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const
	static int _bind_getParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_getParticleTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const\nClass arguments details:\n");
		}


		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const");
		}
		const osgParticle::Particle* lret = &self->getParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setParticleTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::Emitter::setParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle &)");
		}
		self->setParticleTemplate(p);

		return 0;
	}

	// bool osgParticle::Emitter::getUseDefaultTemplate() const
	static int _bind_getUseDefaultTemplate(lua_State *L) {
		if (!_lg_typecheck_getUseDefaultTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Emitter::getUseDefaultTemplate() const function, expected prototype:\nbool osgParticle::Emitter::getUseDefaultTemplate() const\nClass arguments details:\n");
		}


		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Emitter::getUseDefaultTemplate() const");
		}
		bool lret = self->getUseDefaultTemplate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Emitter::setUseDefaultTemplate(bool v)
	static int _bind_setUseDefaultTemplate(lua_State *L) {
		if (!_lg_typecheck_setUseDefaultTemplate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::setUseDefaultTemplate(bool v) function, expected prototype:\nvoid osgParticle::Emitter::setUseDefaultTemplate(bool v)\nClass arguments details:\n");
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Emitter* self=dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::setUseDefaultTemplate(bool)");
		}
		self->setUseDefaultTemplate(v);

		return 0;
	}


	// Operator binds:

};

osgParticle::Emitter* LunaTraits< osgParticle::Emitter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Emitter::emitParticles(double dt)
}

void LunaTraits< osgParticle::Emitter >::_bind_dtor(osgParticle::Emitter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Emitter >::className[] = "Emitter";
const char LunaTraits< osgParticle::Emitter >::fullName[] = "osgParticle::Emitter";
const char LunaTraits< osgParticle::Emitter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Emitter >::parents[] = {"osgParticle.ParticleProcessor", 0};
const int LunaTraits< osgParticle::Emitter >::hash = 20504566;
const int LunaTraits< osgParticle::Emitter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Emitter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Emitter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Emitter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Emitter::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_Emitter::_bind_accept},
	{"getParticleTemplate", &luna_wrapper_osgParticle_Emitter::_bind_getParticleTemplate},
	{"setParticleTemplate", &luna_wrapper_osgParticle_Emitter::_bind_setParticleTemplate},
	{"getUseDefaultTemplate", &luna_wrapper_osgParticle_Emitter::_bind_getUseDefaultTemplate},
	{"setUseDefaultTemplate", &luna_wrapper_osgParticle_Emitter::_bind_setUseDefaultTemplate},
	{"__eq", &luna_wrapper_osgParticle_Emitter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Emitter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Emitter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Emitter >::enumValues[] = {
	{0,0}
};


