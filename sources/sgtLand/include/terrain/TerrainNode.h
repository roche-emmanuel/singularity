#ifndef _TERRAIN_TERRAINNODE_H_
#define _TERRAIN_TERRAINNODE_H_

#include "sgtCommon.h"
#include "osg/MatrixTransform"

namespace sgt {

class SGTLAND_EXPORT TerrainNode : public osg::MatrixTransform {
public:
	TerrainNode();
	
	virtual ~TerrainNode();
};

};

#endif
