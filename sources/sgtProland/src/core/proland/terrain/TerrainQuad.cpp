#include "proland/terrain/TerrainQuad.h"
#include "scene/LandManager.h"
#include "proland/terrain/TerrainNode.h"

namespace proland {

TerrainQuad::TerrainQuad(TerrainNode *owner, TerrainQuad *parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)
: _owner(owner), parent(parent), level(parent == NULL ? 0 : parent->level + 1), tx(tx), ty(ty),
ox(ox), oy(oy), l(l), zmin(zmin), zmax(zmax), occluded(false), drawable(true) {
	setCullingActive(false); // no culling.

	// Create the needed uniforms:
	osg::StateSet* ss = getOrCreateStateSet();
	screenQuadCornersU = new osg::Uniform(osg::Uniform::FLOAT_MAT4,"deformation.screenQuadCorners");
	ss->addUniform(screenQuadCornersU);

	screenQuadVerticalsU = new osg::Uniform(osg::Uniform::FLOAT_MAT4,"deformation.screenQuadVerticals");
	ss->addUniform(screenQuadVerticalsU);

	offsetU = new osg::Uniform(osg::Uniform::FLOAT_VEC4,"deformation.offset");
	ss->addUniform(offsetU);

	cameraU = new osg::Uniform(osg::Uniform::FLOAT_VEC4,"deformation.camera");
	ss->addUniform(cameraU);

	tileToTangentU = new osg::Uniform(osg::Uniform::FLOAT_MAT3,"deformation.tileToTangent");
	ss->addUniform(tileToTangentU);
}

TerrainQuad::~TerrainQuad() {

}

TerrainNode *TerrainQuad::getOwner()
{
	return _owner;
}

bool TerrainQuad::isLeaf() const
{
	return children[0] == NULL;
}

int TerrainQuad::getSize() const
{
	int s = 1;
	if (isLeaf()) {
		return s;
	} else {
		return s + children[0]->getSize() + children[1]->getSize() +
			children[2]->getSize() + children[3]->getSize();
	}
}

int TerrainQuad::getDepth() const
{
	if (isLeaf()) {
		return level;
	} else {
		return max(max(children[0]->getDepth(), children[1]->getDepth()),
			max(children[2]->getDepth(), children[3]->getDepth()));
	}
}

void TerrainQuad::update()
{
	SceneManager::visibility v = parent == NULL ? SceneManager::PARTIALLY_VISIBLE : parent->visible;
	if (v == SceneManager::PARTIALLY_VISIBLE) {
		box3d localBox(ox, ox + l, oy, oy + l, zmin, zmax);
		visible = _owner->getVisibility(localBox);
	} else {
		visible = v;
	}

	// here we reuse the occlusion test from the previous frame:
	// if the quad was found unoccluded in the previous frame, we suppose it is
	// still unoccluded at this frame. If it was found occluded, we perform
	// an occlusion test to check if it is still occluded.
	if (visible != SceneManager::INVISIBLE && occluded) {
		occluded = _owner->isOccluded(box3d(ox, ox + l, oy, oy + l, zmin, zmax));
		if (occluded) {
			visible = SceneManager::INVISIBLE;
		}
	}

	double ground = _owner->groundHeightAtCamera;
	float dist = _owner->getCameraDist(box3d(ox, ox + l, oy, oy + l, osg::minimum(0.0, ground), osg::maximum(0.0, ground)));

	if ((_owner->splitInvisibleQuads || visible != SceneManager::INVISIBLE) && dist < l * _owner->getSplitDistance() && level < _owner->maxLevel) {
		if (isLeaf()) {
			subdivide();
		}

		int order[4];
		double ox = _owner->getLocalCamera().x;
		double oy = _owner->getLocalCamera().y;
		double cx = this->ox + l / 2.0;
		double cy = this->oy + l / 2.0;
		if (oy < cy) {
			if (ox < cx) {
				order[0] = 0;
				order[1] = 1;
				order[2] = 2;
				order[3] = 3;
			} else {
				order[0] = 1;
				order[1] = 0;
				order[2] = 3;
				order[3] = 2;
			}
		} else {
			if (ox < cx) {
				order[0] = 2;
				order[1] = 0;
				order[2] = 3;
				order[3] = 1;
			} else {
				order[0] = 3;
				order[1] = 1;
				order[2] = 2;
				order[3] = 0;
			}
		}

		children[order[0]]->update();
		children[order[1]]->update();
		children[order[2]]->update();
		children[order[3]]->update();

		// we compute a more precise occlusion for the next frame (see above),
		// by combining the occlusion status of the child nodes
		occluded = children[0]->occluded && children[1]->occluded && children[2]->occluded && children[3]->occluded;
	} else {
		if (visible != SceneManager::INVISIBLE) {
			// we add the bounding box of this quad to the occluders list
			occluded = _owner->addOccluder(box3d(ox, ox + l, oy, oy + l, zmin, zmax));
			if (occluded) {
				visible = SceneManager::INVISIBLE;
			}
		}
		if (!isLeaf()) {
			children[0] = NULL;
			children[1] = NULL;
			children[2] = NULL;
			children[3] = NULL;
		}
	}

	//trDEBUG("TerrainQuad","Updating quad ("<<tx<<", "<<ty<<", "<<level<<")");

	_owner->deform->setUniforms(this);
}

void TerrainQuad::subdivide()
{
	float hl = (float) l / 2.0f;
	children[0] = new TerrainQuad(_owner, this, 2 * tx, 2 * ty, ox, oy, hl, zmin, zmax);
	children[1] = new TerrainQuad(_owner, this, 2 * tx + 1, 2 * ty, ox + hl, oy, hl, zmin, zmax);
	children[2] = new TerrainQuad(_owner, this, 2 * tx, 2 * ty + 1, ox, oy + hl, hl, zmin, zmax);
	children[3] = new TerrainQuad(_owner, this, 2 * tx + 1, 2 * ty + 1, ox + hl, oy + hl, hl, zmin, zmax);
}

void TerrainQuad::traverse(osg::NodeVisitor& nv)
{
	if(isLeaf()) {
		//trDEBUG("TerrainQuad","Traversing geode on level "<<level);
		_owner->tileGeode->accept(nv);
	}
	else {
		//trDEBUG("TerrainQuad","Traversing children on level "<<level);
		children[0]->accept(nv);
		children[1]->accept(nv);
		children[2]->accept(nv);
		children[3]->accept(nv);
	}
}

osg::BoundingSphere TerrainQuad::computeBound() const
{
	// Compute the bounding sphere:
	osg::BoundingSphere bsphere;
	//bsphere.center() = osg::Vec3d();
	//bsphere.radius() = max(l*sqrt(2.0),max(abs(zmax),abs(zmin)));
	trWARN("TerrainQuad","computeBound() is not implemented.");
	return bsphere;
}


};

