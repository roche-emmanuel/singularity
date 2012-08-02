#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgUtil(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osgUtil::CubeMapGenerator >::Register(L);
	Luna< osgUtil::CullVisitor >::Register(L);
	Luna< osgUtil::DelaunayConstraint >::Register(L);
	Luna< osgUtil::DelaunayTriangulator >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > >::Register(L);
	Luna< osgUtil::DisplayRequirementsVisitor >::Register(L);
	Luna< osgUtil::DrawElementTypeSimplifier >::Register(L);
	Luna< osgUtil::DrawElementTypeSimplifierVisitor >::Register(L);
	Luna< osgUtil::dereference_less >::Register(L);
	Luna< osgUtil::dereference_clear >::Register(L);
	Luna< osgUtil::EdgeCollector >::Register(L);
	Luna< std::list< osg::ref_ptr< osg::UIntArray > > >::Register(L);
	Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::Register(L);
	Luna< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > >::Register(L);
	Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > >::Register(L);
	Luna< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::Register(L);
	Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::Register(L);
	Luna< std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > >::Register(L);
	Luna< osgUtil::EdgeCollector::Edge >::Register(L);
	Luna< osgUtil::EdgeCollector::Edgeloop >::Register(L);
	Luna< osgUtil::EdgeCollector::Point >::Register(L);
	Luna< osgUtil::EdgeCollector::Triangle >::Register(L);
	Luna< osgUtil::GLObjectsVisitor >::Register(L);
	Luna< osgUtil::GLObjectsOperation >::Register(L);
	Luna< osgUtil::HalfWayMapGenerator >::Register(L);
	Luna< osgUtil::HighlightMapGenerator >::Register(L);
	Luna< osgUtil::StateToCompile >::Register(L);
	Luna< std::set< osg::Drawable * > >::Register(L);
	Luna< std::set< osg::StateSet * > >::Register(L);
	Luna< std::set< osg::Texture * > >::Register(L);
	Luna< std::set< osg::Program * > >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation >::Register(L);
	Luna< std::set< osg::GraphicsContext * > >::Register(L);
	Luna< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileOp >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileInfo >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileList >::Register(L);
	Luna< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileSet >::Register(L);
	Luna< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::Register(L);
	Luna< osgUtil::IncrementalCompileOperation::CompileTextureOp >::Register(L);
	Luna< osgUtil::Intersector >::Register(L);
	Luna< osgUtil::IntersectorGroup >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgUtil::Intersector > > >::Register(L);
	Luna< osgUtil::IntersectionVisitor >::Register(L);
	Luna< osgUtil::IntersectionVisitor::ReadCallback >::Register(L);
	Luna< osgUtil::Hit >::Register(L);
	Luna< std::vector< int > >::Register(L);
	Luna< osgUtil::IntersectVisitor >::Register(L);
	Luna< osgUtil::PickVisitor >::Register(L);
	Luna< osgUtil::LineSegmentIntersector >::Register(L);
	Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::Register(L);
	Luna< osgUtil::LineSegmentIntersector::Intersection >::Register(L);
	Luna< osgUtil::BaseOptimizerVisitor >::Register(L);
	Luna< osgUtil::GeometryCollector >::Register(L);
	Luna< std::set< osg::Geometry * > >::Register(L);
	Luna< osgUtil::IndexMeshVisitor >::Register(L);
	Luna< osgUtil::VertexCacheVisitor >::Register(L);
	Luna< osgUtil::VertexCacheMissVisitor >::Register(L);
	Luna< osgUtil::VertexAccessOrderVisitor >::Register(L);
	Luna< osgUtil::AddRangeOperator >::Register(L);
	Luna< osgUtil::MultiplyRangeOperator >::Register(L);
	Luna< osgUtil::Optimizer >::Register(L);
	Luna< osgUtil::PlaneIntersector >::Register(L);
	Luna< std::vector< osgUtil::PlaneIntersector::Intersection > >::Register(L);
	Luna< osgUtil::PlaneIntersector::Intersection >::Register(L);
	Luna< osgUtil::PolytopeIntersector >::Register(L);
	Luna< std::set< osgUtil::PolytopeIntersector::Intersection > >::Register(L);
	Luna< osgUtil::PolytopeIntersector::Intersection >::Register(L);
	Luna< osgUtil::PositionalStateContainer >::Register(L);
	Luna< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::Register(L);
	Luna< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::Register(L);
	Luna< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::Register(L);
	Luna< osgUtil::PrintVisitor >::Register(L);
	Luna< osgUtil::ReflectionMapGenerator >::Register(L);
	Luna< osgUtil::RenderBin >::Register(L);
	Luna< std::vector< osgUtil::RenderLeaf * > >::Register(L);
	Luna< std::vector< osgUtil::StateGraph * > >::Register(L);
	Luna< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::Register(L);
	Luna< osgUtil::RenderBin::DrawCallback >::Register(L);
	Luna< osgUtil::RenderBin::SortCallback >::Register(L);
	Luna< osgUtil::RenderLeaf >::Register(L);
	Luna< osgUtil::RenderStage >::Register(L);
	Luna< osgUtil::RenderStage::Attachment >::Register(L);
	Luna< osgUtil::SceneGraphBuilder >::Register(L);
	Luna< osgUtil::SceneView >::Register(L);
	Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::Register(L);
	Luna< osgUtil::ShaderGenCache >::Register(L);
	Luna< std::map< int, osg::ref_ptr< osg::StateSet > > >::Register(L);
	Luna< osgUtil::ShaderGenVisitor >::Register(L);
	Luna< osgUtil::Simplifier >::Register(L);
	Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::Register(L);
	Luna< osgUtil::SmoothingVisitor >::Register(L);
	Luna< osgUtil::StateGraph >::Register(L);
	Luna< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::Register(L);
	Luna< std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > >::Register(L);
	Luna< osgUtil::Statistics >::Register(L);
	Luna< std::pair< unsigned int, unsigned int > >::Register(L);
	Luna< std::map< unsigned int, osgUtil::Statistics::PrimitivePair > >::Register(L);
	Luna< osgUtil::StatsVisitor >::Register(L);
	Luna< std::set< osg::Node * > >::Register(L);
	Luna< osgUtil::TangentSpaceGenerator >::Register(L);
	Luna< osgUtil::Tessellator >::Register(L);
	Luna< osgUtil::TransformCallback >::Register(L);
	Luna< osgUtil::TriStripVisitor >::Register(L);
	Luna< osgUtil::UpdateVisitor >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgUtil");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgUtil");
	lua_getglobal(L,"osgUtil");

	luna_copyParents(L,"osgUtil");

	return 1;
}

#ifdef __cplusplus
}
#endif

