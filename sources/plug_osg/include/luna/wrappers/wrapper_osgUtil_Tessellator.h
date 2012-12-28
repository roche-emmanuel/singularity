#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Tessellator>

class wrapper_osgUtil_Tessellator : public osgUtil::Tessellator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Tessellator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Tessellator(lua_State* L, lua_Table* dum) : osgUtil::Tessellator(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// void osgUtil::Tessellator::reduceArray(osg::Array * cold, const unsigned int nnu)
	void public_reduceArray(osg::Array * cold, const unsigned int nnu) {
		return osgUtil::Tessellator::reduceArray(cold, nnu);
	};

	// void osgUtil::Tessellator::collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex)
	void public_collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex) {
		return osgUtil::Tessellator::collectTessellation(cxgeom, originalIndex);
	};

	// void osgUtil::Tessellator::addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices)
	void public_addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices) {
		return osgUtil::Tessellator::addContour(mode, first, last, vertices);
	};

	// void osgUtil::Tessellator::addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices)
	void public_addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices) {
		return osgUtil::Tessellator::addContour(primitive, vertices);
	};

	// void osgUtil::Tessellator::begin(unsigned int mode)
	void public_begin(unsigned int mode) {
		return osgUtil::Tessellator::begin(mode);
	};

	// void osgUtil::Tessellator::vertex(osg::Vec3f * vertex)
	void public_vertex(osg::Vec3f * vertex) {
		return osgUtil::Tessellator::vertex(vertex);
	};

	// void osgUtil::Tessellator::end()
	void public_end() {
		return osgUtil::Tessellator::end();
	};

	// void osgUtil::Tessellator::error(unsigned int errorCode)
	void public_error(unsigned int errorCode) {
		return osgUtil::Tessellator::error(errorCode);
	};

	// static void osgUtil::Tessellator::beginCallback(unsigned int which, void * userData)
	static void public_beginCallback(unsigned int which, void * userData) {
		return osgUtil::Tessellator::beginCallback(which, userData);
	};

	// static void osgUtil::Tessellator::vertexCallback(void * data, void * userData)
	static void public_vertexCallback(void * data, void * userData) {
		return osgUtil::Tessellator::vertexCallback(data, userData);
	};

	// static void osgUtil::Tessellator::endCallback(void * userData)
	static void public_endCallback(void * userData) {
		return osgUtil::Tessellator::endCallback(userData);
	};

	// static void osgUtil::Tessellator::errorCallback(unsigned int errorCode, void * userData)
	static void public_errorCallback(unsigned int errorCode, void * userData) {
		return osgUtil::Tessellator::errorCallback(errorCode, userData);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_reduceArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_collectTessellation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addContour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addContour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_vertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92303204)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_error(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_beginCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_vertexCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_endCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_errorCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgUtil::Tessellator::public_reduceArray(osg::Array * cold, const unsigned int nnu)
	static int _bind_public_reduceArray(lua_State *L) {
		if (!_lg_typecheck_public_reduceArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_reduceArray(osg::Array * cold, const unsigned int nnu) function, expected prototype:\nvoid osgUtil::Tessellator::public_reduceArray(osg::Array * cold, const unsigned int nnu)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* cold=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		unsigned int nnu=(unsigned int)lua_tointeger(L,3);

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_reduceArray(osg::Array *, const unsigned int)");
		}
		self->public_reduceArray(cold, nnu);

		return 0;
	}

	// void osgUtil::Tessellator::public_collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex)
	static int _bind_public_collectTessellation(lua_State *L) {
		if (!_lg_typecheck_public_collectTessellation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex) function, expected prototype:\nvoid osgUtil::Tessellator::public_collectTessellation(osg::Geometry & cxgeom, unsigned int originalIndex)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* cxgeom_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !cxgeom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cxgeom in osgUtil::Tessellator::public_collectTessellation function");
		}
		osg::Geometry & cxgeom=*cxgeom_ptr;
		unsigned int originalIndex=(unsigned int)lua_tointeger(L,3);

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_collectTessellation(osg::Geometry &, unsigned int)");
		}
		self->public_collectTessellation(cxgeom, originalIndex);

		return 0;
	}

	// void osgUtil::Tessellator::public_addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices)
	static int _bind_public_addContour_overload_1(lua_State *L) {
		if (!_lg_typecheck_public_addContour_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices) function, expected prototype:\nvoid osgUtil::Tessellator::public_addContour(unsigned int mode, unsigned int first, unsigned int last, osg::Vec3Array * vertices)\nClass arguments details:\narg 4 ID = 50169651\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int first=(unsigned int)lua_tointeger(L,3);
		unsigned int last=(unsigned int)lua_tointeger(L,4);
		osg::Vec3Array* vertices=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,5));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_addContour(unsigned int, unsigned int, unsigned int, osg::Vec3Array *)");
		}
		self->public_addContour(mode, first, last, vertices);

		return 0;
	}

	// void osgUtil::Tessellator::public_addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices)
	static int _bind_public_addContour_overload_2(lua_State *L) {
		if (!_lg_typecheck_public_addContour_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices) function, expected prototype:\nvoid osgUtil::Tessellator::public_addContour(osg::PrimitiveSet * primitive, osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::PrimitiveSet* primitive=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));
		osg::Vec3Array* vertices=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,3));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_addContour(osg::PrimitiveSet *, osg::Vec3Array *)");
		}
		self->public_addContour(primitive, vertices);

		return 0;
	}

	// Overload binder for osgUtil::Tessellator::public_addContour
	static int _bind_public_addContour(lua_State *L) {
		if (_lg_typecheck_public_addContour_overload_1(L)) return _bind_public_addContour_overload_1(L);
		if (_lg_typecheck_public_addContour_overload_2(L)) return _bind_public_addContour_overload_2(L);

		luaL_error(L, "error in function public_addContour, cannot match any of the overloads for function public_addContour:\n  public_addContour(unsigned int, unsigned int, unsigned int, osg::Vec3Array *)\n  public_addContour(osg::PrimitiveSet *, osg::Vec3Array *)\n");
		return 0;
	}

	// void osgUtil::Tessellator::public_begin(unsigned int mode)
	static int _bind_public_begin(lua_State *L) {
		if (!_lg_typecheck_public_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_begin(unsigned int mode) function, expected prototype:\nvoid osgUtil::Tessellator::public_begin(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_begin(unsigned int)");
		}
		self->public_begin(mode);

		return 0;
	}

	// void osgUtil::Tessellator::public_vertex(osg::Vec3f * vertex)
	static int _bind_public_vertex(lua_State *L) {
		if (!_lg_typecheck_public_vertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_vertex(osg::Vec3f * vertex) function, expected prototype:\nvoid osgUtil::Tessellator::public_vertex(osg::Vec3f * vertex)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* vertex=(Luna< osg::Vec3f >::check(L,2));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_vertex(osg::Vec3f *)");
		}
		self->public_vertex(vertex);

		return 0;
	}

	// void osgUtil::Tessellator::public_end()
	static int _bind_public_end(lua_State *L) {
		if (!_lg_typecheck_public_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_end() function, expected prototype:\nvoid osgUtil::Tessellator::public_end()\nClass arguments details:\n");
		}


		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_end()");
		}
		self->public_end();

		return 0;
	}

	// void osgUtil::Tessellator::public_error(unsigned int errorCode)
	static int _bind_public_error(lua_State *L) {
		if (!_lg_typecheck_public_error(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Tessellator::public_error(unsigned int errorCode) function, expected prototype:\nvoid osgUtil::Tessellator::public_error(unsigned int errorCode)\nClass arguments details:\n");
		}

		unsigned int errorCode=(unsigned int)lua_tointeger(L,2);

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Tessellator::public_error(unsigned int)");
		}
		self->public_error(errorCode);

		return 0;
	}

	// static void osgUtil::Tessellator::public_beginCallback(unsigned int which, void * userData)
	static int _bind_public_beginCallback(lua_State *L) {
		if (!_lg_typecheck_public_beginCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::Tessellator::public_beginCallback(unsigned int which, void * userData) function, expected prototype:\nstatic void osgUtil::Tessellator::public_beginCallback(unsigned int which, void * userData)\nClass arguments details:\n");
		}

		unsigned int which=(unsigned int)lua_tointeger(L,1);
		void* userData=(Luna< void >::check(L,2));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osgUtil::Tessellator::public_beginCallback(unsigned int, void *)");
		}
		self->public_beginCallback(which, userData);

		return 0;
	}

	// static void osgUtil::Tessellator::public_vertexCallback(void * data, void * userData)
	static int _bind_public_vertexCallback(lua_State *L) {
		if (!_lg_typecheck_public_vertexCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::Tessellator::public_vertexCallback(void * data, void * userData) function, expected prototype:\nstatic void osgUtil::Tessellator::public_vertexCallback(void * data, void * userData)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,1));
		void* userData=(Luna< void >::check(L,2));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osgUtil::Tessellator::public_vertexCallback(void *, void *)");
		}
		self->public_vertexCallback(data, userData);

		return 0;
	}

	// static void osgUtil::Tessellator::public_endCallback(void * userData)
	static int _bind_public_endCallback(lua_State *L) {
		if (!_lg_typecheck_public_endCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::Tessellator::public_endCallback(void * userData) function, expected prototype:\nstatic void osgUtil::Tessellator::public_endCallback(void * userData)\nClass arguments details:\n");
		}

		void* userData=(Luna< void >::check(L,1));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osgUtil::Tessellator::public_endCallback(void *)");
		}
		self->public_endCallback(userData);

		return 0;
	}

	// static void osgUtil::Tessellator::public_errorCallback(unsigned int errorCode, void * userData)
	static int _bind_public_errorCallback(lua_State *L) {
		if (!_lg_typecheck_public_errorCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::Tessellator::public_errorCallback(unsigned int errorCode, void * userData) function, expected prototype:\nstatic void osgUtil::Tessellator::public_errorCallback(unsigned int errorCode, void * userData)\nClass arguments details:\n");
		}

		unsigned int errorCode=(unsigned int)lua_tointeger(L,1);
		void* userData=(Luna< void >::check(L,2));

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void osgUtil::Tessellator::public_errorCallback(unsigned int, void *)");
		}
		self->public_errorCallback(errorCode, userData);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgUtil_Tessellator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Tessellator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_reduceArray",_bind_public_reduceArray},
		{"protected_collectTessellation",_bind_public_collectTessellation},
		{"protected_addContour",_bind_public_addContour},
		{"protected_addContour",_bind_public_addContour},
		{"protected_begin",_bind_public_begin},
		{"protected_vertex",_bind_public_vertex},
		{"protected_end",_bind_public_end},
		{"protected_error",_bind_public_error},
		{"protected_beginCallback",_bind_public_beginCallback},
		{"protected_vertexCallback",_bind_public_vertexCallback},
		{"protected_endCallback",_bind_public_endCallback},
		{"protected_errorCallback",_bind_public_errorCallback},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

