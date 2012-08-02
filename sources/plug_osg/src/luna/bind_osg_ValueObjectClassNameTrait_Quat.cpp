#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Quat {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Quat > > luna_t;

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

		osg::ValueObjectClassNameTrait< Quat >* self=(Luna< osg::ValueObjectClassNameTrait< Quat > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Quat >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Quat >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Quat >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Quat >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Quat >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Quat >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Quat >* LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::_bind_dtor(osg::ValueObjectClassNameTrait< Quat >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::className[] = "ValueObjectClassNameTrait_Quat";
const char LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::fullName[] = "osg::ValueObjectClassNameTrait< Quat >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::hash = 59919919;
const int LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::uniqueIDs[] = {59919919,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Quat::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Quat::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Quat > >::enumValues[] = {
	{0,0}
};


