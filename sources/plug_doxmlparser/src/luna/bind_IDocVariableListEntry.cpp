#include <plug_common.h>

class luna_wrapper_IDocVariableListEntry {
public:
	typedef Luna< IDocVariableListEntry > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_term(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_term(lua_State *L) {
		if (!_lg_typecheck_term(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in term function, expected prototype:\nterm()");
		}


		IDocVariableListEntry* self=dynamic_cast< IDocVariableListEntry* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call term(...)");
		}
		ILinkedTextIterator * lret = self->term();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in description function, expected prototype:\ndescription()");
		}


		IDocVariableListEntry* self=dynamic_cast< IDocVariableListEntry* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call description(...)");
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocVariableListEntry* LunaTraits< IDocVariableListEntry >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocVariableListEntry >::_bind_dtor(IDocVariableListEntry* obj) {
	delete obj;
}

const char LunaTraits< IDocVariableListEntry >::className[] = "IDocVariableListEntry";
const char LunaTraits< IDocVariableListEntry >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVariableListEntry >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVariableListEntry >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVariableListEntry >::methods[] = {
	{"term", &luna_wrapper_IDocVariableListEntry::_bind_term},
	{"description", &luna_wrapper_IDocVariableListEntry::_bind_description},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVariableListEntry >::enumValues[] = {
	{0,0}
};


