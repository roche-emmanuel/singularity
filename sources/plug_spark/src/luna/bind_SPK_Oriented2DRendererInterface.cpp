#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Oriented2DRendererInterface.h>

class luna_wrapper_SPK_Oriented2DRendererInterface {
public:
	typedef Luna< SPK::Oriented2DRendererInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Oriented2DRendererInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11888444) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Oriented2DRendererInterface*)");
		}

		SPK::Oriented2DRendererInterface* rhs =(Luna< SPK::Oriented2DRendererInterface >::check(L,2));
		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
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

		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Oriented2DRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::Oriented2DRendererInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrientationVector(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrientationVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Oriented2DRendererInterface::Oriented2DRendererInterface()
	static SPK::Oriented2DRendererInterface* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Oriented2DRendererInterface::Oriented2DRendererInterface() function, expected prototype:\nSPK::Oriented2DRendererInterface::Oriented2DRendererInterface()\nClass arguments details:\n");
		}


		return new SPK::Oriented2DRendererInterface();
	}

	// SPK::Oriented2DRendererInterface::Oriented2DRendererInterface(lua_Table * data)
	static SPK::Oriented2DRendererInterface* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Oriented2DRendererInterface::Oriented2DRendererInterface(lua_Table * data) function, expected prototype:\nSPK::Oriented2DRendererInterface::Oriented2DRendererInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Oriented2DRendererInterface(L,NULL);
	}

	// Overload binder for SPK::Oriented2DRendererInterface::Oriented2DRendererInterface
	static SPK::Oriented2DRendererInterface* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Oriented2DRendererInterface, cannot match any of the overloads for function Oriented2DRendererInterface:\n  Oriented2DRendererInterface()\n  Oriented2DRendererInterface(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void SPK::Oriented2DRendererInterface::setOrientation(SPK::Orientation2D orientation)
	static int _bind_setOrientation(lua_State *L) {
		if (!_lg_typecheck_setOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::setOrientation(SPK::Orientation2D orientation) function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::setOrientation(SPK::Orientation2D orientation)\nClass arguments details:\n");
		}

		SPK::Orientation2D orientation=(SPK::Orientation2D)lua_tointeger(L,2);

		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::setOrientation(SPK::Orientation2D). Got : '%s'",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name());
		}
		self->setOrientation(orientation);

		return 0;
	}

	// SPK::Orientation2D SPK::Oriented2DRendererInterface::getOrientation() const
	static int _bind_getOrientation(lua_State *L) {
		if (!_lg_typecheck_getOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Orientation2D SPK::Oriented2DRendererInterface::getOrientation() const function, expected prototype:\nSPK::Orientation2D SPK::Oriented2DRendererInterface::getOrientation() const\nClass arguments details:\n");
		}


		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Orientation2D SPK::Oriented2DRendererInterface::getOrientation() const. Got : '%s'",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name());
		}
		SPK::Orientation2D lret = self->getOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Vector3D SPK::Oriented2DRendererInterface::orientationVector()
	static int _bind_getOrientationVector(lua_State *L) {
		if (!_lg_typecheck_getOrientationVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Oriented2DRendererInterface::orientationVector() function, expected prototype:\nSPK::Vector3D SPK::Oriented2DRendererInterface::orientationVector()\nClass arguments details:\n");
		}


		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Oriented2DRendererInterface::orientationVector(). Got : '%s'",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->orientationVector;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void SPK::Oriented2DRendererInterface::orientationVector(SPK::Vector3D value)
	static int _bind_setOrientationVector(lua_State *L) {
		if (!_lg_typecheck_setOrientationVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Oriented2DRendererInterface::orientationVector(SPK::Vector3D value) function, expected prototype:\nvoid SPK::Oriented2DRendererInterface::orientationVector(SPK::Vector3D value)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* value_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SPK::Oriented2DRendererInterface::orientationVector function");
		}
		SPK::Vector3D value=*value_ptr;

		SPK::Oriented2DRendererInterface* self=(Luna< SPK::Oriented2DRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Oriented2DRendererInterface::orientationVector(SPK::Vector3D). Got : '%s'",typeid(Luna< SPK::Oriented2DRendererInterface >::check(L,1)).name());
		}
		self->orientationVector = value;

		return 0;
	}


	// Operator binds:

};

SPK::Oriented2DRendererInterface* LunaTraits< SPK::Oriented2DRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Oriented2DRendererInterface::_bind_ctor(L);
}

void LunaTraits< SPK::Oriented2DRendererInterface >::_bind_dtor(SPK::Oriented2DRendererInterface* obj) {
	delete obj;
}

const char LunaTraits< SPK::Oriented2DRendererInterface >::className[] = "Oriented2DRendererInterface";
const char LunaTraits< SPK::Oriented2DRendererInterface >::fullName[] = "SPK::Oriented2DRendererInterface";
const char LunaTraits< SPK::Oriented2DRendererInterface >::moduleName[] = "spark";
const char* LunaTraits< SPK::Oriented2DRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::Oriented2DRendererInterface >::hash = 11888444;
const int LunaTraits< SPK::Oriented2DRendererInterface >::uniqueIDs[] = {11888444,0};

luna_RegType LunaTraits< SPK::Oriented2DRendererInterface >::methods[] = {
	{"setOrientation", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_setOrientation},
	{"getOrientation", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_getOrientation},
	{"getOrientationVector", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_getOrientationVector},
	{"setOrientationVector", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_setOrientationVector},
	{"dynCast", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Oriented2DRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Oriented2DRendererInterface >::enumValues[] = {
	{0,0}
};


