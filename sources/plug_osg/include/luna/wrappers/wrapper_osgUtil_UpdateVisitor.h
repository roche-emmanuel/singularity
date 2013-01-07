#ifndef _WRAPPERS_WRAPPER_OSGUTIL_UPDATEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_UPDATEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/UpdateVisitor>

class wrapper_osgUtil_UpdateVisitor : public osgUtil::UpdateVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_UpdateVisitor() {
		logDEBUG3("Calling delete function for wrapper osgUtil_UpdateVisitor");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_UpdateVisitor(lua_State* L, lua_Table* dum) : osgUtil::UpdateVisitor(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return UpdateVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return UpdateVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return UpdateVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgUtil::UpdateVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return UpdateVisitor::libraryName();
	};

	// const char * osgUtil::UpdateVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return UpdateVisitor::className();
	};

	// void osgUtil::UpdateVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::reset();
	};

	// void osgUtil::UpdateVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};

	// void osgUtil::UpdateVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return UpdateVisitor::apply(node);
	};


	// Protected non-virtual methods:
	// void osgUtil::UpdateVisitor::handle_callbacks(osg::StateSet * stateset)
	void public_handle_callbacks(osg::StateSet * stateset) {
		return osgUtil::UpdateVisitor::handle_callbacks(stateset);
	};

	// void osgUtil::UpdateVisitor::handle_callbacks_and_traverse(osg::Node & node)
	void public_handle_callbacks_and_traverse(osg::Node & node) {
		return osgUtil::UpdateVisitor::handle_callbacks_and_traverse(node);
	};

	// void osgUtil::UpdateVisitor::handle_geode_callbacks(osg::Geode & geode)
	void public_handle_geode_callbacks(osg::Geode & geode) {
		return osgUtil::UpdateVisitor::handle_geode_callbacks(geode);
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
	inline static bool _lg_typecheck_public_handle_callbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_callbacks_and_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_geode_callbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// void osgUtil::UpdateVisitor::public_handle_callbacks(osg::StateSet * stateset)
	static int _bind_public_handle_callbacks(lua_State *L) {
		if (!_lg_typecheck_public_handle_callbacks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::public_handle_callbacks(osg::StateSet * stateset) function, expected prototype:\nvoid osgUtil::UpdateVisitor::public_handle_callbacks(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osgUtil_UpdateVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_UpdateVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::public_handle_callbacks(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_handle_callbacks(stateset);

		return 0;
	}

	// void osgUtil::UpdateVisitor::public_handle_callbacks_and_traverse(osg::Node & node)
	static int _bind_public_handle_callbacks_and_traverse(lua_State *L) {
		if (!_lg_typecheck_public_handle_callbacks_and_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::public_handle_callbacks_and_traverse(osg::Node & node) function, expected prototype:\nvoid osgUtil::UpdateVisitor::public_handle_callbacks_and_traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::UpdateVisitor::public_handle_callbacks_and_traverse function");
		}
		osg::Node & node=*node_ptr;

		wrapper_osgUtil_UpdateVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_UpdateVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::public_handle_callbacks_and_traverse(osg::Node &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_handle_callbacks_and_traverse(node);

		return 0;
	}

	// void osgUtil::UpdateVisitor::public_handle_geode_callbacks(osg::Geode & geode)
	static int _bind_public_handle_geode_callbacks(lua_State *L) {
		if (!_lg_typecheck_public_handle_geode_callbacks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::UpdateVisitor::public_handle_geode_callbacks(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::UpdateVisitor::public_handle_geode_callbacks(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::UpdateVisitor::public_handle_geode_callbacks function");
		}
		osg::Geode & geode=*geode_ptr;

		wrapper_osgUtil_UpdateVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_UpdateVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::UpdateVisitor::public_handle_geode_callbacks(osg::Geode &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_handle_geode_callbacks(geode);

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

		wrapper_osgUtil_UpdateVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_UpdateVisitor >(L,1);
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


		wrapper_osgUtil_UpdateVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_UpdateVisitor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_handle_callbacks",_bind_public_handle_callbacks},
		{"protected_handle_callbacks_and_traverse",_bind_public_handle_callbacks_and_traverse},
		{"protected_handle_geode_callbacks",_bind_public_handle_geode_callbacks},
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

