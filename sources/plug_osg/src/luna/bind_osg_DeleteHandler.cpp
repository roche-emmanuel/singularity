#include <plug_common.h>

class luna_wrapper_osg_DeleteHandler {
public:
	typedef Luna< osg::DeleteHandler > luna_t;

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

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DeleteHandler");
		
		return luna_dynamicCast(L,converters,"osg::DeleteHandler",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setNumFramesToRetainObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFramesToRetainObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_doDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0)
	static osg::DeleteHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0) function, expected prototype:\nosg::DeleteHandler::DeleteHandler(int numberOfFramesToRetainObjects = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int numberOfFramesToRetainObjects=luatop>0 ? (int)lua_tointeger(L,1) : 0;

		return new osg::DeleteHandler(numberOfFramesToRetainObjects);
	}


	// Function binds:
	// void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects)
	static int _bind_setNumFramesToRetainObjects(lua_State *L) {
		if (!_lg_typecheck_setNumFramesToRetainObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects) function, expected prototype:\nvoid osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int numberOfFramesToRetainObjects)\nClass arguments details:\n");
		}

		unsigned int numberOfFramesToRetainObjects=(unsigned int)lua_tointeger(L,2);

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::setNumFramesToRetainObjects(unsigned int)");
		}
		self->setNumFramesToRetainObjects(numberOfFramesToRetainObjects);

		return 0;
	}

	// unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const
	static int _bind_getNumFramesToRetainObjects(lua_State *L) {
		if (!_lg_typecheck_getNumFramesToRetainObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const function, expected prototype:\nunsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const\nClass arguments details:\n");
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DeleteHandler::getNumFramesToRetainObjects() const");
		}
		unsigned int lret = self->getNumFramesToRetainObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DeleteHandler::setFrameNumber(unsigned int frameNumber)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::setFrameNumber(unsigned int frameNumber) function, expected prototype:\nvoid osg::DeleteHandler::setFrameNumber(unsigned int frameNumber)\nClass arguments details:\n");
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::setFrameNumber(unsigned int)");
		}
		self->setFrameNumber(frameNumber);

		return 0;
	}

	// unsigned int osg::DeleteHandler::getFrameNumber() const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DeleteHandler::getFrameNumber() const function, expected prototype:\nunsigned int osg::DeleteHandler::getFrameNumber() const\nClass arguments details:\n");
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DeleteHandler::getFrameNumber() const");
		}
		unsigned int lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DeleteHandler::doDelete(const osg::Referenced * object)
	static int _bind_doDelete(lua_State *L) {
		if (!_lg_typecheck_doDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::doDelete(const osg::Referenced * object) function, expected prototype:\nvoid osg::DeleteHandler::doDelete(const osg::Referenced * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Referenced* object=(Luna< osg::Referenced >::check(L,2));

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::doDelete(const osg::Referenced *)");
		}
		self->doDelete(object);

		return 0;
	}

	// void osg::DeleteHandler::flush()
	static int _bind_flush(lua_State *L) {
		if (!_lg_typecheck_flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::flush() function, expected prototype:\nvoid osg::DeleteHandler::flush()\nClass arguments details:\n");
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::flush()");
		}
		self->flush();

		return 0;
	}

	// void osg::DeleteHandler::flushAll()
	static int _bind_flushAll(lua_State *L) {
		if (!_lg_typecheck_flushAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::flushAll() function, expected prototype:\nvoid osg::DeleteHandler::flushAll()\nClass arguments details:\n");
		}


		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::flushAll()");
		}
		self->flushAll();

		return 0;
	}

	// void osg::DeleteHandler::requestDelete(const osg::Referenced * object)
	static int _bind_requestDelete(lua_State *L) {
		if (!_lg_typecheck_requestDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DeleteHandler::requestDelete(const osg::Referenced * object) function, expected prototype:\nvoid osg::DeleteHandler::requestDelete(const osg::Referenced * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Referenced* object=(Luna< osg::Referenced >::check(L,2));

		osg::DeleteHandler* self=(Luna< osg::DeleteHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DeleteHandler::requestDelete(const osg::Referenced *)");
		}
		self->requestDelete(object);

		return 0;
	}


	// Operator binds:

};

osg::DeleteHandler* LunaTraits< osg::DeleteHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DeleteHandler::_bind_ctor(L);
}

void LunaTraits< osg::DeleteHandler >::_bind_dtor(osg::DeleteHandler* obj) {
	delete obj;
}

const char LunaTraits< osg::DeleteHandler >::className[] = "DeleteHandler";
const char LunaTraits< osg::DeleteHandler >::fullName[] = "osg::DeleteHandler";
const char LunaTraits< osg::DeleteHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::DeleteHandler >::parents[] = {0};
const int LunaTraits< osg::DeleteHandler >::hash = 1576447;
const int LunaTraits< osg::DeleteHandler >::uniqueIDs[] = {1576447,0};

luna_RegType LunaTraits< osg::DeleteHandler >::methods[] = {
	{"setNumFramesToRetainObjects", &luna_wrapper_osg_DeleteHandler::_bind_setNumFramesToRetainObjects},
	{"getNumFramesToRetainObjects", &luna_wrapper_osg_DeleteHandler::_bind_getNumFramesToRetainObjects},
	{"setFrameNumber", &luna_wrapper_osg_DeleteHandler::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_DeleteHandler::_bind_getFrameNumber},
	{"doDelete", &luna_wrapper_osg_DeleteHandler::_bind_doDelete},
	{"flush", &luna_wrapper_osg_DeleteHandler::_bind_flush},
	{"flushAll", &luna_wrapper_osg_DeleteHandler::_bind_flushAll},
	{"requestDelete", &luna_wrapper_osg_DeleteHandler::_bind_requestDelete},
	{"dynCast", &luna_wrapper_osg_DeleteHandler::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DeleteHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DeleteHandler >::enumValues[] = {
	{0,0}
};

