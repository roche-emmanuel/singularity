#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_Matrix3Template_float {
public:
	typedef Luna< osg::Matrix3Template< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3033487) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix3Template< float >*)");
		}

		osg::Matrix3Template< float >* rhs =(Luna< osg::Matrix3Template< float > >::check(L,2));
		osg::Matrix3Template< float >* self=(Luna< osg::Matrix3Template< float > >::check(L,1));
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

		osg::Matrix3Template< float >* self=(Luna< osg::Matrix3Template< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix3Template< float >");
		
		return luna_dynamicCast(L,converters,"osg::Matrix3Template< float >",name);
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3033487)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// float osg::Matrix3Template< float > *::op_index(osg::Matrix3Template< float > * mat, int index)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Matrix3Template< float > *::op_index(osg::Matrix3Template< float > * mat, int index) function, expected prototype:\nfloat osg::Matrix3Template< float > *::op_index(osg::Matrix3Template< float > * mat, int index)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::Matrix3Template< float >* mat=(Luna< osg::Matrix3Template< float > >::check(L,1));
		int index=(int)lua_tointeger(L,2);

		float lret = op_index(mat, index);
		lua_pushnumber(L,lret);

		return 1;
	}

};

osg::Matrix3Template< float >* LunaTraits< osg::Matrix3Template< float > >::_bind_ctor(lua_State *L) {
	return new osg::Matrix3Template< float >();
}

void LunaTraits< osg::Matrix3Template< float > >::_bind_dtor(osg::Matrix3Template< float >* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix3Template< float > >::className[] = "osg_Matrix3Template_float";
const char LunaTraits< osg::Matrix3Template< float > >::fullName[] = "osg::Matrix3Template< float >";
const char LunaTraits< osg::Matrix3Template< float > >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix3Template< float > >::parents[] = {0};
const int LunaTraits< osg::Matrix3Template< float > >::hash = 3033487;
const int LunaTraits< osg::Matrix3Template< float > >::uniqueIDs[] = {3033487,0};

luna_RegType LunaTraits< osg::Matrix3Template< float > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Matrix3Template_float::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix3Template_float::_bind___eq},
	
	{"op_index", &luna_wrapper_osg_Matrix3Template_float::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix3Template< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix3Template< float > >::enumValues[] = {
	{0,0}
};


