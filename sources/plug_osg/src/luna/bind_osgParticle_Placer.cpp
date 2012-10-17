#include <plug_common.h>

class luna_wrapper_osgParticle_Placer {
public:
	typedef Luna< osgParticle::Placer > luna_t;

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
		osgParticle::Placer* ptr= dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Placer >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Placer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::libraryName() const function, expected prototype:\nconst char * osgParticle::Placer::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Placer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::className() const function, expected prototype:\nconst char * osgParticle::Placer::className() const\nClass arguments details:\n");
		}


		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Placer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::Placer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n");
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::place(osgParticle::Particle *) const");
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::Placer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::Placer::volume() const function, expected prototype:\nfloat osgParticle::Placer::volume() const\nClass arguments details:\n");
		}


		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::Placer::volume() const");
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::Placer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::Placer::getControlPosition() const\nClass arguments details:\n");
		}


		osgParticle::Placer* self=dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::Placer::getControlPosition() const");
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::Placer* LunaTraits< osgParticle::Placer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgParticle::Placer >::_bind_dtor(osgParticle::Placer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Placer >::className[] = "Placer";
const char LunaTraits< osgParticle::Placer >::fullName[] = "osgParticle::Placer";
const char LunaTraits< osgParticle::Placer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Placer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Placer >::hash = 49887278;
const int LunaTraits< osgParticle::Placer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Placer >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Placer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Placer::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Placer::_bind_isSameKindAs},
	{"place", &luna_wrapper_osgParticle_Placer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_Placer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_Placer::_bind_getControlPosition},
	{"__eq", &luna_wrapper_osgParticle_Placer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Placer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Placer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Placer >::enumValues[] = {
	{0,0}
};


