#include <log/LogManager.h>

#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum Options

	lua_pushnumber(L,osg::CopyOp::SHALLOW_COPY); lua_setfield(L,-2,"SHALLOW_COPY");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_OBJECTS); lua_setfield(L,-2,"DEEP_COPY_OBJECTS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_NODES); lua_setfield(L,-2,"DEEP_COPY_NODES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_DRAWABLES); lua_setfield(L,-2,"DEEP_COPY_DRAWABLES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATESETS); lua_setfield(L,-2,"DEEP_COPY_STATESETS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATEATTRIBUTES); lua_setfield(L,-2,"DEEP_COPY_STATEATTRIBUTES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_TEXTURES); lua_setfield(L,-2,"DEEP_COPY_TEXTURES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_IMAGES); lua_setfield(L,-2,"DEEP_COPY_IMAGES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ARRAYS); lua_setfield(L,-2,"DEEP_COPY_ARRAYS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_PRIMITIVES); lua_setfield(L,-2,"DEEP_COPY_PRIMITIVES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_SHAPES); lua_setfield(L,-2,"DEEP_COPY_SHAPES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_UNIFORMS); lua_setfield(L,-2,"DEEP_COPY_UNIFORMS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_CALLBACKS); lua_setfield(L,-2,"DEEP_COPY_CALLBACKS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_USERDATA); lua_setfield(L,-2,"DEEP_COPY_USERDATA");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ALL); lua_setfield(L,-2,"DEEP_COPY_ALL");

	lua_setfield(L,-2,"Options");

	lua_pushnumber(L,osg::CopyOp::SHALLOW_COPY); lua_setfield(L,-2,"SHALLOW_COPY");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_OBJECTS); lua_setfield(L,-2,"DEEP_COPY_OBJECTS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_NODES); lua_setfield(L,-2,"DEEP_COPY_NODES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_DRAWABLES); lua_setfield(L,-2,"DEEP_COPY_DRAWABLES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATESETS); lua_setfield(L,-2,"DEEP_COPY_STATESETS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATEATTRIBUTES); lua_setfield(L,-2,"DEEP_COPY_STATEATTRIBUTES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_TEXTURES); lua_setfield(L,-2,"DEEP_COPY_TEXTURES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_IMAGES); lua_setfield(L,-2,"DEEP_COPY_IMAGES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ARRAYS); lua_setfield(L,-2,"DEEP_COPY_ARRAYS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_PRIMITIVES); lua_setfield(L,-2,"DEEP_COPY_PRIMITIVES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_SHAPES); lua_setfield(L,-2,"DEEP_COPY_SHAPES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_UNIFORMS); lua_setfield(L,-2,"DEEP_COPY_UNIFORMS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_CALLBACKS); lua_setfield(L,-2,"DEEP_COPY_CALLBACKS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_USERDATA); lua_setfield(L,-2,"DEEP_COPY_USERDATA");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ALL); lua_setfield(L,-2,"DEEP_COPY_ALL");


	lua_newtable(L); // enum Flags

	lua_pushnumber(L,sgt::LogManager::FILE_NAME); lua_setfield(L,-2,"FILE_NAME");
	lua_pushnumber(L,sgt::LogManager::LINE_NUMBER); lua_setfield(L,-2,"LINE_NUMBER");
	lua_pushnumber(L,sgt::LogManager::THREAD_ID); lua_setfield(L,-2,"THREAD_ID");
	lua_pushnumber(L,sgt::LogManager::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");

	lua_setfield(L,-2,"Flags");

	lua_pushnumber(L,sgt::LogManager::FILE_NAME); lua_setfield(L,-2,"FILE_NAME");
	lua_pushnumber(L,sgt::LogManager::LINE_NUMBER); lua_setfield(L,-2,"LINE_NUMBER");
	lua_pushnumber(L,sgt::LogManager::THREAD_ID); lua_setfield(L,-2,"THREAD_ID");
	lua_pushnumber(L,sgt::LogManager::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");


	lua_newtable(L); // enum Severity

	lua_pushnumber(L,sgt::LogManager::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,sgt::LogManager::ERROR); lua_setfield(L,-2,"ERROR");
	lua_pushnumber(L,sgt::LogManager::WARNING); lua_setfield(L,-2,"WARNING");
	lua_pushnumber(L,sgt::LogManager::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,sgt::LogManager::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,sgt::LogManager::DEBUG0); lua_setfield(L,-2,"DEBUG0");
	lua_pushnumber(L,sgt::LogManager::DEBUG1); lua_setfield(L,-2,"DEBUG1");
	lua_pushnumber(L,sgt::LogManager::DEBUG2); lua_setfield(L,-2,"DEBUG2");
	lua_pushnumber(L,sgt::LogManager::DEBUG3); lua_setfield(L,-2,"DEBUG3");
	lua_pushnumber(L,sgt::LogManager::DEBUG4); lua_setfield(L,-2,"DEBUG4");
	lua_pushnumber(L,sgt::LogManager::DEBUG5); lua_setfield(L,-2,"DEBUG5");

	lua_setfield(L,-2,"Severity");

	lua_pushnumber(L,sgt::LogManager::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,sgt::LogManager::ERROR); lua_setfield(L,-2,"ERROR");
	lua_pushnumber(L,sgt::LogManager::WARNING); lua_setfield(L,-2,"WARNING");
	lua_pushnumber(L,sgt::LogManager::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,sgt::LogManager::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,sgt::LogManager::DEBUG0); lua_setfield(L,-2,"DEBUG0");
	lua_pushnumber(L,sgt::LogManager::DEBUG1); lua_setfield(L,-2,"DEBUG1");
	lua_pushnumber(L,sgt::LogManager::DEBUG2); lua_setfield(L,-2,"DEBUG2");
	lua_pushnumber(L,sgt::LogManager::DEBUG3); lua_setfield(L,-2,"DEBUG3");
	lua_pushnumber(L,sgt::LogManager::DEBUG4); lua_setfield(L,-2,"DEBUG4");
	lua_pushnumber(L,sgt::LogManager::DEBUG5); lua_setfield(L,-2,"DEBUG5");


}

#ifdef __cplusplus
}
#endif

