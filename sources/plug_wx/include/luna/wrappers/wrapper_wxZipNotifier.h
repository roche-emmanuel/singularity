#ifndef _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_
#define _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/zipstrm.h>

class wrapper_wxZipNotifier : public wxZipNotifier {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxZipNotifier(lua_State* L, lua_Table* dum) : wxZipNotifier(), _obj(L,-1) {};




};




#endif

