#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_QuadRendererInterface.h>

class luna_wrapper_SPK_QuadRendererInterface {
public:
	typedef Luna< SPK::QuadRendererInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::QuadRendererInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74399712) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::QuadRendererInterface*)");
		}

		SPK::QuadRendererInterface* rhs =(Luna< SPK::QuadRendererInterface >::check(L,2));
		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		SPK::QuadRendererInterface* self= (SPK::QuadRendererInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::QuadRendererInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74399712) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::QuadRendererInterface >::check(L,1));
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

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::QuadRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::QuadRendererInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAtlasDimensions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAtlasDimensionX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAtlasDimensionY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaleX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaleY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTexturingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::QuadRendererInterface::QuadRendererInterface(float scaleX = 1.0f, float scaleY = 1.0f)
	static SPK::QuadRendererInterface* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::QuadRendererInterface::QuadRendererInterface(float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nSPK::QuadRendererInterface::QuadRendererInterface(float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>0 ? (float)lua_tonumber(L,1) : (float)1.0f;
		float scaleY=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		return new SPK::QuadRendererInterface(scaleX, scaleY);
	}

	// SPK::QuadRendererInterface::QuadRendererInterface(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)
	static SPK::QuadRendererInterface* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::QuadRendererInterface::QuadRendererInterface(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f) function, expected prototype:\nSPK::QuadRendererInterface::QuadRendererInterface(lua_Table * data, float scaleX = 1.0f, float scaleY = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float scaleX=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float scaleY=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_SPK_QuadRendererInterface(L,NULL, scaleX, scaleY);
	}

	// Overload binder for SPK::QuadRendererInterface::QuadRendererInterface
	static SPK::QuadRendererInterface* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function QuadRendererInterface, cannot match any of the overloads for function QuadRendererInterface:\n  QuadRendererInterface(float, float)\n  QuadRendererInterface(lua_Table *, float, float)\n");
		return NULL;
	}


	// Function binds:
	// bool SPK::QuadRendererInterface::setTexturingMode(SPK::TexturingMode mode)
	static int _bind_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_setTexturingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::QuadRendererInterface::setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool SPK::QuadRendererInterface::setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n");
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::QuadRendererInterface::setTexturingMode(SPK::TexturingMode). Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		bool lret = self->setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::QuadRendererInterface::setAtlasDimensions(size_t nbX, size_t nbY)
	static int _bind_setAtlasDimensions(lua_State *L) {
		if (!_lg_typecheck_setAtlasDimensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::QuadRendererInterface::setAtlasDimensions(size_t nbX, size_t nbY) function, expected prototype:\nvoid SPK::QuadRendererInterface::setAtlasDimensions(size_t nbX, size_t nbY)\nClass arguments details:\n");
		}

		size_t nbX=(size_t)lua_tointeger(L,2);
		size_t nbY=(size_t)lua_tointeger(L,3);

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::QuadRendererInterface::setAtlasDimensions(size_t, size_t). Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		self->setAtlasDimensions(nbX, nbY);

		return 0;
	}

	// void SPK::QuadRendererInterface::setScale(float scaleX, float scaleY)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::QuadRendererInterface::setScale(float scaleX, float scaleY) function, expected prototype:\nvoid SPK::QuadRendererInterface::setScale(float scaleX, float scaleY)\nClass arguments details:\n");
		}

		float scaleX=(float)lua_tonumber(L,2);
		float scaleY=(float)lua_tonumber(L,3);

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::QuadRendererInterface::setScale(float, float). Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		self->setScale(scaleX, scaleY);

		return 0;
	}

	// SPK::TexturingMode SPK::QuadRendererInterface::getTexturingMode() const
	static int _bind_getTexturingMode(lua_State *L) {
		if (!_lg_typecheck_getTexturingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::TexturingMode SPK::QuadRendererInterface::getTexturingMode() const function, expected prototype:\nSPK::TexturingMode SPK::QuadRendererInterface::getTexturingMode() const\nClass arguments details:\n");
		}


		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::TexturingMode SPK::QuadRendererInterface::getTexturingMode() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		SPK::TexturingMode lret = self->getTexturingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::QuadRendererInterface::getAtlasDimensionX() const
	static int _bind_getAtlasDimensionX(lua_State *L) {
		if (!_lg_typecheck_getAtlasDimensionX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::QuadRendererInterface::getAtlasDimensionX() const function, expected prototype:\nsize_t SPK::QuadRendererInterface::getAtlasDimensionX() const\nClass arguments details:\n");
		}


		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::QuadRendererInterface::getAtlasDimensionX() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		size_t lret = self->getAtlasDimensionX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::QuadRendererInterface::getAtlasDimensionY() const
	static int _bind_getAtlasDimensionY(lua_State *L) {
		if (!_lg_typecheck_getAtlasDimensionY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::QuadRendererInterface::getAtlasDimensionY() const function, expected prototype:\nsize_t SPK::QuadRendererInterface::getAtlasDimensionY() const\nClass arguments details:\n");
		}


		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::QuadRendererInterface::getAtlasDimensionY() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		size_t lret = self->getAtlasDimensionY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::getScaleX() const
	static int _bind_getScaleX(lua_State *L) {
		if (!_lg_typecheck_getScaleX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::getScaleX() const function, expected prototype:\nfloat SPK::QuadRendererInterface::getScaleX() const\nClass arguments details:\n");
		}


		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::getScaleX() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->getScaleX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::QuadRendererInterface::getScaleY() const
	static int _bind_getScaleY(lua_State *L) {
		if (!_lg_typecheck_getScaleY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::QuadRendererInterface::getScaleY() const function, expected prototype:\nfloat SPK::QuadRendererInterface::getScaleY() const\nClass arguments details:\n");
		}


		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::QuadRendererInterface::getScaleY() const. Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		float lret = self->getScaleY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::QuadRendererInterface::base_setTexturingMode(SPK::TexturingMode mode)
	static int _bind_base_setTexturingMode(lua_State *L) {
		if (!_lg_typecheck_base_setTexturingMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::QuadRendererInterface::base_setTexturingMode(SPK::TexturingMode mode) function, expected prototype:\nbool SPK::QuadRendererInterface::base_setTexturingMode(SPK::TexturingMode mode)\nClass arguments details:\n");
		}

		SPK::TexturingMode mode=(SPK::TexturingMode)lua_tointeger(L,2);

		SPK::QuadRendererInterface* self=(Luna< SPK::QuadRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::QuadRendererInterface::base_setTexturingMode(SPK::TexturingMode). Got : '%s'",typeid(Luna< SPK::QuadRendererInterface >::check(L,1)).name());
		}
		bool lret = self->QuadRendererInterface::setTexturingMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

SPK::QuadRendererInterface* LunaTraits< SPK::QuadRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_QuadRendererInterface::_bind_ctor(L);
}

void LunaTraits< SPK::QuadRendererInterface >::_bind_dtor(SPK::QuadRendererInterface* obj) {
	delete obj;
}

const char LunaTraits< SPK::QuadRendererInterface >::className[] = "QuadRendererInterface";
const char LunaTraits< SPK::QuadRendererInterface >::fullName[] = "SPK::QuadRendererInterface";
const char LunaTraits< SPK::QuadRendererInterface >::moduleName[] = "spark";
const char* LunaTraits< SPK::QuadRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::QuadRendererInterface >::hash = 74399712;
const int LunaTraits< SPK::QuadRendererInterface >::uniqueIDs[] = {74399712,0};

luna_RegType LunaTraits< SPK::QuadRendererInterface >::methods[] = {
	{"setTexturingMode", &luna_wrapper_SPK_QuadRendererInterface::_bind_setTexturingMode},
	{"setAtlasDimensions", &luna_wrapper_SPK_QuadRendererInterface::_bind_setAtlasDimensions},
	{"setScale", &luna_wrapper_SPK_QuadRendererInterface::_bind_setScale},
	{"getTexturingMode", &luna_wrapper_SPK_QuadRendererInterface::_bind_getTexturingMode},
	{"getAtlasDimensionX", &luna_wrapper_SPK_QuadRendererInterface::_bind_getAtlasDimensionX},
	{"getAtlasDimensionY", &luna_wrapper_SPK_QuadRendererInterface::_bind_getAtlasDimensionY},
	{"getScaleX", &luna_wrapper_SPK_QuadRendererInterface::_bind_getScaleX},
	{"getScaleY", &luna_wrapper_SPK_QuadRendererInterface::_bind_getScaleY},
	{"base_setTexturingMode", &luna_wrapper_SPK_QuadRendererInterface::_bind_base_setTexturingMode},
	{"dynCast", &luna_wrapper_SPK_QuadRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_QuadRendererInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_QuadRendererInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_QuadRendererInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_QuadRendererInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::QuadRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::QuadRendererInterface >::enumValues[] = {
	{0,0}
};


