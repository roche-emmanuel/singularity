#ifndef _proland_SKELETONS_H_
#define _proland_SKELETONS_H_

class Parameters {
};

class TaskStatistics {
};

class Tree {
};

class TreeZ: public proland::TileSampler::Tree {
};

class TreeZSort {
};

class TypeInfoSort {
};

namespace ork {
	class Uniform1f {
	};

	class Uniform1d {
	};

	class Uniform1i {
	};

	class Uniform1ui {
	};

	class Uniform1b {
	};

	class Uniform2f {
	};

	class Uniform2d {
	};

	class Uniform2i {
	};

	class Uniform2ui {
	};

	class Uniform2b {
	};

	class Uniform3f {
	};

	class Uniform3d {
	};

	class Uniform3i {
	};

	class Uniform3ui {
	};

	class Uniform3b {
	};

	class Uniform4f {
	};

	class Uniform4d {
	};

	class Uniform4i {
	};

	class Uniform4ui {
	};

	class Uniform4b {
	};

	class UniformMatrix2f {
	};

	class UniformMatrix3f {
	};

	class UniformMatrix4f {
	};

	class UniformMatrix2x3f {
	};

	class UniformMatrix2x4f {
	};

	class UniformMatrix3x2f {
	};

	class UniformMatrix3x4f {
	};

	class UniformMatrix4x2f {
	};

	class UniformMatrix4x3f {
	};

	class UniformMatrix2d {
	};

	class UniformMatrix3d {
	};

	class UniformMatrix4d {
	};

	class UniformMatrix2x3d {
	};

	class UniformMatrix2x4d {
	};

	class UniformMatrix3x2d {
	};

	class UniformMatrix3x4d {
	};

	class UniformMatrix4x2d {
	};

	class UniformMatrix4x3d {
	};

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

	class SceneManager: public ork::Object {
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

	class GPUBuffer: public ork::Buffer {
	};

	class Sampler: public ork::Object {
	public:
		class Parameters {
		};

	};

	class Texture: public ork::Object {
	public:
		class Parameters: public ork::Sampler::Parameters {
		};

	};

	class Texture2D: public ork::Texture {
	};

	class Module: public ork::Object {
	};

	class Program: public ork::Object {
	};

	class Uniform: public ork::Object {
	};

	class Uniform1: public ork::Uniform {
	};

	class Uniform2: public ork::Uniform {
	};

	class Uniform3: public ork::Uniform {
	};

	class Uniform4: public ork::Uniform {
	};

	class UniformMatrix: public ork::Uniform {
	};

	class UniformMatrix3: public ork::UniformMatrix {
	};

	class UniformMatrix4: public ork::UniformMatrix {
	};

	class UniformSampler: public ork::Uniform {
	};

	class UniformSubroutine: public ork::Uniform {
	};

	class UniformBlock: public ork::Object {
	};

	class Task: public ork::Object {
	public:
	};

	class TaskListener {
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

	class TerrainQuad: public osg::Node {
	};

};

namespace sgt {
};


#endif
