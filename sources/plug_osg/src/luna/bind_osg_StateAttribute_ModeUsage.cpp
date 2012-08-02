#include <plug_common.h>

class luna_wrapper_osg_StateAttribute_ModeUsage {
public:
	typedef Luna< osg::StateAttribute::ModeUsage > luna_t;

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

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateAttribute::ModeUsage");
		
		return luna_dynamicCast(L,converters,"osg::StateAttribute::ModeUsage",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_usesMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_usesTextureMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	static int _bind_usesMode(lua_State *L) {
		if (!_lg_typecheck_usesMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode) function, expected prototype:\nvoid osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::ModeUsage::usesMode(unsigned int)");
		}
		self->usesMode(mode);

		return 0;
	}

	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)
	static int _bind_usesTextureMode(lua_State *L) {
		if (!_lg_typecheck_usesTextureMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode) function, expected prototype:\nvoid osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int)");
		}
		self->usesTextureMode(mode);

		return 0;
	}


	// Operator binds:

};

osg::StateAttribute::ModeUsage* LunaTraits< osg::StateAttribute::ModeUsage >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)

	// Abstract operators:
}

void LunaTraits< osg::StateAttribute::ModeUsage >::_bind_dtor(osg::StateAttribute::ModeUsage* obj) {
	delete obj;
}

const char LunaTraits< osg::StateAttribute::ModeUsage >::className[] = "ModeUsage";
const char LunaTraits< osg::StateAttribute::ModeUsage >::fullName[] = "osg::StateAttribute::ModeUsage";
const char LunaTraits< osg::StateAttribute::ModeUsage >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttribute::ModeUsage >::parents[] = {0};
const int LunaTraits< osg::StateAttribute::ModeUsage >::hash = 48108040;
const int LunaTraits< osg::StateAttribute::ModeUsage >::uniqueIDs[] = {48108040,0};

luna_RegType LunaTraits< osg::StateAttribute::ModeUsage >::methods[] = {
	{"usesMode", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_usesMode},
	{"usesTextureMode", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_usesTextureMode},
	{"dynCast", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttribute::ModeUsage >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttribute::ModeUsage >::enumValues[] = {
	{0,0}
};


