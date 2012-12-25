#ifndef _WRAPPERS_WRAPPER_WXVARIANTDATA_H_
#define _WRAPPERS_WRAPPER_WXVARIANTDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/variant.h>

class wrapper_wxVariantData : public wxVariantData, public luna_wrapper_base {

public:
		

	~wrapper_wxVariantData() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:


	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxVariantData::Eq(wxVariantData & data) const
bool Eq(wxVariantData &) const {
	THROW_IF(true,"The function call bool wxVariantData::Eq(wxVariantData &) const is not implemented in wrapper.");
	return bool();
};

public:
// wxString wxVariantData::GetType() const
wxString GetType() const {
	THROW_IF(true,"The function call wxString wxVariantData::GetType() const is not implemented in wrapper.");
	return wxString();
};

};




#endif

