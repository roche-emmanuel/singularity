#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_int {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63101669) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< unsigned int >*)");
		}

		osg::ValueObjectClassNameTrait< unsigned int >* rhs =(Luna< osg::ValueObjectClassNameTrait< unsigned int > >::check(L,2));
		osg::ValueObjectClassNameTrait< unsigned int >* self=(Luna< osg::ValueObjectClassNameTrait< unsigned int > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< unsigned int >* self=(Luna< osg::ValueObjectClassNameTrait< unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< unsigned int >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< unsigned int >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< unsigned int >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< unsigned int >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< unsigned int >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< unsigned int >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< unsigned int >* LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::_bind_dtor(osg::ValueObjectClassNameTrait< unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::className[] = "ValueObjectClassNameTrait_unsigned_int";
const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::fullName[] = "osg::ValueObjectClassNameTrait< unsigned int >";
const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::hash = 63101669;
const int LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::uniqueIDs[] = {63101669,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_int::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_int::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > >::enumValues[] = {
	{0,0}
};


