#ifndef _WRAPPERS_WRAPPER_WXWITHIMAGES_H_
#define _WRAPPERS_WRAPPER_WXWITHIMAGES_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/withimages.h>

class wrapper_wxWithImages : public wxWithImages, public luna_wrapper_base {

public:
	

	wrapper_wxWithImages(lua_State* L, lua_Table* dum) : wxWithImages(), luna_wrapper_base(L) {};

	// void wxWithImages::SetImageList(wxImageList * imageList)
	void SetImageList(wxImageList * imageList) {
		if(_obj.pushFunction("SetImageList")) {
			_obj.pushArg(imageList);
			return (_obj.callFunction<void>());
		}

		return wxWithImages::SetImageList(imageList);
	};




};




#endif

