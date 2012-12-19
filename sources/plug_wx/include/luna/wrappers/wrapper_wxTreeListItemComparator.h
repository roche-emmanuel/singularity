#ifndef _WRAPPERS_WRAPPER_WXTREELISTITEMCOMPARATOR_H_
#define _WRAPPERS_WRAPPER_WXTREELISTITEMCOMPARATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/treelist.h>

class wrapper_wxTreeListItemComparator : public wxTreeListItemComparator, public luna_wrapper_base {

public:
	

	wrapper_wxTreeListItemComparator(lua_State* L, lua_Table* dum) : wxTreeListItemComparator(), luna_wrapper_base(L) {};

	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
	int Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second) {
		THROW_IF(!_obj.pushFunction("Compare"),"No implementation for abstract function wxTreeListItemComparator::Compare");
		_obj.pushArg(treelist);
		_obj.pushArg(column);
		_obj.pushArg(first);
		_obj.pushArg(second);
		return (_obj.callFunction<int>());
	};




};




#endif

