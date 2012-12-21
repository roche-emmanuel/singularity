#ifndef _WRAPPERS_WRAPPER_OSGTEXT_GLYPH_D_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_GLYPH_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Glyph>

class wrapper_osgText_Glyph3D : public osgText::Glyph3D, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Glyph3D() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Glyph3D(lua_State* L, lua_Table* dum, osgText::Font * font, unsigned int glyphCode) : osgText::Glyph3D(font, glyphCode), luna_wrapper_base(L) {};




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

