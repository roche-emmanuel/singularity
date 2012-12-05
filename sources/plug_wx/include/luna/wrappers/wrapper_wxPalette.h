#ifndef _WRAPPERS_WRAPPER_WXPALETTE_H_
#define _WRAPPERS_WRAPPER_WXPALETTE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/palette.h>

class wrapper_wxPalette : public wxPalette {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPalette(lua_State* L, lua_Table* dum) : wxPalette(), _obj(L,-1) {};
	wrapper_wxPalette(lua_State* L, lua_Table* dum, const wxPalette & palette) : wxPalette(palette), _obj(L,-1) {};
	wrapper_wxPalette(lua_State* L, lua_Table* dum, int n, const unsigned char * red, const unsigned char * green, const unsigned char * blue) : wxPalette(n, red, green, blue), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// int wxPalette::GetColoursCount() const
	int GetColoursCount() const {
		if(_obj.pushFunction("GetColoursCount")) {
			return (_obj.callFunction<int>());
		}

		return wxPalette::GetColoursCount();
	};

	// bool wxPalette::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxPalette::IsOk();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

