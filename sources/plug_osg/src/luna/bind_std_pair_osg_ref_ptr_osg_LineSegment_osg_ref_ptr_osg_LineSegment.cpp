#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_osg_ref_ptr_osg_LineSegment_osg_ref_ptr_osg_LineSegment {
public:
	typedef Luna< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30707577) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >*)");
		}

		std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >* rhs =(Luna< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::check(L,2));
		std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >* self=(Luna< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::check(L,1));
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

		std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >* self=(Luna< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >");
		
		return luna_dynamicCast(L,converters,"std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >",name);
	}

};

std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >* LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::_bind_dtor(std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::className[] = "std_pair_osg_ref_ptr_osg_LineSegment_osg_ref_ptr_osg_LineSegment";
const char LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::fullName[] = "std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > >";
const char LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::parents[] = {0};
const int LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::hash = 30707577;
const int LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::uniqueIDs[] = {30707577,0};

luna_RegType LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_osg_ref_ptr_osg_LineSegment_osg_ref_ptr_osg_LineSegment::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_osg_ref_ptr_osg_LineSegment_osg_ref_ptr_osg_LineSegment::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< osg::ref_ptr< osg::LineSegment >, osg::ref_ptr< osg::LineSegment > > >::enumValues[] = {
	{0,0}
};


