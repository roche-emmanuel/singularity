#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_StateSet_ModeList {
public:
	typedef Luna< std::vector< osg::StateSet::ModeList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68848182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::StateSet::ModeList >*)");
		}

		std::vector< osg::StateSet::ModeList >* rhs =(Luna< std::vector< osg::StateSet::ModeList > >::check(L,2));
		std::vector< osg::StateSet::ModeList >* self=(Luna< std::vector< osg::StateSet::ModeList > >::check(L,1));
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

		std::vector< osg::StateSet::ModeList >* self=(Luna< std::vector< osg::StateSet::ModeList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::StateSet::ModeList >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::StateSet::ModeList >",name);
	}

};

std::vector< osg::StateSet::ModeList >* LunaTraits< std::vector< osg::StateSet::ModeList > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::StateSet::ModeList >();
}

void LunaTraits< std::vector< osg::StateSet::ModeList > >::_bind_dtor(std::vector< osg::StateSet::ModeList >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::StateSet::ModeList > >::className[] = "std_vector_osg_StateSet_ModeList";
const char LunaTraits< std::vector< osg::StateSet::ModeList > >::fullName[] = "std::vector< osg::StateSet::ModeList >";
const char LunaTraits< std::vector< osg::StateSet::ModeList > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::StateSet::ModeList > >::parents[] = {0};
const int LunaTraits< std::vector< osg::StateSet::ModeList > >::hash = 68848182;
const int LunaTraits< std::vector< osg::StateSet::ModeList > >::uniqueIDs[] = {68848182,0};

luna_RegType LunaTraits< std::vector< osg::StateSet::ModeList > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_StateSet_ModeList::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_StateSet_ModeList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::StateSet::ModeList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::StateSet::ModeList > >::enumValues[] = {
	{0,0}
};


