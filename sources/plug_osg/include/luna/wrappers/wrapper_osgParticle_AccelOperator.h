#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_ACCELOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_ACCELOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/AccelOperator>

class wrapper_osgParticle_AccelOperator : public osgParticle::AccelOperator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_AccelOperator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_AccelOperator(lua_State* L, lua_Table* dum) : osgParticle::AccelOperator(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_AccelOperator(lua_State* L, lua_Table* dum, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::AccelOperator(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return AccelOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AccelOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AccelOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::operateParticles(ps, dt);
	};

	// void osgParticle::Operator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return AccelOperator::endOperate();
	};

	// osg::Object * osgParticle::AccelOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return AccelOperator::cloneType();
	};

	// osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AccelOperator::clone(arg1);
	};

	// bool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AccelOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::AccelOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return AccelOperator::libraryName();
	};

	// const char * osgParticle::AccelOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return AccelOperator::className();
	};

	// void osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::operate(P, dt);
	};

	// void osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return AccelOperator::beginOperate(prg);
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

		wrapper_osgParticle_AccelOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_AccelOperator >(L,1);
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


		wrapper_osgParticle_AccelOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_AccelOperator >(L,1);
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

