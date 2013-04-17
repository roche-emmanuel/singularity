
#include "scene/Tools.h"

namespace sgt {

VisibilityMode getVisibility(const osg::Polytope::PlaneList& frustumPlanes, const sgt::box3d& b)
{
	CHECK_RET(frustumPlanes.size()>=5,INVISIBLE,"Invalid number of frustum planes.");

	VisibilityMode v0 = getVisibility(frustumPlanes[0].asVec4(), b);
	if (v0 == INVISIBLE) {
		return INVISIBLE;
	}
	
	VisibilityMode v1 = getVisibility(frustumPlanes[1].asVec4(), b);
	if (v1 == INVISIBLE) {
		return INVISIBLE;
	}
	
	VisibilityMode v2 = getVisibility(frustumPlanes[2].asVec4(), b);
	if (v2 == INVISIBLE) {
		return INVISIBLE;
	}
	
	VisibilityMode v3 = getVisibility(frustumPlanes[3].asVec4(), b);
	if (v3 == INVISIBLE) {
		return INVISIBLE;
	}
	
	VisibilityMode v4 = getVisibility(frustumPlanes[4].asVec4(), b);
	if (v4 == INVISIBLE) {
		return INVISIBLE;
	}

	if (v0 == FULLY_VISIBLE && v1 == FULLY_VISIBLE &&
		v2 == FULLY_VISIBLE && v3 == FULLY_VISIBLE &&
		v4 == FULLY_VISIBLE)
	{
		return FULLY_VISIBLE;
	}
	return PARTIALLY_VISIBLE;
}

VisibilityMode getVisibility(const osg::Vec4d& clip, const box3d& b)
{
	double x0 = b.xmin * clip.x();
	double x1 = b.xmax * clip.x();
	double y0 = b.ymin * clip.y();
	double y1 = b.ymax * clip.y();
	double z0 = b.zmin * clip.z() + clip.w();
	double z1 = b.zmax * clip.z() + clip.w();
	double p1 = x0 + y0 + z0;
	double p2 = x1 + y0 + z0;
	double p3 = x1 + y1 + z0;
	double p4 = x0 + y1 + z0;
	double p5 = x0 + y0 + z1;
	double p6 = x1 + y0 + z1;
	double p7 = x1 + y1 + z1;
	double p8 = x0 + y1 + z1;
	if (p1 <= 0 && p2 <= 0 && p3 <= 0 && p4 <= 0 && p5 <= 0 && p6 <= 0 && p7 <= 0 && p8 <= 0) {
		return INVISIBLE;
	}
	if (p1 > 0 && p2 > 0 && p3 > 0 && p4 > 0 && p5 > 0 && p6 > 0 && p7 > 0 && p8 > 0) {
		return FULLY_VISIBLE;
	}
	return PARTIALLY_VISIBLE;
}

void getFrustumPlanes(const mat4d &toScreen, osg::Polytope::PlaneList& planes)
{
	const double *m = toScreen.coefficients();
	planes.clear();

	// Extract the LEFT plane
	planes.push_back(osg::Plane(m[12] + m[0], m[13] + m[1], m[14] + m[2], m[15] + m[3]));

	// Extract the RIGHT plane
	planes.push_back(osg::Plane(m[12] - m[0], m[13] - m[1], m[14] - m[2], m[15] - m[3]));

	// Extract the BOTTOM plane
	planes.push_back(osg::Plane(m[12] + m[4], m[13] + m[5], m[14] + m[6], m[15] + m[7]));

	// Extract the TOP plane
	planes.push_back(osg::Plane(m[12] - m[4], m[13] - m[5], m[14] - m[6], m[15] - m[7]));

	// Extract the NEAR plane
	planes.push_back(osg::Plane(m[12] + m[8], m[13] + m[9], m[14] + m[10], m[15] + m[11]));

	// Extract the FAR plane
	planes.push_back(osg::Plane(m[12] - m[8], m[13] - m[9], m[14] - m[10], m[15] - m[11]));
}

};
