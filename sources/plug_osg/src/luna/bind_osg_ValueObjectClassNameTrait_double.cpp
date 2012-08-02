#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_double {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< double > > luna_t;

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

		osg::ValueObjectClassNameTrait< double >* self=(Luna< osg::ValueObjectClassNameTrait< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< double >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< double >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< double >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< double >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< double >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< double >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< double >* LunaTraits< osg::ValueObjectClassNameTrait< double > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< double > >::_bind_dtor(osg::ValueObjectClassNameTrait< double >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< double > >::className[] = "ValueObjectClassNameTrait_double";
const char LunaTraits< osg::ValueObjectClassNameTrait< double > >::fullName[] = "osg::ValueObjectClassNameTrait< double >";
const char LunaTraits< osg::ValueObjectClassNameTrait< double > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< double > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< double > >::hash = 55730813;
const int LunaTraits< osg::ValueObjectClassNameTrait< double > >::uniqueIDs[] = {55730813,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< double > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_double::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_double::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< double > >::enumValues[] = {
	{0,0}
};


