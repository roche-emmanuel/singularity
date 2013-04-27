#ifndef _SGTLAND_SCENETOOLS_H_
#define _SGTLAND_SCENETOOLS_H_

#include "sgtLand.h"
#include "math/box3.h"
#include "math/mat4.h"
#include "osg/Polytope"
#include "osg/Texture2D"
#include "core/Buffer.h"

namespace sgt
{

class SGTLAND_EXPORT LandManager {
protected:
	static int contextId;

public:
	enum Visibility {
		FULLY_VISIBLE, //!< The bounding box is fully visible
		PARTIALLY_VISIBLE, //!< The bounding box is partially visible
		INVISIBLE //!< The bounding box is invisible
	};

	static void setCurrentContext(int contextId);

	static Visibility getVisibility(const osg::Polytope::PlaneList& frustumPlanes, const box3d& b);
	static Visibility getVisibility(const osg::Vec4d& clip, const box3d& b);
	static void getFrustumPlanes(const mat4d &toScreen, osg::Polytope::PlaneList& planes);

	static GLenum getError();

	static void setSubImage2D(osg::Texture* tex, int level, int x, int y, int w, int h, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels);
	static void setSubImage3D(osg::Texture* tex, int level, int x, int y, int l, int w, int h, int d, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels);

	static osg::Image* createRGBAImage(unsigned int ww, unsigned int hh, float red = -1.0f, float green = -1.0f, float blue = -1.0f, float alpha = 1.0f);

	static void setSubImage2D(osg::Texture* tex, int x, int y, osg::Image* img, TextureFormat f, PixelType t);
};

};

#endif

