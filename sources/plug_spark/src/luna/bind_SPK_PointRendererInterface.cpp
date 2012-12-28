#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_PointRendererInterface.h>

class luna_wrapper_SPK_PointRendererInterface {
public:
	typedef Luna< SPK::PointRendererInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24217931) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::PointRendererInterface*)");
		}

		SPK::PointRendererInterface* rhs =(Luna< SPK::PointRendererInterface >::check(L,2));
		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
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

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::PointRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::PointRendererInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::PointRendererInterface::PointRendererInterface(SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f)
	static SPK::PointRendererInterface* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::PointRendererInterface::PointRendererInterface(SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f) function, expected prototype:\nSPK::PointRendererInterface::PointRendererInterface(SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		SPK::PointType type=luatop>0 ? (SPK::PointType)lua_tointeger(L,1) : SPK::POINT_SQUARE;
		float size=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		return new SPK::PointRendererInterface(type, size);
	}

	// SPK::PointRendererInterface::PointRendererInterface(lua_Table * data, SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f)
	static SPK::PointRendererInterface* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::PointRendererInterface::PointRendererInterface(lua_Table * data, SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f) function, expected prototype:\nSPK::PointRendererInterface::PointRendererInterface(lua_Table * data, SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		SPK::PointType type=luatop>1 ? (SPK::PointType)lua_tointeger(L,2) : SPK::POINT_SQUARE;
		float size=luatop>2 ? (float)lua_tonumber(L,3) : 1.0f;

		return new wrapper_SPK_PointRendererInterface(L,NULL, type, size);
	}

	// Overload binder for SPK::PointRendererInterface::PointRendererInterface
	static SPK::PointRendererInterface* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PointRendererInterface, cannot match any of the overloads for function PointRendererInterface:\n  PointRendererInterface(SPK::PointType, float)\n  PointRendererInterface(lua_Table *, SPK::PointType, float)\n");
		return NULL;
	}


	// Function binds:
	// bool SPK::PointRendererInterface::setType(SPK::PointType type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::PointRendererInterface::setType(SPK::PointType type) function, expected prototype:\nbool SPK::PointRendererInterface::setType(SPK::PointType type)\nClass arguments details:\n");
		}

		SPK::PointType type=(SPK::PointType)lua_tointeger(L,2);

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::PointRendererInterface::setType(SPK::PointType)");
		}
		bool lret = self->setType(type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::PointRendererInterface::setSize(float size)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::PointRendererInterface::setSize(float size) function, expected prototype:\nvoid SPK::PointRendererInterface::setSize(float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,2);

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::PointRendererInterface::setSize(float)");
		}
		self->setSize(size);

		return 0;
	}

	// SPK::PointType SPK::PointRendererInterface::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::PointType SPK::PointRendererInterface::getType() const function, expected prototype:\nSPK::PointType SPK::PointRendererInterface::getType() const\nClass arguments details:\n");
		}


		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::PointType SPK::PointRendererInterface::getType() const");
		}
		SPK::PointType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::PointRendererInterface::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::PointRendererInterface::getSize() const function, expected prototype:\nfloat SPK::PointRendererInterface::getSize() const\nClass arguments details:\n");
		}


		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::PointRendererInterface::getSize() const");
		}
		float lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::PointRendererInterface::base_setType(SPK::PointType type)
	static int _bind_base_setType(lua_State *L) {
		if (!_lg_typecheck_base_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::PointRendererInterface::base_setType(SPK::PointType type) function, expected prototype:\nbool SPK::PointRendererInterface::base_setType(SPK::PointType type)\nClass arguments details:\n");
		}

		SPK::PointType type=(SPK::PointType)lua_tointeger(L,2);

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::PointRendererInterface::base_setType(SPK::PointType)");
		}
		bool lret = self->PointRendererInterface::setType(type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::PointRendererInterface::base_setSize(float size)
	static int _bind_base_setSize(lua_State *L) {
		if (!_lg_typecheck_base_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::PointRendererInterface::base_setSize(float size) function, expected prototype:\nvoid SPK::PointRendererInterface::base_setSize(float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,2);

		SPK::PointRendererInterface* self=(Luna< SPK::PointRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::PointRendererInterface::base_setSize(float)");
		}
		self->PointRendererInterface::setSize(size);

		return 0;
	}


	// Operator binds:

};

SPK::PointRendererInterface* LunaTraits< SPK::PointRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_PointRendererInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::PointRendererInterface >::_bind_dtor(SPK::PointRendererInterface* obj) {
	delete obj;
}

const char LunaTraits< SPK::PointRendererInterface >::className[] = "PointRendererInterface";
const char LunaTraits< SPK::PointRendererInterface >::fullName[] = "SPK::PointRendererInterface";
const char LunaTraits< SPK::PointRendererInterface >::moduleName[] = "SPK";
const char* LunaTraits< SPK::PointRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::PointRendererInterface >::hash = 24217931;
const int LunaTraits< SPK::PointRendererInterface >::uniqueIDs[] = {24217931,0};

luna_RegType LunaTraits< SPK::PointRendererInterface >::methods[] = {
	{"setType", &luna_wrapper_SPK_PointRendererInterface::_bind_setType},
	{"setSize", &luna_wrapper_SPK_PointRendererInterface::_bind_setSize},
	{"getType", &luna_wrapper_SPK_PointRendererInterface::_bind_getType},
	{"getSize", &luna_wrapper_SPK_PointRendererInterface::_bind_getSize},
	{"base_setType", &luna_wrapper_SPK_PointRendererInterface::_bind_base_setType},
	{"base_setSize", &luna_wrapper_SPK_PointRendererInterface::_bind_base_setSize},
	{"dynCast", &luna_wrapper_SPK_PointRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_PointRendererInterface::_bind___eq},
	{"getTable", &luna_wrapper_SPK_PointRendererInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::PointRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::PointRendererInterface >::enumValues[] = {
	{0,0}
};


