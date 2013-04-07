#ifndef _WRAPPERS_WRAPPER_IGIZMO_H_
#define _WRAPPERS_WRAPPER_IGIZMO_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <IGizmo.h>

class wrapper_IGizmo : public IGizmo, public luna_wrapper_base {

public:
		

	~wrapper_IGizmo() {
		logDEBUG3("Calling delete function for wrapper IGizmo");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IGizmo*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IGizmo(lua_State* L, lua_Table* dum) 
		: IGizmo(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IGizmo*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void IGizmo::SetEditMatrix(float * pMatrix)
	void SetEditMatrix(float * pMatrix) {
		THROW_IF(!_obj.pushFunction("SetEditMatrix"),"No implementation for abstract function IGizmo::SetEditMatrix");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(pMatrix);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::SetCameraMatrix(const float * Model, const float * Proj)
	void SetCameraMatrix(const float * Model, const float * Proj) {
		THROW_IF(!_obj.pushFunction("SetCameraMatrix"),"No implementation for abstract function IGizmo::SetCameraMatrix");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(Model);
		_obj.pushArg(Proj);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::SetScreenDimension(int screenWidth, int screenHeight)
	void SetScreenDimension(int screenWidth, int screenHeight) {
		THROW_IF(!_obj.pushFunction("SetScreenDimension"),"No implementation for abstract function IGizmo::SetScreenDimension");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(screenWidth);
		_obj.pushArg(screenHeight);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::SetDisplayScale(float aScale)
	void SetDisplayScale(float aScale) {
		THROW_IF(!_obj.pushFunction("SetDisplayScale"),"No implementation for abstract function IGizmo::SetDisplayScale");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(aScale);
		return (_obj.callFunction<void>());
	};

	// bool IGizmo::OnMouseDown(unsigned int x, unsigned int y)
	bool OnMouseDown(unsigned int x, unsigned int y) {
		THROW_IF(!_obj.pushFunction("OnMouseDown"),"No implementation for abstract function IGizmo::OnMouseDown");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<bool>());
	};

	// void IGizmo::OnMouseMove(unsigned int x, unsigned int y)
	void OnMouseMove(unsigned int x, unsigned int y) {
		THROW_IF(!_obj.pushFunction("OnMouseMove"),"No implementation for abstract function IGizmo::OnMouseMove");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::OnMouseUp(unsigned int x, unsigned int y)
	void OnMouseUp(unsigned int x, unsigned int y) {
		THROW_IF(!_obj.pushFunction("OnMouseUp"),"No implementation for abstract function IGizmo::OnMouseUp");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::UseSnap(bool bUseSnap)
	void UseSnap(bool bUseSnap) {
		THROW_IF(!_obj.pushFunction("UseSnap"),"No implementation for abstract function IGizmo::UseSnap");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(bUseSnap);
		return (_obj.callFunction<void>());
	};

	// bool IGizmo::IsUsingSnap()
	bool IsUsingSnap() {
		THROW_IF(!_obj.pushFunction("IsUsingSnap"),"No implementation for abstract function IGizmo::IsUsingSnap");
		_obj.pushArg((IGizmo*)this);
		return (_obj.callFunction<bool>());
	};

	// void IGizmo::SetSnap(float snapx, float snapy, float snapz)
	void SetSnap(float snapx, float snapy, float snapz) {
		THROW_IF(!_obj.pushFunction("SetSnap"),"No implementation for abstract function IGizmo::SetSnap");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(snapx);
		_obj.pushArg(snapy);
		_obj.pushArg(snapz);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::SetSnap(const float snap)
	void SetSnap(const float snap) {
		THROW_IF(!_obj.pushFunction("SetSnap"),"No implementation for abstract function IGizmo::SetSnap");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(snap);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::SetLocation(IGizmo::LOCATION aLocation)
	void SetLocation(IGizmo::LOCATION aLocation) {
		THROW_IF(!_obj.pushFunction("SetLocation"),"No implementation for abstract function IGizmo::SetLocation");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg((int)aLocation);
		return (_obj.callFunction<void>());
	};

	// IGizmo::LOCATION IGizmo::GetLocation()
	IGizmo::LOCATION GetLocation() {
		THROW_IF(!_obj.pushFunction("GetLocation"),"No implementation for abstract function IGizmo::GetLocation");
		_obj.pushArg((IGizmo*)this);
		return (IGizmo::LOCATION)(_obj.callFunction<int>());
	};

	// void IGizmo::SetAxisMask(unsigned int mask)
	void SetAxisMask(unsigned int mask) {
		THROW_IF(!_obj.pushFunction("SetAxisMask"),"No implementation for abstract function IGizmo::SetAxisMask");
		_obj.pushArg((IGizmo*)this);
		_obj.pushArg(mask);
		return (_obj.callFunction<void>());
	};

	// void IGizmo::Draw()
	void Draw() {
		THROW_IF(!_obj.pushFunction("Draw"),"No implementation for abstract function IGizmo::Draw");
		_obj.pushArg((IGizmo*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

