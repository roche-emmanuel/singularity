#include <plug_common.h>

class luna_wrapper_osg_DeleteHandler_FrameNumberObjectPair {
public:
	typedef Luna< osg::DeleteHandler::FrameNumberObjectPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33538310) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::DeleteHandler::FrameNumberObjectPair*)");
		}

		osg::DeleteHandler::FrameNumberObjectPair* rhs =(Luna< osg::DeleteHandler::FrameNumberObjectPair >::check(L,2));
		osg::DeleteHandler::FrameNumberObjectPair* self=(Luna< osg::DeleteHandler::FrameNumberObjectPair >::check(L,1));
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

		osg::DeleteHandler::FrameNumberObjectPair* self=(Luna< osg::DeleteHandler::FrameNumberObjectPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DeleteHandler::FrameNumberObjectPair");
		
		return luna_dynamicCast(L,converters,"osg::DeleteHandler::FrameNumberObjectPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::DeleteHandler::FrameNumberObjectPair* LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::_bind_dtor(osg::DeleteHandler::FrameNumberObjectPair* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::className[] = "FrameNumberObjectPair";
const char LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::fullName[] = "osg::DeleteHandler::FrameNumberObjectPair";
const char LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::moduleName[] = "osg";
const char* LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::parents[] = {0};
const int LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::hash = 33538310;
const int LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::uniqueIDs[] = {33538310,0};

luna_RegType LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::methods[] = {
	{"dynCast", &luna_wrapper_osg_DeleteHandler_FrameNumberObjectPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_DeleteHandler_FrameNumberObjectPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DeleteHandler::FrameNumberObjectPair >::enumValues[] = {
	{0,0}
};


