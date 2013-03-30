#ifndef _OSGSURFACEFACTORY_H_
#define _OSGSURFACEFACTORY_H_

#include <sgtCommon.h>
#include <Awesomium/Surface.h>

class OSGSurface;

class OSGSurfaceFactory : public Awesomium::SurfaceFactory {
public:
	typedef std::vector<OSGSurface*> SurfaceList;
	
protected:
	SurfaceList _surfaces;
	
public:
	OSGSurfaceFactory() {
		logINFO("Creating OSGSurfaceFactory.");
	};
	
	Awesomium::Surface* CreateSurface (Awesomium::WebView *view, int width, int height);
	void DestroySurface(Awesomium::Surface *surface);

	OSGSurface* getOrCreateSurface(Awesomium::WebView* view);
	
	bool releaseSurface(Awesomium::Surface *surface);
	
	void releaseAllSurfaces();
	
	~OSGSurfaceFactory() {
		logINFO("Deleting OSGSurfaceFactory.");
		CHECK(_surfaces.empty(),"Not all web surfaces were released! " << _surfaces.size() << " OSGSurfaces left.");
	}
};

#endif
