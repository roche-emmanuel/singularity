#include "wx_extensions.h"

int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L) {
	trINFO("Luna","Entering connect extension");

	// Create a new lua event handler:
	LuaEventHandler* luahandler = new LuaEventHandler();
	
	wxString result = luahandler->connect( L, 4, id, id, (wxEventType)eventType, handler );
	
	if(!result.IsEmpty()){
		delete luahandler;
		luaL_error(L,result.ToStdString().c_str());
	}

	trINFO("Luna","Leaving connect extension");

	return 0;
}

