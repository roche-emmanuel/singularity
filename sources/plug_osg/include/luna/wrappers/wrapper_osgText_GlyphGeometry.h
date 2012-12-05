#ifndef _WRAPPERS_WRAPPER_OSGTEXT_GLYPHGEOMETRY_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_GLYPHGEOMETRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Glyph>

class wrapper_osgText_GlyphGeometry : public osgText::GlyphGeometry {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgText_GlyphGeometry(lua_State* L, lua_Table* dum) : osgText::GlyphGeometry(), _obj(L,-1) {};




};




#endif
