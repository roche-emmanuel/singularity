#include <plug_common.h>

class luna_wrapper_osgUtil_StatsVisitor_NodeSet {
public:
	typedef Luna< osgUtil::StatsVisitor::NodeSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22793184) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::StatsVisitor::NodeSet*)");
		}

		osgUtil::StatsVisitor::NodeSet* rhs =(Luna< osgUtil::StatsVisitor::NodeSet >::check(L,2));
		osgUtil::StatsVisitor::NodeSet* self=(Luna< osgUtil::StatsVisitor::NodeSet >::check(L,1));
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

		osgUtil::StatsVisitor::NodeSet* self=(Luna< osgUtil::StatsVisitor::NodeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StatsVisitor::NodeSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::StatsVisitor::NodeSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StatsVisitor::NodeSet* LunaTraits< osgUtil::StatsVisitor::NodeSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::StatsVisitor::NodeSet >::_bind_dtor(osgUtil::StatsVisitor::NodeSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::StatsVisitor::NodeSet >::className[] = "NodeSet";
const char LunaTraits< osgUtil::StatsVisitor::NodeSet >::fullName[] = "osgUtil::StatsVisitor::NodeSet";
const char LunaTraits< osgUtil::StatsVisitor::NodeSet >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StatsVisitor::NodeSet >::parents[] = {0};
const int LunaTraits< osgUtil::StatsVisitor::NodeSet >::hash = 22793184;
const int LunaTraits< osgUtil::StatsVisitor::NodeSet >::uniqueIDs[] = {22793184,0};

luna_RegType LunaTraits< osgUtil::StatsVisitor::NodeSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StatsVisitor_NodeSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_StatsVisitor_NodeSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StatsVisitor::NodeSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StatsVisitor::NodeSet >::enumValues[] = {
	{0,0}
};


