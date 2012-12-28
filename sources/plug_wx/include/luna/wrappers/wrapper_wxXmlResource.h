#ifndef _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_
#define _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xmlres.h>

class wrapper_wxXmlResource : public wxXmlResource, public luna_wrapper_base {

public:
		

	~wrapper_wxXmlResource() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlResource::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlResource::CloneRefData(data);
	};

	// void wxXmlResource::DoReportError(const wxString & xrcFile, const wxXmlNode * position, const wxString & message)
	void DoReportError(const wxString & xrcFile, const wxXmlNode * position, const wxString & message) {
		if(_obj.pushFunction("DoReportError")) {
			_obj.pushArg(xrcFile);
			_obj.pushArg(position);
			_obj.pushArg(message);
			return (_obj.callFunction<void>());
		}

		return wxXmlResource::DoReportError(xrcFile, position, message);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxXmlResource::GetClassInfo();
	};


	// Protected non-virtual methods:
	// void wxXmlResource::ReportError(const wxXmlNode * context, const wxString & message)
	void public_ReportError(const wxXmlNode * context, const wxString & message) {
		return wxXmlResource::ReportError(context, message);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_ReportError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void wxXmlResource::public_ReportError(const wxXmlNode * context, const wxString & message)
	static int _bind_public_ReportError(lua_State *L) {
		if (!_lg_typecheck_public_ReportError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlResource::public_ReportError(const wxXmlNode * context, const wxString & message) function, expected prototype:\nvoid wxXmlResource::public_ReportError(const wxXmlNode * context, const wxString & message)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 88196105\n");
		}

		const wxXmlNode* context=(Luna< wxXmlNode >::check(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_wxXmlResource* self=Luna< wxObject >::checkSubType< wrapper_wxXmlResource >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlResource::public_ReportError(const wxXmlNode *, const wxString &)");
		}
		self->public_ReportError(context, message);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_ReportError",_bind_public_ReportError},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

