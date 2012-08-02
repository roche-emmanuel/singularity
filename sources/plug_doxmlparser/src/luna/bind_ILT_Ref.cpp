#include <plug_common.h>

class luna_wrapper_ILT_Ref {
public:
	typedef Luna< ILT_Ref > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_targetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_external(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_text(lua_State *L) {
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


		ILT_Ref* self=dynamic_cast< ILT_Ref* >(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_targetKind(lua_State *L) {
		if (!_lg_typecheck_targetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in targetKind function, expected prototype:\ntargetKind()");
		}


		ILT_Ref* self=dynamic_cast< ILT_Ref* >(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call targetKind(...)");
		}
		ILT_Ref::TargetKind lret = self->targetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_external(lua_State *L) {
		if (!_lg_typecheck_external(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in external function, expected prototype:\nexternal()");
		}


		ILT_Ref* self=dynamic_cast< ILT_Ref* >(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call external(...)");
		}
		const IString * lret = self->external();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		ILT_Ref* self=dynamic_cast< ILT_Ref* >(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

ILT_Ref* LunaTraits< ILT_Ref >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ILT_Ref >::_bind_dtor(ILT_Ref* obj) {
	delete obj;
}

const char LunaTraits< ILT_Ref >::className[] = "ILT_Ref";
const char LunaTraits< ILT_Ref >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILT_Ref >::parents[] = {"doxmlparser.ILinkedText", 0};
const int LunaTraits< ILT_Ref >::uniqueIDs[] = {94836970,0};

luna_RegType LunaTraits< ILT_Ref >::methods[] = {
	{"id", &luna_wrapper_ILT_Ref::_bind_id},
	{"targetKind", &luna_wrapper_ILT_Ref::_bind_targetKind},
	{"external", &luna_wrapper_ILT_Ref::_bind_external},
	{"text", &luna_wrapper_ILT_Ref::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< ILT_Ref >::enumValues[] = {
	{"Member", ILT_Ref::Member},
	{"Compound", ILT_Ref::Compound},
	{0,0}
};


