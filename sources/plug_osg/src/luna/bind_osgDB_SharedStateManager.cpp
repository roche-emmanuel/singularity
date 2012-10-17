#include <plug_common.h>

class luna_wrapper_osgDB_SharedStateManager {
public:
	typedef Luna< osgDB::SharedStateManager > luna_t;

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
		osgDB::SharedStateManager* ptr= dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::SharedStateManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShareMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShareMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prune(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShared_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShared_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)
	static osgDB::SharedStateManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL) function, expected prototype:\nosgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : osgDB::SharedStateManager::SHARE_ALL;

		return new osgDB::SharedStateManager(mode);
	}


	// Function binds:
	// const char * osgDB::SharedStateManager::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::libraryName() const function, expected prototype:\nconst char * osgDB::SharedStateManager::libraryName() const\nClass arguments details:\n");
		}


		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::SharedStateManager::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::className() const function, expected prototype:\nconst char * osgDB::SharedStateManager::className() const\nClass arguments details:\n");
		}


		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::SharedStateManager::setShareMode(unsigned int mode)
	static int _bind_setShareMode(lua_State *L) {
		if (!_lg_typecheck_setShareMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::setShareMode(unsigned int mode) function, expected prototype:\nvoid osgDB::SharedStateManager::setShareMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::setShareMode(unsigned int)");
		}
		self->setShareMode(mode);

		return 0;
	}

	// unsigned int osgDB::SharedStateManager::getShareMode()
	static int _bind_getShareMode(lua_State *L) {
		if (!_lg_typecheck_getShareMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::SharedStateManager::getShareMode() function, expected prototype:\nunsigned int osgDB::SharedStateManager::getShareMode()\nClass arguments details:\n");
		}


		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::SharedStateManager::getShareMode()");
		}
		unsigned int lret = self->getShareMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::SharedStateManager::prune()
	static int _bind_prune(lua_State *L) {
		if (!_lg_typecheck_prune(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::prune() function, expected prototype:\nvoid osgDB::SharedStateManager::prune()\nClass arguments details:\n");
		}


		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::prune()");
		}
		self->prune();

		return 0;
	}

	// void osgDB::SharedStateManager::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::apply(osg::Node & node) function, expected prototype:\nvoid osgDB::SharedStateManager::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::SharedStateManager::apply function");
		}
		osg::Node & node=*node_ptr;

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgDB::SharedStateManager::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::apply(osg::Geode & geode) function, expected prototype:\nvoid osgDB::SharedStateManager::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgDB::SharedStateManager::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgDB::SharedStateManager::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// bool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet)
	static int _bind_isShared_overload_1(lua_State *L) {
		if (!_lg_typecheck_isShared_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet) function, expected prototype:\nbool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateSet=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::isShared(osg::StateSet *)");
		}
		bool lret = self->isShared(stateSet);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::SharedStateManager::isShared(osg::Texture * texture)
	static int _bind_isShared_overload_2(lua_State *L) {
		if (!_lg_typecheck_isShared_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::isShared(osg::Texture * texture) function, expected prototype:\nbool osgDB::SharedStateManager::isShared(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2));

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::isShared(osg::Texture *)");
		}
		bool lret = self->isShared(texture);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::SharedStateManager::isShared
	static int _bind_isShared(lua_State *L) {
		if (_lg_typecheck_isShared_overload_1(L)) return _bind_isShared_overload_1(L);
		if (_lg_typecheck_isShared_overload_2(L)) return _bind_isShared_overload_2(L);

		luaL_error(L, "error in function isShared, cannot match any of the overloads for function isShared:\n  isShared(osg::StateSet *)\n  isShared(osg::Texture *)\n");
		return 0;
	}

	// void osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const function, expected prototype:\nvoid osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osgDB::SharedStateManager* self=dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osgDB::SharedStateManager* LunaTraits< osgDB::SharedStateManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_SharedStateManager::_bind_ctor(L);
}

void LunaTraits< osgDB::SharedStateManager >::_bind_dtor(osgDB::SharedStateManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::SharedStateManager >::className[] = "SharedStateManager";
const char LunaTraits< osgDB::SharedStateManager >::fullName[] = "osgDB::SharedStateManager";
const char LunaTraits< osgDB::SharedStateManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::SharedStateManager >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgDB::SharedStateManager >::hash = 15811135;
const int LunaTraits< osgDB::SharedStateManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::SharedStateManager >::methods[] = {
	{"libraryName", &luna_wrapper_osgDB_SharedStateManager::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_SharedStateManager::_bind_className},
	{"setShareMode", &luna_wrapper_osgDB_SharedStateManager::_bind_setShareMode},
	{"getShareMode", &luna_wrapper_osgDB_SharedStateManager::_bind_getShareMode},
	{"prune", &luna_wrapper_osgDB_SharedStateManager::_bind_prune},
	{"apply", &luna_wrapper_osgDB_SharedStateManager::_bind_apply},
	{"isShared", &luna_wrapper_osgDB_SharedStateManager::_bind_isShared},
	{"releaseGLObjects", &luna_wrapper_osgDB_SharedStateManager::_bind_releaseGLObjects},
	{"__eq", &luna_wrapper_osgDB_SharedStateManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::SharedStateManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_SharedStateManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::SharedStateManager >::enumValues[] = {
	{"SHARE_NONE", osgDB::SharedStateManager::SHARE_NONE},
	{"SHARE_STATIC_TEXTURES", osgDB::SharedStateManager::SHARE_STATIC_TEXTURES},
	{"SHARE_UNSPECIFIED_TEXTURES", osgDB::SharedStateManager::SHARE_UNSPECIFIED_TEXTURES},
	{"SHARE_DYNAMIC_TEXTURES", osgDB::SharedStateManager::SHARE_DYNAMIC_TEXTURES},
	{"SHARE_STATIC_STATESETS", osgDB::SharedStateManager::SHARE_STATIC_STATESETS},
	{"SHARE_UNSPECIFIED_STATESETS", osgDB::SharedStateManager::SHARE_UNSPECIFIED_STATESETS},
	{"SHARE_DYNAMIC_STATESETS", osgDB::SharedStateManager::SHARE_DYNAMIC_STATESETS},
	{"SHARE_TEXTURES", osgDB::SharedStateManager::SHARE_TEXTURES},
	{"SHARE_STATESETS", osgDB::SharedStateManager::SHARE_STATESETS},
	{"SHARE_ALL", osgDB::SharedStateManager::SHARE_ALL},
	{0,0}
};


