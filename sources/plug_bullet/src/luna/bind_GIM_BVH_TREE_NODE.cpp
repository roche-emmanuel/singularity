#include <plug_common.h>

class luna_wrapper_GIM_BVH_TREE_NODE {
public:
	typedef Luna< GIM_BVH_TREE_NODE > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61018423) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_BVH_TREE_NODE*)");
		}

		GIM_BVH_TREE_NODE* rhs =(Luna< GIM_BVH_TREE_NODE >::check(L,2));
		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
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

		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_BVH_TREE_NODE");
		
		return luna_dynamicCast(L,converters,"GIM_BVH_TREE_NODE",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isLeafNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEscapeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_bound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_bound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GIM_BVH_TREE_NODE::GIM_BVH_TREE_NODE()
	static GIM_BVH_TREE_NODE* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GIM_BVH_TREE_NODE::GIM_BVH_TREE_NODE() function, expected prototype:\nGIM_BVH_TREE_NODE::GIM_BVH_TREE_NODE()\nClass arguments details:\n");
		}


		return new GIM_BVH_TREE_NODE();
	}


	// Function binds:
	// bool GIM_BVH_TREE_NODE::isLeafNode() const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool GIM_BVH_TREE_NODE::isLeafNode() const function, expected prototype:\nbool GIM_BVH_TREE_NODE::isLeafNode() const\nClass arguments details:\n");
		}


		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool GIM_BVH_TREE_NODE::isLeafNode() const. Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		bool lret = self->isLeafNode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int GIM_BVH_TREE_NODE::getEscapeIndex() const
	static int _bind_getEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_BVH_TREE_NODE::getEscapeIndex() const function, expected prototype:\nint GIM_BVH_TREE_NODE::getEscapeIndex() const\nClass arguments details:\n");
		}


		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_BVH_TREE_NODE::getEscapeIndex() const. Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		int lret = self->getEscapeIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_BVH_TREE_NODE::setEscapeIndex(int index)
	static int _bind_setEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_BVH_TREE_NODE::setEscapeIndex(int index) function, expected prototype:\nvoid GIM_BVH_TREE_NODE::setEscapeIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_BVH_TREE_NODE::setEscapeIndex(int). Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		self->setEscapeIndex(index);

		return 0;
	}

	// int GIM_BVH_TREE_NODE::getDataIndex() const
	static int _bind_getDataIndex(lua_State *L) {
		if (!_lg_typecheck_getDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int GIM_BVH_TREE_NODE::getDataIndex() const function, expected prototype:\nint GIM_BVH_TREE_NODE::getDataIndex() const\nClass arguments details:\n");
		}


		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int GIM_BVH_TREE_NODE::getDataIndex() const. Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		int lret = self->getDataIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_BVH_TREE_NODE::setDataIndex(int index)
	static int _bind_setDataIndex(lua_State *L) {
		if (!_lg_typecheck_setDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_BVH_TREE_NODE::setDataIndex(int index) function, expected prototype:\nvoid GIM_BVH_TREE_NODE::setDataIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_BVH_TREE_NODE::setDataIndex(int). Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		self->setDataIndex(index);

		return 0;
	}

	// btAABB GIM_BVH_TREE_NODE::m_bound()
	static int _bind_getM_bound(lua_State *L) {
		if (!_lg_typecheck_getM_bound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB GIM_BVH_TREE_NODE::m_bound() function, expected prototype:\nbtAABB GIM_BVH_TREE_NODE::m_bound()\nClass arguments details:\n");
		}


		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAABB GIM_BVH_TREE_NODE::m_bound(). Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		const btAABB* lret = &self->m_bound;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,false);

		return 1;
	}

	// void GIM_BVH_TREE_NODE::m_bound(btAABB value)
	static int _bind_setM_bound(lua_State *L) {
		if (!_lg_typecheck_setM_bound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void GIM_BVH_TREE_NODE::m_bound(btAABB value) function, expected prototype:\nvoid GIM_BVH_TREE_NODE::m_bound(btAABB value)\nClass arguments details:\narg 1 ID = 14786052\n");
		}

		btAABB* value_ptr=(Luna< btAABB >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_BVH_TREE_NODE::m_bound function");
		}
		btAABB value=*value_ptr;

		GIM_BVH_TREE_NODE* self=(Luna< GIM_BVH_TREE_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void GIM_BVH_TREE_NODE::m_bound(btAABB). Got : '%s'",typeid(Luna< GIM_BVH_TREE_NODE >::check(L,1)).name());
		}
		self->m_bound = value;

		return 0;
	}


	// Operator binds:

};

GIM_BVH_TREE_NODE* LunaTraits< GIM_BVH_TREE_NODE >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GIM_BVH_TREE_NODE::_bind_ctor(L);
}

void LunaTraits< GIM_BVH_TREE_NODE >::_bind_dtor(GIM_BVH_TREE_NODE* obj) {
	delete obj;
}

const char LunaTraits< GIM_BVH_TREE_NODE >::className[] = "GIM_BVH_TREE_NODE";
const char LunaTraits< GIM_BVH_TREE_NODE >::fullName[] = "GIM_BVH_TREE_NODE";
const char LunaTraits< GIM_BVH_TREE_NODE >::moduleName[] = "bullet";
const char* LunaTraits< GIM_BVH_TREE_NODE >::parents[] = {0};
const int LunaTraits< GIM_BVH_TREE_NODE >::hash = 61018423;
const int LunaTraits< GIM_BVH_TREE_NODE >::uniqueIDs[] = {61018423,0};

luna_RegType LunaTraits< GIM_BVH_TREE_NODE >::methods[] = {
	{"isLeafNode", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_isLeafNode},
	{"getEscapeIndex", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_getEscapeIndex},
	{"setEscapeIndex", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_setEscapeIndex},
	{"getDataIndex", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_getDataIndex},
	{"setDataIndex", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_setDataIndex},
	{"getM_bound", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_getM_bound},
	{"setM_bound", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_setM_bound},
	{"dynCast", &luna_wrapper_GIM_BVH_TREE_NODE::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_BVH_TREE_NODE::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_BVH_TREE_NODE >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_BVH_TREE_NODE >::enumValues[] = {
	{0,0}
};


