#include <plug_common.h>

class luna_wrapper_SPK_Oriented2DRendererInterface {
public:
	typedef Luna< SPK::Oriented2DRendererInterface > luna_t;

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
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Oriented2DRendererInterface::Oriented2DRendererInterface()
	static SPK::Oriented2DRendererInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Oriented2DRendererInterface::Oriented2DRendererInterface() function, expected prototype:\nSPK::Oriented2DRendererInterface::Oriented2DRendererInterface()\nClass arguments details:\n");
		}


		return new SPK::Oriented2DRendererInterface();
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


	// Operator binds:

};

SPK::Oriented2DRendererInterface* LunaTraits< SPK::Oriented2DRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Oriented2DRendererInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"dynCast", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Oriented2DRendererInterface::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Oriented2DRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Oriented2DRendererInterface >::enumValues[] = {
	{0,0}
};


