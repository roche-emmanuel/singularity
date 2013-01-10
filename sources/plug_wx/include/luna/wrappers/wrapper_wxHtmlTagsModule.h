#ifndef _WRAPPERS_WRAPPER_WXHTMLTAGSMODULE_H_
#define _WRAPPERS_WRAPPER_WXHTMLTAGSMODULE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/winpars.h>

class wrapper_wxHtmlTagsModule : public wxHtmlTagsModule, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlTagsModule() {
		logDEBUG3("Calling delete function for wrapper wxHtmlTagsModule");
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

		return wxHtmlTagsModule::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagsModule::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlTagsModule::GetClassInfo();
	};

	// void wxModule::OnExit()
	void OnExit() {
		THROW_IF(!_obj.pushFunction("OnExit"),"No implementation for abstract function wxModule::OnExit");
		return (_obj.callFunction<void>());
	};

	// bool wxModule::OnInit()
	bool OnInit() {
		THROW_IF(!_obj.pushFunction("OnInit"),"No implementation for abstract function wxModule::OnInit");
		return (_obj.callFunction<bool>());
	};

	// void wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser * parser)
	void FillHandlersTable(wxHtmlWinParser * parser) {
		if(_obj.pushFunction("FillHandlersTable")) {
			_obj.pushArg(parser);
			return (_obj.callFunction<void>());
		}

		return wxHtmlTagsModule::FillHandlersTable(parser);
	};


	// Protected non-virtual methods:
	// void wxModule::AddDependency(wxClassInfo * dep)
	void public_AddDependency(wxClassInfo * dep) {
		return wxModule::AddDependency(dep);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_AddDependency(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void wxModule::public_AddDependency(wxClassInfo * dep)
	static int _bind_public_AddDependency(lua_State *L) {
		if (!_lg_typecheck_public_AddDependency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxModule::public_AddDependency(wxClassInfo * dep) function, expected prototype:\nvoid wxModule::public_AddDependency(wxClassInfo * dep)\nClass arguments details:\narg 1 ID = 96106697\n");
		}

		wxClassInfo* dep=(Luna< wxClassInfo >::check(L,2));

		wrapper_wxHtmlTagsModule* self=Luna< wxObject >::checkSubType< wrapper_wxHtmlTagsModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxModule::public_AddDependency(wxClassInfo *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->public_AddDependency(dep);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_AddDependency",_bind_public_AddDependency},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

