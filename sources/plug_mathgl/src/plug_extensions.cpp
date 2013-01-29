#include "plug_extensions.h"

osg::Image* asImage(mglGraph* gr) {
	// Create a new image:
	osg::Image* img = new osg::Image();
	img->setImage(gr->GetWidth(),gr->GetHeight(),1,GL_RGBA,GL_RGBA,GL_UNSIGNED_BYTE,const_cast<unsigned char*>(gr->GetRGBA()),osg::Image::NO_DELETE);
	
	return img;
};
