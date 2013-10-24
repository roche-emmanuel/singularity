#include <plug_common.h>

class luna_wrapper_b2FixtureDef {
public:
	typedef Luna< b2FixtureDef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50620191) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2FixtureDef*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2FixtureDef* rhs =(Luna< b2FixtureDef >::check(L,2));
		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2FixtureDef* self= (b2FixtureDef*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2FixtureDef >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50620191) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2FixtureDef");
		
		return luna_dynamicCast(L,converters,"b2FixtureDef",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIsSensor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIsSensor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15544248) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2FixtureDef::b2FixtureDef()
	static b2FixtureDef* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2FixtureDef::b2FixtureDef() function, expected prototype:\nb2FixtureDef::b2FixtureDef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2FixtureDef();
	}


	// Function binds:
	// const b2Shape * b2FixtureDef::shape()
	static int _bind_getShape(lua_State *L) {
		if (!_lg_typecheck_getShape(L)) {
			luaL_error(L, "luna typecheck failed in const b2Shape * b2FixtureDef::shape() function, expected prototype:\nconst b2Shape * b2FixtureDef::shape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const b2Shape * b2FixtureDef::shape(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Shape * lret = self->shape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Shape >::push(L,lret,false);

		return 1;
	}

	// void * b2FixtureDef::userData()
	static int _bind_getUserData(lua_State *L) {
		if (!_lg_typecheck_getUserData(L)) {
			luaL_error(L, "luna typecheck failed in void * b2FixtureDef::userData() function, expected prototype:\nvoid * b2FixtureDef::userData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * b2FixtureDef::userData(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->userData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float b2FixtureDef::friction()
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luaL_error(L, "luna typecheck failed in float b2FixtureDef::friction() function, expected prototype:\nfloat b2FixtureDef::friction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2FixtureDef::friction(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->friction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2FixtureDef::restitution()
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
			luaL_error(L, "luna typecheck failed in float b2FixtureDef::restitution() function, expected prototype:\nfloat b2FixtureDef::restitution()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2FixtureDef::restitution(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->restitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2FixtureDef::density()
	static int _bind_getDensity(lua_State *L) {
		if (!_lg_typecheck_getDensity(L)) {
			luaL_error(L, "luna typecheck failed in float b2FixtureDef::density() function, expected prototype:\nfloat b2FixtureDef::density()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2FixtureDef::density(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->density;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2FixtureDef::isSensor()
	static int _bind_getIsSensor(lua_State *L) {
		if (!_lg_typecheck_getIsSensor(L)) {
			luaL_error(L, "luna typecheck failed in bool b2FixtureDef::isSensor() function, expected prototype:\nbool b2FixtureDef::isSensor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2FixtureDef::isSensor(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSensor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Filter b2FixtureDef::filter()
	static int _bind_getFilter(lua_State *L) {
		if (!_lg_typecheck_getFilter(L)) {
			luaL_error(L, "luna typecheck failed in b2Filter b2FixtureDef::filter() function, expected prototype:\nb2Filter b2FixtureDef::filter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Filter b2FixtureDef::filter(). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2Filter* lret = &self->filter;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Filter >::push(L,lret,false);

		return 1;
	}

	// void b2FixtureDef::userData(void * value)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::userData(void * value) function, expected prototype:\nvoid b2FixtureDef::userData(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::userData(void *). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->userData = value;

		return 0;
	}

	// void b2FixtureDef::friction(float value)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::friction(float value) function, expected prototype:\nvoid b2FixtureDef::friction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::friction(float). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->friction = value;

		return 0;
	}

	// void b2FixtureDef::restitution(float value)
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::restitution(float value) function, expected prototype:\nvoid b2FixtureDef::restitution(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::restitution(float). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->restitution = value;

		return 0;
	}

	// void b2FixtureDef::density(float value)
	static int _bind_setDensity(lua_State *L) {
		if (!_lg_typecheck_setDensity(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::density(float value) function, expected prototype:\nvoid b2FixtureDef::density(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::density(float). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->density = value;

		return 0;
	}

	// void b2FixtureDef::isSensor(bool value)
	static int _bind_setIsSensor(lua_State *L) {
		if (!_lg_typecheck_setIsSensor(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::isSensor(bool value) function, expected prototype:\nvoid b2FixtureDef::isSensor(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::isSensor(bool). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->isSensor = value;

		return 0;
	}

	// void b2FixtureDef::filter(b2Filter value)
	static int _bind_setFilter(lua_State *L) {
		if (!_lg_typecheck_setFilter(L)) {
			luaL_error(L, "luna typecheck failed in void b2FixtureDef::filter(b2Filter value) function, expected prototype:\nvoid b2FixtureDef::filter(b2Filter value)\nClass arguments details:\narg 1 ID = 15544248\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Filter* value_ptr=(Luna< b2Filter >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2FixtureDef::filter function");
		}
		b2Filter value=*value_ptr;

		b2FixtureDef* self=(Luna< b2FixtureDef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2FixtureDef::filter(b2Filter). Got : '%s'\n%s",typeid(Luna< b2FixtureDef >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->filter = value;

		return 0;
	}


	// Operator binds:

};

b2FixtureDef* LunaTraits< b2FixtureDef >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2FixtureDef::_bind_ctor(L);
}

void LunaTraits< b2FixtureDef >::_bind_dtor(b2FixtureDef* obj) {
	delete obj;
}

const char LunaTraits< b2FixtureDef >::className[] = "b2FixtureDef";
const char LunaTraits< b2FixtureDef >::fullName[] = "b2FixtureDef";
const char LunaTraits< b2FixtureDef >::moduleName[] = "box2d";
const char* LunaTraits< b2FixtureDef >::parents[] = {0};
const int LunaTraits< b2FixtureDef >::hash = 50620191;
const int LunaTraits< b2FixtureDef >::uniqueIDs[] = {50620191,0};

luna_RegType LunaTraits< b2FixtureDef >::methods[] = {
	{"getShape", &luna_wrapper_b2FixtureDef::_bind_getShape},
	{"getUserData", &luna_wrapper_b2FixtureDef::_bind_getUserData},
	{"getFriction", &luna_wrapper_b2FixtureDef::_bind_getFriction},
	{"getRestitution", &luna_wrapper_b2FixtureDef::_bind_getRestitution},
	{"getDensity", &luna_wrapper_b2FixtureDef::_bind_getDensity},
	{"getIsSensor", &luna_wrapper_b2FixtureDef::_bind_getIsSensor},
	{"getFilter", &luna_wrapper_b2FixtureDef::_bind_getFilter},
	{"setUserData", &luna_wrapper_b2FixtureDef::_bind_setUserData},
	{"setFriction", &luna_wrapper_b2FixtureDef::_bind_setFriction},
	{"setRestitution", &luna_wrapper_b2FixtureDef::_bind_setRestitution},
	{"setDensity", &luna_wrapper_b2FixtureDef::_bind_setDensity},
	{"setIsSensor", &luna_wrapper_b2FixtureDef::_bind_setIsSensor},
	{"setFilter", &luna_wrapper_b2FixtureDef::_bind_setFilter},
	{"dynCast", &luna_wrapper_b2FixtureDef::_bind_dynCast},
	{"__eq", &luna_wrapper_b2FixtureDef::_bind___eq},
	{"fromVoid", &luna_wrapper_b2FixtureDef::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2FixtureDef::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2FixtureDef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2FixtureDef >::enumValues[] = {
	{0,0}
};


