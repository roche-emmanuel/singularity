#ifndef _TERRAIN_TERRAINQUAD_H_
#define _TERRAIN_TERRAINQUAD_H_

#include "sgtLand.h"
#include <osg/Node>
#include <osg/Uniform>
#include "scene/LandManager.h"

namespace sgt {

class TerrainNode;

class SGTLAND_EXPORT TerrainQuad : public osg::Node {
public:
    /**
     * The parent quad of this quad.
     */
    sgtObserver<TerrainQuad> parent;

    /**
     * The level of this quad in the quadtree (0 for the root).
     */
    const int level;

    /**
     * The logical x coordinate of this quad (between 0 and 2^level).
     */
    const int tx;

    /**
     * The logical y coordinate of this quad (between 0 and 2^level).
     */
    const int ty;

    /**
     * The physical x coordinate of the lower left corner of this quad
     * (in local space).
     */
    const double ox;

    /**
     * The physical y coordinate of the lower left corner of this quad
     * (in local space).
     */
    const double oy;

    /**
     * The physical size of this quad (in local space).
     */
    const double l;

    /**
     * The minimum %terrain elevation inside this quad. This field must
     * be updated manually by users (the TileSamplerZ class can
     * do this for you).
     */
    float zmin;

    /**
     * The maximum %terrain elevation inside this quad. This field must
     * be updated manually by users (the TileSamplerZ class can
     * do this for you).
     */
    float zmax;

    /**
     * The four subquads of this quad. If this quad is not subdivided,
     * the four values are NULL. The subquads are stored in the
     * following order: bottomleft, bottomright, topleft, topright.
     */
    sgtPtr<TerrainQuad> children[4];

    /**
     * The visibility of the bounding box of this quad from the current
     * viewer position. The bounding box is computed using #zmin and
     * #zmax, which must therefore be up to date to get a correct culling
     * of quads out of the view frustum. This visibility only takes frustum
     * culling into account.
     */
    LandManager::Visibility visible;

    /**
     * True if the bounding box of this quad is occluded by the bounding
     * boxes of the quads in front of it.
     */
    bool occluded;

    /**
     * True if the quad is invisible, or if all its associated tiles are
     * produced and available in cache (this may not be the case if the
     * asynchronous mode is used in a TileSampler).
     */
    bool drawable;


public:
	TerrainQuad(TerrainNode *owner, TerrainQuad *parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax);
	
	virtual ~TerrainQuad();

    /**
     * Returns true if this quad is not subdivided.
     */
    bool isLeaf() const;

    /**
     * Returns the number of quads in the tree below this quad.
     */
    int getSize() const;

    /**
     * Returns the depth of the tree below this quad.
     */
    int getDepth() const;

    /**
     * Subdivides or unsubdivides this quad based on the current
     * viewer distance to this quad, relatively to its size. This
     * method uses the current viewer position provided by the
     * TerrainNode to which this quadtree belongs.
     */
    void update();

	virtual void traverse(osg::NodeVisitor& nv);

	virtual osg::BoundingSphere computeBound() const;

    /**
     * Returns the TerrainNode to which the %terrain quadtree belongs.
     */
    TerrainNode *getOwner();

protected:
    /**
     * The TerrainNode to which this %terrain quadtree belongs.
     */
    TerrainNode* _owner;

    /**
     * Creates the four subquads of this quad.
     */
    void subdivide();


public:
	osg::ref_ptr<osg::Uniform> screenQuadCornersU;
	osg::ref_ptr<osg::Uniform> screenQuadVerticalsU;
	osg::ref_ptr<osg::Uniform> offsetU;
	osg::ref_ptr<osg::Uniform> cameraU;
	osg::ref_ptr<osg::Uniform> tileToTangentU;
	
};

};

#endif
