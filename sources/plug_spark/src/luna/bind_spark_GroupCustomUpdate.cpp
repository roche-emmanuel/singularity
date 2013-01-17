#include <plug_common.h>

#include <luna/wrappers/wrapper_spark_GroupCustomUpdate.h>

class luna_wrapper_spark_GroupCustomUpdate {
public:
	typedef Luna< spark::GroupCustomUpdate > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		spark::GroupCustomUpdate* self=(Luna< spark::GroupCustomUpdate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<spark::GroupCustomUpdate,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7361390) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::GroupCustomUpdate*)");
		}

		spark::GroupCustomUpdate* rhs =(Luna< spark::GroupCustomUpdate >::check(L,2));
		spark::GroupCustomUpdate* self=(Luna< spark::GroupCustomUpdate >::check(L,1));
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

		spark::GroupCustomUpdate* self=(Luna< spark::GroupCustomUpdate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::GroupCustomUpdate");
		
		return luna_dynamicCast(L,converters,"spark::GroupCustomUpdate",name);
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73657533) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Constructor binds:
	// spark::GroupCustomUpdate::GroupCustomUpdate()
	static spark::GroupCustomUpdate* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::GroupCustomUpdate::GroupCustomUpdate() function, expected prototype:\nspark::GroupCustomUpdate::GroupCustomUpdate()\nClass arguments details:\n");
		}


		return new spark::GroupCustomUpdate();
	}

	// spark::GroupCustomUpdate::GroupCustomUpdate(lua_Table * data)
	static spark::GroupCustomUpdate* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::GroupCustomUpdate::GroupCustomUpdate(lua_Table * data) function, expected prototype:\nspark::GroupCustomUpdate::GroupCustomUpdate(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_spark_GroupCustomUpdate(L,NULL);
	}

	// Overload binder for spark::GroupCustomUpdate::GroupCustomUpdate
	static spark::GroupCustomUpdate* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GroupCustomUpdate, cannot match any of the overloads for function GroupCustomUpdate:\n  GroupCustomUpdate()\n  GroupCustomUpdate(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// bool spark::GroupCustomUpdate::operator()(SPK::Particle & particle, float deltaTime) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool spark::GroupCustomUpdate::operator()(SPK::Particle & particle, float deltaTime) const function, expected prototype:\nbool spark::GroupCustomUpdate::operator()(SPK::Particle & particle, float deltaTime) const\nClass arguments details:\narg 1 ID = 73657533\n");
		}

		SPK::Particle* particle_ptr=(Luna< SPK::Particle >::check(L,2));
		if( !particle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg particle in spark::GroupCustomUpdate::operator() function");
		}
		SPK::Particle & particle=*particle_ptr;
		float deltaTime=(float)lua_tonumber(L,3);

		spark::GroupCustomUpdate* self=(Luna< spark::GroupCustomUpdate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool spark::GroupCustomUpdate::operator()(SPK::Particle &, float) const. Got : '%s'",typeid(Luna< spark::GroupCustomUpdate >::check(L,1)).name());
		}
		bool lret = self->operator()(particle, deltaTime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

spark::GroupCustomUpdate* LunaTraits< spark::GroupCustomUpdate >::_bind_ctor(lua_State *L) {
	return luna_wrapper_spark_GroupCustomUpdate::_bind_ctor(L);
}

void LunaTraits< spark::GroupCustomUpdate >::_bind_dtor(spark::GroupCustomUpdate* obj) {
	delete obj;
}

const char LunaTraits< spark::GroupCustomUpdate >::className[] = "GroupCustomUpdate";
const char LunaTraits< spark::GroupCustomUpdate >::fullName[] = "spark::GroupCustomUpdate";
const char LunaTraits< spark::GroupCustomUpdate >::moduleName[] = "spark";
const char* LunaTraits< spark::GroupCustomUpdate >::parents[] = {0};
const int LunaTraits< spark::GroupCustomUpdate >::hash = 7361390;
const int LunaTraits< spark::GroupCustomUpdate >::uniqueIDs[] = {7361390,0};

luna_RegType LunaTraits< spark::GroupCustomUpdate >::methods[] = {
	{"op_call", &luna_wrapper_spark_GroupCustomUpdate::_bind_op_call},
	{"dynCast", &luna_wrapper_spark_GroupCustomUpdate::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_GroupCustomUpdate::_bind___eq},
	{"getTable", &luna_wrapper_spark_GroupCustomUpdate::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::GroupCustomUpdate >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::GroupCustomUpdate >::enumValues[] = {
	{0,0}
};


