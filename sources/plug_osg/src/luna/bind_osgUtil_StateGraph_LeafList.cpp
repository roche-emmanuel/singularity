#include <plug_common.h>

class luna_wrapper_osgUtil_StateGraph_LeafList {
public:
	typedef Luna< osgUtil::StateGraph::LeafList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32098161) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::StateGraph::LeafList*)");
		}

		osgUtil::StateGraph::LeafList* rhs =(Luna< osgUtil::StateGraph::LeafList >::check(L,2));
		osgUtil::StateGraph::LeafList* self=(Luna< osgUtil::StateGraph::LeafList >::check(L,1));
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

		osgUtil::StateGraph::LeafList* self=(Luna< osgUtil::StateGraph::LeafList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StateGraph::LeafList");
		
		return luna_dynamicCast(L,converters,"osgUtil::StateGraph::LeafList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StateGraph::LeafList* LunaTraits< osgUtil::StateGraph::LeafList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::StateGraph::LeafList >::_bind_dtor(osgUtil::StateGraph::LeafList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::StateGraph::LeafList >::className[] = "LeafList";
const char LunaTraits< osgUtil::StateGraph::LeafList >::fullName[] = "osgUtil::StateGraph::LeafList";
const char LunaTraits< osgUtil::StateGraph::LeafList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateGraph::LeafList >::parents[] = {0};
const int LunaTraits< osgUtil::StateGraph::LeafList >::hash = 32098161;
const int LunaTraits< osgUtil::StateGraph::LeafList >::uniqueIDs[] = {32098161,0};

luna_RegType LunaTraits< osgUtil::StateGraph::LeafList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StateGraph_LeafList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_StateGraph_LeafList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateGraph::LeafList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateGraph::LeafList >::enumValues[] = {
	{0,0}
};


