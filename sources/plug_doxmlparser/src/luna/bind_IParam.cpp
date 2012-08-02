#include <plug_common.h>

class luna_wrapper_IParam {
public:
	typedef Luna< IParam > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_declarationName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_attrib(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_arraySpecifier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_defaultValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_briefDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in type function, expected prototype:\ntype()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call type(...)");
		}
		ILinkedTextIterator * lret = self->type();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_declarationName(lua_State *L) {
		if (!_lg_typecheck_declarationName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in declarationName function, expected prototype:\ndeclarationName()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call declarationName(...)");
		}
		const IString * lret = self->declarationName();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_definitionName(lua_State *L) {
		if (!_lg_typecheck_definitionName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in definitionName function, expected prototype:\ndefinitionName()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call definitionName(...)");
		}
		const IString * lret = self->definitionName();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_attrib(lua_State *L) {
		if (!_lg_typecheck_attrib(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in attrib function, expected prototype:\nattrib()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call attrib(...)");
		}
		const IString * lret = self->attrib();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_arraySpecifier(lua_State *L) {
		if (!_lg_typecheck_arraySpecifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in arraySpecifier function, expected prototype:\narraySpecifier()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call arraySpecifier(...)");
		}
		const IString * lret = self->arraySpecifier();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_defaultValue(lua_State *L) {
		if (!_lg_typecheck_defaultValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in defaultValue function, expected prototype:\ndefaultValue()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call defaultValue(...)");
		}
		ILinkedTextIterator * lret = self->defaultValue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in briefDescription function, expected prototype:\nbriefDescription()");
		}


		IParam* self=(Luna< IParam >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call briefDescription(...)");
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IParam* LunaTraits< IParam >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IParam >::_bind_dtor(IParam* obj) {
	delete obj;
}

const char LunaTraits< IParam >::className[] = "IParam";
const char LunaTraits< IParam >::moduleName[] = "doxmlparser";
const char* LunaTraits< IParam >::parents[] = {0};
const int LunaTraits< IParam >::uniqueIDs[] = {66811974,0};

luna_RegType LunaTraits< IParam >::methods[] = {
	{"type", &luna_wrapper_IParam::_bind_type},
	{"declarationName", &luna_wrapper_IParam::_bind_declarationName},
	{"definitionName", &luna_wrapper_IParam::_bind_definitionName},
	{"attrib", &luna_wrapper_IParam::_bind_attrib},
	{"arraySpecifier", &luna_wrapper_IParam::_bind_arraySpecifier},
	{"defaultValue", &luna_wrapper_IParam::_bind_defaultValue},
	{"briefDescription", &luna_wrapper_IParam::_bind_briefDescription},
	{0,0}
};

luna_RegEnumType LunaTraits< IParam >::enumValues[] = {
	{0,0}
};


