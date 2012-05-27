#ifndef _wx_REGISTERS_H_
#define _wx_REGISTERS_H_

// wx registration functions:

luabind::scope register_wxObject();
luabind::scope register_wxEvtHandler();
luabind::scope register_wxAppConsole();
luabind::scope register_wxApp();
luabind::scope register_wxClassInfo();
luabind::scope register_wxEvent();
luabind::scope register_wxRefCounter();
luabind::scope register_wxString();
luabind::scope register_wxWindow();
luabind::scope register_global_functions();

#ifdef __cplusplus
extern "C" {
#endif

int luaopen_wx(lua_State* L);

#ifdef __cplusplus
}
#endif


#endif

