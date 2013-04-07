#ifndef _WRAPPERS_WRAPPER_MGLDATAA_H_
#define _WRAPPERS_WRAPPER_MGLDATAA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <mgl2/base.h>

class wrapper_mglDataA : public mglDataA, public luna_wrapper_base {

public:
		

	~wrapper_mglDataA() {
		logDEBUG3("Calling delete function for wrapper mglDataA");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglDataA*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglDataA(lua_State* L, lua_Table* dum) 
		: mglDataA(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataA*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double mglDataA::v(long i, long j = 0, long k = 0) const
	double v(long i, long j = 0, long k = 0) const {
		THROW_IF(!_obj.pushFunction("v"),"No implementation for abstract function mglDataA::v");
		_obj.pushArg((mglDataA*)this);
		_obj.pushArg(i);
		_obj.pushArg(j);
		_obj.pushArg(k);
		return (_obj.callFunction<double>());
	};

	// double mglDataA::vthr(long i) const
	double vthr(long i) const {
		THROW_IF(!_obj.pushFunction("vthr"),"No implementation for abstract function mglDataA::vthr");
		_obj.pushArg((mglDataA*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<double>());
	};

	// long mglDataA::GetNx() const
	long GetNx() const {
		THROW_IF(!_obj.pushFunction("GetNx"),"No implementation for abstract function mglDataA::GetNx");
		_obj.pushArg((mglDataA*)this);
		return (_obj.callFunction<long>());
	};

	// long mglDataA::GetNy() const
	long GetNy() const {
		THROW_IF(!_obj.pushFunction("GetNy"),"No implementation for abstract function mglDataA::GetNy");
		_obj.pushArg((mglDataA*)this);
		return (_obj.callFunction<long>());
	};

	// long mglDataA::GetNz() const
	long GetNz() const {
		THROW_IF(!_obj.pushFunction("GetNz"),"No implementation for abstract function mglDataA::GetNz");
		_obj.pushArg((mglDataA*)this);
		return (_obj.callFunction<long>());
	};

	// double mglDataA::Maximal() const
	double Maximal() const {
		THROW_IF(!_obj.pushFunction("Maximal"),"No implementation for abstract function mglDataA::Maximal");
		_obj.pushArg((mglDataA*)this);
		return (_obj.callFunction<double>());
	};

	// double mglDataA::Minimal() const
	double Minimal() const {
		THROW_IF(!_obj.pushFunction("Minimal"),"No implementation for abstract function mglDataA::Minimal");
		_obj.pushArg((mglDataA*)this);
		return (_obj.callFunction<double>());
	};

	// double mglDataA::dvx(long i, long j = 0, long k = 0) const
	double dvx(long i, long j = 0, long k = 0) const {
		THROW_IF(!_obj.pushFunction("dvx"),"No implementation for abstract function mglDataA::dvx");
		_obj.pushArg((mglDataA*)this);
		_obj.pushArg(i);
		_obj.pushArg(j);
		_obj.pushArg(k);
		return (_obj.callFunction<double>());
	};

	// double mglDataA::dvy(long i, long j = 0, long k = 0) const
	double dvy(long i, long j = 0, long k = 0) const {
		THROW_IF(!_obj.pushFunction("dvy"),"No implementation for abstract function mglDataA::dvy");
		_obj.pushArg((mglDataA*)this);
		_obj.pushArg(i);
		_obj.pushArg(j);
		_obj.pushArg(k);
		return (_obj.callFunction<double>());
	};

	// double mglDataA::dvz(long i, long j = 0, long k = 0) const
	double dvz(long i, long j = 0, long k = 0) const {
		THROW_IF(!_obj.pushFunction("dvz"),"No implementation for abstract function mglDataA::dvz");
		_obj.pushArg((mglDataA*)this);
		_obj.pushArg(i);
		_obj.pushArg(j);
		_obj.pushArg(k);
		return (_obj.callFunction<double>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

