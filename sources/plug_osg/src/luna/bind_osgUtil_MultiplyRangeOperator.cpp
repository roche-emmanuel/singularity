#include <plug_common.h>

class luna_wrapper_osgUtil_MultiplyRangeOperator {
public:
	typedef Luna< osgUtil::MultiplyRangeOperator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72996634) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::MultiplyRangeOperator*)");
		}

		osgUtil::MultiplyRangeOperator* rhs =(Luna< osgUtil::MultiplyRangeOperator >::check(L,2));
		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
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

		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::MultiplyRangeOperator");
		
		return luna_dynamicCast(L,converters,"osgUtil::MultiplyRangeOperator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_vector(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_vector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int osgUtil::MultiplyRangeOperator::_begin()
	static int _bind_get_begin(lua_State *L) {
		if (!_lg_typecheck_get_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::MultiplyRangeOperator::_begin() function, expected prototype:\nunsigned int osgUtil::MultiplyRangeOperator::_begin()\nClass arguments details:\n");
		}


		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::MultiplyRangeOperator::_begin(). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		unsigned int lret = self->_begin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::MultiplyRangeOperator::_count()
	static int _bind_get_count(lua_State *L) {
		if (!_lg_typecheck_get_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::MultiplyRangeOperator::_count() function, expected prototype:\nunsigned int osgUtil::MultiplyRangeOperator::_count()\nClass arguments details:\n");
		}


		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::MultiplyRangeOperator::_count(). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		unsigned int lret = self->_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osgUtil::MultiplyRangeOperator::_vector()
	static int _bind_get_vector(lua_State *L) {
		if (!_lg_typecheck_get_vector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::MultiplyRangeOperator::_vector() function, expected prototype:\nosg::Vec3d osgUtil::MultiplyRangeOperator::_vector()\nClass arguments details:\n");
		}


		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::MultiplyRangeOperator::_vector(). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		const osg::Vec3d* lret = &self->_vector;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::MultiplyRangeOperator::_begin(unsigned int value)
	static int _bind_set_begin(lua_State *L) {
		if (!_lg_typecheck_set_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::MultiplyRangeOperator::_begin(unsigned int value) function, expected prototype:\nvoid osgUtil::MultiplyRangeOperator::_begin(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::MultiplyRangeOperator::_begin(unsigned int). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		self->_begin = value;

		return 0;
	}

	// void osgUtil::MultiplyRangeOperator::_count(unsigned int value)
	static int _bind_set_count(lua_State *L) {
		if (!_lg_typecheck_set_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::MultiplyRangeOperator::_count(unsigned int value) function, expected prototype:\nvoid osgUtil::MultiplyRangeOperator::_count(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::MultiplyRangeOperator::_count(unsigned int). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		self->_count = value;

		return 0;
	}

	// void osgUtil::MultiplyRangeOperator::_vector(osg::Vec3d value)
	static int _bind_set_vector(lua_State *L) {
		if (!_lg_typecheck_set_vector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::MultiplyRangeOperator::_vector(osg::Vec3d value) function, expected prototype:\nvoid osgUtil::MultiplyRangeOperator::_vector(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::MultiplyRangeOperator::_vector function");
		}
		osg::Vec3d value=*value_ptr;

		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::MultiplyRangeOperator::_vector(osg::Vec3d). Got : '%s'",typeid(Luna< osgUtil::MultiplyRangeOperator >::check(L,1)).name());
		}
		self->_vector = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::MultiplyRangeOperator* LunaTraits< osgUtil::MultiplyRangeOperator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::MultiplyRangeOperator >::_bind_dtor(osgUtil::MultiplyRangeOperator* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::MultiplyRangeOperator >::className[] = "MultiplyRangeOperator";
const char LunaTraits< osgUtil::MultiplyRangeOperator >::fullName[] = "osgUtil::MultiplyRangeOperator";
const char LunaTraits< osgUtil::MultiplyRangeOperator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::MultiplyRangeOperator >::parents[] = {0};
const int LunaTraits< osgUtil::MultiplyRangeOperator >::hash = 72996634;
const int LunaTraits< osgUtil::MultiplyRangeOperator >::uniqueIDs[] = {72996634,0};

luna_RegType LunaTraits< osgUtil::MultiplyRangeOperator >::methods[] = {
	{"get_begin", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_get_begin},
	{"get_count", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_get_count},
	{"get_vector", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_get_vector},
	{"set_begin", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_set_begin},
	{"set_count", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_set_count},
	{"set_vector", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_set_vector},
	{"dynCast", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::MultiplyRangeOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::MultiplyRangeOperator >::enumValues[] = {
	{0,0}
};


