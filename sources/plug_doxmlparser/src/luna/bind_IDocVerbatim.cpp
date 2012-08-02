#include <plug_common.h>

class luna_wrapper_IDocVerbatim {
public:
	typedef Luna< IDocVerbatim > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		IDocVerbatim* self=dynamic_cast< IDocVerbatim* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in type function, expected prototype:\ntype()");
		}


		IDocVerbatim* self=dynamic_cast< IDocVerbatim* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call type(...)");
		}
		IDocVerbatim::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocVerbatim* LunaTraits< IDocVerbatim >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocVerbatim >::_bind_dtor(IDocVerbatim* obj) {
	delete obj;
}

const char LunaTraits< IDocVerbatim >::className[] = "IDocVerbatim";
const char LunaTraits< IDocVerbatim >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVerbatim >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVerbatim >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVerbatim >::methods[] = {
	{"text", &luna_wrapper_IDocVerbatim::_bind_text},
	{"type", &luna_wrapper_IDocVerbatim::_bind_type},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVerbatim >::enumValues[] = {
	{"Invalid", IDocVerbatim::Invalid},
	{"HtmlOnly", IDocVerbatim::HtmlOnly},
	{"LatexOnly", IDocVerbatim::LatexOnly},
	{"Verbatim", IDocVerbatim::Verbatim},
	{0,0}
};


