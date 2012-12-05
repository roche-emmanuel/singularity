#ifndef _WRAPPERS_WRAPPER_WXLOGGUI_H_
#define _WRAPPERS_WRAPPER_WXLOGGUI_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogGui : public wxLogGui {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxLogGui(lua_State* L, lua_Table* dum) : wxLogGui(), _obj(L,-1) {};

	// void wxLogGui::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<void>());
		}

		return wxLogGui::Flush();
	};


protected:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	// void wxLog::DoLogText(const wxString & msg)
	// void wxLogGui::DoShowSingleLogMessage(const wxString & message, const wxString & title, int style)
	// void wxLogGui::DoShowMultipleLogMessages(const wxArrayString & messages, const wxArrayInt & severities, const wxArrayLong & times, const wxString & title, int style)

};




#endif

