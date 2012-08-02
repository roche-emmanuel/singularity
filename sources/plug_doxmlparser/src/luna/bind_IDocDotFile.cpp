#include <plug_common.h>

class luna_wrapper_IDocDotFile {
public:
	typedef Luna< IDocDotFile > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
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
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IDocDotFile* self=dynamic_cast< IDocDotFile* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in caption function, expected prototype:\ncaption()");
		}


		IDocDotFile* self=dynamic_cast< IDocDotFile* >(Luna< IDoc >::check(L,1));
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

IDocDotFile* LunaTraits< IDocDotFile >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocDotFile >::_bind_dtor(IDocDotFile* obj) {
	delete obj;
}

const char LunaTraits< IDocDotFile >::className[] = "IDocDotFile";
const char LunaTraits< IDocDotFile >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocDotFile >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocDotFile >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocDotFile >::methods[] = {
	{"name", &luna_wrapper_IDocDotFile::_bind_name},
	{"caption", &luna_wrapper_IDocDotFile::_bind_caption},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocDotFile >::enumValues[] = {
	{0,0}
};


