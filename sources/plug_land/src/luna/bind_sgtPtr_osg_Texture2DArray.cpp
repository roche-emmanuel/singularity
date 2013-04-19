#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_osg_Texture2DArray {
public:
	typedef Luna< sgtPtr< osg::Texture2DArray > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92078672) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< osg::Texture2DArray >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< osg::Texture2DArray >* rhs =(Luna< sgtPtr< osg::Texture2DArray > >::check(L,2));
		sgtPtr< osg::Texture2DArray >* self=(Luna< sgtPtr< osg::Texture2DArray > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgtPtr< osg::Texture2DArray >* self=(Luna< sgtPtr< osg::Texture2DArray > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< osg::Texture2DArray >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< osg::Texture2DArray >",name);
	}

};

sgtPtr< osg::Texture2DArray >* LunaTraits< sgtPtr< osg::Texture2DArray > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< osg::Texture2DArray >();
}

void LunaTraits< sgtPtr< osg::Texture2DArray > >::_bind_dtor(sgtPtr< osg::Texture2DArray >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< osg::Texture2DArray > >::className[] = "sgtPtr_osg_Texture2DArray";
const char LunaTraits< sgtPtr< osg::Texture2DArray > >::fullName[] = "sgtPtr< osg::Texture2DArray >";
const char LunaTraits< sgtPtr< osg::Texture2DArray > >::moduleName[] = "land";
const char* LunaTraits< sgtPtr< osg::Texture2DArray > >::parents[] = {0};
const int LunaTraits< sgtPtr< osg::Texture2DArray > >::hash = 92078672;
const int LunaTraits< sgtPtr< osg::Texture2DArray > >::uniqueIDs[] = {92078672,0};

luna_RegType LunaTraits< sgtPtr< osg::Texture2DArray > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_osg_Texture2DArray::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_osg_Texture2DArray::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< osg::Texture2DArray > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< osg::Texture2DArray > >::enumValues[] = {
	{0,0}
};


