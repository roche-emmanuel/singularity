#include <plug_common.h>

class luna_wrapper_osg_KdTree_Triangle {
public:
	typedef Luna< osg::KdTree::Triangle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43117328) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::Triangle*)");
		}

		osg::KdTree::Triangle* rhs =(Luna< osg::KdTree::Triangle >::check(L,2));
		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
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

		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::Triangle");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::Triangle",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getP0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setP0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,43117328) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::KdTree::Triangle::Triangle()
	static osg::KdTree::Triangle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::Triangle::Triangle() function, expected prototype:\nosg::KdTree::Triangle::Triangle()\nClass arguments details:\n");
		}


		return new osg::KdTree::Triangle();
	}

	// osg::KdTree::Triangle::Triangle(unsigned int ip0, unsigned int ip1, unsigned int ip2)
	static osg::KdTree::Triangle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::Triangle::Triangle(unsigned int ip0, unsigned int ip1, unsigned int ip2) function, expected prototype:\nosg::KdTree::Triangle::Triangle(unsigned int ip0, unsigned int ip1, unsigned int ip2)\nClass arguments details:\n");
		}

		unsigned int ip0=(unsigned int)lua_tointeger(L,1);
		unsigned int ip1=(unsigned int)lua_tointeger(L,2);
		unsigned int ip2=(unsigned int)lua_tointeger(L,3);

		return new osg::KdTree::Triangle(ip0, ip1, ip2);
	}

	// Overload binder for osg::KdTree::Triangle::Triangle
	static osg::KdTree::Triangle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Triangle, cannot match any of the overloads for function Triangle:\n  Triangle()\n  Triangle(unsigned int, unsigned int, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::KdTree::Triangle::p0()
	static int _bind_getP0(lua_State *L) {
		if (!_lg_typecheck_getP0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::Triangle::p0() function, expected prototype:\nunsigned int osg::KdTree::Triangle::p0()\nClass arguments details:\n");
		}


		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::Triangle::p0(). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		unsigned int lret = self->p0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::Triangle::p1()
	static int _bind_getP1(lua_State *L) {
		if (!_lg_typecheck_getP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::Triangle::p1() function, expected prototype:\nunsigned int osg::KdTree::Triangle::p1()\nClass arguments details:\n");
		}


		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::Triangle::p1(). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		unsigned int lret = self->p1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::Triangle::p2()
	static int _bind_getP2(lua_State *L) {
		if (!_lg_typecheck_getP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::Triangle::p2() function, expected prototype:\nunsigned int osg::KdTree::Triangle::p2()\nClass arguments details:\n");
		}


		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::Triangle::p2(). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		unsigned int lret = self->p2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::KdTree::Triangle::p0(unsigned int value)
	static int _bind_setP0(lua_State *L) {
		if (!_lg_typecheck_setP0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::Triangle::p0(unsigned int value) function, expected prototype:\nvoid osg::KdTree::Triangle::p0(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::Triangle::p0(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		self->p0 = value;

		return 0;
	}

	// void osg::KdTree::Triangle::p1(unsigned int value)
	static int _bind_setP1(lua_State *L) {
		if (!_lg_typecheck_setP1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::Triangle::p1(unsigned int value) function, expected prototype:\nvoid osg::KdTree::Triangle::p1(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::Triangle::p1(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		self->p1 = value;

		return 0;
	}

	// void osg::KdTree::Triangle::p2(unsigned int value)
	static int _bind_setP2(lua_State *L) {
		if (!_lg_typecheck_setP2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::Triangle::p2(unsigned int value) function, expected prototype:\nvoid osg::KdTree::Triangle::p2(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::Triangle::p2(unsigned int). Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		self->p2 = value;

		return 0;
	}


	// Operator binds:
	// bool osg::KdTree::Triangle::operator<(const osg::KdTree::Triangle & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::Triangle::operator<(const osg::KdTree::Triangle & rhs) const function, expected prototype:\nbool osg::KdTree::Triangle::operator<(const osg::KdTree::Triangle & rhs) const\nClass arguments details:\narg 1 ID = 43117328\n");
		}

		const osg::KdTree::Triangle* rhs_ptr=(Luna< osg::KdTree::Triangle >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::Triangle::operator< function");
		}
		const osg::KdTree::Triangle & rhs=*rhs_ptr;

		osg::KdTree::Triangle* self=(Luna< osg::KdTree::Triangle >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::KdTree::Triangle::operator<(const osg::KdTree::Triangle &) const. Got : '%s'",typeid(Luna< osg::KdTree::Triangle >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::KdTree::Triangle* LunaTraits< osg::KdTree::Triangle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_Triangle::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::Triangle >::_bind_dtor(osg::KdTree::Triangle* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::Triangle >::className[] = "KdTree_Triangle";
const char LunaTraits< osg::KdTree::Triangle >::fullName[] = "osg::KdTree::Triangle";
const char LunaTraits< osg::KdTree::Triangle >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::Triangle >::parents[] = {0};
const int LunaTraits< osg::KdTree::Triangle >::hash = 43117328;
const int LunaTraits< osg::KdTree::Triangle >::uniqueIDs[] = {43117328,0};

luna_RegType LunaTraits< osg::KdTree::Triangle >::methods[] = {
	{"getP0", &luna_wrapper_osg_KdTree_Triangle::_bind_getP0},
	{"getP1", &luna_wrapper_osg_KdTree_Triangle::_bind_getP1},
	{"getP2", &luna_wrapper_osg_KdTree_Triangle::_bind_getP2},
	{"setP0", &luna_wrapper_osg_KdTree_Triangle::_bind_setP0},
	{"setP1", &luna_wrapper_osg_KdTree_Triangle::_bind_setP1},
	{"setP2", &luna_wrapper_osg_KdTree_Triangle::_bind_setP2},
	{"__lt", &luna_wrapper_osg_KdTree_Triangle::_bind___lt},
	{"dynCast", &luna_wrapper_osg_KdTree_Triangle::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_Triangle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::Triangle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::Triangle >::enumValues[] = {
	{0,0}
};


