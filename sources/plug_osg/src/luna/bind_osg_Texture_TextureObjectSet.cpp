#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture_TextureObjectSet.h>

class luna_wrapper_osg_Texture_TextureObjectSet {
public:
	typedef Luna< osg::Texture::TextureObjectSet > luna_t;

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
		//osg::Texture::TextureObjectSet* ptr= dynamic_cast< osg::Texture::TextureObjectSet* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture::TextureObjectSet* ptr= luna_caster< osg::Referenced, osg::Texture::TextureObjectSet >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture::TextureObjectSet >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Texture::TextureObjectManager* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		if( (!dynamic_cast< osg::Texture::TextureProfile* >(Luna< osg::Texture::TextureProfile >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture::TextureObjectManager* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,69361645) ) return false;
		if( (!dynamic_cast< osg::Texture::TextureProfile* >(Luna< osg::Texture::TextureProfile >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getProfile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_takeFromOrphans(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_takeOrGenerate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveToBack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addToBack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orphan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveToSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkConsistency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeNumTextureObjectsInList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOfTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOrphans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPendingOrphans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::TextureObjectSet::TextureObjectSet(osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObjectSet* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectSet::TextureObjectSet(osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObjectSet::TextureObjectSet(osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 69361645\n");
		}

		osg::Texture::TextureObjectManager* parent=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,1));
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObjectSet::TextureObjectSet function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new osg::Texture::TextureObjectSet(parent, profile);
	}

	// osg::Texture::TextureObjectSet::TextureObjectSet(lua_Table * data, osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObjectSet* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectSet::TextureObjectSet(lua_Table * data, osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObjectSet::TextureObjectSet(lua_Table * data, osg::Texture::TextureObjectManager * parent, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 69361645\n");
		}

		osg::Texture::TextureObjectManager* parent=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectManager >(L,2));
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,3));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObjectSet::TextureObjectSet function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new wrapper_osg_Texture_TextureObjectSet(L,NULL, parent, profile);
	}

	// Overload binder for osg::Texture::TextureObjectSet::TextureObjectSet
	static osg::Texture::TextureObjectSet* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureObjectSet, cannot match any of the overloads for function TextureObjectSet:\n  TextureObjectSet(osg::Texture::TextureObjectManager *, const osg::Texture::TextureProfile &)\n  TextureObjectSet(lua_Table *, osg::Texture::TextureObjectManager *, const osg::Texture::TextureProfile &)\n");
		return NULL;
	}


	// Function binds:
	// const osg::Texture::TextureProfile & osg::Texture::TextureObjectSet::getProfile() const
	static int _bind_getProfile(lua_State *L) {
		if (!_lg_typecheck_getProfile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture::TextureProfile & osg::Texture::TextureObjectSet::getProfile() const function, expected prototype:\nconst osg::Texture::TextureProfile & osg::Texture::TextureObjectSet::getProfile() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture::TextureProfile & osg::Texture::TextureObjectSet::getProfile() const");
		}
		const osg::Texture::TextureProfile* lret = &self->getProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureProfile >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::TextureObjectSet::handlePendingOrphandedTextureObjects()
	static int _bind_handlePendingOrphandedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_handlePendingOrphandedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::handlePendingOrphandedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectSet::handlePendingOrphandedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::handlePendingOrphandedTextureObjects()");
		}
		self->handlePendingOrphandedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectSet::deleteAllTextureObjects()
	static int _bind_deleteAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::deleteAllTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectSet::deleteAllTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::deleteAllTextureObjects()");
		}
		self->deleteAllTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectSet::discardAllTextureObjects()
	static int _bind_discardAllTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::discardAllTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectSet::discardAllTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::discardAllTextureObjects()");
		}
		self->discardAllTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectSet::flushAllDeletedTextureObjects()
	static int _bind_flushAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::flushAllDeletedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectSet::flushAllDeletedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::flushAllDeletedTextureObjects()");
		}
		self->flushAllDeletedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectSet::discardAllDeletedTextureObjects()
	static int _bind_discardAllDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::discardAllDeletedTextureObjects() function, expected prototype:\nvoid osg::Texture::TextureObjectSet::discardAllDeletedTextureObjects()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::discardAllDeletedTextureObjects()");
		}
		self->discardAllDeletedTextureObjects();

		return 0;
	}

	// void osg::Texture::TextureObjectSet::flushDeletedTextureObjects(double currentTime, double & availableTime)
	static int _bind_flushDeletedTextureObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::flushDeletedTextureObjects(double currentTime, double & availableTime) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::flushDeletedTextureObjects(double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::flushDeletedTextureObjects(double, double &)");
		}
		self->flushDeletedTextureObjects(currentTime, availableTime);

		return 0;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeFromOrphans(osg::Texture * texture)
	static int _bind_takeFromOrphans(lua_State *L) {
		if (!_lg_typecheck_takeFromOrphans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeFromOrphans(osg::Texture * texture) function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeFromOrphans(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeFromOrphans(osg::Texture *)");
		}
		osg::Texture::TextureObject * lret = self->takeFromOrphans(texture);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeOrGenerate(osg::Texture * texture)
	static int _bind_takeOrGenerate(lua_State *L) {
		if (!_lg_typecheck_takeOrGenerate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeOrGenerate(osg::Texture * texture) function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeOrGenerate(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObjectSet::takeOrGenerate(osg::Texture *)");
		}
		osg::Texture::TextureObject * lret = self->takeOrGenerate(texture);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::TextureObjectSet::moveToBack(osg::Texture::TextureObject * to)
	static int _bind_moveToBack(lua_State *L) {
		if (!_lg_typecheck_moveToBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::moveToBack(osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::moveToBack(osg::Texture::TextureObject * to)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::moveToBack(osg::Texture::TextureObject *)");
		}
		self->moveToBack(to);

		return 0;
	}

	// void osg::Texture::TextureObjectSet::addToBack(osg::Texture::TextureObject * to)
	static int _bind_addToBack(lua_State *L) {
		if (!_lg_typecheck_addToBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::addToBack(osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::addToBack(osg::Texture::TextureObject * to)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::addToBack(osg::Texture::TextureObject *)");
		}
		self->addToBack(to);

		return 0;
	}

	// void osg::Texture::TextureObjectSet::orphan(osg::Texture::TextureObject * to)
	static int _bind_orphan(lua_State *L) {
		if (!_lg_typecheck_orphan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::orphan(osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::orphan(osg::Texture::TextureObject * to)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::orphan(osg::Texture::TextureObject *)");
		}
		self->orphan(to);

		return 0;
	}

	// void osg::Texture::TextureObjectSet::remove(osg::Texture::TextureObject * to)
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::remove(osg::Texture::TextureObject * to) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::remove(osg::Texture::TextureObject * to)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::remove(osg::Texture::TextureObject *)");
		}
		self->remove(to);

		return 0;
	}

	// void osg::Texture::TextureObjectSet::moveToSet(osg::Texture::TextureObject * to, osg::Texture::TextureObjectSet * set)
	static int _bind_moveToSet(lua_State *L) {
		if (!_lg_typecheck_moveToSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObjectSet::moveToSet(osg::Texture::TextureObject * to, osg::Texture::TextureObjectSet * set) function, expected prototype:\nvoid osg::Texture::TextureObjectSet::moveToSet(osg::Texture::TextureObject * to, osg::Texture::TextureObjectSet * set)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Texture::TextureObject* to=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));
		osg::Texture::TextureObjectSet* set=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,3));

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObjectSet::moveToSet(osg::Texture::TextureObject *, osg::Texture::TextureObjectSet *)");
		}
		self->moveToSet(to, set);

		return 0;
	}

	// unsigned int osg::Texture::TextureObjectSet::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectSet::size() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectSet::size() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectSet::size() const");
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture::TextureObjectSet::makeSpace(unsigned int & size)
	static int _bind_makeSpace(lua_State *L) {
		if (!_lg_typecheck_makeSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObjectSet::makeSpace(unsigned int & size) function, expected prototype:\nbool osg::Texture::TextureObjectSet::makeSpace(unsigned int & size)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObjectSet::makeSpace(unsigned int &)");
		}
		bool lret = self->makeSpace(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureObjectSet::checkConsistency() const
	static int _bind_checkConsistency(lua_State *L) {
		if (!_lg_typecheck_checkConsistency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObjectSet::checkConsistency() const function, expected prototype:\nbool osg::Texture::TextureObjectSet::checkConsistency() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObjectSet::checkConsistency() const");
		}
		bool lret = self->checkConsistency();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture::TextureObjectManager * osg::Texture::TextureObjectSet::getParent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectManager * osg::Texture::TextureObjectSet::getParent() function, expected prototype:\nosg::Texture::TextureObjectManager * osg::Texture::TextureObjectSet::getParent()\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObjectManager * osg::Texture::TextureObjectSet::getParent()");
		}
		osg::Texture::TextureObjectManager * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObjectManager >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectSet::computeNumTextureObjectsInList() const
	static int _bind_computeNumTextureObjectsInList(lua_State *L) {
		if (!_lg_typecheck_computeNumTextureObjectsInList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectSet::computeNumTextureObjectsInList() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectSet::computeNumTextureObjectsInList() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectSet::computeNumTextureObjectsInList() const");
		}
		unsigned int lret = self->computeNumTextureObjectsInList();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectSet::getNumOfTextureObjects() const
	static int _bind_getNumOfTextureObjects(lua_State *L) {
		if (!_lg_typecheck_getNumOfTextureObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectSet::getNumOfTextureObjects() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectSet::getNumOfTextureObjects() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectSet::getNumOfTextureObjects() const");
		}
		unsigned int lret = self->getNumOfTextureObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectSet::getNumOrphans() const
	static int _bind_getNumOrphans(lua_State *L) {
		if (!_lg_typecheck_getNumOrphans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectSet::getNumOrphans() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectSet::getNumOrphans() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectSet::getNumOrphans() const");
		}
		unsigned int lret = self->getNumOrphans();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObjectSet::getNumPendingOrphans() const
	static int _bind_getNumPendingOrphans(lua_State *L) {
		if (!_lg_typecheck_getNumPendingOrphans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObjectSet::getNumPendingOrphans() const function, expected prototype:\nunsigned int osg::Texture::TextureObjectSet::getNumPendingOrphans() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObjectSet::getNumPendingOrphans() const");
		}
		unsigned int lret = self->getNumPendingOrphans();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Texture::TextureObjectSet* LunaTraits< osg::Texture::TextureObjectSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureObjectSet::_bind_ctor(L);
}

void LunaTraits< osg::Texture::TextureObjectSet >::_bind_dtor(osg::Texture::TextureObjectSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture::TextureObjectSet >::className[] = "TextureObjectSet";
const char LunaTraits< osg::Texture::TextureObjectSet >::fullName[] = "osg::Texture::TextureObjectSet";
const char LunaTraits< osg::Texture::TextureObjectSet >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureObjectSet >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture::TextureObjectSet >::hash = 92527901;
const int LunaTraits< osg::Texture::TextureObjectSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture::TextureObjectSet >::methods[] = {
	{"getProfile", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_getProfile},
	{"handlePendingOrphandedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_handlePendingOrphandedTextureObjects},
	{"deleteAllTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_deleteAllTextureObjects},
	{"discardAllTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_discardAllTextureObjects},
	{"flushAllDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_flushAllDeletedTextureObjects},
	{"discardAllDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_discardAllDeletedTextureObjects},
	{"flushDeletedTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_flushDeletedTextureObjects},
	{"takeFromOrphans", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_takeFromOrphans},
	{"takeOrGenerate", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_takeOrGenerate},
	{"moveToBack", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_moveToBack},
	{"addToBack", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_addToBack},
	{"orphan", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_orphan},
	{"remove", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_remove},
	{"moveToSet", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_moveToSet},
	{"size", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_size},
	{"makeSpace", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_makeSpace},
	{"checkConsistency", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_checkConsistency},
	{"getParent", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_getParent},
	{"computeNumTextureObjectsInList", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_computeNumTextureObjectsInList},
	{"getNumOfTextureObjects", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_getNumOfTextureObjects},
	{"getNumOrphans", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_getNumOrphans},
	{"getNumPendingOrphans", &luna_wrapper_osg_Texture_TextureObjectSet::_bind_getNumPendingOrphans},
	{"__eq", &luna_wrapper_osg_Texture_TextureObjectSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureObjectSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture_TextureObjectSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureObjectSet >::enumValues[] = {
	{0,0}
};


