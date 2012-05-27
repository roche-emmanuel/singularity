#include <plug_common.h>

// wxObject converters:

wxObjectConverterMap wxObject_converters;

luabind::object convertwxObjectTowxApp(lua_State* L, wxObject* parent) {
    return luabind::object(L,dynamic_cast<wxApp*>(parent));
}

luabind::object convertwxObjectTowxAppConsole(lua_State* L, wxObject* parent) {
    return luabind::object(L,dynamic_cast<wxAppConsole*>(parent));
}

luabind::object convertwxObjectTowxEvtHandler(lua_State* L, wxObject* parent) {
    return luabind::object(L,dynamic_cast<wxEvtHandler*>(parent));
}

void registerwxObjectConverters() {
	wxObject_converters["wxApp"] = &convertwxObjectTowxApp;
	wxObject_converters["wxAppConsole"] = &convertwxObjectTowxAppConsole;
	wxObject_converters["wxEvtHandler"] = &convertwxObjectTowxEvtHandler;
}


