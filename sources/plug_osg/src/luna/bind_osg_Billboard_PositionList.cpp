#include <plug_common.h>

class luna_wrapper_osg_Billboard_PositionList {
public:
	typedef Luna< osg::Billboard::PositionList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75373010) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Billboard::PositionList*)");
		}

		osg::Billboard::PositionList* rhs =(Luna< osg::Billboard::PositionList >::check(L,2));
		osg::Billboard::PositionList* self=(Luna< osg::Billboard::PositionList >::check(L,1));
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

		osg::Billboard::PositionList* self=(Luna< osg::Billboard::PositionList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Billboard::PositionList");
		
		return luna_dynamicCast(L,converters,"osg::Billboard::PositionList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Billboard::PositionList* LunaTraits< osg::Billboard::PositionList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Billboard::PositionList >::_bind_dtor(osg::Billboard::PositionList* obj) {
	delete obj;
}

const char LunaTraits< osg::Billboard::PositionList >::className[] = "PositionList";
const char LunaTraits< osg::Billboard::PositionList >::fullName[] = "osg::Billboard::PositionList";
const char LunaTraits< osg::Billboard::PositionList >::moduleName[] = "osg";
const char* LunaTraits< osg::Billboard::PositionList >::parents[] = {0};
const int LunaTraits< osg::Billboard::PositionList >::hash = 75373010;
const int LunaTraits< osg::Billboard::PositionList >::uniqueIDs[] = {75373010,0};

luna_RegType LunaTraits< osg::Billboard::PositionList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Billboard_PositionList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Billboard_PositionList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Billboard::PositionList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Billboard::PositionList >::enumValues[] = {
	{0,0}
};


