#ifndef _WRAPPERS_WRAPPER_OSG_AUDIOSTREAM_H_
#define _WRAPPERS_WRAPPER_OSG_AUDIOSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/AudioStream>

class wrapper_osg_AudioStream : public osg::AudioStream {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_AudioStream(lua_State* L, lua_Table* dum) : osg::AudioStream(), _obj(L,-1) {};
	wrapper_osg_AudioStream(lua_State* L, lua_Table* dum, const osg::AudioStream & audio, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::AudioStream(audio, copyop), _obj(L,-1) {};

	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Object::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// bool osg::AudioStream::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::AudioStream::isSameKindAs(obj);
	};

	// const char * osg::AudioStream::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::AudioStream::libraryName();
	};

	// const char * osg::AudioStream::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::AudioStream::className();
	};

	// void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)
	void setAudioSink(osg::AudioSink * audio_sink) {
		THROW_IF(!_obj.pushFunction("setAudioSink"),"No implementation for abstract function osg::AudioStream::setAudioSink");
		_obj.pushArg(audio_sink);
		return (_obj.callFunction<void>());
	};

	// void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)
	void consumeAudioBuffer(void *const buffer, const size_t size) {
		THROW_IF(!_obj.pushFunction("consumeAudioBuffer"),"No implementation for abstract function osg::AudioStream::consumeAudioBuffer");
		_obj.pushArg(buffer);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// int osg::AudioStream::audioFrequency() const
	int audioFrequency() const {
		THROW_IF(!_obj.pushFunction("audioFrequency"),"No implementation for abstract function osg::AudioStream::audioFrequency");
		return (_obj.callFunction<int>());
	};

	// int osg::AudioStream::audioNbChannels() const
	int audioNbChannels() const {
		THROW_IF(!_obj.pushFunction("audioNbChannels"),"No implementation for abstract function osg::AudioStream::audioNbChannels");
		return (_obj.callFunction<int>());
	};

	// osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const
	osg::AudioStream::SampleFormat audioSampleFormat() const {
		THROW_IF(!_obj.pushFunction("audioSampleFormat"),"No implementation for abstract function osg::AudioStream::audioSampleFormat");
		return (osg::AudioStream::SampleFormat)(_obj.callFunction<int>());
	};




};




#endif

