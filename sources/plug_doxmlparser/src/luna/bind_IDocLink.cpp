#include <plug_common.h>

class luna_wrapper_IDocLink {
public:
	typedef Luna< IDocLink > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_refId(lua_State *L) {
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


		IDocLink* self=dynamic_cast< IDocLink* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call refId(...)");
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		IDocLink* self=dynamic_cast< IDocLink* >(Luna< IDoc >::check(L,1));
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

IDocLink* LunaTraits< IDocLink >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocLink >::_bind_dtor(IDocLink* obj) {
	delete obj;
}

const char LunaTraits< IDocLink >::className[] = "IDocLink";
const char LunaTraits< IDocLink >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocLink >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocLink >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocLink >::methods[] = {
	{"refId", &luna_wrapper_IDocLink::_bind_refId},
	{"text", &luna_wrapper_IDocLink::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocLink >::enumValues[] = {
	{0,0}
};


