#include <plug_common.h>

class luna_wrapper_IDocParameterItem {
public:
	typedef Luna< IDocParameterItem > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_paramNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_description(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_paramNames(lua_State *L) {
		if (!_lg_typecheck_paramNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in paramNames function, expected prototype:\nparamNames()");
		}


		IDocParameterItem* self=dynamic_cast< IDocParameterItem* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call paramNames(...)");
		}
		IDocIterator * lret = self->paramNames();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_description(lua_State *L) {
		if (!_lg_typecheck_description(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in description function, expected prototype:\ndescription()");
		}


		IDocParameterItem* self=dynamic_cast< IDocParameterItem* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call description(...)");
		}
		IDocPara * lret = self->description();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocPara >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameterItem* LunaTraits< IDocParameterItem >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocParameterItem >::_bind_dtor(IDocParameterItem* obj) {
	delete obj;
}

const char LunaTraits< IDocParameterItem >::className[] = "IDocParameterItem";
const char LunaTraits< IDocParameterItem >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameterItem >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameterItem >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameterItem >::methods[] = {
	{"paramNames", &luna_wrapper_IDocParameterItem::_bind_paramNames},
	{"description", &luna_wrapper_IDocParameterItem::_bind_description},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameterItem >::enumValues[] = {
	{0,0}
};


