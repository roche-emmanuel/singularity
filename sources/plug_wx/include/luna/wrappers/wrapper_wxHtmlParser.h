#ifndef _WRAPPERS_WRAPPER_WXHTMLPARSER_H_
#define _WRAPPERS_WRAPPER_WXHTMLPARSER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlpars.h>

class wrapper_wxHtmlParser : public wxHtmlParser, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlParser() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlParser(lua_State* L, lua_Table* dum) : wxHtmlParser(), luna_wrapper_base(L) {};

	// void wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler)
	void AddTagHandler(wxHtmlTagHandler * handler) {
		if(_obj.pushFunction("AddTagHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxHtmlParser::AddTagHandler(handler);
	};

	// void wxHtmlParser::DoneParser()
	void DoneParser() {
		if(_obj.pushFunction("DoneParser")) {
			return (_obj.callFunction<void>());
		}

		return wxHtmlParser::DoneParser();
	};

	// wxObject * wxHtmlParser::GetProduct()
	wxObject * GetProduct() {
		THROW_IF(!_obj.pushFunction("GetProduct"),"No implementation for abstract function wxHtmlParser::GetProduct");
		return (_obj.callFunction<wxObject*>());
	};

	// void wxHtmlParser::InitParser(const wxString & source)
	void InitParser(const wxString & source) {
		if(_obj.pushFunction("InitParser")) {
			_obj.pushArg(source);
			return (_obj.callFunction<void>());
		}

		return wxHtmlParser::InitParser(source);
	};

	// void wxHtmlParser::StopParsing()
	void StopParsing() {
		if(_obj.pushFunction("StopParsing")) {
			return (_obj.callFunction<void>());
		}

		return wxHtmlParser::StopParsing();
	};


protected:
	// void wxHtmlParser::AddText(const wxString & arg1)
	void AddText(const wxString & arg1) {
		THROW_IF(!_obj.pushFunction("AddText"),"No implementation for abstract function wxHtmlParser::AddText");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};

	// void wxHtmlParser::AddTag(const wxHtmlTag & tag)
	void AddTag(const wxHtmlTag & tag) {
		if(_obj.pushFunction("AddTag")) {
			_obj.pushArg(&tag);
			return (_obj.callFunction<void>());
		}

		return wxHtmlParser::AddTag(tag);
	};


};




#endif
