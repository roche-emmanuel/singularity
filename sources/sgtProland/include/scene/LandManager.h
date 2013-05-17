#ifndef _SGTLAND_SCENETOOLS_H_
#define _SGTLAND_SCENETOOLS_H_

#include "sgtProland.h"
#include "ork/math/box3.h"
#include "ork/math/mat4.h"
#include "osg/Polytope"
#include "osg/Texture2D"
#include "ork/render/Buffer.h"
#include "ork/scenegraph/SceneManager.h"

using namespace ork;

namespace proland
{

class SGTPROLAND_EXPORT LandManager {
protected:
	static int contextId;

public:
	enum Visibility {
		FULLY_VISIBLE, //!< The bounding box is fully visible
		PARTIALLY_VISIBLE, //!< The bounding box is partially visible
		INVISIBLE //!< The bounding box is invisible
	};

	static void setCurrentContext(int contextId);

	static SceneManager::visibility getVisibility(const osg::Polytope::PlaneList& frustumPlanes, const box3d& b);
	static Visibility getVisibility(const osg::Vec4d& clip, const box3d& b);
	static void getFrustumPlanes(const mat4d &toScreen, osg::Polytope::PlaneList& planes);

	static GLenum getError();

	static void setSubImage2D(osg::Texture* tex, int level, int x, int y, int w, int h, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels);
	static void setSubImage3D(osg::Texture* tex, int level, int x, int y, int l, int w, int h, int d, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels);

	static osg::Image* createRGBAImage2D(unsigned int ww, unsigned int hh, float red = -1.0f, float green = -1.0f, float blue = -1.0f, float alpha = 1.0f);
	static osg::Image* createRGBAImage3D(unsigned int ww, unsigned int hh, unsigned int dd, float red = -1.0f, float green = -1.0f, float blue = -1.0f, float alpha = 1.0f);

	static void setSubImage2D(osg::Texture* tex, int x, int y, osg::Image* img, TextureFormat f, PixelType t);
	static void setSubImage3D(osg::Texture* tex, int x, int y, int l, osg::Image* img, TextureFormat f, PixelType t);
};

};

#endif

