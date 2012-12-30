#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Obstacle.h>

class luna_wrapper_SPK_Obstacle {
public:
	typedef Luna< SPK::Obstacle > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Obstacle* ptr= dynamic_cast< SPK::Obstacle* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Obstacle* ptr= luna_caster< SPK::Registerable, SPK::Obstacle >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Obstacle >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Obstacle* ptr= dynamic_cast< SPK::Obstacle* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Obstacle* ptr= luna_caster< SPK::Transformable, SPK::Obstacle >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Obstacle >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BufferHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Obstacle* ptr= dynamic_cast< SPK::Obstacle* >(Luna< SPK::BufferHandler >::check(L,1));
		SPK::Obstacle* ptr= luna_caster< SPK::BufferHandler, SPK::Obstacle >::cast(Luna< SPK::BufferHandler >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Obstacle >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBouncingRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBouncingRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
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
	// SPK::Obstacle::Obstacle(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f)
	static SPK::Obstacle* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Obstacle::Obstacle(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f) function, expected prototype:\nSPK::Obstacle::Obstacle(lua_Table * data, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>2 ? (SPK::ModifierTrigger)lua_tointeger(L,3) : SPK::INTERSECT_ZONE;
		float bouncingRatio=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;
		float friction=luatop>4 ? (float)lua_tonumber(L,5) : 1.0f;

		return new wrapper_SPK_Obstacle(L,NULL, zone, trigger, bouncingRatio, friction);
	}


	// Function binds:
	// std::string SPK::Obstacle::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Obstacle::getClassName() const function, expected prototype:\nstd::string SPK::Obstacle::getClassName() const\nClass arguments details:\n");
		}


		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Obstacle::getClassName() const");
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Obstacle::setBouncingRatio(float bouncingRatio)
	static int _bind_setBouncingRatio(lua_State *L) {
		if (!_lg_typecheck_setBouncingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Obstacle::setBouncingRatio(float bouncingRatio) function, expected prototype:\nvoid SPK::Obstacle::setBouncingRatio(float bouncingRatio)\nClass arguments details:\n");
		}

		float bouncingRatio=(float)lua_tonumber(L,2);

		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Obstacle::setBouncingRatio(float)");
		}
		self->setBouncingRatio(bouncingRatio);

		return 0;
	}

	// void SPK::Obstacle::setFriction(float friction)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Obstacle::setFriction(float friction) function, expected prototype:\nvoid SPK::Obstacle::setFriction(float friction)\nClass arguments details:\n");
		}

		float friction=(float)lua_tonumber(L,2);

		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Obstacle::setFriction(float)");
		}
		self->setFriction(friction);

		return 0;
	}

	// float SPK::Obstacle::getBouncingRatio() const
	static int _bind_getBouncingRatio(lua_State *L) {
		if (!_lg_typecheck_getBouncingRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Obstacle::getBouncingRatio() const function, expected prototype:\nfloat SPK::Obstacle::getBouncingRatio() const\nClass arguments details:\n");
		}


		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Obstacle::getBouncingRatio() const");
		}
		float lret = self->getBouncingRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Obstacle::getFriction() const
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Obstacle::getFriction() const function, expected prototype:\nfloat SPK::Obstacle::getFriction() const\nClass arguments details:\n");
		}


		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Obstacle::getFriction() const");
		}
		float lret = self->getFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static SPK::Obstacle * SPK::Obstacle::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Obstacle * SPK::Obstacle::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f) function, expected prototype:\nstatic SPK::Obstacle * SPK::Obstacle::create(SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INTERSECT_ZONE, float bouncingRatio = 1.0f, float friction = 1.0f)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Zone* zone=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,1)) : (SPK::Zone*)NULL;
		SPK::ModifierTrigger trigger=luatop>1 ? (SPK::ModifierTrigger)lua_tointeger(L,2) : SPK::INTERSECT_ZONE;
		float bouncingRatio=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;
		float friction=luatop>3 ? (float)lua_tonumber(L,4) : 1.0f;

		SPK::Obstacle * lret = SPK::Obstacle::create(zone, trigger, bouncingRatio, friction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Obstacle >::push(L,lret,false);

		return 1;
	}

	// void SPK::Obstacle::base_createBuffers(const SPK::Group & group)
	static int _bind_base_createBuffers(lua_State *L) {
		if (!_lg_typecheck_base_createBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Obstacle::base_createBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Obstacle::base_createBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Obstacle::base_createBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Obstacle::base_createBuffers(const SPK::Group &)");
		}
		self->Obstacle::createBuffers(group);

		return 0;
	}

	// void SPK::Obstacle::base_destroyBuffers(const SPK::Group & group)
	static int _bind_base_destroyBuffers(lua_State *L) {
		if (!_lg_typecheck_base_destroyBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Obstacle::base_destroyBuffers(const SPK::Group & group) function, expected prototype:\nvoid SPK::Obstacle::base_destroyBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Obstacle::base_destroyBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Obstacle::base_destroyBuffers(const SPK::Group &)");
		}
		self->Obstacle::destroyBuffers(group);

		return 0;
	}

	// SPK::Registerable * SPK::Obstacle::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Obstacle::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Obstacle::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Obstacle::base_findByName(const std::string &)");
		}
		SPK::Registerable * lret = self->Obstacle::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// std::string SPK::Obstacle::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Obstacle::base_getClassName() const function, expected prototype:\nstd::string SPK::Obstacle::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Obstacle* self=Luna< SPK::Registerable >::checkSubType< SPK::Obstacle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Obstacle::base_getClassName() const");
		}
		std::string lret = self->Obstacle::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

SPK::Obstacle* LunaTraits< SPK::Obstacle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Obstacle::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Obstacle >::_bind_dtor(SPK::Obstacle* obj) {
	delete obj;
}

const char LunaTraits< SPK::Obstacle >::className[] = "Obstacle";
const char LunaTraits< SPK::Obstacle >::fullName[] = "SPK::Obstacle";
const char LunaTraits< SPK::Obstacle >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Obstacle >::parents[] = {"SPK.Modifier", 0};
const int LunaTraits< SPK::Obstacle >::hash = 76941105;
const int LunaTraits< SPK::Obstacle >::uniqueIDs[] = {31337102, 41560017, 81662222,0};

luna_RegType LunaTraits< SPK::Obstacle >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Obstacle::_bind_getClassName},
	{"setBouncingRatio", &luna_wrapper_SPK_Obstacle::_bind_setBouncingRatio},
	{"setFriction", &luna_wrapper_SPK_Obstacle::_bind_setFriction},
	{"getBouncingRatio", &luna_wrapper_SPK_Obstacle::_bind_getBouncingRatio},
	{"getFriction", &luna_wrapper_SPK_Obstacle::_bind_getFriction},
	{"create", &luna_wrapper_SPK_Obstacle::_bind_create},
	{"base_createBuffers", &luna_wrapper_SPK_Obstacle::_bind_base_createBuffers},
	{"base_destroyBuffers", &luna_wrapper_SPK_Obstacle::_bind_base_destroyBuffers},
	{"base_findByName", &luna_wrapper_SPK_Obstacle::_bind_base_findByName},
	{"base_getClassName", &luna_wrapper_SPK_Obstacle::_bind_base_getClassName},
	{"__eq", &luna_wrapper_SPK_Obstacle::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Obstacle::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Obstacle >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Obstacle::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Obstacle::_cast_from_Transformable},
	{"SPK::BufferHandler", &luna_wrapper_SPK_Obstacle::_cast_from_BufferHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Obstacle >::enumValues[] = {
	{0,0}
};

