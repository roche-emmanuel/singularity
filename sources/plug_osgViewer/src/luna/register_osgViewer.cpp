#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgViewer(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osgViewer::ViewerBase >::Register(L);
	Luna< osgViewer::CompositeViewer >::Register(L);
	Luna< osgViewer::GraphicsWindow >::Register(L);
	Luna< std::list< osgViewer::View * > >::Register(L);
	Luna< osgViewer::GraphicsWindowEmbedded >::Register(L);
	Luna< osgViewer::GraphicsWindowFunctionProxy >::Register(L);
	Luna< osgViewer::OpenGLQuerySupport >::Register(L);
	Luna< osgViewer::Renderer >::Register(L);
	Luna< osgViewer::Scene >::Register(L);
	Luna< osgViewer::DepthPartitionSettings >::Register(L);
	Luna< osgViewer::View >::Register(L);
	Luna< std::list< osg::ref_ptr< osgGA::GUIEventHandler > > >::Register(L);
	Luna< osgViewer::Viewer >::Register(L);
	Luna< std::vector< osg::Camera * > >::Register(L);
	Luna< std::vector< osgViewer::GraphicsWindow * > >::Register(L);
	Luna< std::vector< OpenThreads::Thread * > >::Register(L);
	Luna< std::vector< osg::OperationThread * > >::Register(L);
	Luna< std::vector< osgViewer::Scene * > >::Register(L);
	Luna< std::vector< osgViewer::View * > >::Register(L);
	Luna< osgViewer::HelpHandler >::Register(L);
	Luna< osgViewer::StatsHandler >::Register(L);
	Luna< osgViewer::WindowSizeHandler >::Register(L);
	Luna< osgViewer::ThreadingHandler >::Register(L);
	Luna< osgViewer::RecordCameraPathHandler >::Register(L);
	Luna< osgViewer::LODScaleHandler >::Register(L);
	Luna< osgViewer::ToggleSyncToVBlankHandler >::Register(L);
	Luna< osgViewer::ScreenCaptureHandler >::Register(L);
	Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::Register(L);
	Luna< osgViewer::ScreenCaptureHandler::WriteToFile >::Register(L);
	Luna< osgViewer::InteractiveImageHandler >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgViewer");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgViewer");
	lua_getglobal(L,"osgViewer");

	luna_copyParents(L,"osgViewer");

	return 1;
}

#ifdef __cplusplus
}
#endif

