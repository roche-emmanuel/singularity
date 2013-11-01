#include "CopyThread.h"

void CopyThread::setTargetSurface(IDirect3DSurface9* surface)
{
	if(isRunning()) {
		_done = true;
		logINFO("Waiting for copy thread to stop...");
		join();
		logINFO("Copy thread to stopped properly.");	
	}
	
	CHECK(!isRunning(),"Cannot change surface when thread is running.");
	
	_surface = surface;
	_surfaceWidth = 0;
	_surfaceHeight = 0;

	sgtLock lock(_areasMutex);
	_areas.clear();

	if(!_surface)
		return;
		
	// The surface is valid, we should update its size:
	D3DSURFACE_DESC desc;
	CHECK_RESULT(_surface->GetDesc(&desc),"Cannot get surface desc.");

	_surfaceWidth = desc.Width;
	_surfaceHeight = desc.Height;
	
	logINFO("Starting copy thread...");
	_done = false; // reset the state for a new start.	
	start();
}

void CopyThread::run()
{
	logINFO("Entering surface copy thread");
	osg::ref_ptr<Area> area;
	
	while (!_done)
	{
		// test cancel just in case:
		testCancel();
		
		CHECK(_surface,"Invalid target surface.");
		
		{
			// get one area if any:
			sgtLock lock(_areasMutex);
			if(!_areas.empty()) {
				area = _areas.front();
				_areas.pop_front();
			}
		}
		
		if(!area.valid()) {
			// There was no area, we jsut sleep for a moment (10ms)
			microSleep(10000);
			continue;
		}

		// We have a valid area, so we copy it:
		copyArea(area->src_buffer,area->src_row_span,area->src_rect,area->dest_rect);
		
		// discard the copied area:
		area = NULL;
	}
   
   logINFO("Finished surface copy thread.");
}

void CopyThread::copyArea(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect) {
	// logINFO("Painting rect: x="<<dest_rect.x<<", y="<<dest_rect.y<<", w="<<dest_rect.width<<", h="<<dest_rect.height);
	
	// logINFO("Painting surface "<<(const void*)_surface<<" from source "<<(const void*)src_buffer)
	
	// osg::Timer_t startTick = osg::Timer::instance()->tick();
	
	CHECK(_surface,"Invalid DirectX Surface in DXSurface::Paint()")
	
	CHECK(src_rect.width==dest_rect.width,"mismatch in src and dest width: src_ww="<<src_rect.width<<", dest_ww="<<dest_rect.width);
	CHECK(src_rect.height==dest_rect.height,"mismatch in src and dest height: src_hh="<<src_rect.height<<", dest_hh="<<dest_rect.height);


	D3DLOCKED_RECT locked;
	RECT rect;
	rect.left = dest_rect.x;
	rect.top = dest_rect.y;
	rect.right = dest_rect.x+dest_rect.width;
	rect.bottom = dest_rect.y+dest_rect.height;
	
	CHECK_RESULT(_surface->LockRect(&locked,&rect,D3DLOCK_NOSYSLOCK),"Could not lock surface data");
	
	CHECK(locked.Pitch==_surfaceWidth*4,"Invalid Pitch value, expected:"<< _surfaceWidth*4<<", got: "<<locked.Pitch);
	
	unsigned char* src = src_buffer + src_rect.y * src_row_span + src_rect.x * 4;
	unsigned char* dest = (unsigned char *)locked.pBits;
	unsigned char* line = src;

	int height = src_rect.height;
	int width = src_rect.width;
	int width4 = width*4;
	int offset = _surfaceWidth*4;

	for(int row=0; row<height; ++row) {
		// line = src + src_row_span*row;
		memcpy(dest,line,width4);
		dest += offset;	
		line += src_row_span;
	}
	
	CHECK_RESULT(_surface->UnlockRect(),"Could not unlock surface data");
	
	// double elapsed = osg::Timer::instance()->delta_s(startTick,osg::Timer::instance()->tick());
	// logINFO("Painted in " << elapsed*1000 << " ms");
};

