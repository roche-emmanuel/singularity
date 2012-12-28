#include <plug_common.h>

#include <luna/wrappers/wrapper_SparkDrawable_SortParticlesOperator.h>

class luna_wrapper_SparkDrawable_SortParticlesOperator {
public:
	typedef Luna< SparkDrawable::SortParticlesOperator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SparkDrawable::SortParticlesOperator* self=(Luna< SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7585549) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SparkDrawable::SortParticlesOperator*)");
		}

		SparkDrawable::SortParticlesOperator* rhs =(Luna< SparkDrawable::SortParticlesOperator >::check(L,2));
		SparkDrawable::SortParticlesOperator* self=(Luna< SparkDrawable::SortParticlesOperator >::check(L,1));
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

		SparkDrawable::SortParticlesOperator* self=(Luna< SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SparkDrawable::SortParticlesOperator");
		
		return luna_dynamicCast(L,converters,"SparkDrawable::SortParticlesOperator",name);
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

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		return true;
	}


	// Constructor binds:
	// SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye)
	static SparkDrawable::SortParticlesOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye) function, expected prototype:\nSparkDrawable::SortParticlesOperator::SortParticlesOperator(const osg::Vec3d & eye)\nClass arguments details:\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in SparkDrawable::SortParticlesOperator::SortParticlesOperator function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		return new SparkDrawable::SortParticlesOperator(eye);
	}

	// SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye)
	static SparkDrawable::SortParticlesOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye) function, expected prototype:\nSparkDrawable::SortParticlesOperator::SortParticlesOperator(lua_Table * data, const osg::Vec3d & eye)\nClass arguments details:\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in SparkDrawable::SortParticlesOperator::SortParticlesOperator function");
		}
		const osg::Vec3d & eye=*eye_ptr;

		return new wrapper_SparkDrawable_SortParticlesOperator(L,NULL, eye);
	}

	// Overload binder for SparkDrawable::SortParticlesOperator::SortParticlesOperator
	static SparkDrawable::SortParticlesOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SortParticlesOperator, cannot match any of the overloads for function SortParticlesOperator:\n  SortParticlesOperator(const osg::Vec3d &)\n  SortParticlesOperator(lua_Table *, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// bool SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs) function, expected prototype:\nbool SparkDrawable::SortParticlesOperator::operator()(SPK::System * lhs, SPK::System * rhs)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 31337102\n");
		}

		SPK::System* lhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,2));
		SPK::System* rhs=(Luna< SPK::Registerable >::checkSubType< SPK::System >(L,3));

		SparkDrawable::SortParticlesOperator* self=(Luna< SparkDrawable::SortParticlesOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SparkDrawable::SortParticlesOperator::operator()(SPK::System *, SPK::System *)");
		}
		bool lret = self->operator()(lhs, rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

SparkDrawable::SortParticlesOperator* LunaTraits< SparkDrawable::SortParticlesOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SparkDrawable_SortParticlesOperator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SparkDrawable::SortParticlesOperator >::_bind_dtor(SparkDrawable::SortParticlesOperator* obj) {
	delete obj;
}

const char LunaTraits< SparkDrawable::SortParticlesOperator >::className[] = "SortParticlesOperator";
const char LunaTraits< SparkDrawable::SortParticlesOperator >::fullName[] = "SparkDrawable::SortParticlesOperator";
const char LunaTraits< SparkDrawable::SortParticlesOperator >::moduleName[] = "spark";
const char* LunaTraits< SparkDrawable::SortParticlesOperator >::parents[] = {0};
const int LunaTraits< SparkDrawable::SortParticlesOperator >::hash = 7585549;
const int LunaTraits< SparkDrawable::SortParticlesOperator >::uniqueIDs[] = {7585549,0};

luna_RegType LunaTraits< SparkDrawable::SortParticlesOperator >::methods[] = {
	{"op_call", &luna_wrapper_SparkDrawable_SortParticlesOperator::_bind_op_call},
	{"dynCast", &luna_wrapper_SparkDrawable_SortParticlesOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_SparkDrawable_SortParticlesOperator::_bind___eq},
	{"getTable", &luna_wrapper_SparkDrawable_SortParticlesOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SparkDrawable::SortParticlesOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SparkDrawable::SortParticlesOperator >::enumValues[] = {
	{0,0}
};


