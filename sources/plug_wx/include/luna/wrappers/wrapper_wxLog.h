#ifndef _WRAPPERS_WRAPPER_WXLOG_H_
#define _WRAPPERS_WRAPPER_WXLOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLog : public wxLog {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxLog(lua_State* L, lua_Table* dum) : wxLog(), _obj(L,-1) {};

	// void wxLog::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<void>());
		}

		return wxLog::Flush();
	};


protected:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	// void wxLog::DoLogText(const wxString & msg)

};




#endif

