#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_Drawable_ptr {
public:
	typedef Luna< std::set< osg::Drawable * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76374875) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::Drawable * >*)");
		}

		std::set< osg::Drawable * >* rhs =(Luna< std::set< osg::Drawable * > >::check(L,2));
		std::set< osg::Drawable * >* self=(Luna< std::set< osg::Drawable * > >::check(L,1));
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

		std::set< osg::Drawable * >* self=(Luna< std::set< osg::Drawable * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::Drawable * >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::Drawable * >",name);
	}
};

std::set< osg::Drawable * >* LunaTraits< std::set< osg::Drawable * > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::set< osg::Drawable * > >::_bind_dtor(std::set< osg::Drawable * >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::set< osg::Drawable * > >::className[] = "std_set_osg_Drawable_ptr";
const char LunaTraits< std::set< osg::Drawable * > >::fullName[] = "std::set< osg::Drawable * >";
const char LunaTraits< std::set< osg::Drawable * > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::Drawable * > >::parents[] = {0};
const int LunaTraits< std::set< osg::Drawable * > >::hash = 76374875;
const int LunaTraits< std::set< osg::Drawable * > >::uniqueIDs[] = {76374875,0};

luna_RegType LunaTraits< std::set< osg::Drawable * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_Drawable_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_Drawable_ptr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::Drawable * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::Drawable * > >::enumValues[] = {
	{0,0}
};

