#include <plug_common.h>

class luna_wrapper_osg_CharValueObject {
public:
	typedef Luna< osg::CharValueObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,310099) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::CharValueObject*)");
		}

		osg::CharValueObject* rhs =(Luna< osg::CharValueObject >::check(L,2));
		osg::CharValueObject* self=(Luna< osg::CharValueObject >::check(L,1));
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

		osg::CharValueObject* self=(Luna< osg::CharValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CharValueObject");
		
		return luna_dynamicCast(L,converters,"osg::CharValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::CharValueObject* LunaTraits< osg::CharValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::CharValueObject >::_bind_dtor(osg::CharValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::CharValueObject >::className[] = "CharValueObject";
const char LunaTraits< osg::CharValueObject >::fullName[] = "osg::CharValueObject";
const char LunaTraits< osg::CharValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::CharValueObject >::parents[] = {0};
const int LunaTraits< osg::CharValueObject >::hash = 310099;
const int LunaTraits< osg::CharValueObject >::uniqueIDs[] = {310099,0};

luna_RegType LunaTraits< osg::CharValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CharValueObject::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_CharValueObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CharValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CharValueObject >::enumValues[] = {
	{0,0}
};


