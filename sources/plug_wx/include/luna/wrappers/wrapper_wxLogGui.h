#ifndef _WRAPPERS_WRAPPER_WXLOGGUI_H_
#define _WRAPPERS_WRAPPER_WXLOGGUI_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogGui : public wxLogGui, public luna_wrapper_base {

public:
		

	~wrapper_wxLogGui() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxLogGui(lua_State* L, lua_Table* dum) : wxLogGui(), luna_wrapper_base(L) {};

	// void wxLogGui::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<void>());
		}

		return wxLogGui::Flush();
	};


protected:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	void DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info) {
		if(_obj.pushFunction("DoLogRecord")) {
			_obj.pushArg(level);
			_obj.pushArg(msg);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxLogGui::DoLogRecord(level, msg, info);
	};

	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	void DoLogTextAtLevel(unsigned long level, const wxString & msg) {
		if(_obj.pushFunction("DoLogTextAtLevel")) {
			_obj.pushArg(level);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogGui::DoLogTextAtLevel(level, msg);
	};

	// void wxLog::DoLogText(const wxString & msg)
	void DoLogText(const wxString & msg) {
		if(_obj.pushFunction("DoLogText")) {
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogGui::DoLogText(msg);
	};


};




#endif

