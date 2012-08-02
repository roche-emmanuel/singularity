#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_short {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< short > > luna_t;

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

		osg::ValueObjectClassNameTrait< short >* self=(Luna< osg::ValueObjectClassNameTrait< short > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< short >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< short >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< short >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< short >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< short >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< short >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< short >* LunaTraits< osg::ValueObjectClassNameTrait< short > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< short > >::_bind_dtor(osg::ValueObjectClassNameTrait< short >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< short > >::className[] = "ValueObjectClassNameTrait_short";
const char LunaTraits< osg::ValueObjectClassNameTrait< short > >::fullName[] = "osg::ValueObjectClassNameTrait< short >";
const char LunaTraits< osg::ValueObjectClassNameTrait< short > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< short > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< short > >::hash = 73401234;
const int LunaTraits< osg::ValueObjectClassNameTrait< short > >::uniqueIDs[] = {73401234,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< short > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_short::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_short::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< short > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< short > >::enumValues[] = {
	{0,0}
};


