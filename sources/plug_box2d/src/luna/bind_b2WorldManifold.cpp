#include <plug_common.h>

class luna_wrapper_b2WorldManifold {
public:
	typedef Luna< b2WorldManifold > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57338608) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2WorldManifold*)");
		}

		b2WorldManifold* rhs =(Luna< b2WorldManifold >::check(L,2));
		b2WorldManifold* self=(Luna< b2WorldManifold >::check(L,1));
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

		b2WorldManifold* self=(Luna< b2WorldManifold >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2WorldManifold");
		
		return luna_dynamicCast(L,converters,"b2WorldManifold",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73405450)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,44090970) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void b2WorldManifold::Initialize(const b2Manifold * manifold, const b2Transform & xfA, float radiusA, const b2Transform & xfB, float radiusB)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WorldManifold::Initialize(const b2Manifold * manifold, const b2Transform & xfA, float radiusA, const b2Transform & xfB, float radiusB) function, expected prototype:\nvoid b2WorldManifold::Initialize(const b2Manifold * manifold, const b2Transform & xfA, float radiusA, const b2Transform & xfB, float radiusB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 44090970\narg 4 ID = 44090970\n");
		}

		const b2Manifold* manifold=(Luna< b2Manifold >::check(L,2));
		const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
		if( !xfA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2WorldManifold::Initialize function");
		}
		const b2Transform & xfA=*xfA_ptr;
		float radiusA=(float)lua_tonumber(L,4);
		const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,5));
		if( !xfB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2WorldManifold::Initialize function");
		}
		const b2Transform & xfB=*xfB_ptr;
		float radiusB=(float)lua_tonumber(L,6);

		b2WorldManifold* self=(Luna< b2WorldManifold >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WorldManifold::Initialize(const b2Manifold *, const b2Transform &, float, const b2Transform &, float). Got : '%s'",typeid(Luna< b2WorldManifold >::check(L,1)).name());
		}
		self->Initialize(manifold, xfA, radiusA, xfB, radiusB);

		return 0;
	}

	// b2Vec2 b2WorldManifold::normal()
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2WorldManifold::normal() function, expected prototype:\nb2Vec2 b2WorldManifold::normal()\nClass arguments details:\n");
		}


		b2WorldManifold* self=(Luna< b2WorldManifold >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2WorldManifold::normal(). Got : '%s'",typeid(Luna< b2WorldManifold >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2WorldManifold::normal(b2Vec2 value)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2WorldManifold::normal(b2Vec2 value) function, expected prototype:\nvoid b2WorldManifold::normal(b2Vec2 value)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		b2Vec2* value_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2WorldManifold::normal function");
		}
		b2Vec2 value=*value_ptr;

		b2WorldManifold* self=(Luna< b2WorldManifold >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2WorldManifold::normal(b2Vec2). Got : '%s'",typeid(Luna< b2WorldManifold >::check(L,1)).name());
		}
		self->normal = value;

		return 0;
	}


	// Operator binds:

};

b2WorldManifold* LunaTraits< b2WorldManifold >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2WorldManifold >::_bind_dtor(b2WorldManifold* obj) {
	delete obj;
}

const char LunaTraits< b2WorldManifold >::className[] = "b2WorldManifold";
const char LunaTraits< b2WorldManifold >::fullName[] = "b2WorldManifold";
const char LunaTraits< b2WorldManifold >::moduleName[] = "box2d";
const char* LunaTraits< b2WorldManifold >::parents[] = {0};
const int LunaTraits< b2WorldManifold >::hash = 57338608;
const int LunaTraits< b2WorldManifold >::uniqueIDs[] = {57338608,0};

luna_RegType LunaTraits< b2WorldManifold >::methods[] = {
	{"Initialize", &luna_wrapper_b2WorldManifold::_bind_Initialize},
	{"getNormal", &luna_wrapper_b2WorldManifold::_bind_getNormal},
	{"setNormal", &luna_wrapper_b2WorldManifold::_bind_setNormal},
	{"dynCast", &luna_wrapper_b2WorldManifold::_bind_dynCast},
	{"__eq", &luna_wrapper_b2WorldManifold::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2WorldManifold >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2WorldManifold >::enumValues[] = {
	{0,0}
};


