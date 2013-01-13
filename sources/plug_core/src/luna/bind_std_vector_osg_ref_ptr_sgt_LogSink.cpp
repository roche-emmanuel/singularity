#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_sgt_LogSink {
public:
	typedef Luna< std::vector< osg::ref_ptr< sgt::LogSink > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20265607) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< sgt::LogSink > >*)");
		}

		std::vector< osg::ref_ptr< sgt::LogSink > >* rhs =(Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::check(L,2));
		std::vector< osg::ref_ptr< sgt::LogSink > >* self=(Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::check(L,1));
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

		std::vector< osg::ref_ptr< sgt::LogSink > >* self=(Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< sgt::LogSink > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< sgt::LogSink > >",name);
	}

};

std::vector< osg::ref_ptr< sgt::LogSink > >* LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< sgt::LogSink > >();
}

void LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::_bind_dtor(std::vector< osg::ref_ptr< sgt::LogSink > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::className[] = "std_vector_osg_ref_ptr_sgt_LogSink";
const char LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::fullName[] = "std::vector< osg::ref_ptr< sgt::LogSink > >";
const char LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::hash = 20265607;
const int LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::uniqueIDs[] = {20265607,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_sgt_LogSink::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_sgt_LogSink::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > >::enumValues[] = {
	{0,0}
};


