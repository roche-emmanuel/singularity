#include "plug_extensions.h"

void copyTo(Awesomium::BitmapSurface* surface, osg::Image* img, bool to_rgba, bool flip_y) {
	// ensure the images have the same size:
	CHECK(img,"Invalid target image.");
	CHECK(surface->width() == img->s(),"Different image width: " << surface->width() << "!=" << img->s());
	CHECK(surface->height() == img->t(),"Different image height: " << surface->height() << "!=" << img->t());
	
	surface->CopyTo(img->data(),img->s()*4,4,to_rgba,flip_y);
	img->dirty();
}