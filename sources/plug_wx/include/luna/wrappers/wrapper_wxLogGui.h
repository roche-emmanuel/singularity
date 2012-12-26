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
	
	wrapper_wxLogGui(lua_State* L, lua_Table* dum) : wxLogGui(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void wxLogGui::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<void>());
		}

		return wxLogGui::Flush();
	};


protected:
	// Protected virtual methods:
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

public:
	// Protected non-virtual methods:
	// wxString wxLogGui::GetTitle() const
	wxString public_GetTitle() const {
		return wxLogGui::GetTitle();
	};

	// int wxLogGui::GetSeverityIcon() const
	int public_GetSeverityIcon() const {
		return wxLogGui::GetSeverityIcon();
	};

	// void wxLogGui::Clear()
	void public_Clear() {
		return wxLogGui::Clear();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetSeverityIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// wxString wxLogGui::public_GetTitle() const
	static int _bind_public_GetTitle(lua_State *L) {
		if (!_lg_typecheck_public_GetTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLogGui::public_GetTitle() const function, expected prototype:\nwxString wxLogGui::public_GetTitle() const\nClass arguments details:\n");
		}


		wrapper_wxLogGui* self=Luna< wxLog >::checkSubType< wrapper_wxLogGui >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLogGui::public_GetTitle() const");
		}
		wxString lret = self->public_GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxLogGui::public_GetSeverityIcon() const
	static int _bind_public_GetSeverityIcon(lua_State *L) {
		if (!_lg_typecheck_public_GetSeverityIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxLogGui::public_GetSeverityIcon() const function, expected prototype:\nint wxLogGui::public_GetSeverityIcon() const\nClass arguments details:\n");
		}


		wrapper_wxLogGui* self=Luna< wxLog >::checkSubType< wrapper_wxLogGui >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxLogGui::public_GetSeverityIcon() const");
		}
		int lret = self->public_GetSeverityIcon();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxLogGui::public_Clear()
	static int _bind_public_Clear(lua_State *L) {
		if (!_lg_typecheck_public_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogGui::public_Clear() function, expected prototype:\nvoid wxLogGui::public_Clear()\nClass arguments details:\n");
		}


		wrapper_wxLogGui* self=Luna< wxLog >::checkSubType< wrapper_wxLogGui >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogGui::public_Clear()");
		}
		self->public_Clear();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_GetTitle",_bind_public_GetTitle},
		{"protected_GetSeverityIcon",_bind_public_GetSeverityIcon},
		{"protected_Clear",_bind_public_Clear},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

