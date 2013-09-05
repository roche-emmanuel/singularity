#ifndef _DXSURFACE_H_
#define _DXSURFACE_H_

#include <sgtCommon.h>
#include <Awesomium/Surface.h>

#include <d3d9.h>
#include <d3dx9.h>
#include <DxErr.h>

#define CHECK_RESULT(val,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return; } }
#define CHECK_RESULT_RET(val,ret,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return ret; } }
#define SafeRelease(x) if(x) x->Release();


using namespace Awesomium;

class DXSurface : public Awesomium::Surface {
protected:
	Awesomium::WebView* _view;
	IDirect3DSurface9* _surface;

	int _surfaceWidth;
	int _surfaceHeight;
	
public:
	DXSurface() : _surface(NULL), _surfaceWidth(0), _surfaceHeight(0) {
	};
	
	void setTargetSurface(IDirect3DSurface9* surface);
 	
	void validateClipRect(int dx, int dy, const Awesomium::Rect &clip_rect, Awesomium::Rect& result);
	
	void Paint(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect);
	void Scroll(int dx, int dy, const Awesomium::Rect &clip_rect);
	
	~DXSurface() {
		trDEBUG("DXSurface","Deleting surface.");
	}
	
};

#endif
