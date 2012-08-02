#include <plug_common.h>

class luna_wrapper_IDocCodeLine {
public:
	typedef Luna< IDocCodeLine > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_lineNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_refId(lua_State *L) {
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
	static int _bind_lineNumber(lua_State *L) {
		if (!_lg_typecheck_lineNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in lineNumber function, expected prototype:\nlineNumber()");
		}


		IDocCodeLine* self=dynamic_cast< IDocCodeLine* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call lineNumber(...)");
		}
		int lret = self->lineNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in refId function, expected prototype:\nrefId()");
		}


		IDocCodeLine* self=dynamic_cast< IDocCodeLine* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call refId(...)");
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_codeElements(lua_State *L) {
		if (!_lg_typecheck_codeElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in codeElements function, expected prototype:\ncodeElements()");
		}


		IDocCodeLine* self=dynamic_cast< IDocCodeLine* >(Luna< IDoc >::check(L,1));
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

IDocCodeLine* LunaTraits< IDocCodeLine >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocCodeLine >::_bind_dtor(IDocCodeLine* obj) {
	delete obj;
}

const char LunaTraits< IDocCodeLine >::className[] = "IDocCodeLine";
const char LunaTraits< IDocCodeLine >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocCodeLine >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocCodeLine >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocCodeLine >::methods[] = {
	{"lineNumber", &luna_wrapper_IDocCodeLine::_bind_lineNumber},
	{"refId", &luna_wrapper_IDocCodeLine::_bind_refId},
	{"codeElements", &luna_wrapper_IDocCodeLine::_bind_codeElements},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocCodeLine >::enumValues[] = {
	{0,0}
};


