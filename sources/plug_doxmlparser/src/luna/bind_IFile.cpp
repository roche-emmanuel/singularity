#include <plug_common.h>

class luna_wrapper_IFile {
public:
	typedef Luna< IFile > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_includeDependencyGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includedByDependencyGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_source(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_includedBy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_includeDependencyGraph(lua_State *L) {
		if (!_lg_typecheck_includeDependencyGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in includeDependencyGraph function, expected prototype:\nincludeDependencyGraph()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call includeDependencyGraph(...)");
		}
		IGraph * lret = self->includeDependencyGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	static int _bind_includedByDependencyGraph(lua_State *L) {
		if (!_lg_typecheck_includedByDependencyGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in includedByDependencyGraph function, expected prototype:\nincludedByDependencyGraph()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call includedByDependencyGraph(...)");
		}
		IGraph * lret = self->includedByDependencyGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	static int _bind_source(lua_State *L) {
		if (!_lg_typecheck_source(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in source function, expected prototype:\nsource()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call source(...)");
		}
		IDocProgramListing * lret = self->source();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocProgramListing >::push(L,lret,false);

		return 1;
	}

	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in nestedCompounds function, expected prototype:\nnestedCompounds()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call nestedCompounds(...)");
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_includes(lua_State *L) {
		if (!_lg_typecheck_includes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in includes function, expected prototype:\nincludes()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call includes(...)");
		}
		IIncludeIterator * lret = self->includes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IIncludeIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_includedBy(lua_State *L) {
		if (!_lg_typecheck_includedBy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in includedBy function, expected prototype:\nincludedBy()");
		}


		IFile* self=dynamic_cast< IFile* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call includedBy(...)");
		}
		IIncludeIterator * lret = self->includedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IIncludeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IFile* LunaTraits< IFile >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IFile >::_bind_dtor(IFile* obj) {
	delete obj;
}

const char LunaTraits< IFile >::className[] = "IFile";
const char LunaTraits< IFile >::moduleName[] = "doxmlparser";
const char* LunaTraits< IFile >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IFile >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IFile >::methods[] = {
	{"includeDependencyGraph", &luna_wrapper_IFile::_bind_includeDependencyGraph},
	{"includedByDependencyGraph", &luna_wrapper_IFile::_bind_includedByDependencyGraph},
	{"source", &luna_wrapper_IFile::_bind_source},
	{"nestedCompounds", &luna_wrapper_IFile::_bind_nestedCompounds},
	{"includes", &luna_wrapper_IFile::_bind_includes},
	{"includedBy", &luna_wrapper_IFile::_bind_includedBy},
	{0,0}
};

luna_RegEnumType LunaTraits< IFile >::enumValues[] = {
	{0,0}
};


