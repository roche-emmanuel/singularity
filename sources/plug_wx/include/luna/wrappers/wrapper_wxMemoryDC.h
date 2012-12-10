#ifndef _WRAPPERS_WRAPPER_WXMEMORYDC_H_
#define _WRAPPERS_WRAPPER_WXMEMORYDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcmemory.h>

class wrapper_wxMemoryDC : public wxMemoryDC {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMemoryDC(lua_State* L, lua_Table* dum) : wxMemoryDC(), _obj(L,-1) {};
	wrapper_wxMemoryDC(lua_State* L, lua_Table* dum, wxDC * dc) : wxMemoryDC(dc), _obj(L,-1) {};
	wrapper_wxMemoryDC(lua_State* L, lua_Table* dum, wxBitmap & bitmap) : wxMemoryDC(bitmap), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMemoryDC::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryDC::CloneRefData(data);
	};


};




#endif

