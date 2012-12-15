#ifndef _WRAPPERS_WRAPPER_WXDIRTRAVERSER_H_
#define _WRAPPERS_WRAPPER_WXDIRTRAVERSER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dir.h>

class wrapper_wxDirTraverser : public wxDirTraverser {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// wxDirTraverseResult wxDirTraverser::OnDir(const wxString & dirname)
	wxDirTraverseResult OnDir(const wxString & dirname) {
		THROW_IF(!_obj.pushFunction("OnDir"),"No implementation for abstract function wxDirTraverser::OnDir");
		_obj.pushArg(dirname);
		return (wxDirTraverseResult)(_obj.callFunction<int>());
	};

	// wxDirTraverseResult wxDirTraverser::OnFile(const wxString & filename)
	wxDirTraverseResult OnFile(const wxString & filename) {
		THROW_IF(!_obj.pushFunction("OnFile"),"No implementation for abstract function wxDirTraverser::OnFile");
		_obj.pushArg(filename);
		return (wxDirTraverseResult)(_obj.callFunction<int>());
	};

	// wxDirTraverseResult wxDirTraverser::OnOpenError(const wxString & openerrorname)
	wxDirTraverseResult OnOpenError(const wxString & openerrorname) {
		if(_obj.pushFunction("OnOpenError")) {
			_obj.pushArg(openerrorname);
			return (wxDirTraverseResult)(_obj.callFunction<int>());
		}

		return wxDirTraverser::OnOpenError(openerrorname);
	};




};




#endif

