#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_MultiMapIterator_std_string_ptr_SceneNode {
public:
	typedef Luna< MultiMapIterator< std::string, ptr< SceneNode > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24939483) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(MultiMapIterator< std::string, ptr< SceneNode > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		MultiMapIterator< std::string, ptr< SceneNode > >* rhs =(Luna< MultiMapIterator< std::string, ptr< SceneNode > > >::check(L,2));
		MultiMapIterator< std::string, ptr< SceneNode > >* self=(Luna< MultiMapIterator< std::string, ptr< SceneNode > > >::check(L,1));
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

		MultiMapIterator< std::string, ptr< SceneNode > >* self=(Luna< MultiMapIterator< std::string, ptr< SceneNode > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("MultiMapIterator< std::string, ptr< SceneNode > >");
		
		return luna_dynamicCast(L,converters,"MultiMapIterator< std::string, ptr< SceneNode > >",name);
	}

};

MultiMapIterator< std::string, ptr< SceneNode > >* LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::_bind_ctor(lua_State *L) {
	return new MultiMapIterator< std::string, ptr< SceneNode > >();
}

void LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::_bind_dtor(MultiMapIterator< std::string, ptr< SceneNode > >* obj) {
	delete obj;
}

const char LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::className[] = "MultiMapIterator_std_string_ptr_SceneNode";
const char LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::fullName[] = "MultiMapIterator< std::string, ptr< SceneNode > >";
const char LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::moduleName[] = "proland";
const char* LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::parents[] = {0};
const int LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::hash = 24939483;
const int LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::uniqueIDs[] = {24939483,0};

luna_RegType LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::methods[] = {
	{"dynCast", &luna_wrapper_MultiMapIterator_std_string_ptr_SceneNode::_bind_dynCast},
	{"__eq", &luna_wrapper_MultiMapIterator_std_string_ptr_SceneNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< MultiMapIterator< std::string, ptr< SceneNode > > >::enumValues[] = {
	{0,0}
};


