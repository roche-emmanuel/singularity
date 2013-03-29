#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Collision.h>

class luna_wrapper_SPK_Collision {
public:
	typedef Luna< SPK::Collision > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Registerable*)");
		}

		SPK::Registerable* rhs =(Luna< SPK::Registerable >::check(L,2));
		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		SPK::Collision* self= (SPK::Collision*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Collision >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Collision* ptr= dynamic_cast< SPK::Collision* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Collision* ptr= luna_caster< SPK::Registerable, SPK::Collision >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Collision >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Collision* ptr= dynamic_cast< SPK::Collision* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Collision* ptr= luna_caster< SPK::Transformable, SPK::Collision >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Collision >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Collision* ptr= dynamic_cast< SPK::Collision* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Collision* ptr= luna_caster< SPK::BufferHandler, SPK::Collision >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Collision >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElasticity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElasticity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Collision::Collision(lua_Table * data, float scale = 1.0f, float elasticity = 1.0f)
	static SPK::Collision* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Collision::Collision(lua_Table * data, float scale = 1.0f, float elasticity = 1.0f) function, expected prototype:\nSPK::Collision::Collision(lua_Table * data, float scale = 1.0f, float elasticity = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scale=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float elasticity=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_SPK_Collision(L,NULL, scale, elasticity);
	}


	// Function binds:
	// std::string SPK::Collision::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Collision::getClassName() const function, expected prototype:\nstd::string SPK::Collision::getClassName() const\nClass arguments details:\n");
		}


		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Collision::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Collision::setScale(float scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Collision::setScale(float scale) function, expected prototype:\nvoid SPK::Collision::setScale(float scale)\nClass arguments details:\n");
		}

		float scale=(float)lua_tonumber(L,2);

		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Collision::setScale(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setScale(scale);

		return 0;
	}

	// void SPK::Collision::setElasticity(float elasticity)
	static int _bind_setElasticity(lua_State *L) {
		if (!_lg_typecheck_setElasticity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Collision::setElasticity(float elasticity) function, expected prototype:\nvoid SPK::Collision::setElasticity(float elasticity)\nClass arguments details:\n");
		}

		float elasticity=(float)lua_tonumber(L,2);

		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Collision::setElasticity(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setElasticity(elasticity);

		return 0;
	}

	// float SPK::Collision::getElasticity() const
	static int _bind_getElasticity(lua_State *L) {
		if (!_lg_typecheck_getElasticity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Collision::getElasticity() const function, expected prototype:\nfloat SPK::Collision::getElasticity() const\nClass arguments details:\n");
		}


		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Collision::getElasticity() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getElasticity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Collision::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Collision::getScale() const function, expected prototype:\nfloat SPK::Collision::getScale() const\nClass arguments details:\n");
		}


		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Collision::getScale() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::Collision * SPK::Collision::create(float scale = 1.0f, float elasticity = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Collision * SPK::Collision::create(float scale = 1.0f, float elasticity = 1.0f) function, expected prototype:\nstatic SPK::Collision * SPK::Collision::create(float scale = 1.0f, float elasticity = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scale=luatop>0 ? (float)lua_tonumber(L,1) : (float)1.0f;
		float elasticity=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		SPK::Collision * lret = SPK::Collision::create(scale, elasticity);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Collision >::push(L,lret,false);

		return 1;
	}

	// void SPK::Collision::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Collision::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Collision::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Collision::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Collision::base_createBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Collision::createBuffers(group);

		return 0;
	}

	// void SPK::Collision::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Collision::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Collision::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Collision::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Collision::base_destroyBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->Collision::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Collision::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Collision::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Collision::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Collision::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Collision::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Collision::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Collision::base_getClassName() const function, expected prototype:\nstd::string SPK::Collision::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Collision* self=Luna< SPK::Registerable >::checkSubType< SPK::Collision >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Collision::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Collision::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Collision* LunaTraits< SPK::Collision >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Collision::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Collision >::_bind_dtor(SPK::Collision* obj) {
	delete obj;
}

const char LunaTraits< SPK::Collision >::className[] = "Collision";
const char LunaTraits< SPK::Collision >::fullName[] = "SPK::Collision";
const char LunaTraits< SPK::Collision >::moduleName[] = "spark";
const char* LunaTraits< SPK::Collision >::parents[] = {"spark.Modifier", 0};
const int LunaTraits< SPK::Collision >::hash = 24108923;
const int LunaTraits< SPK::Collision >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Collision >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Collision::_bind_getClassName},
	{"setScale", &luna_wrapper_SPK_Collision::_bind_setScale},
	{"setElasticity", &luna_wrapper_SPK_Collision::_bind_setElasticity},
	{"getElasticity", &luna_wrapper_SPK_Collision::_bind_getElasticity},
	{"getScale", &luna_wrapper_SPK_Collision::_bind_getScale},
	{"create", &luna_wrapper_SPK_Collision::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_Collision::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Collision::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Collision::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Collision::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_Collision::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Collision::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Collision::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Collision::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Collision >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Collision::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Collision::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Collision::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Collision >::enumValues[] = {
	{0,0}
};


