#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ProxyNode.h>

class luna_wrapper_osg_ProxyNode {
public:
	typedef Luna< osg::ProxyNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::ProxyNode* ptr= dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		osg::ProxyNode* ptr= luna_caster< osg::Referenced, osg::ProxyNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProxyNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ProxyNode* LunaTraits< osg::ProxyNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ProxyNode >::_bind_dtor(osg::ProxyNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProxyNode >::className[] = "ProxyNode";
const char LunaTraits< osg::ProxyNode >::fullName[] = "osg::ProxyNode";
const char LunaTraits< osg::ProxyNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ProxyNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ProxyNode >::hash = 1600235;
const int LunaTraits< osg::ProxyNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProxyNode >::methods[] = {
	{"__eq", &luna_wrapper_osg_ProxyNode::_bind___eq},
	{"getTable", &luna_wrapper_osg_ProxyNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProxyNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProxyNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProxyNode >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::ProxyNode::USER_DEFINED_CENTER},
	{"LOAD_IMMEDIATELY", osg::ProxyNode::LOAD_IMMEDIATELY},
	{"DEFER_LOADING_TO_DATABASE_PAGER", osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER},
	{"NO_AUTOMATIC_LOADING", osg::ProxyNode::NO_AUTOMATIC_LOADING},
	{0,0}
};


