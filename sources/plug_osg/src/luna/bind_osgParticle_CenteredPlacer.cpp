#include <plug_common.h>

class luna_wrapper_osgParticle_CenteredPlacer {
public:
	typedef Luna< osgParticle::CenteredPlacer > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::CenteredPlacer* ptr= dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::CenteredPlacer >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCenter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::CenteredPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::CenteredPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::className() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::className() const\nClass arguments details:\n");
		}


		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const function, expected prototype:\nconst osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const\nClass arguments details:\n");
		}


		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const");
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v)
	static int _bind_setCenter_overload_1(lua_State *L) {
		if (!_lg_typecheck_setCenter_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::CenteredPlacer::setCenter function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f &)");
		}
		self->setCenter(v);

		return 0;
	}

	// void osgParticle::CenteredPlacer::setCenter(float x, float y, float z)
	static int _bind_setCenter_overload_2(lua_State *L) {
		if (!_lg_typecheck_setCenter_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::setCenter(float x, float y, float z) function, expected prototype:\nvoid osgParticle::CenteredPlacer::setCenter(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::CenteredPlacer* self=dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::setCenter(float, float, float)");
		}
		self->setCenter(x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::CenteredPlacer::setCenter
	static int _bind_setCenter(lua_State *L) {
		if (_lg_typecheck_setCenter_overload_1(L)) return _bind_setCenter_overload_1(L);
		if (_lg_typecheck_setCenter_overload_2(L)) return _bind_setCenter_overload_2(L);

		luaL_error(L, "error in function setCenter, cannot match any of the overloads for function setCenter:\n  setCenter(const osg::Vec3f &)\n  setCenter(float, float, float)\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::CenteredPlacer* LunaTraits< osgParticle::CenteredPlacer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osgParticle::CenteredPlacer >::_bind_dtor(osgParticle::CenteredPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::CenteredPlacer >::className[] = "CenteredPlacer";
const char LunaTraits< osgParticle::CenteredPlacer >::fullName[] = "osgParticle::CenteredPlacer";
const char LunaTraits< osgParticle::CenteredPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::CenteredPlacer >::parents[] = {"osgParticle.Placer", 0};
const int LunaTraits< osgParticle::CenteredPlacer >::hash = 32091638;
const int LunaTraits< osgParticle::CenteredPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::CenteredPlacer >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_CenteredPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_CenteredPlacer::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_CenteredPlacer::_bind_isSameKindAs},
	{"getCenter", &luna_wrapper_osgParticle_CenteredPlacer::_bind_getCenter},
	{"setCenter", &luna_wrapper_osgParticle_CenteredPlacer::_bind_setCenter},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::CenteredPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_CenteredPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::CenteredPlacer >::enumValues[] = {
	{0,0}
};


