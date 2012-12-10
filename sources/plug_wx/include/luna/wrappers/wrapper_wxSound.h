#ifndef _WRAPPERS_WRAPPER_WXSOUND_H_
#define _WRAPPERS_WRAPPER_WXSOUND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sound.h>

class wrapper_wxSound : public wxSound {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSound(lua_State* L, lua_Table* dum) : wxSound(), _obj(L,-1) {};
	wrapper_wxSound(lua_State* L, lua_Table* dum, const wxString & fileName, bool isResource = false) : wxSound(fileName, isResource), _obj(L,-1) {};
	wrapper_wxSound(lua_State* L, lua_Table* dum, size_t size, const void * data) : wxSound(size, data), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSound::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSound::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSound::CloneRefData(data);
	};


};




#endif

