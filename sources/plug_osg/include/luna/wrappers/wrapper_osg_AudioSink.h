#ifndef _WRAPPERS_WRAPPER_OSG_AUDIOSINK_H_
#define _WRAPPERS_WRAPPER_OSG_AUDIOSINK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/AudioStream>

class wrapper_osg_AudioSink : public osg::AudioSink, public luna_wrapper_base {

public:
	

	wrapper_osg_AudioSink(lua_State* L, lua_Table* dum) : osg::AudioSink(), luna_wrapper_base(L) {};

	// bool osg::Object::isSameKindAs(const osg::Object * arg1) const
	bool isSameKindAs(const osg::Object * arg1) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return AudioSink::isSameKindAs(arg1);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return AudioSink::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AudioSink::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AudioSink::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AudioSink::releaseGLObjects(arg1);
	};

	// const char * osg::AudioSink::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return AudioSink::libraryName();
	};

	// const char * osg::AudioSink::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return AudioSink::className();
	};

	// void osg::AudioSink::play()
	void play() {
		THROW_IF(!_obj.pushFunction("play"),"No implementation for abstract function osg::AudioSink::play");
		return (_obj.callFunction<void>());
	};

	// void osg::AudioSink::pause()
	void pause() {
		THROW_IF(!_obj.pushFunction("pause"),"No implementation for abstract function osg::AudioSink::pause");
		return (_obj.callFunction<void>());
	};

	// void osg::AudioSink::stop()
	void stop() {
		THROW_IF(!_obj.pushFunction("stop"),"No implementation for abstract function osg::AudioSink::stop");
		return (_obj.callFunction<void>());
	};

	// bool osg::AudioSink::playing() const
	bool playing() const {
		THROW_IF(!_obj.pushFunction("playing"),"No implementation for abstract function osg::AudioSink::playing");
		return (_obj.callFunction<bool>());
	};

	// double osg::AudioSink::getDelay() const
	double getDelay() const {
		if(_obj.pushFunction("getDelay")) {
			return (_obj.callFunction<double>());
		}

		return AudioSink::getDelay();
	};

	// void osg::AudioSink::setDelay(const double delay)
	void setDelay(const double delay) {
		if(_obj.pushFunction("setDelay")) {
			_obj.pushArg(delay);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setDelay(delay);
	};

	// void osg::AudioSink::setVolume(float arg1)
	void setVolume(float arg1) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setVolume(arg1);
	};

	// float osg::AudioSink::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			return (_obj.callFunction<float>());
		}

		return AudioSink::getVolume();
	};




};




#endif

