#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "LuaEventHandler.h"

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int id, int id2, int eventType, lua_Function* dummy, lua_State* L);

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L);

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int eventType, lua_Function* dummy, lua_State* L);

enum ImageCorner {
	CORNER_BOTTOM_RIGHT,
	CORNER_BOTTOM_LEFT,
	CORNER_TOP_LEFT,
	CORNER_TOP_RIGHT
};

/** LUNA_CLASS_EXTENSION */
void composeWith(wxImage* mainImg, wxImage* subImg, int corner = CORNER_BOTTOM_RIGHT);

#endif
