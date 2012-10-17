#include <plug_common.h>

class luna_wrapper_osg_Vec3dList {
public:
	typedef Luna< osg::Vec3dList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38387791) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec3dList*)");
		}

		osg::Vec3dList* rhs =(Luna< osg::Vec3dList >::check(L,2));
		osg::Vec3dList* self=(Luna< osg::Vec3dList >::check(L,1));
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

		osg::Vec3dList* self=(Luna< osg::Vec3dList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3dList");
		
		return luna_dynamicCast(L,converters,"osg::Vec3dList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3dList* LunaTraits< osg::Vec3dList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec3dList >::_bind_dtor(osg::Vec3dList* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3dList >::className[] = "Vec3dList";
const char LunaTraits< osg::Vec3dList >::fullName[] = "osg::Vec3dList";
const char LunaTraits< osg::Vec3dList >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3dList >::parents[] = {0};
const int LunaTraits< osg::Vec3dList >::hash = 38387791;
const int LunaTraits< osg::Vec3dList >::uniqueIDs[] = {38387791,0};

luna_RegType LunaTraits< osg::Vec3dList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3dList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec3dList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3dList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3dList >::enumValues[] = {
	{0,0}
};


