#include <plug_common.h>

class luna_wrapper_IDocSymbol {
public:
	typedef Luna< IDocSymbol > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_letter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in type function, expected prototype:\ntype()");
		}


		IDocSymbol* self=dynamic_cast< IDocSymbol* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call type(...)");
		}
		IDocSymbol::Types lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in typeString function, expected prototype:\ntypeString()");
		}


		IDocSymbol* self=dynamic_cast< IDocSymbol* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call typeString(...)");
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_letter(lua_State *L) {
		if (!_lg_typecheck_letter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in letter function, expected prototype:\nletter()");
		}


		IDocSymbol* self=dynamic_cast< IDocSymbol* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call letter(...)");
		}
		char lret = self->letter();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDocSymbol* LunaTraits< IDocSymbol >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocSymbol >::_bind_dtor(IDocSymbol* obj) {
	delete obj;
}

const char LunaTraits< IDocSymbol >::className[] = "IDocSymbol";
const char LunaTraits< IDocSymbol >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocSymbol >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocSymbol >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocSymbol >::methods[] = {
	{"type", &luna_wrapper_IDocSymbol::_bind_type},
	{"typeString", &luna_wrapper_IDocSymbol::_bind_typeString},
	{"letter", &luna_wrapper_IDocSymbol::_bind_letter},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocSymbol >::enumValues[] = {
	{"Invalid", IDocSymbol::Invalid},
	{"Umlaut", IDocSymbol::Umlaut},
	{"Acute", IDocSymbol::Acute},
	{"Grave", IDocSymbol::Grave},
	{"Circ", IDocSymbol::Circ},
	{"Tilde", IDocSymbol::Tilde},
	{"Szlig", IDocSymbol::Szlig},
	{"Cedil", IDocSymbol::Cedil},
	{"Ring", IDocSymbol::Ring},
	{"Nbsp", IDocSymbol::Nbsp},
	{"Copy", IDocSymbol::Copy},
	{0,0}
};


