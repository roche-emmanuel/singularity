#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_core(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"posix_time");
	Luna< posix_time::ptime >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"osg");
	Luna< osg::Referenced >::Register(L);
	Luna< osg::Object >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"sgt");
	Luna< osg::ref_ptr< osg::Referenced > >::Register(L);
	Luna< sgt::Object >::Register(L);
	Luna< sgt::Referenced >::Register(L);
	Luna< sgt::TimeProvider >::Register(L);
	Luna< sgt::TimeManager >::Register(L);
	Luna< sgt::LogSink >::Register(L);
	Luna< sgt::FileLogger >::Register(L);
	Luna< sgt::LogManager >::Register(L);
	Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::Register(L);
	Luna< std::map< int, int > >::Register(L);
	Luna< std::map< std::string, int > >::Register(L);
	Luna< sgt::LogRecord >::Register(L);
	Luna< std::set< std::string > >::Register(L);
	Luna< sgt::StdLogger >::Register(L);
	Luna< sgt::AnyVector >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"std");
	Luna< std::istream >::Register(L);
	Luna< std::ostream >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"sgt");

	register_defines(L);

	register_enums(L);

	register_global_functions(L);

	luna_popModule(L);

	luna_copyParents(L,"posix_time");
	luna_copyParents(L,"osg");
	luna_copyParents(L,"sgt");
	luna_copyParents(L,"std");

	luna_pushModule(L,"sgt");
	return 1;
}

#ifdef __cplusplus
}
#endif

