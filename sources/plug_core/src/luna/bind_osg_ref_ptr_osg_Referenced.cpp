#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_Referenced {
public:
	typedef Luna< osg::ref_ptr< osg::Referenced > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84922662) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::Referenced >*)");
		}

		osg::ref_ptr< osg::Referenced >* rhs =(Luna< osg::ref_ptr< osg::Referenced > >::check(L,2));
		osg::ref_ptr< osg::Referenced >* self=(Luna< osg::ref_ptr< osg::Referenced > >::check(L,1));
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

		osg::ref_ptr< osg::Referenced >* self=(Luna< osg::ref_ptr< osg::Referenced > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::Referenced >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::Referenced >",name);
	}
};

osg::ref_ptr< osg::Referenced >* LunaTraits< osg::ref_ptr< osg::Referenced > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ref_ptr< osg::Referenced > >::_bind_dtor(osg::ref_ptr< osg::Referenced >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< osg::ref_ptr< osg::Referenced > >::className[] = "osg_ref_ptr_osg_Referenced";
const char LunaTraits< osg::ref_ptr< osg::Referenced > >::fullName[] = "osg::ref_ptr< osg::Referenced >";
const char LunaTraits< osg::ref_ptr< osg::Referenced > >::moduleName[] = "sgt";
const char* LunaTraits< osg::ref_ptr< osg::Referenced > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::Referenced > >::hash = 84922662;
const int LunaTraits< osg::ref_ptr< osg::Referenced > >::uniqueIDs[] = {84922662,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::Referenced > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_Referenced::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_Referenced::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::Referenced > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::Referenced > >::enumValues[] = {
	{0,0}
};


