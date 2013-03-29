#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_LineRendererInterface.h>

class luna_wrapper_SPK_LineRendererInterface {
public:
	typedef Luna< SPK::LineRendererInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::LineRendererInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87424637) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::LineRendererInterface*)");
		}

		SPK::LineRendererInterface* rhs =(Luna< SPK::LineRendererInterface >::check(L,2));
		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
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

		SPK::LineRendererInterface* self= (SPK::LineRendererInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::LineRendererInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87424637) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::LineRendererInterface >::check(L,1));
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

		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::LineRendererInterface");
		
		return luna_dynamicCast(L,converters,"SPK::LineRendererInterface",name);
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
	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::LineRendererInterface::LineRendererInterface(float length = 1.0f, float width = 1.0f)
	static SPK::LineRendererInterface* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::LineRendererInterface::LineRendererInterface(float length = 1.0f, float width = 1.0f) function, expected prototype:\nSPK::LineRendererInterface::LineRendererInterface(float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>0 ? (float)lua_tonumber(L,1) : (float)1.0f;
		float width=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		return new SPK::LineRendererInterface(length, width);
	}

	// SPK::LineRendererInterface::LineRendererInterface(lua_Table * data, float length = 1.0f, float width = 1.0f)
	static SPK::LineRendererInterface* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::LineRendererInterface::LineRendererInterface(lua_Table * data, float length = 1.0f, float width = 1.0f) function, expected prototype:\nSPK::LineRendererInterface::LineRendererInterface(lua_Table * data, float length = 1.0f, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float length=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float width=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_SPK_LineRendererInterface(L,NULL, length, width);
	}

	// Overload binder for SPK::LineRendererInterface::LineRendererInterface
	static SPK::LineRendererInterface* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LineRendererInterface, cannot match any of the overloads for function LineRendererInterface:\n  LineRendererInterface(float, float)\n  LineRendererInterface(lua_Table *, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void SPK::LineRendererInterface::setLength(float length)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LineRendererInterface::setLength(float length) function, expected prototype:\nvoid SPK::LineRendererInterface::setLength(float length)\nClass arguments details:\n");
		}

		float length=(float)lua_tonumber(L,2);

		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LineRendererInterface::setLength(float). Got : '%s'",typeid(Luna< SPK::LineRendererInterface >::check(L,1)).name());
		}
		self->setLength(length);

		return 0;
	}

	// void SPK::LineRendererInterface::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LineRendererInterface::setWidth(float width) function, expected prototype:\nvoid SPK::LineRendererInterface::setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LineRendererInterface::setWidth(float). Got : '%s'",typeid(Luna< SPK::LineRendererInterface >::check(L,1)).name());
		}
		self->setWidth(width);

		return 0;
	}

	// float SPK::LineRendererInterface::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::LineRendererInterface::getLength() const function, expected prototype:\nfloat SPK::LineRendererInterface::getLength() const\nClass arguments details:\n");
		}


		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::LineRendererInterface::getLength() const. Got : '%s'",typeid(Luna< SPK::LineRendererInterface >::check(L,1)).name());
		}
		float lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::LineRendererInterface::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::LineRendererInterface::getWidth() const function, expected prototype:\nfloat SPK::LineRendererInterface::getWidth() const\nClass arguments details:\n");
		}


		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::LineRendererInterface::getWidth() const. Got : '%s'",typeid(Luna< SPK::LineRendererInterface >::check(L,1)).name());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::LineRendererInterface::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::LineRendererInterface::base_setWidth(float width) function, expected prototype:\nvoid SPK::LineRendererInterface::base_setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		SPK::LineRendererInterface* self=(Luna< SPK::LineRendererInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::LineRendererInterface::base_setWidth(float). Got : '%s'",typeid(Luna< SPK::LineRendererInterface >::check(L,1)).name());
		}
		self->LineRendererInterface::setWidth(width);

		return 0;
	}


	// Operator binds:

};

SPK::LineRendererInterface* LunaTraits< SPK::LineRendererInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_LineRendererInterface::_bind_ctor(L);
}

void LunaTraits< SPK::LineRendererInterface >::_bind_dtor(SPK::LineRendererInterface* obj) {
	delete obj;
}

const char LunaTraits< SPK::LineRendererInterface >::className[] = "LineRendererInterface";
const char LunaTraits< SPK::LineRendererInterface >::fullName[] = "SPK::LineRendererInterface";
const char LunaTraits< SPK::LineRendererInterface >::moduleName[] = "spark";
const char* LunaTraits< SPK::LineRendererInterface >::parents[] = {0};
const int LunaTraits< SPK::LineRendererInterface >::hash = 87424637;
const int LunaTraits< SPK::LineRendererInterface >::uniqueIDs[] = {87424637,0};

luna_RegType LunaTraits< SPK::LineRendererInterface >::methods[] = {
	{"setLength", &luna_wrapper_SPK_LineRendererInterface::_bind_setLength},
	{"setWidth", &luna_wrapper_SPK_LineRendererInterface::_bind_setWidth},
	{"getLength", &luna_wrapper_SPK_LineRendererInterface::_bind_getLength},
	{"getWidth", &luna_wrapper_SPK_LineRendererInterface::_bind_getWidth},
	{"base_setWidth", &luna_wrapper_SPK_LineRendererInterface::_bind_base_setWidth},
	{"dynCast", &luna_wrapper_SPK_LineRendererInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_LineRendererInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_LineRendererInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_LineRendererInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_LineRendererInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::LineRendererInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::LineRendererInterface >::enumValues[] = {
	{0,0}
};


