#include <plug_common.h>

class luna_wrapper_osgDB_XmlNode_Children {
public:
	typedef Luna< osgDB::XmlNode::Children > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5928633) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::XmlNode::Children*)");
		}

		osgDB::XmlNode::Children* rhs =(Luna< osgDB::XmlNode::Children >::check(L,2));
		osgDB::XmlNode::Children* self=(Luna< osgDB::XmlNode::Children >::check(L,1));
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

		osgDB::XmlNode::Children* self=(Luna< osgDB::XmlNode::Children >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::XmlNode::Children");
		
		return luna_dynamicCast(L,converters,"osgDB::XmlNode::Children",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::XmlNode::Children* LunaTraits< osgDB::XmlNode::Children >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::XmlNode::Children >::_bind_dtor(osgDB::XmlNode::Children* obj) {
	delete obj;
}

const char LunaTraits< osgDB::XmlNode::Children >::className[] = "Children";
const char LunaTraits< osgDB::XmlNode::Children >::fullName[] = "osgDB::XmlNode::Children";
const char LunaTraits< osgDB::XmlNode::Children >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode::Children >::parents[] = {0};
const int LunaTraits< osgDB::XmlNode::Children >::hash = 5928633;
const int LunaTraits< osgDB::XmlNode::Children >::uniqueIDs[] = {5928633,0};

luna_RegType LunaTraits< osgDB::XmlNode::Children >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_XmlNode_Children::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_XmlNode_Children::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode::Children >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode::Children >::enumValues[] = {
	{0,0}
};


