#include <plug_common.h>

class luna_wrapper_osgUtil_AddRangeOperator {
public:
	typedef Luna< osgUtil::AddRangeOperator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12139482) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::AddRangeOperator*)");
		}

		osgUtil::AddRangeOperator* rhs =(Luna< osgUtil::AddRangeOperator >::check(L,2));
		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
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

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::AddRangeOperator");
		
		return luna_dynamicCast(L,converters,"osgUtil::AddRangeOperator",name);
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
	// unsigned int osgUtil::AddRangeOperator::_begin()
	static int _bind_get_begin(lua_State *L) {
		if (!_lg_typecheck_get_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::AddRangeOperator::_begin() function, expected prototype:\nunsigned int osgUtil::AddRangeOperator::_begin()\nClass arguments details:\n");
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::AddRangeOperator::_begin(). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		unsigned int lret = self->_begin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::AddRangeOperator::_count()
	static int _bind_get_count(lua_State *L) {
		if (!_lg_typecheck_get_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::AddRangeOperator::_count() function, expected prototype:\nunsigned int osgUtil::AddRangeOperator::_count()\nClass arguments details:\n");
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::AddRangeOperator::_count(). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		unsigned int lret = self->_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osgUtil::AddRangeOperator::_vector()
	static int _bind_get_vector(lua_State *L) {
		if (!_lg_typecheck_get_vector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::AddRangeOperator::_vector() function, expected prototype:\nosg::Vec3d osgUtil::AddRangeOperator::_vector()\nClass arguments details:\n");
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::AddRangeOperator::_vector(). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		const osg::Vec3d* lret = &self->_vector;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::AddRangeOperator::_begin(unsigned int value)
	static int _bind_set_begin(lua_State *L) {
		if (!_lg_typecheck_set_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_begin(unsigned int value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_begin(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_begin(unsigned int). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		self->_begin = value;

		return 0;
	}

	// void osgUtil::AddRangeOperator::_count(unsigned int value)
	static int _bind_set_count(lua_State *L) {
		if (!_lg_typecheck_set_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_count(unsigned int value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_count(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_count(unsigned int). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		self->_count = value;

		return 0;
	}

	// void osgUtil::AddRangeOperator::_vector(osg::Vec3d value)
	static int _bind_set_vector(lua_State *L) {
		if (!_lg_typecheck_set_vector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_vector(osg::Vec3d value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_vector(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::AddRangeOperator::_vector function");
		}
		osg::Vec3d value=*value_ptr;

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_vector(osg::Vec3d). Got : '%s'",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name());
		}
		self->_vector = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::AddRangeOperator* LunaTraits< osgUtil::AddRangeOperator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::AddRangeOperator >::_bind_dtor(osgUtil::AddRangeOperator* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::AddRangeOperator >::className[] = "AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::fullName[] = "osgUtil::AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::AddRangeOperator >::parents[] = {0};
const int LunaTraits< osgUtil::AddRangeOperator >::hash = 12139482;
const int LunaTraits< osgUtil::AddRangeOperator >::uniqueIDs[] = {12139482,0};

luna_RegType LunaTraits< osgUtil::AddRangeOperator >::methods[] = {
	{"get_begin", &luna_wrapper_osgUtil_AddRangeOperator::_bind_get_begin},
	{"get_count", &luna_wrapper_osgUtil_AddRangeOperator::_bind_get_count},
	{"get_vector", &luna_wrapper_osgUtil_AddRangeOperator::_bind_get_vector},
	{"set_begin", &luna_wrapper_osgUtil_AddRangeOperator::_bind_set_begin},
	{"set_count", &luna_wrapper_osgUtil_AddRangeOperator::_bind_set_count},
	{"set_vector", &luna_wrapper_osgUtil_AddRangeOperator::_bind_set_vector},
	{"dynCast", &luna_wrapper_osgUtil_AddRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_AddRangeOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::AddRangeOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::AddRangeOperator >::enumValues[] = {
	{0,0}
};


