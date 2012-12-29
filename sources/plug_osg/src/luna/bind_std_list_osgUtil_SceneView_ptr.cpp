#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osgUtil_SceneView_ptr {
public:
	typedef Luna< std::list< osgUtil::SceneView * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40422532) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osgUtil::SceneView * >*)");
		}

		std::list< osgUtil::SceneView * >* rhs =(Luna< std::list< osgUtil::SceneView * > >::check(L,2));
		std::list< osgUtil::SceneView * >* self=(Luna< std::list< osgUtil::SceneView * > >::check(L,1));
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

		std::list< osgUtil::SceneView * >* self=(Luna< std::list< osgUtil::SceneView * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osgUtil::SceneView * >");
		
		return luna_dynamicCast(L,converters,"std::list< osgUtil::SceneView * >",name);
	}
};

std::list< osgUtil::SceneView * >* LunaTraits< std::list< osgUtil::SceneView * > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::list< osgUtil::SceneView * > >::_bind_dtor(std::list< osgUtil::SceneView * >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::list< osgUtil::SceneView * > >::className[] = "std_list_osgUtil_SceneView_ptr";
const char LunaTraits< std::list< osgUtil::SceneView * > >::fullName[] = "std::list< osgUtil::SceneView * >";
const char LunaTraits< std::list< osgUtil::SceneView * > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osgUtil::SceneView * > >::parents[] = {0};
const int LunaTraits< std::list< osgUtil::SceneView * > >::hash = 40422532;
const int LunaTraits< std::list< osgUtil::SceneView * > >::uniqueIDs[] = {40422532,0};

luna_RegType LunaTraits< std::list< osgUtil::SceneView * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osgUtil_SceneView_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osgUtil_SceneView_ptr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osgUtil::SceneView * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osgUtil::SceneView * > >::enumValues[] = {
	{0,0}
};


