#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Vec4d {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Vec4d > > luna_t;

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

		osg::ValueObjectClassNameTrait< Vec4d >* self=(Luna< osg::ValueObjectClassNameTrait< Vec4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Vec4d >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Vec4d >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Vec4d >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Vec4d >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Vec4d >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Vec4d >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Vec4d >* LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::_bind_dtor(osg::ValueObjectClassNameTrait< Vec4d >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::className[] = "ValueObjectClassNameTrait_Vec4d";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::fullName[] = "osg::ValueObjectClassNameTrait< Vec4d >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::hash = 36972145;
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::uniqueIDs[] = {36972145,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec4d::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec4d::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > >::enumValues[] = {
	{0,0}
};


