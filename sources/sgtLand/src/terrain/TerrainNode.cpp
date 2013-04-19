#include "terrain/TerrainNode.h"
#include "osgUtil/CullVisitor"

#define HORIZON_SIZE 256

namespace sgt {

class TerrainCullCB : public osg::NodeCallback {
public:
	virtual void operator() (osg::Node *node, osg::NodeVisitor *nv) {
		TerrainNode* t = dynamic_cast<TerrainNode*>(node);
		CHECK(t,"Invalid terrain node object");
		
		osgUtil::CullVisitor* cv = dynamic_cast<osgUtil::CullVisitor*>(nv);
		CHECK(cv,"Invalid cull visitor object");

		osg::Matrixd ltow = osg::computeLocalToWorld(nv->getNodePath());
		osg::Matrixd viewMatrix = osg::Matrixd::inverse(ltow)*(*cv->getModelViewMatrix());
		
		t->update(ltow,viewMatrix,*cv->getProjectionMatrix(),cv->getViewport());
		
		traverse(node,nv);
	}
};

TerrainNode::TerrainNode(Deformation* deform, osg::Geode* tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel) 
: deform(deform), tileGeode(tile), splitFactor(splitFactor), maxLevel(maxLevel) {
	THROW_IF(!deform,"Invalid deformation for terrain node.");
	THROW_IF(!tile,"Invalid tile geode for terrain node.");
	root = new TerrainQuad(this, NULL, 0, 0, -half_size, -half_size, 2.0 * half_size, zmin, zmax);
	splitInvisibleQuads = false;
	horizonCulling = true;
	splitDist = 1.1f;
	horizon = new float[HORIZON_SIZE];
	
	// Assign a cull callback to this node:
	setCullCallback(new TerrainCullCB);
	setCullingActive(false); // no culling for this node.

	// Create the needed uniforms:
	osg::StateSet* ss = getOrCreateStateSet();
	blendingU = new osg::Uniform(osg::Uniform::FLOAT_VEC2,"deformation.blending");
	ss->addUniform(blendingU);

	localToScreenU = new osg::Uniform(osg::Uniform::FLOAT_MAT4,"deformation.localToScreen");
	ss->addUniform(localToScreenU);
}

TerrainNode::~TerrainNode() {
	delete [] horizon;
}

vec3d TerrainNode::getDeformedCamera() const
{
	return deformedCameraPos;
}

const osg::Polytope::PlaneList& TerrainNode::getDeformedFrustumPlanes() const
{
	return frustumPlanes;
}

vec3d TerrainNode::getLocalCamera() const
{
	return localCameraPos;
}

float TerrainNode::getCameraDist(const box3d &localBox) const
{
	return (float) max(abs(localCameraPos.z - localBox.zmax) / distFactor,
		max(min(abs(localCameraPos.x - localBox.xmin), abs(localCameraPos.x - localBox.xmax)),
		min(abs(localCameraPos.y - localBox.ymin), abs(localCameraPos.y - localBox.ymax))));
}

LandManager::Visibility TerrainNode::getVisibility(const box3d &localBox) const
{
	return deform->getVisibility(this, localBox);
}

float TerrainNode::getSplitDistance() const
{
	CHECK_RET(isFinite(splitDist),0.0f,"Infinite splitDist.");
	CHECK_RET(splitDist > 1.0f,0.0f,"SplitDist too small: "<<splitDist);
	return splitDist;
}

float TerrainNode::getDistFactor() const
{
	return distFactor;
}

void TerrainNode::update(const mat4d& ltow, const mat4d& viewMatrix, const mat4d& proj, osg::Viewport* vp)
{
	CHECK(vp,"Invalid viewport argument.");

	mat4d modelView = viewMatrix*ltow;

	localToCamera = modelView;
	cameraToScreen = proj;
	localToWorld = ltow;
	cameraWorldPos = viewMatrix.inverse()*vec3d.ZERO;

	mat4d mvp = proj*modelView;
	mat4d modelViewInv = modelView.inverse();

	deformedCameraPos = modelViewInv*vec3d.ZERO;
	LandManager::getFrustumPlanes(mvp, frustumPlanes);
	localCameraPos = deform->deformedToLocal(deformedCameraPos);

	mat4d m = deform->localToDeformedDifferential(localCameraPos, true);
	distFactor = max(vec3d(m[0][0], m[1][0], m[2][0]).length(), vec3d(m[0][1], m[1][1], m[2][1]).length());

	osg::Vec3d left = frustumPlanes[0].getNormal();
	osg::Vec3d right = frustumPlanes[1].getNormal();
	left.normalize();
	right.normalize();

	float fov = (float) safe_acos(-left*right);
	splitDist = splitFactor * vp->width() / 1024.0f * tan(osg::DegreesToRadians(40.0f)) / tan(fov / 2.0f);
	if (splitDist < 1.1f || !(isFinite(splitDist))) {
		splitDist = 1.1f;
	}

	// initializes data structures for horizon occlusion culling
	if (horizonCulling && localCameraPos.z <= root->zmax) {
		vec3d deformedDir = modelViewInv * vec3d.UNIT_Z;
		vec2d localDir = (deform->deformedToLocal(deformedDir) - localCameraPos).xy().normalize();
		localCameraDir = mat2f(localDir.y, -localDir.x, -localDir.x, -localDir.y);
		for (int i = 0; i < HORIZON_SIZE; ++i) {
			horizon[i] = -INFINITY;
		}
	}

	// update the default uniforms:
	deform->setUniforms(this);
	
	root->update();
}

bool TerrainNode::addOccluder(const box3d &occluder)
{
	if (!horizonCulling || localCameraPos.z > root->zmax) {
		return false;
	}
	vec2f corners[4];
	vec2d o = vec2d(localCameraPos.x,localCameraPos.y);
	corners[0] = localCameraDir * (vec2d(occluder.xmin, occluder.ymin) - o).cast<float>();
	corners[1] = localCameraDir * (vec2d(occluder.xmin, occluder.ymax) - o).cast<float>();
	corners[2] = localCameraDir * (vec2d(occluder.xmax, occluder.ymin) - o).cast<float>();
	corners[3] = localCameraDir * (vec2d(occluder.xmax, occluder.ymax) - o).cast<float>();
	if (corners[0].y <= 0.0f || corners[1].y <= 0.0f || corners[2].y <= 0.0f || corners[3].y <= 0.0f) {
		// skips bounding boxes that are not fully behind the "near plane"
		// of the reference frame used for horizon occlusion culling
		return false;
	}
	float dzmin = float(occluder.zmin - localCameraPos.z);
	float dzmax = float(occluder.zmax - localCameraPos.z);
	vec3f bounds[4];
	bounds[0] = vec3f(corners[0].x, dzmin, dzmax) / corners[0].y;
	bounds[1] = vec3f(corners[1].x, dzmin, dzmax) / corners[1].y;
	bounds[2] = vec3f(corners[2].x, dzmin, dzmax) / corners[2].y;
	bounds[3] = vec3f(corners[3].x, dzmin, dzmax) / corners[3].y;
	float xmin = min(min(bounds[0].x, bounds[1].x), min(bounds[2].x, bounds[3].x)) * 0.33f + 0.5f;
	float xmax = max(max(bounds[0].x, bounds[1].x), max(bounds[2].x, bounds[3].x)) * 0.33f + 0.5f;
	float zmin = min(min(bounds[0].y, bounds[1].y), min(bounds[2].y, bounds[3].y));
	float zmax = max(max(bounds[0].z, bounds[1].z), max(bounds[2].z, bounds[3].z));

	int imin = max(int(floor(xmin * HORIZON_SIZE)), 0);
	int imax = min(int(ceil(xmax * HORIZON_SIZE)), HORIZON_SIZE - 1);

	// first checks if the bounding box projection is below the current horizon line
	bool occluded = imax >= imin;
	for (int i = imin; i <= imax; ++i) {
		if (zmax > horizon[i]) {
			occluded = false;
			break;
		}
	}
	if (!occluded) {
		// if it is not, updates the horizon line with the projection of this bounding box
		imin = max(int(ceil(xmin * HORIZON_SIZE)), 0);
		imax = min(int(floor(xmax * HORIZON_SIZE)), HORIZON_SIZE - 1);
		for (int i = imin; i <= imax; ++i) {
			horizon[i] = max(horizon[i], zmin);
		}
	}
	return occluded;
}

bool TerrainNode::isOccluded(const box3d &box)
{
	if (!horizonCulling || localCameraPos.z > root->zmax) {
		return false;
	}
	vec2f corners[4];
	vec2d o = vec2d(localCameraPos.x,localCameraPos.y);
	corners[0] = localCameraDir * (vec2d(box.xmin, box.ymin) - o).cast<float>();
	corners[1] = localCameraDir * (vec2d(box.xmin, box.ymax) - o).cast<float>();
	corners[2] = localCameraDir * (vec2d(box.xmax, box.ymin) - o).cast<float>();
	corners[3] = localCameraDir * (vec2d(box.xmax, box.ymax) - o).cast<float>();
	if (corners[0].y <= 0.0f || corners[1].y <= 0.0f || corners[2].y <= 0.0f || corners[3].y <= 0.0f) {
		return false;
	}
	float dz = float(box.zmax - localCameraPos.z);
	corners[0] = vec2f(corners[0].x, dz) / corners[0].y;
	corners[1] = vec2f(corners[1].x, dz) / corners[1].y;
	corners[2] = vec2f(corners[2].x, dz) / corners[2].y;
	corners[3] = vec2f(corners[3].x, dz) / corners[3].y;
	float xmin = min(min(corners[0].x, corners[1].x), min(corners[2].x, corners[3].x)) * 0.33f + 0.5f;
	float xmax = max(max(corners[0].x, corners[1].x), max(corners[2].x, corners[3].x)) * 0.33f + 0.5f;
	float zmax = max(max(corners[0].y, corners[1].y), max(corners[2].y, corners[3].y));
	int imin = max(int(floor(xmin * HORIZON_SIZE)), 0);
	int imax = min(int(ceil(xmax * HORIZON_SIZE)), HORIZON_SIZE - 1);
	for (int i = imin; i <= imax; ++i) {
		if (zmax > horizon[i]) {
			return false;
		}
	}
	return imax >= imin;
}

void TerrainNode::traverse(osg::NodeVisitor& nv)
{
	// traverse the quad tree.
	root->accept(nv);
}

osg::BoundingSphere TerrainNode::computeBound() const
{
	// Compute the bounding sphere:
	// we should take into account the deformation here.
	osg::BoundingSphere bsphere;
	//bsphere.radius() = max(root->l*sqrt(2.0),max(abs(root->zmax),abs(root->zmin)));
	trWARN("TerrainNode","computeBound() is not implemented.");
	return bsphere;
}

};

