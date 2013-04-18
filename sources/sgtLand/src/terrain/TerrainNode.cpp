#include "terrain/TerrainNode.h"

namespace sgt {

TerrainNode::TerrainNode() {

}

TerrainNode::~TerrainNode() {

}

const osg::Polytope::PlaneList& TerrainNode::getDeformedFrustumPlanes() const
{
	return _frustumPlanes;
}

};

