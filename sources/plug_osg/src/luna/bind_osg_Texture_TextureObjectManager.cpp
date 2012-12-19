#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture_TextureObjectManager.h>

class luna_wrapper_osg_Texture_TextureObjectManager {
public:
	typedef Luna< osg::Texture::TextureObjectManager > luna_t;

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
		//osg::Texture::TextureObjectManager* ptr= dynamic_cast< osg::Texture::TextureObjectManager* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture::TextureObjectManager* ptr= luna_caster< osg::Referenced, osg::Texture::TextureObjectManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture::TextureObjectManager >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberActiveTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberActiveTextureObjects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberActiveTextureObjects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOrphanedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOrphanedTextureObjects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberOrphanedTextureObjects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrTexturePoolSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrTexturePoolSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateTextureObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateTextureObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handlePendingOrphandedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteAllTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_discardAllTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_discardAllDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushDeletedTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseTextureObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureObjectSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reportStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_recomputeStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkConsistency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeleteTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberGenerated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGenerateTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberApplied(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplyTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::TextureObjectManager::TextureObjectManager(unsigned int contextID)
	static osg::Texture::TextureObjectManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectManager::TextureObjectManager(unsigned int contextID) function, expected prototype:\nosg::Texture::TextureObjectManager::TextureObjectManager(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture::TextureObjectManager(contextID);
	}

	// osg::Texture::TextureObjectManager::TextureObjectManager(lua_Table * data, unsigned int contextID)
	static osg::Texture::TextureObjectManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectManager::TextureObjectManager(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Texture::TextureObjectManager::TextureObjectManager(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Texture_TextureObjectManager(L,NULL, contextID);
	}

	// Overload binder for osg::Texture::TextureObjectManager::TextureObjectManager
	static osg::Texture::TextureObjectManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureObjectManager, cannot match any of the overloads for function TextureObjectManager:\n  TextureObjectManager(unsigned int)\n  TextureObjectManager(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::Texture::TextureObjectManager::getContextID() const
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectManager::getContextID() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectManager::getContextID() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectManager::getContextID() const");
		}
		unsigned int lret = self->getContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObjectManager::setNumberActiveTextureObjects(unsigned int size)
	static int _bind_setNumberActiveTextureObjects(lua_State *L) {
		if (!_lg_typecheck_setNumberActiveTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::setNumberActiveTextureObjects(unsigned int size) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::setNumberActiveTextureObjects(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::setNumberActiveTextureObjects(unsigned int)");
		}
		self->setNumberActiveTextureObjects(size);

		return 0;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberActiveTextureObjects()
	static int _bind_getNumberActiveTextureObjects_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNumberActiveTextureObjects_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberActiveTextureObjects() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberActiveTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberActiveTextureObjects()");
		}
		unsigned int & lret = self->getNumberActiveTextureObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectManager::getNumberActiveTextureObjects() const
	static int _bind_getNumberActiveTextureObjects_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNumberActiveTextureObjects_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectManager::getNumberActiveTextureObjects() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectManager::getNumberActiveTextureObjects() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectManager::getNumberActiveTextureObjects() const");
		}
		unsigned int lret = self->getNumberActiveTextureObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Texture::TextureObjectManager::getNumberActiveTextureObjects
	static int _bind_getNumberActiveTextureObjects(lua_State *L) {
		if (_lg_typecheck_getNumberActiveTextureObjects_overload_1(L)) return _bind_getNumberActiveTextureObjects_overload_1(L);
		if (_lg_typecheck_getNumberActiveTextureObjects_overload_2(L)) return _bind_getNumberActiveTextureObjects_overload_2(L);

		luaL_error(L, "error in function getNumberActiveTextureObjects, cannot match any of the overloads for function getNumberActiveTextureObjects:\n  getNumberActiveTextureObjects()\n  getNumberActiveTextureObjects()\n");
		return 0;
	}

	// void osg::Texture::TextureObjectManager::setNumberOrphanedTextureObjects(unsigned int size)
	static int _bind_setNumberOrphanedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_setNumberOrphanedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::setNumberOrphanedTextureObjects(unsigned int size) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::setNumberOrphanedTextureObjects(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::setNumberOrphanedTextureObjects(unsigned int)");
		}
		self->setNumberOrphanedTextureObjects(size);

		return 0;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects()
	static int _bind_getNumberOrphanedTextureObjects_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNumberOrphanedTextureObjects_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects()");
		}
		unsigned int & lret = self->getNumberOrphanedTextureObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects() const
	static int _bind_getNumberOrphanedTextureObjects_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNumberOrphanedTextureObjects_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects() const");
		}
		unsigned int lret = self->getNumberOrphanedTextureObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Texture::TextureObjectManager::getNumberOrphanedTextureObjects
	static int _bind_getNumberOrphanedTextureObjects(lua_State *L) {
		if (_lg_typecheck_getNumberOrphanedTextureObjects_overload_1(L)) return _bind_getNumberOrphanedTextureObjects_overload_1(L);
		if (_lg_typecheck_getNumberOrphanedTextureObjects_overload_2(L)) return _bind_getNumberOrphanedTextureObjects_overload_2(L);

		luaL_error(L, "error in function getNumberOrphanedTextureObjects, cannot match any of the overloads for function getNumberOrphanedTextureObjects:\n  getNumberOrphanedTextureObjects()\n  getNumberOrphanedTextureObjects()\n");
		return 0;
	}

	// void osg::Texture::TextureObjectManager::setCurrTexturePoolSize(unsigned int size)
	static int _bind_setCurrTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_setCurrTexturePoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::setCurrTexturePoolSize(unsigned int size) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::setCurrTexturePoolSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::setCurrTexturePoolSize(unsigned int)");
		}
		self->setCurrTexturePoolSize(size);

		return 0;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getCurrTexturePoolSize()
	static int _bind_getCurrTexturePoolSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrTexturePoolSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getCurrTexturePoolSize() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getCurrTexturePoolSize()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getCurrTexturePoolSize()");
		}
		unsigned int & lret = self->getCurrTexturePoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectManager::getCurrTexturePoolSize() const
	static int _bind_getCurrTexturePoolSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrTexturePoolSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectManager::getCurrTexturePoolSize() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectManager::getCurrTexturePoolSize() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectManager::getCurrTexturePoolSize() const");
		}
		unsigned int lret = self->getCurrTexturePoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Texture::TextureObjectManager::getCurrTexturePoolSize
	static int _bind_getCurrTexturePoolSize(lua_State *L) {
		if (_lg_typecheck_getCurrTexturePoolSize_overload_1(L)) return _bind_getCurrTexturePoolSize_overload_1(L);
		if (_lg_typecheck_getCurrTexturePoolSize_overload_2(L)) return _bind_getCurrTexturePoolSize_overload_2(L);

		luaL_error(L, "error in function getCurrTexturePoolSize, cannot match any of the overloads for function getCurrTexturePoolSize:\n  getCurrTexturePoolSize()\n  getCurrTexturePoolSize()\n");
		return 0;
	}

	// void osg::Texture::TextureObjectManager::setMaxTexturePoolSize(unsigned int size)
	static int _bind_setMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxTexturePoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::setMaxTexturePoolSize(unsigned int size) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::setMaxTexturePoolSize(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::setMaxTexturePoolSize(unsigned int)");
		}
		self->setMaxTexturePoolSize(size);

		return 0;
	}

	// unsigned int osg::Texture::TextureObjectManager::getMaxTexturePoolSize() const
	static int _bind_getMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxTexturePoolSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectManager::getMaxTexturePoolSize() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectManager::getMaxTexturePoolSize() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectManager::getMaxTexturePoolSize() const");
		}
		unsigned int lret = self->getMaxTexturePoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::TextureObjectManager::hasSpace(unsigned int size) const
	static int _bind_hasSpace(lua_State *L) {
		if (!_lg_typecheck_hasSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObjectManager::hasSpace(unsigned int size) const function, expected prototype:\nbool osg::Texture::TextureObjectManager::hasSpace(unsigned int size) const\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObjectManager::hasSpace(unsigned int) const");
		}
		bool lret = self->hasSpace(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureObjectManager::makeSpace(unsigned int size)
	static int _bind_makeSpace(lua_State *L) {
		if (!_lg_typecheck_makeSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObjectManager::makeSpace(unsigned int size) function, expected prototype:\nbool osg::Texture::TextureObjectManager::makeSpace(unsigned int size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObjectManager::makeSpace(unsigned int)");
		}
		bool lret = self->makeSpace(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target)
	static int _bind_generateTextureObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_generateTextureObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target) function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int target=(unsigned int)lua_tointeger(L,3);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture *, unsigned int)");
		}
		osg::Texture::TextureObject * lret = self->generateTextureObject(texture, target);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_generateTextureObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_generateTextureObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture * texture, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		int numMipmapLevels=(int)lua_tointeger(L,4);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,5);
		int width=(int)lua_tointeger(L,6);
		int height=(int)lua_tointeger(L,7);
		int depth=(int)lua_tointeger(L,8);
		int border=(int)lua_tointeger(L,9);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObjectManager::generateTextureObject(const osg::Texture *, unsigned int, int, unsigned int, int, int, int, int)");
		}
		osg::Texture::TextureObject * lret = self->generateTextureObject(texture, target, numMipmapLevels, internalFormat, width, height, depth, border);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture::TextureObjectManager::generateTextureObject
	static int _bind_generateTextureObject(lua_State *L) {
		if (_lg_typecheck_generateTextureObject_overload_1(L)) return _bind_generateTextureObject_overload_1(L);
		if (_lg_typecheck_generateTextureObject_overload_2(L)) return _bind_generateTextureObject_overload_2(L);

		luaL_error(L, "error in function generateTextureObject, cannot match any of the overloads for function generateTextureObject:\n  generateTextureObject(const osg::Texture *, unsigned int)\n  generateTextureObject(const osg::Texture *, unsigned int, int, unsigned int, int, int, int, int)\n");
		return 0;
	}

	// void osg::Texture::TextureObjectManager::handlePendingOrphandedTextureObjects()
	static int _bind_handlePendingOrphandedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_handlePendingOrphandedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::handlePendingOrphandedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::handlePendingOrphandedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::handlePendingOrphandedTextureObjects()");
		}
		self->handlePendingOrphandedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::deleteAllTextureObjects()
	static int _bind_deleteAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::deleteAllTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::deleteAllTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::deleteAllTextureObjects()");
		}
		self->deleteAllTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::discardAllTextureObjects()
	static int _bind_discardAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::discardAllTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::discardAllTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::discardAllTextureObjects()");
		}
		self->discardAllTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::flushAllDeletedTextureObjects()
	static int _bind_flushAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::flushAllDeletedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::flushAllDeletedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::flushAllDeletedTextureObjects()");
		}
		self->flushAllDeletedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::discardAllDeletedTextureObjects()
	static int _bind_discardAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::discardAllDeletedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::discardAllDeletedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::discardAllDeletedTextureObjects()");
		}
		self->discardAllDeletedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::flushDeletedTextureObjects(double currentTime, double & availableTime)
	static int _bind_flushDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::flushDeletedTextureObjects(double currentTime, double & availableTime) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::flushDeletedTextureObjects(double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::flushDeletedTextureObjects(double, double &)");
		}
		self->flushDeletedTextureObjects(currentTime, availableTime);

		return 0;
	}

	// void osg::Texture::TextureObjectManager::releaseTextureObject(osg::Texture::TextureObject * to)
	static int _bind_releaseTextureObject(lua_State *L) {
		if (!_lg_typecheck_releaseTextureObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::releaseTextureObject(osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::releaseTextureObject(osg::Texture::TextureObject * to)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::releaseTextureObject(osg::Texture::TextureObject *)");
		}
		self->releaseTextureObject(to);

		return 0;
	}

	// osg::Texture::TextureObjectSet * osg::Texture::TextureObjectManager::getTextureObjectSet(const osg::Texture::TextureProfile & profile)
	static int _bind_getTextureObjectSet(lua_State *L) {
		if (!_lg_typecheck_getTextureObjectSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectSet * osg::Texture::TextureObjectManager::getTextureObjectSet(const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObjectSet * osg::Texture::TextureObjectManager::getTextureObjectSet(const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 1 ID = 69361645\n");
		}

		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObjectManager::getTextureObjectSet function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObjectSet * osg::Texture::TextureObjectManager::getTextureObjectSet(const osg::Texture::TextureProfile &)");
		}
		osg::Texture::TextureObjectSet * lret = self->getTextureObjectSet(profile);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObjectSet >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::TextureObjectManager::newFrame(osg::FrameStamp * fs)
	static int _bind_newFrame(lua_State *L) {
		if (!_lg_typecheck_newFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::newFrame(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::newFrame(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::newFrame(osg::FrameStamp *)");
		}
		self->newFrame(fs);

		return 0;
	}

	// void osg::Texture::TextureObjectManager::resetStats()
	static int _bind_resetStats(lua_State *L) {
		if (!_lg_typecheck_resetStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::resetStats() function, expected prototype:\nvoid osg::Texture::TextureObjectManager::resetStats()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::resetStats()");
		}
		self->resetStats();

		return 0;
	}

	// void osg::Texture::TextureObjectManager::reportStats(std::ostream & out)
	static int _bind_reportStats(lua_State *L) {
		if (!_lg_typecheck_reportStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::reportStats(std::ostream & out) function, expected prototype:\nvoid osg::Texture::TextureObjectManager::reportStats(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::Texture::TextureObjectManager::reportStats function");
		}
		std::ostream & out=*out_ptr;

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::reportStats(std::ostream &)");
		}
		self->reportStats(out);

		return 0;
	}

	// void osg::Texture::TextureObjectManager::recomputeStats(std::ostream & out) const
	static int _bind_recomputeStats(lua_State *L) {
		if (!_lg_typecheck_recomputeStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectManager::recomputeStats(std::ostream & out) const function, expected prototype:\nvoid osg::Texture::TextureObjectManager::recomputeStats(std::ostream & out) const\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::Texture::TextureObjectManager::recomputeStats function");
		}
		std::ostream & out=*out_ptr;

		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectManager::recomputeStats(std::ostream &) const");
		}
		self->recomputeStats(out);

		return 0;
	}

	// bool osg::Texture::TextureObjectManager::checkConsistency() const
	static int _bind_checkConsistency(lua_State *L) {
		if (!_lg_typecheck_checkConsistency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObjectManager::checkConsistency() const function, expected prototype:\nbool osg::Texture::TextureObjectManager::checkConsistency() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObjectManager::checkConsistency() const");
		}
		bool lret = self->checkConsistency();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getFrameNumber()
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getFrameNumber() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getFrameNumber()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getFrameNumber()");
		}
		unsigned int & lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberFrames()
	static int _bind_getNumberFrames(lua_State *L) {
		if (!_lg_typecheck_getNumberFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberFrames() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberFrames()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberFrames()");
		}
		unsigned int & lret = self->getNumberFrames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberDeleted()
	static int _bind_getNumberDeleted(lua_State *L) {
		if (!_lg_typecheck_getNumberDeleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberDeleted() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberDeleted()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberDeleted()");
		}
		unsigned int & lret = self->getNumberDeleted();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::Texture::TextureObjectManager::getDeleteTime()
	static int _bind_getDeleteTime(lua_State *L) {
		if (!_lg_typecheck_getDeleteTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Texture::TextureObjectManager::getDeleteTime() function, expected prototype:\ndouble & osg::Texture::TextureObjectManager::getDeleteTime()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Texture::TextureObjectManager::getDeleteTime()");
		}
		double & lret = self->getDeleteTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberGenerated()
	static int _bind_getNumberGenerated(lua_State *L) {
		if (!_lg_typecheck_getNumberGenerated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberGenerated() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberGenerated()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberGenerated()");
		}
		unsigned int & lret = self->getNumberGenerated();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::Texture::TextureObjectManager::getGenerateTime()
	static int _bind_getGenerateTime(lua_State *L) {
		if (!_lg_typecheck_getGenerateTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Texture::TextureObjectManager::getGenerateTime() function, expected prototype:\ndouble & osg::Texture::TextureObjectManager::getGenerateTime()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Texture::TextureObjectManager::getGenerateTime()");
		}
		double & lret = self->getGenerateTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::Texture::TextureObjectManager::getNumberApplied()
	static int _bind_getNumberApplied(lua_State *L) {
		if (!_lg_typecheck_getNumberApplied(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture::TextureObjectManager::getNumberApplied() function, expected prototype:\nunsigned int & osg::Texture::TextureObjectManager::getNumberApplied()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture::TextureObjectManager::getNumberApplied()");
		}
		unsigned int & lret = self->getNumberApplied();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::Texture::TextureObjectManager::getApplyTime()
	static int _bind_getApplyTime(lua_State *L) {
		if (!_lg_typecheck_getApplyTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & osg::Texture::TextureObjectManager::getApplyTime() function, expected prototype:\ndouble & osg::Texture::TextureObjectManager::getApplyTime()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & osg::Texture::TextureObjectManager::getApplyTime()");
		}
		double & lret = self->getApplyTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Texture::TextureObjectManager* LunaTraits< osg::Texture::TextureObjectManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureObjectManager::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Texture::TextureObjectManager >::_bind_dtor(osg::Texture::TextureObjectManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture::TextureObjectManager >::className[] = "TextureObjectManager";
const char LunaTraits< osg::Texture::TextureObjectManager >::fullName[] = "osg::Texture::TextureObjectManager";
const char LunaTraits< osg::Texture::TextureObjectManager >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureObjectManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture::TextureObjectManager >::hash = 91062884;
const int LunaTraits< osg::Texture::TextureObjectManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture::TextureObjectManager >::methods[] = {
	{"getContextID", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getContextID},
	{"setNumberActiveTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_setNumberActiveTextureObjects},
	{"getNumberActiveTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberActiveTextureObjects},
	{"setNumberOrphanedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_setNumberOrphanedTextureObjects},
	{"getNumberOrphanedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberOrphanedTextureObjects},
	{"setCurrTexturePoolSize", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_setCurrTexturePoolSize},
	{"getCurrTexturePoolSize", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getCurrTexturePoolSize},
	{"setMaxTexturePoolSize", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_setMaxTexturePoolSize},
	{"getMaxTexturePoolSize", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getMaxTexturePoolSize},
	{"hasSpace", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_hasSpace},
	{"makeSpace", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_makeSpace},
	{"generateTextureObject", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_generateTextureObject},
	{"handlePendingOrphandedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_handlePendingOrphandedTextureObjects},
	{"deleteAllTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_deleteAllTextureObjects},
	{"discardAllTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_discardAllTextureObjects},
	{"flushAllDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_flushAllDeletedTextureObjects},
	{"discardAllDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_discardAllDeletedTextureObjects},
	{"flushDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_flushDeletedTextureObjects},
	{"releaseTextureObject", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_releaseTextureObject},
	{"getTextureObjectSet", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getTextureObjectSet},
	{"newFrame", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_newFrame},
	{"resetStats", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_resetStats},
	{"reportStats", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_reportStats},
	{"recomputeStats", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_recomputeStats},
	{"checkConsistency", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_checkConsistency},
	{"getFrameNumber", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getFrameNumber},
	{"getNumberFrames", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberFrames},
	{"getNumberDeleted", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberDeleted},
	{"getDeleteTime", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getDeleteTime},
	{"getNumberGenerated", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberGenerated},
	{"getGenerateTime", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getGenerateTime},
	{"getNumberApplied", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getNumberApplied},
	{"getApplyTime", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getApplyTime},
	{"__eq", &luna_wrapper_osg_Texture_TextureObjectManager::_bind___eq},
	{"getTable", &luna_wrapper_osg_Texture_TextureObjectManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureObjectManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture_TextureObjectManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureObjectManager >::enumValues[] = {
	{0,0}
};


