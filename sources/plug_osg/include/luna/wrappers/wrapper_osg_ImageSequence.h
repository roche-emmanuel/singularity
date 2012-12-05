#ifndef _WRAPPERS_WRAPPER_OSG_IMAGESEQUENCE_H_
#define _WRAPPERS_WRAPPER_OSG_IMAGESEQUENCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ImageSequence>

class wrapper_osg_ImageSequence : public osg::ImageSequence {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ImageSequence(lua_State* L, lua_Table* dum) : osg::ImageSequence(), _obj(L,-1) {};
	wrapper_osg_ImageSequence(lua_State* L, lua_Table* dum, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ImageSequence(ImageSequence, copyop), _obj(L,-1) {};

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

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return osg::BufferData::releaseGLObjects(state);
	};

	// const void * osg::Image::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return osg::Image::getDataPointer();
	};

	// unsigned int osg::Image::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return osg::Image::getTotalDataSize();
	};

	// void osg::Image::allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	void allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) {
		if(_obj.pushFunction("allocateImage")) {
			_obj.pushArg(s);
			_obj.pushArg(t);
			_obj.pushArg(r);
			_obj.pushArg(pixelFormat);
			_obj.pushArg(type);
			_obj.pushArg(packing);
			return (_obj.callFunction<void>());
		}

		return osg::Image::allocateImage(s, t, r, pixelFormat, type, packing);
	};

	// void osg::Image::readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type)
	void readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type) {
		if(_obj.pushFunction("readPixels")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(pixelFormat);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return osg::Image::readPixels(x, y, width, height, pixelFormat, type);
	};

	// void osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	void readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) {
		if(_obj.pushFunction("readImageFromCurrentTexture")) {
			_obj.pushArg(contextID);
			_obj.pushArg(copyMipMapsIfAvailable);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return osg::Image::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);
	};

	// void osg::Image::scaleImage(int s, int t, int r, unsigned int newDataType)
	void scaleImage(int s, int t, int r, unsigned int newDataType) {
		if(_obj.pushFunction("scaleImage")) {
			_obj.pushArg(s);
			_obj.pushArg(t);
			_obj.pushArg(r);
			_obj.pushArg(newDataType);
			return (_obj.callFunction<void>());
		}

		return osg::Image::scaleImage(s, t, r, newDataType);
	};

	// void osg::Image::copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	void copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) {
		if(_obj.pushFunction("copySubImage")) {
			_obj.pushArg(s_offset);
			_obj.pushArg(t_offset);
			_obj.pushArg(r_offset);
			_obj.pushArg(source);
			return (_obj.callFunction<void>());
		}

		return osg::Image::copySubImage(s_offset, t_offset, r_offset, source);
	};

	// bool osg::Image::isImageTranslucent() const
	bool isImageTranslucent() const {
		if(_obj.pushFunction("isImageTranslucent")) {
			return (_obj.callFunction<bool>());
		}

		return osg::Image::isImageTranslucent();
	};

	// bool osg::Image::sendFocusHint(bool arg1)
	bool sendFocusHint(bool arg1) {
		if(_obj.pushFunction("sendFocusHint")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return osg::Image::sendFocusHint(arg1);
	};

	// bool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3)
	bool sendPointerEvent(int arg1, int arg2, int arg3) {
		if(_obj.pushFunction("sendPointerEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<bool>());
		}

		return osg::Image::sendPointerEvent(arg1, arg2, arg3);
	};

	// bool osg::Image::sendKeyEvent(int arg1, bool arg2)
	bool sendKeyEvent(int arg1, bool arg2) {
		if(_obj.pushFunction("sendKeyEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return osg::Image::sendKeyEvent(arg1, arg2);
	};

	// void osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1)
	void setFrameLastRendered(const osg::FrameStamp * arg1) {
		if(_obj.pushFunction("setFrameLastRendered")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Image::setFrameLastRendered(arg1);
	};

	// void osg::ImageStream::quit(bool arg1 = true)
	void quit(bool arg1 = true) {
		if(_obj.pushFunction("quit")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ImageStream::quit(arg1);
	};

	// double osg::ImageStream::getCreationTime() const
	double getCreationTime() const {
		if(_obj.pushFunction("getCreationTime")) {
			return (_obj.callFunction<double>());
		}

		return osg::ImageStream::getCreationTime();
	};

	// double osg::ImageStream::getFrameRate() const
	double getFrameRate() const {
		if(_obj.pushFunction("getFrameRate")) {
			return (_obj.callFunction<double>());
		}

		return osg::ImageStream::getFrameRate();
	};

	// void osg::ImageStream::setVolume(float arg1)
	void setVolume(float arg1) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ImageStream::setVolume(arg1);
	};

	// float osg::ImageStream::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			return (_obj.callFunction<float>());
		}

		return osg::ImageStream::getVolume();
	};

	// osg::Object * osg::ImageSequence::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::ImageSequence::cloneType();
	};

	// osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::ImageSequence::clone(arg1);
	};

	// bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::ImageSequence::isSameKindAs(obj);
	};

	// const char * osg::ImageSequence::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::ImageSequence::libraryName();
	};

	// const char * osg::ImageSequence::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::ImageSequence::className();
	};

	// int osg::ImageSequence::compare(const osg::Image & rhs) const
	int compare(const osg::Image & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return osg::ImageSequence::compare(rhs);
	};

	// void osg::ImageSequence::setReferenceTime(double t)
	void setReferenceTime(double t) {
		if(_obj.pushFunction("setReferenceTime")) {
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::setReferenceTime(t);
	};

	// double osg::ImageSequence::getReferenceTime() const
	double getReferenceTime() const {
		if(_obj.pushFunction("getReferenceTime")) {
			return (_obj.callFunction<double>());
		}

		return osg::ImageSequence::getReferenceTime();
	};

	// void osg::ImageSequence::setTimeMultiplier(double tm)
	void setTimeMultiplier(double tm) {
		if(_obj.pushFunction("setTimeMultiplier")) {
			_obj.pushArg(tm);
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::setTimeMultiplier(tm);
	};

	// double osg::ImageSequence::getTimeMultiplier() const
	double getTimeMultiplier() const {
		if(_obj.pushFunction("getTimeMultiplier")) {
			return (_obj.callFunction<double>());
		}

		return osg::ImageSequence::getTimeMultiplier();
	};

	// void osg::ImageSequence::seek(double time)
	void seek(double time) {
		if(_obj.pushFunction("seek")) {
			_obj.pushArg(time);
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::seek(time);
	};

	// void osg::ImageSequence::play()
	void play() {
		if(_obj.pushFunction("play")) {
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::play();
	};

	// void osg::ImageSequence::pause()
	void pause() {
		if(_obj.pushFunction("pause")) {
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::pause();
	};

	// void osg::ImageSequence::rewind()
	void rewind() {
		if(_obj.pushFunction("rewind")) {
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::rewind();
	};

	// double osg::ImageSequence::getLength() const
	double getLength() const {
		if(_obj.pushFunction("getLength")) {
			return (_obj.callFunction<double>());
		}

		return osg::ImageSequence::getLength();
	};

	// void osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	void setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg(s);
			_obj.pushArg(t);
			_obj.pushArg(r);
			_obj.pushArg(internalTextureformat);
			_obj.pushArg(pixelFormat);
			_obj.pushArg(type);
			_obj.pushArg((void*)data);
			_obj.pushArg(mode);
			_obj.pushArg(packing);
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::setImage(s, t, r, internalTextureformat, pixelFormat, type, data, mode, packing);
	};

	// bool osg::ImageSequence::requiresUpdateCall() const
	bool requiresUpdateCall() const {
		if(_obj.pushFunction("requiresUpdateCall")) {
			return (_obj.callFunction<bool>());
		}

		return osg::ImageSequence::requiresUpdateCall();
	};

	// void osg::ImageSequence::update(osg::NodeVisitor * nv)
	void update(osg::NodeVisitor * nv) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return osg::ImageSequence::update(nv);
	};


protected:
	// void osg::ImageSequence::applyLoopingMode()

};




#endif

