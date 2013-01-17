#include <plug_common.h>

class luna_wrapper_btFace {
public:
	typedef Luna< btFace > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14966817) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btFace*)");
		}

		btFace* rhs =(Luna< btFace >::check(L,2));
		btFace* self=(Luna< btFace >::check(L,1));
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

		btFace* self=(Luna< btFace >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btFace");
		
		return luna_dynamicCast(L,converters,"btFace",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_indices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_indices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41950488) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btAlignedObjectArray< int > btFace::m_indices()
	static int _bind_getM_indices(lua_State *L) {
		if (!_lg_typecheck_getM_indices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< int > btFace::m_indices() function, expected prototype:\nbtAlignedObjectArray< int > btFace::m_indices()\nClass arguments details:\n");
		}


		btFace* self=(Luna< btFace >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< int > btFace::m_indices(). Got : '%s'",typeid(Luna< btFace >::check(L,1)).name());
		}
		const btAlignedObjectArray< int >* lret = &self->m_indices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< int > >::push(L,lret,false);

		return 1;
	}

	// void btFace::m_indices(btAlignedObjectArray< int > value)
	static int _bind_setM_indices(lua_State *L) {
		if (!_lg_typecheck_setM_indices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btFace::m_indices(btAlignedObjectArray< int > value) function, expected prototype:\nvoid btFace::m_indices(btAlignedObjectArray< int > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< int >* value_ptr=(Luna< btAlignedObjectArray< int > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btFace::m_indices function");
		}
		btAlignedObjectArray< int > value=*value_ptr;

		btFace* self=(Luna< btFace >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btFace::m_indices(btAlignedObjectArray< int >). Got : '%s'",typeid(Luna< btFace >::check(L,1)).name());
		}
		self->m_indices = value;

		return 0;
	}


	// Operator binds:

};

btFace* LunaTraits< btFace >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btFace >::_bind_dtor(btFace* obj) {
	delete obj;
}

const char LunaTraits< btFace >::className[] = "btFace";
const char LunaTraits< btFace >::fullName[] = "btFace";
const char LunaTraits< btFace >::moduleName[] = "bullet";
const char* LunaTraits< btFace >::parents[] = {0};
const int LunaTraits< btFace >::hash = 14966817;
const int LunaTraits< btFace >::uniqueIDs[] = {14966817,0};

luna_RegType LunaTraits< btFace >::methods[] = {
	{"getM_indices", &luna_wrapper_btFace::_bind_getM_indices},
	{"setM_indices", &luna_wrapper_btFace::_bind_setM_indices},
	{"dynCast", &luna_wrapper_btFace::_bind_dynCast},
	{"__eq", &luna_wrapper_btFace::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btFace >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btFace >::enumValues[] = {
	{0,0}
};


