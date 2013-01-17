#include <plug_common.h>

class luna_wrapper_btHashPtr {
public:
	typedef Luna< btHashPtr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66366932) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btHashPtr*)");
		}

		btHashPtr* rhs =(Luna< btHashPtr >::check(L,2));
		btHashPtr* self=(Luna< btHashPtr >::check(L,1));
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

		btHashPtr* self=(Luna< btHashPtr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btHashPtr");
		
		return luna_dynamicCast(L,converters,"btHashPtr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66366932) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHash(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHashPtr::btHashPtr(const void * ptr)
	static btHashPtr* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHashPtr::btHashPtr(const void * ptr) function, expected prototype:\nbtHashPtr::btHashPtr(const void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,1));

		return new btHashPtr(ptr);
	}


	// Function binds:
	// const void * btHashPtr::getPointer() const
	static int _bind_getPointer(lua_State *L) {
		if (!_lg_typecheck_getPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * btHashPtr::getPointer() const function, expected prototype:\nconst void * btHashPtr::getPointer() const\nClass arguments details:\n");
		}


		btHashPtr* self=(Luna< btHashPtr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * btHashPtr::getPointer() const. Got : '%s'",typeid(Luna< btHashPtr >::check(L,1)).name());
		}
		const void * lret = self->getPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btHashPtr::equals(const btHashPtr & other) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btHashPtr::equals(const btHashPtr & other) const function, expected prototype:\nbool btHashPtr::equals(const btHashPtr & other) const\nClass arguments details:\narg 1 ID = 66366932\n");
		}

		const btHashPtr* other_ptr=(Luna< btHashPtr >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btHashPtr::equals function");
		}
		const btHashPtr & other=*other_ptr;

		btHashPtr* self=(Luna< btHashPtr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btHashPtr::equals(const btHashPtr &) const. Got : '%s'",typeid(Luna< btHashPtr >::check(L,1)).name());
		}
		bool lret = self->equals(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int btHashPtr::getHash() const
	static int _bind_getHash(lua_State *L) {
		if (!_lg_typecheck_getHash(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btHashPtr::getHash() const function, expected prototype:\nunsigned int btHashPtr::getHash() const\nClass arguments details:\n");
		}


		btHashPtr* self=(Luna< btHashPtr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btHashPtr::getHash() const. Got : '%s'",typeid(Luna< btHashPtr >::check(L,1)).name());
		}
		unsigned int lret = self->getHash();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btHashPtr* LunaTraits< btHashPtr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHashPtr::_bind_ctor(L);
}

void LunaTraits< btHashPtr >::_bind_dtor(btHashPtr* obj) {
	delete obj;
}

const char LunaTraits< btHashPtr >::className[] = "btHashPtr";
const char LunaTraits< btHashPtr >::fullName[] = "btHashPtr";
const char LunaTraits< btHashPtr >::moduleName[] = "bullet";
const char* LunaTraits< btHashPtr >::parents[] = {0};
const int LunaTraits< btHashPtr >::hash = 66366932;
const int LunaTraits< btHashPtr >::uniqueIDs[] = {66366932,0};

luna_RegType LunaTraits< btHashPtr >::methods[] = {
	{"getPointer", &luna_wrapper_btHashPtr::_bind_getPointer},
	{"equals", &luna_wrapper_btHashPtr::_bind_equals},
	{"getHash", &luna_wrapper_btHashPtr::_bind_getHash},
	{"dynCast", &luna_wrapper_btHashPtr::_bind_dynCast},
	{"__eq", &luna_wrapper_btHashPtr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btHashPtr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btHashPtr >::enumValues[] = {
	{0,0}
};


