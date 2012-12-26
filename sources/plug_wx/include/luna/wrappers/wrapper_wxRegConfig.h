#ifndef _WRAPPERS_WRAPPER_WXREGCONFIG_H_
#define _WRAPPERS_WRAPPER_WXREGCONFIG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/msw/regconf.h>

class wrapper_wxRegConfig : public wxRegConfig, public luna_wrapper_base {

public:
		

	~wrapper_wxRegConfig() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRegConfig::GetClassInfo();
	};

	// const wxString & wxConfigBase::GetPath() const
	const wxString & GetPath() const {
		THROW_IF(!_obj.pushFunction("GetPath"),"No implementation for abstract function wxConfigBase::GetPath");
		return *(_obj.callFunction<wxString*>());
	};

	// void wxConfigBase::SetPath(const wxString & strPath)
	void SetPath(const wxString & strPath) {
		THROW_IF(!_obj.pushFunction("SetPath"),"No implementation for abstract function wxConfigBase::SetPath");
		_obj.pushArg(strPath);
		return (_obj.callFunction<void>());
	};

	// bool wxConfigBase::GetFirstEntry(wxString & str, long & index) const
	bool GetFirstEntry(wxString & str, long & index) const {
		THROW_IF(!_obj.pushFunction("GetFirstEntry"),"No implementation for abstract function wxConfigBase::GetFirstEntry");
		_obj.pushArg(str);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::GetFirstGroup(wxString & str, long & index) const
	bool GetFirstGroup(wxString & str, long & index) const {
		THROW_IF(!_obj.pushFunction("GetFirstGroup"),"No implementation for abstract function wxConfigBase::GetFirstGroup");
		_obj.pushArg(str);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::GetNextEntry(wxString & str, long & index) const
	bool GetNextEntry(wxString & str, long & index) const {
		THROW_IF(!_obj.pushFunction("GetNextEntry"),"No implementation for abstract function wxConfigBase::GetNextEntry");
		_obj.pushArg(str);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::GetNextGroup(wxString & str, long & index) const
	bool GetNextGroup(wxString & str, long & index) const {
		THROW_IF(!_obj.pushFunction("GetNextGroup"),"No implementation for abstract function wxConfigBase::GetNextGroup");
		_obj.pushArg(str);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// size_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const
	size_t GetNumberOfEntries(bool bRecursive = false) const {
		THROW_IF(!_obj.pushFunction("GetNumberOfEntries"),"No implementation for abstract function wxConfigBase::GetNumberOfEntries");
		_obj.pushArg(bRecursive);
		return (_obj.callFunction<size_t>());
	};

	// size_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const
	size_t GetNumberOfGroups(bool bRecursive = false) const {
		THROW_IF(!_obj.pushFunction("GetNumberOfGroups"),"No implementation for abstract function wxConfigBase::GetNumberOfGroups");
		_obj.pushArg(bRecursive);
		return (_obj.callFunction<size_t>());
	};

	// wxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString & name) const
	wxConfigBase::EntryType GetEntryType(const wxString & name) const {
		if(_obj.pushFunction("GetEntryType")) {
			_obj.pushArg(name);
			return (wxConfigBase::EntryType)(_obj.callFunction<int>());
		}

		return wxRegConfig::GetEntryType(name);
	};

	// bool wxConfigBase::HasEntry(const wxString & strName) const
	bool HasEntry(const wxString & strName) const {
		THROW_IF(!_obj.pushFunction("HasEntry"),"No implementation for abstract function wxConfigBase::HasEntry");
		_obj.pushArg(strName);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::HasGroup(const wxString & strName) const
	bool HasGroup(const wxString & strName) const {
		THROW_IF(!_obj.pushFunction("HasGroup"),"No implementation for abstract function wxConfigBase::HasGroup");
		_obj.pushArg(strName);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::Flush(bool bCurrentOnly = false)
	bool Flush(bool bCurrentOnly = false) {
		THROW_IF(!_obj.pushFunction("Flush"),"No implementation for abstract function wxConfigBase::Flush");
		_obj.pushArg(bCurrentOnly);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName)
	bool RenameEntry(const wxString & oldName, const wxString & newName) {
		THROW_IF(!_obj.pushFunction("RenameEntry"),"No implementation for abstract function wxConfigBase::RenameEntry");
		_obj.pushArg(oldName);
		_obj.pushArg(newName);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName)
	bool RenameGroup(const wxString & oldName, const wxString & newName) {
		THROW_IF(!_obj.pushFunction("RenameGroup"),"No implementation for abstract function wxConfigBase::RenameGroup");
		_obj.pushArg(oldName);
		_obj.pushArg(newName);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::DeleteAll()
	bool DeleteAll() {
		THROW_IF(!_obj.pushFunction("DeleteAll"),"No implementation for abstract function wxConfigBase::DeleteAll");
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	bool DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true) {
		THROW_IF(!_obj.pushFunction("DeleteEntry"),"No implementation for abstract function wxConfigBase::DeleteEntry");
		_obj.pushArg(key);
		_obj.pushArg(bDeleteGroupIfEmpty);
		return (_obj.callFunction<bool>());
	};

	// bool wxConfigBase::DeleteGroup(const wxString & key)
	bool DeleteGroup(const wxString & key) {
		THROW_IF(!_obj.pushFunction("DeleteGroup"),"No implementation for abstract function wxConfigBase::DeleteGroup");
		_obj.pushArg(key);
		return (_obj.callFunction<bool>());
	};


protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRegConfig::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRegConfig::CloneRefData(data);
	};

public:
	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

