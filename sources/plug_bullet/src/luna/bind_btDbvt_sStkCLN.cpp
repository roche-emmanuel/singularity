#include <plug_common.h>

class luna_wrapper_btDbvt_sStkCLN {
public:
	typedef Luna< btDbvt::sStkCLN > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12660308) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::sStkCLN*)");
		}

		btDbvt::sStkCLN* rhs =(Luna< btDbvt::sStkCLN >::check(L,2));
		btDbvt::sStkCLN* self=(Luna< btDbvt::sStkCLN >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btDbvt::sStkCLN* self=(Luna< btDbvt::sStkCLN >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::sStkCLN");
		
		return luna_dynamicCast(L,converters,"btDbvt::sStkCLN",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::sStkCLN::sStkCLN(const btDbvtNode * n, btDbvtNode * p)
	static btDbvt::sStkCLN* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::sStkCLN::sStkCLN(const btDbvtNode * n, btDbvtNode * p) function, expected prototype:\nbtDbvt::sStkCLN::sStkCLN(const btDbvtNode * n, btDbvtNode * p)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\n");
		}

		const btDbvtNode* n=(Luna< btDbvtNode >::check(L,1));
		btDbvtNode* p=(Luna< btDbvtNode >::check(L,2));

		return new btDbvt::sStkCLN(n, p);
	}


	// Function binds:
	// const btDbvtNode * btDbvt::sStkCLN::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDbvtNode * btDbvt::sStkCLN::node() function, expected prototype:\nconst btDbvtNode * btDbvt::sStkCLN::node()\nClass arguments details:\n");
		}


		btDbvt::sStkCLN* self=(Luna< btDbvt::sStkCLN >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDbvtNode * btDbvt::sStkCLN::node(). Got : '%s'",typeid(Luna< btDbvt::sStkCLN >::check(L,1)).name());
		}
		const btDbvtNode * lret = self->node;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// btDbvtNode * btDbvt::sStkCLN::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvt::sStkCLN::parent() function, expected prototype:\nbtDbvtNode * btDbvt::sStkCLN::parent()\nClass arguments details:\n");
		}


		btDbvt::sStkCLN* self=(Luna< btDbvt::sStkCLN >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvt::sStkCLN::parent(). Got : '%s'",typeid(Luna< btDbvt::sStkCLN >::check(L,1)).name());
		}
		btDbvtNode * lret = self->parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// void btDbvt::sStkCLN::parent(btDbvtNode * value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::sStkCLN::parent(btDbvtNode * value) function, expected prototype:\nvoid btDbvt::sStkCLN::parent(btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btDbvt::sStkCLN* self=(Luna< btDbvt::sStkCLN >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::sStkCLN::parent(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt::sStkCLN >::check(L,1)).name());
		}
		self->parent = value;

		return 0;
	}


	// Operator binds:

};

btDbvt::sStkCLN* LunaTraits< btDbvt::sStkCLN >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_sStkCLN::_bind_ctor(L);
}

void LunaTraits< btDbvt::sStkCLN >::_bind_dtor(btDbvt::sStkCLN* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::sStkCLN >::className[] = "btDbvt_sStkCLN";
const char LunaTraits< btDbvt::sStkCLN >::fullName[] = "btDbvt::sStkCLN";
const char LunaTraits< btDbvt::sStkCLN >::moduleName[] = "btDbvt";
const char* LunaTraits< btDbvt::sStkCLN >::parents[] = {0};
const int LunaTraits< btDbvt::sStkCLN >::hash = 12660308;
const int LunaTraits< btDbvt::sStkCLN >::uniqueIDs[] = {12660308,0};

luna_RegType LunaTraits< btDbvt::sStkCLN >::methods[] = {
	{"getNode", &luna_wrapper_btDbvt_sStkCLN::_bind_getNode},
	{"getParent", &luna_wrapper_btDbvt_sStkCLN::_bind_getParent},
	{"setParent", &luna_wrapper_btDbvt_sStkCLN::_bind_setParent},
	{"dynCast", &luna_wrapper_btDbvt_sStkCLN::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_sStkCLN::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::sStkCLN >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::sStkCLN >::enumValues[] = {
	{0,0}
};


