#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_const_osg_Uniform_ptr_unsigned_int {
public:
	typedef Luna< std::pair< const osg::Uniform *, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52713644) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< const osg::Uniform *, unsigned int >*)");
		}

		std::pair< const osg::Uniform *, unsigned int >* rhs =(Luna< std::pair< const osg::Uniform *, unsigned int > >::check(L,2));
		std::pair< const osg::Uniform *, unsigned int >* self=(Luna< std::pair< const osg::Uniform *, unsigned int > >::check(L,1));
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

		std::pair< const osg::Uniform *, unsigned int >* self=(Luna< std::pair< const osg::Uniform *, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< const osg::Uniform *, unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::pair< const osg::Uniform *, unsigned int >",name);
	}

};

std::pair< const osg::Uniform *, unsigned int >* LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::_bind_dtor(std::pair< const osg::Uniform *, unsigned int >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::className[] = "std_pair_const_osg_Uniform_ptr_unsigned_int";
const char LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::fullName[] = "std::pair< const osg::Uniform *, unsigned int >";
const char LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::parents[] = {0};
const int LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::hash = 52713644;
const int LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::uniqueIDs[] = {52713644,0};

luna_RegType LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_const_osg_Uniform_ptr_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_const_osg_Uniform_ptr_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< const osg::Uniform *, unsigned int > >::enumValues[] = {
	{0,0}
};


