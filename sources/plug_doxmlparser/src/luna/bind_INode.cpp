#include <plug_common.h>

class luna_wrapper_INode {
public:
	typedef Luna< INode > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_label(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_linkId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_children(lua_State *L) {
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


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_label(lua_State *L) {
		if (!_lg_typecheck_label(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in label function, expected prototype:\nlabel()");
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call label(...)");
		}
		const IString * lret = self->label();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_linkId(lua_State *L) {
		if (!_lg_typecheck_linkId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in linkId function, expected prototype:\nlinkId()");
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call linkId(...)");
		}
		const IString * lret = self->linkId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_children(lua_State *L) {
		if (!_lg_typecheck_children(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in children function, expected prototype:\nchildren()");
		}


		INode* self=(Luna< INode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call children(...)");
		}
		IChildNodeIterator * lret = self->children();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IChildNodeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

INode* LunaTraits< INode >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< INode >::_bind_dtor(INode* obj) {
	delete obj;
}

const char LunaTraits< INode >::className[] = "INode";
const char LunaTraits< INode >::moduleName[] = "doxmlparser";
const char* LunaTraits< INode >::parents[] = {0};
const int LunaTraits< INode >::uniqueIDs[] = {69850603,0};

luna_RegType LunaTraits< INode >::methods[] = {
	{"id", &luna_wrapper_INode::_bind_id},
	{"label", &luna_wrapper_INode::_bind_label},
	{"linkId", &luna_wrapper_INode::_bind_linkId},
	{"children", &luna_wrapper_INode::_bind_children},
	{0,0}
};

luna_RegEnumType LunaTraits< INode >::enumValues[] = {
	{0,0}
};


