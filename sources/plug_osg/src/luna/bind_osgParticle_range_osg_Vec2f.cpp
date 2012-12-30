#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osgParticle_range_osg_Vec2f {
public:
	typedef Luna< osgParticle::range< osg::Vec2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67760540) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::range< osg::Vec2f >*)");
		}

		osgParticle::range< osg::Vec2f >* rhs =(Luna< osgParticle::range< osg::Vec2f > >::check(L,2));
		osgParticle::range< osg::Vec2f >* self=(Luna< osgParticle::range< osg::Vec2f > >::check(L,1));
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

		osgParticle::range< osg::Vec2f >* self=(Luna< osgParticle::range< osg::Vec2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::range< osg::Vec2f >");
		
		return luna_dynamicCast(L,converters,"osgParticle::range< osg::Vec2f >",name);
	}
};

osgParticle::range< osg::Vec2f >* LunaTraits< osgParticle::range< osg::Vec2f > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::range< osg::Vec2f > >::_bind_dtor(osgParticle::range< osg::Vec2f >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osgParticle::range< osg::Vec2f > >::className[] = "osgParticle_range_osg_Vec2f";
const char LunaTraits< osgParticle::range< osg::Vec2f > >::fullName[] = "osgParticle::range< osg::Vec2f >";
const char LunaTraits< osgParticle::range< osg::Vec2f > >::moduleName[] = "osg";
const char* LunaTraits< osgParticle::range< osg::Vec2f > >::parents[] = {0};
const int LunaTraits< osgParticle::range< osg::Vec2f > >::hash = 67760540;
const int LunaTraits< osgParticle::range< osg::Vec2f > >::uniqueIDs[] = {67760540,0};

luna_RegType LunaTraits< osgParticle::range< osg::Vec2f > >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_range_osg_Vec2f::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_range_osg_Vec2f::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::range< osg::Vec2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::range< osg::Vec2f > >::enumValues[] = {
	{0,0}
};

