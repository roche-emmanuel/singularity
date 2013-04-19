#include "terrain/Deformation.h"
#include "terrain/TerrainNode.h"
#include "terrain/TerrainQuad.h"

namespace sgt {

Deformation::Deformation() {

}

Deformation::~Deformation() {

}

vec3d Deformation::localToDeformed(const vec3d &localPt) const
{
	return localPt;
}

mat4d Deformation::localToDeformedDifferential(const vec3d &localPt, bool clamp) const
{
	return mat4d::translate(vec3d(localPt.x, localPt.y, 0.0));
}

vec3d Deformation::deformedToLocal(const vec3d &deformedPt) const
{
	return deformedPt;
}

box2f Deformation::deformedToLocalBounds(const vec3d &deformedCenter, double deformedRadius) const
{
	return box2f(deformedCenter.x - deformedRadius, deformedCenter.x + deformedRadius,
		deformedCenter.y - deformedRadius, deformedCenter.y + deformedRadius);
}

mat4d Deformation::deformedToTangentFrame(const vec3d &deformedPt) const
{
	return mat4d::translate(vec3d(-deformedPt.x, -deformedPt.y, 0.0));
}

float Deformation::getLocalDist(const vec3d &localPt, const box3d &localBox) const
{
	return (float) max(abs(localPt.z - localBox.zmax),
		max(min(abs(localPt.x - localBox.xmin), abs(localPt.x - localBox.xmax)),
		min(abs(localPt.y - localBox.ymin), abs(localPt.y - localBox.ymax))));
}

LandManager::Visibility Deformation::getVisibility(const TerrainNode *t, const box3d &localBox) const
{
	// localBox = deformedBox, so we can compare the deformed frustum with it
	return LandManager::getVisibility(t->getDeformedFrustumPlanes(), localBox);
}

void Deformation::setUniforms(TerrainNode* n) const
{
	// setup blending:
	float d1 = n->getSplitDistance() + 1.0f;
	float d2 = 2.0f * n->getSplitDistance();
	n->blendingU->set(osg::Vec2(d1, d2 - d1));


	cameraToScreen = n->cameraToScreen;
	localToScreen =n->cameraToScreen * n->localToCamera;
	n->localToScreenU->set(localToScreen.toMatrixd());

	//trDEBUG("Deformation","Setting up localToScreen uniform "<<localToScreen);

	vec3d localCameraPos = n->getLocalCamera();
	vec3d worldCamera = n->cameraWorldPos;
	vec3d deformedCamera = localToDeformed(localCameraPos);
	mat4d A = localToDeformedDifferential(localCameraPos);
	mat4d B = deformedToTangentFrame(worldCamera);
	mat4d ltow = n->localToWorld;
	mat4d ltot = B * ltow * A;
	localToTangent = mat3f(ltot[0][0], ltot[0][1], ltot[0][3],
		ltot[1][0], ltot[1][1], ltot[1][3],
		ltot[3][0], ltot[3][1], ltot[3][3]);

}

void Deformation::setUniforms(TerrainQuad* q) const
{
	osg::Vec4 offset(q->ox, q->oy, q->l, q->level);
	q->offsetU->set(offset);

	//trDEBUG("Deformation","Setting up offset uniform "<<offset);


	vec3d camera = q->getOwner()->getLocalCamera();
	q->cameraU->set(osg::Vec4(float((camera.x - q->ox) / q->l),
		float((camera.y - q->oy) / q->l),
		float((camera.z - q->getOwner()->groundHeightAtCamera) / (q->l * q->getOwner()->getDistFactor())),
		camera.z));


	vec3d c = q->getOwner()->getLocalCamera();
	mat3f m = localToTangent * mat3f(q->l, 0.0, q->ox - c.x, 0.0, q->l, q->oy - c.y, 0.0, 0.0, 1.0);
	q->tileToTangentU->set(m.toMatrix3());


	setScreenUniforms(q);
}

void Deformation::setScreenUniforms(TerrainQuad* q) const
{
	vec3d p0 = vec3d(q->ox, q->oy, 0.0);
	vec3d p1 = vec3d(q->ox + q->l, q->oy, 0.0);
	vec3d p2 = vec3d(q->ox, q->oy + q->l, 0.0);
	vec3d p3 = vec3d(q->ox + q->l, q->oy + q->l, 0.0);

	mat4d corners = mat4d(
		p0.x, p1.x, p2.x, p3.x,
		p0.y, p1.y, p2.y, p3.y,
		p0.z, p1.z, p2.z, p3.z,
		1.0, 1.0, 1.0, 1.0);
	q->screenQuadCornersU->set((localToScreen * corners).toMatrixd());


	mat4d verticals = mat4d(
		0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0,
		1.0, 1.0, 1.0, 1.0,
		0.0, 0.0, 0.0, 0.0);
	q->screenQuadVerticalsU->set((localToScreen * verticals).toMatrixd());
}

};

