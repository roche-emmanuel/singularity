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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::SortParticlesOperator*)");
		}

		spark::SparkDrawable::SortParticlesOperator* rhs =(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,2));
		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
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
	inline static bool _lg_typecheck_get_eye(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_eye(lua_State *L) {
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye) function, expected prototype:\nspark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye)\nClass arguments details:\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye) function, expected prototype:\nspark::SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye)\nClass arguments details:\n");
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
	static int _bind_get_eye(lua_State *L) {
		if (!_lg_typecheck_get_eye(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye() function, expected prototype:\nSPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye()\nClass arguments details:\n");
		}


		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D spark::SparkDrawable::SortParticlesOperator::_eye(). Got : '%s'",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->_eye;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value)
	static int _bind_set_eye(lua_State *L) {
		if (!_lg_typecheck_set_eye(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value) function, expected prototype:\nvoid spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D value)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* value_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in spark::SparkDrawable::SortParticlesOperator::_eye function");
		}
		SPK::Vector3D value=*value_ptr;

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::SortParticlesOperator::_eye(SPK::Vector3D). Got : '%s'",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name());
		}
		self->_eye = value;

		return 0;
	}


	// Operator binds:
	// bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs) function, expected prototype:\nbool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 31337102\n");
		}

		SPK::System* lhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));
		SPK::System* rhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,3));

		spark::SparkDrawable::SortParticlesOperator* self=(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool spark::SparkDrawable::SortParticlesOperator::operator()(SPK::System *, SPK::System *). Got : '%s'",typeid(Luna< spark::SparkDrawable::SortParticlesOperator >::check(L,1)).name());
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
	{"get_eye", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_get_eye},
	{"set_eye", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_set_eye},
	{"op_call", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_op_call},
	{"dynCast", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind___eq},
	{"getTable", &luna_wrapper_spark_SparkDrawable_SortParticlesOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::SortParticlesOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::SortParticlesOperator >::enumValues[] = {
	{0,0}
};


