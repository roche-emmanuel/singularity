#include <plug_common.h>

class luna_wrapper_IClass {
public:
	typedef Luna< IClass > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_inheritanceGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_collaborationGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_baseCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_derivedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_templateParameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationBodyFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationBodyStartLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationBodyEndLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_inheritanceGraph(lua_State *L) {
		if (!_lg_typecheck_inheritanceGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in inheritanceGraph function, expected prototype:\ninheritanceGraph()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call inheritanceGraph(...)");
		}
		IGraph * lret = self->inheritanceGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	static int _bind_collaborationGraph(lua_State *L) {
		if (!_lg_typecheck_collaborationGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in collaborationGraph function, expected prototype:\ncollaborationGraph()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call collaborationGraph(...)");
		}
		IGraph * lret = self->collaborationGraph();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IGraph >::push(L,lret,false);

		return 1;
	}

	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCompounds function, expected prototype:\nbaseCompounds()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCompounds(...)");
		}
		IRelatedCompoundIterator * lret = self->baseCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_derivedCompounds(lua_State *L) {
		if (!_lg_typecheck_derivedCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in derivedCompounds function, expected prototype:\nderivedCompounds()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call derivedCompounds(...)");
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in nestedCompounds function, expected prototype:\nnestedCompounds()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call nestedCompounds(...)");
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_templateParameters(lua_State *L) {
		if (!_lg_typecheck_templateParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in templateParameters function, expected prototype:\ntemplateParameters()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call templateParameters(...)");
		}
		IParamIterator * lret = self->templateParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_locationFile(lua_State *L) {
		if (!_lg_typecheck_locationFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationFile function, expected prototype:\nlocationFile()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationFile(...)");
		}
		const IString * lret = self->locationFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_locationLine(lua_State *L) {
		if (!_lg_typecheck_locationLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationLine function, expected prototype:\nlocationLine()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationLine(...)");
		}
		int lret = self->locationLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_locationBodyFile(lua_State *L) {
		if (!_lg_typecheck_locationBodyFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationBodyFile function, expected prototype:\nlocationBodyFile()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationBodyFile(...)");
		}
		const IString * lret = self->locationBodyFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_locationBodyStartLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyStartLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationBodyStartLine function, expected prototype:\nlocationBodyStartLine()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationBodyStartLine(...)");
		}
		int lret = self->locationBodyStartLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_locationBodyEndLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyEndLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationBodyEndLine function, expected prototype:\nlocationBodyEndLine()");
		}


		IClass* self=dynamic_cast< IClass* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationBodyEndLine(...)");
		}
		int lret = self->locationBodyEndLine();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IClass* LunaTraits< IClass >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IClass >::_bind_dtor(IClass* obj) {
	delete obj;
}

const char LunaTraits< IClass >::className[] = "IClass";
const char LunaTraits< IClass >::moduleName[] = "doxmlparser";
const char* LunaTraits< IClass >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IClass >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IClass >::methods[] = {
	{"inheritanceGraph", &luna_wrapper_IClass::_bind_inheritanceGraph},
	{"collaborationGraph", &luna_wrapper_IClass::_bind_collaborationGraph},
	{"baseCompounds", &luna_wrapper_IClass::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IClass::_bind_derivedCompounds},
	{"nestedCompounds", &luna_wrapper_IClass::_bind_nestedCompounds},
	{"templateParameters", &luna_wrapper_IClass::_bind_templateParameters},
	{"locationFile", &luna_wrapper_IClass::_bind_locationFile},
	{"locationLine", &luna_wrapper_IClass::_bind_locationLine},
	{"locationBodyFile", &luna_wrapper_IClass::_bind_locationBodyFile},
	{"locationBodyStartLine", &luna_wrapper_IClass::_bind_locationBodyStartLine},
	{"locationBodyEndLine", &luna_wrapper_IClass::_bind_locationBodyEndLine},
	{0,0}
};

luna_RegEnumType LunaTraits< IClass >::enumValues[] = {
	{0,0}
};


