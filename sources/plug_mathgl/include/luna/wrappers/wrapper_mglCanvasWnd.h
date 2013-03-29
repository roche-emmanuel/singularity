#ifndef _WRAPPERS_WRAPPER_MGLCANVASWND_H_
#define _WRAPPERS_WRAPPER_MGLCANVASWND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/canvas_wnd.h>

class wrapper_mglCanvasWnd : public mglCanvasWnd, public luna_wrapper_base {

public:
		

	~wrapper_mglCanvasWnd() {
		logDEBUG3("Calling delete function for wrapper mglCanvasWnd");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglCanvasWnd*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglCanvasWnd(lua_State* L, lua_Table* dum) 
		: mglCanvasWnd(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool mglCanvas::ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const
	bool ScalePoint(mglPoint & p, mglPoint & n, bool use_nan = true) const {
		if(_obj.pushFunction("ScalePoint")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(&p);
			_obj.pushArg(&n);
			_obj.pushArg(use_nan);
			return (_obj.callFunction<bool>());
		}

		return mglCanvasWnd::ScalePoint(p, n, use_nan);
	};

	// void mglCanvas::LightScale()
	void LightScale() {
		if(_obj.pushFunction("LightScale")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::LightScale();
	};

	// double mglCanvas::GetOrgX(char dir) const
	double GetOrgX(char dir) const {
		if(_obj.pushFunction("GetOrgX")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(dir);
			return (_obj.callFunction<double>());
		}

		return mglCanvasWnd::GetOrgX(dir);
	};

	// double mglCanvas::GetOrgY(char dir) const
	double GetOrgY(char dir) const {
		if(_obj.pushFunction("GetOrgY")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(dir);
			return (_obj.callFunction<double>());
		}

		return mglCanvasWnd::GetOrgY(dir);
	};

	// double mglCanvas::GetOrgZ(char dir) const
	double GetOrgZ(char dir) const {
		if(_obj.pushFunction("GetOrgZ")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(dir);
			return (_obj.callFunction<double>());
		}

		return mglCanvasWnd::GetOrgZ(dir);
	};

	// void mglCanvas::mark_plot(long p, char type, double size = 1)
	void mark_plot(long p, char type, double size = 1) {
		if(_obj.pushFunction("mark_plot")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p);
			_obj.pushArg(type);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::mark_plot(p, type, size);
	};

	// void mglCanvas::arrow_plot(long p1, long p2, char st)
	void arrow_plot(long p1, long p2, char st) {
		if(_obj.pushFunction("arrow_plot")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(st);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::arrow_plot(p1, p2, st);
	};

	// void mglCanvas::line_plot(long p1, long p2)
	void line_plot(long p1, long p2) {
		if(_obj.pushFunction("line_plot")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::line_plot(p1, p2);
	};

	// void mglCanvas::trig_plot(long p1, long p2, long p3)
	void trig_plot(long p1, long p2, long p3) {
		if(_obj.pushFunction("trig_plot")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(p3);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::trig_plot(p1, p2, p3);
	};

	// void mglCanvas::quad_plot(long p1, long p2, long p3, long p4)
	void quad_plot(long p1, long p2, long p3, long p4) {
		if(_obj.pushFunction("quad_plot")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(p3);
			_obj.pushArg(p4);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::quad_plot(p1, p2, p3, p4);
	};

	// void mglCanvas::Glyph(double x, double y, double f, int style, long icode, double col)
	void Glyph(double x, double y, double f, int style, long icode, double col) {
		if(_obj.pushFunction("Glyph")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(f);
			_obj.pushArg(style);
			_obj.pushArg(icode);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Glyph(x, y, f, style, icode, col);
	};

	// void mglCanvas::line_draw(long p1, long p2, mglDrawReg * d)
	void line_draw(long p1, long p2, mglDrawReg * d) {
		if(_obj.pushFunction("line_draw")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(d);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::line_draw(p1, p2, d);
	};

	// void mglCanvas::trig_draw(long p1, long p2, long p3, bool anorm, mglDrawReg * d)
	void trig_draw(long p1, long p2, long p3, bool anorm, mglDrawReg * d) {
		if(_obj.pushFunction("trig_draw")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(p3);
			_obj.pushArg(anorm);
			_obj.pushArg(d);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::trig_draw(p1, p2, p3, anorm, d);
	};

	// void mglCanvas::quad_draw(long p1, long p2, long p3, long p4, mglDrawReg * d)
	void quad_draw(long p1, long p2, long p3, long p4, mglDrawReg * d) {
		if(_obj.pushFunction("quad_draw")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p1);
			_obj.pushArg(p2);
			_obj.pushArg(p3);
			_obj.pushArg(p4);
			_obj.pushArg(d);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::quad_draw(p1, p2, p3, p4, d);
	};

	// void mglCanvas::pnt_draw(long p, mglDrawReg * d)
	void pnt_draw(long p, mglDrawReg * d) {
		if(_obj.pushFunction("pnt_draw")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(p);
			_obj.pushArg(d);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::pnt_draw(p, d);
	};

public:
	// Public virtual methods:
	// void mglBase::SetAmbient(double bright = 0.5)
	void SetAmbient(double bright = 0.5) {
		if(_obj.pushFunction("SetAmbient")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(bright);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::SetAmbient(bright);
	};

	// bool mglBase::Alpha(bool enable)
	bool Alpha(bool enable) {
		if(_obj.pushFunction("Alpha")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return mglCanvasWnd::Alpha(enable);
	};

	// void mglBase::SetQuality(int qual = 2)
	void SetQuality(int qual = 2) {
		if(_obj.pushFunction("SetQuality")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(qual);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::SetQuality(qual);
	};

	// void mglBase::Reserve(long n)
	void Reserve(long n) {
		if(_obj.pushFunction("Reserve")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(n);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Reserve(n);
	};

	// void mglCanvas::View(double tetx, double tetz, double tety = 0)
	void View(double tetx, double tetz, double tety = 0) {
		if(_obj.pushFunction("View")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(tetx);
			_obj.pushArg(tetz);
			_obj.pushArg(tety);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::View(tetx, tetz, tety);
	};

	// void mglCanvas::Zoom(double x1, double y1, double x2, double y2)
	void Zoom(double x1, double y1, double x2, double y2) {
		if(_obj.pushFunction("Zoom")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(x1);
			_obj.pushArg(y1);
			_obj.pushArg(x2);
			_obj.pushArg(y2);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Zoom(x1, y1, x2, y2);
	};

	// void mglCanvas::Clf(mglColor back = WC)
	void Clf(mglColor back = WC) {
		if(_obj.pushFunction("Clf")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(&back);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Clf(back);
	};

	// double mglCanvas::GetRatio() const
	double GetRatio() const {
		if(_obj.pushFunction("GetRatio")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<double>());
		}

		return mglCanvasWnd::GetRatio();
	};

	// int mglCanvas::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<int>());
		}

		return mglCanvasWnd::GetWidth();
	};

	// int mglCanvas::GetHeight() const
	int GetHeight() const {
		if(_obj.pushFunction("GetHeight")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<int>());
		}

		return mglCanvasWnd::GetHeight();
	};

	// int mglCanvas::NewFrame()
	int NewFrame() {
		if(_obj.pushFunction("NewFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<int>());
		}

		return mglCanvasWnd::NewFrame();
	};

	// void mglCanvas::Finish(bool fast = true)
	void Finish(bool fast = true) {
		if(_obj.pushFunction("Finish")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(fast);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Finish(fast);
	};

	// void mglCanvas::Fog(double d, double dz = 0.25)
	void Fog(double d, double dz = 0.25) {
		if(_obj.pushFunction("Fog")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(d);
			_obj.pushArg(dz);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Fog(d, dz);
	};

	// void mglCanvas::Light(int n, bool enable)
	void Light(int n, bool enable) {
		if(_obj.pushFunction("Light")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(n);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::Light(n, enable);
	};

	// void mglCanvas::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	void AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) {
		if(_obj.pushFunction("AddLight")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(n);
			_obj.pushArg(&r);
			_obj.pushArg(&d);
			_obj.pushArg(c);
			_obj.pushArg(bright);
			_obj.pushArg(ap);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::AddLight(n, r, d, c, bright, ap);
	};

	// void mglCanvas::StartAutoGroup(const char * arg1)
	void StartAutoGroup(const char * arg1) {
		if(_obj.pushFunction("StartAutoGroup")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::StartAutoGroup(arg1);
	};

	// void mglCanvas::EndGroup()
	void EndGroup() {
		if(_obj.pushFunction("EndGroup")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::EndGroup();
	};

	// void mglCanvasWnd::SetSize(int w, int h)
	void SetSize(int w, int h) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(w);
			_obj.pushArg(h);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::SetSize(w, h);
	};

	// void mglCanvasWnd::EndFrame()
	void EndFrame() {
		if(_obj.pushFunction("EndFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::EndFrame();
	};

	// void mglCanvasWnd::SetFrame(long i)
	void SetFrame(long i) {
		if(_obj.pushFunction("SetFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::SetFrame(i);
	};

	// void mglCanvasWnd::DelFrame(long i)
	void DelFrame(long i) {
		if(_obj.pushFunction("DelFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::DelFrame(i);
	};

	// const unsigned char * mglCanvasWnd::GetBits()
	const unsigned char * GetBits() {
		if(_obj.pushFunction("GetBits")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return mglCanvasWnd::GetBits();
	};

	// void mglCanvasWnd::ResetFrames()
	void ResetFrames() {
		if(_obj.pushFunction("ResetFrames")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::ResetFrames();
	};

	// void mglCanvasWnd::ToggleAlpha()
	void ToggleAlpha() {
		THROW_IF(!_obj.pushFunction("ToggleAlpha"),"No implementation for abstract function mglCanvasWnd::ToggleAlpha");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::ToggleLight()
	void ToggleLight() {
		THROW_IF(!_obj.pushFunction("ToggleLight"),"No implementation for abstract function mglCanvasWnd::ToggleLight");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::ToggleZoom()
	void ToggleZoom() {
		THROW_IF(!_obj.pushFunction("ToggleZoom"),"No implementation for abstract function mglCanvasWnd::ToggleZoom");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::ToggleRotate()
	void ToggleRotate() {
		THROW_IF(!_obj.pushFunction("ToggleRotate"),"No implementation for abstract function mglCanvasWnd::ToggleRotate");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::ToggleNo()
	void ToggleNo() {
		THROW_IF(!_obj.pushFunction("ToggleNo"),"No implementation for abstract function mglCanvasWnd::ToggleNo");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::Update()
	void Update() {
		THROW_IF(!_obj.pushFunction("Update"),"No implementation for abstract function mglCanvasWnd::Update");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::Adjust()
	void Adjust() {
		THROW_IF(!_obj.pushFunction("Adjust"),"No implementation for abstract function mglCanvasWnd::Adjust");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::GotoFrame(int d)
	void GotoFrame(int d) {
		THROW_IF(!_obj.pushFunction("GotoFrame"),"No implementation for abstract function mglCanvasWnd::GotoFrame");
		_obj.pushArg((mglCanvasWnd*)this);
		_obj.pushArg(d);
		return (_obj.callFunction<void>());
	};

	// void mglCanvasWnd::NextFrame()
	void NextFrame() {
		if(_obj.pushFunction("NextFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::NextFrame();
	};

	// void mglCanvasWnd::PrevFrame()
	void PrevFrame() {
		if(_obj.pushFunction("PrevFrame")) {
			_obj.pushArg((mglCanvasWnd*)this);
			return (_obj.callFunction<void>());
		}

		return mglCanvasWnd::PrevFrame();
	};

	// void mglCanvasWnd::Animation()
	void Animation() {
		THROW_IF(!_obj.pushFunction("Animation"),"No implementation for abstract function mglCanvasWnd::Animation");
		_obj.pushArg((mglCanvasWnd*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void mglCanvas::AdjustTicks(mglAxis & aa, bool ff)
	void public_AdjustTicks(mglAxis & aa, bool ff) {
		return mglCanvas::AdjustTicks(aa, ff);
	};

	// void mglCanvas::LabelTicks(mglAxis & aa)
	void public_LabelTicks(mglAxis & aa) {
		return mglCanvas::LabelTicks(aa);
	};

	// void mglCanvas::DrawAxis(mglAxis & aa, bool text = true, char arr = 0, const char * stl = "", const char * opt = "")
	void public_DrawAxis(mglAxis & aa, bool text = true, char arr = 0, const char * stl = "", const char * opt = "") {
		return mglCanvas::DrawAxis(aa, text, arr, stl, opt);
	};

	// void mglCanvas::DrawGrid(mglAxis & aa)
	void public_DrawGrid(mglAxis & aa) {
		return mglCanvas::DrawGrid(aa);
	};

	// void mglCanvas::UpdateAxis()
	void public_UpdateAxis() {
		return mglCanvas::UpdateAxis();
	};

	// void mglCanvas::ClfZB(bool force = false)
	void public_ClfZB(bool force = false) {
		return mglCanvas::ClfZB(force);
	};

	// long mglCanvas::PushDrwDat()
	long public_PushDrwDat() {
		return mglCanvas::PushDrwDat();
	};

	// void mglCanvas::add_prim(mglPrim & a)
	void public_add_prim(mglPrim & a) {
		return mglCanvas::add_prim(a);
	};

	// void mglCanvas::mark_draw(long p, char type, double size, mglDrawReg * d)
	void public_mark_draw(long p, char type, double size, mglDrawReg * d) {
		return mglCanvas::mark_draw(p, type, size, d);
	};

	// void mglCanvas::arrow_plot_3d(long p1, long p2, char st, float ll)
	void public_arrow_plot_3d(long p1, long p2, char st, float ll) {
		return mglCanvas::arrow_plot_3d(p1, p2, st, ll);
	};

	// void mglCanvas::glyph_draw(const mglPrim * P, mglDrawReg * d)
	void public_glyph_draw(const mglPrim * P, mglDrawReg * d) {
		return mglCanvas::glyph_draw(P, d);
	};

	// mglPoint mglCanvas::RestorePnt(mglPoint ps, bool norm = false) const
	mglPoint public_RestorePnt(mglPoint ps, bool norm = false) const {
		return mglCanvas::RestorePnt(ps, norm);
	};

	// void mglCanvas::PreparePrim(bool fast)
	void public_PreparePrim(bool fast) {
		return mglCanvas::PreparePrim(fast);
	};

	// void mglCanvas::pxl_combine(size_t id, size_t n, const void * arg3)
	void public_pxl_combine(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_combine(id, n, arg3);
	};

	// void mglCanvas::pxl_memcpy(size_t id, size_t n, const void * arg3)
	void public_pxl_memcpy(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_memcpy(id, n, arg3);
	};

	// void mglCanvas::pxl_backgr(size_t id, size_t n, const void * arg3)
	void public_pxl_backgr(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_backgr(id, n, arg3);
	};

	// void mglCanvas::pxl_primdr(size_t id, size_t n, const void * arg3)
	void public_pxl_primdr(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_primdr(id, n, arg3);
	};

	// void mglCanvas::pxl_transform(size_t id, size_t n, const void * arg3)
	void public_pxl_transform(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_transform(id, n, arg3);
	};

	// void mglCanvas::pxl_setz(size_t id, size_t n, const void * arg3)
	void public_pxl_setz(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_setz(id, n, arg3);
	};

	// void mglCanvas::pxl_setz_adv(size_t id, size_t n, const void * arg3)
	void public_pxl_setz_adv(size_t id, size_t n, const void * arg3) {
		return mglCanvas::pxl_setz_adv(id, n, arg3);
	};

	// void mglCanvas::pxl_other(size_t id, size_t n, const void * p)
	void public_pxl_other(size_t id, size_t n, const void * p) {
		return mglCanvas::pxl_other(id, n, p);
	};

	// void mglCanvas::PutDrawReg(mglDrawReg * d, const mglCanvas * gr)
	void public_PutDrawReg(mglDrawReg * d, const mglCanvas * gr) {
		return mglCanvas::PutDrawReg(d, gr);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_AdjustTicks(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88494129) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_LabelTicks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88494129) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_DrawAxis(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88494129) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_DrawGrid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88494129) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_UpdateAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_ClfZB(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_PushDrwDat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_add_prim(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88935222) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_mark_draw(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,11934656)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_arrow_plot_3d(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_glyph_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88935222)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,11934656)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_RestorePnt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_PreparePrim(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_combine(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_memcpy(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_backgr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_primdr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_transform(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_setz(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_setz_adv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_pxl_other(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_PutDrawReg(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,11934656)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,88502113)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void mglCanvas::public_AdjustTicks(mglAxis & aa, bool ff)
	static int _bind_public_AdjustTicks(lua_State *L) {
		if (!_lg_typecheck_public_AdjustTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_AdjustTicks(mglAxis & aa, bool ff) function, expected prototype:\nvoid mglCanvas::public_AdjustTicks(mglAxis & aa, bool ff)\nClass arguments details:\narg 1 ID = 88494129\n");
		}

		mglAxis* aa_ptr=(Luna< mglAxis >::check(L,2));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in mglCanvas::public_AdjustTicks function");
		}
		mglAxis & aa=*aa_ptr;
		bool ff=(bool)(lua_toboolean(L,3)==1);

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_AdjustTicks(mglAxis &, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_AdjustTicks(aa, ff);

		return 0;
	}

	// void mglCanvas::public_LabelTicks(mglAxis & aa)
	static int _bind_public_LabelTicks(lua_State *L) {
		if (!_lg_typecheck_public_LabelTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_LabelTicks(mglAxis & aa) function, expected prototype:\nvoid mglCanvas::public_LabelTicks(mglAxis & aa)\nClass arguments details:\narg 1 ID = 88494129\n");
		}

		mglAxis* aa_ptr=(Luna< mglAxis >::check(L,2));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in mglCanvas::public_LabelTicks function");
		}
		mglAxis & aa=*aa_ptr;

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_LabelTicks(mglAxis &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_LabelTicks(aa);

		return 0;
	}

	// void mglCanvas::public_DrawAxis(mglAxis & aa, bool text = true, char arr = 0, const char * stl = "", const char * opt = "")
	static int _bind_public_DrawAxis(lua_State *L) {
		if (!_lg_typecheck_public_DrawAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_DrawAxis(mglAxis & aa, bool text = true, char arr = 0, const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::public_DrawAxis(mglAxis & aa, bool text = true, char arr = 0, const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = 88494129\n");
		}

		int luatop = lua_gettop(L);

		mglAxis* aa_ptr=(Luna< mglAxis >::check(L,2));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in mglCanvas::public_DrawAxis function");
		}
		mglAxis & aa=*aa_ptr;
		bool text=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		char arr=luatop>3 ? (char)lua_tointeger(L,4) : (char)0;
		const char * stl=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : (const char*)"";

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_DrawAxis(mglAxis &, bool, char, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_DrawAxis(aa, text, arr, stl, opt);

		return 0;
	}

	// void mglCanvas::public_DrawGrid(mglAxis & aa)
	static int _bind_public_DrawGrid(lua_State *L) {
		if (!_lg_typecheck_public_DrawGrid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_DrawGrid(mglAxis & aa) function, expected prototype:\nvoid mglCanvas::public_DrawGrid(mglAxis & aa)\nClass arguments details:\narg 1 ID = 88494129\n");
		}

		mglAxis* aa_ptr=(Luna< mglAxis >::check(L,2));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in mglCanvas::public_DrawGrid function");
		}
		mglAxis & aa=*aa_ptr;

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_DrawGrid(mglAxis &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_DrawGrid(aa);

		return 0;
	}

	// void mglCanvas::public_UpdateAxis()
	static int _bind_public_UpdateAxis(lua_State *L) {
		if (!_lg_typecheck_public_UpdateAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_UpdateAxis() function, expected prototype:\nvoid mglCanvas::public_UpdateAxis()\nClass arguments details:\n");
		}


		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_UpdateAxis(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_UpdateAxis();

		return 0;
	}

	// void mglCanvas::public_ClfZB(bool force = false)
	static int _bind_public_ClfZB(lua_State *L) {
		if (!_lg_typecheck_public_ClfZB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_ClfZB(bool force = false) function, expected prototype:\nvoid mglCanvas::public_ClfZB(bool force = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool force=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_ClfZB(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_ClfZB(force);

		return 0;
	}

	// long mglCanvas::public_PushDrwDat()
	static int _bind_public_PushDrwDat(lua_State *L) {
		if (!_lg_typecheck_public_PushDrwDat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglCanvas::public_PushDrwDat() function, expected prototype:\nlong mglCanvas::public_PushDrwDat()\nClass arguments details:\n");
		}


		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglCanvas::public_PushDrwDat(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		long lret = self->public_PushDrwDat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::public_add_prim(mglPrim & a)
	static int _bind_public_add_prim(lua_State *L) {
		if (!_lg_typecheck_public_add_prim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_add_prim(mglPrim & a) function, expected prototype:\nvoid mglCanvas::public_add_prim(mglPrim & a)\nClass arguments details:\narg 1 ID = 88935222\n");
		}

		mglPrim* a_ptr=(Luna< mglPrim >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglCanvas::public_add_prim function");
		}
		mglPrim & a=*a_ptr;

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_add_prim(mglPrim &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_add_prim(a);

		return 0;
	}

	// void mglCanvas::public_mark_draw(long p, char type, double size, mglDrawReg * d)
	static int _bind_public_mark_draw(lua_State *L) {
		if (!_lg_typecheck_public_mark_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_mark_draw(long p, char type, double size, mglDrawReg * d) function, expected prototype:\nvoid mglCanvas::public_mark_draw(long p, char type, double size, mglDrawReg * d)\nClass arguments details:\narg 4 ID = 11934656\n");
		}

		long p=(long)lua_tointeger(L,2);
		char type=(char)lua_tointeger(L,3);
		double size=(double)lua_tonumber(L,4);
		mglDrawReg* d=(Luna< mglDrawReg >::check(L,5));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_mark_draw(long, char, double, mglDrawReg *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_mark_draw(p, type, size, d);

		return 0;
	}

	// void mglCanvas::public_arrow_plot_3d(long p1, long p2, char st, float ll)
	static int _bind_public_arrow_plot_3d(lua_State *L) {
		if (!_lg_typecheck_public_arrow_plot_3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_arrow_plot_3d(long p1, long p2, char st, float ll) function, expected prototype:\nvoid mglCanvas::public_arrow_plot_3d(long p1, long p2, char st, float ll)\nClass arguments details:\n");
		}

		long p1=(long)lua_tointeger(L,2);
		long p2=(long)lua_tointeger(L,3);
		char st=(char)lua_tointeger(L,4);
		float ll=(float)lua_tonumber(L,5);

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_arrow_plot_3d(long, long, char, float). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_arrow_plot_3d(p1, p2, st, ll);

		return 0;
	}

	// void mglCanvas::public_glyph_draw(const mglPrim * P, mglDrawReg * d)
	static int _bind_public_glyph_draw(lua_State *L) {
		if (!_lg_typecheck_public_glyph_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_glyph_draw(const mglPrim * P, mglDrawReg * d) function, expected prototype:\nvoid mglCanvas::public_glyph_draw(const mglPrim * P, mglDrawReg * d)\nClass arguments details:\narg 1 ID = 88935222\narg 2 ID = 11934656\n");
		}

		const mglPrim* P=(Luna< mglPrim >::check(L,2));
		mglDrawReg* d=(Luna< mglDrawReg >::check(L,3));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_glyph_draw(const mglPrim *, mglDrawReg *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_glyph_draw(P, d);

		return 0;
	}

	// mglPoint mglCanvas::public_RestorePnt(mglPoint ps, bool norm = false) const
	static int _bind_public_RestorePnt(lua_State *L) {
		if (!_lg_typecheck_public_RestorePnt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglCanvas::public_RestorePnt(mglPoint ps, bool norm = false) const function, expected prototype:\nmglPoint mglCanvas::public_RestorePnt(mglPoint ps, bool norm = false) const\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		mglPoint* ps_ptr=(Luna< mglPoint >::check(L,2));
		if( !ps_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ps in mglCanvas::public_RestorePnt function");
		}
		mglPoint ps=*ps_ptr;
		bool norm=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglCanvas::public_RestorePnt(mglPoint, bool) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->public_RestorePnt(ps, norm);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// void mglCanvas::public_PreparePrim(bool fast)
	static int _bind_public_PreparePrim(lua_State *L) {
		if (!_lg_typecheck_public_PreparePrim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_PreparePrim(bool fast) function, expected prototype:\nvoid mglCanvas::public_PreparePrim(bool fast)\nClass arguments details:\n");
		}

		bool fast=(bool)(lua_toboolean(L,2)==1);

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_PreparePrim(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_PreparePrim(fast);

		return 0;
	}

	// void mglCanvas::public_pxl_combine(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_combine(lua_State *L) {
		if (!_lg_typecheck_public_pxl_combine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_combine(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_combine(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_combine(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_combine(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_memcpy(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_memcpy(lua_State *L) {
		if (!_lg_typecheck_public_pxl_memcpy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_memcpy(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_memcpy(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_memcpy(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_memcpy(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_backgr(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_backgr(lua_State *L) {
		if (!_lg_typecheck_public_pxl_backgr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_backgr(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_backgr(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_backgr(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_backgr(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_primdr(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_primdr(lua_State *L) {
		if (!_lg_typecheck_public_pxl_primdr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_primdr(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_primdr(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_primdr(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_primdr(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_transform(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_transform(lua_State *L) {
		if (!_lg_typecheck_public_pxl_transform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_transform(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_transform(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_transform(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_transform(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_setz(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_setz(lua_State *L) {
		if (!_lg_typecheck_public_pxl_setz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_setz(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_setz(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_setz(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_setz(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_setz_adv(size_t id, size_t n, const void * arg3)
	static int _bind_public_pxl_setz_adv(lua_State *L) {
		if (!_lg_typecheck_public_pxl_setz_adv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_setz_adv(size_t id, size_t n, const void * arg3) function, expected prototype:\nvoid mglCanvas::public_pxl_setz_adv(size_t id, size_t n, const void * arg3)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* _arg3=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_setz_adv(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_setz_adv(id, n, _arg3);

		return 0;
	}

	// void mglCanvas::public_pxl_other(size_t id, size_t n, const void * p)
	static int _bind_public_pxl_other(lua_State *L) {
		if (!_lg_typecheck_public_pxl_other(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_pxl_other(size_t id, size_t n, const void * p) function, expected prototype:\nvoid mglCanvas::public_pxl_other(size_t id, size_t n, const void * p)\nClass arguments details:\n");
		}

		size_t id=(size_t)lua_tointeger(L,2);
		size_t n=(size_t)lua_tointeger(L,3);
		void* p=(Luna< void >::check(L,4));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_pxl_other(size_t, size_t, const void *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_pxl_other(id, n, p);

		return 0;
	}

	// void mglCanvas::public_PutDrawReg(mglDrawReg * d, const mglCanvas * gr)
	static int _bind_public_PutDrawReg(lua_State *L) {
		if (!_lg_typecheck_public_PutDrawReg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::public_PutDrawReg(mglDrawReg * d, const mglCanvas * gr) function, expected prototype:\nvoid mglCanvas::public_PutDrawReg(mglDrawReg * d, const mglCanvas * gr)\nClass arguments details:\narg 1 ID = 11934656\narg 2 ID = 88502113\n");
		}

		mglDrawReg* d=(Luna< mglDrawReg >::check(L,2));
		const mglCanvas* gr=(Luna< mglBase >::checkSubType< mglCanvas >(L,3));

		wrapper_mglCanvasWnd* self=Luna< mglBase >::checkSubType< wrapper_mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::public_PutDrawReg(mglDrawReg *, const mglCanvas *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->public_PutDrawReg(d, gr);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"AdjustTicks",_bind_public_AdjustTicks},
		{"LabelTicks",_bind_public_LabelTicks},
		{"DrawAxis",_bind_public_DrawAxis},
		{"DrawGrid",_bind_public_DrawGrid},
		{"UpdateAxis",_bind_public_UpdateAxis},
		{"ClfZB",_bind_public_ClfZB},
		{"PushDrwDat",_bind_public_PushDrwDat},
		{"add_prim",_bind_public_add_prim},
		{"mark_draw",_bind_public_mark_draw},
		{"arrow_plot_3d",_bind_public_arrow_plot_3d},
		{"glyph_draw",_bind_public_glyph_draw},
		{"RestorePnt",_bind_public_RestorePnt},
		{"PreparePrim",_bind_public_PreparePrim},
		{"pxl_combine",_bind_public_pxl_combine},
		{"pxl_memcpy",_bind_public_pxl_memcpy},
		{"pxl_backgr",_bind_public_pxl_backgr},
		{"pxl_primdr",_bind_public_pxl_primdr},
		{"pxl_transform",_bind_public_pxl_transform},
		{"pxl_setz",_bind_public_pxl_setz},
		{"pxl_setz_adv",_bind_public_pxl_setz_adv},
		{"pxl_other",_bind_public_pxl_other},
		{"PutDrawReg",_bind_public_PutDrawReg},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// void mglCanvasWnd::Window(int argc, char ** argv, int(*)(mglBase *gr, void *p) draw, const char * title, void * par = NULL, void(*)(void *p) reload = NULL, bool maximize = false)
void Window(int, char **, int(*)(mglBase *gr, void *p), const char *, void *, void(*)(void *p), bool) {
	THROW_IF(true,"The function call void mglCanvasWnd::Window(int, char **, int(*)(mglBase *gr, void *p), const char *, void *, void(*)(void *p), bool) is not implemented in wrapper.");
};

};




#endif

