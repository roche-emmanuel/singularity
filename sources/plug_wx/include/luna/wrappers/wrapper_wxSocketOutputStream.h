#ifndef _WRAPPERS_WRAPPER_WXSOCKETOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXSOCKETOUTPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sckstrm.h>

class wrapper_wxSocketOutputStream : public wxSocketOutputStream, public luna_wrapper_base {

public:
	

	wrapper_wxSocketOutputStream(lua_State* L, lua_Table* dum, wxSocketBase & s) : wxSocketOutputStream(s), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSocketOutputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			return (_obj.callFunction<long long>());
		}

		return wxSocketOutputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return (_obj.callFunction<size_t>());
		}

		return wxSocketOutputStream::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxSocketOutputStream::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			return (_obj.callFunction<bool>());
		}

		return wxSocketOutputStream::IsSeekable();
	};

	// bool wxOutputStream::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxSocketOutputStream::Close();
	};

	// size_t wxOutputStream::LastWrite() const
	size_t LastWrite() const {
		if(_obj.pushFunction("LastWrite")) {
			return (_obj.callFunction<size_t>());
		}

		return wxSocketOutputStream::LastWrite();
	};

	// long long wxOutputStream::SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekO(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekO")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long long>());
		}

		return wxSocketOutputStream::SeekO(pos, mode);
	};

	// long long wxOutputStream::TellO() const
	long long TellO() const {
		if(_obj.pushFunction("TellO")) {
			return (_obj.callFunction<long long>());
		}

		return wxSocketOutputStream::TellO();
	};

	// wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)
	wxOutputStream & Write(const void * buffer, size_t size) {
		if(_obj.pushFunction("Write")) {
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxOutputStream*>());
		}

		return wxSocketOutputStream::Write(buffer, size);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketOutputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketOutputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long long>());
		}

		return wxSocketOutputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			return (_obj.callFunction<long long>());
		}

		return wxSocketOutputStream::OnSysTell();
	};


};




#endif

