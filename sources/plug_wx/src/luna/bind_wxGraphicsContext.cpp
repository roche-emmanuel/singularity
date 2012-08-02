#include <plug_common.h>

class luna_wrapper_wxGraphicsContext {
public:
	typedef Luna< wxGraphicsContext > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsContext* ptr= dynamic_cast< wxGraphicsContext* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsContext >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGraphicsContext* LunaTraits< wxGraphicsContext >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGraphicsContext::Clip(const wxRegion & region)
	// void wxGraphicsContext::Clip(double x, double y, double w, double h)
	// void wxGraphicsContext::ConcatTransform(const wxGraphicsMatrix & matrix)
	// wxGraphicsBitmap wxGraphicsContext::CreateBitmap(const wxBitmap & bitmap)
	// wxGraphicsBitmap wxGraphicsContext::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)
	// wxGraphicsBrush wxGraphicsContext::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
	// void wxGraphicsContext::DrawBitmap(const wxGraphicsBitmap & bmp, double x, double y, double w, double h)
	// void wxGraphicsContext::DrawBitmap(const wxBitmap & bmp, double x, double y, double w, double h)
	// void wxGraphicsContext::DrawIcon(const wxIcon & icon, double x, double y, double w, double h)
	// void wxGraphicsContext::FillPath(const wxGraphicsPath & path, wxPolygonFillMode fillStyle = wxODDEVEN_RULE)
	// void * wxGraphicsContext::GetNativeContext()
	// void wxGraphicsContext::GetPartialTextExtents(const wxString & text, wxArrayDouble & widths) const
	// void wxGraphicsContext::GetTextExtent(const wxString & text, double * width, double * height, double * descent, double * externalLeading) const
	// wxGraphicsMatrix wxGraphicsContext::GetTransform() const
	// void wxGraphicsContext::ResetClip()
	// void wxGraphicsContext::Rotate(double angle)
	// void wxGraphicsContext::Scale(double xScale, double yScale)
	// void wxGraphicsContext::SetTransform(const wxGraphicsMatrix & matrix)
	// void wxGraphicsContext::StrokePath(const wxGraphicsPath & path)
	// void wxGraphicsContext::Translate(double dx, double dy)
	// void wxGraphicsContext::BeginLayer(double opacity)
	// void wxGraphicsContext::EndLayer()
	// bool wxGraphicsContext::SetAntialiasMode(wxAntialiasMode antialias)
	// bool wxGraphicsContext::SetInterpolationQuality(wxInterpolationQuality interpolation)
	// bool wxGraphicsContext::SetCompositionMode(wxCompositionMode op)

	// Abstract operators:
}

void LunaTraits< wxGraphicsContext >::_bind_dtor(wxGraphicsContext* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsContext >::className[] = "wxGraphicsContext";
const char LunaTraits< wxGraphicsContext >::fullName[] = "wxGraphicsContext";
const char LunaTraits< wxGraphicsContext >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsContext >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsContext >::hash = 50225448;
const int LunaTraits< wxGraphicsContext >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsContext >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsContext >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsContext::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsContext >::enumValues[] = {
	{0,0}
};


