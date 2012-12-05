#ifndef _WRAPPERS_WRAPPER_WXMEMORYINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXMEMORYINPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/mstream.h>

class wrapper_wxMemoryInputStream : public wxMemoryInputStream {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, const void * data, size_t len) : wxMemoryInputStream(data, len), _obj(L,-1) {};
	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, const wxMemoryOutputStream & stream) : wxMemoryInputStream(stream), _obj(L,-1) {};
	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, wxInputStream & stream, long len = wxInvalidOffset) : wxMemoryInputStream(stream, len), _obj(L,-1) {};

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

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxStreamBase::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			return (_obj.callFunction<bool>());
		}

		return wxStreamBase::IsSeekable();
	};

	// bool wxInputStream::CanRead() const
	bool CanRead() const {
		if(_obj.pushFunction("CanRead")) {
			return (_obj.callFunction<bool>());
		}

		return wxInputStream::CanRead();
	};

	// bool wxInputStream::Eof() const
	bool Eof() const {
		if(_obj.pushFunction("Eof")) {
			return (_obj.callFunction<bool>());
		}

		return wxInputStream::Eof();
	};

	// size_t wxInputStream::LastRead() const
	size_t LastRead() const {
		if(_obj.pushFunction("LastRead")) {
			return (_obj.callFunction<size_t>());
		}

		return wxInputStream::LastRead();
	};

	// char wxInputStream::Peek()
	char Peek() {
		if(_obj.pushFunction("Peek")) {
			return (_obj.callFunction<char>());
		}

		return wxInputStream::Peek();
	};

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	wxInputStream & Read(void * buffer, size_t size) {
		if(_obj.pushFunction("Read")) {
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxInputStream*>());
		}

		return wxInputStream::Read(buffer, size);
	};

	// long wxInputStream::SeekI(long pos, wxSeekMode mode = ::wxFromStart)
	long SeekI(long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekI")) {
			_obj.pushArg(pos);
			_obj.pushArg(mode);
			return (_obj.callFunction<long>());
		}

		return wxInputStream::SeekI(pos, mode);
	};

	// long wxInputStream::TellI() const
	long TellI() const {
		if(_obj.pushFunction("TellI")) {
			return (_obj.callFunction<long>());
		}

		return wxInputStream::TellI();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// long wxStreamBase::OnSysSeek(long pos, wxSeekMode mode)
	// long wxStreamBase::OnSysTell() const
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

};




#endif

