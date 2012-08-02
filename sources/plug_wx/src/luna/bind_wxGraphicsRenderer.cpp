#include <plug_common.h>

class luna_wrapper_wxGraphicsRenderer {
public:
	typedef Luna< wxGraphicsRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsRenderer* ptr= dynamic_cast< wxGraphicsRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxGraphicsRenderer* LunaTraits< wxGraphicsRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmap(const wxBitmap & bitmap)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromImage(const wxImage & image)
	// wxImage wxGraphicsRenderer::CreateImageFromBitmap(const wxGraphicsBitmap & bmp)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromNativeBitmap(void * bitmap)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(wxWindow * window)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxWindowDC & windowDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxMemoryDC & memoryDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxPrinterDC & printerDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxEnhMetaFileDC & metaFileDC)
	// wxGraphicsBrush wxGraphicsRenderer::CreateBrush(const wxBrush & brush)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeContext(void * context)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeWindow(void * window)
	// wxGraphicsContext * wxGraphicsRenderer::CreateMeasuringContext()
	// wxGraphicsFont wxGraphicsRenderer::CreateFont(const wxFont & font, const wxColour & col = * wxBLACK)
	// wxGraphicsFont wxGraphicsRenderer::CreateFont(double sizeInPixels, const wxString & facename, int flags = wxFONTFLAG_DEFAULT, const wxColour & col = * wxBLACK)
	// wxGraphicsBrush wxGraphicsRenderer::CreateLinearGradientBrush(double x1, double y1, double x2, double y2, const wxGraphicsGradientStops & stops)
	// wxGraphicsMatrix wxGraphicsRenderer::CreateMatrix(double a = 1.0, double b = 0.0, double c = 0.0, double d = 1.0, double tx = 0.0, double ty = 0.0)
	// wxGraphicsPath wxGraphicsRenderer::CreatePath()
	// wxGraphicsPen wxGraphicsRenderer::CreatePen(const wxPen & pen)
	// wxGraphicsBrush wxGraphicsRenderer::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)

	// Abstract operators:
}

void LunaTraits< wxGraphicsRenderer >::_bind_dtor(wxGraphicsRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsRenderer >::className[] = "wxGraphicsRenderer";
const char LunaTraits< wxGraphicsRenderer >::fullName[] = "wxGraphicsRenderer";
const char LunaTraits< wxGraphicsRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGraphicsRenderer >::hash = 56316210;
const int LunaTraits< wxGraphicsRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsRenderer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsRenderer >::enumValues[] = {
	{0,0}
};


