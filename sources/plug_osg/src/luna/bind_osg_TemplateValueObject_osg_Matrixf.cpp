#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_osg_Matrixf {
public:
	typedef Luna< osg::TemplateValueObject< osg::Matrixf > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54002088) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< osg::Matrixf >*)");
		}

		osg::TemplateValueObject< osg::Matrixf >* rhs =(Luna< osg::TemplateValueObject< osg::Matrixf > >::check(L,2));
		osg::TemplateValueObject< osg::Matrixf >* self=(Luna< osg::TemplateValueObject< osg::Matrixf > >::check(L,1));
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

		osg::TemplateValueObject< osg::Matrixf >* self=(Luna< osg::TemplateValueObject< osg::Matrixf > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< osg::Matrixf >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< osg::Matrixf >",name);
	}

};

osg::TemplateValueObject< osg::Matrixf >* LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::_bind_dtor(osg::TemplateValueObject< osg::Matrixf >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::className[] = "osg_TemplateValueObject_osg_Matrixf";
const char LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::fullName[] = "osg::TemplateValueObject< osg::Matrixf >";
const char LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::hash = 54002088;
const int LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::uniqueIDs[] = {54002088,0};

luna_RegType LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_osg_Matrixf::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_osg_Matrixf::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< osg::Matrixf > >::enumValues[] = {
	{0,0}
};


