#ifndef _WRAPPERS_WRAPPER_MGLDATA_H_
#define _WRAPPERS_WRAPPER_MGLDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/data.h>

class wrapper_mglData : public mglData, public luna_wrapper_base {

public:
		

	~wrapper_mglData() {
		logDEBUG3("Calling delete function for wrapper mglData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglData(lua_State* L, lua_Table* dum, const mglData & d) 
		: mglData(d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, const mglDataA * d) 
		: mglData(d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, bool arg1, mglData * d) 
		: mglData(arg1, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, int size, const float * d) 
		: mglData(size, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, int rows, int cols, const float * d) 
		: mglData(rows, cols, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, int size, const double * d) 
		: mglData(size, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, int rows, int cols, const double * d) 
		: mglData(rows, cols, d), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, const double * d, int size) 
		: mglData(d, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, const double * d, int rows, int cols) 
		: mglData(d, rows, cols), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, const char * fname) 
		: mglData(fname), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_mglData(lua_State* L, lua_Table* dum, long xx = 1, long yy = 1, long zz = 1) 
		: mglData(xx, yy, zz), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// double mglData::v(long i, long j = 0, long k = 0) const
	double v(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("v")) {
			_obj.pushArg((mglData*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglData::v(i, j, k);
	};

	// double mglData::vthr(long i) const
	double vthr(long i) const {
		if(_obj.pushFunction("vthr")) {
			_obj.pushArg((mglData*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<double>());
		}

		return mglData::vthr(i);
	};

	// double mglData::dvx(long i, long j = 0, long k = 0) const
	double dvx(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvx")) {
			_obj.pushArg((mglData*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglData::dvx(i, j, k);
	};

	// double mglData::dvy(long i, long j = 0, long k = 0) const
	double dvy(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvy")) {
			_obj.pushArg((mglData*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglData::dvy(i, j, k);
	};

	// double mglData::dvz(long i, long j = 0, long k = 0) const
	double dvz(long i, long j = 0, long k = 0) const {
		if(_obj.pushFunction("dvz")) {
			_obj.pushArg((mglData*)this);
			_obj.pushArg(i);
			_obj.pushArg(j);
			_obj.pushArg(k);
			return (_obj.callFunction<double>());
		}

		return mglData::dvz(i, j, k);
	};

public:
	// Public virtual methods:
	// long mglData::GetNx() const
	long GetNx() const {
		if(_obj.pushFunction("GetNx")) {
			_obj.pushArg((mglData*)this);
			return (_obj.callFunction<long>());
		}

		return mglData::GetNx();
	};

	// long mglData::GetNy() const
	long GetNy() const {
		if(_obj.pushFunction("GetNy")) {
			_obj.pushArg((mglData*)this);
			return (_obj.callFunction<long>());
		}

		return mglData::GetNy();
	};

	// long mglData::GetNz() const
	long GetNz() const {
		if(_obj.pushFunction("GetNz")) {
			_obj.pushArg((mglData*)this);
			return (_obj.callFunction<long>());
		}

		return mglData::GetNz();
	};

	// double mglData::Maximal() const
	double Maximal() const {
		if(_obj.pushFunction("Maximal")) {
			_obj.pushArg((mglData*)this);
			return (_obj.callFunction<double>());
		}

		return mglData::Maximal();
	};

	// double mglData::Minimal() const
	double Minimal() const {
		if(_obj.pushFunction("Minimal")) {
			_obj.pushArg((mglData*)this);
			return (_obj.callFunction<double>());
		}

		return mglData::Minimal();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

