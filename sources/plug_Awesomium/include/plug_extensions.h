#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

#include <Awesomium/BitmapSurface.h>
#include <osg/Image>

/** LUNA_CLASS_EXTENSION */
void copyTo(Awesomium::BitmapSurface* surface, osg::Image* img, bool to_rgba = true, bool flip_y = true);

#endif
