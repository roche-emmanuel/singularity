#include <plug_common.h>

class luna_wrapper_osg_StateSet_TextureAttributeList {
public:
	typedef Luna< osg::StateSet::TextureAttributeList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35981382) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateSet::TextureAttributeList*)");
		}

		osg::StateSet::TextureAttributeList* rhs =(Luna< osg::StateSet::TextureAttributeList >::check(L,2));
		osg::StateSet::TextureAttributeList* self=(Luna< osg::StateSet::TextureAttributeList >::check(L,1));
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

		osg::StateSet::TextureAttributeList* self=(Luna< osg::StateSet::TextureAttributeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::TextureAttributeList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::TextureAttributeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::TextureAttributeList* LunaTraits< osg::StateSet::TextureAttributeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::StateSet::TextureAttributeList >::_bind_dtor(osg::StateSet::TextureAttributeList* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::TextureAttributeList >::className[] = "TextureAttributeList";
const char LunaTraits< osg::StateSet::TextureAttributeList >::fullName[] = "osg::StateSet::TextureAttributeList";
const char LunaTraits< osg::StateSet::TextureAttributeList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::TextureAttributeList >::parents[] = {0};
const int LunaTraits< osg::StateSet::TextureAttributeList >::hash = 35981382;
const int LunaTraits< osg::StateSet::TextureAttributeList >::uniqueIDs[] = {35981382,0};

luna_RegType LunaTraits< osg::StateSet::TextureAttributeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_TextureAttributeList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateSet_TextureAttributeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::TextureAttributeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::TextureAttributeList >::enumValues[] = {
	{0,0}
};


