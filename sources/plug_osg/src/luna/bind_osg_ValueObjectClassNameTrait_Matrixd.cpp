#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Matrixd {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Matrixd > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33240705) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< Matrixd >*)");
		}

		osg::ValueObjectClassNameTrait< Matrixd >* rhs =(Luna< osg::ValueObjectClassNameTrait< Matrixd > >::check(L,2));
		osg::ValueObjectClassNameTrait< Matrixd >* self=(Luna< osg::ValueObjectClassNameTrait< Matrixd > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< Matrixd >* self=(Luna< osg::ValueObjectClassNameTrait< Matrixd > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Matrixd >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Matrixd >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Matrixd >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Matrixd >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Matrixd >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Matrixd >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Matrixd >* LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::_bind_dtor(osg::ValueObjectClassNameTrait< Matrixd >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::className[] = "ValueObjectClassNameTrait_Matrixd";
const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::fullName[] = "osg::ValueObjectClassNameTrait< Matrixd >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::hash = 33240705;
const int LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::uniqueIDs[] = {33240705,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixd::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixd::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixd::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > >::enumValues[] = {
	{0,0}
};


