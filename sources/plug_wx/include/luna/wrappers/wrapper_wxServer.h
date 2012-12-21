#ifndef _WRAPPERS_WRAPPER_WXSERVER_H_
#define _WRAPPERS_WRAPPER_WXSERVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/ipc.h>

class wrapper_wxServer : public wxServer, public luna_wrapper_base {

public:
		

	~wrapper_wxServer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxServer(lua_State* L, lua_Table* dum) : wxServer(), luna_wrapper_base(L) {};

	// wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)
	wxConnectionBase * OnAcceptConnection(const wxString & topic) {
		if(_obj.pushFunction("OnAcceptConnection")) {
			_obj.pushArg(topic);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxServer::OnAcceptConnection(topic);
	};




};




#endif

