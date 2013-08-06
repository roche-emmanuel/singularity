#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_Area {
public:
	typedef Luna< std::vector< osg::ref_ptr< Area > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5192565) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< Area > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< Area > >* rhs =(Luna< std::vector< osg::ref_ptr< Area > > >::check(L,2));
		std::vector< osg::ref_ptr< Area > >* self=(Luna< std::vector< osg::ref_ptr< Area > > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		std::vector< osg::ref_ptr< Area > >* self=(Luna< std::vector< osg::ref_ptr< Area > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< Area > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< Area > >",name);
	}

};

std::vector< osg::ref_ptr< Area > >* LunaTraits< std::vector< osg::ref_ptr< Area > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< Area > >();
}

void LunaTraits< std::vector< osg::ref_ptr< Area > > >::_bind_dtor(std::vector< osg::ref_ptr< Area > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< Area > > >::className[] = "std_vector_osg_ref_ptr_Area";
const char LunaTraits< std::vector< osg::ref_ptr< Area > > >::fullName[] = "std::vector< osg::ref_ptr< Area > >";
const char LunaTraits< std::vector< osg::ref_ptr< Area > > >::moduleName[] = "Awesomium";
const char* LunaTraits< std::vector< osg::ref_ptr< Area > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< Area > > >::hash = 5192565;
const int LunaTraits< std::vector< osg::ref_ptr< Area > > >::uniqueIDs[] = {5192565,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< Area > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_Area::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_Area::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< Area > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< Area > > >::enumValues[] = {
	{0,0}
};


