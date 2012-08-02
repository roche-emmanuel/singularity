#include <plug_common.h>

class luna_wrapper_IDocULink {
public:
	typedef Luna< IDocULink > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_url(lua_State *L) {
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
	static int _bind_url(lua_State *L) {
		if (!_lg_typecheck_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in url function, expected prototype:\nurl()");
		}


		IDocULink* self=dynamic_cast< IDocULink* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call url(...)");
		}
		const IString * lret = self->url();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		IDocULink* self=dynamic_cast< IDocULink* >(Luna< IDoc >::check(L,1));
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

IDocULink* LunaTraits< IDocULink >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocULink >::_bind_dtor(IDocULink* obj) {
	delete obj;
}

const char LunaTraits< IDocULink >::className[] = "IDocULink";
const char LunaTraits< IDocULink >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocULink >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocULink >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocULink >::methods[] = {
	{"url", &luna_wrapper_IDocULink::_bind_url},
	{"text", &luna_wrapper_IDocULink::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocULink >::enumValues[] = {
	{0,0}
};


