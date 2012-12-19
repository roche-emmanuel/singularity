#ifndef _WRAPPERS_WRAPPER_OSGTEXT_FONT_FONTIMPLEMENTATION_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_FONT_FONTIMPLEMENTATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Font>

class wrapper_osgText_Font_FontImplementation : public osgText::Font::FontImplementation, public luna_wrapper_base {

public:
	

	wrapper_osgText_Font_FontImplementation(lua_State* L, lua_Table* dum) : osgText::Font::FontImplementation(), luna_wrapper_base(L) {};

	// std::string osgText::Font::FontImplementation::getFileName() const
	std::string getFileName() const {
		THROW_IF(!_obj.pushFunction("getFileName"),"No implementation for abstract function osgText::Font::FontImplementation::getFileName");
		return (_obj.callFunction<std::string>());
	};

	// bool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const
	bool supportsMultipleFontResolutions() const {
		THROW_IF(!_obj.pushFunction("supportsMultipleFontResolutions"),"No implementation for abstract function osgText::Font::FontImplementation::supportsMultipleFontResolutions");
		return (_obj.callFunction<bool>());
	};

	// osgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode)
	osgText::Glyph * getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode) {
		THROW_IF(!_obj.pushFunction("getGlyph"),"No implementation for abstract function osgText::Font::FontImplementation::getGlyph");
		_obj.pushArg(&fontRes);
		_obj.pushArg(charcode);
		return (_obj.callFunction<osgText::Glyph*>());
	};

	// osgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int charcode)
	osgText::Glyph3D * getGlyph3D(unsigned int charcode) {
		THROW_IF(!_obj.pushFunction("getGlyph3D"),"No implementation for abstract function osgText::Font::FontImplementation::getGlyph3D");
		_obj.pushArg(charcode);
		return (_obj.callFunction<osgText::Glyph3D*>());
	};

	// osg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	osg::Vec2f getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) {
		THROW_IF(!_obj.pushFunction("getKerning"),"No implementation for abstract function osgText::Font::FontImplementation::getKerning");
		_obj.pushArg(leftcharcode);
		_obj.pushArg(rightcharcode);
		_obj.pushArg(kerningType);
		return *(_obj.callFunction<osg::Vec2f*>());
	};

	// bool osgText::Font::FontImplementation::hasVertical() const
	bool hasVertical() const {
		THROW_IF(!_obj.pushFunction("hasVertical"),"No implementation for abstract function osgText::Font::FontImplementation::hasVertical");
		return (_obj.callFunction<bool>());
	};




};




#endif

