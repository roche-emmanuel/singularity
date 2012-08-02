#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin_RenderBinList {
public:
	typedef Luna< osgUtil::RenderBin::RenderBinList > luna_t;

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

		osgUtil::RenderBin::RenderBinList* self=(Luna< osgUtil::RenderBin::RenderBinList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderBin::RenderBinList");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderBin::RenderBinList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::RenderBin::RenderBinList* LunaTraits< osgUtil::RenderBin::RenderBinList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::RenderBin::RenderBinList >::_bind_dtor(osgUtil::RenderBin::RenderBinList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderBin::RenderBinList >::className[] = "RenderBinList";
const char LunaTraits< osgUtil::RenderBin::RenderBinList >::fullName[] = "osgUtil::RenderBin::RenderBinList";
const char LunaTraits< osgUtil::RenderBin::RenderBinList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::RenderBinList >::parents[] = {0};
const int LunaTraits< osgUtil::RenderBin::RenderBinList >::hash = 38528519;
const int LunaTraits< osgUtil::RenderBin::RenderBinList >::uniqueIDs[] = {38528519,0};

luna_RegType LunaTraits< osgUtil::RenderBin::RenderBinList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_RenderBin_RenderBinList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::RenderBinList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::RenderBinList >::enumValues[] = {
	{0,0}
};


