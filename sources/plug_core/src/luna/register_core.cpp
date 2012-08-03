#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_core(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osg::Referenced >::Register(L);
	Luna< osg::CopyOp >::Register(L);
	Luna< osg::Object >::Register(L);
	Luna< osg::ref_ptr< osg::Referenced > >::Register(L);
	Luna< sgt::Object >::Register(L);
	Luna< sgt::LogSink >::Register(L);
	Luna< sgt::FileLogger >::Register(L);
	Luna< sgt::LogManager >::Register(L);
	Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::Register(L);
	Luna< std::map< int, int > >::Register(L);
	Luna< std::map< std::string, int > >::Register(L);
	Luna< sgt::LogRecord >::Register(L);
	Luna< std::set< std::string > >::Register(L);
	Luna< sgt::StdLogger >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"core");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"core");
	lua_getglobal(L,"core");

	luna_copyParents(L,"core");

	return 1;
}

#ifdef __cplusplus
}
#endif

