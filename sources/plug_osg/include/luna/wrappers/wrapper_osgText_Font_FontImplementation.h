#ifndef _WRAPPERS_WRAPPER_OSGTEXT_FONT_FONTIMPLEMENTATION_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_FONT_FONTIMPLEMENTATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Font>

class wrapper_osgText_Font_FontImplementation : public osgText::Font::FontImplementation, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Font_FontImplementation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Font_FontImplementation(lua_State* L, lua_Table* dum) : osgText::Font::FontImplementation(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
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

		wrapper_osgText_Font_FontImplementation* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Font_FontImplementation >(L,1);
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


		wrapper_osgText_Font_FontImplementation* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Font_FontImplementation >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
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

