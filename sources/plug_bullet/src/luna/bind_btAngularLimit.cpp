#include <plug_common.h>

class luna_wrapper_btAngularLimit {
public:
	typedef Luna< btAngularLimit > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79899735) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAngularLimit*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAngularLimit* rhs =(Luna< btAngularLimit >::check(L,2));
		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
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

		btAngularLimit* self= (btAngularLimit*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btAngularLimit >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79899735) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btAngularLimit >::check(L,1));
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

		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAngularLimit");
		
		return luna_dynamicCast(L,converters,"btAngularLimit",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_test(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSoftness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBiasFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRelaxationFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCorrection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHalfRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHigh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btAngularLimit::btAngularLimit()
	static btAngularLimit* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btAngularLimit::btAngularLimit() function, expected prototype:\nbtAngularLimit::btAngularLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btAngularLimit();
	}


	// Function binds:
	// void btAngularLimit::set(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void btAngularLimit::set(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f) function, expected prototype:\nvoid btAngularLimit::set(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);
		float _softness=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.9f;
		float _biasFactor=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.3f;
		float _relaxationFactor=luatop>5 ? (float)lua_tonumber(L,6) : (float)1.0f;

		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btAngularLimit::set(float, float, float, float, float). Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(low, high, _softness, _biasFactor, _relaxationFactor);

		return 0;
	}

	// void btAngularLimit::test(const float angle)
	static int _bind_test(lua_State *L) {
		if (!_lg_typecheck_test(L)) {
			luaL_error(L, "luna typecheck failed in void btAngularLimit::test(const float angle) function, expected prototype:\nvoid btAngularLimit::test(const float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float angle=(const float)lua_tonumber(L,2);

		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btAngularLimit::test(const float). Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->test(angle);

		return 0;
	}

	// float btAngularLimit::getSoftness() const
	static int _bind_getSoftness(lua_State *L) {
		if (!_lg_typecheck_getSoftness(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getSoftness() const function, expected prototype:\nfloat btAngularLimit::getSoftness() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getSoftness() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSoftness();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getBiasFactor() const
	static int _bind_getBiasFactor(lua_State *L) {
		if (!_lg_typecheck_getBiasFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getBiasFactor() const function, expected prototype:\nfloat btAngularLimit::getBiasFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getBiasFactor() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBiasFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getRelaxationFactor() const
	static int _bind_getRelaxationFactor(lua_State *L) {
		if (!_lg_typecheck_getRelaxationFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getRelaxationFactor() const function, expected prototype:\nfloat btAngularLimit::getRelaxationFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getRelaxationFactor() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRelaxationFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getCorrection() const
	static int _bind_getCorrection(lua_State *L) {
		if (!_lg_typecheck_getCorrection(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getCorrection() const function, expected prototype:\nfloat btAngularLimit::getCorrection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getCorrection() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCorrection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getSign() const
	static int _bind_getSign(lua_State *L) {
		if (!_lg_typecheck_getSign(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getSign() const function, expected prototype:\nfloat btAngularLimit::getSign() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getSign() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSign();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getHalfRange() const
	static int _bind_getHalfRange(lua_State *L) {
		if (!_lg_typecheck_getHalfRange(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getHalfRange() const function, expected prototype:\nfloat btAngularLimit::getHalfRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getHalfRange() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHalfRange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btAngularLimit::isLimit() const
	static int _bind_isLimit(lua_State *L) {
		if (!_lg_typecheck_isLimit(L)) {
			luaL_error(L, "luna typecheck failed in bool btAngularLimit::isLimit() const function, expected prototype:\nbool btAngularLimit::isLimit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btAngularLimit::isLimit() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btAngularLimit::fit(float & angle) const
	static int _bind_fit(lua_State *L) {
		if (!_lg_typecheck_fit(L)) {
			luaL_error(L, "luna typecheck failed in void btAngularLimit::fit(float & angle) const function, expected prototype:\nvoid btAngularLimit::fit(float & angle) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float angle=(float)lua_tonumber(L,2);

		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btAngularLimit::fit(float &) const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fit(angle);

		lua_pushnumber(L,angle);
		return 1;
	}

	// float btAngularLimit::getError() const
	static int _bind_getError(lua_State *L) {
		if (!_lg_typecheck_getError(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getError() const function, expected prototype:\nfloat btAngularLimit::getError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getError() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getLow() const
	static int _bind_getLow(lua_State *L) {
		if (!_lg_typecheck_getLow(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getLow() const function, expected prototype:\nfloat btAngularLimit::getLow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getLow() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btAngularLimit::getHigh() const
	static int _bind_getHigh(lua_State *L) {
		if (!_lg_typecheck_getHigh(L)) {
			luaL_error(L, "luna typecheck failed in float btAngularLimit::getHigh() const function, expected prototype:\nfloat btAngularLimit::getHigh() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btAngularLimit* self=(Luna< btAngularLimit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btAngularLimit::getHigh() const. Got : '%s'\n%s",typeid(Luna< btAngularLimit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHigh();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btAngularLimit* LunaTraits< btAngularLimit >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btAngularLimit::_bind_ctor(L);
}

void LunaTraits< btAngularLimit >::_bind_dtor(btAngularLimit* obj) {
	delete obj;
}

const char LunaTraits< btAngularLimit >::className[] = "btAngularLimit";
const char LunaTraits< btAngularLimit >::fullName[] = "btAngularLimit";
const char LunaTraits< btAngularLimit >::moduleName[] = "bullet";
const char* LunaTraits< btAngularLimit >::parents[] = {0};
const int LunaTraits< btAngularLimit >::hash = 79899735;
const int LunaTraits< btAngularLimit >::uniqueIDs[] = {79899735,0};

luna_RegType LunaTraits< btAngularLimit >::methods[] = {
	{"set", &luna_wrapper_btAngularLimit::_bind_set},
	{"test", &luna_wrapper_btAngularLimit::_bind_test},
	{"getSoftness", &luna_wrapper_btAngularLimit::_bind_getSoftness},
	{"getBiasFactor", &luna_wrapper_btAngularLimit::_bind_getBiasFactor},
	{"getRelaxationFactor", &luna_wrapper_btAngularLimit::_bind_getRelaxationFactor},
	{"getCorrection", &luna_wrapper_btAngularLimit::_bind_getCorrection},
	{"getSign", &luna_wrapper_btAngularLimit::_bind_getSign},
	{"getHalfRange", &luna_wrapper_btAngularLimit::_bind_getHalfRange},
	{"isLimit", &luna_wrapper_btAngularLimit::_bind_isLimit},
	{"fit", &luna_wrapper_btAngularLimit::_bind_fit},
	{"getError", &luna_wrapper_btAngularLimit::_bind_getError},
	{"getLow", &luna_wrapper_btAngularLimit::_bind_getLow},
	{"getHigh", &luna_wrapper_btAngularLimit::_bind_getHigh},
	{"dynCast", &luna_wrapper_btAngularLimit::_bind_dynCast},
	{"__eq", &luna_wrapper_btAngularLimit::_bind___eq},
	{"fromVoid", &luna_wrapper_btAngularLimit::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btAngularLimit::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btAngularLimit >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAngularLimit >::enumValues[] = {
	{0,0}
};


