#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/DelaunayTriangulator>

class wrapper_osgUtil_DelaunayTriangulator : public osgUtil::DelaunayTriangulator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_DelaunayTriangulator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum) : osgUtil::DelaunayTriangulator(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, osg::Vec3Array * points, osg::Vec3Array * normals = 0) : osgUtil::DelaunayTriangulator(points, normals), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::DelaunayTriangulator(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// int osgUtil::DelaunayTriangulator::getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)
	int public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points) {
		return osgUtil::DelaunayTriangulator::getindex(pt, points);
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
	inline static bool _lg_typecheck_public_getindex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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
	// int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)
	static int _bind_public_getindex(lua_State *L) {
		if (!_lg_typecheck_public_getindex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points) function, expected prototype:\nint osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 50169651\n");
		}

		const osg::Vec3f* pt_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in osgUtil::DelaunayTriangulator::public_getindex function");
		}
		const osg::Vec3f & pt=*pt_ptr;
		const osg::Vec3Array* points=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,3));

		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgUtil::DelaunayTriangulator::public_getindex(const osg::Vec3f &, const osg::Vec3Array *)");
		}
		int lret = self->public_getindex(pt, points);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
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


		wrapper_osgUtil_DelaunayTriangulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayTriangulator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_getindex",_bind_public_getindex},
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

