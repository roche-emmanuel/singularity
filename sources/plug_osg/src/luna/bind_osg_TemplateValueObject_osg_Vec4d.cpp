#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_osg_Vec4d {
public:
	typedef Luna< osg::TemplateValueObject< osg::Vec4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85693117) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< osg::Vec4d >*)");
		}

		osg::TemplateValueObject< osg::Vec4d >* rhs =(Luna< osg::TemplateValueObject< osg::Vec4d > >::check(L,2));
		osg::TemplateValueObject< osg::Vec4d >* self=(Luna< osg::TemplateValueObject< osg::Vec4d > >::check(L,1));
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

		osg::TemplateValueObject< osg::Vec4d >* self=(Luna< osg::TemplateValueObject< osg::Vec4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< osg::Vec4d >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< osg::Vec4d >",name);
	}
};

osg::TemplateValueObject< osg::Vec4d >* LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::_bind_dtor(osg::TemplateValueObject< osg::Vec4d >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::className[] = "osg_TemplateValueObject_osg_Vec4d";
const char LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::fullName[] = "osg::TemplateValueObject< osg::Vec4d >";
const char LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::hash = 85693117;
const int LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::uniqueIDs[] = {85693117,0};

luna_RegType LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_osg_Vec4d::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_osg_Vec4d::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< osg::Vec4d > >::enumValues[] = {
	{0,0}
};

