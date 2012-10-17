#include <plug_common.h>

class luna_wrapper_osg_MatrixdValueObject {
public:
	typedef Luna< osg::MatrixdValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1898386) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MatrixdValueObject*)");
		}

		osg::MatrixdValueObject* rhs =(Luna< osg::MatrixdValueObject >::check(L,2));
		osg::MatrixdValueObject* self=(Luna< osg::MatrixdValueObject >::check(L,1));
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

		osg::MatrixdValueObject* self=(Luna< osg::MatrixdValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MatrixdValueObject");
		
		return luna_dynamicCast(L,converters,"osg::MatrixdValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::MatrixdValueObject* LunaTraits< osg::MatrixdValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::MatrixdValueObject >::_bind_dtor(osg::MatrixdValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::MatrixdValueObject >::className[] = "MatrixdValueObject";
const char LunaTraits< osg::MatrixdValueObject >::fullName[] = "osg::MatrixdValueObject";
const char LunaTraits< osg::MatrixdValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixdValueObject >::parents[] = {0};
const int LunaTraits< osg::MatrixdValueObject >::hash = 1898386;
const int LunaTraits< osg::MatrixdValueObject >::uniqueIDs[] = {1898386,0};

luna_RegType LunaTraits< osg::MatrixdValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MatrixdValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MatrixdValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixdValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixdValueObject >::enumValues[] = {
	{0,0}
};


