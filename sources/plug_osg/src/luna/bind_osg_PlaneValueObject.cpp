#include <plug_common.h>

class luna_wrapper_osg_PlaneValueObject {
public:
	typedef Luna< osg::PlaneValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98506363) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PlaneValueObject*)");
		}

		osg::PlaneValueObject* rhs =(Luna< osg::PlaneValueObject >::check(L,2));
		osg::PlaneValueObject* self=(Luna< osg::PlaneValueObject >::check(L,1));
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

		osg::PlaneValueObject* self=(Luna< osg::PlaneValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PlaneValueObject");
		
		return luna_dynamicCast(L,converters,"osg::PlaneValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::PlaneValueObject* LunaTraits< osg::PlaneValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::PlaneValueObject >::_bind_dtor(osg::PlaneValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::PlaneValueObject >::className[] = "PlaneValueObject";
const char LunaTraits< osg::PlaneValueObject >::fullName[] = "osg::PlaneValueObject";
const char LunaTraits< osg::PlaneValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::PlaneValueObject >::parents[] = {0};
const int LunaTraits< osg::PlaneValueObject >::hash = 98506363;
const int LunaTraits< osg::PlaneValueObject >::uniqueIDs[] = {98506363,0};

luna_RegType LunaTraits< osg::PlaneValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_PlaneValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PlaneValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PlaneValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PlaneValueObject >::enumValues[] = {
	{0,0}
};


