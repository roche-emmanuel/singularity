#ifndef _WRAPPERS_WRAPPER_WXANIMATION_H_
#define _WRAPPERS_WRAPPER_WXANIMATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/animate.h>

class wrapper_wxAnimation : public wxAnimation {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxAnimation(lua_State* L, lua_Table* dum, const wxAnimation & anim) : wxAnimation(anim), _obj(L,-1) {};
	wrapper_wxAnimation(lua_State* L, lua_Table* dum, const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) : wxAnimation(name, type), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// int wxAnimation::GetDelay(unsigned int i) const
	int GetDelay(unsigned int i) const {
		if(_obj.pushFunction("GetDelay")) {
			_obj.pushArg(i);
			return (_obj.callFunction<int>());
		}

		return wxAnimation::GetDelay(i);
	};

	// wxImage wxAnimation::GetFrame(unsigned int i) const
	wxImage GetFrame(unsigned int i) const {
		if(_obj.pushFunction("GetFrame")) {
			_obj.pushArg(i);
			return *(_obj.callFunction<wxImage*>());
		}

		return wxAnimation::GetFrame(i);
	};

	// unsigned int wxAnimation::GetFrameCount() const
	unsigned int GetFrameCount() const {
		if(_obj.pushFunction("GetFrameCount")) {
			return (_obj.callFunction<unsigned int>());
		}

		return wxAnimation::GetFrameCount();
	};

	// wxSize wxAnimation::GetSize() const
	wxSize GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAnimation::GetSize();
	};

	// bool wxAnimation::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::IsOk();
	};

	// bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	bool Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY) {
		if(_obj.pushFunction("Load")) {
			_obj.pushArg(&stream);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::Load(stream, type);
	};

	// bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	bool LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(name);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::LoadFile(name, type);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

