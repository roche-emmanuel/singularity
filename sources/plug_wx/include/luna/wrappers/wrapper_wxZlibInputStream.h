#ifndef _WRAPPERS_WRAPPER_WXZLIBINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXZLIBINPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/zstream.h>

class wrapper_wxZlibInputStream : public wxZlibInputStream {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxZlibInputStream(lua_State* L, lua_Table* dum, wxInputStream & stream, int flags = 3) : wxZlibInputStream(stream, flags), _obj(L,-1) {};
	wrapper_wxZlibInputStream(lua_State* L, lua_Table* dum, wxInputStream * stream, int flags = 3) : wxZlibInputStream(stream, flags), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxZlibInputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return (_obj.callFunction<size_t>());
		}

		return wxZlibInputStream::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::IsSeekable();
	};

	// bool wxInputStream::CanRead() const
	bool CanRead() const {
		if(_obj.pushFunction("CanRead")) {
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::CanRead();
	};

	// bool wxInputStream::Eof() const
	bool Eof() const {
		if(_obj.pushFunction("Eof")) {
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::Eof();
	};

	// size_t wxInputStream::LastRead() const
	size_t LastRead() const {
		if(_obj.pushFunction("LastRead")) {
			return (_obj.callFunction<size_t>());
		}

		return wxZlibInputStream::LastRead();
	};

	// char wxInputStream::Peek()
	char Peek() {
		if(_obj.pushFunction("Peek")) {
			return (char)(_obj.callFunction<int>());
		}

		return wxZlibInputStream::Peek();
	};

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	wxInputStream & Read(void * buffer, size_t size) {
		if(_obj.pushFunction("Read")) {
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxInputStream*>());
		}

		return wxZlibInputStream::Read(buffer, size);
	};

	// long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekI(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekI")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::SeekI(pos, mode);
	};

	// long long wxInputStream::TellI() const
	long long TellI() const {
		if(_obj.pushFunction("TellI")) {
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::TellI();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxZlibInputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxZlibInputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::OnSysTell();
	};

	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
	size_t OnSysRead(void * buffer, size_t bufsize) {
		THROW_IF(!_obj.pushFunction("OnSysRead"),"No implementation for abstract function wxInputStream::OnSysRead");
		_obj.pushArg(buffer);
		_obj.pushArg(bufsize);
		return (_obj.callFunction<size_t>());
	};


};




#endif

