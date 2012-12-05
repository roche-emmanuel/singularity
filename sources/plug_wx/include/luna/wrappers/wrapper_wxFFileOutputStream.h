#ifndef _WRAPPERS_WRAPPER_WXFFILEOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXFFILEOUTPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/wfstream.h>

class wrapper_wxFFileOutputStream : public wxFFileOutputStream {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFFileOutputStream(lua_State* L, lua_Table* dum, const wxString & filename, const wxString & mode = "wb") : wxFFileOutputStream(filename, mode), _obj(L,-1) {};
	wrapper_wxFFileOutputStream(lua_State* L, lua_Table* dum, wxFFile & file) : wxFFileOutputStream(file), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// long wxStreamBase::GetLength() const
	long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			return (_obj.callFunction<long>());
		}

		return wxStreamBase::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return (_obj.callFunction<size_t>());
		}

		return wxStreamBase::GetSize();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			return (_obj.callFunction<bool>());
		}

		return wxStreamBase::IsSeekable();
	};

	// bool wxOutputStream::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxOutputStream::Close();
	};

	// size_t wxOutputStream::LastWrite() const
	size_t LastWrite() const {
		if(_obj.pushFunction("LastWrite")) {
			return (_obj.callFunction<size_t>());
		}

		return wxOutputStream::LastWrite();
	};

	// long wxOutputStream::SeekO(long pos, wxSeekMode mode = ::wxFromStart)
	long SeekO(long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekO")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long>());
		}

		return wxOutputStream::SeekO(pos, mode);
	};

	// long wxOutputStream::TellO() const
	long TellO() const {
		if(_obj.pushFunction("TellO")) {
			return (_obj.callFunction<long>());
		}

		return wxOutputStream::TellO();
	};

	// wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)
	wxOutputStream & Write(const void * buffer, size_t size) {
		if(_obj.pushFunction("Write")) {
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxOutputStream*>());
		}

		return wxOutputStream::Write(buffer, size);
	};

	// bool wxFFileOutputStream::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxFFileOutputStream::IsOk();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// long wxStreamBase::OnSysSeek(long pos, wxSeekMode mode)
	// long wxStreamBase::OnSysTell() const

};




#endif

