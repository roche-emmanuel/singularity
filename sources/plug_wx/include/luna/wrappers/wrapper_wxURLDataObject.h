#ifndef _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_
#define _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxURLDataObject : public wxURLDataObject, public luna_wrapper_base {

public:
	

	wrapper_wxURLDataObject(lua_State* L, lua_Table* dum, const wxString & url = wxEmptyString) : wxURLDataObject(url), luna_wrapper_base(L) {};




};




#endif

