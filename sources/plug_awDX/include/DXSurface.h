#ifndef _DXSURFACE_H_
#define _DXSURFACE_H_

#include <lunaCommon.h>
#include <Awesomium/Surface.h>
#include "CopyThread.h"

#include <d3d9.h>
#include <d3dx9.h>
#include <DxErr.h>

#define SafeRelease(x) if(x) x->Release();

// #define USE_COPY_THREAD

using namespace Awesomium;

class DXSurface : public Awesomium::Surface {
protected:

#ifdef USE_COPY_THREAD
	CopyThread* _thread;
#else
	IDirect3DSurface9* _surface;	
	int _surfaceWidth;
	int _surfaceHeight;
#endif	
	
public:

#ifdef USE_COPY_THREAD
	DXSurface() { _thread = new CopyThread(); };	
#else
	DXSurface() : _surface(NULL), _surfaceWidth(0), _surfaceHeight(0) {};
#endif
	
	void setTargetSurface(IDirect3DSurface9* surface);
 	
#if 0
	void validateClipRect(int dx, int dy, const Awesomium::Rect &clip_rect, Awesomium::Rect& result);
#endif

	void Paint(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect);
	void Scroll(int dx, int dy, const Awesomium::Rect &clip_rect);
	
	~DXSurface() {
#ifdef USE_COPY_THREAD
		setTargetSurface(NULL);
		delete _thread;
#endif
		trDEBUG("DXSurface","Deleting surface.");
	}
	
};

#endif
