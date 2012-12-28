#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin_RenderLeafList {
public:
	typedef Luna< osgUtil::RenderBin::RenderLeafList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21382558) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::RenderBin::RenderLeafList*)");
		}

		osgUtil::RenderBin::RenderLeafList* rhs =(Luna< osgUtil::RenderBin::RenderLeafList >::check(L,2));
		osgUtil::RenderBin::RenderLeafList* self=(Luna< osgUtil::RenderBin::RenderLeafList >::check(L,1));
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

		osgUtil::RenderBin::RenderLeafList* self=(Luna< osgUtil::RenderBin::RenderLeafList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderBin::RenderLeafList");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderBin::RenderLeafList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::RenderBin::RenderLeafList* LunaTraits< osgUtil::RenderBin::RenderLeafList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::RenderBin::RenderLeafList >::_bind_dtor(osgUtil::RenderBin::RenderLeafList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderBin::RenderLeafList >::className[] = "RenderLeafList";
const char LunaTraits< osgUtil::RenderBin::RenderLeafList >::fullName[] = "osgUtil::RenderBin::RenderLeafList";
const char LunaTraits< osgUtil::RenderBin::RenderLeafList >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::RenderBin::RenderLeafList >::parents[] = {0};
const int LunaTraits< osgUtil::RenderBin::RenderLeafList >::hash = 21382558;
const int LunaTraits< osgUtil::RenderBin::RenderLeafList >::uniqueIDs[] = {21382558,0};

luna_RegType LunaTraits< osgUtil::RenderBin::RenderLeafList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_RenderBin_RenderLeafList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_RenderBin_RenderLeafList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::RenderLeafList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::RenderLeafList >::enumValues[] = {
	{0,0}
};


