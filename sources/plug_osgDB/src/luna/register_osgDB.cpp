#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgDB(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< std::deque< std::string > >::Register(L);
	Luna< std::list< std::string > >::Register(L);
	Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::Register(L);
	Luna< osgDB::ReaderWriter >::Register(L);
	Luna< osgDB::Archive >::Register(L);
	Luna< osgDB::AuthenticationDetails >::Register(L);
	Luna< osgDB::AuthenticationMap >::Register(L);
	Luna< osgDB::FindFileCallback >::Register(L);
	Luna< osgDB::ReadFileCallback >::Register(L);
	Luna< osgDB::WriteFileCallback >::Register(L);
	Luna< osgDB::FileLocationCallback >::Register(L);
	Luna< osgDB::DatabasePager >::Register(L);
	Luna< osgDB::FileList >::Register(L);
	Luna< std::set< std::string > >::Register(L);
	Luna< osgDB::DatabaseRevision >::Register(L);
	Luna< osgDB::DatabaseRevisions >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgDB::DatabaseRevision > > >::Register(L);
	Luna< osgDB::ObjectGLenum >::Register(L);
	Luna< osgDB::ObjectProperty >::Register(L);
	Luna< osgDB::ObjectMark >::Register(L);
	Luna< osgDB::DotOsgWrapper >::Register(L);
	Luna< osgDB::DeprecatedDotOsgWrapperManager >::Register(L);
	Luna< osgDB::RegisterDotOsgWrapperProxy >::Register(L);
	Luna< osgDB::DynamicLibrary >::Register(L);
	Luna< osgDB::ExternalFileWriter >::Register(L);
	Luna< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::Register(L);
	Luna< osgDB::ExternalFileWriter::ObjectData >::Register(L);
	Luna< osgDB::FileCache >::Register(L);
	Luna< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::Register(L);
	Luna< osgDB::fstream >::Register(L);
	Luna< osgDB::ifstream >::Register(L);
	Luna< osgDB::ofstream >::Register(L);
	Luna< osgDB::Options >::Register(L);
	Luna< osgDB::ImageOptions >::Register(L);
	Luna< osgDB::ImageOptions::PixelWindow >::Register(L);
	Luna< osgDB::ImageOptions::RatioWindow >::Register(L);
	Luna< osgDB::ImageOptions::TexCoordRange >::Register(L);
	Luna< osgDB::ImagePager >::Register(L);
	Luna< osgDB::ImageProcessor >::Register(L);
	Luna< osgDB::Field >::Register(L);
	Luna< osgDB::FieldReader >::Register(L);
	Luna< osgDB::FieldReaderIterator >::Register(L);
	Luna< osgDB::BaseCompressor >::Register(L);
	Luna< osgDB::FinishedObjectReadCallback >::Register(L);
	Luna< osgDB::ObjectWrapper >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::Register(L);
	Luna< osgDB::ObjectWrapperManager >::Register(L);
	Luna< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::Register(L);
	Luna< std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > > >::Register(L);
	Luna< std::map< std::string, osgDB::IntLookup > >::Register(L);
	Luna< osgDB::RegisterWrapperProxy >::Register(L);
	Luna< osgDB::RegisterCompressorProxy >::Register(L);
	Luna< osgDB::Output >::Register(L);
	Luna< osgDB::OutputException >::Register(L);
	Luna< osgDB::OutputStream >::Register(L);
	Luna< std::map< const osg::Array *, unsigned int > >::Register(L);
	Luna< std::map< const osg::Object *, unsigned int > >::Register(L);
	Luna< osgDB::ParameterOutput >::Register(L);
	Luna< osgDB::ReaderWriterInfo >::Register(L);
	Luna< osgDB::ReaderWriter::ReadResult >::Register(L);
	Luna< osgDB::ReaderWriter::WriteResult >::Register(L);
	Luna< osgDB::basic_type_wrapper >::Register(L);
	Luna< osgDB::Registry >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgDB::ReaderWriter > > >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::Register(L);
	Luna< osgDB::Registry::ReadFunctor >::Register(L);
	Luna< osgDB::PluginFunctionProxy >::Register(L);
	Luna< osgDB::IntLookup >::Register(L);
	Luna< std::map< std::string, int > >::Register(L);
	Luna< std::map< int, std::string > >::Register(L);
	Luna< osgDB::UserLookupTableProxy >::Register(L);
	Luna< osgDB::SharedStateManager >::Register(L);
	Luna< osgDB::OutputIterator >::Register(L);
	Luna< osgDB::XmlNode >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgDB::XmlNode > > >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgDB");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgDB");
	lua_getglobal(L,"osgDB");

	luna_copyParents(L,"osgDB");

	return 1;
}

#ifdef __cplusplus
}
#endif

