#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Vec3d {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Vec3d > > luna_t;

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

		osg::ValueObjectClassNameTrait< Vec3d >* self=(Luna< osg::ValueObjectClassNameTrait< Vec3d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Vec3d >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Vec3d >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Vec3d >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Vec3d >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Vec3d >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Vec3d >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Vec3d >* LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::_bind_dtor(osg::ValueObjectClassNameTrait< Vec3d >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::className[] = "ValueObjectClassNameTrait_Vec3d";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::fullName[] = "osg::ValueObjectClassNameTrait< Vec3d >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::hash = 36942354;
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::uniqueIDs[] = {36942354,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec3d::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec3d::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > >::enumValues[] = {
	{0,0}
};


