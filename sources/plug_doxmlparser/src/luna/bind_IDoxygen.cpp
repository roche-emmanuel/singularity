#include <plug_common.h>

class luna_wrapper_IDoxygen {
public:
	typedef Luna< IDoxygen > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_compounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compoundById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compoundByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readXMLDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_compounds(lua_State *L) {
		if (!_lg_typecheck_compounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in compounds function, expected prototype:\ncompounds()");
		}


		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call compounds(...)");
		}
		ICompoundIterator * lret = self->compounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_compoundById(lua_State *L) {
		if (!_lg_typecheck_compoundById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in compoundById function, expected prototype:\ncompoundById(const char *)");
		}

		const char * id=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call compoundById(...)");
		}
		ICompound * lret = self->compoundById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_compoundByName(lua_State *L) {
		if (!_lg_typecheck_compoundByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in compoundByName function, expected prototype:\ncompoundByName(const char *)");
		}

		const char * name=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call compoundByName(...)");
		}
		ICompound * lret = self->compoundByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_memberById(lua_State *L) {
		if (!_lg_typecheck_memberById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in memberById function, expected prototype:\nmemberById(const char *)");
		}

		const char * id=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call memberById(...)");
		}
		ICompound * lret = self->memberById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_memberByName(lua_State *L) {
		if (!_lg_typecheck_memberByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in memberByName function, expected prototype:\nmemberByName(const char *)");
		}

		const char * name=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call memberByName(...)");
		}
		ICompoundIterator * lret = self->memberByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in release function, expected prototype:\nrelease()");
		}


		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call release(...)");
		}
		self->release();

		return 0;
	}

	static int _bind_setDebugLevel(lua_State *L) {
		if (!_lg_typecheck_setDebugLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in setDebugLevel function, expected prototype:\nsetDebugLevel(int)");
		}

		int level=(int)lua_tointeger(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call setDebugLevel(...)");
		}
		self->setDebugLevel(level);

		return 0;
	}

	static int _bind_readXMLDir(lua_State *L) {
		if (!_lg_typecheck_readXMLDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in readXMLDir function, expected prototype:\nreadXMLDir(const char *)");
		}

		const char * xmlDirName=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call readXMLDir(...)");
		}
		bool lret = self->readXMLDir(xmlDirName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

IDoxygen* LunaTraits< IDoxygen >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDoxygen >::_bind_dtor(IDoxygen* obj) {
	delete obj;
}

const char LunaTraits< IDoxygen >::className[] = "IDoxygen";
const char LunaTraits< IDoxygen >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDoxygen >::parents[] = {0};
const int LunaTraits< IDoxygen >::uniqueIDs[] = {63320756,0};

luna_RegType LunaTraits< IDoxygen >::methods[] = {
	{"compounds", &luna_wrapper_IDoxygen::_bind_compounds},
	{"compoundById", &luna_wrapper_IDoxygen::_bind_compoundById},
	{"compoundByName", &luna_wrapper_IDoxygen::_bind_compoundByName},
	{"memberById", &luna_wrapper_IDoxygen::_bind_memberById},
	{"memberByName", &luna_wrapper_IDoxygen::_bind_memberByName},
	{"release", &luna_wrapper_IDoxygen::_bind_release},
	{"setDebugLevel", &luna_wrapper_IDoxygen::_bind_setDebugLevel},
	{"readXMLDir", &luna_wrapper_IDoxygen::_bind_readXMLDir},
	{0,0}
};

luna_RegEnumType LunaTraits< IDoxygen >::enumValues[] = {
	{0,0}
};


