#include <plug_common.h>

class luna_wrapper_osgDB_DatabasePager {
public:
	typedef Luna< osgDB::DatabasePager > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::DatabasePager* ptr= dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabasePager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestNodeFile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,52841328) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84922662) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceptNewDatabaseRequests(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAcceptNewDatabaseRequests(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFramesActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_signalBeginFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_signalEndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_registerPagedLODs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoPreCompile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoPreCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTargetMaximumNumberOfPageLOD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTargetMaximumNumberOfPageLOD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawablePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawablePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setApplyPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplyPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxAnisotropyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxAnisotropyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileRequestListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataToCompileListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataToMergeListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRequestsInProgress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumTimeToMergeTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaximumTimeToMergeTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAverageTimeToMergeTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prototype(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::DatabasePager::DatabasePager()
	static osgDB::DatabasePager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager() function, expected prototype:\nosgDB::DatabasePager::DatabasePager()\nClass arguments details:\n");
		}


		return new osgDB::DatabasePager();
	}

	// osgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs)
	static osgDB::DatabasePager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs) function, expected prototype:\nosgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::DatabasePager* rhs_ptr=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgDB::DatabasePager::DatabasePager function");
		}
		const osgDB::DatabasePager & rhs=*rhs_ptr;

		return new osgDB::DatabasePager(rhs);
	}

	// Overload binder for osgDB::DatabasePager::DatabasePager
	static osgDB::DatabasePager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DatabasePager, cannot match any of the overloads for function DatabasePager:\n  DatabasePager()\n  DatabasePager(const osgDB::DatabasePager &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgDB::DatabasePager::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabasePager::className() const function, expected prototype:\nconst char * osgDB::DatabasePager::className() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabasePager::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgDB::DatabasePager * osgDB::DatabasePager::clone() const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgDB::DatabasePager::clone() const function, expected prototype:\nosgDB::DatabasePager * osgDB::DatabasePager::clone() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgDB::DatabasePager::clone() const");
		}
		osgDB::DatabasePager * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// void osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)
	static int _bind_requestNodeFile(lua_State *L) {
		if (!_lg_typecheck_requestNodeFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options) function, expected prototype:\nvoid osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)\nClass arguments details:\narg 2 ID = 52841328\narg 4 ID = 50169651\narg 5 ID = [unknown]\narg 6 ID = 50169651\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,3));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgDB::DatabasePager::requestNodeFile function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;
		float priority=(float)lua_tonumber(L,4);
		const osg::FrameStamp* framestamp=dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,5));
		osg::ref_ptr< osg::Referenced > databaseRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,6));
		const osg::Referenced* options=(Luna< osg::Referenced >::check(L,7));

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::requestNodeFile(const std::string &, osg::NodePath &, float, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *)");
		}
		self->requestNodeFile(fileName, nodePath, priority, framestamp, databaseRequest, options);

		return 0;
	}

	// int osgDB::DatabasePager::cancel()
	static int _bind_cancel(lua_State *L) {
		if (!_lg_typecheck_cancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::cancel() function, expected prototype:\nint osgDB::DatabasePager::cancel()\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::cancel()");
		}
		int lret = self->cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::DatabasePager::isRunning() const
	static int _bind_isRunning(lua_State *L) {
		if (!_lg_typecheck_isRunning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::isRunning() const function, expected prototype:\nbool osgDB::DatabasePager::isRunning() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::isRunning() const");
		}
		bool lret = self->isRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::clear() function, expected prototype:\nvoid osgDB::DatabasePager::clear()\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::clear()");
		}
		self->clear();

		return 0;
	}

	// void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests)
	static int _bind_setAcceptNewDatabaseRequests(lua_State *L) {
		if (!_lg_typecheck_setAcceptNewDatabaseRequests(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests) function, expected prototype:\nvoid osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests)\nClass arguments details:\n");
		}

		bool acceptNewRequests=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool)");
		}
		self->setAcceptNewDatabaseRequests(acceptNewRequests);

		return 0;
	}

	// bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const
	static int _bind_getAcceptNewDatabaseRequests(lua_State *L) {
		if (!_lg_typecheck_getAcceptNewDatabaseRequests(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const function, expected prototype:\nbool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const");
		}
		bool lret = self->getAcceptNewDatabaseRequests();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgDB::DatabasePager::getNumFramesActive() const
	static int _bind_getNumFramesActive(lua_State *L) {
		if (!_lg_typecheck_getNumFramesActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::getNumFramesActive() const function, expected prototype:\nint osgDB::DatabasePager::getNumFramesActive() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::getNumFramesActive() const");
		}
		int lret = self->getNumFramesActive();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp)
	static int _bind_signalBeginFrame(lua_State *L) {
		if (!_lg_typecheck_signalBeginFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* framestamp=dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp *)");
		}
		self->signalBeginFrame(framestamp);

		return 0;
	}

	// void osgDB::DatabasePager::signalEndFrame()
	static int _bind_signalEndFrame(lua_State *L) {
		if (!_lg_typecheck_signalEndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::signalEndFrame() function, expected prototype:\nvoid osgDB::DatabasePager::signalEndFrame()\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::signalEndFrame()");
		}
		self->signalEndFrame();

		return 0;
	}

	// void osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)
	static int _bind_registerPagedLODs(lua_State *L) {
		if (!_lg_typecheck_registerPagedLODs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0) function, expected prototype:\nvoid osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		unsigned int frameNumber=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::registerPagedLODs(osg::Node *, unsigned int)");
		}
		self->registerPagedLODs(subgraph, frameNumber);

		return 0;
	}

	// void osgDB::DatabasePager::setDoPreCompile(bool flag)
	static int _bind_setDoPreCompile(lua_State *L) {
		if (!_lg_typecheck_setDoPreCompile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setDoPreCompile(bool flag) function, expected prototype:\nvoid osgDB::DatabasePager::setDoPreCompile(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setDoPreCompile(bool)");
		}
		self->setDoPreCompile(flag);

		return 0;
	}

	// bool osgDB::DatabasePager::getDoPreCompile() const
	static int _bind_getDoPreCompile(lua_State *L) {
		if (!_lg_typecheck_getDoPreCompile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getDoPreCompile() const function, expected prototype:\nbool osgDB::DatabasePager::getDoPreCompile() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getDoPreCompile() const");
		}
		bool lret = self->getDoPreCompile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target)
	static int _bind_setTargetMaximumNumberOfPageLOD(lua_State *L) {
		if (!_lg_typecheck_setTargetMaximumNumberOfPageLOD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target) function, expected prototype:\nvoid osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int)");
		}
		self->setTargetMaximumNumberOfPageLOD(target);

		return 0;
	}

	// unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const
	static int _bind_getTargetMaximumNumberOfPageLOD(lua_State *L) {
		if (!_lg_typecheck_getTargetMaximumNumberOfPageLOD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const");
		}
		unsigned int lret = self->getTargetMaximumNumberOfPageLOD();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy)
	static int _bind_setDrawablePolicy(lua_State *L) {
		if (!_lg_typecheck_setDrawablePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy) function, expected prototype:\nvoid osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy)\nClass arguments details:\n");
		}

		osgDB::DatabasePager::DrawablePolicy policy=(osgDB::DatabasePager::DrawablePolicy)lua_tointeger(L,2);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy)");
		}
		self->setDrawablePolicy(policy);

		return 0;
	}

	// osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const
	static int _bind_getDrawablePolicy(lua_State *L) {
		if (!_lg_typecheck_getDrawablePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const function, expected prototype:\nosgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const");
		}
		osgDB::DatabasePager::DrawablePolicy lret = self->getDrawablePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages)
	static int _bind_setApplyPBOToImages(lua_State *L) {
		if (!_lg_typecheck_setApplyPBOToImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages) function, expected prototype:\nvoid osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages)\nClass arguments details:\n");
		}

		bool assignPBOToImages=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setApplyPBOToImages(bool)");
		}
		self->setApplyPBOToImages(assignPBOToImages);

		return 0;
	}

	// bool osgDB::DatabasePager::getApplyPBOToImages() const
	static int _bind_getApplyPBOToImages(lua_State *L) {
		if (!_lg_typecheck_getApplyPBOToImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getApplyPBOToImages() const function, expected prototype:\nbool osgDB::DatabasePager::getApplyPBOToImages() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getApplyPBOToImages() const");
		}
		bool lret = self->getApplyPBOToImages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef)
	static int _bind_setUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if (!_lg_typecheck_setUnrefImageDataAfterApplyPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef) function, expected prototype:\nvoid osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef)\nClass arguments details:\n");
		}

		bool changeAutoUnRef=(bool)(lua_toboolean(L,2)==1);
		bool valueAutoUnRef=(bool)(lua_toboolean(L,3)==1);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool, bool)");
		}
		self->setUnrefImageDataAfterApplyPolicy(changeAutoUnRef, valueAutoUnRef);

		return 0;
	}

	// void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const
	static int _bind_getUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if (!_lg_typecheck_getUnrefImageDataAfterApplyPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const function, expected prototype:\nvoid osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const\nClass arguments details:\n");
		}

		bool changeAutoUnRef=(bool)(lua_toboolean(L,2)==1);
		bool valueAutoUnRef=(bool)(lua_toboolean(L,3)==1);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool &, bool &) const");
		}
		self->getUnrefImageDataAfterApplyPolicy(changeAutoUnRef, valueAutoUnRef);

		return 0;
	}

	// void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy)
	static int _bind_setMaxAnisotropyPolicy(lua_State *L) {
		if (!_lg_typecheck_setMaxAnisotropyPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy) function, expected prototype:\nvoid osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy)\nClass arguments details:\n");
		}

		bool changeAnisotropy=(bool)(lua_toboolean(L,2)==1);
		float valueAnisotropy=(float)lua_tonumber(L,3);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool, float)");
		}
		self->setMaxAnisotropyPolicy(changeAnisotropy, valueAnisotropy);

		return 0;
	}

	// void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const
	static int _bind_getMaxAnisotropyPolicy(lua_State *L) {
		if (!_lg_typecheck_getMaxAnisotropyPolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const function, expected prototype:\nvoid osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const\nClass arguments details:\n");
		}

		bool changeAnisotropy=(bool)(lua_toboolean(L,2)==1);
		float valueAnisotropy=(float)lua_tonumber(L,3);

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool &, float &) const");
		}
		self->getMaxAnisotropyPolicy(changeAnisotropy, valueAnisotropy);

		return 0;
	}

	// bool osgDB::DatabasePager::requiresUpdateSceneGraph() const
	static int _bind_requiresUpdateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateSceneGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::requiresUpdateSceneGraph() const function, expected prototype:\nbool osgDB::DatabasePager::requiresUpdateSceneGraph() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::requiresUpdateSceneGraph() const");
		}
		bool lret = self->requiresUpdateSceneGraph();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_updateSceneGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* frameStamp_ptr=dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::DatabasePager::updateSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp &)");
		}
		self->updateSceneGraph(frameStamp);

		return 0;
	}

	// unsigned int osgDB::DatabasePager::getFileRequestListSize() const
	static int _bind_getFileRequestListSize(lua_State *L) {
		if (!_lg_typecheck_getFileRequestListSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getFileRequestListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getFileRequestListSize() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getFileRequestListSize() const");
		}
		unsigned int lret = self->getFileRequestListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::DatabasePager::getDataToCompileListSize() const
	static int _bind_getDataToCompileListSize(lua_State *L) {
		if (!_lg_typecheck_getDataToCompileListSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getDataToCompileListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getDataToCompileListSize() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getDataToCompileListSize() const");
		}
		unsigned int lret = self->getDataToCompileListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::DatabasePager::getDataToMergeListSize() const
	static int _bind_getDataToMergeListSize(lua_State *L) {
		if (!_lg_typecheck_getDataToMergeListSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getDataToMergeListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getDataToMergeListSize() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getDataToMergeListSize() const");
		}
		unsigned int lret = self->getDataToMergeListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::DatabasePager::getRequestsInProgress() const
	static int _bind_getRequestsInProgress(lua_State *L) {
		if (!_lg_typecheck_getRequestsInProgress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getRequestsInProgress() const function, expected prototype:\nbool osgDB::DatabasePager::getRequestsInProgress() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getRequestsInProgress() const");
		}
		bool lret = self->getRequestsInProgress();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osgDB::DatabasePager::getMinimumTimeToMergeTile() const
	static int _bind_getMinimumTimeToMergeTile(lua_State *L) {
		if (!_lg_typecheck_getMinimumTimeToMergeTile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getMinimumTimeToMergeTile() const function, expected prototype:\ndouble osgDB::DatabasePager::getMinimumTimeToMergeTile() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getMinimumTimeToMergeTile() const");
		}
		double lret = self->getMinimumTimeToMergeTile();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::DatabasePager::getMaximumTimeToMergeTile() const
	static int _bind_getMaximumTimeToMergeTile(lua_State *L) {
		if (!_lg_typecheck_getMaximumTimeToMergeTile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getMaximumTimeToMergeTile() const function, expected prototype:\ndouble osgDB::DatabasePager::getMaximumTimeToMergeTile() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getMaximumTimeToMergeTile() const");
		}
		double lret = self->getMaximumTimeToMergeTile();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::DatabasePager::getAverageTimeToMergeTiles() const
	static int _bind_getAverageTimeToMergeTiles(lua_State *L) {
		if (!_lg_typecheck_getAverageTimeToMergeTiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getAverageTimeToMergeTiles() const function, expected prototype:\ndouble osgDB::DatabasePager::getAverageTimeToMergeTiles() const\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getAverageTimeToMergeTiles() const");
		}
		double lret = self->getAverageTimeToMergeTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::resetStats()
	static int _bind_resetStats(lua_State *L) {
		if (!_lg_typecheck_resetStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::resetStats() function, expected prototype:\nvoid osgDB::DatabasePager::resetStats()\nClass arguments details:\n");
		}


		osgDB::DatabasePager* self=dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::resetStats()");
		}
		self->resetStats();

		return 0;
	}

	// static osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype()
	static int _bind_prototype(lua_State *L) {
		if (!_lg_typecheck_prototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype() function, expected prototype:\nstatic osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype()\nClass arguments details:\n");
		}


		osg::ref_ptr< osgDB::DatabasePager > & lret = osgDB::DatabasePager::prototype();
		Luna< osgDB::DatabasePager >::push(L,lret.get(),false);

		return 1;
	}

	// static osgDB::DatabasePager * osgDB::DatabasePager::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgDB::DatabasePager * osgDB::DatabasePager::create() function, expected prototype:\nstatic osgDB::DatabasePager * osgDB::DatabasePager::create()\nClass arguments details:\n");
		}


		osgDB::DatabasePager * lret = osgDB::DatabasePager::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::DatabasePager* LunaTraits< osgDB::DatabasePager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabasePager::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabasePager >::_bind_dtor(osgDB::DatabasePager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabasePager >::className[] = "DatabasePager";
const char LunaTraits< osgDB::DatabasePager >::fullName[] = "osgDB::DatabasePager";
const char LunaTraits< osgDB::DatabasePager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabasePager >::parents[] = {"osg.DatabaseRequestHandler", 0};
const int LunaTraits< osgDB::DatabasePager >::hash = 75878640;
const int LunaTraits< osgDB::DatabasePager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabasePager >::methods[] = {
	{"className", &luna_wrapper_osgDB_DatabasePager::_bind_className},
	{"clone", &luna_wrapper_osgDB_DatabasePager::_bind_clone},
	{"requestNodeFile", &luna_wrapper_osgDB_DatabasePager::_bind_requestNodeFile},
	{"cancel", &luna_wrapper_osgDB_DatabasePager::_bind_cancel},
	{"isRunning", &luna_wrapper_osgDB_DatabasePager::_bind_isRunning},
	{"clear", &luna_wrapper_osgDB_DatabasePager::_bind_clear},
	{"setAcceptNewDatabaseRequests", &luna_wrapper_osgDB_DatabasePager::_bind_setAcceptNewDatabaseRequests},
	{"getAcceptNewDatabaseRequests", &luna_wrapper_osgDB_DatabasePager::_bind_getAcceptNewDatabaseRequests},
	{"getNumFramesActive", &luna_wrapper_osgDB_DatabasePager::_bind_getNumFramesActive},
	{"signalBeginFrame", &luna_wrapper_osgDB_DatabasePager::_bind_signalBeginFrame},
	{"signalEndFrame", &luna_wrapper_osgDB_DatabasePager::_bind_signalEndFrame},
	{"registerPagedLODs", &luna_wrapper_osgDB_DatabasePager::_bind_registerPagedLODs},
	{"setDoPreCompile", &luna_wrapper_osgDB_DatabasePager::_bind_setDoPreCompile},
	{"getDoPreCompile", &luna_wrapper_osgDB_DatabasePager::_bind_getDoPreCompile},
	{"setTargetMaximumNumberOfPageLOD", &luna_wrapper_osgDB_DatabasePager::_bind_setTargetMaximumNumberOfPageLOD},
	{"getTargetMaximumNumberOfPageLOD", &luna_wrapper_osgDB_DatabasePager::_bind_getTargetMaximumNumberOfPageLOD},
	{"setDrawablePolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setDrawablePolicy},
	{"getDrawablePolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getDrawablePolicy},
	{"setApplyPBOToImages", &luna_wrapper_osgDB_DatabasePager::_bind_setApplyPBOToImages},
	{"getApplyPBOToImages", &luna_wrapper_osgDB_DatabasePager::_bind_getApplyPBOToImages},
	{"setUnrefImageDataAfterApplyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setUnrefImageDataAfterApplyPolicy},
	{"getUnrefImageDataAfterApplyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getUnrefImageDataAfterApplyPolicy},
	{"setMaxAnisotropyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setMaxAnisotropyPolicy},
	{"getMaxAnisotropyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getMaxAnisotropyPolicy},
	{"requiresUpdateSceneGraph", &luna_wrapper_osgDB_DatabasePager::_bind_requiresUpdateSceneGraph},
	{"updateSceneGraph", &luna_wrapper_osgDB_DatabasePager::_bind_updateSceneGraph},
	{"getFileRequestListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getFileRequestListSize},
	{"getDataToCompileListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getDataToCompileListSize},
	{"getDataToMergeListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getDataToMergeListSize},
	{"getRequestsInProgress", &luna_wrapper_osgDB_DatabasePager::_bind_getRequestsInProgress},
	{"getMinimumTimeToMergeTile", &luna_wrapper_osgDB_DatabasePager::_bind_getMinimumTimeToMergeTile},
	{"getMaximumTimeToMergeTile", &luna_wrapper_osgDB_DatabasePager::_bind_getMaximumTimeToMergeTile},
	{"getAverageTimeToMergeTiles", &luna_wrapper_osgDB_DatabasePager::_bind_getAverageTimeToMergeTiles},
	{"resetStats", &luna_wrapper_osgDB_DatabasePager::_bind_resetStats},
	{"prototype", &luna_wrapper_osgDB_DatabasePager::_bind_prototype},
	{"create", &luna_wrapper_osgDB_DatabasePager::_bind_create},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabasePager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabasePager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabasePager >::enumValues[] = {
	{"DO_NOT_MODIFY_DRAWABLE_SETTINGS", osgDB::DatabasePager::DO_NOT_MODIFY_DRAWABLE_SETTINGS},
	{"USE_DISPLAY_LISTS", osgDB::DatabasePager::USE_DISPLAY_LISTS},
	{"USE_VERTEX_BUFFER_OBJECTS", osgDB::DatabasePager::USE_VERTEX_BUFFER_OBJECTS},
	{"USE_VERTEX_ARRAYS", osgDB::DatabasePager::USE_VERTEX_ARRAYS},
	{0,0}
};

