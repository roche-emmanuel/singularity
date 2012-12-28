#ifndef _WRAPPERS_WRAPPER_OSG_IMAGESTREAM_H_
#define _WRAPPERS_WRAPPER_OSG_IMAGESTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ImageStream>

class wrapper_osg_ImageStream : public osg::ImageStream, public luna_wrapper_base {

public:
		

	~wrapper_osg_ImageStream() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ImageStream(lua_State* L, lua_Table* dum) : osg::ImageStream(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_ImageStream(lua_State* L, lua_Table* dum, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ImageStream(image, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osg::ImageStream::applyLoopingMode()
	void applyLoopingMode() {
		if(_obj.pushFunction("applyLoopingMode")) {
			return (_obj.callFunction<void>());
		}

		return ImageStream::applyLoopingMode();
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ImageStream::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageStream::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageStream::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return ImageStream::releaseGLObjects(state);
	};

	// const void * osg::Image::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return ImageStream::getDataPointer();
	};

	// unsigned int osg::Image::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return ImageStream::getTotalDataSize();
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

		return ImageStream::allocateImage(s, t, r, pixelFormat, type, packing);
	};

	// void osg::Image::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
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

		return ImageStream::setImage(s, t, r, internalTextureformat, pixelFormat, type, data, mode, packing);
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

		return ImageStream::readPixels(x, y, width, height, pixelFormat, type);
	};

	// void osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	void readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) {
		if(_obj.pushFunction("readImageFromCurrentTexture")) {
			_obj.pushArg(contextID);
			_obj.pushArg(copyMipMapsIfAvailable);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return ImageStream::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);
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

		return ImageStream::scaleImage(s, t, r, newDataType);
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

		return ImageStream::copySubImage(s_offset, t_offset, r_offset, source);
	};

	// bool osg::Image::isImageTranslucent() const
	bool isImageTranslucent() const {
		if(_obj.pushFunction("isImageTranslucent")) {
			return (_obj.callFunction<bool>());
		}

		return ImageStream::isImageTranslucent();
	};

	// bool osg::Image::requiresUpdateCall() const
	bool requiresUpdateCall() const {
		if(_obj.pushFunction("requiresUpdateCall")) {
			return (_obj.callFunction<bool>());
		}

		return ImageStream::requiresUpdateCall();
	};

	// void osg::Image::update(osg::NodeVisitor * arg1)
	void update(osg::NodeVisitor * arg1) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::update(arg1);
	};

	// bool osg::Image::sendFocusHint(bool arg1)
	bool sendFocusHint(bool arg1) {
		if(_obj.pushFunction("sendFocusHint")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return ImageStream::sendFocusHint(arg1);
	};

	// bool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3)
	bool sendPointerEvent(int arg1, int arg2, int arg3) {
		if(_obj.pushFunction("sendPointerEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<bool>());
		}

		return ImageStream::sendPointerEvent(arg1, arg2, arg3);
	};

	// bool osg::Image::sendKeyEvent(int arg1, bool arg2)
	bool sendKeyEvent(int arg1, bool arg2) {
		if(_obj.pushFunction("sendKeyEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return ImageStream::sendKeyEvent(arg1, arg2);
	};

	// void osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1)
	void setFrameLastRendered(const osg::FrameStamp * arg1) {
		if(_obj.pushFunction("setFrameLastRendered")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setFrameLastRendered(arg1);
	};

	// osg::Object * osg::ImageStream::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageStream::cloneType();
	};

	// osg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageStream::clone(arg1);
	};

	// bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ImageStream::isSameKindAs(obj);
	};

	// const char * osg::ImageStream::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageStream::libraryName();
	};

	// const char * osg::ImageStream::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageStream::className();
	};

	// int osg::ImageStream::compare(const osg::Image & rhs) const
	int compare(const osg::Image & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return ImageStream::compare(rhs);
	};

	// void osg::ImageStream::seek(double arg1)
	void seek(double arg1) {
		if(_obj.pushFunction("seek")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::seek(arg1);
	};

	// void osg::ImageStream::play()
	void play() {
		if(_obj.pushFunction("play")) {
			return (_obj.callFunction<void>());
		}

		return ImageStream::play();
	};

	// void osg::ImageStream::pause()
	void pause() {
		if(_obj.pushFunction("pause")) {
			return (_obj.callFunction<void>());
		}

		return ImageStream::pause();
	};

	// void osg::ImageStream::rewind()
	void rewind() {
		if(_obj.pushFunction("rewind")) {
			return (_obj.callFunction<void>());
		}

		return ImageStream::rewind();
	};

	// void osg::ImageStream::quit(bool arg1 = true)
	void quit(bool arg1 = true) {
		if(_obj.pushFunction("quit")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::quit(arg1);
	};

	// double osg::ImageStream::getCreationTime() const
	double getCreationTime() const {
		if(_obj.pushFunction("getCreationTime")) {
			return (_obj.callFunction<double>());
		}

		return ImageStream::getCreationTime();
	};

	// double osg::ImageStream::getLength() const
	double getLength() const {
		if(_obj.pushFunction("getLength")) {
			return (_obj.callFunction<double>());
		}

		return ImageStream::getLength();
	};

	// double osg::ImageStream::getFrameRate() const
	double getFrameRate() const {
		if(_obj.pushFunction("getFrameRate")) {
			return (_obj.callFunction<double>());
		}

		return ImageStream::getFrameRate();
	};

	// void osg::ImageStream::setReferenceTime(double arg1)
	void setReferenceTime(double arg1) {
		if(_obj.pushFunction("setReferenceTime")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setReferenceTime(arg1);
	};

	// double osg::ImageStream::getReferenceTime() const
	double getReferenceTime() const {
		if(_obj.pushFunction("getReferenceTime")) {
			return (_obj.callFunction<double>());
		}

		return ImageStream::getReferenceTime();
	};

	// void osg::ImageStream::setTimeMultiplier(double arg1)
	void setTimeMultiplier(double arg1) {
		if(_obj.pushFunction("setTimeMultiplier")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setTimeMultiplier(arg1);
	};

	// double osg::ImageStream::getTimeMultiplier() const
	double getTimeMultiplier() const {
		if(_obj.pushFunction("getTimeMultiplier")) {
			return (_obj.callFunction<double>());
		}

		return ImageStream::getTimeMultiplier();
	};

	// void osg::ImageStream::setVolume(float arg1)
	void setVolume(float arg1) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageStream::setVolume(arg1);
	};

	// float osg::ImageStream::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			return (_obj.callFunction<float>());
		}

		return ImageStream::getVolume();
	};


	// Protected non-virtual methods:
	// void osg::Image::deallocateData()
	void public_deallocateData() {
		return osg::Image::deallocateData();
	};

	// void osg::Image::setData(unsigned char * data, osg::Image::AllocationMode allocationMode)
	void public_setData(unsigned char * data, osg::Image::AllocationMode allocationMode) {
		return osg::Image::setData(data, allocationMode);
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
	inline static bool _lg_typecheck_public_deallocateData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// void osg::Image::public_deallocateData()
	static int _bind_public_deallocateData(lua_State *L) {
		if (!_lg_typecheck_public_deallocateData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::public_deallocateData() function, expected prototype:\nvoid osg::Image::public_deallocateData()\nClass arguments details:\n");
		}


		wrapper_osg_ImageStream* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::public_deallocateData()");
		}
		self->public_deallocateData();

		return 0;
	}

	// void osg::Image::public_setData(unsigned char * data, osg::Image::AllocationMode allocationMode)
	static int _bind_public_setData(lua_State *L) {
		if (!_lg_typecheck_public_setData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::public_setData(unsigned char * data, osg::Image::AllocationMode allocationMode) function, expected prototype:\nvoid osg::Image::public_setData(unsigned char * data, osg::Image::AllocationMode allocationMode)\nClass arguments details:\n");
		}

		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		osg::Image::AllocationMode allocationMode=(osg::Image::AllocationMode)lua_tointeger(L,3);

		wrapper_osg_ImageStream* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::public_setData(unsigned char *, osg::Image::AllocationMode)");
		}
		self->public_setData(&data, allocationMode);

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

		wrapper_osg_ImageStream* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageStream >(L,1);
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


		wrapper_osg_ImageStream* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_deallocateData",_bind_public_deallocateData},
		{"protected_setData",_bind_public_setData},
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

