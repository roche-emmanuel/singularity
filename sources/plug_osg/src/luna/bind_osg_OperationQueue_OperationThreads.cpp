#include <plug_common.h>

class luna_wrapper_osg_OperationQueue_OperationThreads {
public:
	typedef Luna< osg::OperationQueue::OperationThreads > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14844916) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::OperationQueue::OperationThreads*)");
		}

		osg::OperationQueue::OperationThreads* rhs =(Luna< osg::OperationQueue::OperationThreads >::check(L,2));
		osg::OperationQueue::OperationThreads* self=(Luna< osg::OperationQueue::OperationThreads >::check(L,1));
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

		osg::OperationQueue::OperationThreads* self=(Luna< osg::OperationQueue::OperationThreads >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::OperationQueue::OperationThreads");
		
		return luna_dynamicCast(L,converters,"osg::OperationQueue::OperationThreads",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::OperationQueue::OperationThreads* LunaTraits< osg::OperationQueue::OperationThreads >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::OperationQueue::OperationThreads >::_bind_dtor(osg::OperationQueue::OperationThreads* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::OperationQueue::OperationThreads >::className[] = "OperationThreads";
const char LunaTraits< osg::OperationQueue::OperationThreads >::fullName[] = "osg::OperationQueue::OperationThreads";
const char LunaTraits< osg::OperationQueue::OperationThreads >::moduleName[] = "osg";
const char* LunaTraits< osg::OperationQueue::OperationThreads >::parents[] = {0};
const int LunaTraits< osg::OperationQueue::OperationThreads >::hash = 14844916;
const int LunaTraits< osg::OperationQueue::OperationThreads >::uniqueIDs[] = {14844916,0};

luna_RegType LunaTraits< osg::OperationQueue::OperationThreads >::methods[] = {
	{"dynCast", &luna_wrapper_osg_OperationQueue_OperationThreads::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_OperationQueue_OperationThreads::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OperationQueue::OperationThreads >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OperationQueue::OperationThreads >::enumValues[] = {
	{0,0}
};


