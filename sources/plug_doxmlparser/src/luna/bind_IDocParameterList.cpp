#include <plug_common.h>

class luna_wrapper_IDocParameterList {
public:
	typedef Luna< IDocParameterList > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_sectType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_params(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_sectType(lua_State *L) {
		if (!_lg_typecheck_sectType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sectType function, expected prototype:\nsectType()");
		}


		IDocParameterList* self=dynamic_cast< IDocParameterList* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sectType(...)");
		}
		IDocParameterList::Types lret = self->sectType();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_params(lua_State *L) {
		if (!_lg_typecheck_params(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in params function, expected prototype:\nparams()");
		}


		IDocParameterList* self=dynamic_cast< IDocParameterList* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call params(...)");
		}
		IDocIterator * lret = self->params();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameterList* LunaTraits< IDocParameterList >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocParameterList >::_bind_dtor(IDocParameterList* obj) {
	delete obj;
}

const char LunaTraits< IDocParameterList >::className[] = "IDocParameterList";
const char LunaTraits< IDocParameterList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameterList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameterList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameterList >::methods[] = {
	{"sectType", &luna_wrapper_IDocParameterList::_bind_sectType},
	{"params", &luna_wrapper_IDocParameterList::_bind_params},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameterList >::enumValues[] = {
	{"Param", IDocParameterList::Param},
	{"RetVal", IDocParameterList::RetVal},
	{"Exception", IDocParameterList::Exception},
	{0,0}
};


