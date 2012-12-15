#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Counter.h>

class luna_wrapper_osgParticle_Counter {
public:
	typedef Luna< osgParticle::Counter > luna_t;

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
		//osgParticle::Counter* ptr= dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Counter* ptr= luna_caster< osg::Referenced, osgParticle::Counter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Counter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Counter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::libraryName() const function, expected prototype:\nconst char * osgParticle::Counter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Counter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::className() const function, expected prototype:\nconst char * osgParticle::Counter::className() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Counter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::Counter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::Counter::numParticlesToCreate(double dt) const\nClass arguments details:\n");
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::Counter::numParticlesToCreate(double) const");
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Counter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Counter::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_setName(const std::string &)");
		}
		self->Counter::setName(name);

		return 0;
	}

	// void osgParticle::Counter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Counter::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_computeDataVariance()");
		}
		self->Counter::computeDataVariance();

		return 0;
	}

	// void osgParticle::Counter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Counter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_setUserData(osg::Referenced *)");
		}
		self->Counter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Counter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Counter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Counter::base_getUserData()\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Counter::base_getUserData()");
		}
		osg::Referenced * lret = self->Counter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Counter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Counter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Counter::base_getUserData() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Counter::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Counter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Counter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_releaseGLObjects(osg::State *) const");
		}
		self->Counter::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Counter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Counter::base_libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::base_libraryName() const");
		}
		const char * lret = self->Counter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Counter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::base_className() const function, expected prototype:\nconst char * osgParticle::Counter::base_className() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::base_className() const");
		}
		const char * lret = self->Counter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Counter::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Counter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgParticle::Counter* LunaTraits< osgParticle::Counter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Counter >::_bind_dtor(osgParticle::Counter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Counter >::className[] = "Counter";
const char LunaTraits< osgParticle::Counter >::fullName[] = "osgParticle::Counter";
const char LunaTraits< osgParticle::Counter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Counter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Counter >::hash = 13659321;
const int LunaTraits< osgParticle::Counter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Counter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Counter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Counter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Counter::_bind_isSameKindAs},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_Counter::_bind_numParticlesToCreate},
	{"base_setName", &luna_wrapper_osgParticle_Counter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Counter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Counter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Counter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Counter::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Counter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Counter::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Counter::_bind_base_isSameKindAs},
	{"__eq", &luna_wrapper_osgParticle_Counter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Counter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Counter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Counter >::enumValues[] = {
	{0,0}
};


