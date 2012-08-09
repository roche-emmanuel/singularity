#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_bool {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< bool > > luna_t;

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

		osg::ValueObjectClassNameTrait< bool >* self=(Luna< osg::ValueObjectClassNameTrait< bool > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< bool >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< bool >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< bool >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< bool >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< bool >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< bool >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< bool >* LunaTraits< osg::ValueObjectClassNameTrait< bool > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< bool > >::_bind_dtor(osg::ValueObjectClassNameTrait< bool >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::className[] = "ValueObjectClassNameTrait_bool";
const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::fullName[] = "osg::ValueObjectClassNameTrait< bool >";
const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< bool > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< bool > >::hash = 41483556;
const int LunaTraits< osg::ValueObjectClassNameTrait< bool > >::uniqueIDs[] = {41483556,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::enumValues[] = {
	{0,0}
};

