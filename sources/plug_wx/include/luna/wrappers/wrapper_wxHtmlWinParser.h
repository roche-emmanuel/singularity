#ifndef _WRAPPERS_WRAPPER_WXHTMLWINPARSER_H_
#define _WRAPPERS_WRAPPER_WXHTMLWINPARSER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/winpars.h>

class wrapper_wxHtmlWinParser : public wxHtmlWinParser, public luna_wrapper_base {

public:
	


	// void wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler)
	void AddTagHandler(wxHtmlTagHandler * handler) {
		if(_obj.pushFunction("AddTagHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::AddTagHandler(handler);
	};

	// void wxHtmlParser::DoneParser()
	void DoneParser() {
		if(_obj.pushFunction("DoneParser")) {
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::DoneParser();
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

		return wxHtmlWinParser::InitParser(source);
	};

	// void wxHtmlParser::StopParsing()
	void StopParsing() {
		if(_obj.pushFunction("StopParsing")) {
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::StopParsing();
	};

	// wxFont * wxHtmlWinParser::CreateCurrentFont()
	wxFont * CreateCurrentFont() {
		if(_obj.pushFunction("CreateCurrentFont")) {
			return (_obj.callFunction<wxFont*>());
		}

		return wxHtmlWinParser::CreateCurrentFont();
	};

	// void wxHtmlWinParser::SetDC(wxDC * dc, double pixel_scale = 1.0e+0)
	void SetDC(wxDC * dc, double pixel_scale = 1.0e+0) {
		if(_obj.pushFunction("SetDC")) {
			_obj.pushArg(dc);
			_obj.pushArg(pixel_scale);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::SetDC(dc, pixel_scale);
	};


protected:
	// void wxHtmlParser::AddTag(const wxHtmlTag & tag)
	void AddTag(const wxHtmlTag & tag) {
		if(_obj.pushFunction("AddTag")) {
			_obj.pushArg(&tag);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWinParser::AddTag(tag);
	};


};




#endif

