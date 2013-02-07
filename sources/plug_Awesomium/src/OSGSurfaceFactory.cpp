
#include "OSGSurfaceFactory.h"
#include "OSGSurface.h"

OSGSurface* OSGSurfaceFactory::getOrCreateSurface(Awesomium::WebView* view) {
	for(SurfaceList::iterator it = _surfaces.begin(); it!=_surfaces.end(); ++it) {
		if((*it)->getWebView() == view) {
			return *it;
		}
	}
	
	// create a new surface:
	OSGSurface* surface = new OSGSurface(view);
	_surfaces.push_back(surface);

	return surface;
};

Awesomium::Surface* OSGSurfaceFactory::CreateSurface(Awesomium::WebView *view, int width, int height) {
	OSGSurface* surface = getOrCreateSurface(view);
	CHECK_RET(surface,NULL,"Invalid surface pointer.");
	
	logINFO("Creating OSGSurface " << (const void*)surface);
	surface->setSize(width,height);
	return surface;
};

void OSGSurfaceFactory::DestroySurface(Awesomium::Surface *surface) {
	CHECK(surface,"Invalid surface pointer in DestroySurface()");
	
	for(SurfaceList::iterator it = _surfaces.begin(); it!=_surfaces.end(); ++it) {
		if(*it == surface) {
			_surfaces.erase(it);
			logINFO("Deleting OSGSurface " << (const void*)surface);
			delete surface;
			return;
		}
	}

	logINFO("Creating OSGSurface " << (const void*)surface);
	delete surface;	
	CHECK(false,"Could not find the surface in the list.");
};
