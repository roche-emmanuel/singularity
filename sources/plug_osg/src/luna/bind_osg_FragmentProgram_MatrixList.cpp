#include <plug_common.h>

class luna_wrapper_osg_FragmentProgram_MatrixList {
public:
	typedef Luna< osg::FragmentProgram::MatrixList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4745759) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::FragmentProgram::MatrixList*)");
		}

		osg::FragmentProgram::MatrixList* rhs =(Luna< osg::FragmentProgram::MatrixList >::check(L,2));
		osg::FragmentProgram::MatrixList* self=(Luna< osg::FragmentProgram::MatrixList >::check(L,1));
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

		osg::FragmentProgram::MatrixList* self=(Luna< osg::FragmentProgram::MatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FragmentProgram::MatrixList");
		
		return luna_dynamicCast(L,converters,"osg::FragmentProgram::MatrixList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::FragmentProgram::MatrixList* LunaTraits< osg::FragmentProgram::MatrixList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::FragmentProgram::MatrixList >::_bind_dtor(osg::FragmentProgram::MatrixList* obj) {
	delete obj;
}

const char LunaTraits< osg::FragmentProgram::MatrixList >::className[] = "MatrixList";
const char LunaTraits< osg::FragmentProgram::MatrixList >::fullName[] = "osg::FragmentProgram::MatrixList";
const char LunaTraits< osg::FragmentProgram::MatrixList >::moduleName[] = "osg";
const char* LunaTraits< osg::FragmentProgram::MatrixList >::parents[] = {0};
const int LunaTraits< osg::FragmentProgram::MatrixList >::hash = 4745759;
const int LunaTraits< osg::FragmentProgram::MatrixList >::uniqueIDs[] = {4745759,0};

luna_RegType LunaTraits< osg::FragmentProgram::MatrixList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_FragmentProgram_MatrixList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_FragmentProgram_MatrixList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FragmentProgram::MatrixList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FragmentProgram::MatrixList >::enumValues[] = {
	{0,0}
};


