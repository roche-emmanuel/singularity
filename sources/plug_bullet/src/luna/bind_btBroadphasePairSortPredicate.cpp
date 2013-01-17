#include <plug_common.h>

class luna_wrapper_btBroadphasePairSortPredicate {
public:
	typedef Luna< btBroadphasePairSortPredicate > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69662040) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphasePairSortPredicate*)");
		}

		btBroadphasePairSortPredicate* rhs =(Luna< btBroadphasePairSortPredicate >::check(L,2));
		btBroadphasePairSortPredicate* self=(Luna< btBroadphasePairSortPredicate >::check(L,1));
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

		btBroadphasePairSortPredicate* self=(Luna< btBroadphasePairSortPredicate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBroadphasePairSortPredicate");
		
		return luna_dynamicCast(L,converters,"btBroadphasePairSortPredicate",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82050774) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,82050774) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:

	// Operator binds:
	// bool btBroadphasePairSortPredicate::operator()(const btBroadphasePair & a, const btBroadphasePair & b) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBroadphasePairSortPredicate::operator()(const btBroadphasePair & a, const btBroadphasePair & b) const function, expected prototype:\nbool btBroadphasePairSortPredicate::operator()(const btBroadphasePair & a, const btBroadphasePair & b) const\nClass arguments details:\narg 1 ID = 82050774\narg 2 ID = 82050774\n");
		}

		const btBroadphasePair* a_ptr=(Luna< btBroadphasePair >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btBroadphasePairSortPredicate::operator() function");
		}
		const btBroadphasePair & a=*a_ptr;
		const btBroadphasePair* b_ptr=(Luna< btBroadphasePair >::check(L,3));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in btBroadphasePairSortPredicate::operator() function");
		}
		const btBroadphasePair & b=*b_ptr;

		btBroadphasePairSortPredicate* self=(Luna< btBroadphasePairSortPredicate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBroadphasePairSortPredicate::operator()(const btBroadphasePair &, const btBroadphasePair &) const. Got : '%s'",typeid(Luna< btBroadphasePairSortPredicate >::check(L,1)).name());
		}
		bool lret = self->operator()(a, b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

btBroadphasePairSortPredicate* LunaTraits< btBroadphasePairSortPredicate >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btBroadphasePairSortPredicate >::_bind_dtor(btBroadphasePairSortPredicate* obj) {
	delete obj;
}

const char LunaTraits< btBroadphasePairSortPredicate >::className[] = "btBroadphasePairSortPredicate";
const char LunaTraits< btBroadphasePairSortPredicate >::fullName[] = "btBroadphasePairSortPredicate";
const char LunaTraits< btBroadphasePairSortPredicate >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphasePairSortPredicate >::parents[] = {0};
const int LunaTraits< btBroadphasePairSortPredicate >::hash = 69662040;
const int LunaTraits< btBroadphasePairSortPredicate >::uniqueIDs[] = {69662040,0};

luna_RegType LunaTraits< btBroadphasePairSortPredicate >::methods[] = {
	{"op_call", &luna_wrapper_btBroadphasePairSortPredicate::_bind_op_call},
	{"dynCast", &luna_wrapper_btBroadphasePairSortPredicate::_bind_dynCast},
	{"__eq", &luna_wrapper_btBroadphasePairSortPredicate::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphasePairSortPredicate >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphasePairSortPredicate >::enumValues[] = {
	{0,0}
};


