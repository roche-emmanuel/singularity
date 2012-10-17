#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin_StateGraphList {
public:
	typedef Luna< osgUtil::RenderBin::StateGraphList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60103097) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::RenderBin::StateGraphList*)");
		}

		osgUtil::RenderBin::StateGraphList* rhs =(Luna< osgUtil::RenderBin::StateGraphList >::check(L,2));
		osgUtil::RenderBin::StateGraphList* self=(Luna< osgUtil::RenderBin::StateGraphList >::check(L,1));
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

		osgUtil::RenderBin::StateGraphList* self=(Luna< osgUtil::RenderBin::StateGraphList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderBin::StateGraphList");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderBin::StateGraphList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::RenderBin::StateGraphList* LunaTraits< osgUtil::RenderBin::StateGraphList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::RenderBin::StateGraphList >::_bind_dtor(osgUtil::RenderBin::StateGraphList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderBin::StateGraphList >::className[] = "StateGraphList";
const char LunaTraits< osgUtil::RenderBin::StateGraphList >::fullName[] = "osgUtil::RenderBin::StateGraphList";
const char LunaTraits< osgUtil::RenderBin::StateGraphList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::StateGraphList >::parents[] = {0};
const int LunaTraits< osgUtil::RenderBin::StateGraphList >::hash = 60103097;
const int LunaTraits< osgUtil::RenderBin::StateGraphList >::uniqueIDs[] = {60103097,0};

luna_RegType LunaTraits< osgUtil::RenderBin::StateGraphList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_RenderBin_StateGraphList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_RenderBin_StateGraphList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::StateGraphList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::StateGraphList >::enumValues[] = {
	{0,0}
};


