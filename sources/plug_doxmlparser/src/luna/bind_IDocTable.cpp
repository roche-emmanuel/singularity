#include <plug_common.h>

class luna_wrapper_IDocTable {
public:
	typedef Luna< IDocTable > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_rows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_caption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_rows(lua_State *L) {
		if (!_lg_typecheck_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in rows function, expected prototype:\nrows()");
		}


		IDocTable* self=dynamic_cast< IDocTable* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call rows(...)");
		}
		IDocIterator * lret = self->rows();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_numColumns(lua_State *L) {
		if (!_lg_typecheck_numColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in numColumns function, expected prototype:\nnumColumns()");
		}


		IDocTable* self=dynamic_cast< IDocTable* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call numColumns(...)");
		}
		int lret = self->numColumns();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in caption function, expected prototype:\ncaption()");
		}


		IDocTable* self=dynamic_cast< IDocTable* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call caption(...)");
		}
		const IString * lret = self->caption();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTable* LunaTraits< IDocTable >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocTable >::_bind_dtor(IDocTable* obj) {
	delete obj;
}

const char LunaTraits< IDocTable >::className[] = "IDocTable";
const char LunaTraits< IDocTable >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTable >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTable >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTable >::methods[] = {
	{"rows", &luna_wrapper_IDocTable::_bind_rows},
	{"numColumns", &luna_wrapper_IDocTable::_bind_numColumns},
	{"caption", &luna_wrapper_IDocTable::_bind_caption},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTable >::enumValues[] = {
	{0,0}
};


