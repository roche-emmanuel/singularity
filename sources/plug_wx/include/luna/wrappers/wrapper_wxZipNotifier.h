#ifndef _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_
#define _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/zipstrm.h>

class wrapper_wxZipNotifier : public wxZipNotifier, public luna_wrapper_base {

public:
	





public:
// void wxZipNotifier::OnEntryUpdated(wxZipEntry & entry)
void OnEntryUpdated(wxZipEntry &) {
	THROW_IF(true,"The function call void wxZipNotifier::OnEntryUpdated(wxZipEntry &) is not implemented in wrapper.");
};

};




#endif

