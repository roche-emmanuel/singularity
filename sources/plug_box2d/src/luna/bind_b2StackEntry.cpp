#include <plug_common.h>

class luna_wrapper_b2StackEntry {
public:
	typedef Luna< b2StackEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5969628) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2StackEntry*)");
		}

		b2StackEntry* rhs =(Luna< b2StackEntry >::check(L,2));
		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
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

		b2StackEntry* self= (b2StackEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2StackEntry >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5969628) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2StackEntry");
		
		return luna_dynamicCast(L,converters,"b2StackEntry",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedMalloc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsedMalloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char * b2StackEntry::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char * b2StackEntry::data() function, expected prototype:\nchar * b2StackEntry::data()\nClass arguments details:\n");
		}


		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char * b2StackEntry::data(). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		char * lret = self->data;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// signed int b2StackEntry::size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2StackEntry::size() function, expected prototype:\nsigned int b2StackEntry::size()\nClass arguments details:\n");
		}


		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2StackEntry::size(). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		signed int lret = self->size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2StackEntry::usedMalloc()
	static int _bind_getUsedMalloc(lua_State *L) {
		if (!_lg_typecheck_getUsedMalloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2StackEntry::usedMalloc() function, expected prototype:\nbool b2StackEntry::usedMalloc()\nClass arguments details:\n");
		}


		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2StackEntry::usedMalloc(). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		bool lret = self->usedMalloc;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2StackEntry::data(char * value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2StackEntry::data(char * value) function, expected prototype:\nvoid b2StackEntry::data(char * value)\nClass arguments details:\n");
		}

		char* value=(char*)Luna< void >::check(L,2);

		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2StackEntry::data(char *). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		self->data = value;

		return 0;
	}

	// void b2StackEntry::size(signed int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2StackEntry::size(signed int value) function, expected prototype:\nvoid b2StackEntry::size(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2StackEntry::size(signed int). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		self->size = value;

		return 0;
	}

	// void b2StackEntry::usedMalloc(bool value)
	static int _bind_setUsedMalloc(lua_State *L) {
		if (!_lg_typecheck_setUsedMalloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2StackEntry::usedMalloc(bool value) function, expected prototype:\nvoid b2StackEntry::usedMalloc(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		b2StackEntry* self=(Luna< b2StackEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2StackEntry::usedMalloc(bool). Got : '%s'",typeid(Luna< b2StackEntry >::check(L,1)).name());
		}
		self->usedMalloc = value;

		return 0;
	}


	// Operator binds:

};

b2StackEntry* LunaTraits< b2StackEntry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2StackEntry >::_bind_dtor(b2StackEntry* obj) {
	delete obj;
}

const char LunaTraits< b2StackEntry >::className[] = "b2StackEntry";
const char LunaTraits< b2StackEntry >::fullName[] = "b2StackEntry";
const char LunaTraits< b2StackEntry >::moduleName[] = "box2d";
const char* LunaTraits< b2StackEntry >::parents[] = {0};
const int LunaTraits< b2StackEntry >::hash = 5969628;
const int LunaTraits< b2StackEntry >::uniqueIDs[] = {5969628,0};

luna_RegType LunaTraits< b2StackEntry >::methods[] = {
	{"getData", &luna_wrapper_b2StackEntry::_bind_getData},
	{"getSize", &luna_wrapper_b2StackEntry::_bind_getSize},
	{"getUsedMalloc", &luna_wrapper_b2StackEntry::_bind_getUsedMalloc},
	{"setData", &luna_wrapper_b2StackEntry::_bind_setData},
	{"setSize", &luna_wrapper_b2StackEntry::_bind_setSize},
	{"setUsedMalloc", &luna_wrapper_b2StackEntry::_bind_setUsedMalloc},
	{"dynCast", &luna_wrapper_b2StackEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_b2StackEntry::_bind___eq},
	{"fromVoid", &luna_wrapper_b2StackEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2StackEntry::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2StackEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2StackEntry >::enumValues[] = {
	{0,0}
};


