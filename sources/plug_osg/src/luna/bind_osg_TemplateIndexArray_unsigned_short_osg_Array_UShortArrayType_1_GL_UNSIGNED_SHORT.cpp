#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateIndexArray_unsigned_short_osg_Array_UShortArrayType_1_GL_UNSIGNED_SHORT {
public:
	typedef Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59968751) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >*)");
		}

		osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* rhs =(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::check(L,2));
		osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* self=(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::check(L,1));
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

		osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* self=(Luna< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >",name);
	}

};

osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::_bind_dtor(osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::className[] = "osg_TemplateIndexArray_unsigned_short_osg_Array_UShortArrayType_1_GL_UNSIGNED_SHORT";
const char LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::fullName[] = "osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >";
const char LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::parents[] = {0};
const int LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::hash = 59968751;
const int LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::uniqueIDs[] = {59968751,0};

luna_RegType LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateIndexArray_unsigned_short_osg_Array_UShortArrayType_1_GL_UNSIGNED_SHORT::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateIndexArray_unsigned_short_osg_Array_UShortArrayType_1_GL_UNSIGNED_SHORT::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > >::enumValues[] = {
	{0,0}
};


