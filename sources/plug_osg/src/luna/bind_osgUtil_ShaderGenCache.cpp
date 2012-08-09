#include <plug_common.h>

class luna_wrapper_osgUtil_ShaderGenCache {
public:
	typedef Luna< osgUtil::ShaderGenCache > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::ShaderGenCache* ptr= dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ShaderGenCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::ShaderGenCache::ShaderGenCache()
	static osgUtil::ShaderGenCache* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenCache::ShaderGenCache() function, expected prototype:\nosgUtil::ShaderGenCache::ShaderGenCache()\nClass arguments details:\n");
		}


		return new osgUtil::ShaderGenCache();
	}


	// Function binds:
	// void osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program) function, expected prototype:\nvoid osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int stateMask=(int)lua_tointeger(L,2);
		osg::StateSet* program=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::ShaderGenCache* self=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenCache::setStateSet(int, osg::StateSet *)");
		}
		self->setStateSet(stateMask, program);

		return 0;
	}

	// osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const
	static int _bind_getStateSet(lua_State *L) {
		if (!_lg_typecheck_getStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const\nClass arguments details:\n");
		}

		int stateMask=(int)lua_tointeger(L,2);

		osgUtil::ShaderGenCache* self=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int) const");
		}
		osg::StateSet * lret = self->getStateSet(stateMask);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask)
	static int _bind_getOrCreateStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask) function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask)\nClass arguments details:\n");
		}

		int stateMask=(int)lua_tointeger(L,2);

		osgUtil::ShaderGenCache* self=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int)");
		}
		osg::StateSet * lret = self->getOrCreateStateSet(stateMask);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::ShaderGenCache* LunaTraits< osgUtil::ShaderGenCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ShaderGenCache::_bind_ctor(L);
}

void LunaTraits< osgUtil::ShaderGenCache >::_bind_dtor(osgUtil::ShaderGenCache* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ShaderGenCache >::className[] = "ShaderGenCache";
const char LunaTraits< osgUtil::ShaderGenCache >::fullName[] = "osgUtil::ShaderGenCache";
const char LunaTraits< osgUtil::ShaderGenCache >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ShaderGenCache >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::ShaderGenCache >::hash = 25249400;
const int LunaTraits< osgUtil::ShaderGenCache >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ShaderGenCache >::methods[] = {
	{"setStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_getStateSet},
	{"getOrCreateStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_getOrCreateStateSet},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ShaderGenCache >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ShaderGenCache::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ShaderGenCache >::enumValues[] = {
	{"BLEND", osgUtil::ShaderGenCache::BLEND},
	{"LIGHTING", osgUtil::ShaderGenCache::LIGHTING},
	{"FOG", osgUtil::ShaderGenCache::FOG},
	{"DIFFUSE_MAP", osgUtil::ShaderGenCache::DIFFUSE_MAP},
	{"NORMAL_MAP", osgUtil::ShaderGenCache::NORMAL_MAP},
	{0,0}
};

