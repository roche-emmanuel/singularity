#include "wx_extensions.h"

int connect(wxEvtHandler* handler, int id, int id2, int eventType, lua_Function* dummy, lua_State* L) {
	trINFO("Luna","Entering connect extension");

	// Create a new lua event handler:
	LuaEventHandler* luahandler = new LuaEventHandler();
	
	wxString result = luahandler->connect( L, 4, id, id2, (wxEventType)eventType, handler );
	
	if(!result.IsEmpty()){
		delete luahandler;
		luaL_error(L,result.ToStdString().c_str());
	}

	trINFO("Luna","Leaving connect extension");

	return 0;
}

int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L) {
	return connect(handler,id,id,eventType,dummy,L);
}

int connect(wxEvtHandler* handler, int eventType, lua_Function* dummy, lua_State* L) {
	return connect(handler,wxID_ANY,wxID_ANY,eventType,dummy,L);
}
