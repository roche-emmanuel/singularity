#include <plug_common.h>

class luna_wrapper_IIncludeIterator {
public:
	typedef Luna< IIncludeIterator > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_toFirst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toLast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_current(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toFirst function, expected prototype:\ntoFirst()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toFirst(...)");
		}
		IInclude * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toLast function, expected prototype:\ntoLast()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toLast(...)");
		}
		IInclude * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toNext function, expected prototype:\ntoNext()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toNext(...)");
		}
		IInclude * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toPrev function, expected prototype:\ntoPrev()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toPrev(...)");
		}
		IInclude * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in current function, expected prototype:\ncurrent()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call current(...)");
		}
		IInclude * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IInclude >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		IIncludeIterator* self=(Luna< IIncludeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IIncludeIterator* LunaTraits< IIncludeIterator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IIncludeIterator >::_bind_dtor(IIncludeIterator* obj) {
	delete obj;
}

const char LunaTraits< IIncludeIterator >::className[] = "IIncludeIterator";
const char LunaTraits< IIncludeIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IIncludeIterator >::parents[] = {0};
const int LunaTraits< IIncludeIterator >::uniqueIDs[] = {31762769,0};

luna_RegType LunaTraits< IIncludeIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IIncludeIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IIncludeIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IIncludeIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IIncludeIterator::_bind_toPrev},
	{"current", &luna_wrapper_IIncludeIterator::_bind_current},
	{"release", &luna_wrapper_IIncludeIterator::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< IIncludeIterator >::enumValues[] = {
	{0,0}
};


