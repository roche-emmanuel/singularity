#include <plug_common.h>

class luna_wrapper_IStruct {
public:
	typedef Luna< IStruct > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
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

	inline static bool _lg_typecheck_locationFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_locationLine(lua_State *L) {
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
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in nestedCompounds function, expected prototype:\nnestedCompounds()");
		}


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call nestedCompounds(...)");
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCompounds function, expected prototype:\nbaseCompounds()");
		}


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
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


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call derivedCompounds(...)");
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_locationFile(lua_State *L) {
		if (!_lg_typecheck_locationFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationFile function, expected prototype:\nlocationFile()");
		}


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
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


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationLine(...)");
		}
		int lret = self->locationLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_locationBodyStartLine(lua_State *L) {
		if (!_lg_typecheck_locationBodyStartLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in locationBodyStartLine function, expected prototype:\nlocationBodyStartLine()");
		}


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
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


		IStruct* self=dynamic_cast< IStruct* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call locationBodyEndLine(...)");
		}
		int lret = self->locationBodyEndLine();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IStruct* LunaTraits< IStruct >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IStruct >::_bind_dtor(IStruct* obj) {
	delete obj;
}

const char LunaTraits< IStruct >::className[] = "IStruct";
const char LunaTraits< IStruct >::moduleName[] = "doxmlparser";
const char* LunaTraits< IStruct >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IStruct >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IStruct >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IStruct::_bind_nestedCompounds},
	{"baseCompounds", &luna_wrapper_IStruct::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IStruct::_bind_derivedCompounds},
	{"locationFile", &luna_wrapper_IStruct::_bind_locationFile},
	{"locationLine", &luna_wrapper_IStruct::_bind_locationLine},
	{"locationBodyStartLine", &luna_wrapper_IStruct::_bind_locationBodyStartLine},
	{"locationBodyEndLine", &luna_wrapper_IStruct::_bind_locationBodyEndLine},
	{0,0}
};

luna_RegEnumType LunaTraits< IStruct >::enumValues[] = {
	{0,0}
};


