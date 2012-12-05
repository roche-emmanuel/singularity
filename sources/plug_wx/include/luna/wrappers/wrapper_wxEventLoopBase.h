#ifndef _WRAPPERS_WRAPPER_WXEVENTLOOPBASE_H_
#define _WRAPPERS_WRAPPER_WXEVENTLOOPBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/evtloop.h>

class wrapper_wxEventLoopBase : public wxEventLoopBase {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxEventLoopBase(lua_State* L, lua_Table* dum) : wxEventLoopBase(), _obj(L,-1) {};

	// int wxEventLoopBase::Run()
	int Run() {
		THROW_IF(!_obj.pushFunction("Run"),"No implementation for abstract function wxEventLoopBase::Run");
		return (_obj.callFunction<int>());
	};

	// bool wxEventLoopBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsOk();
	};

	// void wxEventLoopBase::Exit(int rc = 0)
	void Exit(int rc = 0) {
		THROW_IF(!_obj.pushFunction("Exit"),"No implementation for abstract function wxEventLoopBase::Exit");
		_obj.pushArg(rc);
		return (_obj.callFunction<void>());
	};

	// bool wxEventLoopBase::Pending() const
	bool Pending() const {
		THROW_IF(!_obj.pushFunction("Pending"),"No implementation for abstract function wxEventLoopBase::Pending");
		return (_obj.callFunction<bool>());
	};

	// bool wxEventLoopBase::Dispatch()
	bool Dispatch() {
		THROW_IF(!_obj.pushFunction("Dispatch"),"No implementation for abstract function wxEventLoopBase::Dispatch");
		return (_obj.callFunction<bool>());
	};

	// int wxEventLoopBase::DispatchTimeout(unsigned long timeout)
	int DispatchTimeout(unsigned long timeout) {
		THROW_IF(!_obj.pushFunction("DispatchTimeout"),"No implementation for abstract function wxEventLoopBase::DispatchTimeout");
		_obj.pushArg(timeout);
		return (_obj.callFunction<int>());
	};

	// void wxEventLoopBase::WakeUp()
	void WakeUp() {
		THROW_IF(!_obj.pushFunction("WakeUp"),"No implementation for abstract function wxEventLoopBase::WakeUp");
		return (_obj.callFunction<void>());
	};

	// void wxEventLoopBase::WakeUpIdle()
	void WakeUpIdle() {
		if(_obj.pushFunction("WakeUpIdle")) {
			return (_obj.callFunction<void>());
		}

		return wxEventLoopBase::WakeUpIdle();
	};

	// bool wxEventLoopBase::ProcessIdle()
	bool ProcessIdle() {
		if(_obj.pushFunction("ProcessIdle")) {
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::ProcessIdle();
	};

	// bool wxEventLoopBase::IsYielding() const
	bool IsYielding() const {
		if(_obj.pushFunction("IsYielding")) {
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsYielding();
	};

	// bool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory cat) const
	bool IsEventAllowedInsideYield(wxEventCategory cat) const {
		if(_obj.pushFunction("IsEventAllowedInsideYield")) {
			_obj.pushArg(cat);
			return (_obj.callFunction<bool>());
		}

		return wxEventLoopBase::IsEventAllowedInsideYield(cat);
	};


protected:
	// void wxEventLoopBase::OnExit()

};




#endif

