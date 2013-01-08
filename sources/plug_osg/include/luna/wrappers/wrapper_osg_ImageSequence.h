#ifndef _WRAPPERS_WRAPPER_OSG_IMAGESEQUENCE_H_
#define _WRAPPERS_WRAPPER_OSG_IMAGESEQUENCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ImageSequence>

class wrapper_osg_ImageSequence : public osg::ImageSequence, public luna_wrapper_base {

public:
		

	~wrapper_osg_ImageSequence() {
		logDEBUG3("Calling delete function for wrapper osg_ImageSequence");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ImageSequence(lua_State* L, lua_Table* dum) : osg::ImageSequence(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_ImageSequence(lua_State* L, lua_Table* dum, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ImageSequence(ImageSequence, copyop), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osg::ImageSequence::applyLoopingMode()
	void applyLoopingMode() {
		if(_obj.pushFunction("applyLoopingMode")) {
			return (_obj.callFunction<void>());
		}

		return ImageSequence::applyLoopingMode();
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ImageSequence::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageSequence::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageSequence::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::releaseGLObjects(state);
	};

	// const void * osg::Image::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return ImageSequence::getDataPointer();
	};

	// unsigned int osg::Image::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return ImageSequence::getTotalDataSize();
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

		return ImageSequence::allocateImage(s, t, r, pixelFormat, type, packing);
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

		return ImageSequence::readPixels(x, y, width, height, pixelFormat, type);
	};

	// void osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE)
	void readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE) {
		if(_obj.pushFunction("readImageFromCurrentTexture")) {
			_obj.pushArg(contextID);
			_obj.pushArg(copyMipMapsIfAvailable);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type);
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

		return ImageSequence::scaleImage(s, t, r, newDataType);
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

		return ImageSequence::copySubImage(s_offset, t_offset, r_offset, source);
	};

	// bool osg::Image::isImageTranslucent() const
	bool isImageTranslucent() const {
		if(_obj.pushFunction("isImageTranslucent")) {
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::isImageTranslucent();
	};

	// bool osg::Image::sendFocusHint(bool arg1)
	bool sendFocusHint(bool arg1) {
		if(_obj.pushFunction("sendFocusHint")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::sendFocusHint(arg1);
	};

	// bool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3)
	bool sendPointerEvent(int arg1, int arg2, int arg3) {
		if(_obj.pushFunction("sendPointerEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::sendPointerEvent(arg1, arg2, arg3);
	};

	// bool osg::Image::sendKeyEvent(int arg1, bool arg2)
	bool sendKeyEvent(int arg1, bool arg2) {
		if(_obj.pushFunction("sendKeyEvent")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::sendKeyEvent(arg1, arg2);
	};

	// void osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1)
	void setFrameLastRendered(const osg::FrameStamp * arg1) {
		if(_obj.pushFunction("setFrameLastRendered")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setFrameLastRendered(arg1);
	};

	// void osg::ImageStream::quit(bool arg1 = true)
	void quit(bool arg1 = true) {
		if(_obj.pushFunction("quit")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::quit(arg1);
	};

	// double osg::ImageStream::getCreationTime() const
	double getCreationTime() const {
		if(_obj.pushFunction("getCreationTime")) {
			return (_obj.callFunction<double>());
		}

		return ImageSequence::getCreationTime();
	};

	// double osg::ImageStream::getFrameRate() const
	double getFrameRate() const {
		if(_obj.pushFunction("getFrameRate")) {
			return (_obj.callFunction<double>());
		}

		return ImageSequence::getFrameRate();
	};

	// void osg::ImageStream::setVolume(float arg1)
	void setVolume(float arg1) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setVolume(arg1);
	};

	// float osg::ImageStream::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			return (_obj.callFunction<float>());
		}

		return ImageSequence::getVolume();
	};

	// osg::Object * osg::ImageSequence::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageSequence::cloneType();
	};

	// osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageSequence::clone(arg1);
	};

	// bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::isSameKindAs(obj);
	};

	// const char * osg::ImageSequence::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageSequence::libraryName();
	};

	// const char * osg::ImageSequence::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageSequence::className();
	};

	// int osg::ImageSequence::compare(const osg::Image & rhs) const
	int compare(const osg::Image & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return ImageSequence::compare(rhs);
	};

	// void osg::ImageSequence::setReferenceTime(double t)
	void setReferenceTime(double t) {
		if(_obj.pushFunction("setReferenceTime")) {
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setReferenceTime(t);
	};

	// double osg::ImageSequence::getReferenceTime() const
	double getReferenceTime() const {
		if(_obj.pushFunction("getReferenceTime")) {
			return (_obj.callFunction<double>());
		}

		return ImageSequence::getReferenceTime();
	};

	// void osg::ImageSequence::setTimeMultiplier(double tm)
	void setTimeMultiplier(double tm) {
		if(_obj.pushFunction("setTimeMultiplier")) {
			_obj.pushArg(tm);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::setTimeMultiplier(tm);
	};

	// double osg::ImageSequence::getTimeMultiplier() const
	double getTimeMultiplier() const {
		if(_obj.pushFunction("getTimeMultiplier")) {
			return (_obj.callFunction<double>());
		}

		return ImageSequence::getTimeMultiplier();
	};

	// void osg::ImageSequence::seek(double time)
	void seek(double time) {
		if(_obj.pushFunction("seek")) {
			_obj.pushArg(time);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::seek(time);
	};

	// void osg::ImageSequence::play()
	void play() {
		if(_obj.pushFunction("play")) {
			return (_obj.callFunction<void>());
		}

		return ImageSequence::play();
	};

	// void osg::ImageSequence::pause()
	void pause() {
		if(_obj.pushFunction("pause")) {
			return (_obj.callFunction<void>());
		}

		return ImageSequence::pause();
	};

	// void osg::ImageSequence::rewind()
	void rewind() {
		if(_obj.pushFunction("rewind")) {
			return (_obj.callFunction<void>());
		}

		return ImageSequence::rewind();
	};

	// double osg::ImageSequence::getLength() const
	double getLength() const {
		if(_obj.pushFunction("getLength")) {
			return (_obj.callFunction<double>());
		}

		return ImageSequence::getLength();
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

		return ImageSequence::setImage(s, t, r, internalTextureformat, pixelFormat, type, data, mode, packing);
	};

	// bool osg::ImageSequence::requiresUpdateCall() const
	bool requiresUpdateCall() const {
		if(_obj.pushFunction("requiresUpdateCall")) {
			return (_obj.callFunction<bool>());
		}

		return ImageSequence::requiresUpdateCall();
	};

	// void osg::ImageSequence::update(osg::NodeVisitor * nv)
	void update(osg::NodeVisitor * nv) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return ImageSequence::update(nv);
	};


	// Protected non-virtual methods:
	// void osg::ImageSequence::setImageToChild(const osg::Image * image)
	void public_setImageToChild(const osg::Image * image) {
		return osg::ImageSequence::setImageToChild(image);
	};

	// void osg::ImageSequence::computeTimePerImage()
	void public_computeTimePerImage() {
		return osg::ImageSequence::computeTimePerImage();
	};

	// int osg::ImageSequence::imageIndex(double time)
	int public_imageIndex(double time) {
		return osg::ImageSequence::imageIndex(time);
	};

	// void osg::Image::deallocateData()
	void public_deallocateData() {
		return osg::Image::deallocateData();
	};

	// void osg::Image::setData(unsigned char * data, osg::Image::AllocationMode allocationMode)
	void public_setData(unsigned char * data, osg::Image::AllocationMode allocationMode) {
		return osg::Image::setData(data, allocationMode);
	};

	// osg::Image & osg::Image::operator=(const osg::Image & arg1)
	osg::Image & public_op_assign(const osg::Image & arg1) {
		return osg::Image::operator=(arg1);
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
	inline static bool _lg_typecheck_public_setImageToChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeTimePerImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_imageIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
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
	// void osg::ImageSequence::public_setImageToChild(const osg::Image * image)
	static int _bind_public_setImageToChild(lua_State *L) {
		if (!_lg_typecheck_public_setImageToChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::public_setImageToChild(const osg::Image * image) function, expected prototype:\nvoid osg::ImageSequence::public_setImageToChild(const osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::public_setImageToChild(const osg::Image *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_setImageToChild(image);

		return 0;
	}

	// void osg::ImageSequence::public_computeTimePerImage()
	static int _bind_public_computeTimePerImage(lua_State *L) {
		if (!_lg_typecheck_public_computeTimePerImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::public_computeTimePerImage() function, expected prototype:\nvoid osg::ImageSequence::public_computeTimePerImage()\nClass arguments details:\n");
		}


		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::public_computeTimePerImage(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_computeTimePerImage();

		return 0;
	}

	// int osg::ImageSequence::public_imageIndex(double time)
	static int _bind_public_imageIndex(lua_State *L) {
		if (!_lg_typecheck_public_imageIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ImageSequence::public_imageIndex(double time) function, expected prototype:\nint osg::ImageSequence::public_imageIndex(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ImageSequence::public_imageIndex(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->public_imageIndex(time);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::public_deallocateData()
	static int _bind_public_deallocateData(lua_State *L) {
		if (!_lg_typecheck_public_deallocateData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::public_deallocateData() function, expected prototype:\nvoid osg::Image::public_deallocateData()\nClass arguments details:\n");
		}


		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::public_deallocateData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::public_setData(unsigned char *, osg::Image::AllocationMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_setData(&data, allocationMode);

		return 0;
	}

	// osg::Image & osg::Image::public_op_assign(const osg::Image & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image & osg::Image::public_op_assign(const osg::Image & arg1) function, expected prototype:\nosg::Image & osg::Image::public_op_assign(const osg::Image & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Image::public_op_assign function");
		}
		const osg::Image & _arg1=*_arg1_ptr;

		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image & osg::Image::public_op_assign(const osg::Image &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Image* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
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


		wrapper_osg_ImageSequence* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ImageSequence >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_setImageToChild",_bind_public_setImageToChild},
		{"protected_computeTimePerImage",_bind_public_computeTimePerImage},
		{"protected_imageIndex",_bind_public_imageIndex},
		{"protected_deallocateData",_bind_public_deallocateData},
		{"protected_setData",_bind_public_setData},
		{"protected_op_assign",_bind_public_op_assign},
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

