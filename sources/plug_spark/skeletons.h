#ifndef _spark_SKELETONS_H_
#define _spark_SKELETONS_H_

namespace osg {
};

namespace osgGA {
};

namespace spark {
	class SparkDrawable: public osg::Drawable {
	public:
		class ParticleSystemList {
		};

		class TextureObjMap {
		};

		class BaseSystemCreator {
		};

		class DeferredSystemHandler: public osg::Drawable::UpdateCallback {
		public:
			class PosAndRotate {
			};

		};

		class ImageAttribute {
		};

		class SortParticlesOperator {
		};

	};

	class SparkUpdatingHandler: public osgGA::GUIEventHandler {
	public:
		class SparkObject {
		};

	};

};

namespace SPK {
	class FloatBuffer {
	};

	class FloatBufferCreator {
	};

	class ArrayBuffer: public SPK::Buffer {
	};

	class ArrayBufferCreator: public SPK::BufferCreator {
	};

	class Buffer {
	};

	class BufferCreator {
	};

	class BufferHandler {
	};

	class Emitter: public SPK::Registerable, public SPK::Transformable {
	};

	class SPKFactory {
	};

	class Group: public SPK::Registerable, public SPK::Transformable {
	public:
		class CreationData {
		};

		class EmitterData {
		};

	};

	class InterpolatorEntry {
	};

	class Interpolator {
	};

	class Model: public SPK::Registerable {
	};

	class Modifier: public SPK::Registerable, public SPK::Transformable, public SPK::BufferHandler {
	};

	class Particle {
	public:
		class ParticleData {
		};

	};

	class Pool {
	public:
		class iterator {
		};

		class const_iterator {
		};

		class reverse_iterator {
		};

		class const_reverse_iterator {
		};

	};

	class Registerable {
	};

	class RegWrapper: public SPK::Registerable {
	};

	class Renderer: public SPK::Registerable, public SPK::BufferHandler {
	};

	class System: public SPK::Registerable, public SPK::Transformable {
	};

	class Transformable {
	};

	class Vector3D {
	};

	class Zone: public SPK::Registerable, public SPK::Transformable {
	};

	class NormalEmitter: public SPK::Emitter {
	};

	class RandomEmitter: public SPK::Emitter {
	};

	class SphericEmitter: public SPK::Emitter {
	};

	class StaticEmitter: public SPK::Emitter {
	};

	class StraightEmitter: public SPK::Emitter {
	};

	class Collision: public SPK::Modifier {
	};

	class Destroyer: public SPK::Modifier {
	};

	class LinearForce: public SPK::Modifier {
	};

	class ModifierGroup: public SPK::Modifier {
	};

	class Obstacle: public SPK::Modifier {
	};

	class PointMass: public SPK::Modifier {
	};

	class Rotator: public SPK::Modifier {
	};

	class Vortex: public SPK::Modifier {
	};

	class LineRendererInterface {
	};

	class Oriented2DRendererInterface {
	};

	class Oriented3DRendererInterface {
	};

	class PointRendererInterface {
	};

	class QuadRendererInterface {
	};

	class AABox: public SPK::Zone {
	};

	class Cylinder: public SPK::Zone {
	};

	class Line: public SPK::Zone {
	};

	class Plane: public SPK::Zone {
	};

	class Point: public SPK::Zone {
	};

	class Ring: public SPK::Zone {
	};

	class Sphere: public SPK::Zone {
	};

	class Pool< class SPK::Particle > {
	};

};

namespace GL {
	class GLExtHandler {
	};

	class GLLineRenderer: public GL::GLRenderer, public SPK::LineRendererInterface {
	};

	class GLLineTrailRenderer: public GL::GLRenderer {
	};

	class GLPointRenderer: public GL::GLRenderer, public SPK::PointRendererInterface, public GL::GLExtHandler {
	};

	class GLQuadRenderer: public GL::GLRenderer, public SPK::QuadRendererInterface, public SPK::Oriented3DRendererInterface, public GL::GLExtHandler {
	};

	class GLRenderer: public SPK::Renderer {
	};

};


#endif
