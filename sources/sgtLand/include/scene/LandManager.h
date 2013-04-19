#ifndef _SGTLAND_SCENETOOLS_H_
#define _SGTLAND_SCENETOOLS_H_

#include "sgtLand.h"
#include "math/box3.h"
#include "math/mat4.h"
#include "osg/Polytope"

namespace sgt
{

class SGTLAND_EXPORT LandManager {
public:
	enum Visibility {
		FULLY_VISIBLE, //!< The bounding box is fully visible
		PARTIALLY_VISIBLE, //!< The bounding box is partially visible
		INVISIBLE //!< The bounding box is invisible
	};

	static Visibility getVisibility(const osg::Polytope::PlaneList& frustumPlanes, const box3d& b);
	static Visibility getVisibility(const osg::Vec4d& clip, const box3d& b);
	static void getFrustumPlanes(const mat4d &toScreen, osg::Polytope::PlaneList& planes);
};

};

#endif

