#include "plug_extensions.h"

void copyTo(Awesomium::BitmapSurface* surface, osg::Image* img, bool to_rgba, bool flip_y) {
	// ensure the images have the same size:
	CHECK(img,"Invalid target image.");
	CHECK(surface->width() == img->s(),"Different image width: " << surface->width() << "!=" << img->s());
	CHECK(surface->height() == img->t(),"Different image height: " << surface->height() << "!=" << img->t());
	
	surface->CopyTo(img->data(),img->s()*4,4,to_rgba,flip_y);
	img->dirty();
}

void addAdditionalOption(Awesomium::WebConfig* config, std::string& option) {
	config->additional_options.Push(WSLit(option.c_str()));
};

SurfaceSubloadCallback::SurfaceSubloadCallback(Awesomium::WebView* view) : _view(view) {
	_width = -1;
	_height = -1;
	_buffer = NULL;
};

bool SurfaceSubloadCallback::copySurface() const {
    const Awesomium::BitmapSurface* surface = static_cast<const Awesomium::BitmapSurface*>(_view->surface());

    if (!surface)
      return false;

    if (!surface->is_dirty())
      return false;

	if(_width != surface->width() || _height != surface->height()) {
		if(_buffer) {
			delete [] _buffer;
			_buffer = NULL;
		}
		
		_width = surface->width();
		_height = surface->height();
		logINFO("Creating new buffer for surface of size " << _width << "x" << _height);
		_buffer = new unsigned char[4*_width*_height];
	}
	
    surface->CopyTo(_buffer, _width * 4, 4, false, false);
	return true;
};

void SurfaceSubloadCallback::load(const osg::Texture2D & texture, osg::State & state) const {
	if(copySurface())
		glTexImage2D(GL_TEXTURE_2D, 0, 0, 0, _width, _height, GL_BGRA, GL_UNSIGNED_BYTE,_buffer);
}

void SurfaceSubloadCallback::subload(const osg::Texture2D & texture, osg::State & state) const {
	if(copySurface())
		glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, _width, _height, GL_BGRA, GL_UNSIGNED_BYTE,_buffer);
}
