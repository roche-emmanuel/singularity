#include <plug_common.h>

#include <luna/wrappers/wrapper_BaseClass.h>

class luna_wrapper_BaseClass {
public:
	typedef Luna< BaseClass > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		BaseClass* self=(Luna< BaseClass >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<BaseClass,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48128592) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(BaseClass*)");
		}

		BaseClass* rhs =(Luna< BaseClass >::check(L,2));
		BaseClass* self=(Luna< BaseClass >::check(L,1));
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

		BaseClass* self=(Luna< BaseClass >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("BaseClass");
		
		return luna_dynamicCast(L,converters,"BaseClass",name);
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

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// BaseClass::BaseClass()
	static BaseClass* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BaseClass::BaseClass() function, expected prototype:\nBaseClass::BaseClass()\nClass arguments details:\n");
		}


		return new BaseClass();
	}

	// BaseClass::BaseClass(lua_Table * data)
	static BaseClass* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in BaseClass::BaseClass(lua_Table * data) function, expected prototype:\nBaseClass::BaseClass(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_BaseClass(L,NULL);
	}

	// Overload binder for BaseClass::BaseClass
	static BaseClass* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BaseClass, cannot match any of the overloads for function BaseClass:\n  BaseClass()\n  BaseClass(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

BaseClass* LunaTraits< BaseClass >::_bind_ctor(lua_State *L) {
	return luna_wrapper_BaseClass::_bind_ctor(L);
}

void LunaTraits< BaseClass >::_bind_dtor(BaseClass* obj) {
	delete obj;
}

const char LunaTraits< BaseClass >::className[] = "BaseClass";
const char LunaTraits< BaseClass >::fullName[] = "BaseClass";
const char LunaTraits< BaseClass >::moduleName[] = "sgt";
const char* LunaTraits< BaseClass >::parents[] = {0};
const int LunaTraits< BaseClass >::hash = 48128592;
const int LunaTraits< BaseClass >::uniqueIDs[] = {48128592,0};

luna_RegType LunaTraits< BaseClass >::methods[] = {
	{"dynCast", &luna_wrapper_BaseClass::_bind_dynCast},
	{"__eq", &luna_wrapper_BaseClass::_bind___eq},
	{"getTable", &luna_wrapper_BaseClass::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< BaseClass >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< BaseClass >::enumValues[] = {
	{0,0}
};


