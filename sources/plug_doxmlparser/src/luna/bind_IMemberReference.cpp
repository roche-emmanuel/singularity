#include <plug_common.h>

class luna_wrapper_IMemberReference {
public:
	typedef Luna< IMemberReference > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_member(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scope(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_virtualness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ambiguityScope(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_member(lua_State *L) {
		if (!_lg_typecheck_member(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in member function, expected prototype:\nmember()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call member(...)");
		}
		IMember * lret = self->member();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMember >::push(L,lret,false);

		return 1;
	}

	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_scope(lua_State *L) {
		if (!_lg_typecheck_scope(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in scope function, expected prototype:\nscope()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call scope(...)");
		}
		const IString * lret = self->scope();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in protection function, expected prototype:\nprotection()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call protection(...)");
		}
		const IString * lret = self->protection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_virtualness(lua_State *L) {
		if (!_lg_typecheck_virtualness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in virtualness function, expected prototype:\nvirtualness()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call virtualness(...)");
		}
		const IString * lret = self->virtualness();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_ambiguityScope(lua_State *L) {
		if (!_lg_typecheck_ambiguityScope(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ambiguityScope function, expected prototype:\nambiguityScope()");
		}


		IMemberReference* self=(Luna< IMemberReference >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ambiguityScope(...)");
		}
		const IString * lret = self->ambiguityScope();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IMemberReference* LunaTraits< IMemberReference >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IMemberReference >::_bind_dtor(IMemberReference* obj) {
	delete obj;
}

const char LunaTraits< IMemberReference >::className[] = "IMemberReference";
const char LunaTraits< IMemberReference >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMemberReference >::parents[] = {0};
const int LunaTraits< IMemberReference >::uniqueIDs[] = {16821774,0};

luna_RegType LunaTraits< IMemberReference >::methods[] = {
	{"member", &luna_wrapper_IMemberReference::_bind_member},
	{"name", &luna_wrapper_IMemberReference::_bind_name},
	{"scope", &luna_wrapper_IMemberReference::_bind_scope},
	{"protection", &luna_wrapper_IMemberReference::_bind_protection},
	{"virtualness", &luna_wrapper_IMemberReference::_bind_virtualness},
	{"ambiguityScope", &luna_wrapper_IMemberReference::_bind_ambiguityScope},
	{0,0}
};

luna_RegEnumType LunaTraits< IMemberReference >::enumValues[] = {
	{0,0}
};


