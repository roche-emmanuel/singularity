#include <plug_common.h>

class luna_wrapper_btPolarDecomposition {
public:
	typedef Luna< btPolarDecomposition > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82164365) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPolarDecomposition*)");
		}

		btPolarDecomposition* rhs =(Luna< btPolarDecomposition >::check(L,2));
		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
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

		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPolarDecomposition");
		
		return luna_dynamicCast(L,converters,"btPolarDecomposition",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_decompose(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_DEFAULT_TOLERANCE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_DEFAULT_MAX_ITERATIONS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPolarDecomposition::btPolarDecomposition(float tolerance = btPolarDecomposition::DEFAULT_TOLERANCE, unsigned int maxIterations = btPolarDecomposition::DEFAULT_MAX_ITERATIONS)
	static btPolarDecomposition* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPolarDecomposition::btPolarDecomposition(float tolerance = btPolarDecomposition::DEFAULT_TOLERANCE, unsigned int maxIterations = btPolarDecomposition::DEFAULT_MAX_ITERATIONS) function, expected prototype:\nbtPolarDecomposition::btPolarDecomposition(float tolerance = btPolarDecomposition::DEFAULT_TOLERANCE, unsigned int maxIterations = btPolarDecomposition::DEFAULT_MAX_ITERATIONS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float tolerance=luatop>0 ? (float)lua_tonumber(L,1) : btPolarDecomposition::DEFAULT_TOLERANCE;
		unsigned int maxIterations=luatop>1 ? (unsigned int)lua_tointeger(L,2) : btPolarDecomposition::DEFAULT_MAX_ITERATIONS;

		return new btPolarDecomposition(tolerance, maxIterations);
	}


	// Function binds:
	// unsigned int btPolarDecomposition::decompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h) const
	static int _bind_decompose(lua_State *L) {
		if (!_lg_typecheck_decompose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btPolarDecomposition::decompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h) const function, expected prototype:\nunsigned int btPolarDecomposition::decompose(const btMatrix3x3 & a, btMatrix3x3 & u, btMatrix3x3 & h) const\nClass arguments details:\narg 1 ID = 30394543\narg 2 ID = 30394543\narg 3 ID = 30394543\n");
		}

		const btMatrix3x3* a_ptr=(Luna< btMatrix3x3 >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btPolarDecomposition::decompose function");
		}
		const btMatrix3x3 & a=*a_ptr;
		btMatrix3x3* u_ptr=(Luna< btMatrix3x3 >::check(L,3));
		if( !u_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg u in btPolarDecomposition::decompose function");
		}
		btMatrix3x3 & u=*u_ptr;
		btMatrix3x3* h_ptr=(Luna< btMatrix3x3 >::check(L,4));
		if( !h_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg h in btPolarDecomposition::decompose function");
		}
		btMatrix3x3 & h=*h_ptr;

		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btPolarDecomposition::decompose(const btMatrix3x3 &, btMatrix3x3 &, btMatrix3x3 &) const. Got : '%s'",typeid(Luna< btPolarDecomposition >::check(L,1)).name());
		}
		unsigned int lret = self->decompose(a, u, h);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btPolarDecomposition::maxIterations() const
	static int _bind_maxIterations(lua_State *L) {
		if (!_lg_typecheck_maxIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btPolarDecomposition::maxIterations() const function, expected prototype:\nunsigned int btPolarDecomposition::maxIterations() const\nClass arguments details:\n");
		}


		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btPolarDecomposition::maxIterations() const. Got : '%s'",typeid(Luna< btPolarDecomposition >::check(L,1)).name());
		}
		unsigned int lret = self->maxIterations();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float btPolarDecomposition::DEFAULT_TOLERANCE()
	static int _bind_get_DEFAULT_TOLERANCE(lua_State *L) {
		if (!_lg_typecheck_get_DEFAULT_TOLERANCE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float btPolarDecomposition::DEFAULT_TOLERANCE() function, expected prototype:\nconst float btPolarDecomposition::DEFAULT_TOLERANCE()\nClass arguments details:\n");
		}


		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float btPolarDecomposition::DEFAULT_TOLERANCE(). Got : '%s'",typeid(Luna< btPolarDecomposition >::check(L,1)).name());
		}
		const float lret = self->DEFAULT_TOLERANCE;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned int btPolarDecomposition::DEFAULT_MAX_ITERATIONS()
	static int _bind_get_DEFAULT_MAX_ITERATIONS(lua_State *L) {
		if (!_lg_typecheck_get_DEFAULT_MAX_ITERATIONS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned int btPolarDecomposition::DEFAULT_MAX_ITERATIONS() function, expected prototype:\nconst unsigned int btPolarDecomposition::DEFAULT_MAX_ITERATIONS()\nClass arguments details:\n");
		}


		btPolarDecomposition* self=(Luna< btPolarDecomposition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned int btPolarDecomposition::DEFAULT_MAX_ITERATIONS(). Got : '%s'",typeid(Luna< btPolarDecomposition >::check(L,1)).name());
		}
		const unsigned int lret = self->DEFAULT_MAX_ITERATIONS;
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btPolarDecomposition* LunaTraits< btPolarDecomposition >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPolarDecomposition::_bind_ctor(L);
}

void LunaTraits< btPolarDecomposition >::_bind_dtor(btPolarDecomposition* obj) {
	delete obj;
}

const char LunaTraits< btPolarDecomposition >::className[] = "btPolarDecomposition";
const char LunaTraits< btPolarDecomposition >::fullName[] = "btPolarDecomposition";
const char LunaTraits< btPolarDecomposition >::moduleName[] = "bullet";
const char* LunaTraits< btPolarDecomposition >::parents[] = {0};
const int LunaTraits< btPolarDecomposition >::hash = 82164365;
const int LunaTraits< btPolarDecomposition >::uniqueIDs[] = {82164365,0};

luna_RegType LunaTraits< btPolarDecomposition >::methods[] = {
	{"decompose", &luna_wrapper_btPolarDecomposition::_bind_decompose},
	{"maxIterations", &luna_wrapper_btPolarDecomposition::_bind_maxIterations},
	{"get_DEFAULT_TOLERANCE", &luna_wrapper_btPolarDecomposition::_bind_get_DEFAULT_TOLERANCE},
	{"get_DEFAULT_MAX_ITERATIONS", &luna_wrapper_btPolarDecomposition::_bind_get_DEFAULT_MAX_ITERATIONS},
	{"dynCast", &luna_wrapper_btPolarDecomposition::_bind_dynCast},
	{"__eq", &luna_wrapper_btPolarDecomposition::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btPolarDecomposition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPolarDecomposition >::enumValues[] = {
	{0,0}
};


