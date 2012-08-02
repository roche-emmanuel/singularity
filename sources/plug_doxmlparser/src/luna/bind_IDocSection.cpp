#include <plug_common.h>

class luna_wrapper_IDocSection {
public:
	typedef Luna< IDocSection > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_level(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_paragraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subSections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internal(lua_State *L) {
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


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_level(lua_State *L) {
		if (!_lg_typecheck_level(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in level function, expected prototype:\nlevel()");
		}


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call level(...)");
		}
		int lret = self->level();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in title function, expected prototype:\ntitle()");
		}


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call title(...)");
		}
		IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}

	static int _bind_paragraphs(lua_State *L) {
		if (!_lg_typecheck_paragraphs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in paragraphs function, expected prototype:\nparagraphs()");
		}


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call paragraphs(...)");
		}
		IDocIterator * lret = self->paragraphs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_subSections(lua_State *L) {
		if (!_lg_typecheck_subSections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in subSections function, expected prototype:\nsubSections()");
		}


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call subSections(...)");
		}
		IDocIterator * lret = self->subSections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_internal(lua_State *L) {
		if (!_lg_typecheck_internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in internal function, expected prototype:\ninternal()");
		}


		IDocSection* self=dynamic_cast< IDocSection* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call internal(...)");
		}
		IDocInternal * lret = self->internal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocInternal >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocSection* LunaTraits< IDocSection >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocSection >::_bind_dtor(IDocSection* obj) {
	delete obj;
}

const char LunaTraits< IDocSection >::className[] = "IDocSection";
const char LunaTraits< IDocSection >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSection >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSection >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSection >::methods[] = {
	{"id", &luna_wrapper_IDocSection::_bind_id},
	{"level", &luna_wrapper_IDocSection::_bind_level},
	{"title", &luna_wrapper_IDocSection::_bind_title},
	{"paragraphs", &luna_wrapper_IDocSection::_bind_paragraphs},
	{"subSections", &luna_wrapper_IDocSection::_bind_subSections},
	{"internal", &luna_wrapper_IDocSection::_bind_internal},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSection >::enumValues[] = {
	{0,0}
};


