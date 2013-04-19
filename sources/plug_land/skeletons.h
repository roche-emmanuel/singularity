#ifndef _land_SKELETONS_H_
#define _land_SKELETONS_H_

class Parameters {
};

class taskKeySort {
};

class taskSort {
};

class TaskStatistics {
};

class TypeInfoSort {
};

namespace osg {
};

namespace sgt {
	class box2i {
	};

	class box2f {
	};

	class box2d {
	};

	class box3i {
	};

	class box3f {
	};

	class box3d {
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

	class TaskSet {
	};

	class TaskDependencyMap {
	};

	class Buffer: public sgt::Object {
	public:
	};

	class CPUBuffer: public sgt::Buffer {
	};

	class SetIterator {
	};

	class MapIterator {
	};

	class MultiMapIterator {
	};

	class Timer {
	};

	class box2 {
	};

	class box3 {
	};

	class half {
	};

	class mat2 {
	};

	class mat3 {
	};

	class mat4 {
	};

	class quat {
	};

	class vec2 {
	};

	class vec3 {
	};

	class vec4 {
	};

	class MultithreadScheduler: public sgt::Scheduler {
	public:
	};

	class Scheduler: public sgt::Object {
	};

	class Task: public sgt::Object {
	public:
	};

	class TaskListener {
	};

	class TaskGraph: public sgt::Task, public sgt::TaskListener {
	public:
		class TaskIterator {
		};

	};

	class LandManager {
	};

	class Deformation: public sgt::Object {
	};

	class TerrainNode: public osg::Node {
	};

	class TerrainQuad: public osg::Node {
	};

	class GPUTileStorage: public sgt::TileStorage {
	public:
		class GPUSlot {
		};

	};

	class TileCache: public sgt::Object {
	public:
		class Tile {
		public:
			class Id {
			};

			class TId {
			};

		};

	};

	class TileLayer: public sgt::Object {
	};

	class TileProducer: public sgt::Object {
	};

	class TileStorage: public sgt::Object {
	public:
		class Slot {
		};

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

};


#endif
