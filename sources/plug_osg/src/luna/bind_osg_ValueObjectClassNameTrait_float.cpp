#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_float {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< float > > luna_t;

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

		osg::ValueObjectClassNameTrait< float >* self=(Luna< osg::ValueObjectClassNameTrait< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< float >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< float >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< float >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< float >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< float >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< float >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< float >* LunaTraits< osg::ValueObjectClassNameTrait< float > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< float > >::_bind_dtor(osg::ValueObjectClassNameTrait< float >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< float > >::className[] = "ValueObjectClassNameTrait_float";
const char LunaTraits< osg::ValueObjectClassNameTrait< float > >::fullName[] = "osg::ValueObjectClassNameTrait< float >";
const char LunaTraits< osg::ValueObjectClassNameTrait< float > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< float > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< float > >::hash = 49867860;
const int LunaTraits< osg::ValueObjectClassNameTrait< float > >::uniqueIDs[] = {49867860,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< float > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_float::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_float::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< float > >::enumValues[] = {
	{0,0}
};


