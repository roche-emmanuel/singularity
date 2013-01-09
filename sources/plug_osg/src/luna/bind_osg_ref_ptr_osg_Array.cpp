#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_Array {
public:
	typedef Luna< osg::ref_ptr< osg::Array > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74215671) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::Array >*)");
		}

		osg::ref_ptr< osg::Array >* rhs =(Luna< osg::ref_ptr< osg::Array > >::check(L,2));
		osg::ref_ptr< osg::Array >* self=(Luna< osg::ref_ptr< osg::Array > >::check(L,1));
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

		osg::ref_ptr< osg::Array >* self=(Luna< osg::ref_ptr< osg::Array > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::Array >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::Array >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ref_ptr< osg::Array >* LunaTraits< osg::ref_ptr< osg::Array > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ref_ptr< osg::Array > >::_bind_dtor(osg::ref_ptr< osg::Array >* obj) {
	delete obj;
}

const char LunaTraits< osg::ref_ptr< osg::Array > >::className[] = "ref_ptr_osg_Array";
const char LunaTraits< osg::ref_ptr< osg::Array > >::fullName[] = "osg::ref_ptr< osg::Array >";
const char LunaTraits< osg::ref_ptr< osg::Array > >::moduleName[] = "osg";
const char* LunaTraits< osg::ref_ptr< osg::Array > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::Array > >::hash = 74215671;
const int LunaTraits< osg::ref_ptr< osg::Array > >::uniqueIDs[] = {74215671,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::Array > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_Array::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_Array::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::Array > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::Array > >::enumValues[] = {
	{0,0}
};

