#include <plug_common.h>

class luna_wrapper_BT_QUANTIZED_BVH_NODE {
public:
	typedef Luna< BT_QUANTIZED_BVH_NODE > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72681009) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(BT_QUANTIZED_BVH_NODE*)");
		}

		BT_QUANTIZED_BVH_NODE* rhs =(Luna< BT_QUANTIZED_BVH_NODE >::check(L,2));
		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		BT_QUANTIZED_BVH_NODE* self= (BT_QUANTIZED_BVH_NODE*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< BT_QUANTIZED_BVH_NODE >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72681009) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("BT_QUANTIZED_BVH_NODE");
		
		return luna_dynamicCast(L,converters,"BT_QUANTIZED_BVH_NODE",name);
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

	inline static bool _lg_typecheck_testQuantizedBoxOverlapp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEscapeIndexOrDataIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEscapeIndexOrDataIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// BT_QUANTIZED_BVH_NODE::BT_QUANTIZED_BVH_NODE()
	static BT_QUANTIZED_BVH_NODE* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BT_QUANTIZED_BVH_NODE::BT_QUANTIZED_BVH_NODE() function, expected prototype:\nBT_QUANTIZED_BVH_NODE::BT_QUANTIZED_BVH_NODE()\nClass arguments details:\n");
		}


		return new BT_QUANTIZED_BVH_NODE();
	}


	// Function binds:
	// bool BT_QUANTIZED_BVH_NODE::isLeafNode() const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool BT_QUANTIZED_BVH_NODE::isLeafNode() const function, expected prototype:\nbool BT_QUANTIZED_BVH_NODE::isLeafNode() const\nClass arguments details:\n");
		}


		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool BT_QUANTIZED_BVH_NODE::isLeafNode() const. Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		bool lret = self->isLeafNode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int BT_QUANTIZED_BVH_NODE::getEscapeIndex() const
	static int _bind_getEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int BT_QUANTIZED_BVH_NODE::getEscapeIndex() const function, expected prototype:\nint BT_QUANTIZED_BVH_NODE::getEscapeIndex() const\nClass arguments details:\n");
		}


		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int BT_QUANTIZED_BVH_NODE::getEscapeIndex() const. Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		int lret = self->getEscapeIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void BT_QUANTIZED_BVH_NODE::setEscapeIndex(int index)
	static int _bind_setEscapeIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_QUANTIZED_BVH_NODE::setEscapeIndex(int index) function, expected prototype:\nvoid BT_QUANTIZED_BVH_NODE::setEscapeIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_QUANTIZED_BVH_NODE::setEscapeIndex(int). Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		self->setEscapeIndex(index);

		return 0;
	}

	// int BT_QUANTIZED_BVH_NODE::getDataIndex() const
	static int _bind_getDataIndex(lua_State *L) {
		if (!_lg_typecheck_getDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int BT_QUANTIZED_BVH_NODE::getDataIndex() const function, expected prototype:\nint BT_QUANTIZED_BVH_NODE::getDataIndex() const\nClass arguments details:\n");
		}


		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int BT_QUANTIZED_BVH_NODE::getDataIndex() const. Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		int lret = self->getDataIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void BT_QUANTIZED_BVH_NODE::setDataIndex(int index)
	static int _bind_setDataIndex(lua_State *L) {
		if (!_lg_typecheck_setDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_QUANTIZED_BVH_NODE::setDataIndex(int index) function, expected prototype:\nvoid BT_QUANTIZED_BVH_NODE::setDataIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_QUANTIZED_BVH_NODE::setDataIndex(int). Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		self->setDataIndex(index);

		return 0;
	}

	// bool BT_QUANTIZED_BVH_NODE::testQuantizedBoxOverlapp(unsigned short * quantizedMin, unsigned short * quantizedMax) const
	static int _bind_testQuantizedBoxOverlapp(lua_State *L) {
		if (!_lg_typecheck_testQuantizedBoxOverlapp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool BT_QUANTIZED_BVH_NODE::testQuantizedBoxOverlapp(unsigned short * quantizedMin, unsigned short * quantizedMax) const function, expected prototype:\nbool BT_QUANTIZED_BVH_NODE::testQuantizedBoxOverlapp(unsigned short * quantizedMin, unsigned short * quantizedMax) const\nClass arguments details:\n");
		}

		unsigned short* quantizedMin=(unsigned short*)Luna< void >::check(L,2);
		unsigned short* quantizedMax=(unsigned short*)Luna< void >::check(L,3);

		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool BT_QUANTIZED_BVH_NODE::testQuantizedBoxOverlapp(unsigned short *, unsigned short *) const. Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		bool lret = self->testQuantizedBoxOverlapp(quantizedMin, quantizedMax);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex()
	static int _bind_getEscapeIndexOrDataIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeIndexOrDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex() function, expected prototype:\nint BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex()\nClass arguments details:\n");
		}


		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex(). Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		int lret = self->m_escapeIndexOrDataIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex(int value)
	static int _bind_setEscapeIndexOrDataIndex(lua_State *L) {
		if (!_lg_typecheck_setEscapeIndexOrDataIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex(int value) function, expected prototype:\nvoid BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		BT_QUANTIZED_BVH_NODE* self=(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void BT_QUANTIZED_BVH_NODE::m_escapeIndexOrDataIndex(int). Got : '%s'",typeid(Luna< BT_QUANTIZED_BVH_NODE >::check(L,1)).name());
		}
		self->m_escapeIndexOrDataIndex = value;

		return 0;
	}


	// Operator binds:

};

BT_QUANTIZED_BVH_NODE* LunaTraits< BT_QUANTIZED_BVH_NODE >::_bind_ctor(lua_State *L) {
	return luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_ctor(L);
}

void LunaTraits< BT_QUANTIZED_BVH_NODE >::_bind_dtor(BT_QUANTIZED_BVH_NODE* obj) {
	delete obj;
}

const char LunaTraits< BT_QUANTIZED_BVH_NODE >::className[] = "BT_QUANTIZED_BVH_NODE";
const char LunaTraits< BT_QUANTIZED_BVH_NODE >::fullName[] = "BT_QUANTIZED_BVH_NODE";
const char LunaTraits< BT_QUANTIZED_BVH_NODE >::moduleName[] = "bullet";
const char* LunaTraits< BT_QUANTIZED_BVH_NODE >::parents[] = {0};
const int LunaTraits< BT_QUANTIZED_BVH_NODE >::hash = 72681009;
const int LunaTraits< BT_QUANTIZED_BVH_NODE >::uniqueIDs[] = {72681009,0};

luna_RegType LunaTraits< BT_QUANTIZED_BVH_NODE >::methods[] = {
	{"isLeafNode", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_isLeafNode},
	{"getEscapeIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_getEscapeIndex},
	{"setEscapeIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_setEscapeIndex},
	{"getDataIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_getDataIndex},
	{"setDataIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_setDataIndex},
	{"testQuantizedBoxOverlapp", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_testQuantizedBoxOverlapp},
	{"getEscapeIndexOrDataIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_getEscapeIndexOrDataIndex},
	{"setEscapeIndexOrDataIndex", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_setEscapeIndexOrDataIndex},
	{"dynCast", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_dynCast},
	{"__eq", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind___eq},
	{"fromVoid", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_fromVoid},
	{"asVoid", &luna_wrapper_BT_QUANTIZED_BVH_NODE::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< BT_QUANTIZED_BVH_NODE >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< BT_QUANTIZED_BVH_NODE >::enumValues[] = {
	{0,0}
};


