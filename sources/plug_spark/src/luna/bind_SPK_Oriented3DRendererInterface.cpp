#include <plug_common.h>

class luna_wrapper_SPK_Oriented3DRendererInterface {
public:
	typedef Luna< SPK::Oriented3DRendererInterface > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95637678) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Oriented3DRendererInterface*)");
		}

		SPK::Oriented3DRendererInterface* rhs =(Luna< SPK::Oriented3DRendererInterface >::check(L,2));
		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
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

		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Oriented3DRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::Oriented3DRendererInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setOrientation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrientation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLookOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLockedAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Oriented3DRendererInterface::Oriented3DRendererInterface()
	static SPK::Oriented3DRendererInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Oriented3DRendererInterface::Oriented3DRendererInterface() function, expected prototype:\nSPK::Oriented3DRendererInterface::Oriented3DRendererInterface()\nClass arguments details:\n");
		}


		return new SPK::Oriented3DRendererInterface();
	}


	// Function binds:
	// void SPK::Oriented3DRendererInterface::setOrientation(SPK::LookOrientation lookOrientation, SPK::UpOrientation upOrientation, SPK::LockedAxis lockedAxis)
	static int _bind_setOrientation_overload_1(lua_State *L) {
		if (!_lg_typecheck_setOrientation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::setOrientation(SPK::LookOrientation lookOrientation, SPK::UpOrientation upOrientation, SPK::LockedAxis lockedAxis) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::setOrientation(SPK::LookOrientation lookOrientation, SPK::UpOrientation upOrientation, SPK::LockedAxis lockedAxis)\nClass arguments details:\n");
		}

		SPK::LookOrientation lookOrientation=(SPK::LookOrientation)lua_tointeger(L,2);
		SPK::UpOrientation upOrientation=(SPK::UpOrientation)lua_tointeger(L,3);
		SPK::LockedAxis lockedAxis=(SPK::LockedAxis)lua_tointeger(L,4);

		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::setOrientation(SPK::LookOrientation, SPK::UpOrientation, SPK::LockedAxis)");
		}
		self->setOrientation(lookOrientation, upOrientation, lockedAxis);

		return 0;
	}

	// void SPK::Oriented3DRendererInterface::setOrientation(SPK::OrientationPreset orientation)
	static int _bind_setOrientation_overload_2(lua_State *L) {
		if (!_lg_typecheck_setOrientation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented3DRendererInterface::setOrientation(SPK::OrientationPreset orientation) function, expected prototype:\nvoid SPK::Oriented3DRendererInterface::setOrientation(SPK::OrientationPreset orientation)\nClass arguments details:\n");
		}

		SPK::OrientationPreset orientation=(SPK::OrientationPreset)lua_tointeger(L,2);

		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented3DRendererInterface::setOrientation(SPK::OrientationPreset)");
		}
		self->setOrientation(orientation);

		return 0;
	}

	// Overload binder for SPK::Oriented3DRendererInterface::setOrientation
	static int _bind_setOrientation(lua_State *L) {
		if (_lg_typecheck_setOrientation_overload_1(L)) return _bind_setOrientation_overload_1(L);
		if (_lg_typecheck_setOrientation_overload_2(L)) return _bind_setOrientation_overload_2(L);

		luaL_error(L, "error in function setOrientation, cannot match any of the overloads for function setOrientation:\n  setOrientation(SPK::LookOrientation, SPK::UpOrientation, SPK::LockedAxis)\n  setOrientation(SPK::OrientationPreset)\n");
		return 0;
	}

	// SPK::LookOrientation SPK::Oriented3DRendererInterface::getLookOrientation() const
	static int _bind_getLookOrientation(lua_State *L) {
		if (!_lg_typecheck_getLookOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::LookOrientation SPK::Oriented3DRendererInterface::getLookOrientation() const function, expected prototype:\nSPK::LookOrientation SPK::Oriented3DRendererInterface::getLookOrientation() const\nClass arguments details:\n");
		}


		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::LookOrientation SPK::Oriented3DRendererInterface::getLookOrientation() const");
		}
		SPK::LookOrientation lret = self->getLookOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::UpOrientation SPK::Oriented3DRendererInterface::getUpOrientation() const
	static int _bind_getUpOrientation(lua_State *L) {
		if (!_lg_typecheck_getUpOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::UpOrientation SPK::Oriented3DRendererInterface::getUpOrientation() const function, expected prototype:\nSPK::UpOrientation SPK::Oriented3DRendererInterface::getUpOrientation() const\nClass arguments details:\n");
		}


		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::UpOrientation SPK::Oriented3DRendererInterface::getUpOrientation() const");
		}
		SPK::UpOrientation lret = self->getUpOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::LockedAxis SPK::Oriented3DRendererInterface::getLockedAxis() const
	static int _bind_getLockedAxis(lua_State *L) {
		if (!_lg_typecheck_getLockedAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::LockedAxis SPK::Oriented3DRendererInterface::getLockedAxis() const function, expected prototype:\nSPK::LockedAxis SPK::Oriented3DRendererInterface::getLockedAxis() const\nClass arguments details:\n");
		}


		SPK::Oriented3DRendererInterface* self=(Luna< SPK::Oriented3DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::LockedAxis SPK::Oriented3DRendererInterface::getLockedAxis() const");
		}
		SPK::LockedAxis lret = self->getLockedAxis();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

SPK::Oriented3DRendererInterface* LunaTraits< SPK::Oriented3DRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Oriented3DRendererInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::Oriented3DRendererInterface >::_bind_dtor(SPK::Oriented3DRendererInterface* obj) {
	delete obj;
}

const char LunaTraits< SPK::Oriented3DRendererInterface >::className[] = "Oriented3DRendererInterface";
const char LunaTraits< SPK::Oriented3DRendererInterface >::fullName[] = "SPK::Oriented3DRendererInterface";
const char LunaTraits< SPK::Oriented3DRendererInterface >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Oriented3DRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::Oriented3DRendererInterface >::hash = 95637678;
const int LunaTraits< SPK::Oriented3DRendererInterface >::uniqueIDs[] = {95637678,0};

luna_RegType LunaTraits< SPK::Oriented3DRendererInterface >::methods[] = {
	{"setOrientation", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_setOrientation},
	{"getLookOrientation", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_getLookOrientation},
	{"getUpOrientation", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_getUpOrientation},
	{"getLockedAxis", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_getLockedAxis},
	{"dynCast", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Oriented3DRendererInterface::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Oriented3DRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Oriented3DRendererInterface >::enumValues[] = {
	{0,0}
};

