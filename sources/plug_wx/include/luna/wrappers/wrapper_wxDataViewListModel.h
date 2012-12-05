#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWLISTMODEL_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWLISTMODEL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewListModel : public wxDataViewListModel {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDataViewListModel(lua_State* L, lua_Table* dum) : wxDataViewListModel(), _obj(L,-1) {};

	// bool wxDataViewModel::Cleared()
	bool Cleared() {
		if(_obj.pushFunction("Cleared")) {
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::Cleared();
	};

	// int wxDataViewModel::Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	int Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const {
		if(_obj.pushFunction("Compare")) {
			_obj.pushArg(&item1);
			_obj.pushArg(&item2);
			_obj.pushArg(column);
			_obj.pushArg(ascending);
			return (_obj.callFunction<int>());
		}

		return wxDataViewModel::Compare(item1, item2, column, ascending);
	};

	// bool wxDataViewModel::GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	bool GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const {
		if(_obj.pushFunction("GetAttr")) {
			_obj.pushArg(&item);
			_obj.pushArg(col);
			_obj.pushArg(&attr);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::GetAttr(item, col, attr);
	};

	// bool wxDataViewModel::IsEnabled(const wxDataViewItem & item, unsigned int col) const
	bool IsEnabled(const wxDataViewItem & item, unsigned int col) const {
		if(_obj.pushFunction("IsEnabled")) {
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::IsEnabled(item, col);
	};

	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	unsigned int GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const {
		THROW_IF(!_obj.pushFunction("GetChildren"),"No implementation for abstract function wxDataViewModel::GetChildren");
		_obj.pushArg(&item);
		_obj.pushArg(&children);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int wxDataViewModel::GetColumnCount() const
	unsigned int GetColumnCount() const {
		THROW_IF(!_obj.pushFunction("GetColumnCount"),"No implementation for abstract function wxDataViewModel::GetColumnCount");
		return (_obj.callFunction<unsigned int>());
	};

	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	wxString GetColumnType(unsigned int col) const {
		THROW_IF(!_obj.pushFunction("GetColumnType"),"No implementation for abstract function wxDataViewModel::GetColumnType");
		_obj.pushArg(col);
		return *(_obj.callFunction<wxString*>());
	};

	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	wxDataViewItem GetParent(const wxDataViewItem & item) const {
		THROW_IF(!_obj.pushFunction("GetParent"),"No implementation for abstract function wxDataViewModel::GetParent");
		_obj.pushArg(&item);
		return *(_obj.callFunction<wxDataViewItem*>());
	};

	// bool wxDataViewModel::HasContainerColumns(const wxDataViewItem & item) const
	bool HasContainerColumns(const wxDataViewItem & item) const {
		if(_obj.pushFunction("HasContainerColumns")) {
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::HasContainerColumns(item);
	};

	// bool wxDataViewModel::HasDefaultCompare() const
	bool HasDefaultCompare() const {
		if(_obj.pushFunction("HasDefaultCompare")) {
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::HasDefaultCompare();
	};

	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	bool IsContainer(const wxDataViewItem & item) const {
		THROW_IF(!_obj.pushFunction("IsContainer"),"No implementation for abstract function wxDataViewModel::IsContainer");
		_obj.pushArg(&item);
		return (_obj.callFunction<bool>());
	};

	// void wxDataViewModel::Resort()
	void Resort() {
		if(_obj.pushFunction("Resort")) {
			return (_obj.callFunction<void>());
		}

		return wxDataViewModel::Resort();
	};

	// bool wxDataViewModel::ValueChanged(const wxDataViewItem & item, unsigned int col)
	bool ValueChanged(const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("ValueChanged")) {
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModel::ValueChanged(item, col);
	};




};




#endif

