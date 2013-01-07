#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/TangentSpaceGenerator>

class wrapper_osgUtil_TangentSpaceGenerator : public osgUtil::TangentSpaceGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_TangentSpaceGenerator() {
		logDEBUG3("Calling delete function for wrapper osgUtil_TangentSpaceGenerator");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum) : osgUtil::TangentSpaceGenerator(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum, const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::TangentSpaceGenerator(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TangentSpaceGenerator::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// void osgUtil::TangentSpaceGenerator::compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC)
	void public_compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC) {
		return osgUtil::TangentSpaceGenerator::compute(pset, vx, nx, tx, iA, iB, iC);
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
	inline static bool _lg_typecheck_public_compute(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
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
	// void osgUtil::TangentSpaceGenerator::public_compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC)
	static int _bind_public_compute(lua_State *L) {
		if (!_lg_typecheck_public_compute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::TangentSpaceGenerator::public_compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC) function, expected prototype:\nvoid osgUtil::TangentSpaceGenerator::public_compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\narg 4 ID = 50169651\n");
		}

		osg::PrimitiveSet* pset=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));
		const osg::Array* vx=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		const osg::Array* nx=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,4));
		const osg::Array* tx=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,5));
		int iA=(int)lua_tointeger(L,6);
		int iB=(int)lua_tointeger(L,7);
		int iC=(int)lua_tointeger(L,8);

		wrapper_osgUtil_TangentSpaceGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_TangentSpaceGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::TangentSpaceGenerator::public_compute(osg::PrimitiveSet *, const osg::Array *, const osg::Array *, const osg::Array *, int, int, int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_compute(pset, vx, nx, tx, iA, iB, iC);

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

		wrapper_osgUtil_TangentSpaceGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_TangentSpaceGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		wrapper_osgUtil_TangentSpaceGenerator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_TangentSpaceGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_compute",_bind_public_compute},
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

