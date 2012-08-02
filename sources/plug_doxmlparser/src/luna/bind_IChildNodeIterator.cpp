#include <plug_common.h>

class luna_wrapper_IChildNodeIterator {
public:
	typedef Luna< IChildNodeIterator > luna_t;

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


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toFirst(...)");
		}
		IChildNode * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toLast function, expected prototype:\ntoLast()");
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toLast(...)");
		}
		IChildNode * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toNext function, expected prototype:\ntoNext()");
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toNext(...)");
		}
		IChildNode * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toPrev function, expected prototype:\ntoPrev()");
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toPrev(...)");
		}
		IChildNode * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in current function, expected prototype:\ncurrent()");
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call current(...)");
		}
		IChildNode * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNode >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		IChildNodeIterator* self=(Luna< IChildNodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IChildNodeIterator* LunaTraits< IChildNodeIterator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IChildNodeIterator >::_bind_dtor(IChildNodeIterator* obj) {
	delete obj;
}

const char LunaTraits< IChildNodeIterator >::className[] = "IChildNodeIterator";
const char LunaTraits< IChildNodeIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IChildNodeIterator >::parents[] = {0};
const int LunaTraits< IChildNodeIterator >::uniqueIDs[] = {44189495,0};

luna_RegType LunaTraits< IChildNodeIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IChildNodeIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IChildNodeIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IChildNodeIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IChildNodeIterator::_bind_toPrev},
	{"current", &luna_wrapper_IChildNodeIterator::_bind_current},
	{"release", &luna_wrapper_IChildNodeIterator::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< IChildNodeIterator >::enumValues[] = {
	{0,0}
};


