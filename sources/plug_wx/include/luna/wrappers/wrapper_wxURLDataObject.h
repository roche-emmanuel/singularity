#ifndef _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_
#define _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxURLDataObject : public wxURLDataObject, public luna_wrapper_base {

public:
		

	~wrapper_wxURLDataObject() {
		logDEBUG3("Calling delete function for wrapper wxURLDataObject");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxURLDataObject(lua_State* L, lua_Table* dum, const wxString & url = wxEmptyString) : wxURLDataObject(url), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
size_t GetFormatCount(wxDataObject::Direction) const {
	THROW_IF(true,"The function call size_t wxDataObject::GetFormatCount(wxDataObject::Direction) const is not implemented in wrapper.");
	return size_t();
};

public:
// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
wxDataFormat GetPreferredFormat(wxDataObject::Direction) const {
	THROW_IF(true,"The function call wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction) const is not implemented in wrapper.");
	return wxDataFormat();
};

public:
// void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
void GetAllFormats(wxDataFormat *, wxDataObject::Direction) const {
	THROW_IF(true,"The function call void wxTextDataObject::GetAllFormats(wxDataFormat *, wxDataObject::Direction) const is not implemented in wrapper.");
};

};




#endif

