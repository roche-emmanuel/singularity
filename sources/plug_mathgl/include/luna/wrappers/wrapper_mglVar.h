#ifndef _WRAPPERS_WRAPPER_MGLVAR_H_
#define _WRAPPERS_WRAPPER_MGLVAR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <mgl2/mgl.h>

class wrapper_mglVar : public mglVar, public luna_wrapper_base {

public:
		

	~wrapper_mglVar() {
		logDEBUG3("Calling delete function for wrapper mglVar");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglVar*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglVar(lua_State* L, lua_Table* dum) 
		: mglVar(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglVar*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// double mglData::v(long i, long j = 0, long k = 0) const
	double v(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("v")) {
			_obj.pushArg((mglVar*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglVar::v(i, j, k);
	};

	// double mglData::vthr(long i) const
	double vthr(long i) const {
		if(_obj.pushFunction("vthr")) {
			_obj.pushArg((mglVar*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<double>());
		}

		return mglVar::vthr(i);
	};

	// double mglData::dvx(long i, long j = 0, long k = 0) const
	double dvx(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvx")) {
			_obj.pushArg((mglVar*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglVar::dvx(i, j, k);
	};

	// double mglData::dvy(long i, long j = 0, long k = 0) const
	double dvy(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvy")) {
			_obj.pushArg((mglVar*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglVar::dvy(i, j, k);
	};

	// double mglData::dvz(long i, long j = 0, long k = 0) const
	double dvz(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvz")) {
			_obj.pushArg((mglVar*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglVar::dvz(i, j, k);
	};

public:
	// Public virtual methods:
	// long mglData::GetNx() const
	long GetNx() const {
		if(_obj.pushFunction("GetNx")) {
			_obj.pushArg((mglVar*)this);
			return (_obj.callFunction<long>());
		}

		return mglVar::GetNx();
	};

	// long mglData::GetNy() const
	long GetNy() const {
		if(_obj.pushFunction("GetNy")) {
			_obj.pushArg((mglVar*)this);
			return (_obj.callFunction<long>());
		}

		return mglVar::GetNy();
	};

	// long mglData::GetNz() const
	long GetNz() const {
		if(_obj.pushFunction("GetNz")) {
			_obj.pushArg((mglVar*)this);
			return (_obj.callFunction<long>());
		}

		return mglVar::GetNz();
	};

	// double mglData::Maximal() const
	double Maximal() const {
		if(_obj.pushFunction("Maximal")) {
			_obj.pushArg((mglVar*)this);
			return (_obj.callFunction<double>());
		}

		return mglVar::Maximal();
	};

	// double mglData::Minimal() const
	double Minimal() const {
		if(_obj.pushFunction("Minimal")) {
			_obj.pushArg((mglVar*)this);
			return (_obj.callFunction<double>());
		}

		return mglVar::Minimal();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

