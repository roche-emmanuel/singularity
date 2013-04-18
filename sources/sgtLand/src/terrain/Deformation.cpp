#include "terrain/Deformation.h"
#include "terrain/TerrainNode.h"

namespace sgt {

Deformation::Deformation() {

}

Deformation::~Deformation() {

}

osg::Vec3d Deformation::localToDeformed(const osg::Vec3d &localPt) const
{
	return localPt;
}

osg::Matrixd Deformation::localToDeformedDifferential(const osg::Vec3d &localPt, bool clamp) const
{
	return osg::Matrixd::translate(osg::Vec3d(localPt.x(), localPt.y(), 0.0));
}

osg::Vec3d Deformation::deformedToLocal(const osg::Vec3d &deformedPt) const
{
	return deformedPt;
}

box2f Deformation::deformedToLocalBounds(const osg::Vec3d &deformedCenter, double deformedRadius) const
{
	return box2f(deformedCenter.x() - deformedRadius, deformedCenter.x() + deformedRadius,
		deformedCenter.y() - deformedRadius, deformedCenter.y() + deformedRadius);
}

osg::Matrixd Deformation::deformedToTangentFrame(const osg::Vec3d &deformedPt) const
{
	return osg::Matrixd::translate(osg::Vec3d(-deformedPt.x(), -deformedPt.y(), 0.0));
}

float Deformation::getLocalDist(const osg::Vec3d &localPt, const box3d &localBox) const
{
	return (float) max(abs(localPt.z() - localBox.zmax),
		max(min(abs(localPt.x() - localBox.xmin), abs(localPt.x() - localBox.xmax)),
		min(abs(localPt.y() - localBox.ymin), abs(localPt.y() - localBox.ymax))));
}

LandManager::Visibility Deformation::getVisibility(const TerrainNode *t, const box3d &localBox) const
{
	// localBox = deformedBox, so we can compare the deformed frustum with it
	return LandManager::getVisibility(t->getDeformedFrustumPlanes(), localBox);
}

};

