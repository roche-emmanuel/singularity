#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TextureCubeMap_Extensions.h>

class luna_wrapper_osg_TextureCubeMap_Extensions {
public:
	typedef Luna< osg::TextureCubeMap::Extensions > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::TextureCubeMap::Extensions* ptr= dynamic_cast< osg::TextureCubeMap::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::TextureCubeMap::Extensions* ptr= luna_caster< osg::Referenced, osg::TextureCubeMap::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCubeMap::Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setupGLExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCubeMapSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCubeMapSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TextureCubeMap::Extensions::Extensions(unsigned int contextID)
	static osg::TextureCubeMap::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::TextureCubeMap::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::TextureCubeMap::Extensions(contextID);
	}

	// osg::TextureCubeMap::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::TextureCubeMap::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::TextureCubeMap::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_TextureCubeMap_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::TextureCubeMap::Extensions::Extensions
	static osg::TextureCubeMap::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::TextureCubeMap::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::TextureCubeMap::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::TextureCubeMap::Extensions::setCubeMapSupported(bool flag)
	static int _bind_setCubeMapSupported(lua_State *L) {
		if (!_lg_typecheck_setCubeMapSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::Extensions::setCubeMapSupported(bool flag) function, expected prototype:\nvoid osg::TextureCubeMap::Extensions::setCubeMapSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::TextureCubeMap::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::Extensions::setCubeMapSupported(bool)");
		}
		self->setCubeMapSupported(flag);

		return 0;
	}

	// bool osg::TextureCubeMap::Extensions::isCubeMapSupported() const
	static int _bind_isCubeMapSupported(lua_State *L) {
		if (!_lg_typecheck_isCubeMapSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::Extensions::isCubeMapSupported() const function, expected prototype:\nbool osg::TextureCubeMap::Extensions::isCubeMapSupported() const\nClass arguments details:\n");
		}


		osg::TextureCubeMap::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::Extensions::isCubeMapSupported() const");
		}
		bool lret = self->isCubeMapSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::TextureCubeMap::Extensions* LunaTraits< osg::TextureCubeMap::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureCubeMap_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::TextureCubeMap::Extensions >::_bind_dtor(osg::TextureCubeMap::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCubeMap::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::TextureCubeMap::Extensions >::fullName[] = "osg::TextureCubeMap::Extensions";
const char LunaTraits< osg::TextureCubeMap::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCubeMap::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureCubeMap::Extensions >::hash = 41714557;
const int LunaTraits< osg::TextureCubeMap::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCubeMap::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_TextureCubeMap_Extensions::_bind_setupGLExtensions},
	{"setCubeMapSupported", &luna_wrapper_osg_TextureCubeMap_Extensions::_bind_setCubeMapSupported},
	{"isCubeMapSupported", &luna_wrapper_osg_TextureCubeMap_Extensions::_bind_isCubeMapSupported},
	{"__eq", &luna_wrapper_osg_TextureCubeMap_Extensions::_bind___eq},
	{"getTable", &luna_wrapper_osg_TextureCubeMap_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCubeMap::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCubeMap_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCubeMap::Extensions >::enumValues[] = {
	{0,0}
};


