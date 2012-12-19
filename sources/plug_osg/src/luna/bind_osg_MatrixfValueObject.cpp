#include <plug_common.h>

class luna_wrapper_osg_MatrixfValueObject {
public:
	typedef Luna< osg::MatrixfValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42089936) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MatrixfValueObject*)");
		}

		osg::MatrixfValueObject* rhs =(Luna< osg::MatrixfValueObject >::check(L,2));
		osg::MatrixfValueObject* self=(Luna< osg::MatrixfValueObject >::check(L,1));
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

		osg::MatrixfValueObject* self=(Luna< osg::MatrixfValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MatrixfValueObject");
		
		return luna_dynamicCast(L,converters,"osg::MatrixfValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::MatrixfValueObject* LunaTraits< osg::MatrixfValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::MatrixfValueObject >::_bind_dtor(osg::MatrixfValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::MatrixfValueObject >::className[] = "MatrixfValueObject";
const char LunaTraits< osg::MatrixfValueObject >::fullName[] = "osg::MatrixfValueObject";
const char LunaTraits< osg::MatrixfValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixfValueObject >::parents[] = {0};
const int LunaTraits< osg::MatrixfValueObject >::hash = 42089936;
const int LunaTraits< osg::MatrixfValueObject >::uniqueIDs[] = {42089936,0};

luna_RegType LunaTraits< osg::MatrixfValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MatrixfValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MatrixfValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixfValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixfValueObject >::enumValues[] = {
	{0,0}
};


