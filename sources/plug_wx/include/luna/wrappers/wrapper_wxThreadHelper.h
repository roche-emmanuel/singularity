#ifndef _WRAPPERS_WRAPPER_WXTHREADHELPER_H_
#define _WRAPPERS_WRAPPER_WXTHREADHELPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/thread.h>

class wrapper_wxThreadHelper : public wxThreadHelper, public luna_wrapper_base {

public:
	





public:
// void * wxThreadHelper::Entry()
void * Entry() {
	THROW_IF(true,"The function call void * wxThreadHelper::Entry() is not implemented in wrapper.");
};

};




#endif

