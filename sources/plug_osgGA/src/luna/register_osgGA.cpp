#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgGA(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osgGA::GUIEventHandler >::Register(L);
	Luna< osgGA::CameraManipulator >::Register(L);
	Luna< osgGA::AnimationPathManipulator >::Register(L);
	Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::Register(L);
	Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::Register(L);
	Luna< osgGA::CameraViewSwitchManipulator >::Register(L);
	Luna< std::vector< osg::ref_ptr< osg::CameraView > > >::Register(L);
	Luna< osgGA::DriveManipulator >::Register(L);
	Luna< osgGA::EventQueue >::Register(L);
	Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::Register(L);
	Luna< osgGA::EventVisitor >::Register(L);
	Luna< osgGA::StandardManipulator >::Register(L);
	Luna< osgGA::FirstPersonManipulator >::Register(L);
	Luna< osgGA::FlightManipulator >::Register(L);
	Luna< osgGA::GUIActionAdapter >::Register(L);
	Luna< osgGA::GUIEventAdapter >::Register(L);
	Luna< osgGA::GUIEventAdapter::TouchData >::Register(L);
	Luna< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > >::Register(L);
	Luna< osgGA::GUIEventAdapter::TouchData::TouchPoint >::Register(L);
	Luna< osgGA::GUIEventHandlerVisitor >::Register(L);
	Luna< osgGA::KeySwitchMatrixManipulator >::Register(L);
	Luna< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::Register(L);
	Luna< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::Register(L);
	Luna< osgGA::OrbitManipulator >::Register(L);
	Luna< osgGA::TrackballManipulator >::Register(L);
	Luna< osgGA::MultiTouchTrackballManipulator >::Register(L);
	Luna< osgGA::NodeTrackerManipulator >::Register(L);
	Luna< osgGA::SphericalManipulator >::Register(L);
	Luna< osgGA::StateSetManipulator >::Register(L);
	Luna< osgGA::TerrainManipulator >::Register(L);
	Luna< osgGA::UFOManipulator >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgGA");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgGA");
	lua_getglobal(L,"osgGA");

	luna_copyParents(L,"osgGA");

	return 1;
}

#ifdef __cplusplus
}
#endif

