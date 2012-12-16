#ifndef _WRAPPERS_WRAPPER_OSGTEXT_GLYPH_D_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_GLYPH_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgText/Glyph>

class wrapper_osgText_Glyph3D : public osgText::Glyph3D, public luna_wrapper_base {

public:
	

	wrapper_osgText_Glyph3D(lua_State* L, lua_Table* dum, osgText::Font * font, unsigned int glyphCode) : osgText::Glyph3D(font, glyphCode), luna_wrapper_base(L) {};




};




#endif

