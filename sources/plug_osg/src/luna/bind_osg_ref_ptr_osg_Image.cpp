#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_Image {
public:
	typedef Luna< osg::ref_ptr< osg::Image > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15557275) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::Image >*)");
		}

		osg::ref_ptr< osg::Image >* rhs =(Luna< osg::ref_ptr< osg::Image > >::check(L,2));
		osg::ref_ptr< osg::Image >* self=(Luna< osg::ref_ptr< osg::Image > >::check(L,1));
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

		osg::ref_ptr< osg::Image >* self=(Luna< osg::ref_ptr< osg::Image > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::Image >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::Image >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ref_ptr< osg::Image >* LunaTraits< osg::ref_ptr< osg::Image > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ref_ptr< osg::Image > >::_bind_dtor(osg::ref_ptr< osg::Image >* obj) {
	delete obj;
}

const char LunaTraits< osg::ref_ptr< osg::Image > >::className[] = "ref_ptr_osg_Image";
const char LunaTraits< osg::ref_ptr< osg::Image > >::fullName[] = "osg::ref_ptr< osg::Image >";
const char LunaTraits< osg::ref_ptr< osg::Image > >::moduleName[] = "osg";
const char* LunaTraits< osg::ref_ptr< osg::Image > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::Image > >::hash = 15557275;
const int LunaTraits< osg::ref_ptr< osg::Image > >::uniqueIDs[] = {15557275,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::Image > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_Image::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_Image::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::Image > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::Image > >::enumValues[] = {
	{0,0}
};


