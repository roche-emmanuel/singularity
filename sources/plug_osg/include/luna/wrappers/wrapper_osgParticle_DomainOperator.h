#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_DOMAINOPERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgParticle/DomainOperator>

class wrapper_osgParticle_DomainOperator : public osgParticle::DomainOperator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_DomainOperator() {
		logDEBUG3("Calling delete function for wrapper osgParticle_DomainOperator");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum) : osgParticle::DomainOperator(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgParticle_DomainOperator(lua_State* L, lua_Table* dum, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgParticle::DomainOperator(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osgParticle::DomainOperator::handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePoint")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handlePoint(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleLineSegment")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleLineSegment(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleTriangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleTriangle(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleRectangle")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleRectangle(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePlane")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handlePlane(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleSphere")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleSphere(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleBox")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleBox(domain, P, dt);
	};

	// void osgParticle::DomainOperator::handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleDisk")) {
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::handleDisk(domain, P, dt);
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DomainOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DomainOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DomainOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::operateParticles(ps, dt);
	};

	// osg::Object * osgParticle::DomainOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DomainOperator::cloneType();
	};

	// osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DomainOperator::clone(arg1);
	};

	// bool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DomainOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::DomainOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DomainOperator::libraryName();
	};

	// const char * osgParticle::DomainOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DomainOperator::className();
	};

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::operate(P, dt);
	};

	// void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return DomainOperator::beginOperate(prg);
	};

	// void osgParticle::DomainOperator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			return (_obj.callFunction<void>());
		}

		return DomainOperator::endOperate();
	};


	// Protected non-virtual methods:
	// void osgParticle::DomainOperator::computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)
	void public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4) {
		return osgParticle::DomainOperator::computeNewBasis(arg1, arg2, arg3, arg4);
	};

	// void osgParticle::DomainOperator::ignore(const std::string & func)
	void public_ignore(const std::string & func) {
		return osgParticle::DomainOperator::ignore(func);
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
	inline static bool _lg_typecheck_public_computeNewBasis(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ignore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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
	// void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)
	static int _bind_public_computeNewBasis(lua_State *L) {
		if (!_lg_typecheck_public_computeNewBasis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4) function, expected prototype:\nvoid osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\narg 4 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		const osg::Vec3f* _arg2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		const osg::Vec3f & _arg2=*_arg2_ptr;
		osg::Vec3f* _arg3_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		osg::Vec3f & _arg3=*_arg3_ptr;
		osg::Vec3f* _arg4_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !_arg4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg4 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		osg::Vec3f & _arg4=*_arg4_ptr;

		wrapper_osgParticle_DomainOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_DomainOperator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f &, const osg::Vec3f &, osg::Vec3f &, osg::Vec3f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_computeNewBasis(_arg1, _arg2, _arg3, _arg4);

		return 0;
	}

	// void osgParticle::DomainOperator::public_ignore(const std::string & func)
	static int _bind_public_ignore(lua_State *L) {
		if (!_lg_typecheck_public_ignore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::public_ignore(const std::string & func) function, expected prototype:\nvoid osgParticle::DomainOperator::public_ignore(const std::string & func)\nClass arguments details:\n");
		}

		std::string func(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_osgParticle_DomainOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_DomainOperator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::public_ignore(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_ignore(func);

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

		wrapper_osgParticle_DomainOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_DomainOperator >(L,1);
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


		wrapper_osgParticle_DomainOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_DomainOperator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_computeNewBasis",_bind_public_computeNewBasis},
		{"protected_ignore",_bind_public_ignore},
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

