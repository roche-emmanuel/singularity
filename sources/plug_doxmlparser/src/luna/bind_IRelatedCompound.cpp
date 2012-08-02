#include <plug_common.h>

class luna_wrapper_IRelatedCompound {
public:
	typedef Luna< IRelatedCompound > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_compound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_compound(lua_State *L) {
		if (!_lg_typecheck_compound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in compound function, expected prototype:\ncompound()");
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call compound(...)");
		}
		ICompound * lret = self->compound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in protection function, expected prototype:\nprotection()");
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call protection(...)");
		}
		IRelatedCompound::Protection lret = self->protection();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		IRelatedCompound::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IRelatedCompound* self=(Luna< IRelatedCompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IRelatedCompound* LunaTraits< IRelatedCompound >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IRelatedCompound >::_bind_dtor(IRelatedCompound* obj) {
	delete obj;
}

const char LunaTraits< IRelatedCompound >::className[] = "IRelatedCompound";
const char LunaTraits< IRelatedCompound >::moduleName[] = "doxmlparser";
const char* LunaTraits< IRelatedCompound >::parents[] = {0};
const int LunaTraits< IRelatedCompound >::uniqueIDs[] = {47694753,0};

luna_RegType LunaTraits< IRelatedCompound >::methods[] = {
	{"compound", &luna_wrapper_IRelatedCompound::_bind_compound},
	{"protection", &luna_wrapper_IRelatedCompound::_bind_protection},
	{"kind", &luna_wrapper_IRelatedCompound::_bind_kind},
	{"name", &luna_wrapper_IRelatedCompound::_bind_name},
	{0,0}
};

luna_RegEnumType LunaTraits< IRelatedCompound >::enumValues[] = {
	{"Public", IRelatedCompound::Public},
	{"Protected", IRelatedCompound::Protected},
	{"Private", IRelatedCompound::Private},
	{"Normal", IRelatedCompound::Normal},
	{"Virtual", IRelatedCompound::Virtual},
	{0,0}
};


