#include <plug_common.h>

class luna_wrapper_IDocInternal {
public:
	typedef Luna< IDocInternal > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_paragraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subSections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_paragraphs(lua_State *L) {
		if (!_lg_typecheck_paragraphs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in paragraphs function, expected prototype:\nparagraphs()");
		}


		IDocInternal* self=dynamic_cast< IDocInternal* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call paragraphs(...)");
		}
		IDocIterator * lret = self->paragraphs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_subSections(lua_State *L) {
		if (!_lg_typecheck_subSections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in subSections function, expected prototype:\nsubSections()");
		}


		IDocInternal* self=dynamic_cast< IDocInternal* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call subSections(...)");
		}
		IDocIterator * lret = self->subSections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocInternal* LunaTraits< IDocInternal >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocInternal >::_bind_dtor(IDocInternal* obj) {
	delete obj;
}

const char LunaTraits< IDocInternal >::className[] = "IDocInternal";
const char LunaTraits< IDocInternal >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocInternal >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocInternal >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocInternal >::methods[] = {
	{"paragraphs", &luna_wrapper_IDocInternal::_bind_paragraphs},
	{"subSections", &luna_wrapper_IDocInternal::_bind_subSections},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocInternal >::enumValues[] = {
	{0,0}
};


