#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_ref_ptr_osg_Object {
public:
	typedef Luna< std::list< osg::ref_ptr< osg::Object > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48822790) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::ref_ptr< osg::Object > >*)");
		}

		std::list< osg::ref_ptr< osg::Object > >* rhs =(Luna< std::list< osg::ref_ptr< osg::Object > > >::check(L,2));
		std::list< osg::ref_ptr< osg::Object > >* self=(Luna< std::list< osg::ref_ptr< osg::Object > > >::check(L,1));
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

		std::list< osg::ref_ptr< osg::Object > >* self=(Luna< std::list< osg::ref_ptr< osg::Object > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::ref_ptr< osg::Object > >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::ref_ptr< osg::Object > >",name);
	}

};

std::list< osg::ref_ptr< osg::Object > >* LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::_bind_dtor(std::list< osg::ref_ptr< osg::Object > >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::className[] = "std_list_osg_ref_ptr_osg_Object";
const char LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::fullName[] = "std::list< osg::ref_ptr< osg::Object > >";
const char LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::parents[] = {0};
const int LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::hash = 48822790;
const int LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::uniqueIDs[] = {48822790,0};

luna_RegType LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_ref_ptr_osg_Object::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_ref_ptr_osg_Object::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::ref_ptr< osg::Object > > >::enumValues[] = {
	{0,0}
};


