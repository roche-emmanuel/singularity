#include <plug_common.h>

class luna_wrapper_osgDB_XmlNode_ControlMap {
public:
	typedef Luna< osgDB::XmlNode::ControlMap > luna_t;

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

		osgDB::XmlNode::ControlMap* self=(Luna< osgDB::XmlNode::ControlMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::XmlNode::ControlMap");
		
		return luna_dynamicCast(L,converters,"osgDB::XmlNode::ControlMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::XmlNode::ControlMap* LunaTraits< osgDB::XmlNode::ControlMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::XmlNode::ControlMap >::_bind_dtor(osgDB::XmlNode::ControlMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::XmlNode::ControlMap >::className[] = "ControlMap";
const char LunaTraits< osgDB::XmlNode::ControlMap >::fullName[] = "osgDB::XmlNode::ControlMap";
const char LunaTraits< osgDB::XmlNode::ControlMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode::ControlMap >::parents[] = {0};
const int LunaTraits< osgDB::XmlNode::ControlMap >::hash = 95509303;
const int LunaTraits< osgDB::XmlNode::ControlMap >::uniqueIDs[] = {95509303,0};

luna_RegType LunaTraits< osgDB::XmlNode::ControlMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_XmlNode_ControlMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_XmlNode_ControlMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode::ControlMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode::ControlMap >::enumValues[] = {
	{0,0}
};

