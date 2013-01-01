#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_SEGMENTPLACER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_SEGMENTPLACER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/SegmentPlacer>

class wrapper_osgParticle_SegmentPlacer : public osgParticle::SegmentPlacer, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_SegmentPlacer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_SegmentPlacer(lua_State* L, lua_Table* dum) : osgParticle::SegmentPlacer(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_SegmentPlacer(lua_State* L, lua_Table* dum, const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::SegmentPlacer(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return SegmentPlacer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return SegmentPlacer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return SegmentPlacer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SegmentPlacer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SegmentPlacer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SegmentPlacer::releaseGLObjects(arg1);
	};

	// osg::Object * osgParticle::SegmentPlacer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return SegmentPlacer::cloneType();
	};

	// osg::Object * osgParticle::SegmentPlacer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return SegmentPlacer::clone(arg1);
	};

	// bool osgParticle::SegmentPlacer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SegmentPlacer::isSameKindAs(obj);
	};

	// const char * osgParticle::SegmentPlacer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return SegmentPlacer::libraryName();
	};

	// const char * osgParticle::SegmentPlacer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return SegmentPlacer::className();
	};

	// void osgParticle::SegmentPlacer::place(osgParticle::Particle * P) const
	void place(osgParticle::Particle * P) const {
		if(_obj.pushFunction("place")) {
			_obj.pushArg(P);
			return (_obj.callFunction<void>());
		}

		return SegmentPlacer::place(P);
	};

	// float osgParticle::SegmentPlacer::volume() const
	float volume() const {
		if(_obj.pushFunction("volume")) {
			return (_obj.callFunction<float>());
		}

		return SegmentPlacer::volume();
	};

	// osg::Vec3f osgParticle::SegmentPlacer::getControlPosition() const
	osg::Vec3f getControlPosition() const {
		if(_obj.pushFunction("getControlPosition")) {
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SegmentPlacer::getControlPosition();
	};


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

		wrapper_osgParticle_SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SegmentPlacer >(L,1);
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


		wrapper_osgParticle_SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SegmentPlacer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

