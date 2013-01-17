#include <plug_common.h>

class luna_wrapper_btDbvtNode {
public:
	typedef Luna< btDbvtNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91335778) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvtNode*)");
		}

		btDbvtNode* rhs =(Luna< btDbvtNode >::check(L,2));
		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
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

		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvtNode");
		
		return luna_dynamicCast(L,converters,"btDbvtNode",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_isleaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isinternal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataAsInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDataAsInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool btDbvtNode::isleaf() const
	static int _bind_isleaf(lua_State *L) {
		if (!_lg_typecheck_isleaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvtNode::isleaf() const function, expected prototype:\nbool btDbvtNode::isleaf() const\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvtNode::isleaf() const. Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		bool lret = self->isleaf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvtNode::isinternal() const
	static int _bind_isinternal(lua_State *L) {
		if (!_lg_typecheck_isinternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvtNode::isinternal() const function, expected prototype:\nbool btDbvtNode::isinternal() const\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvtNode::isinternal() const. Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		bool lret = self->isinternal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btDbvtAabbMm btDbvtNode::volume()
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtAabbMm btDbvtNode::volume() function, expected prototype:\nbtDbvtAabbMm btDbvtNode::volume()\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtAabbMm btDbvtNode::volume(). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		const btDbvtAabbMm* lret = &self->volume;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtAabbMm >::push(L,lret,false);

		return 1;
	}

	// btDbvtNode * btDbvtNode::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvtNode::parent() function, expected prototype:\nbtDbvtNode * btDbvtNode::parent()\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvtNode::parent(). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		btDbvtNode * lret = self->parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// void * btDbvtNode::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDbvtNode::data() function, expected prototype:\nvoid * btDbvtNode::data()\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDbvtNode::data(). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		void * lret = self->data;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int btDbvtNode::dataAsInt()
	static int _bind_getDataAsInt(lua_State *L) {
		if (!_lg_typecheck_getDataAsInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvtNode::dataAsInt() function, expected prototype:\nint btDbvtNode::dataAsInt()\nClass arguments details:\n");
		}


		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvtNode::dataAsInt(). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		int lret = self->dataAsInt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDbvtNode::volume(btDbvtAabbMm value)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtNode::volume(btDbvtAabbMm value) function, expected prototype:\nvoid btDbvtNode::volume(btDbvtAabbMm value)\nClass arguments details:\narg 1 ID = 88504824\n");
		}

		btDbvtAabbMm* value_ptr=(Luna< btDbvtAabbMm >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDbvtNode::volume function");
		}
		btDbvtAabbMm value=*value_ptr;

		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtNode::volume(btDbvtAabbMm). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		self->volume = value;

		return 0;
	}

	// void btDbvtNode::parent(btDbvtNode * value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtNode::parent(btDbvtNode * value) function, expected prototype:\nvoid btDbvtNode::parent(btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtNode::parent(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		self->parent = value;

		return 0;
	}

	// void btDbvtNode::data(void * value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtNode::data(void * value) function, expected prototype:\nvoid btDbvtNode::data(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtNode::data(void *). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		self->data = value;

		return 0;
	}

	// void btDbvtNode::dataAsInt(int value)
	static int _bind_setDataAsInt(lua_State *L) {
		if (!_lg_typecheck_setDataAsInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvtNode::dataAsInt(int value) function, expected prototype:\nvoid btDbvtNode::dataAsInt(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvtNode* self=(Luna< btDbvtNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvtNode::dataAsInt(int). Got : '%s'",typeid(Luna< btDbvtNode >::check(L,1)).name());
		}
		self->dataAsInt = value;

		return 0;
	}


	// Operator binds:

};

btDbvtNode* LunaTraits< btDbvtNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btDbvtNode >::_bind_dtor(btDbvtNode* obj) {
	delete obj;
}

const char LunaTraits< btDbvtNode >::className[] = "btDbvtNode";
const char LunaTraits< btDbvtNode >::fullName[] = "btDbvtNode";
const char LunaTraits< btDbvtNode >::moduleName[] = "bullet";
const char* LunaTraits< btDbvtNode >::parents[] = {0};
const int LunaTraits< btDbvtNode >::hash = 91335778;
const int LunaTraits< btDbvtNode >::uniqueIDs[] = {91335778,0};

luna_RegType LunaTraits< btDbvtNode >::methods[] = {
	{"isleaf", &luna_wrapper_btDbvtNode::_bind_isleaf},
	{"isinternal", &luna_wrapper_btDbvtNode::_bind_isinternal},
	{"getVolume", &luna_wrapper_btDbvtNode::_bind_getVolume},
	{"getParent", &luna_wrapper_btDbvtNode::_bind_getParent},
	{"getData", &luna_wrapper_btDbvtNode::_bind_getData},
	{"getDataAsInt", &luna_wrapper_btDbvtNode::_bind_getDataAsInt},
	{"setVolume", &luna_wrapper_btDbvtNode::_bind_setVolume},
	{"setParent", &luna_wrapper_btDbvtNode::_bind_setParent},
	{"setData", &luna_wrapper_btDbvtNode::_bind_setData},
	{"setDataAsInt", &luna_wrapper_btDbvtNode::_bind_setDataAsInt},
	{"dynCast", &luna_wrapper_btDbvtNode::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvtNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvtNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvtNode >::enumValues[] = {
	{0,0}
};


