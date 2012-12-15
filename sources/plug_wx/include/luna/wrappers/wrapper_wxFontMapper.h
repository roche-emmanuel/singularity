#ifndef _WRAPPERS_WRAPPER_WXFONTMAPPER_H_
#define _WRAPPERS_WRAPPER_WXFONTMAPPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/fontmap.h>

class wrapper_wxFontMapper : public wxFontMapper {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFontMapper(lua_State* L, lua_Table* dum) : wxFontMapper(), _obj(L,-1) {};

	// wxFontEncoding wxFontMapper::CharsetToEncoding(const wxString & charset, bool interactive = true)
	wxFontEncoding CharsetToEncoding(const wxString & charset, bool interactive = true) {
		if(_obj.pushFunction("CharsetToEncoding")) {
			_obj.pushArg(charset);
			_obj.pushArg(interactive);
			return (wxFontEncoding)(_obj.callFunction<int>());
		}

		return wxFontMapper::CharsetToEncoding(charset, interactive);
	};

	// bool wxFontMapper::IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString)
	bool IsEncodingAvailable(wxFontEncoding encoding, const wxString & facename = wxEmptyString) {
		if(_obj.pushFunction("IsEncodingAvailable")) {
			_obj.pushArg(encoding);
			_obj.pushArg(facename);
			return (_obj.callFunction<bool>());
		}

		return wxFontMapper::IsEncodingAvailable(encoding, facename);
	};




};




#endif

