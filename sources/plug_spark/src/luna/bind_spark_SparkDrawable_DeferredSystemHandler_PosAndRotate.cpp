#include <plug_common.h>

class luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate {
public:
	typedef Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5357342) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::DeferredSystemHandler::PosAndRotate*)");
		}

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* rhs =(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,2));
		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
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

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self= (spark::SparkDrawable::DeferredSystemHandler::PosAndRotate*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5357342) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
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

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::DeferredSystemHandler::PosAndRotate");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::DeferredSystemHandler::PosAndRotate",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRotationAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRotationAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotationAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotationAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position()
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position() function, expected prototype:\nSPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position()\nClass arguments details:\n");
		}


		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position(). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->position;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis()
	static int _bind_getRotationAxis(lua_State *L) {
		if (!_lg_typecheck_getRotationAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis() function, expected prototype:\nSPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis()\nClass arguments details:\n");
		}


		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis(). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->rotationAxis;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// float spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle()
	static int _bind_getRotationAngle(lua_State *L) {
		if (!_lg_typecheck_getRotationAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle() function, expected prototype:\nfloat spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle()\nClass arguments details:\n");
		}


		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle(). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		float lret = self->rotationAngle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position(SPK::Vector3D value)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position(SPK::Vector3D value) function, expected prototype:\nvoid spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position(SPK::Vector3D value)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* value_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position function");
		}
		SPK::Vector3D value=*value_ptr;

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::position(SPK::Vector3D). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		self->position = value;

		return 0;
	}

	// void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis(SPK::Vector3D value)
	static int _bind_setRotationAxis(lua_State *L) {
		if (!_lg_typecheck_setRotationAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis(SPK::Vector3D value) function, expected prototype:\nvoid spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis(SPK::Vector3D value)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* value_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis function");
		}
		SPK::Vector3D value=*value_ptr;

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAxis(SPK::Vector3D). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		self->rotationAxis = value;

		return 0;
	}

	// void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle(float value)
	static int _bind_setRotationAngle(lua_State *L) {
		if (!_lg_typecheck_setRotationAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle(float value) function, expected prototype:\nvoid spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::DeferredSystemHandler::PosAndRotate::rotationAngle(float). Got : '%s'",typeid(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1)).name());
		}
		self->rotationAngle = value;

		return 0;
	}


	// Operator binds:

};

spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_dtor(spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::className[] = "SparkDrawable_DeferredSystemHandler_PosAndRotate";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::fullName[] = "spark::SparkDrawable::DeferredSystemHandler::PosAndRotate";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::hash = 5357342;
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::uniqueIDs[] = {5357342,0};

luna_RegType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::methods[] = {
	{"getPosition", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_getPosition},
	{"getRotationAxis", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_getRotationAxis},
	{"getRotationAngle", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_getRotationAngle},
	{"setPosition", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_setPosition},
	{"setRotationAxis", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_setRotationAxis},
	{"setRotationAngle", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_setRotationAngle},
	{"dynCast", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind___eq},
	{"fromVoid", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_fromVoid},
	{"asVoid", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::enumValues[] = {
	{0,0}
};


