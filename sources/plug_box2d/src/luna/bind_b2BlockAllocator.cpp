#include <plug_common.h>

class luna_wrapper_b2BlockAllocator {
public:
	typedef Luna< b2BlockAllocator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76186022) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2BlockAllocator*)");
		}

		b2BlockAllocator* rhs =(Luna< b2BlockAllocator >::check(L,2));
		b2BlockAllocator* self=(Luna< b2BlockAllocator >::check(L,1));
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

		b2BlockAllocator* self=(Luna< b2BlockAllocator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2BlockAllocator");
		
		return luna_dynamicCast(L,converters,"b2BlockAllocator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Free(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2BlockAllocator::b2BlockAllocator()
	static b2BlockAllocator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BlockAllocator::b2BlockAllocator() function, expected prototype:\nb2BlockAllocator::b2BlockAllocator()\nClass arguments details:\n");
		}


		return new b2BlockAllocator();
	}


	// Function binds:
	// void * b2BlockAllocator::Allocate(signed int size)
	static int _bind_Allocate(lua_State *L) {
		if (!_lg_typecheck_Allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2BlockAllocator::Allocate(signed int size) function, expected prototype:\nvoid * b2BlockAllocator::Allocate(signed int size)\nClass arguments details:\n");
		}

		signed int size=(signed int)lua_tointeger(L,2);

		b2BlockAllocator* self=(Luna< b2BlockAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2BlockAllocator::Allocate(signed int). Got : '%s'",typeid(Luna< b2BlockAllocator >::check(L,1)).name());
		}
		void * lret = self->Allocate(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void b2BlockAllocator::Free(void * p, signed int size)
	static int _bind_Free(lua_State *L) {
		if (!_lg_typecheck_Free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BlockAllocator::Free(void * p, signed int size) function, expected prototype:\nvoid b2BlockAllocator::Free(void * p, signed int size)\nClass arguments details:\n");
		}

		void* p=(Luna< void >::check(L,2));
		signed int size=(signed int)lua_tointeger(L,3);

		b2BlockAllocator* self=(Luna< b2BlockAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BlockAllocator::Free(void *, signed int). Got : '%s'",typeid(Luna< b2BlockAllocator >::check(L,1)).name());
		}
		self->Free(p, size);

		return 0;
	}

	// void b2BlockAllocator::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BlockAllocator::Clear() function, expected prototype:\nvoid b2BlockAllocator::Clear()\nClass arguments details:\n");
		}


		b2BlockAllocator* self=(Luna< b2BlockAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BlockAllocator::Clear(). Got : '%s'",typeid(Luna< b2BlockAllocator >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}


	// Operator binds:

};

b2BlockAllocator* LunaTraits< b2BlockAllocator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2BlockAllocator::_bind_ctor(L);
}

void LunaTraits< b2BlockAllocator >::_bind_dtor(b2BlockAllocator* obj) {
	delete obj;
}

const char LunaTraits< b2BlockAllocator >::className[] = "b2BlockAllocator";
const char LunaTraits< b2BlockAllocator >::fullName[] = "b2BlockAllocator";
const char LunaTraits< b2BlockAllocator >::moduleName[] = "box2d";
const char* LunaTraits< b2BlockAllocator >::parents[] = {0};
const int LunaTraits< b2BlockAllocator >::hash = 76186022;
const int LunaTraits< b2BlockAllocator >::uniqueIDs[] = {76186022,0};

luna_RegType LunaTraits< b2BlockAllocator >::methods[] = {
	{"Allocate", &luna_wrapper_b2BlockAllocator::_bind_Allocate},
	{"Free", &luna_wrapper_b2BlockAllocator::_bind_Free},
	{"Clear", &luna_wrapper_b2BlockAllocator::_bind_Clear},
	{"dynCast", &luna_wrapper_b2BlockAllocator::_bind_dynCast},
	{"__eq", &luna_wrapper_b2BlockAllocator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2BlockAllocator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2BlockAllocator >::enumValues[] = {
	{0,0}
};


