#include <plug_common.h>

class luna_wrapper_osgParticle_Shooter {
public:
	typedef Luna< osgParticle::Shooter > luna_t;

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
		osgParticle::Shooter* ptr= dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Shooter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_shoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Shooter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::libraryName() const function, expected prototype:\nconst char * osgParticle::Shooter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Shooter* self=dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Shooter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::className() const function, expected prototype:\nconst char * osgParticle::Shooter::className() const\nClass arguments details:\n");
		}


		osgParticle::Shooter* self=dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Shooter* self=dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Shooter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Shooter::shoot(osgParticle::Particle * P) const
	static int _bind_shoot(lua_State *L) {
		if (!_lg_typecheck_shoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::shoot(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::Shooter::shoot(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::Shooter* self=dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::shoot(osgParticle::Particle *) const");
		}
		self->shoot(P);

		return 0;
	}


	// Operator binds:

};

osgParticle::Shooter* LunaTraits< osgParticle::Shooter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Shooter::shoot(osgParticle::Particle * P) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgParticle::Shooter >::_bind_dtor(osgParticle::Shooter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Shooter >::className[] = "Shooter";
const char LunaTraits< osgParticle::Shooter >::fullName[] = "osgParticle::Shooter";
const char LunaTraits< osgParticle::Shooter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Shooter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Shooter >::hash = 7800180;
const int LunaTraits< osgParticle::Shooter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Shooter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Shooter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Shooter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Shooter::_bind_isSameKindAs},
	{"shoot", &luna_wrapper_osgParticle_Shooter::_bind_shoot},
	{"__eq", &luna_wrapper_osgParticle_Shooter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Shooter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Shooter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Shooter >::enumValues[] = {
	{0,0}
};


