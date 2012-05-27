#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "LuaEventHandler.h"

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L);

#endif
