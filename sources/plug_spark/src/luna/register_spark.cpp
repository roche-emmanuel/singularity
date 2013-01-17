#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_spark(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"spark");
	Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::Register(L);
	Luna< spark::SparkDrawable >::Register(L);
	Luna< std::vector< SPK::System * > >::Register(L);
	Luna< std::map< std::string, spark::SparkDrawable::ImageAttribute > >::Register(L);
	Luna< spark::SparkDrawable::BaseSystemCreator >::Register(L);
	Luna< spark::SparkDrawable::DeferredSystemHandler >::Register(L);
	Luna< spark::SparkDrawable::ImageAttribute >::Register(L);
	Luna< spark::SparkDrawable::SortParticlesOperator >::Register(L);
	Luna< spark::SparkUpdatingHandler >::Register(L);
	Luna< spark::GroupCustomUpdate >::Register(L);
	Luna< SPK::ArrayBuffer< float > >::Register(L);
	Luna< SPK::ArrayBufferCreator< float > >::Register(L);
	Luna< SPK::Buffer >::Register(L);
	Luna< SPK::BufferCreator >::Register(L);
	Luna< SPK::BufferHandler >::Register(L);
	Luna< SPK::Registerable >::Register(L);
	Luna< SPK::Transformable >::Register(L);
	Luna< SPK::Emitter >::Register(L);
	Luna< SPK::SPKFactory >::Register(L);
	Luna< SPK::Group >::Register(L);
	Luna< SPK::InterpolatorEntry >::Register(L);
	Luna< SPK::Interpolator >::Register(L);
	Luna< SPK::Model >::Register(L);
	Luna< SPK::Modifier >::Register(L);
	Luna< SPK::Particle >::Register(L);
	Luna< SPK::Renderer >::Register(L);
	Luna< SPK::System >::Register(L);
	Luna< SPK::Vector3D >::Register(L);
	Luna< SPK::Zone >::Register(L);
	Luna< SPK::NormalEmitter >::Register(L);
	Luna< SPK::RandomEmitter >::Register(L);
	Luna< SPK::SphericEmitter >::Register(L);
	Luna< SPK::StaticEmitter >::Register(L);
	Luna< SPK::StraightEmitter >::Register(L);
	Luna< SPK::Collision >::Register(L);
	Luna< SPK::Destroyer >::Register(L);
	Luna< SPK::LinearForce >::Register(L);
	Luna< SPK::ModifierGroup >::Register(L);
	Luna< SPK::Obstacle >::Register(L);
	Luna< SPK::PointMass >::Register(L);
	Luna< SPK::Rotator >::Register(L);
	Luna< SPK::Vortex >::Register(L);
	Luna< SPK::LineRendererInterface >::Register(L);
	Luna< SPK::Oriented2DRendererInterface >::Register(L);
	Luna< SPK::Oriented3DRendererInterface >::Register(L);
	Luna< SPK::PointRendererInterface >::Register(L);
	Luna< SPK::QuadRendererInterface >::Register(L);
	Luna< SPK::AABox >::Register(L);
	Luna< SPK::Cylinder >::Register(L);
	Luna< SPK::Line >::Register(L);
	Luna< SPK::Plane >::Register(L);
	Luna< SPK::Point >::Register(L);
	Luna< SPK::Ring >::Register(L);
	Luna< SPK::Sphere >::Register(L);
	Luna< SPK::GL::GLExtHandler >::Register(L);
	Luna< SPK::GL::GLRenderer >::Register(L);
	Luna< SPK::GL::GLLineRenderer >::Register(L);
	Luna< SPK::GL::GLLineTrailRenderer >::Register(L);
	Luna< SPK::GL::GLPointRenderer >::Register(L);
	Luna< SPK::GL::GLQuadRenderer >::Register(L);
	Luna< SPK::Pool< SPK::Particle > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"spark");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"spark");

	luna_pushModule(L,"spark");
	return 1;
}

#ifdef __cplusplus
}
#endif

