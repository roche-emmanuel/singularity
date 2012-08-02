#include <plug_common.h>

class luna_wrapper_IChildNode {
public:
	typedef Luna< IChildNode > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_node(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_relation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_relationString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_edgeLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_node(lua_State *L) {
		if (!_lg_typecheck_node(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in node function, expected prototype:\nnode()");
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call node(...)");
		}
		INode * lret = self->node();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	static int _bind_relation(lua_State *L) {
		if (!_lg_typecheck_relation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in relation function, expected prototype:\nrelation()");
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call relation(...)");
		}
		IChildNode::NodeRelation lret = self->relation();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_relationString(lua_State *L) {
		if (!_lg_typecheck_relationString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in relationString function, expected prototype:\nrelationString()");
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call relationString(...)");
		}
		const IString * lret = self->relationString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_edgeLabels(lua_State *L) {
		if (!_lg_typecheck_edgeLabels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in edgeLabels function, expected prototype:\nedgeLabels()");
		}


		IChildNode* self=(Luna< IChildNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call edgeLabels(...)");
		}
		IEdgeLabelIterator * lret = self->edgeLabels();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IEdgeLabelIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IChildNode* LunaTraits< IChildNode >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IChildNode >::_bind_dtor(IChildNode* obj) {
	delete obj;
}

const char LunaTraits< IChildNode >::className[] = "IChildNode";
const char LunaTraits< IChildNode >::moduleName[] = "doxmlparser";
const char* LunaTraits< IChildNode >::parents[] = {0};
const int LunaTraits< IChildNode >::uniqueIDs[] = {83803782,0};

luna_RegType LunaTraits< IChildNode >::methods[] = {
	{"node", &luna_wrapper_IChildNode::_bind_node},
	{"relation", &luna_wrapper_IChildNode::_bind_relation},
	{"relationString", &luna_wrapper_IChildNode::_bind_relationString},
	{"edgeLabels", &luna_wrapper_IChildNode::_bind_edgeLabels},
	{0,0}
};

luna_RegEnumType LunaTraits< IChildNode >::enumValues[] = {
	{"PublicInheritance", IChildNode::PublicInheritance},
	{"ProtectedInheritance", IChildNode::ProtectedInheritance},
	{"PrivateInheritance", IChildNode::PrivateInheritance},
	{"Usage", IChildNode::Usage},
	{"TemplateInstance", IChildNode::TemplateInstance},
	{0,0}
};


