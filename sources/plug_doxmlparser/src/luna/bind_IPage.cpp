#include <plug_common.h>

class luna_wrapper_IPage {
public:
	typedef Luna< IPage > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in title function, expected prototype:\ntitle()");
		}


		IPage* self=dynamic_cast< IPage* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call title(...)");
		}
		const IDocTitle * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocTitle >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IPage* LunaTraits< IPage >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IPage >::_bind_dtor(IPage* obj) {
	delete obj;
}

const char LunaTraits< IPage >::className[] = "IPage";
const char LunaTraits< IPage >::moduleName[] = "doxmlparser";
const char* LunaTraits< IPage >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IPage >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IPage >::methods[] = {
	{"title", &luna_wrapper_IPage::_bind_title},
	{0,0}
};

luna_RegEnumType LunaTraits< IPage >::enumValues[] = {
	{0,0}
};


