#include <plug_common.h>

class luna_wrapper_b2ClipVertex {
public:
	typedef Luna< b2ClipVertex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24997608) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ClipVertex*)");
		}

		b2ClipVertex* rhs =(Luna< b2ClipVertex >::check(L,2));
		b2ClipVertex* self=(Luna< b2ClipVertex >::check(L,1));
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

		b2ClipVertex* self= (b2ClipVertex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2ClipVertex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24997608) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2ClipVertex >::check(L,1));
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

		b2ClipVertex* self=(Luna< b2ClipVertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ClipVertex");
		
		return luna_dynamicCast(L,converters,"b2ClipVertex",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Vec2 b2ClipVertex::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2ClipVertex::v() function, expected prototype:\nb2Vec2 b2ClipVertex::v()\nClass arguments details:\n");
		}


		b2ClipVertex* self=(Luna< b2ClipVertex >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2ClipVertex::v(). Got : '%s'",typeid(Luna< b2ClipVertex >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->v;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2ClipVertex::v(b2Vec2 value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ClipVertex::v(b2Vec2 value) function, expected prototype:\nvoid b2ClipVertex::v(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ClipVertex::v function");
		}
		b2Vec2 value=*value_ptr;

		b2ClipVertex* self=(Luna< b2ClipVertex >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ClipVertex::v(b2Vec2). Got : '%s'",typeid(Luna< b2ClipVertex >::check(L,1)).name());
		}
		self->v = value;

		return 0;
	}


	// Operator binds:

};

b2ClipVertex* LunaTraits< b2ClipVertex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2ClipVertex >::_bind_dtor(b2ClipVertex* obj) {
	delete obj;
}

const char LunaTraits< b2ClipVertex >::className[] = "b2ClipVertex";
const char LunaTraits< b2ClipVertex >::fullName[] = "b2ClipVertex";
const char LunaTraits< b2ClipVertex >::moduleName[] = "box2d";
const char* LunaTraits< b2ClipVertex >::parents[] = {0};
const int LunaTraits< b2ClipVertex >::hash = 24997608;
const int LunaTraits< b2ClipVertex >::uniqueIDs[] = {24997608,0};

luna_RegType LunaTraits< b2ClipVertex >::methods[] = {
	{"getV", &luna_wrapper_b2ClipVertex::_bind_getV},
	{"setV", &luna_wrapper_b2ClipVertex::_bind_setV},
	{"dynCast", &luna_wrapper_b2ClipVertex::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ClipVertex::_bind___eq},
	{"fromVoid", &luna_wrapper_b2ClipVertex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2ClipVertex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2ClipVertex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ClipVertex >::enumValues[] = {
	{0,0}
};


