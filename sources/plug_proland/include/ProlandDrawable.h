#ifndef _PROLAND_DRAWABLE_H_
#define _PROLAND_DRAWABLE_H_

#include "proland.h"

#include <osg/Drawable>
#include <iostream>
#include <fstream>
#include <cfloat>



#include "sgtCommon.h"

#include "tiffio.h"

#include "ork/core/FileLogger.h"
#include "ork/render/FrameBuffer.h"
#include "ork/taskgraph/MultithreadScheduler.h"
#include "ork/resource/XMLResourceLoader.h"
#include "ork/resource/ResourceTemplate.h"
#include "ork/scenegraph/ShowLogTask.h"
#include "ork/ui/GlutWindow.h"

#include "proland/TerrainPlugin.h"
#include "proland/EditPlugin.h"
#include "proland/OceanPlugin.h"
#include "proland/ForestPlugin.h"
#include "proland/terrain/TerrainNode.h"
#include "proland/terrain/TileSampler.h"
#include "proland/edit/EditElevationProducer.h"
#include "proland/edit/EditOrthoProducer.h"
#include "proland/preprocess/atmo/PreprocessAtmo.h"
#include "proland/ui/BasicViewHandler.h"
#include "proland/ui/EventRecorder.h"
#include "proland/ui/twbar/TweakBarManager.h"
#include "proland/util/PlanetViewController.h"

#include <osg/CoordinateSystemNode>
#include <osg/Timer>
#include <osgGA/GUIEventHandler>

namespace proland {

class ProlandDrawable : public osg::Drawable, public ViewManager {
public:
	ProlandDrawable() {};
	ProlandDrawable(const std::string& archive, const std::string& data) : _archive(archive), _data(data) {
		init();
	};
	ProlandDrawable(const ProlandDrawable& copy, const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY ) : osg::Drawable(copy, copyop), _archive(copy._archive), _data(copy._data) {
		init();
	}
	
	META_Object( proland, ProlandDrawable );
	
	virtual osg::BoundingBox computeBound() const;
	
	virtual void drawImplementation( osg::RenderInfo& ) const;
	
	~ProlandDrawable();
	

	// ---------------------------------------------------
	// Needed for ViewManager implementation:
	ptr<SceneManager> getScene();
	ptr<TerrainViewController> getViewController();
    vec3d getWorldCoordinates(int x, int y);
	// ---------------------------------------------------
	
	void reshape(int x, int y);
	
protected:	
	void init();
	void render();
	void updateResources();
	
	std::string _archive;
	std::string _data;
	float _radius;
	float _dr;
	double _lastTime;
	
	osg::Timer_t _startTick;
	
	// The output log file for proland calls:
	FileLogger::File* _out;
	
	ptr<ResourceManager> _manager;
	ptr<SceneManager> _scene;
	ptr<BasicViewHandler> _view;
	ptr<TerrainViewController> _controller;
};

};

#endif

