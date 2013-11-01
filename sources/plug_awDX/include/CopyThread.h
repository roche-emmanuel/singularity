#ifndef _COPYTHREAD_H_
#define _COPYTHREAD_H_

#include <lunaCommon.h>
#include <Awesomium/Surface.h>

class Area : public osg::Referenced {
public:
	Area(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect) {
		this->src_buffer = src_buffer;
		this->src_row_span = src_row_span;
		this->src_rect = src_rect;
		this->dest_rect = dest_rect;
	}

public:
	unsigned char *src_buffer;
	int src_row_span;
	Awesomium::Rect src_rect;
	Awesomium::Rect dest_rect;
};


// Prepare a thread to handle the copy operation:
class CopyThread : public OpenThreads::Thread
{
public:
	typedef std::deque<osg::ref_ptr<Area> > AreaList;

public:
	CopyThread() : OpenThreads::Thread(), _surface(NULL), _surfaceWidth(0), _surfaceHeight(0) {}

	void copyArea(unsigned char *src_buffer, int src_row_span, const Awesomium::Rect &src_rect, const Awesomium::Rect &dest_rect);

	virtual void run();

	void setTargetSurface(IDirect3DSurface9* surface);

	void addArea(Area* area) {
		sgtLock lock(_areasMutex);
		_areas.push_back(area);
	}
   
protected:
	volatile bool _done;
	
	AreaList _areas;
	sgtMutex _areasMutex;
	IDirect3DSurface9* _surface;
	
	int _surfaceWidth;
	int _surfaceHeight;	
};

#endif
