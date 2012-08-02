#include <plug_common.h>

class luna_wrapper_IEdgeLabelIterator {
public:
	typedef Luna< IEdgeLabelIterator > luna_t;

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


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toFirst(...)");
		}
		IEdgeLabel * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toLast function, expected prototype:\ntoLast()");
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toLast(...)");
		}
		IEdgeLabel * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toNext function, expected prototype:\ntoNext()");
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toNext(...)");
		}
		IEdgeLabel * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in toPrev function, expected prototype:\ntoPrev()");
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call toPrev(...)");
		}
		IEdgeLabel * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in current function, expected prototype:\ncurrent()");
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call current(...)");
		}
		IEdgeLabel * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabel >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		IEdgeLabelIterator* self=(Luna< IEdgeLabelIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

IEdgeLabelIterator* LunaTraits< IEdgeLabelIterator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IEdgeLabelIterator >::_bind_dtor(IEdgeLabelIterator* obj) {
	delete obj;
}

const char LunaTraits< IEdgeLabelIterator >::className[] = "IEdgeLabelIterator";
const char LunaTraits< IEdgeLabelIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEdgeLabelIterator >::parents[] = {0};
const int LunaTraits< IEdgeLabelIterator >::uniqueIDs[] = {32070006,0};

luna_RegType LunaTraits< IEdgeLabelIterator >::methods[] = {
	{"toFirst", &luna_wrapper_IEdgeLabelIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_IEdgeLabelIterator::_bind_toLast},
	{"toNext", &luna_wrapper_IEdgeLabelIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_IEdgeLabelIterator::_bind_toPrev},
	{"current", &luna_wrapper_IEdgeLabelIterator::_bind_current},
	{"release", &luna_wrapper_IEdgeLabelIterator::_bind_release},
	{0,0}
};

luna_RegEnumType LunaTraits< IEdgeLabelIterator >::enumValues[] = {
	{0,0}
};


