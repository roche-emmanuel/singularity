#ifndef _WRAPPERS_WRAPPER_OSGTEXT_FONT_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_FONT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Font>

class wrapper_osgText_Font : public osgText::Font, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Font() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Font(lua_State* L, lua_Table* dum, osgText::Font::FontImplementation * implementation = 0) : osgText::Font(implementation), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Font::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Font::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Font::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Font::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Font::getUserData();
	};

	// osg::Object * osgText::Font::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Font::cloneType();
	};

	// osg::Object * osgText::Font::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Font::clone(arg1);
	};

	// bool osgText::Font::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Font::isSameKindAs(obj);
	};

	// const char * osgText::Font::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Font::className();
	};

	// const char * osgText::Font::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Font::libraryName();
	};

	// std::string osgText::Font::getFileName() const
	std::string getFileName() const {
		if(_obj.pushFunction("getFileName")) {
			return (_obj.callFunction<std::string>());
		}

		return Font::getFileName();
	};

	// osg::Vec2f osgText::Font::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	osg::Vec2f getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) {
		if(_obj.pushFunction("getKerning")) {
			_obj.pushArg(leftcharcode);
			_obj.pushArg(rightcharcode);
			_obj.pushArg(kerningType);
			return *(_obj.callFunction<osg::Vec2f*>());
		}

		return Font::getKerning(leftcharcode, rightcharcode, kerningType);
	};

	// osgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)
	osgText::Glyph * getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode) {
		if(_obj.pushFunction("getGlyph")) {
			_obj.pushArg(&fontSize);
			_obj.pushArg(charcode);
			return (_obj.callFunction<osgText::Glyph*>());
		}

		return Font::getGlyph(fontSize, charcode);
	};

	// osgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int charcode)
	osgText::Glyph3D * getGlyph3D(unsigned int charcode) {
		if(_obj.pushFunction("getGlyph3D")) {
			_obj.pushArg(charcode);
			return (_obj.callFunction<osgText::Glyph3D*>());
		}

		return Font::getGlyph3D(charcode);
	};

	// bool osgText::Font::hasVertical() const
	bool hasVertical() const {
		if(_obj.pushFunction("hasVertical")) {
			return (_obj.callFunction<bool>());
		}

		return Font::hasVertical();
	};

	// void osgText::Font::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Font::releaseGLObjects(state);
	};




// void osgText::Font::addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)
void public_addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph) {
	return osgText::Font::addGlyph(fontRes, charcode, glyph);
};

// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif

