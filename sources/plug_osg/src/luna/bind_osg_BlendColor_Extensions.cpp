#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendColor_Extensions.h>

class luna_wrapper_osg_BlendColor_Extensions {
public:
	typedef Luna< osg::BlendColor::Extensions > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::BlendColor::Extensions* ptr= dynamic_cast< osg::BlendColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendColor::Extensions* ptr= luna_caster< osg::Referenced, osg::BlendColor::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendColor::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setBlendColorSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBlendColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendColor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BlendColor::Extensions::Extensions(unsigned int contextID)
	static osg::BlendColor::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendColor::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::BlendColor::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::BlendColor::Extensions(contextID);
	}

	// osg::BlendColor::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::BlendColor::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendColor::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::BlendColor::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_BlendColor_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::BlendColor::Extensions::Extensions
	static osg::BlendColor::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BlendColor::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::BlendColor::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BlendColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::Extensions::setupGLExtensions(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::BlendColor::Extensions::setBlendColorSupported(bool flag)
	static int _bind_setBlendColorSupported(lua_State *L) {
		if (!_lg_typecheck_setBlendColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::Extensions::setBlendColorSupported(bool flag) function, expected prototype:\nvoid osg::BlendColor::Extensions::setBlendColorSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::BlendColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::Extensions::setBlendColorSupported(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setBlendColorSupported(flag);

		return 0;
	}

	// bool osg::BlendColor::Extensions::isBlendColorSupported() const
	static int _bind_isBlendColorSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::Extensions::isBlendColorSupported() const function, expected prototype:\nbool osg::BlendColor::Extensions::isBlendColorSupported() const\nClass arguments details:\n");
		}


		osg::BlendColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::Extensions::isBlendColorSupported() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isBlendColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendColor::Extensions::glBlendColor(float red, float green, float blue, float alpha) const
	static int _bind_glBlendColor(lua_State *L) {
		if (!_lg_typecheck_glBlendColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::Extensions::glBlendColor(float red, float green, float blue, float alpha) const function, expected prototype:\nvoid osg::BlendColor::Extensions::glBlendColor(float red, float green, float blue, float alpha) const\nClass arguments details:\n");
		}

		float red=(float)lua_tonumber(L,2);
		float green=(float)lua_tonumber(L,3);
		float blue=(float)lua_tonumber(L,4);
		float alpha=(float)lua_tonumber(L,5);

		osg::BlendColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::Extensions::glBlendColor(float, float, float, float) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->glBlendColor(red, green, blue, alpha);

		return 0;
	}

	// void osg::BlendColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlendColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlendColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::BlendColor::Extensions* LunaTraits< osg::BlendColor::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendColor_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::BlendColor::Extensions >::_bind_dtor(osg::BlendColor::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendColor::Extensions >::className[] = "BlendColor_Extensions";
const char LunaTraits< osg::BlendColor::Extensions >::fullName[] = "osg::BlendColor::Extensions";
const char LunaTraits< osg::BlendColor::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendColor::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::BlendColor::Extensions >::hash = 67971831;
const int LunaTraits< osg::BlendColor::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendColor::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_BlendColor_Extensions::_bind_setupGLExtensions},
	{"setBlendColorSupported", &luna_wrapper_osg_BlendColor_Extensions::_bind_setBlendColorSupported},
	{"isBlendColorSupported", &luna_wrapper_osg_BlendColor_Extensions::_bind_isBlendColorSupported},
	{"glBlendColor", &luna_wrapper_osg_BlendColor_Extensions::_bind_glBlendColor},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlendColor_Extensions::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osg_BlendColor_Extensions::_bind___eq},
	{"getTable", &luna_wrapper_osg_BlendColor_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendColor::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendColor_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendColor::Extensions >::enumValues[] = {
	{0,0}
};


