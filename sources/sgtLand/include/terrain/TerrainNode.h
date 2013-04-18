#ifndef _TERRAIN_TERRAINNODE_H_
#define _TERRAIN_TERRAINNODE_H_

#include "sgtCommon.h"
#include "osg/MatrixTransform"
#include "osg/Polytope"

namespace sgt {

class SGTLAND_EXPORT TerrainNode : public osg::MatrixTransform {
protected:
	osg::Polytope::PlaneList _frustumPlanes;

public:
	TerrainNode();
	
	virtual ~TerrainNode();

	/**
     * Returns the current viewer frustum planes in the deformed #terrain
     * space (see #deform). These planes are updated by the #update method.
     */
	const osg::Polytope::PlaneList& getDeformedFrustumPlanes() const;
};

};

#endif
