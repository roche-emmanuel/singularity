#include <plug_common.h>

class luna_wrapper_osg_QueryGeometry {
public:
	typedef Luna< osg::QueryGeometry > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::QueryGeometry* ptr= dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::QueryGeometry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteQueryObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::QueryGeometry::QueryGeometry(const std::string & oqnName = std::string(""))
	static osg::QueryGeometry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::QueryGeometry::QueryGeometry(const std::string & oqnName = std::string(\"\")) function, expected prototype:\nosg::QueryGeometry::QueryGeometry(const std::string & oqnName = std::string(\"\"))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string oqnName(lua_tostring(L,1),lua_objlen(L,1));

		return new osg::QueryGeometry(oqnName);
	}


	// Function binds:
	// void osg::QueryGeometry::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::QueryGeometry::reset() function, expected prototype:\nvoid osg::QueryGeometry::reset()\nClass arguments details:\n");
		}


		osg::QueryGeometry* self=dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::QueryGeometry::reset()");
		}
		self->reset();

		return 0;
	}

	// void osg::QueryGeometry::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::QueryGeometry::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::QueryGeometry::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::QueryGeometry::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::QueryGeometry* self=dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::QueryGeometry::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// unsigned int osg::QueryGeometry::getNumPixels(const osg::Camera * cam)
	static int _bind_getNumPixels(lua_State *L) {
		if (!_lg_typecheck_getNumPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::QueryGeometry::getNumPixels(const osg::Camera * cam) function, expected prototype:\nunsigned int osg::QueryGeometry::getNumPixels(const osg::Camera * cam)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Camera* cam=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));

		osg::QueryGeometry* self=dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::QueryGeometry::getNumPixels(const osg::Camera *)");
		}
		unsigned int lret = self->getNumPixels(cam);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::QueryGeometry::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::QueryGeometry::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::QueryGeometry::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::QueryGeometry* self=dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::QueryGeometry::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// static void osg::QueryGeometry::deleteQueryObject(unsigned int contextID, unsigned int handle)
	static int _bind_deleteQueryObject(lua_State *L) {
		if (!_lg_typecheck_deleteQueryObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::QueryGeometry::deleteQueryObject(unsigned int contextID, unsigned int handle) function, expected prototype:\nstatic void osg::QueryGeometry::deleteQueryObject(unsigned int contextID, unsigned int handle)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int handle=(unsigned int)lua_tointeger(L,2);

		osg::QueryGeometry::deleteQueryObject(contextID, handle);

		return 0;
	}

	// static void osg::QueryGeometry::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedQueryObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::QueryGeometry::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::QueryGeometry::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::QueryGeometry::flushDeletedQueryObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::QueryGeometry::discardDeletedQueryObjects(unsigned int contextID)
	static int _bind_discardDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedQueryObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::QueryGeometry::discardDeletedQueryObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::QueryGeometry::discardDeletedQueryObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::QueryGeometry::discardDeletedQueryObjects(contextID);

		return 0;
	}


	// Operator binds:

};

osg::QueryGeometry* LunaTraits< osg::QueryGeometry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_QueryGeometry::_bind_ctor(L);
}

void LunaTraits< osg::QueryGeometry >::_bind_dtor(osg::QueryGeometry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::QueryGeometry >::className[] = "QueryGeometry";
const char LunaTraits< osg::QueryGeometry >::fullName[] = "osg::QueryGeometry";
const char LunaTraits< osg::QueryGeometry >::moduleName[] = "osg";
const char* LunaTraits< osg::QueryGeometry >::parents[] = {"osg.Geometry", 0};
const int LunaTraits< osg::QueryGeometry >::hash = 47248904;
const int LunaTraits< osg::QueryGeometry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::QueryGeometry >::methods[] = {
	{"reset", &luna_wrapper_osg_QueryGeometry::_bind_reset},
	{"drawImplementation", &luna_wrapper_osg_QueryGeometry::_bind_drawImplementation},
	{"getNumPixels", &luna_wrapper_osg_QueryGeometry::_bind_getNumPixels},
	{"releaseGLObjects", &luna_wrapper_osg_QueryGeometry::_bind_releaseGLObjects},
	{"deleteQueryObject", &luna_wrapper_osg_QueryGeometry::_bind_deleteQueryObject},
	{"flushDeletedQueryObjects", &luna_wrapper_osg_QueryGeometry::_bind_flushDeletedQueryObjects},
	{"discardDeletedQueryObjects", &luna_wrapper_osg_QueryGeometry::_bind_discardDeletedQueryObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osg::QueryGeometry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_QueryGeometry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::QueryGeometry >::enumValues[] = {
	{0,0}
};


