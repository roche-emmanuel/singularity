#include <plug_common.h>

class luna_wrapper_IDocHighlight {
public:
	typedef Luna< IDocHighlight > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_highlightKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_codeElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_highlightKind(lua_State *L) {
		if (!_lg_typecheck_highlightKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in highlightKind function, expected prototype:\nhighlightKind()");
		}


		IDocHighlight* self=dynamic_cast< IDocHighlight* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call highlightKind(...)");
		}
		IDocHighlight::HighlightKind lret = self->highlightKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_codeElements(lua_State *L) {
		if (!_lg_typecheck_codeElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in codeElements function, expected prototype:\ncodeElements()");
		}


		IDocHighlight* self=dynamic_cast< IDocHighlight* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call codeElements(...)");
		}
		IDocIterator * lret = self->codeElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocHighlight* LunaTraits< IDocHighlight >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocHighlight >::_bind_dtor(IDocHighlight* obj) {
	delete obj;
}

const char LunaTraits< IDocHighlight >::className[] = "IDocHighlight";
const char LunaTraits< IDocHighlight >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocHighlight >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocHighlight >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocHighlight >::methods[] = {
	{"highlightKind", &luna_wrapper_IDocHighlight::_bind_highlightKind},
	{"codeElements", &luna_wrapper_IDocHighlight::_bind_codeElements},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocHighlight >::enumValues[] = {
	{"Invalid", IDocHighlight::Invalid},
	{"Comment", IDocHighlight::Comment},
	{"Keyword", IDocHighlight::Keyword},
	{"KeywordType", IDocHighlight::KeywordType},
	{"KeywordFlow", IDocHighlight::KeywordFlow},
	{"CharLiteral", IDocHighlight::CharLiteral},
	{"StringLiteral", IDocHighlight::StringLiteral},
	{"Preprocessor", IDocHighlight::Preprocessor},
	{0,0}
};


