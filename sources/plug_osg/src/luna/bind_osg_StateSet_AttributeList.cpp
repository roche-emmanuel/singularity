#include <plug_common.h>

class luna_wrapper_osg_StateSet_AttributeList {
public:
	typedef Luna< osg::StateSet::AttributeList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84373691) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateSet::AttributeList*)");
		}

		osg::StateSet::AttributeList* rhs =(Luna< osg::StateSet::AttributeList >::check(L,2));
		osg::StateSet::AttributeList* self=(Luna< osg::StateSet::AttributeList >::check(L,1));
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

		osg::StateSet::AttributeList* self=(Luna< osg::StateSet::AttributeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateSet::AttributeList");
		
		return luna_dynamicCast(L,converters,"osg::StateSet::AttributeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::StateSet::AttributeList* LunaTraits< osg::StateSet::AttributeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::StateSet::AttributeList >::_bind_dtor(osg::StateSet::AttributeList* obj) {
	delete obj;
}

const char LunaTraits< osg::StateSet::AttributeList >::className[] = "AttributeList";
const char LunaTraits< osg::StateSet::AttributeList >::fullName[] = "osg::StateSet::AttributeList";
const char LunaTraits< osg::StateSet::AttributeList >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet::AttributeList >::parents[] = {0};
const int LunaTraits< osg::StateSet::AttributeList >::hash = 84373691;
const int LunaTraits< osg::StateSet::AttributeList >::uniqueIDs[] = {84373691,0};

luna_RegType LunaTraits< osg::StateSet::AttributeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_StateSet_AttributeList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateSet_AttributeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet::AttributeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet::AttributeList >::enumValues[] = {
	{0,0}
};


