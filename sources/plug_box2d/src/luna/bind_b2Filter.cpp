#include <plug_common.h>

class luna_wrapper_b2Filter {
public:
	typedef Luna< b2Filter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15544248) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Filter*)");
		}

		b2Filter* rhs =(Luna< b2Filter >::check(L,2));
		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Filter");
		
		return luna_dynamicCast(L,converters,"b2Filter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCategoryBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaskBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroupIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCategoryBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaskBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroupIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2Filter::b2Filter()
	static b2Filter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Filter::b2Filter() function, expected prototype:\nb2Filter::b2Filter()\nClass arguments details:\n");
		}


		return new b2Filter();
	}


	// Function binds:
	// unsigned short b2Filter::categoryBits()
	static int _bind_getCategoryBits(lua_State *L) {
		if (!_lg_typecheck_getCategoryBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short b2Filter::categoryBits() function, expected prototype:\nunsigned short b2Filter::categoryBits()\nClass arguments details:\n");
		}


		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short b2Filter::categoryBits(). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		unsigned short lret = self->categoryBits;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short b2Filter::maskBits()
	static int _bind_getMaskBits(lua_State *L) {
		if (!_lg_typecheck_getMaskBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short b2Filter::maskBits() function, expected prototype:\nunsigned short b2Filter::maskBits()\nClass arguments details:\n");
		}


		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short b2Filter::maskBits(). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		unsigned short lret = self->maskBits;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short b2Filter::groupIndex()
	static int _bind_getGroupIndex(lua_State *L) {
		if (!_lg_typecheck_getGroupIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed short b2Filter::groupIndex() function, expected prototype:\nsigned short b2Filter::groupIndex()\nClass arguments details:\n");
		}


		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed short b2Filter::groupIndex(). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		signed short lret = self->groupIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Filter::categoryBits(unsigned short value)
	static int _bind_setCategoryBits(lua_State *L) {
		if (!_lg_typecheck_setCategoryBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Filter::categoryBits(unsigned short value) function, expected prototype:\nvoid b2Filter::categoryBits(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Filter::categoryBits(unsigned short). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		self->categoryBits = value;

		return 0;
	}

	// void b2Filter::maskBits(unsigned short value)
	static int _bind_setMaskBits(lua_State *L) {
		if (!_lg_typecheck_setMaskBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Filter::maskBits(unsigned short value) function, expected prototype:\nvoid b2Filter::maskBits(unsigned short value)\nClass arguments details:\n");
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Filter::maskBits(unsigned short). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		self->maskBits = value;

		return 0;
	}

	// void b2Filter::groupIndex(signed short value)
	static int _bind_setGroupIndex(lua_State *L) {
		if (!_lg_typecheck_setGroupIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Filter::groupIndex(signed short value) function, expected prototype:\nvoid b2Filter::groupIndex(signed short value)\nClass arguments details:\n");
		}

		signed short value=(signed short)lua_tointeger(L,2);

		b2Filter* self=(Luna< b2Filter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Filter::groupIndex(signed short). Got : '%s'",typeid(Luna< b2Filter >::check(L,1)).name());
		}
		self->groupIndex = value;

		return 0;
	}


	// Operator binds:

};

b2Filter* LunaTraits< b2Filter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Filter::_bind_ctor(L);
}

void LunaTraits< b2Filter >::_bind_dtor(b2Filter* obj) {
	delete obj;
}

const char LunaTraits< b2Filter >::className[] = "b2Filter";
const char LunaTraits< b2Filter >::fullName[] = "b2Filter";
const char LunaTraits< b2Filter >::moduleName[] = "box2d";
const char* LunaTraits< b2Filter >::parents[] = {0};
const int LunaTraits< b2Filter >::hash = 15544248;
const int LunaTraits< b2Filter >::uniqueIDs[] = {15544248,0};

luna_RegType LunaTraits< b2Filter >::methods[] = {
	{"getCategoryBits", &luna_wrapper_b2Filter::_bind_getCategoryBits},
	{"getMaskBits", &luna_wrapper_b2Filter::_bind_getMaskBits},
	{"getGroupIndex", &luna_wrapper_b2Filter::_bind_getGroupIndex},
	{"setCategoryBits", &luna_wrapper_b2Filter::_bind_setCategoryBits},
	{"setMaskBits", &luna_wrapper_b2Filter::_bind_setMaskBits},
	{"setGroupIndex", &luna_wrapper_b2Filter::_bind_setGroupIndex},
	{"dynCast", &luna_wrapper_b2Filter::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Filter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2Filter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Filter >::enumValues[] = {
	{0,0}
};


