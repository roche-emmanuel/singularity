#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Vec3f {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Vec3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36944276) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< Vec3f >*)");
		}

		osg::ValueObjectClassNameTrait< Vec3f >* rhs =(Luna< osg::ValueObjectClassNameTrait< Vec3f > >::check(L,2));
		osg::ValueObjectClassNameTrait< Vec3f >* self=(Luna< osg::ValueObjectClassNameTrait< Vec3f > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< Vec3f >* self=(Luna< osg::ValueObjectClassNameTrait< Vec3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Vec3f >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Vec3f >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Vec3f >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Vec3f >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Vec3f >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Vec3f >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Vec3f >* LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::_bind_dtor(osg::ValueObjectClassNameTrait< Vec3f >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::className[] = "ValueObjectClassNameTrait_Vec3f";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::fullName[] = "osg::ValueObjectClassNameTrait< Vec3f >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::hash = 36944276;
const int LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::uniqueIDs[] = {36944276,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec3f::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec3f::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_Vec3f::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > >::enumValues[] = {
	{0,0}
};


