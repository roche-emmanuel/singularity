#ifndef _WRAPPERS_WRAPPER_WXTAROUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXTAROUTPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/tarstrm.h>

class wrapper_wxTarOutputStream : public wxTarOutputStream {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// bool wxTarOutputStream::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxTarOutputStream::Close();
	};

	// bool wxTarOutputStream::CloseEntry()
	bool CloseEntry() {
		if(_obj.pushFunction("CloseEntry")) {
			return (_obj.callFunction<bool>());
		}

		return wxTarOutputStream::CloseEntry();
	};

	// bool wxTarOutputStream::PutNextDirEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now ())
	bool PutNextDirEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now ()) {
		if(_obj.pushFunction("PutNextDirEntry")) {
			_obj.pushArg(name);
			_obj.pushArg(&dt);
			return (_obj.callFunction<bool>());
		}

		return wxTarOutputStream::PutNextDirEntry(name, dt);
	};

	// bool wxTarOutputStream::PutNextEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset)
	bool PutNextEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset) {
		if(_obj.pushFunction("PutNextEntry")) {
			_obj.pushArg(name);
			_obj.pushArg(&dt);
			_obj.pushArg(size);
			return (_obj.callFunction<bool>());
		}

		return wxTarOutputStream::PutNextEntry(name, dt, size);
	};




};




#endif

