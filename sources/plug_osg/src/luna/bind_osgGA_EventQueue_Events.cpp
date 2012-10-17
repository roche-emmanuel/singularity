#include <plug_common.h>

class luna_wrapper_osgGA_EventQueue_Events {
public:
	typedef Luna< osgGA::EventQueue::Events > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42735238) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgGA::EventQueue::Events*)");
		}

		osgGA::EventQueue::Events* rhs =(Luna< osgGA::EventQueue::Events >::check(L,2));
		osgGA::EventQueue::Events* self=(Luna< osgGA::EventQueue::Events >::check(L,1));
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

		osgGA::EventQueue::Events* self=(Luna< osgGA::EventQueue::Events >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgGA::EventQueue::Events");
		
		return luna_dynamicCast(L,converters,"osgGA::EventQueue::Events",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgGA::EventQueue::Events* LunaTraits< osgGA::EventQueue::Events >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgGA::EventQueue::Events >::_bind_dtor(osgGA::EventQueue::Events* obj) {
	delete obj;
}

const char LunaTraits< osgGA::EventQueue::Events >::className[] = "Events";
const char LunaTraits< osgGA::EventQueue::Events >::fullName[] = "osgGA::EventQueue::Events";
const char LunaTraits< osgGA::EventQueue::Events >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::EventQueue::Events >::parents[] = {0};
const int LunaTraits< osgGA::EventQueue::Events >::hash = 42735238;
const int LunaTraits< osgGA::EventQueue::Events >::uniqueIDs[] = {42735238,0};

luna_RegType LunaTraits< osgGA::EventQueue::Events >::methods[] = {
	{"dynCast", &luna_wrapper_osgGA_EventQueue_Events::_bind_dynCast},
	{"__eq", &luna_wrapper_osgGA_EventQueue_Events::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::EventQueue::Events >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::EventQueue::Events >::enumValues[] = {
	{0,0}
};


