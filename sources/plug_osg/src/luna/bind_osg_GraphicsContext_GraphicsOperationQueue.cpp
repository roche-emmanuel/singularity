#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext_GraphicsOperationQueue {
public:
	typedef Luna< osg::GraphicsContext::GraphicsOperationQueue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2003493) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GraphicsContext::GraphicsOperationQueue*)");
		}

		osg::GraphicsContext::GraphicsOperationQueue* rhs =(Luna< osg::GraphicsContext::GraphicsOperationQueue >::check(L,2));
		osg::GraphicsContext::GraphicsOperationQueue* self=(Luna< osg::GraphicsContext::GraphicsOperationQueue >::check(L,1));
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

		osg::GraphicsContext::GraphicsOperationQueue* self=(Luna< osg::GraphicsContext::GraphicsOperationQueue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GraphicsContext::GraphicsOperationQueue");
		
		return luna_dynamicCast(L,converters,"osg::GraphicsContext::GraphicsOperationQueue",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::GraphicsContext::GraphicsOperationQueue* LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::_bind_dtor(osg::GraphicsContext::GraphicsOperationQueue* obj) {
	delete obj;
}

const char LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::className[] = "GraphicsOperationQueue";
const char LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::fullName[] = "osg::GraphicsContext::GraphicsOperationQueue";
const char LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::parents[] = {0};
const int LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::hash = 2003493;
const int LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::uniqueIDs[] = {2003493,0};

luna_RegType LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GraphicsContext_GraphicsOperationQueue::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GraphicsContext_GraphicsOperationQueue::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::GraphicsOperationQueue >::enumValues[] = {
	{0,0}
};


