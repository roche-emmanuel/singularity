#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_std_string {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12315749) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< std::string >*)");
		}

		osg::ValueObjectClassNameTrait< std::string >* rhs =(Luna< osg::ValueObjectClassNameTrait< std::string > >::check(L,2));
		osg::ValueObjectClassNameTrait< std::string >* self=(Luna< osg::ValueObjectClassNameTrait< std::string > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< std::string >* self=(Luna< osg::ValueObjectClassNameTrait< std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< std::string >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< std::string >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< std::string >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< std::string >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< std::string >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< std::string >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< std::string >* LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::_bind_dtor(osg::ValueObjectClassNameTrait< std::string >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::className[] = "ValueObjectClassNameTrait_std_string";
const char LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::fullName[] = "osg::ValueObjectClassNameTrait< std::string >";
const char LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::hash = 12315749;
const int LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::uniqueIDs[] = {12315749,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_std_string::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_std_string::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< std::string > >::enumValues[] = {
	{0,0}
};


