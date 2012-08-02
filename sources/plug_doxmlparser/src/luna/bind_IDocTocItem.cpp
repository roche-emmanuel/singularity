#include <plug_common.h>

class luna_wrapper_IDocTocItem {
public:
	typedef Luna< IDocTocItem > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in id function, expected prototype:\nid()");
		}


		IDocTocItem* self=dynamic_cast< IDocTocItem* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in title function, expected prototype:\ntitle()");
		}


		IDocTocItem* self=dynamic_cast< IDocTocItem* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call title(...)");
		}
		const IString * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTocItem* LunaTraits< IDocTocItem >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocTocItem >::_bind_dtor(IDocTocItem* obj) {
	delete obj;
}

const char LunaTraits< IDocTocItem >::className[] = "IDocTocItem";
const char LunaTraits< IDocTocItem >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTocItem >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTocItem >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTocItem >::methods[] = {
	{"id", &luna_wrapper_IDocTocItem::_bind_id},
	{"title", &luna_wrapper_IDocTocItem::_bind_title},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTocItem >::enumValues[] = {
	{0,0}
};


