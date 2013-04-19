#ifndef _TERRAIN_TERRAINNODE_H_
#define _TERRAIN_TERRAINNODE_H_

#include "sgtLand.h"

#include "osg/MatrixTransform"
#include "osg/Polytope"
#include "osg/Viewport"
#include "osg/Geode"
#include "terrain/Deformation.h"
#include "terrain/TerrainQuad.h"
#include "math/mat2.h"
#include "osg/Uniform"

namespace sgt {

class SGTLAND_EXPORT TerrainNode : public osg::Node {
public:
	sgtPtr<Deformation> deform;

	sgtPtr<TerrainQuad> root;

	osg::ref_ptr<osg::Geode> tileGeode;

    /**
     * Describes how the %terrain quadtree must be subdivided based on the viewer
     * distance. For a field of view of 80 degrees, and a viewport width of 1024
     * pixels, a quad of size L will be subdivided into subquads if the viewer
     * distance is less than splitFactor * L. For a smaller field of view and/or
     * a larger viewport, the quad will be subdivided at a larger distance, so
     * that its size in pixels stays more or less the same. This number must be
     * strictly larger than 1.
     */
    float splitFactor;

    /**
     * True to subdivide invisible quads based on distance, like visible ones.
     * The default value of this flag is false.
     */
    bool splitInvisibleQuads;

    /**
     * True to perform horizon occlusion culling tests.
     */
    bool horizonCulling;

    /**
     * The maximum level at which the %terrain quadtree must be subdivided (inclusive).
     * The %terrain quadtree will never be subdivided beyond this level, even if the
     * viewer comes very close to the %terrain.
     */
    int maxLevel;

    /**
     * The %terrain elevation below the current viewer position. This field must be
     * updated manually by users (the TileSamplerZ class can do this for you).
     * It is used to compute the 3D distance between the viewer and a quad, to decide
     * whether this quad must be subdivided or not.
     */
    float groundHeightAtCamera;

    /**
     * The value #groundHeightAtCamera will have at the next frame.
     */
    float nextGroundHeightAtCamera;

	mat4d cameraToScreen; // The projection matrix

	mat4d localToCamera; // the modelView matrix

	mat4d localToWorld; // local to world matrix

	vec3d cameraWorldPos; // position of the camera in the world frame.
protected:
    /**
     * The current viewer position in the deformed %terrain space (see #deform).
     */
    vec3d deformedCameraPos;

    /**
     * The current viewer frustum planes in the deformed #terrain space (see #deform).
     */
	osg::Polytope::PlaneList frustumPlanes;

    /**
     * The current viewer position in the local %terrain space (see #deform).
     */
    vec3d localCameraPos;

    /**
     * The viewer distance at which a quad is subdivided, relatively to the quad size.
     */
    float splitDist;

    /**
     * The ratio between local and deformed lengths at #localCameraPos.
     */
    float distFactor;

    /**
     * Local reference frame used to compute horizon occlusion culling.
     */
    mat2f localCameraDir;

    /**
     * Rasterized horizon elevation angle for each azimuth angle.
     */
    float* horizon;

public:
	TerrainNode() {};

	TerrainNode(Deformation* deform, osg::Geode* tile, double half_size, double zmin, double zmax, float splitFactor, int maxLevel);
	
	virtual ~TerrainNode();

    /**
     * Returns the current viewer position in the deformed %terrain space
     * (see #deform). This position is updated by the #update method.
     */
    vec3d getDeformedCamera() const;

	/**
     * Returns the current viewer frustum planes in the deformed #terrain
     * space (see #deform). These planes are updated by the #update method.
     */
	const osg::Polytope::PlaneList& getDeformedFrustumPlanes() const;

    /**
     * Returns the current viewer position in the local %terrain space
     * (see #deform). This position is updated by the #update method.
     */
    vec3d getLocalCamera() const;

    /**
     * Returns the distance between the current viewer position and the
     * given bounding box. This distance is measured in the local %terrain
     * space (with Deformation#getLocalDist), with altitudes divided by
     * #getDistFactor() to take deformations into account.
     */
    float getCameraDist(const box3d &localBox) const;

    /**
     * Returns the visibility of the given bounding box from the current
     * viewer position. This visibility is computed with
     * Deformation#getVisbility.
     */
    LandManager::Visibility getVisibility(const box3d &localBox) const;

    /**
     * Returns the viewer distance at which a quad is subdivided, relatively
     * to the quad size. This relative distance is equal to #splitFactor for
     * a field of view of 80 degrees and a viewport width of 1024 pixels. It
     * is larger for smaller field of view angles and/or larger viewports.
     */
    float getSplitDistance() const;

    /**
     * Returns the ratio between local and deformed lengths at #getLocalCamera().
     */
    float getDistFactor() const;

	void update(const mat4d& ltow, const mat4d& viewMatrix, const mat4d& proj, osg::Viewport* vp);

    /**
     * Adds the given bounding box as an occluder. <i>The bounding boxes must
     * be added in front to back order</i>.
     *
     * @param occluder a bounding box in local (i.e. non deformed) coordinates.
     * @return true is the given bounding box is occluded by the bounding boxes
     *      previously added as occluders by this method.
     */
    bool addOccluder(const box3d &occluder);

    /**
     * Returns true if the given bounding box is occluded by the bounding boxes
     * previously added by #addOccluder().
     *
     * @param box a bounding box in local (i.e. non deformed) coordinates.
     * @return true is the given bounding box is occluded by the bounding boxes
     *      previously added as occluders by #addOccluder.
     **/
    bool isOccluded(const box3d &box);

	virtual void traverse(osg::NodeVisitor& nv);

	virtual osg::BoundingSphere computeBound() const;

public:
	osg::ref_ptr<osg::Uniform> blendingU;
	osg::ref_ptr<osg::Uniform> localToScreenU;
};

};

#endif
