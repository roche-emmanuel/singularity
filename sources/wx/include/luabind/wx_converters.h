#ifndef _wx_CONVERTERS_H_
#define _wx_CONVERTERS_H_

// Converters registration functions:
typedef boost::function<luabind::object (lua_State* L, wxObject* parent)> wxObjectConverter;

typedef std::map<std::string, wxObjectConverter> wxObjectConverterMap;

extern wxObjectConverterMap wxObject_converters;

void registerwxObjectConverters();

#endif

