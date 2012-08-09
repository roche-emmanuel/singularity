#include <plug_common.h>

class luna_wrapper_osg_GraphicsContext {
public:
	typedef Luna< osg::GraphicsContext > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsContext* ptr= dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_setWindowingSystemInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowingSystemInterface(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createNewContextID(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxContextID(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_incrementContextIDUsageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decrementContextIDUsageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllRegisteredGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRegisteredGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompileContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateCompileContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompileContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAllOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationsQueue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationsBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTraits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeSinceLastClear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swapBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeContextCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeContextCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersCallbackOrImplemenation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resized(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setResizedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResizedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getResizedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameras_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameras_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultFboId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultFboId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// static void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface)
	static int _bind_setWindowingSystemInterface(lua_State *L) {
		if (!_lg_typecheck_setWindowingSystemInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface) function, expected prototype:\nstatic void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::WindowingSystemInterface* wsInterface=dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));

		osg::GraphicsContext::setWindowingSystemInterface(wsInterface);

		return 0;
	}

	// static osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface()
	static int _bind_getWindowingSystemInterface(lua_State *L) {
		if (!_lg_typecheck_getWindowingSystemInterface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface() function, expected prototype:\nstatic osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface()\nClass arguments details:\n");
		}


		osg::GraphicsContext::WindowingSystemInterface * lret = osg::GraphicsContext::getWindowingSystemInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,lret,false);

		return 1;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	static int _bind_createGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_createGraphicsContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::Traits* traits=dynamic_cast< osg::GraphicsContext::Traits* >(Luna< osg::Referenced >::check(L,1));

		osg::GraphicsContext * lret = osg::GraphicsContext::createGraphicsContext(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// static unsigned int osg::GraphicsContext::createNewContextID()
	static int _bind_createNewContextID(lua_State *L) {
		if (!_lg_typecheck_createNewContextID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static unsigned int osg::GraphicsContext::createNewContextID() function, expected prototype:\nstatic unsigned int osg::GraphicsContext::createNewContextID()\nClass arguments details:\n");
		}


		unsigned int lret = osg::GraphicsContext::createNewContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::GraphicsContext::getMaxContextID()
	static int _bind_getMaxContextID(lua_State *L) {
		if (!_lg_typecheck_getMaxContextID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static unsigned int osg::GraphicsContext::getMaxContextID() function, expected prototype:\nstatic unsigned int osg::GraphicsContext::getMaxContextID()\nClass arguments details:\n");
		}


		unsigned int lret = osg::GraphicsContext::getMaxContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID)
	static int _bind_incrementContextIDUsageCount(lua_State *L) {
		if (!_lg_typecheck_incrementContextIDUsageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID) function, expected prototype:\nstatic void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::incrementContextIDUsageCount(contextID);

		return 0;
	}

	// static void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID)
	static int _bind_decrementContextIDUsageCount(lua_State *L) {
		if (!_lg_typecheck_decrementContextIDUsageCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID) function, expected prototype:\nstatic void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::decrementContextIDUsageCount(contextID);

		return 0;
	}

	// static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts()
	static int _bind_getAllRegisteredGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_getAllRegisteredGraphicsContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts() function, expected prototype:\nstatic osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts()\nClass arguments details:\n");
		}


		osg::GraphicsContext::GraphicsContexts stack_lret = osg::GraphicsContext::getAllRegisteredGraphicsContexts();
		osg::GraphicsContext::GraphicsContexts* lret = new osg::GraphicsContext::GraphicsContexts(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsContexts >::push(L,lret,true);

		return 1;
	}

	// static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID)
	static int _bind_getRegisteredGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_getRegisteredGraphicsContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::GraphicsContexts stack_lret = osg::GraphicsContext::getRegisteredGraphicsContexts(contextID);
		osg::GraphicsContext::GraphicsContexts* lret = new osg::GraphicsContext::GraphicsContexts(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsContexts >::push(L,lret,true);

		return 1;
	}

	// static void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc)
	static int _bind_setCompileContext(lua_State *L) {
		if (!_lg_typecheck_setCompileContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::GraphicsContext* gc=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::setCompileContext(contextID, gc);

		return 0;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID)
	static int _bind_getOrCreateCompileContext(lua_State *L) {
		if (!_lg_typecheck_getOrCreateCompileContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext * lret = osg::GraphicsContext::getOrCreateCompileContext(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID)
	static int _bind_getCompileContext(lua_State *L) {
		if (!_lg_typecheck_getCompileContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext * lret = osg::GraphicsContext::getCompileContext(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::add(osg::Operation * operation)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::add(osg::Operation * operation) function, expected prototype:\nvoid osg::GraphicsContext::add(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Operation* operation=dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::add(osg::Operation *)");
		}
		self->add(operation);

		return 0;
	}

	// void osg::GraphicsContext::remove(osg::Operation * operation)
	static int _bind_remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_remove_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::remove(osg::Operation * operation) function, expected prototype:\nvoid osg::GraphicsContext::remove(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Operation* operation=dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::remove(osg::Operation *)");
		}
		self->remove(operation);

		return 0;
	}

	// void osg::GraphicsContext::remove(const std::string & name)
	static int _bind_remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_remove_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::remove(const std::string & name) function, expected prototype:\nvoid osg::GraphicsContext::remove(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::remove(const std::string &)");
		}
		self->remove(name);

		return 0;
	}

	// Overload binder for osg::GraphicsContext::remove
	static int _bind_remove(lua_State *L) {
		if (_lg_typecheck_remove_overload_1(L)) return _bind_remove_overload_1(L);
		if (_lg_typecheck_remove_overload_2(L)) return _bind_remove_overload_2(L);

		luaL_error(L, "error in function remove, cannot match any of the overloads for function remove:\n  remove(osg::Operation *)\n  remove(const std::string &)\n");
		return 0;
	}

	// void osg::GraphicsContext::removeAllOperations()
	static int _bind_removeAllOperations(lua_State *L) {
		if (!_lg_typecheck_removeAllOperations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::removeAllOperations() function, expected prototype:\nvoid osg::GraphicsContext::removeAllOperations()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::removeAllOperations()");
		}
		self->removeAllOperations();

		return 0;
	}

	// void osg::GraphicsContext::runOperations()
	static int _bind_runOperations(lua_State *L) {
		if (!_lg_typecheck_runOperations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::runOperations() function, expected prototype:\nvoid osg::GraphicsContext::runOperations()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::runOperations()");
		}
		self->runOperations();

		return 0;
	}

	// osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue()
	static int _bind_getOperationsQueue(lua_State *L) {
		if (!_lg_typecheck_getOperationsQueue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue() function, expected prototype:\nosg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue()");
		}
		const osg::GraphicsContext::GraphicsOperationQueue* lret = &self->getOperationsQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsOperationQueue >::push(L,lret,false);

		return 1;
	}

	// osg::RefBlock * osg::GraphicsContext::getOperationsBlock()
	static int _bind_getOperationsBlock(lua_State *L) {
		if (!_lg_typecheck_getOperationsBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefBlock * osg::GraphicsContext::getOperationsBlock() function, expected prototype:\nosg::RefBlock * osg::GraphicsContext::getOperationsBlock()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::RefBlock * osg::GraphicsContext::getOperationsBlock()");
		}
		osg::RefBlock * lret = self->getOperationsBlock();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefBlock >::push(L,lret,false);

		return 1;
	}

	// osg::Operation * osg::GraphicsContext::getCurrentOperation()
	static int _bind_getCurrentOperation(lua_State *L) {
		if (!_lg_typecheck_getCurrentOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Operation * osg::GraphicsContext::getCurrentOperation() function, expected prototype:\nosg::Operation * osg::GraphicsContext::getCurrentOperation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Operation * osg::GraphicsContext::getCurrentOperation()");
		}
		osg::Operation * lret = self->getCurrentOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Operation >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const
	static int _bind_getTraits(lua_State *L) {
		if (!_lg_typecheck_getTraits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const function, expected prototype:\nconst osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const");
		}
		const osg::GraphicsContext::Traits * lret = self->getTraits();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Traits >::push(L,lret,false);

		return 1;
	}

	// bool osg::GraphicsContext::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::valid() const function, expected prototype:\nbool osg::GraphicsContext::valid() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setState(osg::State * state) function, expected prototype:\nvoid osg::GraphicsContext::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setState(osg::State *)");
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osg::GraphicsContext::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::State * osg::GraphicsContext::getState() function, expected prototype:\nosg::State * osg::GraphicsContext::getState()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::State * osg::GraphicsContext::getState()");
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osg::GraphicsContext::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::State * osg::GraphicsContext::getState() const function, expected prototype:\nconst osg::State * osg::GraphicsContext::getState() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::State * osg::GraphicsContext::getState() const");
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osg::GraphicsContext::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::GraphicsContext::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::GraphicsContext::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setClearColor(const osg::Vec4f &)");
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::GraphicsContext::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::GraphicsContext::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osg::GraphicsContext::getClearColor() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::GraphicsContext::getClearColor() const");
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::setClearMask(unsigned int mask)
	static int _bind_setClearMask(lua_State *L) {
		if (!_lg_typecheck_setClearMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setClearMask(unsigned int mask) function, expected prototype:\nvoid osg::GraphicsContext::setClearMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setClearMask(unsigned int)");
		}
		self->setClearMask(mask);

		return 0;
	}

	// unsigned int osg::GraphicsContext::getClearMask() const
	static int _bind_getClearMask(lua_State *L) {
		if (!_lg_typecheck_getClearMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::getClearMask() const function, expected prototype:\nunsigned int osg::GraphicsContext::getClearMask() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::getClearMask() const");
		}
		unsigned int lret = self->getClearMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::clear() function, expected prototype:\nvoid osg::GraphicsContext::clear()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::clear()");
		}
		self->clear();

		return 0;
	}

	// double osg::GraphicsContext::getTimeSinceLastClear() const
	static int _bind_getTimeSinceLastClear(lua_State *L) {
		if (!_lg_typecheck_getTimeSinceLastClear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::GraphicsContext::getTimeSinceLastClear() const function, expected prototype:\ndouble osg::GraphicsContext::getTimeSinceLastClear() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::GraphicsContext::getTimeSinceLastClear() const");
		}
		double lret = self->getTimeSinceLastClear();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::realize() function, expected prototype:\nbool osg::GraphicsContext::realize()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::realize()");
		}
		bool lret = self->realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::close(bool callCloseImplementation = true)
	static int _bind_close(lua_State *L) {
		if (!_lg_typecheck_close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::close(bool callCloseImplementation = true) function, expected prototype:\nvoid osg::GraphicsContext::close(bool callCloseImplementation = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool callCloseImplementation=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::close(bool)");
		}
		self->close(callCloseImplementation);

		return 0;
	}

	// void osg::GraphicsContext::swapBuffers()
	static int _bind_swapBuffers(lua_State *L) {
		if (!_lg_typecheck_swapBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffers() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffers()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffers()");
		}
		self->swapBuffers();

		return 0;
	}

	// bool osg::GraphicsContext::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isRealized() const function, expected prototype:\nbool osg::GraphicsContext::isRealized() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isRealized() const");
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeCurrent()
	static int _bind_makeCurrent(lua_State *L) {
		if (!_lg_typecheck_makeCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeCurrent() function, expected prototype:\nbool osg::GraphicsContext::makeCurrent()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeCurrent()");
		}
		bool lret = self->makeCurrent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext)
	static int _bind_makeContextCurrent(lua_State *L) {
		if (!_lg_typecheck_makeContextCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext) function, expected prototype:\nbool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* readContext=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext *)");
		}
		bool lret = self->makeContextCurrent(readContext);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::releaseContext()
	static int _bind_releaseContext(lua_State *L) {
		if (!_lg_typecheck_releaseContext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::releaseContext() function, expected prototype:\nbool osg::GraphicsContext::releaseContext()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::releaseContext()");
		}
		bool lret = self->releaseContext();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::isCurrent() const
	static int _bind_isCurrent(lua_State *L) {
		if (!_lg_typecheck_isCurrent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isCurrent() const function, expected prototype:\nbool osg::GraphicsContext::isCurrent() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isCurrent() const");
		}
		bool lret = self->isCurrent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer)
	static int _bind_bindPBufferToTexture(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer) function, expected prototype:\nvoid osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer)\nClass arguments details:\n");
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::bindPBufferToTexture(unsigned int)");
		}
		self->bindPBufferToTexture(buffer);

		return 0;
	}

	// bool osg::GraphicsContext::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::realizeImplementation() function, expected prototype:\nbool osg::GraphicsContext::realizeImplementation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::realizeImplementation()");
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isRealizedImplementation() const function, expected prototype:\nbool osg::GraphicsContext::isRealizedImplementation() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isRealizedImplementation() const");
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::closeImplementation() function, expected prototype:\nvoid osg::GraphicsContext::closeImplementation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::closeImplementation()");
		}
		self->closeImplementation();

		return 0;
	}

	// bool osg::GraphicsContext::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeCurrentImplementation() function, expected prototype:\nbool osg::GraphicsContext::makeCurrentImplementation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeCurrentImplementation()");
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	static int _bind_makeContextCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeContextCurrentImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext) function, expected prototype:\nbool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* readContext=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext *)");
		}
		bool lret = self->makeContextCurrentImplementation(readContext);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::releaseContextImplementation() function, expected prototype:\nbool osg::GraphicsContext::releaseContextImplementation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::releaseContextImplementation()");
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	static int _bind_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTextureImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer) function, expected prototype:\nvoid osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)\nClass arguments details:\n");
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int)");
		}
		self->bindPBufferToTextureImplementation(buffer);

		return 0;
	}

	// void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc)
	static int _bind_setSwapCallback(lua_State *L) {
		if (!_lg_typecheck_setSwapCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc) function, expected prototype:\nvoid osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::SwapCallback* rc=dynamic_cast< osg::GraphicsContext::SwapCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback *)");
		}
		self->setSwapCallback(rc);

		return 0;
	}

	// osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback()
	static int _bind_getSwapCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSwapCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() function, expected prototype:\nosg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback()");
		}
		osg::GraphicsContext::SwapCallback * lret = self->getSwapCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::SwapCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const
	static int _bind_getSwapCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSwapCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const function, expected prototype:\nconst osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const");
		}
		const osg::GraphicsContext::SwapCallback * lret = self->getSwapCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::SwapCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getSwapCallback
	static int _bind_getSwapCallback(lua_State *L) {
		if (_lg_typecheck_getSwapCallback_overload_1(L)) return _bind_getSwapCallback_overload_1(L);
		if (_lg_typecheck_getSwapCallback_overload_2(L)) return _bind_getSwapCallback_overload_2(L);

		luaL_error(L, "error in function getSwapCallback, cannot match any of the overloads for function getSwapCallback:\n  getSwapCallback()\n  getSwapCallback()\n");
		return 0;
	}

	// void osg::GraphicsContext::swapBuffersCallbackOrImplemenation()
	static int _bind_swapBuffersCallbackOrImplemenation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersCallbackOrImplemenation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffersCallbackOrImplemenation() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffersCallbackOrImplemenation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffersCallbackOrImplemenation()");
		}
		self->swapBuffersCallbackOrImplemenation();

		return 0;
	}

	// void osg::GraphicsContext::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffersImplementation() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffersImplementation()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffersImplementation()");
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osg::GraphicsContext::resized(int x, int y, int width, int height)
	static int _bind_resized(lua_State *L) {
		if (!_lg_typecheck_resized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::resized(int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::resized(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::resized(int, int, int, int)");
		}
		self->resized(x, y, width, height);

		return 0;
	}

	// void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc)
	static int _bind_setResizedCallback(lua_State *L) {
		if (!_lg_typecheck_setResizedCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc) function, expected prototype:\nvoid osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext::ResizedCallback* rc=dynamic_cast< osg::GraphicsContext::ResizedCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback *)");
		}
		self->setResizedCallback(rc);

		return 0;
	}

	// osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback()
	static int _bind_getResizedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getResizedCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() function, expected prototype:\nosg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback()");
		}
		osg::GraphicsContext::ResizedCallback * lret = self->getResizedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::ResizedCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const
	static int _bind_getResizedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getResizedCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const function, expected prototype:\nconst osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const");
		}
		const osg::GraphicsContext::ResizedCallback * lret = self->getResizedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::ResizedCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getResizedCallback
	static int _bind_getResizedCallback(lua_State *L) {
		if (_lg_typecheck_getResizedCallback_overload_1(L)) return _bind_getResizedCallback_overload_1(L);
		if (_lg_typecheck_getResizedCallback_overload_2(L)) return _bind_getResizedCallback_overload_2(L);

		luaL_error(L, "error in function getResizedCallback, cannot match any of the overloads for function getResizedCallback:\n  getResizedCallback()\n  getResizedCallback()\n");
		return 0;
	}

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	static int _bind_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_resizedImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::resizedImplementation(int, int, int, int)");
		}
		self->resizedImplementation(x, y, width, height);

		return 0;
	}

	// osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras()
	static int _bind_getCameras_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameras_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() function, expected prototype:\nosg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras()\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras()");
		}
		const osg::GraphicsContext::Cameras* lret = &self->getCameras();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Cameras >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const
	static int _bind_getCameras_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameras_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const function, expected prototype:\nconst osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const");
		}
		const osg::GraphicsContext::Cameras* lret = &self->getCameras();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Cameras >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getCameras
	static int _bind_getCameras(lua_State *L) {
		if (_lg_typecheck_getCameras_overload_1(L)) return _bind_getCameras_overload_1(L);
		if (_lg_typecheck_getCameras_overload_2(L)) return _bind_getCameras_overload_2(L);

		luaL_error(L, "error in function getCameras, cannot match any of the overloads for function getCameras:\n  getCameras()\n  getCameras()\n");
		return 0;
	}

	// void osg::GraphicsContext::setDefaultFboId(unsigned int i)
	static int _bind_setDefaultFboId(lua_State *L) {
		if (!_lg_typecheck_setDefaultFboId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setDefaultFboId(unsigned int i) function, expected prototype:\nvoid osg::GraphicsContext::setDefaultFboId(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setDefaultFboId(unsigned int)");
		}
		self->setDefaultFboId(i);

		return 0;
	}

	// unsigned int osg::GraphicsContext::getDefaultFboId() const
	static int _bind_getDefaultFboId(lua_State *L) {
		if (!_lg_typecheck_getDefaultFboId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::getDefaultFboId() const function, expected prototype:\nunsigned int osg::GraphicsContext::getDefaultFboId() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::getDefaultFboId() const");
		}
		unsigned int lret = self->getDefaultFboId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const function, expected prototype:\nbool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* object=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::GraphicsContext::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::libraryName() const function, expected prototype:\nconst char * osg::GraphicsContext::libraryName() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::GraphicsContext::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::className() const function, expected prototype:\nconst char * osg::GraphicsContext::className() const\nClass arguments details:\n");
		}


		osg::GraphicsContext* self=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::GraphicsContext* LunaTraits< osg::GraphicsContext >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osg::GraphicsContext::valid() const
	// bool osg::GraphicsContext::realizeImplementation()
	// bool osg::GraphicsContext::isRealizedImplementation() const
	// void osg::GraphicsContext::closeImplementation()
	// bool osg::GraphicsContext::makeCurrentImplementation()
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	// bool osg::GraphicsContext::releaseContextImplementation()
	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	// void osg::GraphicsContext::swapBuffersImplementation()

	// Abstract operators:
}

void LunaTraits< osg::GraphicsContext >::_bind_dtor(osg::GraphicsContext* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext >::className[] = "GraphicsContext";
const char LunaTraits< osg::GraphicsContext >::fullName[] = "osg::GraphicsContext";
const char LunaTraits< osg::GraphicsContext >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::GraphicsContext >::hash = 15306948;
const int LunaTraits< osg::GraphicsContext >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext >::methods[] = {
	{"setWindowingSystemInterface", &luna_wrapper_osg_GraphicsContext::_bind_setWindowingSystemInterface},
	{"getWindowingSystemInterface", &luna_wrapper_osg_GraphicsContext::_bind_getWindowingSystemInterface},
	{"createGraphicsContext", &luna_wrapper_osg_GraphicsContext::_bind_createGraphicsContext},
	{"createNewContextID", &luna_wrapper_osg_GraphicsContext::_bind_createNewContextID},
	{"getMaxContextID", &luna_wrapper_osg_GraphicsContext::_bind_getMaxContextID},
	{"incrementContextIDUsageCount", &luna_wrapper_osg_GraphicsContext::_bind_incrementContextIDUsageCount},
	{"decrementContextIDUsageCount", &luna_wrapper_osg_GraphicsContext::_bind_decrementContextIDUsageCount},
	{"getAllRegisteredGraphicsContexts", &luna_wrapper_osg_GraphicsContext::_bind_getAllRegisteredGraphicsContexts},
	{"getRegisteredGraphicsContexts", &luna_wrapper_osg_GraphicsContext::_bind_getRegisteredGraphicsContexts},
	{"setCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_setCompileContext},
	{"getOrCreateCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_getOrCreateCompileContext},
	{"getCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_getCompileContext},
	{"add", &luna_wrapper_osg_GraphicsContext::_bind_add},
	{"remove", &luna_wrapper_osg_GraphicsContext::_bind_remove},
	{"removeAllOperations", &luna_wrapper_osg_GraphicsContext::_bind_removeAllOperations},
	{"runOperations", &luna_wrapper_osg_GraphicsContext::_bind_runOperations},
	{"getOperationsQueue", &luna_wrapper_osg_GraphicsContext::_bind_getOperationsQueue},
	{"getOperationsBlock", &luna_wrapper_osg_GraphicsContext::_bind_getOperationsBlock},
	{"getCurrentOperation", &luna_wrapper_osg_GraphicsContext::_bind_getCurrentOperation},
	{"getTraits", &luna_wrapper_osg_GraphicsContext::_bind_getTraits},
	{"valid", &luna_wrapper_osg_GraphicsContext::_bind_valid},
	{"setState", &luna_wrapper_osg_GraphicsContext::_bind_setState},
	{"getState", &luna_wrapper_osg_GraphicsContext::_bind_getState},
	{"setClearColor", &luna_wrapper_osg_GraphicsContext::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osg_GraphicsContext::_bind_getClearColor},
	{"setClearMask", &luna_wrapper_osg_GraphicsContext::_bind_setClearMask},
	{"getClearMask", &luna_wrapper_osg_GraphicsContext::_bind_getClearMask},
	{"clear", &luna_wrapper_osg_GraphicsContext::_bind_clear},
	{"getTimeSinceLastClear", &luna_wrapper_osg_GraphicsContext::_bind_getTimeSinceLastClear},
	{"realize", &luna_wrapper_osg_GraphicsContext::_bind_realize},
	{"close", &luna_wrapper_osg_GraphicsContext::_bind_close},
	{"swapBuffers", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffers},
	{"isRealized", &luna_wrapper_osg_GraphicsContext::_bind_isRealized},
	{"makeCurrent", &luna_wrapper_osg_GraphicsContext::_bind_makeCurrent},
	{"makeContextCurrent", &luna_wrapper_osg_GraphicsContext::_bind_makeContextCurrent},
	{"releaseContext", &luna_wrapper_osg_GraphicsContext::_bind_releaseContext},
	{"isCurrent", &luna_wrapper_osg_GraphicsContext::_bind_isCurrent},
	{"bindPBufferToTexture", &luna_wrapper_osg_GraphicsContext::_bind_bindPBufferToTexture},
	{"realizeImplementation", &luna_wrapper_osg_GraphicsContext::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osg_GraphicsContext::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osg_GraphicsContext::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osg_GraphicsContext::_bind_makeCurrentImplementation},
	{"makeContextCurrentImplementation", &luna_wrapper_osg_GraphicsContext::_bind_makeContextCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osg_GraphicsContext::_bind_releaseContextImplementation},
	{"bindPBufferToTextureImplementation", &luna_wrapper_osg_GraphicsContext::_bind_bindPBufferToTextureImplementation},
	{"setSwapCallback", &luna_wrapper_osg_GraphicsContext::_bind_setSwapCallback},
	{"getSwapCallback", &luna_wrapper_osg_GraphicsContext::_bind_getSwapCallback},
	{"swapBuffersCallbackOrImplemenation", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffersCallbackOrImplemenation},
	{"swapBuffersImplementation", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffersImplementation},
	{"resized", &luna_wrapper_osg_GraphicsContext::_bind_resized},
	{"setResizedCallback", &luna_wrapper_osg_GraphicsContext::_bind_setResizedCallback},
	{"getResizedCallback", &luna_wrapper_osg_GraphicsContext::_bind_getResizedCallback},
	{"resizedImplementation", &luna_wrapper_osg_GraphicsContext::_bind_resizedImplementation},
	{"getCameras", &luna_wrapper_osg_GraphicsContext::_bind_getCameras},
	{"setDefaultFboId", &luna_wrapper_osg_GraphicsContext::_bind_setDefaultFboId},
	{"getDefaultFboId", &luna_wrapper_osg_GraphicsContext::_bind_getDefaultFboId},
	{"isSameKindAs", &luna_wrapper_osg_GraphicsContext::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_GraphicsContext::_bind_libraryName},
	{"className", &luna_wrapper_osg_GraphicsContext::_bind_className},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext >::enumValues[] = {
	{0,0}
};

