#include <plug_common.h>

class luna_wrapper_IDocText {
public:
	typedef Luna< IDocText > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_markup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_headingLevel(lua_State *L) {
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


		IDocText* self=dynamic_cast< IDocText* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_markup(lua_State *L) {
		if (!_lg_typecheck_markup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in markup function, expected prototype:\nmarkup()");
		}


		IDocText* self=dynamic_cast< IDocText* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call markup(...)");
		}
		int lret = self->markup();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_headingLevel(lua_State *L) {
		if (!_lg_typecheck_headingLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in headingLevel function, expected prototype:\nheadingLevel()");
		}


		IDocText* self=dynamic_cast< IDocText* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call headingLevel(...)");
		}
		int lret = self->headingLevel();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocText* LunaTraits< IDocText >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocText >::_bind_dtor(IDocText* obj) {
	delete obj;
}

const char LunaTraits< IDocText >::className[] = "IDocText";
const char LunaTraits< IDocText >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocText >::parents[] = {"doxmlparser.IDocMarkup", 0};
const int LunaTraits< IDocText >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocText >::methods[] = {
	{"text", &luna_wrapper_IDocText::_bind_text},
	{"markup", &luna_wrapper_IDocText::_bind_markup},
	{"headingLevel", &luna_wrapper_IDocText::_bind_headingLevel},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocText >::enumValues[] = {
	{0,0}
};


