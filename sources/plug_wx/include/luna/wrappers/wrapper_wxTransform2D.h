#ifndef _WRAPPERS_WRAPPER_WXTRANSFORM_D_H_
#define _WRAPPERS_WRAPPER_WXTRANSFORM_D_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/geometry.h>

class wrapper_wxTransform2D : public wxTransform2D {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void wxTransform2D::Transform(wxPoint2DInt * pt) const
	void Transform(wxPoint2DInt * pt) const {
		THROW_IF(!_obj.pushFunction("Transform"),"No implementation for abstract function wxTransform2D::Transform");
		_obj.pushArg(pt);
		return (_obj.callFunction<void>());
	};

	// void wxTransform2D::Transform(wxRect2DInt * r) const
	void Transform(wxRect2DInt * r) const {
		if(_obj.pushFunction("Transform")) {
			_obj.pushArg(r);
			return (_obj.callFunction<void>());
		}

		return wxTransform2D::Transform(r);
	};

	// wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const
	wxPoint2DInt Transform(const wxPoint2DInt & pt) const {
		if(_obj.pushFunction("Transform")) {
			_obj.pushArg(&pt);
			return *(_obj.callFunction<wxPoint2DInt*>());
		}

		return wxTransform2D::Transform(pt);
	};

	// wxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const
	wxRect2DInt Transform(const wxRect2DInt & r) const {
		if(_obj.pushFunction("Transform")) {
			_obj.pushArg(&r);
			return *(_obj.callFunction<wxRect2DInt*>());
		}

		return wxTransform2D::Transform(r);
	};

	// void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const
	void InverseTransform(wxPoint2DInt * pt) const {
		THROW_IF(!_obj.pushFunction("InverseTransform"),"No implementation for abstract function wxTransform2D::InverseTransform");
		_obj.pushArg(pt);
		return (_obj.callFunction<void>());
	};

	// void wxTransform2D::InverseTransform(wxRect2DInt * r) const
	void InverseTransform(wxRect2DInt * r) const {
		if(_obj.pushFunction("InverseTransform")) {
			_obj.pushArg(r);
			return (_obj.callFunction<void>());
		}

		return wxTransform2D::InverseTransform(r);
	};

	// wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const
	wxPoint2DInt InverseTransform(const wxPoint2DInt & pt) const {
		if(_obj.pushFunction("InverseTransform")) {
			_obj.pushArg(&pt);
			return *(_obj.callFunction<wxPoint2DInt*>());
		}

		return wxTransform2D::InverseTransform(pt);
	};

	// wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const
	wxRect2DInt InverseTransform(const wxRect2DInt & r) const {
		if(_obj.pushFunction("InverseTransform")) {
			_obj.pushArg(&r);
			return *(_obj.callFunction<wxRect2DInt*>());
		}

		return wxTransform2D::InverseTransform(r);
	};




};




#endif

