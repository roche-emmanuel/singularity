#ifndef _WRAPPERS_WRAPPER_MGLDATAC_H_
#define _WRAPPERS_WRAPPER_MGLDATAC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <mgl2/datac.h>

class wrapper_mglDataC : public mglDataC, public luna_wrapper_base {

public:
		

	~wrapper_mglDataC() {
		logDEBUG3("Calling delete function for wrapper mglDataC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglDataC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglDataC(lua_State* L, lua_Table* dum, const mglDataC & d) 
		: mglDataC(d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, const mglDataA * d) 
		: mglDataC(d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, bool arg1, mglDataC * d) 
		: mglDataC(arg1, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int size, const dual * d) 
		: mglDataC(size, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int rows, int cols, const dual * d) 
		: mglDataC(rows, cols, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int size, const double * d) 
		: mglDataC(size, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int rows, int cols, const double * d) 
		: mglDataC(rows, cols, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int size, const float * d) 
		: mglDataC(size, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, int rows, int cols, const float * d) 
		: mglDataC(rows, cols, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, const char * fname) 
		: mglDataC(fname), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglDataC(lua_State* L, lua_Table* dum, long xx = 1, long yy = 1, long zz = 1) 
		: mglDataC(xx, yy, zz), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDataC*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// double mglDataC::v(long i, long j = 0, long k = 0) const
	double v(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("v")) {
			_obj.pushArg((mglDataC*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglDataC::v(i, j, k);
	};

	// double mglDataC::vthr(long i) const
	double vthr(long i) const {
		if(_obj.pushFunction("vthr")) {
			_obj.pushArg((mglDataC*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<double>());
		}

		return mglDataC::vthr(i);
	};

	// double mglDataC::dvx(long i, long j = 0, long k = 0) const
	double dvx(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvx")) {
			_obj.pushArg((mglDataC*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglDataC::dvx(i, j, k);
	};

	// double mglDataC::dvy(long i, long j = 0, long k = 0) const
	double dvy(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvy")) {
			_obj.pushArg((mglDataC*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglDataC::dvy(i, j, k);
	};

	// double mglDataC::dvz(long i, long j = 0, long k = 0) const
	double dvz(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvz")) {
			_obj.pushArg((mglDataC*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglDataC::dvz(i, j, k);
	};

public:
	// Public virtual methods:
	// long mglDataC::GetNx() const
	long GetNx() const {
		if(_obj.pushFunction("GetNx")) {
			_obj.pushArg((mglDataC*)this);
			return (_obj.callFunction<long>());
		}

		return mglDataC::GetNx();
	};

	// long mglDataC::GetNy() const
	long GetNy() const {
		if(_obj.pushFunction("GetNy")) {
			_obj.pushArg((mglDataC*)this);
			return (_obj.callFunction<long>());
		}

		return mglDataC::GetNy();
	};

	// long mglDataC::GetNz() const
	long GetNz() const {
		if(_obj.pushFunction("GetNz")) {
			_obj.pushArg((mglDataC*)this);
			return (_obj.callFunction<long>());
		}

		return mglDataC::GetNz();
	};

	// double mglDataC::Maximal() const
	double Maximal() const {
		if(_obj.pushFunction("Maximal")) {
			_obj.pushArg((mglDataC*)this);
			return (_obj.callFunction<double>());
		}

		return mglDataC::Maximal();
	};

	// double mglDataC::Minimal() const
	double Minimal() const {
		if(_obj.pushFunction("Minimal")) {
			_obj.pushArg((mglDataC*)this);
			return (_obj.callFunction<double>());
		}

		return mglDataC::Minimal();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

