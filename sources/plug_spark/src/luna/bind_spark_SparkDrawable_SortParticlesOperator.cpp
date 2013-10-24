#include <plug_common.h>

#include <luna/wrappers/wrapper_spark_SparkDrawable_SortParticlesOperator.h>

class luna_wrapper_spark_SparkDrawable_SortParticlesOperator {
public:
	typedef Luna< spark::SparkDrawable::SortParticlesOperator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<spark::SparkDrawable::SortParticlesOperator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68897850) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::SortParticlesOperator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		spark::SparkDrawable::SortParticlesOperator* rhs =(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,2));
		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		spark::SparkDrawable::SortParticlesOperator* self= (spark::SparkDrawable::SortParticlesOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< spark::SparkDrawable::SortParticlesOperator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68897850) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::SortParticlesOperator");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::SortParticlesOperator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getEye(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEye(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		return true;
	}


	// Constructor binds:
	// spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye)
	static spark::SparkDrawable::SortParticlesOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye) function, expected prototype:\nspark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		return new spark::SparkDrawable::SortParticlesOperator(eye);
	}

	// spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye)
	static spark::SparkDrawable::SortParticlesOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye) function, expected prototype:\nspark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		return new wrapper_spark_SparkDrawable_SortParticlesOperator(L,NULL, eye);
	}

	// Overload binder for spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator
	static spark::SparkDrawable::SortParticlesOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SortParticlesOperator, cannot match any of the overloads for function SortParticlesOperator:\n  SortParticlesOperator(const osg::Vec3d &)\n  SortParticlesOperator(lua_Table *, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// SPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye()
	static int _bind_getEye(lua_State *L) {
		if (!_lg_typecheck_getEye(L)) {
			luaL_error(L, "luna typecheck failed in SPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye() function, expected prototype:\nSPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye(). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SPK::Vector3D* lret = &self->_eye;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value)
	static int _bind_setEye(lua_State *L) {
		if (!_lg_typecheck_setEye(L)) {
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value) function, expected prototype:\nvoid spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value)\nClass arguments details:\narg 1 ID = 70092749\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::Vector3D* value_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in spark::SparkDrawable::SortParticlesOperator::_eye function");
		}
		SPK::Vector3D value=*value_ptr;

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_eye = value;

		return 0;
	}


	// Operator binds:
	// bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs) function, expected prototype:\nbool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 31337102\n\n%s",luna_dumpStack(L).c_str());
		}

		SPK::System* lhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));
		SPK::System* rhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,3));

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System *, SPK::System *). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator()(lhs, rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

spark::SparkDrawable::SortParticlesOperator* LunaTraits< spark::SparkDrawable::SortParticlesOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_ctor(L);
}

void LunaTraits< spark::SparkDrawable::SortParticlesOperator >::_bind_dtor(spark::SparkDrawable::SortParticlesOperator* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::SortParticlesOperator >::className[] = "SparkDrawable_SortParticlesOperator";
const char LunaTraits< spark::SparkDrawable::SortParticlesOperator >::fullName[] = "spark::SparkDrawable::SortParticlesOperator";
const char LunaTraits< spark::SparkDrawable::SortParticlesOperator >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::SortParticlesOperator >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::SortParticlesOperator >::hash = 68897850;
const int LunaTraits< spark::SparkDrawable::SortParticlesOperator >::uniqueIDs[] = {68897850,0};

luna_RegType LunaTraits< spark::SparkDrawable::SortParticlesOperator >::methods[] = {
	{"getEye", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_getEye},
	{"setEye", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_setEye},
	{"op_call", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_op_call},
	{"dynCast", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind___eq},
	{"fromVoid", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::SortParticlesOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::SortParticlesOperator >::enumValues[] = {
	{0,0}
};


