#ifndef _WRAPPERS_WRAPPER_WXPROTOCOLLOG_H_
#define _WRAPPERS_WRAPPER_WXPROTOCOLLOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/protocol/log.h>

class wrapper_wxProtocolLog : public wxProtocolLog {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxProtocolLog(lua_State* L, lua_Table* dum, const wxString & traceMask) : wxProtocolLog(traceMask), _obj(L,-1) {};

	// void wxProtocolLog::LogRequest(const wxString & str)
	void LogRequest(const wxString & str) {
		if(_obj.pushFunction("LogRequest")) {
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::LogRequest(str);
	};

	// void wxProtocolLog::LogResponse(const wxString & str)
	void LogResponse(const wxString & str) {
		if(_obj.pushFunction("LogResponse")) {
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::LogResponse(str);
	};


protected:
	// void wxProtocolLog::DoLogString(const wxString & str)
	void DoLogString(const wxString & str) {
		if(_obj.pushFunction("DoLogString")) {
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::DoLogString(str);
	};


};




#endif

