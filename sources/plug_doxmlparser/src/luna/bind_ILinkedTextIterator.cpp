#include <plug_common.h>

class luna_wrapper_ILinkedTextIterator {
public:
	typedef Luna< ILinkedTextIterator > luna_t;

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


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toFirst(...)");
		}
		ILinkedText * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toLast function, expected prototype:\ntoLast()");
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toLast(...)");
		}
		ILinkedText * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toNext function, expected prototype:\ntoNext()");
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toNext(...)");
		}
		ILinkedText * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toPrev function, expected prototype:\ntoPrev()");
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toPrev(...)");
		}
		ILinkedText * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in current function, expected prototype:\ncurrent()");
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call current(...)");
		}
		ILinkedText * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedText >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		ILinkedTextIterator* self=(Luna< ILinkedTextIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ILinkedTextIterator* LunaTraits< ILinkedTextIterator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ILinkedTextIterator >::_bind_dtor(ILinkedTextIterator* obj) {
	delete obj;
}

const char LunaTraits< ILinkedTextIterator >::className[] = "ILinkedTextIterator";
const char LunaTraits< ILinkedTextIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILinkedTextIterator >::parents[] = {0};
const int LunaTraits< ILinkedTextIterator >::uniqueIDs[] = {5142425,0};

luna_RegType LunaTraits< ILinkedTextIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ILinkedTextIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ILinkedTextIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ILinkedTextIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ILinkedTextIterator::_bind_toPrev},
	{"current", &luna_wrapper_ILinkedTextIterator::_bind_current},
	{"release", &luna_wrapper_ILinkedTextIterator::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< ILinkedTextIterator >::enumValues[] = {
	{0,0}
};


