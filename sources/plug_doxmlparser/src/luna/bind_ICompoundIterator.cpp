#include <plug_common.h>

class luna_wrapper_ICompoundIterator {
public:
	typedef Luna< ICompoundIterator > luna_t;

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


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toFirst(...)");
		}
		self->toFirst();

		return 0;
	}

	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toLast function, expected prototype:\ntoLast()");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toLast(...)");
		}
		self->toLast();

		return 0;
	}

	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toNext function, expected prototype:\ntoNext()");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toNext(...)");
		}
		self->toNext();

		return 0;
	}

	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toPrev function, expected prototype:\ntoPrev()");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toPrev(...)");
		}
		self->toPrev();

		return 0;
	}

	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in current function, expected prototype:\ncurrent()");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call current(...)");
		}
		ICompound * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ICompoundIterator* LunaTraits< ICompoundIterator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ICompoundIterator >::_bind_dtor(ICompoundIterator* obj) {
	delete obj;
}

const char LunaTraits< ICompoundIterator >::className[] = "ICompoundIterator";
const char LunaTraits< ICompoundIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ICompoundIterator >::parents[] = {0};
const int LunaTraits< ICompoundIterator >::uniqueIDs[] = {38557418,0};

luna_RegType LunaTraits< ICompoundIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ICompoundIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ICompoundIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ICompoundIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ICompoundIterator::_bind_toPrev},
	{"current", &luna_wrapper_ICompoundIterator::_bind_current},
	{"release", &luna_wrapper_ICompoundIterator::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< ICompoundIterator >::enumValues[] = {
	{0,0}
};


