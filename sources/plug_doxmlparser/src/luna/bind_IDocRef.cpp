#include <plug_common.h>

class luna_wrapper_IDocRef {
public:
	typedef Luna< IDocRef > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_refId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_targetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_external(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in refId function, expected prototype:\nrefId()");
		}


		IDocRef* self=dynamic_cast< IDocRef* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call refId(...)");
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_targetKind(lua_State *L) {
		if (!_lg_typecheck_targetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in targetKind function, expected prototype:\ntargetKind()");
		}


		IDocRef* self=dynamic_cast< IDocRef* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call targetKind(...)");
		}
		IDocRef::TargetKind lret = self->targetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_external(lua_State *L) {
		if (!_lg_typecheck_external(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in external function, expected prototype:\nexternal()");
		}


		IDocRef* self=dynamic_cast< IDocRef* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call external(...)");
		}
		const IString * lret = self->external();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		IDocRef* self=dynamic_cast< IDocRef* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocRef* LunaTraits< IDocRef >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocRef >::_bind_dtor(IDocRef* obj) {
	delete obj;
}

const char LunaTraits< IDocRef >::className[] = "IDocRef";
const char LunaTraits< IDocRef >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocRef >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocRef >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocRef >::methods[] = {
	{"refId", &luna_wrapper_IDocRef::_bind_refId},
	{"targetKind", &luna_wrapper_IDocRef::_bind_targetKind},
	{"external", &luna_wrapper_IDocRef::_bind_external},
	{"text", &luna_wrapper_IDocRef::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocRef >::enumValues[] = {
	{"Member", IDocRef::Member},
	{"Compound", IDocRef::Compound},
	{0,0}
};


