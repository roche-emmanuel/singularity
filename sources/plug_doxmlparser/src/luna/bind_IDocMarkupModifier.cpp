#include <plug_common.h>

class luna_wrapper_IDocMarkupModifier {
public:
	typedef Luna< IDocMarkupModifier > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_enabled(lua_State *L) {
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
	static int _bind_enabled(lua_State *L) {
		if (!_lg_typecheck_enabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in enabled function, expected prototype:\nenabled()");
		}


		IDocMarkupModifier* self=dynamic_cast< IDocMarkupModifier* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call enabled(...)");
		}
		bool lret = self->enabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_markup(lua_State *L) {
		if (!_lg_typecheck_markup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in markup function, expected prototype:\nmarkup()");
		}


		IDocMarkupModifier* self=dynamic_cast< IDocMarkupModifier* >(Luna< IDoc >::check(L,1));
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


		IDocMarkupModifier* self=dynamic_cast< IDocMarkupModifier* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call headingLevel(...)");
		}
		int lret = self->headingLevel();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocMarkupModifier* LunaTraits< IDocMarkupModifier >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocMarkupModifier >::_bind_dtor(IDocMarkupModifier* obj) {
	delete obj;
}

const char LunaTraits< IDocMarkupModifier >::className[] = "IDocMarkupModifier";
const char LunaTraits< IDocMarkupModifier >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocMarkupModifier >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocMarkupModifier >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocMarkupModifier >::methods[] = {
	{"enabled", &luna_wrapper_IDocMarkupModifier::_bind_enabled},
	{"markup", &luna_wrapper_IDocMarkupModifier::_bind_markup},
	{"headingLevel", &luna_wrapper_IDocMarkupModifier::_bind_headingLevel},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocMarkupModifier >::enumValues[] = {
	{0,0}
};


