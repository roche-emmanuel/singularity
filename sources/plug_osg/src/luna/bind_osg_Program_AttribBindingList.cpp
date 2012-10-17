#include <plug_common.h>

class luna_wrapper_osg_Program_AttribBindingList {
public:
	typedef Luna< osg::Program::AttribBindingList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65712176) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::AttribBindingList*)");
		}

		osg::Program::AttribBindingList* rhs =(Luna< osg::Program::AttribBindingList >::check(L,2));
		osg::Program::AttribBindingList* self=(Luna< osg::Program::AttribBindingList >::check(L,1));
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

		osg::Program::AttribBindingList* self=(Luna< osg::Program::AttribBindingList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::AttribBindingList");
		
		return luna_dynamicCast(L,converters,"osg::Program::AttribBindingList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Program::AttribBindingList* LunaTraits< osg::Program::AttribBindingList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Program::AttribBindingList >::_bind_dtor(osg::Program::AttribBindingList* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::AttribBindingList >::className[] = "AttribBindingList";
const char LunaTraits< osg::Program::AttribBindingList >::fullName[] = "osg::Program::AttribBindingList";
const char LunaTraits< osg::Program::AttribBindingList >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::AttribBindingList >::parents[] = {0};
const int LunaTraits< osg::Program::AttribBindingList >::hash = 65712176;
const int LunaTraits< osg::Program::AttribBindingList >::uniqueIDs[] = {65712176,0};

luna_RegType LunaTraits< osg::Program::AttribBindingList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_AttribBindingList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_AttribBindingList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::AttribBindingList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::AttribBindingList >::enumValues[] = {
	{0,0}
};


