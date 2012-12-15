#ifndef _WRAPPERS_WRAPPER_WXHTMLRENDERINGSTYLE_H_
#define _WRAPPERS_WRAPPER_WXHTMLRENDERINGSTYLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlRenderingStyle : public wxHtmlRenderingStyle {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	wxColour GetSelectedTextColour(const wxColour & clr) {
		THROW_IF(!_obj.pushFunction("GetSelectedTextColour"),"No implementation for abstract function wxHtmlRenderingStyle::GetSelectedTextColour");
		_obj.pushArg(&clr);
		return *(_obj.callFunction<wxColour*>());
	};

	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
	wxColour GetSelectedTextBgColour(const wxColour & clr) {
		THROW_IF(!_obj.pushFunction("GetSelectedTextBgColour"),"No implementation for abstract function wxHtmlRenderingStyle::GetSelectedTextBgColour");
		_obj.pushArg(&clr);
		return *(_obj.callFunction<wxColour*>());
	};




};




#endif

