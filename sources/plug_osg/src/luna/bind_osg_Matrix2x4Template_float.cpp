#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_Matrix2x4Template_float {
public:
	typedef Luna< osg::Matrix2x4Template< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61250437) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix2x4Template< float >*)");
		}

		osg::Matrix2x4Template< float >* rhs =(Luna< osg::Matrix2x4Template< float > >::check(L,2));
		osg::Matrix2x4Template< float >* self=(Luna< osg::Matrix2x4Template< float > >::check(L,1));
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

		osg::Matrix2x4Template< float >* self=(Luna< osg::Matrix2x4Template< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix2x4Template< float >");
		
		return luna_dynamicCast(L,converters,"osg::Matrix2x4Template< float >",name);
	}

};

osg::Matrix2x4Template< float >* LunaTraits< osg::Matrix2x4Template< float > >::_bind_ctor(lua_State *L) {
	return new osg::Matrix2x4Template< float >();
}

void LunaTraits< osg::Matrix2x4Template< float > >::_bind_dtor(osg::Matrix2x4Template< float >* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix2x4Template< float > >::className[] = "osg_Matrix2x4Template_float";
const char LunaTraits< osg::Matrix2x4Template< float > >::fullName[] = "osg::Matrix2x4Template< float >";
const char LunaTraits< osg::Matrix2x4Template< float > >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix2x4Template< float > >::parents[] = {0};
const int LunaTraits< osg::Matrix2x4Template< float > >::hash = 61250437;
const int LunaTraits< osg::Matrix2x4Template< float > >::uniqueIDs[] = {61250437,0};

luna_RegType LunaTraits< osg::Matrix2x4Template< float > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Matrix2x4Template_float::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix2x4Template_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix2x4Template< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix2x4Template< float > >::enumValues[] = {
	{0,0}
};

