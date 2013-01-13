#ifndef KINECTDATADRAWER_H_
#define KINECTDATADRAWER_H_

#include "KinectHandler.h"

#include <osg/Point>
#include <osg/Texture2D>
#include <osg/Geometry>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/Viewer>

class KinectDataDrawer : public KinectHandler
{
public:
    KinectDataDrawer()
    {
        image = new osg::Image;
        image->setImage( KINECT_IMAGE_WIDTH, KINECT_IMAGE_HEIGHT, 1,
                         1, GL_LUMINANCE, GL_UNSIGNED_BYTE, _depthBuffer, osg::Image::NO_DELETE );
        
        skeletonGeom = new osg::Geometry;
        skeletonGeom->setUseDisplayList( false );
        skeletonGeom->setUseVertexBufferObjects( true );
        skeletonGeom->setVertexArray( _points.get() );
        
        osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array(1);
        (*colors)[0] = osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f);
        skeletonGeom->setColorArray( colors.get() );
        skeletonGeom->setColorBinding( osg::Geometry::BIND_OVERALL );
        
        osg::ref_ptr<osg::DrawElementsUInt> de = new osg::DrawElementsUInt(GL_LINES);
        // Backbone
        de->push_back( NUI_SKELETON_POSITION_HIP_CENTER );
        de->push_back( NUI_SKELETON_POSITION_SPINE );
        de->push_back( NUI_SKELETON_POSITION_SPINE );
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_CENTER );
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_CENTER );
        de->push_back( NUI_SKELETON_POSITION_HEAD );
        // Left arm
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_LEFT );
        de->push_back( NUI_SKELETON_POSITION_ELBOW_LEFT );
        de->push_back( NUI_SKELETON_POSITION_ELBOW_LEFT );
        de->push_back( NUI_SKELETON_POSITION_WRIST_LEFT );
        de->push_back( NUI_SKELETON_POSITION_WRIST_LEFT );
        de->push_back( NUI_SKELETON_POSITION_HAND_LEFT );
        // Right arm
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_ELBOW_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_ELBOW_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_WRIST_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_WRIST_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_HAND_RIGHT );
        // Left leg
        de->push_back( NUI_SKELETON_POSITION_HIP_LEFT );
        de->push_back( NUI_SKELETON_POSITION_KNEE_LEFT );
        de->push_back( NUI_SKELETON_POSITION_KNEE_LEFT );
        de->push_back( NUI_SKELETON_POSITION_ANKLE_LEFT );
        de->push_back( NUI_SKELETON_POSITION_ANKLE_LEFT );
        de->push_back( NUI_SKELETON_POSITION_FOOT_LEFT );
        // Right leg
        de->push_back( NUI_SKELETON_POSITION_HIP_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_KNEE_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_KNEE_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_ANKLE_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_ANKLE_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_FOOT_RIGHT );
        // Others
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_CENTER );
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_LEFT );
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_CENTER );
        de->push_back( NUI_SKELETON_POSITION_SHOULDER_RIGHT );
        de->push_back( NUI_SKELETON_POSITION_HIP_CENTER );
        de->push_back( NUI_SKELETON_POSITION_HIP_LEFT );
        de->push_back( NUI_SKELETON_POSITION_HIP_CENTER );
        de->push_back( NUI_SKELETON_POSITION_HIP_RIGHT );
        
        skeletonGeom->addPrimitiveSet( de.get() );
        skeletonGeom->addPrimitiveSet( new osg::DrawArrays(GL_POINTS, 0, NUI_SKELETON_POSITION_COUNT) );
    }
    
    virtual void handleCurrentData()
    {
        image->dirty();
        skeletonGeom->dirtyBound();
    }
  
	inline osg::Image* getImage() {
		return image.get();
	}
	
	inline osg::Geometry* getSkeleton() {
		return skeletonGeom.get();
	}
	
protected:  
    osg::ref_ptr<osg::Image> image;
    osg::ref_ptr<osg::Geometry> skeletonGeom;
};

#endif

