#include <plug_common.h>

class luna_wrapper_b2ContactFeature {
public:
	typedef Luna< b2ContactFeature > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6926928) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactFeature*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2ContactFeature* rhs =(Luna< b2ContactFeature >::check(L,2));
		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
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

		b2ContactFeature* self= (b2ContactFeature*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ContactFeature >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6926928) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2ContactFeature >::check(L,1));
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

		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactFeature");
		
		return luna_dynamicCast(L,converters,"b2ContactFeature",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getIndexA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTypeA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTypeB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndexA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTypeA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTypeB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char b2ContactFeature::indexA()
	static int _bind_getIndexA(lua_State *L) {
		if (!_lg_typecheck_getIndexA(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char b2ContactFeature::indexA() function, expected prototype:\nunsigned char b2ContactFeature::indexA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char b2ContactFeature::indexA(). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->indexA;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char b2ContactFeature::indexB()
	static int _bind_getIndexB(lua_State *L) {
		if (!_lg_typecheck_getIndexB(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char b2ContactFeature::indexB() function, expected prototype:\nunsigned char b2ContactFeature::indexB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char b2ContactFeature::indexB(). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->indexB;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char b2ContactFeature::typeA()
	static int _bind_getTypeA(lua_State *L) {
		if (!_lg_typecheck_getTypeA(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char b2ContactFeature::typeA() function, expected prototype:\nunsigned char b2ContactFeature::typeA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char b2ContactFeature::typeA(). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->typeA;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char b2ContactFeature::typeB()
	static int _bind_getTypeB(lua_State *L) {
		if (!_lg_typecheck_getTypeB(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char b2ContactFeature::typeB() function, expected prototype:\nunsigned char b2ContactFeature::typeB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char b2ContactFeature::typeB(). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->typeB;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void b2ContactFeature::indexA(unsigned char value)
	static int _bind_setIndexA(lua_State *L) {
		if (!_lg_typecheck_setIndexA(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactFeature::indexA(unsigned char value) function, expected prototype:\nvoid b2ContactFeature::indexA(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactFeature::indexA(unsigned char). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexA = value;

		return 0;
	}

	// void b2ContactFeature::indexB(unsigned char value)
	static int _bind_setIndexB(lua_State *L) {
		if (!_lg_typecheck_setIndexB(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactFeature::indexB(unsigned char value) function, expected prototype:\nvoid b2ContactFeature::indexB(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactFeature::indexB(unsigned char). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexB = value;

		return 0;
	}

	// void b2ContactFeature::typeA(unsigned char value)
	static int _bind_setTypeA(lua_State *L) {
		if (!_lg_typecheck_setTypeA(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactFeature::typeA(unsigned char value) function, expected prototype:\nvoid b2ContactFeature::typeA(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactFeature::typeA(unsigned char). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->typeA = value;

		return 0;
	}

	// void b2ContactFeature::typeB(unsigned char value)
	static int _bind_setTypeB(lua_State *L) {
		if (!_lg_typecheck_setTypeB(L)) {
			luaL_error(L, "luna typecheck failed in void b2ContactFeature::typeB(unsigned char value) function, expected prototype:\nvoid b2ContactFeature::typeB(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		b2ContactFeature* self=(Luna< b2ContactFeature >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2ContactFeature::typeB(unsigned char). Got : '%s'\n%s",typeid(Luna< b2ContactFeature >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->typeB = value;

		return 0;
	}


	// Operator binds:

};

b2ContactFeature* LunaTraits< b2ContactFeature >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ContactFeature >::_bind_dtor(b2ContactFeature* obj) {
	delete obj;
}

const char LunaTraits< b2ContactFeature >::className[] = "b2ContactFeature";
const char LunaTraits< b2ContactFeature >::fullName[] = "b2ContactFeature";
const char LunaTraits< b2ContactFeature >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactFeature >::parents[] = {0};
const int LunaTraits< b2ContactFeature >::hash = 6926928;
const int LunaTraits< b2ContactFeature >::uniqueIDs[] = {6926928,0};

luna_RegType LunaTraits< b2ContactFeature >::methods[] = {
	{"getIndexA", &luna_wrapper_b2ContactFeature::_bind_getIndexA},
	{"getIndexB", &luna_wrapper_b2ContactFeature::_bind_getIndexB},
	{"getTypeA", &luna_wrapper_b2ContactFeature::_bind_getTypeA},
	{"getTypeB", &luna_wrapper_b2ContactFeature::_bind_getTypeB},
	{"setIndexA", &luna_wrapper_b2ContactFeature::_bind_setIndexA},
	{"setIndexB", &luna_wrapper_b2ContactFeature::_bind_setIndexB},
	{"setTypeA", &luna_wrapper_b2ContactFeature::_bind_setTypeA},
	{"setTypeB", &luna_wrapper_b2ContactFeature::_bind_setTypeB},
	{"dynCast", &luna_wrapper_b2ContactFeature::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactFeature::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ContactFeature::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ContactFeature::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactFeature >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactFeature >::enumValues[] = {
	{"e_vertex", b2ContactFeature::e_vertex},
	{"e_face", b2ContactFeature::e_face},
	{0,0}
};


