#include <plug_common.h>

class luna_wrapper_b2StackAllocator {
public:
	typedef Luna< b2StackAllocator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83926873) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2StackAllocator*)");
		}

		b2StackAllocator* rhs =(Luna< b2StackAllocator >::check(L,2));
		b2StackAllocator* self=(Luna< b2StackAllocator >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		b2StackAllocator* self= (b2StackAllocator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2StackAllocator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83926873) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2StackAllocator >::check(L,1));
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

		b2StackAllocator* self=(Luna< b2StackAllocator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2StackAllocator");
		
		return luna_dynamicCast(L,converters,"b2StackAllocator",name);
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
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxAllocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2StackAllocator::b2StackAllocator()
	static b2StackAllocator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2StackAllocator::b2StackAllocator() function, expected prototype:\nb2StackAllocator::b2StackAllocator()\nClass arguments details:\n");
		}


		return new b2StackAllocator();
	}


	// Function binds:
	// void * b2StackAllocator::Allocate(signed int size)
	static int _bind_Allocate(lua_State *L) {
		if (!_lg_typecheck_Allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2StackAllocator::Allocate(signed int size) function, expected prototype:\nvoid * b2StackAllocator::Allocate(signed int size)\nClass arguments details:\n");
		}

		signed int size=(signed int)lua_tointeger(L,2);

		b2StackAllocator* self=(Luna< b2StackAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2StackAllocator::Allocate(signed int). Got : '%s'",typeid(Luna< b2StackAllocator >::check(L,1)).name());
		}
		void * lret = self->Allocate(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void b2StackAllocator::Free(void * p)
	static int _bind_Free(lua_State *L) {
		if (!_lg_typecheck_Free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2StackAllocator::Free(void * p) function, expected prototype:\nvoid b2StackAllocator::Free(void * p)\nClass arguments details:\n");
		}

		void* p=(Luna< void >::check(L,2));

		b2StackAllocator* self=(Luna< b2StackAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2StackAllocator::Free(void *). Got : '%s'",typeid(Luna< b2StackAllocator >::check(L,1)).name());
		}
		self->Free(p);

		return 0;
	}

	// signed int b2StackAllocator::GetMaxAllocation() const
	static int _bind_GetMaxAllocation(lua_State *L) {
		if (!_lg_typecheck_GetMaxAllocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2StackAllocator::GetMaxAllocation() const function, expected prototype:\nsigned int b2StackAllocator::GetMaxAllocation() const\nClass arguments details:\n");
		}


		b2StackAllocator* self=(Luna< b2StackAllocator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2StackAllocator::GetMaxAllocation() const. Got : '%s'",typeid(Luna< b2StackAllocator >::check(L,1)).name());
		}
		signed int lret = self->GetMaxAllocation();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

b2StackAllocator* LunaTraits< b2StackAllocator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2StackAllocator::_bind_ctor(L);
}

void LunaTraits< b2StackAllocator >::_bind_dtor(b2StackAllocator* obj) {
	delete obj;
}

const char LunaTraits< b2StackAllocator >::className[] = "b2StackAllocator";
const char LunaTraits< b2StackAllocator >::fullName[] = "b2StackAllocator";
const char LunaTraits< b2StackAllocator >::moduleName[] = "box2d";
const char* LunaTraits< b2StackAllocator >::parents[] = {0};
const int LunaTraits< b2StackAllocator >::hash = 83926873;
const int LunaTraits< b2StackAllocator >::uniqueIDs[] = {83926873,0};

luna_RegType LunaTraits< b2StackAllocator >::methods[] = {
	{"Allocate", &luna_wrapper_b2StackAllocator::_bind_Allocate},
	{"Free", &luna_wrapper_b2StackAllocator::_bind_Free},
	{"GetMaxAllocation", &luna_wrapper_b2StackAllocator::_bind_GetMaxAllocation},
	{"dynCast", &luna_wrapper_b2StackAllocator::_bind_dynCast},
	{"__eq", &luna_wrapper_b2StackAllocator::_bind___eq},
	{"fromVoid", &luna_wrapper_b2StackAllocator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2StackAllocator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2StackAllocator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2StackAllocator >::enumValues[] = {
	{0,0}
};


