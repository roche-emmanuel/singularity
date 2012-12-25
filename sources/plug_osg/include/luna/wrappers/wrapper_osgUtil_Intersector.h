#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_Intersector : public osgUtil::Intersector, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Intersector() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Intersector(lua_State* L, lua_Table* dum, osgUtil::Intersector::CoordinateFrame cf = osgUtil::Intersector::MODEL) : osgUtil::Intersector(cf), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	osgUtil::Intersector * clone(osgUtil::IntersectionVisitor & iv) {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osgUtil::Intersector::clone");
		_obj.pushArg(&iv);
		return (_obj.callFunction<osgUtil::Intersector*>());
	};

	// bool osgUtil::Intersector::enter(const osg::Node & node)
	bool enter(const osg::Node & node) {
		THROW_IF(!_obj.pushFunction("enter"),"No implementation for abstract function osgUtil::Intersector::enter");
		_obj.pushArg(&node);
		return (_obj.callFunction<bool>());
	};

	// void osgUtil::Intersector::leave()
	void leave() {
		THROW_IF(!_obj.pushFunction("leave"),"No implementation for abstract function osgUtil::Intersector::leave");
		return (_obj.callFunction<void>());
	};

	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	void intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) {
		THROW_IF(!_obj.pushFunction("intersect"),"No implementation for abstract function osgUtil::Intersector::intersect");
		_obj.pushArg(&iv);
		_obj.pushArg(drawable);
		return (_obj.callFunction<void>());
	};

	// void osgUtil::Intersector::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return Intersector::reset();
	};

	// bool osgUtil::Intersector::containsIntersections()
	bool containsIntersections() {
		THROW_IF(!_obj.pushFunction("containsIntersections"),"No implementation for abstract function osgUtil::Intersector::containsIntersections");
		return (_obj.callFunction<bool>());
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_Intersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Intersector >(L,1);
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


		wrapper_osgUtil_Intersector* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_Intersector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

