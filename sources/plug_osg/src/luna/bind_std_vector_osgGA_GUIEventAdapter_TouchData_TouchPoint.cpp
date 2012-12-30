#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgGA_GUIEventAdapter_TouchData_TouchPoint {
public:
	typedef Luna< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7273346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >*)");
		}

		std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* rhs =(Luna< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::check(L,2));
		std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* self=(Luna< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::check(L,1));
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

		std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* self=(Luna< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >",name);
	}
};

std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::_bind_dtor(std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::className[] = "std_vector_osgGA_GUIEventAdapter_TouchData_TouchPoint";
const char LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::fullName[] = "std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >";
const char LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::parents[] = {0};
const int LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::hash = 7273346;
const int LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::uniqueIDs[] = {7273346,0};

luna_RegType LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgGA_GUIEventAdapter_TouchData_TouchPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::enumValues[] = {
	{0,0}
};

