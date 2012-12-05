#ifndef _WRAPPERS_WRAPPER_WXPROPERTYGRIDINTERFACE_H_
#define _WRAPPERS_WRAPPER_WXPROPERTYGRIDINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/propgridiface.h>

class wrapper_wxPropertyGridInterface : public wxPropertyGridInterface {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPropertyGridInterface(lua_State* L, lua_Table* dum) : wxPropertyGridInterface(), _obj(L,-1) {};

	// void wxPropertyGridInterface::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxPropertyGridInterface::Clear");
		return (_obj.callFunction<void>());
	};




};




#endif

