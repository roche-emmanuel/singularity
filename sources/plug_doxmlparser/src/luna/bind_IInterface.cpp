#include <plug_common.h>

class luna_wrapper_IInterface {
public:
	typedef Luna< IInterface > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_baseCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_derivedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_baseCompounds(lua_State *L) {
		if (!_lg_typecheck_baseCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCompounds function, expected prototype:\nbaseCompounds()");
		}


		IInterface* self=dynamic_cast< IInterface* >(Luna< ICompound >::check(L,1));
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


		IInterface* self=dynamic_cast< IInterface* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call derivedCompounds(...)");
		}
		IRelatedCompoundIterator * lret = self->derivedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IRelatedCompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IInterface* LunaTraits< IInterface >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IInterface >::_bind_dtor(IInterface* obj) {
	delete obj;
}

const char LunaTraits< IInterface >::className[] = "IInterface";
const char LunaTraits< IInterface >::moduleName[] = "doxmlparser";
const char* LunaTraits< IInterface >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IInterface >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IInterface >::methods[] = {
	{"baseCompounds", &luna_wrapper_IInterface::_bind_baseCompounds},
	{"derivedCompounds", &luna_wrapper_IInterface::_bind_derivedCompounds},
	{0,0}
};

luna_RegEnumType LunaTraits< IInterface >::enumValues[] = {
	{0,0}
};


