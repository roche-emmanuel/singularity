#include "ProlandDrawable.h"

using namespace ork;
using namespace proland;

class ProlandEventHandler : public osgGA::GUIEventHandler {
public:
	ProlandEventHandler() {};
	
	virtual bool handle (const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &aa, osg::Object * obj, osg::NodeVisitor * nv);
};

ork::EventHandler::button mapButton(int id) {
	switch(id) {
	case osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON:
		return EventHandler::LEFT_BUTTON;
	case osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON:
		return EventHandler::RIGHT_BUTTON;
	case osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON:
		return EventHandler::MIDDLE_BUTTON;
	}
	
	CHECK_RET(false,EventHandler::LEFT_BUTTON,"Invalid mapping for button press: id="<<id);
	return EventHandler::LEFT_BUTTON;
}

ork::EventHandler::modifier mapMods(int mods) {
	int res = 0;
	if(mods & osgGA::GUIEventAdapter::MODKEY_SHIFT) {
		res |= EventHandler::SHIFT;
	}
	if(mods & osgGA::GUIEventAdapter::MODKEY_CTRL) {
		res |= EventHandler::CTRL;
	}
	if(mods & osgGA::GUIEventAdapter::MODKEY_ALT) {
		res |= EventHandler::ALT;
	}
	return (ork::EventHandler::modifier)res;
}

ork::EventHandler::wheel mapScroll(int motion) {
	if(motion==osgGA::GUIEventAdapter::SCROLL_UP) {
		return EventHandler::WHEEL_UP;
	}
	if(motion==osgGA::GUIEventAdapter::SCROLL_DOWN) {
		return EventHandler::WHEEL_DOWN;
	}

	CHECK_RET(false,EventHandler::WHEEL_UP,"Invalid mapping for scroll motion: motion="<<motion);
	return EventHandler::WHEEL_UP;
}

bool ProlandEventHandler::handle(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &aa, osg::Object * obj, osg::NodeVisitor * nv) {
	
	ProlandDrawable* land = dynamic_cast<ProlandDrawable*>(obj);
	CHECK_RET(land,false,"Invalid proland drawable object.");
	
	int xx = ea.getX();
	int yy = ea.getWindowHeight() - ea.getY();

	//trDEBUG("Proland","Receiving event...");
	switch ( ea.getEventType() )
    {
	case osgGA::GUIEventAdapter::RESIZE:
		trDEBUG("Proland","Handling resize event.");
		land->reshape(ea.getWindowWidth(),ea.getWindowHeight());
		return false;
	case osgGA::GUIEventAdapter::PUSH:
		trDEBUG("Proland","Mouse button pressed.");
		return land->mouseClick(mapButton(ea.getButton()),EventHandler::DOWN,mapMods(ea.getModKeyMask()),xx,yy);
	case osgGA::GUIEventAdapter::RELEASE:
		trDEBUG("Proland","Mouse button release.");
		return land->mouseClick(mapButton(ea.getButton()),EventHandler::UP,mapMods(ea.getModKeyMask()),xx,yy);
	case osgGA::GUIEventAdapter::MOVE:
		//trDEBUG("Proland","Mouse button move at "<< xx<<", "<< yy);
		return land->mousePassiveMotion(xx,yy);
	case osgGA::GUIEventAdapter::DRAG:
		//trDEBUG("Proland","Mouse button drag at "<< xx<<", "<< yy);
		return land->mouseMotion(xx,yy);
	case osgGA::GUIEventAdapter::SCROLL:
		trDEBUG("Proland","Mouse scroll");
		return land->mouseWheel(mapScroll(ea.getScrollingMotion()), mapMods(ea.getModKeyMask()), xx, yy);
	};
	
	return false;
}

osg::BoundingBox ProlandDrawable::computeBound() const
{
	double size = osg::WGS_84_RADIUS_EQUATOR;
    osg::Vec3 mini(-size,-size,-size), maxi(size, size, size);
    return osg::BoundingBox(mini, maxi);
}

void ProlandDrawable::drawImplementation( osg::RenderInfo& renderInfo ) const
{
	osg::State* state = renderInfo.getState();
	/*state->checkGLErrors("before init");

	if(!_initialized) {
		const_cast<ProlandDrawable*>(this)->init();
		_initialized = true;
	}*/

	state->checkGLErrors("before ProlandDrawable::drawImplementation");

	/*state->dirtyAllModes();
	state->dirtyAllAttributes();
	state->disableAllVertexArrays();
	state->dirtyAllVertexArrays();

	state->reset();*/
	const_cast<ProlandDrawable*>(this)->render();

	state->checkGLErrors("after ProlandDrawable::drawImplementation");
}

void ProlandDrawable::init() {
	trDEBUG("Proland","Initializing drawable.")
    // These calls should be useless since we have all the plugins
	// loaded in a single module here.
	initTerrainPlugin();
    initEditPlugin();
    initOceanPlugin();
    initForestPlugin();
	
	trDEBUG("Proland","Initializing glew.")
	assert(glGetError() == 0);
	glewExperimental = GL_TRUE;
	glewInit();
	glGetError();

	setUseDisplayList(false);
	setUseVertexBufferObjects(false);

	// Call to initProlandDemo:
	trDEBUG("Proland","Generating atmosphere tables (in folder 'textures/atmo')...");
	preprocessAtmo(AtmoParameters(), "textures/atmo");
	trDEBUG("Proland","Atmosphere tables ready.");

	trDEBUG("Proland","Preparing sub log system...");
	_out = new FileLogger::File("log.html");
	Logger::INFO_LOGGER = new FileLogger("INFO", _out, Logger::INFO_LOGGER);
	Logger::WARNING_LOGGER = new FileLogger("WARNING", _out, Logger::WARNING_LOGGER);
	Logger::ERROR_LOGGER = new FileLogger("ERROR", _out, Logger::ERROR_LOGGER);
	trDEBUG("Proland","Sub log system ready.");
	
	trDEBUG("Proland","Preparing resource manager...");	
    ptr<XMLResourceLoader> resLoader = new XMLResourceLoader();
	resLoader->addArchive("archives/" + _archive);
    resLoader->addPath("textures/atmo");
    resLoader->addPath("textures/clouds");
    resLoader->addPath("textures/rivers");
    resLoader->addPath("textures/roads");
    resLoader->addPath("textures/trees");
    resLoader->addPath("textures");
    resLoader->addPath("shaders/atmo");
    resLoader->addPath("shaders/camera");
    resLoader->addPath("shaders/clouds");
    resLoader->addPath("shaders/earth");
    resLoader->addPath("shaders/elevation");
    resLoader->addPath("shaders/ocean");
    resLoader->addPath("shaders/ortho");
    resLoader->addPath("shaders/rivers");
    resLoader->addPath("shaders/terrain");
    resLoader->addPath("shaders/trees");
    resLoader->addPath("shaders/util");
    resLoader->addPath("shaders");
    resLoader->addPath("meshes");
    resLoader->addPath("methods");
    resLoader->addPath("ui");
    resLoader->addPath(_data);	
	
    _manager = new ResourceManager(resLoader, 8);
	trDEBUG("Proland","Resource manager ready.");	
	
	trDEBUG("Proland","Preparing proland scene...");
	_scene = new SceneManager();
	_scene->setResourceManager(_manager);
	_scene->setScheduler(_manager->loadResource("defaultScheduler").cast<Scheduler>());
	_scene->setRoot(_manager->loadResource("scene").cast<SceneNode>());
	_scene->setCameraNode("camera");
	_scene->setCameraMethod("draw");
	
	//ui = _manager->loadResource(getParameter(desc, e, "ui")).cast<EventHandler>();
	_view = new BasicViewHandler(true,this,NULL); // not introducing any cycle dependncy here.
	
	_radius = 6360000.0f;
	_dr = 1.1f;
	trDEBUG("Proland","Proland scene ready.");
	
	_startTick = osg::Timer::instance()->tick();
	_lastTime = 0.0;
	
	trDEBUG("Proland","Assigning event handler.")
	setEventCallback(new ProlandEventHandler());

	trDEBUG("Proland","Initialization done.");
}

ProlandDrawable::~ProlandDrawable() {
	trDEBUG("Proland","Deleting ProlandDrawable...");
	if(_manager != NULL) {
		trDEBUG("Proland","Closing resource manager...");
		_manager->close();
	}
	if(_out) {
		trDEBUG("Proland","Deleting FileLogger sink...");
		delete _out;
	}
	trDEBUG("Proland","ProlandDrawable deleted.");
}

ptr<SceneManager> ProlandDrawable::getScene()
{
	return _scene;
}
	
ptr<TerrainViewController> ProlandDrawable::getViewController()
{
	if (_controller == NULL) {
		if (_radius == 0.0) {
			_controller = new TerrainViewController(_scene->getCameraNode(), 50000.0);
		} else {
			_controller = new PlanetViewController(_scene->getCameraNode(), _radius);
		}
	}
	return _controller;
}

vec3d ProlandDrawable::getWorldCoordinates(int x, int y)
{
	vec3d p = _scene->getWorldCoordinates(x, y);
	if (_controller.cast<PlanetViewController>() != NULL) {
		if (p.length() > _controller.cast<PlanetViewController>()->R * _dr) {
			p = vec3d(NAN, NAN, NAN);
		}
	} else if (abs(p.x) > 100000.0 || abs(p.y) > 100000.0 || abs(p.z) > 100000.0) {
		p = vec3d(NAN, NAN, NAN);
	}
	//trDEBUG("Proland","Got point ("<<p.x<<", "<<p.y<<", "<<p.z<<") for input ("<<x<<", "<<y<<")");

	return p;
}

void ProlandDrawable::updateResources()
{
	BasicViewHandler::Position p;
	_view->getPosition(p);
	_scene->getResourceManager()->updateResources();
	getViewController()->setNode(_scene->getCameraNode());
	_view->setPosition(p);
}

void ProlandDrawable::render() {
	//trDEBUG("Proland","Rendering frame.")
	if (getViewController()->getNode() != _scene->getCameraNode()) {
		trDEBUG("Proland","Updating resources.")
		updateResources();
	}
	
	double t = osg::Timer::instance()->delta_s(_startTick,osg::Timer::instance()->tick());

	
	/*BasicViewHandler::Position p;
	_view->getPosition(p, true);
	double vangle = osg::PI_4*t/10.0;
	double hangle = osg::PI_2*t/10.0;

	p.sx = cos(vangle) * cos(hangle);
	p.sy = cos(vangle) * sin(hangle);
	p.sz = sin(vangle);
	p.phi = cos(osg::PI*t/20.0);
	p.theta = cos(osg::PI*t/15.0+10);

	_view->setPosition(p, true);*/

	//trDEBUG("Proland","Calling BasicViewHandler::redisplay t="<<t<<", dt="<<t-_lastTime);
	_view->redisplay(t*1e6,(t-_lastTime)*1e6); // expecting micro seconds here!!!
	_lastTime = t;
	
	//trDEBUG("Proland","Flushing log.");
	if (Logger::ERROR_LOGGER != NULL) {
		Logger::ERROR_LOGGER->flush();
	}	
	
	//trDEBUG("Proland","Done rendering frame.")	
}

void ProlandDrawable::reshape(int x, int y)
{
	trDEBUG("Proland","Resizing to " << x << "x" << y << ".");
	
	ptr<FrameBuffer> fb = FrameBuffer::getDefault();
	fb->setViewport(vec4<GLint>(0, 0, x, y));
	fb->setPolygonMode(FILL, CULL);
	fb->setDepthTest(true, LESS);

	trDEBUG("Proland","Should we call render here ?");
}
