#ifndef _WRAPPERS_WRAPPER_MGLBASE_H_
#define _WRAPPERS_WRAPPER_MGLBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/base.h>

class wrapper_mglBase : public mglBase, public luna_wrapper_base {

public:
		

	~wrapper_mglBase() {
		logDEBUG3("Calling delete function for wrapper mglBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglBase(lua_State* L, lua_Table* dum) 
		: mglBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void mglBase::LightScale()
	void LightScale() {
		THROW_IF(!_obj.pushFunction("LightScale"),"No implementation for abstract function mglBase::LightScale");
		_obj.pushArg((mglBase*)this);
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:
	// bool mglBase::Light(bool enable)
	bool Light(bool enable) {
		if(_obj.pushFunction("Light")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return mglBase::Light(enable);
	};

	// void mglBase::SetAmbient(double bright = 0.5)
	void SetAmbient(double bright = 0.5) {
		if(_obj.pushFunction("SetAmbient")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(bright);
			return (_obj.callFunction<void>());
		}

		return mglBase::SetAmbient(bright);
	};

	// bool mglBase::Alpha(bool enable)
	bool Alpha(bool enable) {
		if(_obj.pushFunction("Alpha")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return mglBase::Alpha(enable);
	};

	// void mglBase::StartAutoGroup(const char * arg1)
	void StartAutoGroup(const char * arg1) {
		THROW_IF(!_obj.pushFunction("StartAutoGroup"),"No implementation for abstract function mglBase::StartAutoGroup");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};

	// void mglBase::EndGroup()
	void EndGroup() {
		THROW_IF(!_obj.pushFunction("EndGroup"),"No implementation for abstract function mglBase::EndGroup");
		_obj.pushArg((mglBase*)this);
		return (_obj.callFunction<void>());
	};

	// double mglBase::GetRatio() const
	double GetRatio() const {
		if(_obj.pushFunction("GetRatio")) {
			_obj.pushArg((mglBase*)this);
			return (_obj.callFunction<double>());
		}

		return mglBase::GetRatio();
	};

	// int mglBase::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			_obj.pushArg((mglBase*)this);
			return (_obj.callFunction<int>());
		}

		return mglBase::GetWidth();
	};

	// int mglBase::GetHeight() const
	int GetHeight() const {
		if(_obj.pushFunction("GetHeight")) {
			_obj.pushArg((mglBase*)this);
			return (_obj.callFunction<int>());
		}

		return mglBase::GetHeight();
	};

	// void mglBase::SetQuality(int qual = 2)
	void SetQuality(int qual = 2) {
		if(_obj.pushFunction("SetQuality")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(qual);
			return (_obj.callFunction<void>());
		}

		return mglBase::SetQuality(qual);
	};

	// void mglBase::Reserve(long n)
	void Reserve(long n) {
		if(_obj.pushFunction("Reserve")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(n);
			return (_obj.callFunction<void>());
		}

		return mglBase::Reserve(n);
	};

	// bool mglBase::ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const
	bool ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const {
		if(_obj.pushFunction("ScalePoint")) {
			_obj.pushArg((mglBase*)this);
			_obj.pushArg(&p);
			_obj.pushArg(&n);
			_obj.pushArg(use_nan);
			return (_obj.callFunction<bool>());
		}

		return mglBase::ScalePoint(p, n, use_nan);
	};

	// double mglBase::GetOrgX(char dir) const
	double GetOrgX(char dir) const {
		THROW_IF(!_obj.pushFunction("GetOrgX"),"No implementation for abstract function mglBase::GetOrgX");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(dir);
		return (_obj.callFunction<double>());
	};

	// double mglBase::GetOrgY(char dir) const
	double GetOrgY(char dir) const {
		THROW_IF(!_obj.pushFunction("GetOrgY"),"No implementation for abstract function mglBase::GetOrgY");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(dir);
		return (_obj.callFunction<double>());
	};

	// double mglBase::GetOrgZ(char dir) const
	double GetOrgZ(char dir) const {
		THROW_IF(!_obj.pushFunction("GetOrgZ"),"No implementation for abstract function mglBase::GetOrgZ");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(dir);
		return (_obj.callFunction<double>());
	};

	// void mglBase::mark_plot(long p, char type, double size = 1)
	void mark_plot(long p, char type, double size = 1) {
		THROW_IF(!_obj.pushFunction("mark_plot"),"No implementation for abstract function mglBase::mark_plot");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(p);
		_obj.pushArg(type);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// void mglBase::arrow_plot(long p1, long p2, char st)
	void arrow_plot(long p1, long p2, char st) {
		THROW_IF(!_obj.pushFunction("arrow_plot"),"No implementation for abstract function mglBase::arrow_plot");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(p1);
		_obj.pushArg(p2);
		_obj.pushArg(st);
		return (_obj.callFunction<void>());
	};

	// void mglBase::line_plot(long p1, long p2)
	void line_plot(long p1, long p2) {
		THROW_IF(!_obj.pushFunction("line_plot"),"No implementation for abstract function mglBase::line_plot");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(p1);
		_obj.pushArg(p2);
		return (_obj.callFunction<void>());
	};

	// void mglBase::trig_plot(long p1, long p2, long p3)
	void trig_plot(long p1, long p2, long p3) {
		THROW_IF(!_obj.pushFunction("trig_plot"),"No implementation for abstract function mglBase::trig_plot");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(p1);
		_obj.pushArg(p2);
		_obj.pushArg(p3);
		return (_obj.callFunction<void>());
	};

	// void mglBase::quad_plot(long p1, long p2, long p3, long p4)
	void quad_plot(long p1, long p2, long p3, long p4) {
		THROW_IF(!_obj.pushFunction("quad_plot"),"No implementation for abstract function mglBase::quad_plot");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(p1);
		_obj.pushArg(p2);
		_obj.pushArg(p3);
		_obj.pushArg(p4);
		return (_obj.callFunction<void>());
	};

	// void mglBase::Glyph(double x, double y, double f, int style, long icode, double col)
	void Glyph(double x, double y, double f, int style, long icode, double col) {
		THROW_IF(!_obj.pushFunction("Glyph"),"No implementation for abstract function mglBase::Glyph");
		_obj.pushArg((mglBase*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg(f);
		_obj.pushArg(style);
		_obj.pushArg(icode);
		_obj.pushArg(col);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// double mglBase::text_plot(long p, const wchar_t * text, const char * fnt, double size = -1, double sh = 0, double col = -('k'), bool rot = true)
double text_plot(long, const wchar_t *, const char *, double, double, double, bool) {
	THROW_IF(true,"The function call double mglBase::text_plot(long, const wchar_t *, const char *, double, double, double, bool) is not implemented in wrapper.");
	return double();
};

};




#endif

