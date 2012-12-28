#ifndef _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_
#define _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlpars.h>

class wrapper_wxHtmlTagHandler : public wxHtmlTagHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlTagHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlTagHandler(lua_State* L, lua_Table* dum) : wxHtmlTagHandler(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagHandler::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlTagHandler::GetClassInfo();
	};

	// wxString wxHtmlTagHandler::GetSupportedTags()
	wxString GetSupportedTags() {
		THROW_IF(!_obj.pushFunction("GetSupportedTags"),"No implementation for abstract function wxHtmlTagHandler::GetSupportedTags");
		return *(_obj.callFunction<wxString*>());
	};

	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
	bool HandleTag(const wxHtmlTag & tag) {
		THROW_IF(!_obj.pushFunction("HandleTag"),"No implementation for abstract function wxHtmlTagHandler::HandleTag");
		_obj.pushArg(&tag);
		return (_obj.callFunction<bool>());
	};

	// void wxHtmlTagHandler::SetParser(wxHtmlParser * parser)
	void SetParser(wxHtmlParser * parser) {
		if(_obj.pushFunction("SetParser")) {
			_obj.pushArg(parser);
			return (_obj.callFunction<void>());
		}

		return wxHtmlTagHandler::SetParser(parser);
	};


	// Protected non-virtual methods:
	// void wxHtmlTagHandler::ParseInner(const wxHtmlTag & tag)
	void public_ParseInner(const wxHtmlTag & tag) {
		return wxHtmlTagHandler::ParseInner(tag);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_ParseInner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void wxHtmlTagHandler::public_ParseInner(const wxHtmlTag & tag)
	static int _bind_public_ParseInner(lua_State *L) {
		if (!_lg_typecheck_public_ParseInner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlTagHandler::public_ParseInner(const wxHtmlTag & tag) function, expected prototype:\nvoid wxHtmlTagHandler::public_ParseInner(const wxHtmlTag & tag)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlTagHandler::public_ParseInner function");
		}
		const wxHtmlTag & tag=*tag_ptr;

		wrapper_wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wrapper_wxHtmlTagHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlTagHandler::public_ParseInner(const wxHtmlTag &)");
		}
		self->public_ParseInner(tag);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_ParseInner",_bind_public_ParseInner},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

