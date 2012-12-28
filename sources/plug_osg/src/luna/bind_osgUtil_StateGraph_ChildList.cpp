#include <plug_common.h>

class luna_wrapper_osgUtil_StateGraph_ChildList {
public:
	typedef Luna< osgUtil::StateGraph::ChildList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8678160) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::StateGraph::ChildList*)");
		}

		osgUtil::StateGraph::ChildList* rhs =(Luna< osgUtil::StateGraph::ChildList >::check(L,2));
		osgUtil::StateGraph::ChildList* self=(Luna< osgUtil::StateGraph::ChildList >::check(L,1));
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

		osgUtil::StateGraph::ChildList* self=(Luna< osgUtil::StateGraph::ChildList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StateGraph::ChildList");
		
		return luna_dynamicCast(L,converters,"osgUtil::StateGraph::ChildList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StateGraph::ChildList* LunaTraits< osgUtil::StateGraph::ChildList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::StateGraph::ChildList >::_bind_dtor(osgUtil::StateGraph::ChildList* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::StateGraph::ChildList >::className[] = "ChildList";
const char LunaTraits< osgUtil::StateGraph::ChildList >::fullName[] = "osgUtil::StateGraph::ChildList";
const char LunaTraits< osgUtil::StateGraph::ChildList >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::StateGraph::ChildList >::parents[] = {0};
const int LunaTraits< osgUtil::StateGraph::ChildList >::hash = 8678160;
const int LunaTraits< osgUtil::StateGraph::ChildList >::uniqueIDs[] = {8678160,0};

luna_RegType LunaTraits< osgUtil::StateGraph::ChildList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StateGraph_ChildList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_StateGraph_ChildList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateGraph::ChildList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateGraph::ChildList >::enumValues[] = {
	{0,0}
};


