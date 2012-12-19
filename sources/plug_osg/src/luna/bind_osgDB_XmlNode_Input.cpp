#include <plug_common.h>

class luna_wrapper_osgDB_XmlNode_Input {
public:
	typedef Luna< osgDB::XmlNode::Input > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95509303) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::XmlNode::ControlMap*)");
		}

		osgDB::XmlNode::ControlMap* rhs =(Luna< osgDB::XmlNode::ControlMap >::check(L,2));
		osgDB::XmlNode::ControlMap* self=(Luna< osgDB::XmlNode::ControlMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_ControlMap(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::XmlNode::Input* ptr= dynamic_cast< osgDB::XmlNode::Input* >(Luna< osgDB::XmlNode::ControlMap >::check(L,1));
		osgDB::XmlNode::Input* ptr= luna_caster< osgDB::XmlNode::ControlMap, osgDB::XmlNode::Input >::cast(Luna< osgDB::XmlNode::ControlMap >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::XmlNode::Input >::push(L,ptr,false);
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

osgDB::XmlNode::Input* LunaTraits< osgDB::XmlNode::Input >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::XmlNode::Input >::_bind_dtor(osgDB::XmlNode::Input* obj) {
	delete obj;
}

const char LunaTraits< osgDB::XmlNode::Input >::className[] = "Input";
const char LunaTraits< osgDB::XmlNode::Input >::fullName[] = "osgDB::XmlNode::Input";
const char LunaTraits< osgDB::XmlNode::Input >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode::Input >::parents[] = {"osgDB.ControlMap", 0};
const int LunaTraits< osgDB::XmlNode::Input >::hash = 63781548;
const int LunaTraits< osgDB::XmlNode::Input >::uniqueIDs[] = {95509303,0};

luna_RegType LunaTraits< osgDB::XmlNode::Input >::methods[] = {
	{"__eq", &luna_wrapper_osgDB_XmlNode_Input::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode::Input >::converters[] = {
	{"osgDB::XmlNode::ControlMap", &luna_wrapper_osgDB_XmlNode_Input::_cast_from_ControlMap},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode::Input >::enumValues[] = {
	{0,0}
};


