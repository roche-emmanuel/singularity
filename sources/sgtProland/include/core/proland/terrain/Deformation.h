#ifndef _TERRAIN_DEFORMATION_H_
#define _TERRAIN_DEFORMATION_H_

#include "sgtCommon.h"

#include "ork/scenegraph/SceneManager.h"
#include "ork/math/box2.h"
#include "ork/math/box3.h"

using namespace ork;

namespace proland {

class TerrainNode;
class TerrainQuad;

class SGTPROLAND_EXPORT Deformation : public sgt::Object {
public:
	Deformation();
	
	virtual ~Deformation();

    /**
     * Returns the deformed point corresponding to the given source point.
     *
     * @param localPt a point in the local (i.e., source) space.
     * @return the corresponding point in the deformed (i.e., destination) space.
     */
	virtual vec3d localToDeformed(const vec3d &localPt) const;

    /**
     * Returns the differential of the deformation function at the given local
     * point. This differential gives a linear approximation of the deformation
     * around a given point, represented with a matrix. More precisely, if p
     * is near localPt, then the deformed point corresponding to p can be
     * approximated with localToDeformedDifferential(localPt) * (p - localPt).
     *
     * @param localPt a point in the local (i.e., source) space. <i>The z
     *      coordinate of this point is ignored, and considered to be 0</i>.
     * @return the differential of the deformation function at the given local
     *      point.
     */
	virtual mat4d localToDeformedDifferential(const vec3d &localPt, bool clamp = false) const;

    /**
     * Returns the local point corresponding to the given source point.
     *
     * @param deformedPt a point in the deformed (i.e., destination) space.
     * @return the corresponding point in the local (i.e., source) space.
     */
    virtual vec3d deformedToLocal(const vec3d &deformedPt) const;

    /**
     * Returns the local bounding box corresponding to the given source disk.
     *
     * @param deformedPt the source disk center in deformed space.
     * @param deformedRadius the source disk radius in deformed space.
     * @return the local bounding box corresponding to the given source disk.
     */
    virtual box2f deformedToLocalBounds(const vec3d &deformedCenter, double deformedRadius) const;

    /**
     * Returns an orthonormal reference frame of the tangent space at the given
     * deformed point. This reference frame is such that its xy plane is the
     * tangent plane, at deformedPt, to the deformed surface corresponding to
     * the local plane z=0. Note that this orthonormal reference frame does
     * <i>not</i> give the differential of the inverse deformation funtion,
     * which in general is not an orthonormal transformation. If p is a deformed
     * point, then deformedToLocalFrame(deformedPt) * p gives the coordinates of
     * p in the orthonormal reference frame defined above.
     *
     * @param deformedPt a point in the deformed (i.e., destination) space.
     * @return the orthonormal reference frame at deformedPt defined above.
     */
    virtual mat4d deformedToTangentFrame(const vec3d &deformedPt) const;

    /**
     * Returns the distance in local (i.e., source) space between a point and a
     * bounding box.
     *
     * @param localPt a point in local space.
     * @param localBox a bounding box in local space.
     */
    virtual float getLocalDist(const vec3d &localPt, const box3d &localBox) const;

    /**
     * Returns the visibility of a bounding box in local space, in a view
     * frustum defined in deformed space.
     *
     * @param t a TerrainNode. This is node is used to get the camera position
     *      in local and deformed space with TerrainNode#getLocalCamera and
     *      TerrainNode#getDeformedCamera, as well as the view frustum planes
     *      in deformed space with TerrainNode#getDeformedFrustumPlanes.
     * @param localBox a bounding box in local space.
     * @return the visibility of the bounding box in the view frustum.
     */
    virtual SceneManager::visibility getVisibility(const TerrainNode *t, const box3d &localBox) const;

	virtual void setUniforms(TerrainNode* n) const;
	
	/** LUNA_IGNORED */
	virtual void setUniforms(TerrainQuad* q) const;

protected:
    /**
     * The transformation from camera space to screen space.
     */
    mutable mat4d cameraToScreen;

    /**
     * The transformation from local space to screen space.
     */
    mutable mat4d localToScreen;

    /**
     * The transformation from local space to tangent space (in z=0 plane).
     */
    mutable mat3f localToTangent;

	/** LUNA_IGNORED */
	virtual void setScreenUniforms(TerrainQuad* q) const;
};

};

#endif
