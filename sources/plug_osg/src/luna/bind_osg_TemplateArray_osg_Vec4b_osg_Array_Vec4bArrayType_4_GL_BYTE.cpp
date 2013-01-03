#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateArray_osg_Vec4b_osg_Array_Vec4bArrayType_4_GL_BYTE {
public:
	typedef Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75159211) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >*)");
		}

		osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* rhs =(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::check(L,2));
		osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* self=(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::check(L,1));
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

		osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* self=(Luna< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >",name);
	}

};

osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::_bind_dtor(osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::className[] = "osg_TemplateArray_osg_Vec4b_osg_Array_Vec4bArrayType_4_GL_BYTE";
const char LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::fullName[] = "osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >";
const char LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::parents[] = {0};
const int LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::hash = 75159211;
const int LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::uniqueIDs[] = {75159211,0};

luna_RegType LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateArray_osg_Vec4b_osg_Array_Vec4bArrayType_4_GL_BYTE::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateArray_osg_Vec4b_osg_Array_Vec4bArrayType_4_GL_BYTE::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > >::enumValues[] = {
	{0,0}
};


