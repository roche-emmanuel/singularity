#ifndef _wx_DYNAMICCASTERS_H_
#define _wx_DYNAMICCASTERS_H_

// DynamicCasters functions:

luabind::object dynamicCastwxObject(wxObject* parent, std::string destType, lua_State* L);

#endif

