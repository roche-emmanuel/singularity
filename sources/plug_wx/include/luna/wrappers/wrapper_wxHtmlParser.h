#ifndef _WRAPPERS_WRAPPER_WXHTMLPARSER_H_
#define _WRAPPERS_WRAPPER_WXHTMLPARSER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlpars.h>

class wrapper_wxHtmlParser : public wxHtmlParser {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlParser(lua_State* L, lua_Table* dum) : wxHtmlParser(), _obj(L,-1) {};

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

