#include <plug_common.h>

class luna_wrapper_osgUtil_RenderStage_Attachment {
public:
	typedef Luna< osgUtil::RenderStage::Attachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25782964) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::RenderStage::Attachment*)");
		}

		osgUtil::RenderStage::Attachment* rhs =(Luna< osgUtil::RenderStage::Attachment >::check(L,2));
		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
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

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderStage::Attachment");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderStage::Attachment",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::RenderStage::Attachment* LunaTraits< osgUtil::RenderStage::Attachment >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::RenderStage::Attachment >::_bind_dtor(osgUtil::RenderStage::Attachment* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderStage::Attachment >::className[] = "Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::fullName[] = "osgUtil::RenderStage::Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderStage::Attachment >::parents[] = {0};
const int LunaTraits< osgUtil::RenderStage::Attachment >::hash = 25782964;
const int LunaTraits< osgUtil::RenderStage::Attachment >::uniqueIDs[] = {25782964,0};

luna_RegType LunaTraits< osgUtil::RenderStage::Attachment >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderStage::Attachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderStage::Attachment >::enumValues[] = {
	{0,0}
};


