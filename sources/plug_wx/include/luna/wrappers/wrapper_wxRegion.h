#ifndef _WRAPPERS_WRAPPER_WXREGION_H_
#define _WRAPPERS_WRAPPER_WXREGION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/region.h>

class wrapper_wxRegion : public wxRegion {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxRegion(lua_State* L, lua_Table* dum) : wxRegion(), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, int x, int y, int width, int height) : wxRegion(x, y, width, height), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxPoint & topLeft, const wxPoint & bottomRight) : wxRegion(topLeft, bottomRight), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxRect & rect) : wxRegion(rect), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxRegion & region) : wxRegion(region), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, size_t n, const wxPoint * points, wxPolygonFillMode fillStyle = ::wxODDEVEN_RULE) : wxRegion(n, points, fillStyle), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxBitmap & bmp) : wxRegion(bmp), _obj(L,-1) {};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0) : wxRegion(bmp, transColour, tolerance), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxRegion::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			return (_obj.callFunction<void>());
		}

		return wxRegion::Clear();
	};

	// bool wxRegion::IsEmpty() const
	bool IsEmpty() const {
		if(_obj.pushFunction("IsEmpty")) {
			return (_obj.callFunction<bool>());
		}

		return wxRegion::IsEmpty();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

