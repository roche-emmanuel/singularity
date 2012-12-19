#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_char {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< char > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63236752) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< char >*)");
		}

		osg::ValueObjectClassNameTrait< char >* rhs =(Luna< osg::ValueObjectClassNameTrait< char > >::check(L,2));
		osg::ValueObjectClassNameTrait< char >* self=(Luna< osg::ValueObjectClassNameTrait< char > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< char >* self=(Luna< osg::ValueObjectClassNameTrait< char > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< char >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< char >",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static const char * osg::ValueObjectClassNameTrait< char >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< char >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< char >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< char >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< char >* LunaTraits< osg::ValueObjectClassNameTrait< char > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ValueObjectClassNameTrait< char > >::_bind_dtor(osg::ValueObjectClassNameTrait< char >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< char > >::className[] = "ValueObjectClassNameTrait_char";
const char LunaTraits< osg::ValueObjectClassNameTrait< char > >::fullName[] = "osg::ValueObjectClassNameTrait< char >";
const char LunaTraits< osg::ValueObjectClassNameTrait< char > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< char > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< char > >::hash = 63236752;
const int LunaTraits< osg::ValueObjectClassNameTrait< char > >::uniqueIDs[] = {63236752,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< char > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_char::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_char::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_char::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< char > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< char > >::enumValues[] = {
	{0,0}
};


