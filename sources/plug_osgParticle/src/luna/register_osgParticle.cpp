#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgParticle(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< osgParticle::range< float > >::Register(L);
	Luna< osgParticle::range< osg::Vec2f > >::Register(L);
	Luna< osgParticle::range< osg::Vec3f > >::Register(L);
	Luna< osgParticle::range< osg::Vec4f > >::Register(L);
	Luna< osgParticle::Operator >::Register(L);
	Luna< osgParticle::AccelOperator >::Register(L);
	Luna< osgParticle::AngularAccelOperator >::Register(L);
	Luna< osgParticle::AngularDampingOperator >::Register(L);
	Luna< osgParticle::DomainOperator >::Register(L);
	Luna< osgParticle::BounceOperator >::Register(L);
	Luna< osgParticle::Placer >::Register(L);
	Luna< osgParticle::CenteredPlacer >::Register(L);
	Luna< osgParticle::BoxPlacer >::Register(L);
	Luna< osgParticle::CompositePlacer >::Register(L);
	Luna< osgParticle::ParticleSystem >::Register(L);
	Luna< osgParticle::ConnectedParticleSystem >::Register(L);
	Luna< osgParticle::Counter >::Register(L);
	Luna< osgParticle::ConstantRateCounter >::Register(L);
	Luna< osgParticle::DampingOperator >::Register(L);
	Luna< osgParticle::DomainOperator::Domain >::Register(L);
	Luna< osgParticle::ParticleProcessor >::Register(L);
	Luna< osgParticle::Emitter >::Register(L);
	Luna< osgParticle::ParticleEffect >::Register(L);
	Luna< osgParticle::ExplosionDebrisEffect >::Register(L);
	Luna< osgParticle::ExplosionEffect >::Register(L);
	Luna< osgParticle::ExplosionOperator >::Register(L);
	Luna< osgParticle::FireEffect >::Register(L);
	Luna< osgParticle::FluidFrictionOperator >::Register(L);
	Luna< osgParticle::Program >::Register(L);
	Luna< osgParticle::FluidProgram >::Register(L);
	Luna< osgParticle::ForceOperator >::Register(L);
	Luna< osgParticle::Interpolator >::Register(L);
	Luna< osgParticle::LinearInterpolator >::Register(L);
	Luna< osgParticle::ModularEmitter >::Register(L);
	Luna< osgParticle::ModularProgram >::Register(L);
	Luna< osgParticle::MultiSegmentPlacer >::Register(L);
	Luna< osgParticle::OrbitOperator >::Register(L);
	Luna< osgParticle::Particle >::Register(L);
	Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > >::Register(L);
	Luna< osgParticle::ParticleSystemUpdater >::Register(L);
	Luna< osgParticle::PointPlacer >::Register(L);
	Luna< osgParticle::PrecipitationEffect >::Register(L);
	Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable >::Register(L);
	Luna< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::Register(L);
	Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::Register(L);
	Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::Register(L);
	Luna< osgParticle::Shooter >::Register(L);
	Luna< osgParticle::RadialShooter >::Register(L);
	Luna< osgParticle::VariableRateCounter >::Register(L);
	Luna< osgParticle::RandomRateCounter >::Register(L);
	Luna< osgParticle::SectorPlacer >::Register(L);
	Luna< osgParticle::SegmentPlacer >::Register(L);
	Luna< osgParticle::SinkOperator >::Register(L);
	Luna< osgParticle::SmokeEffect >::Register(L);
	Luna< osgParticle::SmokeTrailEffect >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgParticle");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgParticle");
	lua_getglobal(L,"osgParticle");

	luna_copyParents(L,"osgParticle");

	return 1;
}

#ifdef __cplusplus
}
#endif

