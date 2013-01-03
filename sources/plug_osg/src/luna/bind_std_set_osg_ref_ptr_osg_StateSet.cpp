#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_ref_ptr_osg_StateSet {
public:
	typedef Luna< std::set< osg::ref_ptr< osg::StateSet > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58970335) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::ref_ptr< osg::StateSet > >*)");
		}

		std::set< osg::ref_ptr< osg::StateSet > >* rhs =(Luna< std::set< osg::ref_ptr< osg::StateSet > > >::check(L,2));
		std::set< osg::ref_ptr< osg::StateSet > >* self=(Luna< std::set< osg::ref_ptr< osg::StateSet > > >::check(L,1));
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

		std::set< osg::ref_ptr< osg::StateSet > >* self=(Luna< std::set< osg::ref_ptr< osg::StateSet > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::ref_ptr< osg::StateSet > >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::ref_ptr< osg::StateSet > >",name);
	}

};

std::set< osg::ref_ptr< osg::StateSet > >* LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::_bind_dtor(std::set< osg::ref_ptr< osg::StateSet > >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::className[] = "std_set_osg_ref_ptr_osg_StateSet";
const char LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::fullName[] = "std::set< osg::ref_ptr< osg::StateSet > >";
const char LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::parents[] = {0};
const int LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::hash = 58970335;
const int LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::uniqueIDs[] = {58970335,0};

luna_RegType LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_ref_ptr_osg_StateSet::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_ref_ptr_osg_StateSet::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::ref_ptr< osg::StateSet > > >::enumValues[] = {
	{0,0}
};


