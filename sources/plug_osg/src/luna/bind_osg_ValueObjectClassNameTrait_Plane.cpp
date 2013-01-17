#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Plane {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Plane > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12237871) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< Plane >*)");
		}

		osg::ValueObjectClassNameTrait< Plane >* rhs =(Luna< osg::ValueObjectClassNameTrait< Plane > >::check(L,2));
		osg::ValueObjectClassNameTrait< Plane >* self=(Luna< osg::ValueObjectClassNameTrait< Plane > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< Plane >* self=(Luna< osg::ValueObjectClassNameTrait< Plane > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Plane >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Plane >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Plane >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Plane >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Plane >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Plane >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Plane >* LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::_bind_dtor(osg::ValueObjectClassNameTrait< Plane >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::className[] = "ValueObjectClassNameTrait_Plane";
const char LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::fullName[] = "osg::ValueObjectClassNameTrait< Plane >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::hash = 12237871;
const int LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::uniqueIDs[] = {12237871,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Plane::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Plane::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_Plane::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Plane > >::enumValues[] = {
	{0,0}
};


