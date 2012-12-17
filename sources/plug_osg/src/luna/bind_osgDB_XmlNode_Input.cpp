#include <plug_common.h>

class luna_wrapper_osgDB_XmlNode_Input {
public:
	typedef Luna< osgDB::XmlNode::Input > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63781548) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::XmlNode::Input*)");
		}

		osgDB::XmlNode::Input* rhs =(Luna< osgDB::XmlNode::Input >::check(L,2));
		osgDB::XmlNode::Input* self=(Luna< osgDB::XmlNode::Input >::check(L,1));
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

		osgDB::XmlNode::Input* self=(Luna< osgDB::XmlNode::Input >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::XmlNode::Input");
		
		return luna_dynamicCast(L,converters,"osgDB::XmlNode::Input",name);
	}


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
}

void LunaTraits< osgDB::XmlNode::Input >::_bind_dtor(osgDB::XmlNode::Input* obj) {
	delete obj;
}

const char LunaTraits< osgDB::XmlNode::Input >::className[] = "Input";
const char LunaTraits< osgDB::XmlNode::Input >::fullName[] = "osgDB::XmlNode::Input";
const char LunaTraits< osgDB::XmlNode::Input >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode::Input >::parents[] = {0};
const int LunaTraits< osgDB::XmlNode::Input >::hash = 63781548;
const int LunaTraits< osgDB::XmlNode::Input >::uniqueIDs[] = {63781548,0};

luna_RegType LunaTraits< osgDB::XmlNode::Input >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_XmlNode_Input::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_XmlNode_Input::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode::Input >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode::Input >::enumValues[] = {
	{0,0}
};


