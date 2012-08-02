#include <plug_common.h>

class luna_wrapper_osg_PixelStorageModes {
public:
	typedef Luna< osg::PixelStorageModes > luna_t;

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

		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PixelStorageModes");
		
		return luna_dynamicCast(L,converters,"osg::PixelStorageModes",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_retrieveStoreModes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_retrieveStoreModes3D(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PixelStorageModes::PixelStorageModes()
	static osg::PixelStorageModes* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PixelStorageModes::PixelStorageModes() function, expected prototype:\nosg::PixelStorageModes::PixelStorageModes()\nClass arguments details:\n");
		}


		return new osg::PixelStorageModes();
	}


	// Function binds:
	// void osg::PixelStorageModes::retrieveStoreModes()
	static int _bind_retrieveStoreModes(lua_State *L) {
		if (!_lg_typecheck_retrieveStoreModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::retrieveStoreModes() function, expected prototype:\nvoid osg::PixelStorageModes::retrieveStoreModes()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::retrieveStoreModes()");
		}
		self->retrieveStoreModes();

		return 0;
	}

	// void osg::PixelStorageModes::retrieveStoreModes3D()
	static int _bind_retrieveStoreModes3D(lua_State *L) {
		if (!_lg_typecheck_retrieveStoreModes3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PixelStorageModes::retrieveStoreModes3D() function, expected prototype:\nvoid osg::PixelStorageModes::retrieveStoreModes3D()\nClass arguments details:\n");
		}


		osg::PixelStorageModes* self=(Luna< osg::PixelStorageModes >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PixelStorageModes::retrieveStoreModes3D()");
		}
		self->retrieveStoreModes3D();

		return 0;
	}


	// Operator binds:

};

osg::PixelStorageModes* LunaTraits< osg::PixelStorageModes >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelStorageModes::_bind_ctor(L);
}

void LunaTraits< osg::PixelStorageModes >::_bind_dtor(osg::PixelStorageModes* obj) {
	delete obj;
}

const char LunaTraits< osg::PixelStorageModes >::className[] = "PixelStorageModes";
const char LunaTraits< osg::PixelStorageModes >::fullName[] = "osg::PixelStorageModes";
const char LunaTraits< osg::PixelStorageModes >::moduleName[] = "osg";
const char* LunaTraits< osg::PixelStorageModes >::parents[] = {0};
const int LunaTraits< osg::PixelStorageModes >::hash = 58853759;
const int LunaTraits< osg::PixelStorageModes >::uniqueIDs[] = {58853759,0};

luna_RegType LunaTraits< osg::PixelStorageModes >::methods[] = {
	{"retrieveStoreModes", &luna_wrapper_osg_PixelStorageModes::_bind_retrieveStoreModes},
	{"retrieveStoreModes3D", &luna_wrapper_osg_PixelStorageModes::_bind_retrieveStoreModes3D},
	{"dynCast", &luna_wrapper_osg_PixelStorageModes::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelStorageModes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelStorageModes >::enumValues[] = {
	{0,0}
};


