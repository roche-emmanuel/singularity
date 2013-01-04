#ifndef _WRAPPERS_WRAPPER_VLC_VLCIMAGESTREAM_H_
#define _WRAPPERS_WRAPPER_VLC_VLCIMAGESTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"



class wrapper_vlc_VLCImageStream : public vlc::VLCImageStream, public luna_wrapper_base {

public:
		

	~wrapper_vlc_VLCImageStream() {
		logDEBUG3("Calling delete function for wrapper vlc_VLCImageStream");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_vlc_VLCImageStream(lua_State* L, lua_Table* dum) : vlc::VLCImageStream(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void vlc::VLCImageStream::play()
	void play() {
		if(_obj.pushFunction("play")) {
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::play();
	};

	// void vlc::VLCImageStream::pause()
	void pause() {
		if(_obj.pushFunction("pause")) {
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::pause();
	};

	// void vlc::VLCImageStream::rewind()
	void rewind() {
		if(_obj.pushFunction("rewind")) {
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::rewind();
	};

	// void vlc::VLCImageStream::quit(bool waitForThreadToExit = true)
	void quit(bool waitForThreadToExit = true) {
		if(_obj.pushFunction("quit")) {
			_obj.pushArg(waitForThreadToExit);
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::quit(waitForThreadToExit);
	};

	// void vlc::VLCImageStream::setReferenceTime(double time)
	void setReferenceTime(double time) {
		if(_obj.pushFunction("setReferenceTime")) {
			_obj.pushArg(time);
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::setReferenceTime(time);
	};

	// double vlc::VLCImageStream::getReferenceTime() const
	double getReferenceTime() const {
		if(_obj.pushFunction("getReferenceTime")) {
			return (_obj.callFunction<double>());
		}

		return VLCImageStream::getReferenceTime();
	};

	// void vlc::VLCImageStream::setTimeMultiplier(double m)
	void setTimeMultiplier(double m) {
		if(_obj.pushFunction("setTimeMultiplier")) {
			_obj.pushArg(m);
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::setTimeMultiplier(m);
	};

	// double vlc::VLCImageStream::getTimeMultiplier() const
	double getTimeMultiplier() const {
		if(_obj.pushFunction("getTimeMultiplier")) {
			return (_obj.callFunction<double>());
		}

		return VLCImageStream::getTimeMultiplier();
	};

	// void vlc::VLCImageStream::setVolume(float vol)
	void setVolume(float vol) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg(vol);
			return (_obj.callFunction<void>());
		}

		return VLCImageStream::setVolume(vol);
	};

	// float vlc::VLCImageStream::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			return (_obj.callFunction<float>());
		}

		return VLCImageStream::getVolume();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

