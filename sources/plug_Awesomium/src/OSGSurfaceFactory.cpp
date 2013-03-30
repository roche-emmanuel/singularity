
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
	//logINFO("Creating new OSGSurface " << (const void*)surface);
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
	// not doing anything here
};

bool OSGSurfaceFactory::releaseSurface(Awesomium::Surface *surface) {
	CHECK_RET(surface,false,"Invalid surface pointer in releaseSurface()");
	
	for(SurfaceList::iterator it = _surfaces.begin(); it!=_surfaces.end(); ++it) {
		if(*it == surface) {
			_surfaces.erase(it);
			logINFO("Deleting OSGSurface " << (const void*)surface);
			delete surface;
			return true;
		}
	}

	logERROR("Force deleting OSGSurface " << (const void*)surface);
	delete surface;	
	return false;
}

void OSGSurfaceFactory::releaseAllSurfaces() {
	trDEBUG("OSGSurfaceFactory","Releasing all surfaces...")
	for(SurfaceList::iterator it = _surfaces.begin(); it!=_surfaces.end(); ++it) {
		delete *it;
	}
	_surfaces.clear();
	trDEBUG("OSGSurfaceFactory","Done releasing all surfaces.")
}


