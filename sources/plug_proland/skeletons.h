#ifndef _proland_SKELETONS_H_
#define _proland_SKELETONS_H_

class Parameters {
};

class Tree {
};

class TreeZ {
};

class TreeZSort {
};

namespace ork {
	class Object {
	};

	class vec2h {
	};

	class vec2f {
	};

	class vec2d {
	};

	class vec2i {
	};

	class vec3h {
	};

	class vec3f {
	};

	class vec3d {
	};

	class vec3i {
	};

	class vec4h {
	};

	class vec4f {
	};

	class vec4d {
	};

	class vec4i {
	};

	class box2f {
	};

	class box2d {
	};

	class box2i {
	};

	class box3f {
	};

	class box3d {
	};

	class box3i {
	};

	class mat2f {
	};

	class mat2d {
	};

	class mat3f {
	};

	class mat3d {
	};

	class mat4f {
	};

	class mat4d {
	};

	class quatf {
	};

	class quatd {
	};

	class SceneManager {
	};

	class ptr< ork::Texture > {
	};

	class Scheduler: public ork::Object {
	};

	class MultithreadScheduler: public ork::Scheduler {
	};

	class ptr< proland::TileSampler > {
	};

	class half {
	};

	class Buffer: public ork::Object {
	public:
	};

	class CPUBuffer: public ork::Buffer {
	};

	class Texture: public ork::Object {
	public:
		class Parameters {
		};

	};

	class Texture2D: public ork::Texture {
	};

	class Module: public ork::Object {
	};

	class Program: public ork::Object {
	};

};

namespace osg {
};

namespace proland {
	class LandManager {
	};

	class TileStorage: public ork::Object {
	};

	class GPUTileStorage: public proland::TileStorage {
	};

	class TileCache: public ork::Object {
	};

	class TileProducer: public ork::Object {
	};

	class ElevationProducer: public proland::TileProducer {
	};

	class NormalProducer: public proland::TileProducer {
	};

	class Deformation: public sgt::Object {
	};

	class TerrainNode: public osg::Node {
	};

	class TileSampler: public ork::Object {
	public:
		class TileFilter {
		};

	};

	class TileSamplerZ: public proland::TileSampler {
	public:
		class State: public ork::Object {
		};

		class TileCallback {
		};

	};

};

namespace sgt {
};


#endif
