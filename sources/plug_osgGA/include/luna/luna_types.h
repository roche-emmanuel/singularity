#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Array>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BoundingBox>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BoundingSphere>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BufferObject>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GraphicsCostEstimator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Group>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ImageUtils>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Node>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ObserverNodePath>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PrimitiveSet>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ShaderComposer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ShadowVolumeOccluder>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ValueObject>
#include <W:/Shared/Dev/Projects/singularity/sources/plug_osgGA/include/plug_extensions.h>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Referenced>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Object>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/StateAttribute>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/AlphaFunc>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/AnimationPath>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/NodeCallback>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ApplicationUsage>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ArgumentParser>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ArrayDispatchers>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/AudioStream>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Transform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/AutoTransform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Geode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Billboard>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BlendColor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BlendEquation>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BlendFunc>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/BufferIndexBinding>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CullSettings>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Camera>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CameraView>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ClampColor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ClearNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ClipNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ClipPlane>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Drawable>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ClusterCullingCallback>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CullStack>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/NodeVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CollectOccludersVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ColorMask>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ColorMatrix>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ComputeBoundsVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ConvexPlanarOccluder>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ConvexPlanarPolygon>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CoordinateSystemNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CopyOp>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CullFace>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/CullingSet>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/DeleteHandler>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Depth>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/DisplaySettings>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/DrawPixels>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Fog>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/FragmentProgram>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/FrameBufferObject>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/FrameStamp>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/FrontFace>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Geometry>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GL2Extensions>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GLBeginEndAdapter>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GLU>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GraphicsContext>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/OperationThread>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/GraphicsThread>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Hint>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Image>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/StateAttributeCallback>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ImageStream>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ImageSequence>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Shape>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/KdTree>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Light>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LightModel>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LightSource>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LineSegment>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LineStipple>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LineWidth>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LOD>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/LogicOp>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Material>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Matrixd>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Matrixf>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/MatrixTransform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Multisample>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/NodeTrackerCallback>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Notify>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Observer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/OccluderNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/OcclusionQueryNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PagedLOD>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Plane>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Point>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PointSprite>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PolygonMode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PolygonOffset>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PolygonStipple>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Polytope>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/PositionAttitudeTransform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Program>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Projection>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ProxyNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Quat>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/RenderInfo>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Scissor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Sequence>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ShadeModel>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Shader>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ShaderAttribute>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/ShapeDrawable>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/State>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/StateSet>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Stats>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Stencil>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/StencilTwoSided>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Switch>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexEnv>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexEnvCombine>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexEnvFilter>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexGen>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexGenNode>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TexMat>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture1D>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture2D>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture2DArray>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture2DMultisample>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Texture3D>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TextureCubeMap>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TextureRectangle>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Timer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/TransferFunction>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Uniform>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/UserDataContainer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2b>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec2s>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3b>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec3s>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4b>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4d>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4f>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4s>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Vec4ub>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/VertexProgram>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/View>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osg/Viewport>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/GUIEventHandler>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/CameraManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/AnimationPathManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/CameraViewSwitchManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/DriveManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/EventQueue>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/EventVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/StandardManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/FirstPersonManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/FlightManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/GUIActionAdapter>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/GUIEventAdapter>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/KeySwitchMatrixManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/OrbitManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/TrackballManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/MultiTouchTrackballManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/NodeTrackerManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/SphericalManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/StateSetManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/TerrainManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/UFOManipulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/CubeMapGenerator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/CullVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/DelaunayTriangulator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/DisplayRequirementsVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/DrawElementTypeSimplifier>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/EdgeCollector>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/GLObjectsVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/HalfWayMapGenerator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/HighlightMapGenerator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/IncrementalCompileOperation>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/IntersectionVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/IntersectVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/LineSegmentIntersector>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/Optimizer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/MeshOptimizers>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/OperationArrayFunctor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/PlaneIntersector>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/PolytopeIntersector>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/PositionalStateContainer>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/PrintVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/ReflectionMapGenerator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/RenderBin>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/RenderLeaf>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/RenderStage>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/SceneGraphBuilder>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/SceneView>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/ShaderGen>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/Simplifier>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/SmoothingVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/StateGraph>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/Statistics>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/TangentSpaceGenerator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/Tessellator>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/TransformCallback>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/TriStripVisitor>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgUtil/UpdateVisitor>

using namespace osg;
using namespace osgUtil;

template<>
class LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* obj);
    typedef osg::ByteArray parent_t;
    typedef osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >* obj);
    typedef osg::ShortArray parent_t;
    typedef osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* obj);
    typedef osg::IntArray parent_t;
    typedef osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >* obj);
    typedef osg::UByteArray parent_t;
    typedef osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* obj);
    typedef osg::UShortArray parent_t;
    typedef osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* obj);
    typedef osg::UIntArray parent_t;
    typedef osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >* obj);
    typedef osg::FloatArray parent_t;
    typedef osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec2f, osg::Array::Vec2ArrayType, 2, GL_FLOAT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec2f, osg::Array::Vec2ArrayType, 2, GL_FLOAT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec2f, osg::Array::Vec2ArrayType, 2, GL_FLOAT >* obj);
    typedef osg::Vec2Array parent_t;
    typedef osg::TemplateArray< osg::Vec2f, osg::Array::Vec2ArrayType, 2, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec3f, osg::Array::Vec3ArrayType, 3, GL_FLOAT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec3f, osg::Array::Vec3ArrayType, 3, GL_FLOAT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec3f, osg::Array::Vec3ArrayType, 3, GL_FLOAT >* obj);
    typedef osg::Vec3Array parent_t;
    typedef osg::TemplateArray< osg::Vec3f, osg::Array::Vec3ArrayType, 3, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec4f, osg::Array::Vec4ArrayType, 4, GL_FLOAT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec4f, osg::Array::Vec4ArrayType, 4, GL_FLOAT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec4f, osg::Array::Vec4ArrayType, 4, GL_FLOAT >* obj);
    typedef osg::Vec4Array parent_t;
    typedef osg::TemplateArray< osg::Vec4f, osg::Array::Vec4ArrayType, 4, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >* obj);
    typedef osg::Vec4ubArray parent_t;
    typedef osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >* obj);
    typedef osg::Vec2sArray parent_t;
    typedef osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >* obj);
    typedef osg::Vec3sArray parent_t;
    typedef osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >* obj);
    typedef osg::Vec4sArray parent_t;
    typedef osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >* obj);
    typedef osg::Vec2bArray parent_t;
    typedef osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >* obj);
    typedef osg::Vec3bArray parent_t;
    typedef osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* obj);
    typedef osg::Vec4bArray parent_t;
    typedef osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >* obj);
    typedef osg::DoubleArray parent_t;
    typedef osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >* obj);
    typedef osg::Vec2dArray parent_t;
    typedef osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >* obj);
    typedef osg::Vec3dArray parent_t;
    typedef osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* obj);
    typedef osg::Vec4dArray parent_t;
    typedef osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* obj);
    typedef osg::MatrixfArray parent_t;
    typedef osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BoundingBoxImpl< osg::Vec3f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BoundingBoxImpl< osg::Vec3f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BoundingBoxImpl< osg::Vec3f >* obj);
    typedef osg::BoundingBoxf parent_t;
    typedef osg::BoundingBoxImpl< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BoundingBoxImpl< osg::Vec3d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BoundingBoxImpl< osg::Vec3d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BoundingBoxImpl< osg::Vec3d >* obj);
    typedef osg::BoundingBoxd parent_t;
    typedef osg::BoundingBoxImpl< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BoundingSphereImpl< osg::Vec3f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BoundingSphereImpl< osg::Vec3f >* obj);
    typedef osg::BoundingSpheref parent_t;
    typedef osg::BoundingSphereImpl< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BoundingSphereImpl< osg::Vec3d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BoundingSphereImpl< osg::Vec3d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BoundingSphereImpl< osg::Vec3d >* obj);
    typedef osg::BoundingSphered parent_t;
    typedef osg::BoundingSphereImpl< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osg::GLBufferObject > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osg::GLBufferObject > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osg::GLBufferObject > >* obj);
    typedef osg::GLBufferObjectList parent_t;
    typedef std::list< osg::ref_ptr< osg::GLBufferObject > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< double, double > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< double, double >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< double, double >* obj);
    typedef osg::CostPair parent_t;
    typedef std::pair< double, double > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Node > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::Node > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::Node > >* obj);
    typedef osg::NodeList parent_t;
    typedef std::vector< osg::ref_ptr< osg::Node > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Image > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::Image > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::Image > >* obj);
    typedef osg::ImageList parent_t;
    typedef std::vector< osg::ref_ptr< osg::Image > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Node * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Node * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Node * >* obj);
    typedef osg::NodePath parent_t;
    typedef std::vector< osg::Node * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::NodePath > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::NodePath >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::NodePath >* obj);
    typedef osg::NodePathList parent_t;
    typedef std::vector< osg::NodePath > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Matrixd > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Matrixd >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Matrixd >* obj);
    typedef osg::MatrixList parent_t;
    typedef std::vector< osg::Matrixd > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MixinVector< int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::MixinVector< int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::MixinVector< int >* obj);
    typedef osg::VectorGLsizei parent_t;
    typedef osg::MixinVector< int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MixinVector< unsigned char > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::MixinVector< unsigned char >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::MixinVector< unsigned char >* obj);
    typedef osg::VectorGLubyte parent_t;
    typedef osg::MixinVector< unsigned char > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MixinVector< unsigned short > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::MixinVector< unsigned short >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::MixinVector< unsigned short >* obj);
    typedef osg::VectorGLushort parent_t;
    typedef osg::MixinVector< unsigned short > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MixinVector< unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::MixinVector< unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::MixinVector< unsigned int >* obj);
    typedef osg::VectorGLuint parent_t;
    typedef osg::MixinVector< unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ShaderComponent * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ShaderComponent * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ShaderComponent * >* obj);
    typedef osg::ShaderComponents parent_t;
    typedef std::vector< osg::ShaderComponent * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ShadowVolumeOccluder > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ShadowVolumeOccluder >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ShadowVolumeOccluder >* obj);
    typedef osg::ShadowVolumeOccluderList parent_t;
    typedef std::vector< osg::ShadowVolumeOccluder > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< std::string > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< std::string >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< std::string >* obj);
    typedef osg::StringValueObject parent_t;
    typedef osg::TemplateValueObject< std::string > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< bool > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< bool >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< bool >* obj);
    typedef osg::BoolValueObject parent_t;
    typedef osg::TemplateValueObject< bool > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< char > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< char >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< char >* obj);
    typedef osg::CharValueObject parent_t;
    typedef osg::TemplateValueObject< char > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< unsigned char > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< unsigned char >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< unsigned char >* obj);
    typedef osg::UCharValueObject parent_t;
    typedef osg::TemplateValueObject< unsigned char > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< short > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< short >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< short >* obj);
    typedef osg::ShortValueObject parent_t;
    typedef osg::TemplateValueObject< short > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< unsigned short > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< unsigned short >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< unsigned short >* obj);
    typedef osg::UShortValueObject parent_t;
    typedef osg::TemplateValueObject< unsigned short > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< int >* obj);
    typedef osg::IntValueObject parent_t;
    typedef osg::TemplateValueObject< int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< unsigned int >* obj);
    typedef osg::UIntValueObject parent_t;
    typedef osg::TemplateValueObject< unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< float > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< float >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< float >* obj);
    typedef osg::FloatValueObject parent_t;
    typedef osg::TemplateValueObject< float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< double > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< double >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< double >* obj);
    typedef osg::DoubleValueObject parent_t;
    typedef osg::TemplateValueObject< double > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec2f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec2f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec2f >* obj);
    typedef osg::Vec2fValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec2f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec3f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec3f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec3f >* obj);
    typedef osg::Vec3fValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec4f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec4f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec4f >* obj);
    typedef osg::Vec4fValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec2d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec2d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec2d >* obj);
    typedef osg::Vec2dValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec2d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec3d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec3d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec3d >* obj);
    typedef osg::Vec3dValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec4d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Vec4d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Vec4d >* obj);
    typedef osg::Vec4dValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Vec4d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Quat > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Quat >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Quat >* obj);
    typedef osg::QuatValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Quat > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Plane > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Plane >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Plane >* obj);
    typedef osg::PlaneValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Plane > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Matrixf > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Matrixf >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Matrixf >* obj);
    typedef osg::MatrixfValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Matrixf > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TemplateValueObject< osg::Matrixd > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TemplateValueObject< osg::Matrixd >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TemplateValueObject< osg::Matrixd >* obj);
    typedef osg::MatrixdValueObject parent_t;
    typedef osg::TemplateValueObject< osg::Matrixd > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Vec3d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Vec3d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Vec3d >* obj);
    typedef osg::Vec3dList parent_t;
    typedef std::vector< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::StateSet const * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::StateSet const * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::StateSet const * >* obj);
    typedef osg::StateSetList parent_t;
    typedef std::vector< osg::StateSet const * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< std::pair< osg::StateAttribute const *, unsigned int > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< std::pair< osg::StateAttribute const *, unsigned int > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< std::pair< osg::StateAttribute const *, unsigned int > >* obj);
    typedef osg::StateAttributeUIntPairList parent_t;
    typedef std::vector< std::pair< osg::StateAttribute const *, unsigned int > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Referenced > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Referenced* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Referenced* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Object > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Object* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Object* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Object base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StateAttribute > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StateAttribute* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StateAttribute* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StateAttribute base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AlphaFunc > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AlphaFunc* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AlphaFunc* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AlphaFunc base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AnimationPath > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AnimationPath* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AnimationPath* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AnimationPath base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< double, osg::AnimationPath::ControlPoint >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< double, osg::AnimationPath::ControlPoint >* obj);
    typedef osg::AnimationPath::TimeControlPointMap parent_t;
    typedef std::map< double, osg::AnimationPath::ControlPoint > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AnimationPath::ControlPoint > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AnimationPath::ControlPoint* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AnimationPath::ControlPoint* obj);
    typedef osg::AnimationPath::ControlPoint parent_t;
    typedef osg::AnimationPath::ControlPoint base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NodeCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AnimationPathCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AnimationPathCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AnimationPathCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AnimationPathCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ApplicationUsage > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ApplicationUsage* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ApplicationUsage* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ApplicationUsage base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, std::string > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, std::string >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, std::string >* obj);
    typedef osg::ApplicationUsage::UsageMap parent_t;
    typedef std::map< std::string, std::string > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ApplicationUsageProxy > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ApplicationUsageProxy* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ApplicationUsageProxy* obj);
    typedef osg::ApplicationUsageProxy parent_t;
    typedef osg::ApplicationUsageProxy base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ArgumentParser > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ArgumentParser* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ArgumentParser* obj);
    typedef osg::ArgumentParser parent_t;
    typedef osg::ArgumentParser base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, osg::ArgumentParser::ErrorSeverity >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, osg::ArgumentParser::ErrorSeverity >* obj);
    typedef osg::ArgumentParser::ErrorMessageMap parent_t;
    typedef std::map< std::string, osg::ArgumentParser::ErrorSeverity > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ArgumentParser::Parameter > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ArgumentParser::Parameter* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ArgumentParser::Parameter* obj);
    typedef osg::ArgumentParser::Parameter parent_t;
    typedef osg::ArgumentParser::Parameter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BufferData > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BufferData* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BufferData* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BufferData base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Array > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Array* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Array* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Array base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::IndexArray > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::IndexArray* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::IndexArray* obj);
    typedef osg::Referenced parent_t;
    typedef osg::IndexArray base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ArrayVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ArrayVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ArrayVisitor* obj);
    typedef osg::ArrayVisitor parent_t;
    typedef osg::ArrayVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConstArrayVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConstArrayVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConstArrayVisitor* obj);
    typedef osg::ConstArrayVisitor parent_t;
    typedef osg::ConstArrayVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueVisitor* obj);
    typedef osg::ValueVisitor parent_t;
    typedef osg::ValueVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConstValueVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConstValueVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConstValueVisitor* obj);
    typedef osg::ConstValueVisitor parent_t;
    typedef osg::ConstValueVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AttributeDispatch > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AttributeDispatch* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AttributeDispatch* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AttributeDispatch base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ArrayDispatchers > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ArrayDispatchers* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ArrayDispatchers* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ArrayDispatchers base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AudioSink > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AudioSink* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AudioSink* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AudioSink base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AudioStream > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AudioStream* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AudioStream* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AudioStream base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Node > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Node* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Node* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Node base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Group > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Group* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Group* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Group base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Transform > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Transform* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Transform* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Transform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::AutoTransform > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::AutoTransform* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::AutoTransform* obj);
    typedef osg::Referenced parent_t;
    typedef osg::AutoTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Geode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Geode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Geode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Geode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Billboard > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Billboard* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Billboard* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Billboard base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Vec3f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Vec3f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Vec3f >* obj);
    typedef osg::Billboard::PositionList parent_t;
    typedef std::vector< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendColor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendColor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendColor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendColor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendColor::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendColor::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendColor::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendColor::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendEquation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendEquation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendEquation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendEquation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendEquation::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendEquation::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendEquation::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendEquation::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendFunc > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendFunc* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendFunc* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendFunc base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlendFunc::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlendFunc::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlendFunc::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlendFunc::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BufferIndexBinding > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BufferIndexBinding* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BufferIndexBinding* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BufferIndexBinding base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::UniformBufferBinding > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::UniformBufferBinding* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::UniformBufferBinding* obj);
    typedef osg::Referenced parent_t;
    typedef osg::UniformBufferBinding base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TransformFeedbackBufferBinding > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TransformFeedbackBufferBinding* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TransformFeedbackBufferBinding* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TransformFeedbackBufferBinding base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BufferObjectProfile > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BufferObjectProfile* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BufferObjectProfile* obj);
    typedef osg::BufferObjectProfile parent_t;
    typedef osg::BufferObjectProfile base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GLBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBufferObject::BufferEntry > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBufferObject::BufferEntry* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBufferObject::BufferEntry* obj);
    typedef osg::GLBufferObject::BufferEntry parent_t;
    typedef osg::GLBufferObject::BufferEntry base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBufferObject::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBufferObject::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBufferObject::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GLBufferObject::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBufferObjectSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBufferObjectSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBufferObjectSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GLBufferObjectSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBufferObjectManager > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBufferObjectManager* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBufferObjectManager* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GLBufferObjectManager base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BufferData::ModifiedCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BufferData::ModifiedCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BufferData::ModifiedCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BufferData::ModifiedCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::VertexBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::VertexBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::VertexBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::VertexBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ElementBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ElementBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ElementBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ElementBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PixelBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PixelBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PixelBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PixelBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PixelDataBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PixelDataBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PixelDataBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PixelDataBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::UniformBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::UniformBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::UniformBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::UniformBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CullSettings > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CullSettings* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CullSettings* obj);
    typedef osg::CullSettings parent_t;
    typedef osg::CullSettings base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Camera > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Camera* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Camera* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Camera base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* obj);
    typedef osg::Camera::BufferAttachmentMap parent_t;
    typedef std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Camera::Attachment > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Camera::Attachment* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Camera::Attachment* obj);
    typedef osg::Camera::Attachment parent_t;
    typedef osg::Camera::Attachment base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Camera::DrawCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Camera::DrawCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Camera::DrawCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Camera::DrawCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CameraView > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CameraView* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CameraView* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CameraView base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClampColor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClampColor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClampColor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClampColor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClampColor::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClampColor::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClampColor::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClampColor::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClearNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClearNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClearNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClearNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClipNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClipNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClipNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClipNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::ClipPlane > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::ClipPlane > >* obj);
    typedef osg::ClipNode::ClipPlaneList parent_t;
    typedef std::vector< osg::ref_ptr< osg::ClipPlane > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClipPlane > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClipPlane* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClipPlane* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClipPlane base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::CullCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::CullCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::CullCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::CullCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClusterCullingCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClusterCullingCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClusterCullingCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ClusterCullingCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CullStack > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CullStack* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CullStack* obj);
    typedef osg::CullSettings parent_t;
    typedef osg::CullStack base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NodeVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CollectOccludersVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CollectOccludersVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CollectOccludersVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CollectOccludersVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::ShadowVolumeOccluder > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::ShadowVolumeOccluder >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::ShadowVolumeOccluder >* obj);
    typedef osg::CollectOccludersVisitor::ShadowVolumeOccluderSet parent_t;
    typedef std::set< osg::ShadowVolumeOccluder > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ColorMask > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ColorMask* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ColorMask* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ColorMask base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ColorMatrix > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ColorMatrix* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ColorMatrix* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ColorMatrix base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ComputeBoundsVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ComputeBoundsVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ComputeBoundsVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ComputeBoundsVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConvexPlanarOccluder > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConvexPlanarOccluder* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConvexPlanarOccluder* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ConvexPlanarOccluder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ConvexPlanarPolygon > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ConvexPlanarPolygon >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ConvexPlanarPolygon >* obj);
    typedef osg::ConvexPlanarOccluder::HoleList parent_t;
    typedef std::vector< osg::ConvexPlanarPolygon > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConvexPlanarPolygon > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConvexPlanarPolygon* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConvexPlanarPolygon* obj);
    typedef osg::ConvexPlanarPolygon parent_t;
    typedef osg::ConvexPlanarPolygon base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::EllipsoidModel > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::EllipsoidModel* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::EllipsoidModel* obj);
    typedef osg::Referenced parent_t;
    typedef osg::EllipsoidModel base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CoordinateSystemNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CoordinateSystemNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CoordinateSystemNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CoordinateSystemNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CopyOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CopyOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CopyOp* obj);
    typedef osg::CopyOp parent_t;
    typedef osg::CopyOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CullFace > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CullFace* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CullFace* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CullFace base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CullingSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CullingSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CullingSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CullingSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* obj);
    typedef osg::CullingSet::StateFrustumPair parent_t;
    typedef std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::CullingSet::StateFrustumPair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::CullingSet::StateFrustumPair >* obj);
    typedef osg::CullingSet::StateFrustumList parent_t;
    typedef std::vector< osg::CullingSet::StateFrustumPair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CullSettings::ClampProjectionMatrixCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CullSettings::ClampProjectionMatrixCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CullSettings::ClampProjectionMatrixCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::CullingSet > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::CullingSet >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::CullingSet >* obj);
    typedef osg::CullStack::CullingStack parent_t;
    typedef std::vector< osg::CullingSet > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DeleteHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DeleteHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DeleteHandler* obj);
    typedef osg::DeleteHandler parent_t;
    typedef osg::DeleteHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< unsigned int, const osg::Referenced * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< unsigned int, const osg::Referenced * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< unsigned int, const osg::Referenced * >* obj);
    typedef osg::DeleteHandler::FrameNumberObjectPair parent_t;
    typedef std::pair< unsigned int, const osg::Referenced * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::DeleteHandler::FrameNumberObjectPair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::DeleteHandler::FrameNumberObjectPair >* obj);
    typedef osg::DeleteHandler::ObjectsToDeleteList parent_t;
    typedef std::list< osg::DeleteHandler::FrameNumberObjectPair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Depth > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Depth* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Depth* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Depth base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DisplaySettings > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DisplaySettings* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DisplaySettings* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DisplaySettings base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::ComputeBoundingBoxCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::ComputeBoundingBoxCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::ComputeBoundingBoxCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::ComputeBoundingBoxCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::DrawCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::DrawCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::DrawCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::DrawCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::EventCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::EventCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::EventCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::EventCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::UpdateCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Drawable::UpdateCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Drawable::UpdateCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Drawable::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawPixels > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawPixels* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawPixels* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawPixels base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Fog > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Fog* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Fog* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Fog base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FragmentProgram > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FragmentProgram* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FragmentProgram* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FragmentProgram base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, osg::Vec4f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, osg::Vec4f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, osg::Vec4f >* obj);
    typedef osg::FragmentProgram::LocalParamList parent_t;
    typedef std::map< unsigned int, osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, osg::Matrixd > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, osg::Matrixd >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, osg::Matrixd >* obj);
    typedef osg::FragmentProgram::MatrixList parent_t;
    typedef std::map< unsigned int, osg::Matrixd > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FragmentProgram::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FragmentProgram::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FragmentProgram::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FragmentProgram::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FBOExtensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FBOExtensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FBOExtensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FBOExtensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RenderBuffer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RenderBuffer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RenderBuffer* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RenderBuffer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FrameBufferAttachment > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FrameBufferAttachment* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FrameBufferAttachment* obj);
    typedef osg::FrameBufferAttachment parent_t;
    typedef osg::FrameBufferAttachment base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FrameBufferObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FrameBufferObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FrameBufferObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FrameBufferObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* obj);
    typedef osg::FrameBufferObject::AttachmentMap parent_t;
    typedef std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< unsigned int >* obj);
    typedef osg::FrameBufferObject::MultipleRenderingTargets parent_t;
    typedef std::vector< unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FrameStamp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FrameStamp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FrameStamp* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FrameStamp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FrontFace > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FrontFace* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FrontFace* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FrontFace base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Drawable > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::Drawable > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::Drawable > >* obj);
    typedef osg::Geode::DrawableList parent_t;
    typedef std::vector< osg::ref_ptr< osg::Drawable > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Geometry > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Geometry* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Geometry* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Geometry base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Geometry::ArrayData > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Geometry::ArrayData >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Geometry::ArrayData >* obj);
    typedef osg::Geometry::ArrayDataList parent_t;
    typedef std::vector< osg::Geometry::ArrayData > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::PrimitiveSet > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::PrimitiveSet > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::PrimitiveSet > >* obj);
    typedef osg::Geometry::PrimitiveSetList parent_t;
    typedef std::vector< osg::ref_ptr< osg::PrimitiveSet > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Array * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Array * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Array * >* obj);
    typedef osg::Geometry::ArrayList parent_t;
    typedef std::vector< osg::Array * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::DrawElements * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::DrawElements * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::DrawElements * >* obj);
    typedef osg::Geometry::DrawElementsList parent_t;
    typedef std::vector< osg::DrawElements * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Geometry::ArrayData > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Geometry::ArrayData* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Geometry::ArrayData* obj);
    typedef osg::Geometry::ArrayData parent_t;
    typedef osg::Geometry::ArrayData base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Geometry::Vec3ArrayData > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Geometry::Vec3ArrayData* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Geometry::Vec3ArrayData* obj);
    typedef osg::Geometry::Vec3ArrayData parent_t;
    typedef osg::Geometry::Vec3ArrayData base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GL2Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GL2Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GL2Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GL2Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GLBeginEndAdapter > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GLBeginEndAdapter* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GLBeginEndAdapter* obj);
    typedef osg::GLBeginEndAdapter parent_t;
    typedef osg::GLBeginEndAdapter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PixelStorageModes > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PixelStorageModes* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PixelStorageModes* obj);
    typedef osg::PixelStorageModes parent_t;
    typedef osg::PixelStorageModes base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsContext base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::GraphicsContext::ScreenSettings >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::GraphicsContext::ScreenSettings >* obj);
    typedef osg::GraphicsContext::ScreenSettingsList parent_t;
    typedef std::vector< osg::GraphicsContext::ScreenSettings > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::GraphicsContext * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::GraphicsContext * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::GraphicsContext * >* obj);
    typedef osg::GraphicsContext::GraphicsContexts parent_t;
    typedef std::vector< osg::GraphicsContext * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osg::Operation > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osg::Operation > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osg::Operation > >* obj);
    typedef osg::GraphicsContext::GraphicsOperationQueue parent_t;
    typedef std::list< osg::ref_ptr< osg::Operation > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::Camera * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::Camera * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::Camera * >* obj);
    typedef osg::GraphicsContext::Cameras parent_t;
    typedef std::list< osg::Camera * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::ResizedCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::ResizedCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::ResizedCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsContext::ResizedCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::ScreenIdentifier > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::ScreenIdentifier* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::ScreenIdentifier* obj);
    typedef osg::GraphicsContext::ScreenIdentifier parent_t;
    typedef osg::GraphicsContext::ScreenIdentifier base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::ScreenSettings > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::ScreenSettings* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::ScreenSettings* obj);
    typedef osg::GraphicsContext::ScreenSettings parent_t;
    typedef osg::GraphicsContext::ScreenSettings base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::SwapCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::SwapCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::SwapCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsContext::SwapCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::Traits > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::Traits* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::Traits* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsContext::Traits base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsContext::WindowingSystemInterface > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsContext::WindowingSystemInterface* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsContext::WindowingSystemInterface* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsContext::WindowingSystemInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ClampedLinearCostFunction1D > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ClampedLinearCostFunction1D* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ClampedLinearCostFunction1D* obj);
    typedef osg::ClampedLinearCostFunction1D parent_t;
    typedef osg::ClampedLinearCostFunction1D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GeometryCostEstimator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GeometryCostEstimator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GeometryCostEstimator* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GeometryCostEstimator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureCostEstimator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureCostEstimator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureCostEstimator* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureCostEstimator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ProgramCostEstimator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ProgramCostEstimator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ProgramCostEstimator* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ProgramCostEstimator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsCostEstimator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsCostEstimator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsCostEstimator* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsCostEstimator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::OperationThread > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::OperationThread* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::OperationThread* obj);
    typedef osg::Referenced parent_t;
    typedef osg::OperationThread base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsThread > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsThread* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsThread* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsThread base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Operation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Operation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Operation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Operation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::GraphicsOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::GraphicsOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::GraphicsOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::GraphicsOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::SwapBuffersOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::SwapBuffersOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::SwapBuffersOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::SwapBuffersOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BarrierOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BarrierOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BarrierOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BarrierOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RefBlock > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RefBlock* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RefBlock* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RefBlock base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ReleaseContext_Block_MakeCurrentOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ReleaseContext_Block_MakeCurrentOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ReleaseContext_Block_MakeCurrentOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::BlockAndFlushOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::BlockAndFlushOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::BlockAndFlushOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::BlockAndFlushOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::FlushDeletedGLObjectsOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::FlushDeletedGLObjectsOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::FlushDeletedGLObjectsOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osg::FlushDeletedGLObjectsOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RunOperations > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RunOperations* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RunOperations* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RunOperations base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::EndOfDynamicDrawBlock > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::EndOfDynamicDrawBlock* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::EndOfDynamicDrawBlock* obj);
    typedef osg::Referenced parent_t;
    typedef osg::EndOfDynamicDrawBlock base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Hint > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Hint* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Hint* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Hint base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Image > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Image* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Image* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Image base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StateAttributeCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StateAttributeCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StateAttributeCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StateAttributeCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Image::UpdateCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Image::UpdateCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Image::UpdateCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Image::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ImageStream > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ImageStream* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ImageStream* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ImageStream base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ImageSequence > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ImageSequence* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ImageSequence* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ImageSequence base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< std::string > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< std::string >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< std::string >* obj);
    typedef osg::ImageSequence::FileNames parent_t;
    typedef std::vector< std::string > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::AudioStream > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::AudioStream > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::AudioStream > >* obj);
    typedef osg::ImageStream::AudioStreams parent_t;
    typedef std::vector< osg::ref_ptr< osg::AudioStream > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Shape > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Shape* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Shape* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Shape base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTree > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTree* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTree* obj);
    typedef osg::Referenced parent_t;
    typedef osg::KdTree base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::KdTree::LineSegmentIntersection >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::KdTree::LineSegmentIntersection >* obj);
    typedef osg::KdTree::LineSegmentIntersections parent_t;
    typedef std::vector< osg::KdTree::LineSegmentIntersection > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::KdTree::KdNode > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::KdTree::KdNode >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::KdTree::KdNode >* obj);
    typedef osg::KdTree::KdNodeList parent_t;
    typedef std::vector< osg::KdTree::KdNode > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::KdTree::Triangle > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::KdTree::Triangle >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::KdTree::Triangle >* obj);
    typedef osg::KdTree::TriangleList parent_t;
    typedef std::vector< osg::KdTree::Triangle > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTree::BuildOptions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTree::BuildOptions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTree::BuildOptions* obj);
    typedef osg::KdTree::BuildOptions parent_t;
    typedef osg::KdTree::BuildOptions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTree::KdNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTree::KdNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTree::KdNode* obj);
    typedef osg::KdTree::KdNode parent_t;
    typedef osg::KdTree::KdNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTree::LineSegmentIntersection > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTree::LineSegmentIntersection* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTree::LineSegmentIntersection* obj);
    typedef osg::KdTree::LineSegmentIntersection parent_t;
    typedef osg::KdTree::LineSegmentIntersection base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< double > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< double >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< double >* obj);
    typedef osg::KdTree::LineSegmentIntersection::RatioList parent_t;
    typedef std::vector< double > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTree::Triangle > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTree::Triangle* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTree::Triangle* obj);
    typedef osg::KdTree::Triangle parent_t;
    typedef osg::KdTree::Triangle base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::KdTreeBuilder > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::KdTreeBuilder* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::KdTreeBuilder* obj);
    typedef osg::Referenced parent_t;
    typedef osg::KdTreeBuilder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Light > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Light* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Light* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Light base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LightModel > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LightModel* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LightModel* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LightModel base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LightSource > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LightSource* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LightSource* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LightSource base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LineSegment > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LineSegment* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LineSegment* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LineSegment base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LineStipple > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LineStipple* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LineStipple* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LineStipple base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LineWidth > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LineWidth* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LineWidth* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LineWidth base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LOD > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LOD* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LOD* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LOD base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< float, float > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< float, float >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< float, float >* obj);
    typedef osg::LOD::MinMaxPair parent_t;
    typedef std::pair< float, float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::LOD::MinMaxPair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::LOD::MinMaxPair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::LOD::MinMaxPair >* obj);
    typedef osg::LOD::RangeList parent_t;
    typedef std::vector< osg::LOD::MinMaxPair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::LogicOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::LogicOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::LogicOp* obj);
    typedef osg::Referenced parent_t;
    typedef osg::LogicOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Material > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Material* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Material* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Material base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Matrixd > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Matrixd* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Matrixd* obj);
    typedef osg::Matrixd parent_t;
    typedef osg::Matrixd base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RefMatrixd > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RefMatrixd* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RefMatrixd* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RefMatrixd base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Matrixf > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Matrixf* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Matrixf* obj);
    typedef osg::Matrixf parent_t;
    typedef osg::Matrixf base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RefMatrixf > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RefMatrixf* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RefMatrixf* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RefMatrixf base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MatrixTransform > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::MatrixTransform* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::MatrixTransform* obj);
    typedef osg::Referenced parent_t;
    typedef osg::MatrixTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Multisample > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Multisample* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Multisample* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Multisample base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Multisample::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Multisample::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Multisample::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Multisample::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Group * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Group * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Group * >* obj);
    typedef osg::Node::ParentList parent_t;
    typedef std::vector< osg::Group * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Node::ComputeBoundingSphereCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Node::ComputeBoundingSphereCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Node::ComputeBoundingSphereCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Node::ComputeBoundingSphereCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeTrackerCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeTrackerCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeTrackerCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NodeTrackerCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeVisitor::DatabaseRequestHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeVisitor::DatabaseRequestHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeVisitor::DatabaseRequestHandler* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NodeVisitor::DatabaseRequestHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeVisitor::ImageRequestHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeVisitor::ImageRequestHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeVisitor::ImageRequestHandler* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NodeVisitor::ImageRequestHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NodeAcceptOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NodeAcceptOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NodeAcceptOp* obj);
    typedef osg::NodeAcceptOp parent_t;
    typedef osg::NodeAcceptOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::NotifyHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::NotifyHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::NotifyHandler* obj);
    typedef osg::Referenced parent_t;
    typedef osg::NotifyHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StandardNotifyHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StandardNotifyHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StandardNotifyHandler* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StandardNotifyHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Observer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Observer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Observer* obj);
    typedef osg::Observer parent_t;
    typedef osg::Observer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ObserverSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ObserverSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ObserverSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ObserverSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Observer * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Observer * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Observer * >* obj);
    typedef osg::ObserverSet::Observers parent_t;
    typedef std::set< osg::Observer * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ObserverNodePath > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ObserverNodePath* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ObserverNodePath* obj);
    typedef osg::ObserverNodePath parent_t;
    typedef osg::ObserverNodePath base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::OccluderNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::OccluderNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::OccluderNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::OccluderNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TestResult > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TestResult* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TestResult* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TestResult base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::QueryGeometry > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::QueryGeometry* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::QueryGeometry* obj);
    typedef osg::Referenced parent_t;
    typedef osg::QueryGeometry base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::OcclusionQueryNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::OcclusionQueryNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::OcclusionQueryNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::OcclusionQueryNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RefBlockCount > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RefBlockCount* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RefBlockCount* obj);
    typedef osg::Referenced parent_t;
    typedef osg::RefBlockCount base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::OperationQueue > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::OperationQueue* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::OperationQueue* obj);
    typedef osg::Referenced parent_t;
    typedef osg::OperationQueue base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::OperationThread * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::OperationThread * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::OperationThread * >* obj);
    typedef osg::OperationQueue::OperationThreads parent_t;
    typedef std::set< osg::OperationThread * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PagedLOD > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PagedLOD* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PagedLOD* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PagedLOD base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::PagedLOD::PerRangeData > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::PagedLOD::PerRangeData >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::PagedLOD::PerRangeData >* obj);
    typedef osg::PagedLOD::PerRangeDataList parent_t;
    typedef std::vector< osg::PagedLOD::PerRangeData > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PagedLOD::PerRangeData > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PagedLOD::PerRangeData* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PagedLOD::PerRangeData* obj);
    typedef osg::PagedLOD::PerRangeData parent_t;
    typedef osg::PagedLOD::PerRangeData base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Plane > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Plane* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Plane* obj);
    typedef osg::Plane parent_t;
    typedef osg::Plane base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Point > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Point* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Point* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Point base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Point::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Point::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Point::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Point::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PointSprite > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PointSprite* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PointSprite* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PointSprite base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PolygonMode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PolygonMode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PolygonMode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PolygonMode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PolygonOffset > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PolygonOffset* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PolygonOffset* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PolygonOffset base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PolygonStipple > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PolygonStipple* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PolygonStipple* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PolygonStipple base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Polytope > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Polytope* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Polytope* obj);
    typedef osg::Polytope parent_t;
    typedef osg::Polytope base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Plane > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Plane >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Plane >* obj);
    typedef osg::Polytope::PlaneList parent_t;
    typedef std::vector< osg::Plane > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::fast_back_stack< unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::fast_back_stack< unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::fast_back_stack< unsigned int >* obj);
    typedef osg::Polytope::MaskStack parent_t;
    typedef osg::fast_back_stack< unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PositionAttitudeTransform > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PositionAttitudeTransform* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PositionAttitudeTransform* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PositionAttitudeTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::PrimitiveSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::PrimitiveSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::PrimitiveSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::PrimitiveSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawArrays > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawArrays* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawArrays* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawArrays base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawArrayLengths > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawArrayLengths* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawArrayLengths* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawArrayLengths base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawElements > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawElements* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawElements* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawElements base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawElementsUByte > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawElementsUByte* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawElementsUByte* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawElementsUByte base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawElementsUShort > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawElementsUShort* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawElementsUShort* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawElementsUShort base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DrawElementsUInt > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DrawElementsUInt* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DrawElementsUInt* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DrawElementsUInt base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Program > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Program* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Program* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Program base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, unsigned int >* obj);
    typedef osg::Program::AttribBindingList parent_t;
    typedef std::map< std::string, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, osg::Program::ActiveVarInfo > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, osg::Program::ActiveVarInfo >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, osg::Program::ActiveVarInfo >* obj);
    typedef osg::Program::ActiveUniformMap parent_t;
    typedef std::map< unsigned int, osg::Program::ActiveVarInfo > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, osg::Program::ActiveVarInfo >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, osg::Program::ActiveVarInfo >* obj);
    typedef osg::Program::ActiveVarInfoMap parent_t;
    typedef std::map< std::string, osg::Program::ActiveVarInfo > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, osg::Program::UniformBlockInfo >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, osg::Program::UniformBlockInfo >* obj);
    typedef osg::Program::UniformBlockMap parent_t;
    typedef std::map< std::string, osg::Program::UniformBlockInfo > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Program::ActiveVarInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Program::ActiveVarInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Program::ActiveVarInfo* obj);
    typedef osg::Program::ActiveVarInfo parent_t;
    typedef osg::Program::ActiveVarInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Program::PerContextProgram > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Program::PerContextProgram* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Program::PerContextProgram* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Program::PerContextProgram base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Program::ProgramBinary > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Program::ProgramBinary* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Program::ProgramBinary* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Program::ProgramBinary base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Program::UniformBlockInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Program::UniformBlockInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Program::UniformBlockInfo* obj);
    typedef osg::Program::UniformBlockInfo parent_t;
    typedef osg::Program::UniformBlockInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Projection > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Projection* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Projection* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Projection base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ProxyNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ProxyNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ProxyNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ProxyNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Quat > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Quat* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Quat* obj);
    typedef osg::Quat parent_t;
    typedef osg::Quat base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::RenderInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::RenderInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::RenderInfo* obj);
    typedef osg::RenderInfo parent_t;
    typedef osg::RenderInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Scissor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Scissor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Scissor* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Scissor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Sequence > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Sequence* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Sequence* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Sequence base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShadeModel > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShadeModel* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShadeModel* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShadeModel base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShaderBinary > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShaderBinary* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShaderBinary* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShaderBinary base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Shader > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Shader* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Shader* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Shader base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::multimap< float, std::string > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::multimap< float, std::string >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::multimap< float, std::string >* obj);
    typedef osg::Shader::CodeInjectionMap parent_t;
    typedef std::multimap< float, std::string > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Shader::PerContextShader > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Shader::PerContextShader* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Shader::PerContextShader* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Shader::PerContextShader base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShaderComponent > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShaderComponent* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShaderComponent* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShaderComponent base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShaderAttribute > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShaderAttribute* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShaderAttribute* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShaderAttribute base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShaderComposer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShaderComposer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShaderComposer* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShaderComposer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< const osg::Shader * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< const osg::Shader * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< const osg::Shader * >* obj);
    typedef osg::ShaderComposer::Shaders parent_t;
    typedef std::vector< const osg::Shader * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShadowVolumeOccluder > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShadowVolumeOccluder* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShadowVolumeOccluder* obj);
    typedef osg::ShadowVolumeOccluder parent_t;
    typedef osg::ShadowVolumeOccluder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Polytope > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Polytope >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Polytope >* obj);
    typedef osg::ShadowVolumeOccluder::HoleList parent_t;
    typedef std::vector< osg::Polytope > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShapeVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShapeVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShapeVisitor* obj);
    typedef osg::ShapeVisitor parent_t;
    typedef osg::ShapeVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConstShapeVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConstShapeVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConstShapeVisitor* obj);
    typedef osg::ConstShapeVisitor parent_t;
    typedef osg::ConstShapeVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Sphere > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Sphere* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Sphere* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Sphere base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Box > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Box* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Box* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Box base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Cone > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Cone* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Cone* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Cone base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Cylinder > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Cylinder* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Cylinder* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Cylinder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Capsule > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Capsule* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Capsule* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Capsule base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::InfinitePlane > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::InfinitePlane* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::InfinitePlane* obj);
    typedef osg::Referenced parent_t;
    typedef osg::InfinitePlane base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TriangleMesh > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TriangleMesh* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TriangleMesh* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TriangleMesh base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ConvexHull > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ConvexHull* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ConvexHull* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ConvexHull base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::HeightField > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::HeightField* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::HeightField* obj);
    typedef osg::Referenced parent_t;
    typedef osg::HeightField base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< float > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< float >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< float >* obj);
    typedef osg::HeightField::HeightList parent_t;
    typedef std::vector< float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::CompositeShape > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::CompositeShape* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::CompositeShape* obj);
    typedef osg::Referenced parent_t;
    typedef osg::CompositeShape base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::Shape > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::Shape > >* obj);
    typedef osg::CompositeShape::ChildList parent_t;
    typedef std::vector< osg::ref_ptr< osg::Shape > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TessellationHints > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TessellationHints* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TessellationHints* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TessellationHints base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ShapeDrawable > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ShapeDrawable* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ShapeDrawable* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ShapeDrawable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::VertexAttribAlias > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::VertexAttribAlias* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::VertexAttribAlias* obj);
    typedef osg::VertexAttribAlias parent_t;
    typedef osg::VertexAttribAlias base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::State > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::State* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::State* obj);
    typedef osg::Referenced parent_t;
    typedef osg::State base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< osg::StateAttribute::Type, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< osg::StateAttribute::Type, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< osg::StateAttribute::Type, unsigned int >* obj);
    typedef osg::StateAttribute::TypeMemberPair parent_t;
    typedef std::pair< osg::StateAttribute::Type, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::StateSet * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::StateSet * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::StateSet * >* obj);
    typedef osg::StateAttribute::ParentList parent_t;
    typedef std::vector< osg::StateSet * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StateAttribute::ModeUsage > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StateAttribute::ModeUsage* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StateAttribute::ModeUsage* obj);
    typedef osg::StateAttribute::ModeUsage parent_t;
    typedef osg::StateAttribute::ModeUsage base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StateSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StateSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StateSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StateSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Object * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Object * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Object * >* obj);
    typedef osg::StateSet::ParentList parent_t;
    typedef std::vector< osg::Object * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, unsigned int >* obj);
    typedef osg::StateSet::ModeList parent_t;
    typedef std::map< unsigned int, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* obj);
    typedef osg::StateSet::RefAttributePair parent_t;
    typedef std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* obj);
    typedef osg::StateSet::AttributeList parent_t;
    typedef std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::StateSet::ModeList > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::StateSet::ModeList >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::StateSet::ModeList >* obj);
    typedef osg::StateSet::TextureModeList parent_t;
    typedef std::vector< osg::StateSet::ModeList > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::StateSet::AttributeList > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::StateSet::AttributeList >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::StateSet::AttributeList >* obj);
    typedef osg::StateSet::TextureAttributeList parent_t;
    typedef std::vector< osg::StateSet::AttributeList > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* obj);
    typedef osg::StateSet::RefUniformPair parent_t;
    typedef std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, osg::StateSet::RefUniformPair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, osg::StateSet::RefUniformPair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, osg::StateSet::RefUniformPair >* obj);
    typedef osg::StateSet::UniformList parent_t;
    typedef std::map< std::string, osg::StateSet::RefUniformPair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StateSet::Callback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StateSet::Callback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StateSet::Callback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StateSet::Callback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Stats > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Stats* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Stats* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Stats base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, double > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, double >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, double >* obj);
    typedef osg::Stats::AttributeMap parent_t;
    typedef std::map< std::string, double > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::Stats::AttributeMap > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::Stats::AttributeMap >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::Stats::AttributeMap >* obj);
    typedef osg::Stats::AttributeMapList parent_t;
    typedef std::vector< osg::Stats::AttributeMap > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, bool > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< std::string, bool >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< std::string, bool >* obj);
    typedef osg::Stats::CollectMap parent_t;
    typedef std::map< std::string, bool > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Stencil > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Stencil* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Stencil* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Stencil base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Stencil::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Stencil::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Stencil::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Stencil::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StencilTwoSided > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StencilTwoSided* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StencilTwoSided* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StencilTwoSided base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::StencilTwoSided::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::StencilTwoSided::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::StencilTwoSided::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::StencilTwoSided::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Switch > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Switch* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Switch* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Switch base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< bool > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< bool >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< bool >* obj);
    typedef osg::Switch::ValueList parent_t;
    typedef std::vector< bool > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexEnv > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexEnv* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexEnv* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexEnv base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexEnvCombine > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexEnvCombine* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexEnvCombine* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexEnvCombine base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexEnvFilter > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexEnvFilter* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexEnvFilter* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexEnvFilter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexGen > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexGen* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexGen* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexGen base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexGenNode > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexGenNode* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexGenNode* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexGenNode base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TexMat > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TexMat* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TexMat* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TexMat base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osg::Texture::TextureObject > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osg::Texture::TextureObject > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osg::Texture::TextureObject > >* obj);
    typedef osg::Texture::TextureObjectList parent_t;
    typedef std::list< osg::ref_ptr< osg::Texture::TextureObject > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture::TextureObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture::TextureObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture::TextureObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture::TextureObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture::TextureObjectManager > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture::TextureObjectManager* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture::TextureObjectManager* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture::TextureObjectManager base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture::TextureObjectSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture::TextureObjectSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture::TextureObjectSet* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture::TextureObjectSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture::TextureProfile > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture::TextureProfile* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture::TextureProfile* obj);
    typedef osg::Texture::TextureProfile parent_t;
    typedef osg::Texture::TextureProfile base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture1D > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture1D* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture1D* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture1D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture1D::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture1D::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture1D::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture1D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2D > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2D* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2D* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2D::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2D::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2D::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2DArray > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2DArray* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2DArray* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2DArray base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2DArray::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2DArray::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2DArray::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2DArray::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2DArray::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2DArray::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2DArray::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2DArray::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture2DMultisample > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture2DMultisample* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture2DMultisample* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture2DMultisample base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture3D > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture3D* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture3D* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture3D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture3D::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture3D::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture3D::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture3D::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Texture3D::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Texture3D::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Texture3D::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Texture3D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureCubeMap > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureCubeMap* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureCubeMap* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureCubeMap base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureCubeMap::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureCubeMap::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureCubeMap::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureCubeMap::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureCubeMap::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureCubeMap::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureCubeMap::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureCubeMap::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureRectangle > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureRectangle* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureRectangle* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureRectangle base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TextureRectangle::SubloadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TextureRectangle::SubloadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TextureRectangle::SubloadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TextureRectangle::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Timer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Timer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Timer* obj);
    typedef osg::Timer parent_t;
    typedef osg::Timer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ElapsedTime > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ElapsedTime* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ElapsedTime* obj);
    typedef osg::ElapsedTime parent_t;
    typedef osg::ElapsedTime base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TransferFunction > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TransferFunction* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TransferFunction* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TransferFunction base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::TransferFunction1D > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::TransferFunction1D* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::TransferFunction1D* obj);
    typedef osg::Referenced parent_t;
    typedef osg::TransferFunction1D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< float, osg::Vec4f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< float, osg::Vec4f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< float, osg::Vec4f >* obj);
    typedef osg::TransferFunction1D::ColorMap parent_t;
    typedef std::map< float, osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Matrix2 > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Matrix2* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Matrix2* obj);
    typedef osg::Matrix2 parent_t;
    typedef osg::Matrix2 base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Matrix3 > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Matrix3* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Matrix3* obj);
    typedef osg::Matrix3 parent_t;
    typedef osg::Matrix3 base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Uniform > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Uniform* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Uniform* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Uniform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Uniform::Callback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Uniform::Callback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Uniform::Callback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Uniform::Callback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::UserDataContainer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::UserDataContainer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::UserDataContainer* obj);
    typedef osg::Referenced parent_t;
    typedef osg::UserDataContainer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::DefaultUserDataContainer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::DefaultUserDataContainer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::DefaultUserDataContainer* obj);
    typedef osg::Referenced parent_t;
    typedef osg::DefaultUserDataContainer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObject* obj);
    typedef osg::Referenced parent_t;
    typedef osg::ValueObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObject::GetValueVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObject::GetValueVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObject::GetValueVisitor* obj);
    typedef osg::ValueObject::GetValueVisitor parent_t;
    typedef osg::ValueObject::GetValueVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObject::SetValueVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObject::SetValueVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObject::SetValueVisitor* obj);
    typedef osg::ValueObject::SetValueVisitor parent_t;
    typedef osg::ValueObject::SetValueVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< std::string > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< std::string >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< std::string >* obj);
    typedef osg::ValueObjectClassNameTrait< std::string > parent_t;
    typedef osg::ValueObjectClassNameTrait< std::string > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< bool > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< bool >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< bool >* obj);
    typedef osg::ValueObjectClassNameTrait< bool > parent_t;
    typedef osg::ValueObjectClassNameTrait< bool > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< char > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< char >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< char >* obj);
    typedef osg::ValueObjectClassNameTrait< char > parent_t;
    typedef osg::ValueObjectClassNameTrait< char > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< unsigned char >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned char >* obj);
    typedef osg::ValueObjectClassNameTrait< unsigned char > parent_t;
    typedef osg::ValueObjectClassNameTrait< unsigned char > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< short > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< short >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< short >* obj);
    typedef osg::ValueObjectClassNameTrait< short > parent_t;
    typedef osg::ValueObjectClassNameTrait< short > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned short > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< unsigned short >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned short >* obj);
    typedef osg::ValueObjectClassNameTrait< unsigned short > parent_t;
    typedef osg::ValueObjectClassNameTrait< unsigned short > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< int >* obj);
    typedef osg::ValueObjectClassNameTrait< int > parent_t;
    typedef osg::ValueObjectClassNameTrait< int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned int >* obj);
    typedef osg::ValueObjectClassNameTrait< unsigned int > parent_t;
    typedef osg::ValueObjectClassNameTrait< unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< float > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< float >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< float >* obj);
    typedef osg::ValueObjectClassNameTrait< float > parent_t;
    typedef osg::ValueObjectClassNameTrait< float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< double > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< double >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< double >* obj);
    typedef osg::ValueObjectClassNameTrait< double > parent_t;
    typedef osg::ValueObjectClassNameTrait< double > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec2f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec2f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec2f >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec2f > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec2f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec3f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec3f >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec3f > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec3f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec4f > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec4f >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec4f >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec4f > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec4f > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec2d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec2d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec2d >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec2d > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec2d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec3d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec3d >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec3d > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec3d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Vec4d >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec4d >* obj);
    typedef osg::ValueObjectClassNameTrait< Vec4d > parent_t;
    typedef osg::ValueObjectClassNameTrait< Vec4d > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Quat > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Quat >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Quat >* obj);
    typedef osg::ValueObjectClassNameTrait< Quat > parent_t;
    typedef osg::ValueObjectClassNameTrait< Quat > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Plane > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Plane >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Plane >* obj);
    typedef osg::ValueObjectClassNameTrait< Plane > parent_t;
    typedef osg::ValueObjectClassNameTrait< Plane > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Matrixf >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Matrixf >* obj);
    typedef osg::ValueObjectClassNameTrait< Matrixf > parent_t;
    typedef osg::ValueObjectClassNameTrait< Matrixf > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ValueObjectClassNameTrait< Matrixd >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ValueObjectClassNameTrait< Matrixd >* obj);
    typedef osg::ValueObjectClassNameTrait< Matrixd > parent_t;
    typedef osg::ValueObjectClassNameTrait< Matrixd > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec2b > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec2b* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec2b* obj);
    typedef osg::Vec2b parent_t;
    typedef osg::Vec2b base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec2d > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec2d* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec2d* obj);
    typedef osg::Vec2d parent_t;
    typedef osg::Vec2d base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec2f > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec2f* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec2f* obj);
    typedef osg::Vec2f parent_t;
    typedef osg::Vec2f base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec2s > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec2s* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec2s* obj);
    typedef osg::Vec2s parent_t;
    typedef osg::Vec2s base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec3b > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec3b* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec3b* obj);
    typedef osg::Vec3b parent_t;
    typedef osg::Vec3b base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec3d > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec3d* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec3d* obj);
    typedef osg::Vec3d parent_t;
    typedef osg::Vec3d base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec3f > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec3f* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec3f* obj);
    typedef osg::Vec3f parent_t;
    typedef osg::Vec3f base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec3s > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec3s* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec3s* obj);
    typedef osg::Vec3s parent_t;
    typedef osg::Vec3s base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec4b > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec4b* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec4b* obj);
    typedef osg::Vec4b parent_t;
    typedef osg::Vec4b base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec4d > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec4d* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec4d* obj);
    typedef osg::Vec4d parent_t;
    typedef osg::Vec4d base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec4f > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec4f* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec4f* obj);
    typedef osg::Vec4f parent_t;
    typedef osg::Vec4f base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec4s > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec4s* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec4s* obj);
    typedef osg::Vec4s parent_t;
    typedef osg::Vec4s base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec4ub > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Vec4ub* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Vec4ub* obj);
    typedef osg::Vec4ub parent_t;
    typedef osg::Vec4ub base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::VertexProgram > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::VertexProgram* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::VertexProgram* obj);
    typedef osg::Referenced parent_t;
    typedef osg::VertexProgram base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::VertexProgram::Extensions > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::VertexProgram::Extensions* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::VertexProgram::Extensions* obj);
    typedef osg::Referenced parent_t;
    typedef osg::VertexProgram::Extensions base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::View > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::View* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::View* obj);
    typedef osg::Referenced parent_t;
    typedef osg::View base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::View::Slave > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::View::Slave* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::View::Slave* obj);
    typedef osg::View::Slave parent_t;
    typedef osg::View::Slave base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::View::Slave::UpdateSlaveCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::View::Slave::UpdateSlaveCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::View::Slave::UpdateSlaveCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osg::View::Slave::UpdateSlaveCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Viewport > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::Viewport* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::Viewport* obj);
    typedef osg::Referenced parent_t;
    typedef osg::Viewport base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIEventHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIEventHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIEventHandler* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::CameraManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::CameraManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::CameraManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::CameraManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::AnimationPathManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::AnimationPathManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::AnimationPathManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::AnimationPathManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::AnimationPathManipulator::AnimationCompletedCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::AnimationPathManipulator::AnimationCompletedCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::AnimationPathManipulator::AnimationCompletedCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::CameraManipulator::CoordinateFrameCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::CameraManipulator::CoordinateFrameCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::CameraManipulator::CoordinateFrameCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::CameraViewSwitchManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::CameraViewSwitchManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::CameraViewSwitchManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::CameraViewSwitchManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::CameraView > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osg::CameraView > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osg::CameraView > >* obj);
    typedef osgGA::CameraViewSwitchManipulator::CameraViewList parent_t;
    typedef std::vector< osg::ref_ptr< osg::CameraView > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::DriveManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::DriveManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::DriveManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::DriveManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::EventQueue > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::EventQueue* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::EventQueue* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::EventQueue base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >* obj);
    typedef osgGA::EventQueue::Events parent_t;
    typedef std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::EventVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::EventVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::EventVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::EventVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::StandardManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::StandardManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::StandardManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::StandardManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::FirstPersonManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::FirstPersonManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::FirstPersonManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::FirstPersonManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::FlightManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::FlightManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::FlightManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::FlightManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIActionAdapter > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIActionAdapter* obj);
    typedef osgGA::GUIActionAdapter parent_t;
    typedef osgGA::GUIActionAdapter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIEventAdapter > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIEventAdapter* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::GUIEventAdapter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIEventAdapter::TouchData > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIEventAdapter::TouchData* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIEventAdapter::TouchData* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::GUIEventAdapter::TouchData base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* obj);
    typedef osgGA::GUIEventAdapter::TouchData::TouchSet parent_t;
    typedef std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIEventAdapter::TouchData::TouchPoint* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIEventAdapter::TouchData::TouchPoint* obj);
    typedef osgGA::GUIEventAdapter::TouchData::TouchPoint parent_t;
    typedef osgGA::GUIEventAdapter::TouchData::TouchPoint base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::GUIEventHandlerVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::GUIEventHandlerVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::GUIEventHandlerVisitor* obj);
    typedef osgGA::GUIEventHandlerVisitor parent_t;
    typedef osgGA::GUIEventHandlerVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::KeySwitchMatrixManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::KeySwitchMatrixManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::KeySwitchMatrixManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::KeySwitchMatrixManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* obj);
    typedef osgGA::KeySwitchMatrixManipulator::NamedManipulator parent_t;
    typedef std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* obj);
    typedef osgGA::KeySwitchMatrixManipulator::KeyManipMap parent_t;
    typedef std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::OrbitManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::OrbitManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::OrbitManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::OrbitManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::TrackballManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::TrackballManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::TrackballManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::TrackballManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::MultiTouchTrackballManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::MultiTouchTrackballManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::MultiTouchTrackballManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::MultiTouchTrackballManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::NodeTrackerManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::NodeTrackerManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::NodeTrackerManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::NodeTrackerManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::SphericalManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::SphericalManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::SphericalManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::SphericalManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::StateSetManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::StateSetManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::StateSetManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::StateSetManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::TerrainManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::TerrainManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::TerrainManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::TerrainManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgGA::UFOManipulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgGA::UFOManipulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgGA::UFOManipulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgGA::UFOManipulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::CubeMapGenerator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::CubeMapGenerator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::CubeMapGenerator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::CubeMapGenerator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::CullVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::CullVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::CullVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::CullVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::DelaunayConstraint > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::DelaunayConstraint* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::DelaunayConstraint* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::DelaunayConstraint base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::DelaunayTriangulator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::DelaunayTriangulator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::DelaunayTriangulator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::DelaunayTriangulator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >* obj);
    typedef osgUtil::DelaunayTriangulator::linelist parent_t;
    typedef std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::DisplayRequirementsVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::DisplayRequirementsVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::DisplayRequirementsVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::DisplayRequirementsVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::DrawElementTypeSimplifier > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::DrawElementTypeSimplifier* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::DrawElementTypeSimplifier* obj);
    typedef osgUtil::DrawElementTypeSimplifier parent_t;
    typedef osgUtil::DrawElementTypeSimplifier base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::DrawElementTypeSimplifierVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::DrawElementTypeSimplifierVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::DrawElementTypeSimplifierVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::dereference_less > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::dereference_less* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::dereference_less* obj);
    typedef osgUtil::dereference_less parent_t;
    typedef osgUtil::dereference_less base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::dereference_clear > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::dereference_clear* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::dereference_clear* obj);
    typedef osgUtil::dereference_clear parent_t;
    typedef osgUtil::dereference_clear base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::EdgeCollector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::EdgeCollector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::EdgeCollector* obj);
    typedef osgUtil::EdgeCollector parent_t;
    typedef osgUtil::EdgeCollector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osg::UIntArray > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osg::UIntArray > >* obj);
    typedef osgUtil::EdgeCollector::IndexArrayList parent_t;
    typedef std::list< osg::ref_ptr< osg::UIntArray > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >* obj);
    typedef osgUtil::EdgeCollector::EdgeSet parent_t;
    typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* obj);
    typedef osgUtil::EdgeCollector::EdgeList parent_t;
    typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >* obj);
    typedef osgUtil::EdgeCollector::EdgeloopList parent_t;
    typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >* obj);
    typedef osgUtil::EdgeCollector::PointSet parent_t;
    typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >* obj);
    typedef osgUtil::EdgeCollector::PointList parent_t;
    typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* obj);
    typedef osgUtil::EdgeCollector::TriangleList parent_t;
    typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* obj);
    typedef osgUtil::EdgeCollector::TriangleSet parent_t;
    typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >* obj);
    typedef osgUtil::EdgeCollector::TriangleMap parent_t;
    typedef std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::EdgeCollector::Edge > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::EdgeCollector::Edge* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::EdgeCollector::Edge* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::EdgeCollector::Edge base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::EdgeCollector::Edgeloop > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::EdgeCollector::Edgeloop* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::EdgeCollector::Edgeloop* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::EdgeCollector::Edgeloop base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::EdgeCollector::Point > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::EdgeCollector::Point* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::EdgeCollector::Point* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::EdgeCollector::Point base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::EdgeCollector::Triangle > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::EdgeCollector::Triangle* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::EdgeCollector::Triangle* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::EdgeCollector::Triangle base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::GLObjectsVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::GLObjectsVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::GLObjectsVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::GLObjectsVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::GLObjectsOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::GLObjectsOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::GLObjectsOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::GLObjectsOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::HalfWayMapGenerator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::HalfWayMapGenerator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::HalfWayMapGenerator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::HalfWayMapGenerator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::HighlightMapGenerator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::HighlightMapGenerator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::HighlightMapGenerator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::HighlightMapGenerator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::StateToCompile > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::StateToCompile* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::StateToCompile* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::StateToCompile base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Drawable * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Drawable * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Drawable * >* obj);
    typedef osgUtil::StateToCompile::DrawableSet parent_t;
    typedef std::set< osg::Drawable * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::StateSet * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::StateSet * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::StateSet * >* obj);
    typedef osgUtil::StateToCompile::StateSetSet parent_t;
    typedef std::set< osg::StateSet * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Texture * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Texture * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Texture * >* obj);
    typedef osgUtil::StateToCompile::TextureSet parent_t;
    typedef std::set< osg::Texture * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Program * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Program * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Program * >* obj);
    typedef osgUtil::StateToCompile::ProgramSet parent_t;
    typedef std::set< osg::Program * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::GraphicsContext * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::GraphicsContext * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::GraphicsContext * >* obj);
    typedef osgUtil::IncrementalCompileOperation::ContextSet parent_t;
    typedef std::set< osg::GraphicsContext * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >* obj);
    typedef osgUtil::IncrementalCompileOperation::CompileSets parent_t;
    typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileCompletedCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileCompletedCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileCompletedCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileOp* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileDrawableOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileDrawableOp* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileDrawableOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileInfo* obj);
    typedef osg::RenderInfo parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileList > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileList* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileList* obj);
    typedef osgUtil::IncrementalCompileOperation::CompileList parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileList base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >* obj);
    typedef osgUtil::IncrementalCompileOperation::CompileList::CompileOps parent_t;
    typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileProgramOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileProgramOp* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileProgramOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileSet* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileSet* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileSet base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* obj);
    typedef osgUtil::IncrementalCompileOperation::CompileSet::CompileMap parent_t;
    typedef std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IncrementalCompileOperation::CompileTextureOp* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileTextureOp* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IncrementalCompileOperation::CompileTextureOp base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Intersector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Intersector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Intersector* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::Intersector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IntersectorGroup > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IntersectorGroup* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IntersectorGroup* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IntersectorGroup base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::Intersector > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osgUtil::Intersector > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::Intersector > >* obj);
    typedef osgUtil::IntersectorGroup::Intersectors parent_t;
    typedef std::vector< osg::ref_ptr< osgUtil::Intersector > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IntersectionVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IntersectionVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IntersectionVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IntersectionVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IntersectionVisitor::ReadCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IntersectionVisitor::ReadCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IntersectionVisitor::ReadCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IntersectionVisitor::ReadCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Hit > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Hit* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Hit* obj);
    typedef osgUtil::Hit parent_t;
    typedef osgUtil::Hit base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< int >* obj);
    typedef osgUtil::Hit::VecIndexList parent_t;
    typedef std::vector< int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IntersectVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IntersectVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IntersectVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IntersectVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PickVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PickVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PickVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::PickVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::LineSegmentIntersector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::LineSegmentIntersector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::LineSegmentIntersector* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::LineSegmentIntersector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::multiset< osgUtil::LineSegmentIntersector::Intersection >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::multiset< osgUtil::LineSegmentIntersector::Intersection >* obj);
    typedef osgUtil::LineSegmentIntersector::Intersections parent_t;
    typedef std::multiset< osgUtil::LineSegmentIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::LineSegmentIntersector::Intersection > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::LineSegmentIntersector::Intersection* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::LineSegmentIntersector::Intersection* obj);
    typedef osgUtil::LineSegmentIntersector::Intersection parent_t;
    typedef osgUtil::LineSegmentIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::BaseOptimizerVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::BaseOptimizerVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::BaseOptimizerVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::BaseOptimizerVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::GeometryCollector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::GeometryCollector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::GeometryCollector* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::GeometryCollector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Geometry * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Geometry * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Geometry * >* obj);
    typedef osgUtil::GeometryCollector::GeometryList parent_t;
    typedef std::set< osg::Geometry * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::IndexMeshVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::IndexMeshVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::IndexMeshVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::IndexMeshVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::VertexCacheVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::VertexCacheVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::VertexCacheVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::VertexCacheVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::VertexCacheMissVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::VertexCacheMissVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::VertexCacheMissVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::VertexCacheMissVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::VertexAccessOrderVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::VertexAccessOrderVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::VertexAccessOrderVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::VertexAccessOrderVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::AddRangeOperator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::AddRangeOperator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::AddRangeOperator* obj);
    typedef osgUtil::AddRangeOperator parent_t;
    typedef osgUtil::AddRangeOperator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::MultiplyRangeOperator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::MultiplyRangeOperator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::MultiplyRangeOperator* obj);
    typedef osgUtil::MultiplyRangeOperator parent_t;
    typedef osgUtil::MultiplyRangeOperator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Optimizer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Optimizer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Optimizer* obj);
    typedef osgUtil::Optimizer parent_t;
    typedef osgUtil::Optimizer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PlaneIntersector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PlaneIntersector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PlaneIntersector* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::PlaneIntersector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osgUtil::PlaneIntersector::Intersection >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osgUtil::PlaneIntersector::Intersection >* obj);
    typedef osgUtil::PlaneIntersector::Intersections parent_t;
    typedef std::vector< osgUtil::PlaneIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PlaneIntersector::Intersection > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PlaneIntersector::Intersection* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PlaneIntersector::Intersection* obj);
    typedef osgUtil::PlaneIntersector::Intersection parent_t;
    typedef osgUtil::PlaneIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PolytopeIntersector > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PolytopeIntersector* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PolytopeIntersector* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::PolytopeIntersector base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osgUtil::PolytopeIntersector::Intersection >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osgUtil::PolytopeIntersector::Intersection >* obj);
    typedef osgUtil::PolytopeIntersector::Intersections parent_t;
    typedef std::set< osgUtil::PolytopeIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PolytopeIntersector::Intersection > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PolytopeIntersector::Intersection* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PolytopeIntersector::Intersection* obj);
    typedef osgUtil::PolytopeIntersector::Intersection parent_t;
    typedef osgUtil::PolytopeIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PositionalStateContainer > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PositionalStateContainer* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PositionalStateContainer* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::PositionalStateContainer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* obj);
    typedef osgUtil::PositionalStateContainer::AttrMatrixPair parent_t;
    typedef std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* obj);
    typedef osgUtil::PositionalStateContainer::AttrMatrixList parent_t;
    typedef std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* obj);
    typedef osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap parent_t;
    typedef std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::PrintVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::PrintVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::PrintVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::PrintVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::ReflectionMapGenerator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::ReflectionMapGenerator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::ReflectionMapGenerator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::ReflectionMapGenerator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderBin > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderBin* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderBin* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::RenderBin base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osgUtil::RenderLeaf * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osgUtil::RenderLeaf * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osgUtil::RenderLeaf * >* obj);
    typedef osgUtil::RenderBin::RenderLeafList parent_t;
    typedef std::vector< osgUtil::RenderLeaf * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osgUtil::StateGraph * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osgUtil::StateGraph * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osgUtil::StateGraph * >* obj);
    typedef osgUtil::RenderBin::StateGraphList parent_t;
    typedef std::vector< osgUtil::StateGraph * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* obj);
    typedef osgUtil::RenderBin::RenderBinList parent_t;
    typedef std::map< int, osg::ref_ptr< osgUtil::RenderBin > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderBin::DrawCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderBin::DrawCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderBin::DrawCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::RenderBin::DrawCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderBin::SortCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderBin::SortCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderBin::SortCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::RenderBin::SortCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderLeaf > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderLeaf* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderLeaf* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::RenderLeaf base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderStage > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderStage* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderStage* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::RenderStage base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::RenderStage::Attachment > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::RenderStage::Attachment* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::RenderStage::Attachment* obj);
    typedef osgUtil::RenderStage::Attachment parent_t;
    typedef osgUtil::RenderStage::Attachment base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::SceneGraphBuilder > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::SceneGraphBuilder* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::SceneGraphBuilder* obj);
    typedef osgUtil::SceneGraphBuilder parent_t;
    typedef osgUtil::SceneGraphBuilder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::SceneView > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::SceneView* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::SceneView* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::SceneView base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::SceneView::ComputeStereoMatricesCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::SceneView::ComputeStereoMatricesCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::SceneView::ComputeStereoMatricesCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::ShaderGenCache > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::ShaderGenCache* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::ShaderGenCache* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::ShaderGenCache base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< int, osg::ref_ptr< osg::StateSet > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< int, osg::ref_ptr< osg::StateSet > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< int, osg::ref_ptr< osg::StateSet > >* obj);
    typedef osgUtil::ShaderGenCache::StateSetMap parent_t;
    typedef std::map< int, osg::ref_ptr< osg::StateSet > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::ShaderGenVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::ShaderGenVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::ShaderGenVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::ShaderGenVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Simplifier > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Simplifier* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Simplifier* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::Simplifier base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Simplifier::ContinueSimplificationCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::Simplifier::ContinueSimplificationCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::SmoothingVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::SmoothingVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::SmoothingVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::SmoothingVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::StateGraph > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::StateGraph* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::StateGraph* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::StateGraph base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* obj);
    typedef osgUtil::StateGraph::ChildList parent_t;
    typedef std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >* obj);
    typedef osgUtil::StateGraph::LeafList parent_t;
    typedef std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Statistics > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Statistics* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Statistics* obj);
    typedef osgUtil::Statistics parent_t;
    typedef osgUtil::Statistics base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::pair< unsigned int, unsigned int > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::pair< unsigned int, unsigned int >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::pair< unsigned int, unsigned int >* obj);
    typedef osgUtil::Statistics::PrimitivePair parent_t;
    typedef std::pair< unsigned int, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< unsigned int, osgUtil::Statistics::PrimitivePair > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::map< unsigned int, osgUtil::Statistics::PrimitivePair >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::map< unsigned int, osgUtil::Statistics::PrimitivePair >* obj);
    typedef osgUtil::Statistics::PrimitiveValueMap parent_t;
    typedef std::map< unsigned int, osgUtil::Statistics::PrimitivePair > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::StatsVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::StatsVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::StatsVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::StatsVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::set< osg::Node * > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static std::set< osg::Node * >* _bind_ctor(lua_State *L);
    static void _bind_dtor(std::set< osg::Node * >* obj);
    typedef osgUtil::StatsVisitor::NodeSet parent_t;
    typedef std::set< osg::Node * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::TangentSpaceGenerator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::TangentSpaceGenerator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::TangentSpaceGenerator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::TangentSpaceGenerator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::Tessellator > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::Tessellator* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::Tessellator* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::Tessellator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::TransformCallback > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::TransformCallback* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::TransformCallback* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::TransformCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::TriStripVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::TriStripVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::TriStripVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::TriStripVisitor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osgUtil::UpdateVisitor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osgUtil::UpdateVisitor* _bind_ctor(lua_State *L);
    static void _bind_dtor(osgUtil::UpdateVisitor* obj);
    typedef osg::Referenced parent_t;
    typedef osgUtil::UpdateVisitor base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 59587824 > {
public:
    typedef osg::ByteArray type;
    
};

template<>
class LunaType< 17157487 > {
public:
    typedef osg::ShortArray type;
    
};

template<>
class LunaType< 28130065 > {
public:
    typedef osg::IntArray type;
    
};

template<>
class LunaType< 72202494 > {
public:
    typedef osg::UByteArray type;
    
};

template<>
class LunaType< 4787198 > {
public:
    typedef osg::UShortArray type;
    
};

template<>
class LunaType< 86600648 > {
public:
    typedef osg::UIntArray type;
    
};

template<>
class LunaType< 43730923 > {
public:
    typedef osg::FloatArray type;
    
};

template<>
class LunaType< 78575573 > {
public:
    typedef osg::Vec2Array type;
    
};

template<>
class LunaType< 7204710 > {
public:
    typedef osg::Vec3Array type;
    
};

template<>
class LunaType< 35833861 > {
public:
    typedef osg::Vec4Array type;
    
};

template<>
class LunaType< 83703711 > {
public:
    typedef osg::Vec4ubArray type;
    
};

template<>
class LunaType< 22062959 > {
public:
    typedef osg::Vec2sArray type;
    
};

template<>
class LunaType< 9566505 > {
public:
    typedef osg::Vec3sArray type;
    
};

template<>
class LunaType< 97070066 > {
public:
    typedef osg::Vec4sArray type;
    
};

template<>
class LunaType< 35367467 > {
public:
    typedef osg::Vec2bArray type;
    
};

template<>
class LunaType< 22871013 > {
public:
    typedef osg::Vec3bArray type;
    
};

template<>
class LunaType< 10374559 > {
public:
    typedef osg::Vec4bArray type;
    
};

template<>
class LunaType< 50192637 > {
public:
    typedef osg::DoubleArray type;
    
};

template<>
class LunaType< 92625769 > {
public:
    typedef osg::Vec2dArray type;
    
};

template<>
class LunaType< 80129315 > {
public:
    typedef osg::Vec3dArray type;
    
};

template<>
class LunaType< 67632861 > {
public:
    typedef osg::Vec4dArray type;
    
};

template<>
class LunaType< 82206572 > {
public:
    typedef osg::MatrixfArray type;
    
};

template<>
class LunaType< 82744899 > {
public:
    typedef osg::BoundingBoxf type;
    
};

template<>
class LunaType< 82744897 > {
public:
    typedef osg::BoundingBoxd type;
    
};

template<>
class LunaType< 54337302 > {
public:
    typedef osg::BoundingSpheref type;
    
};

template<>
class LunaType< 54337300 > {
public:
    typedef osg::BoundingSphered type;
    
};

template<>
class LunaType< 59774582 > {
public:
    typedef osg::GLBufferObjectList type;
    
};

template<>
class LunaType< 57409252 > {
public:
    typedef osg::CostPair type;
    
};

template<>
class LunaType< 52729833 > {
public:
    typedef osg::NodeList type;
    
};

template<>
class LunaType< 71630045 > {
public:
    typedef osg::ImageList type;
    
};

template<>
class LunaType< 52841328 > {
public:
    typedef osg::NodePath type;
    
};

template<>
class LunaType< 71600444 > {
public:
    typedef osg::NodePathList type;
    
};

template<>
class LunaType< 63553411 > {
public:
    typedef osg::MatrixList type;
    
};

template<>
class LunaType< 65202791 > {
public:
    typedef osg::RefNodePath type;
    
};

template<>
class LunaType< 15861945 > {
public:
    typedef osg::VectorGLsizei type;
    
};

template<>
class LunaType< 17499950 > {
public:
    typedef osg::VectorGLubyte type;
    
};

template<>
class LunaType< 57687479 > {
public:
    typedef osg::VectorGLushort type;
    
};

template<>
class LunaType< 74764459 > {
public:
    typedef osg::VectorGLuint type;
    
};

template<>
class LunaType< 73063359 > {
public:
    typedef osg::ShaderComponents type;
    
};

template<>
class LunaType< 39369741 > {
public:
    typedef osg::ShadowVolumeOccluderList type;
    
};

template<>
class LunaType< 3539396 > {
public:
    typedef osg::StringValueObject type;
    
};

template<>
class LunaType< 77400297 > {
public:
    typedef osg::BoolValueObject type;
    
};

template<>
class LunaType< 310099 > {
public:
    typedef osg::CharValueObject type;
    
};

template<>
class LunaType< 43245321 > {
public:
    typedef osg::UCharValueObject type;
    
};

template<>
class LunaType< 7581487 > {
public:
    typedef osg::ShortValueObject type;
    
};

template<>
class LunaType< 26732852 > {
public:
    typedef osg::UShortValueObject type;
    
};

template<>
class LunaType< 37099841 > {
public:
    typedef osg::IntValueObject type;
    
};

template<>
class LunaType< 62642718 > {
public:
    typedef osg::UIntValueObject type;
    
};

template<>
class LunaType< 93822108 > {
public:
    typedef osg::FloatValueObject type;
    
};

template<>
class LunaType< 23601808 > {
public:
    typedef osg::DoubleValueObject type;
    
};

template<>
class LunaType< 9780955 > {
public:
    typedef osg::Vec2fValueObject type;
    
};

template<>
class LunaType< 56306081 > {
public:
    typedef osg::Vec3fValueObject type;
    
};

template<>
class LunaType< 2831186 > {
public:
    typedef osg::Vec4fValueObject type;
    
};

template<>
class LunaType< 40755179 > {
public:
    typedef osg::Vec2dValueObject type;
    
};

template<>
class LunaType< 99776782 > {
public:
    typedef osg::Vec3dValueObject type;
    
};

template<>
class LunaType< 46300926 > {
public:
    typedef osg::Vec4dValueObject type;
    
};

template<>
class LunaType< 57401373 > {
public:
    typedef osg::QuatValueObject type;
    
};

template<>
class LunaType< 98506363 > {
public:
    typedef osg::PlaneValueObject type;
    
};

template<>
class LunaType< 42089936 > {
public:
    typedef osg::MatrixfValueObject type;
    
};

template<>
class LunaType< 1898386 > {
public:
    typedef osg::MatrixdValueObject type;
    
};

template<>
class LunaType< 38387791 > {
public:
    typedef osg::Vec3dList type;
    
};

template<>
class LunaType< 73580662 > {
public:
    typedef osg::StateSetList type;
    
};

template<>
class LunaType< 97032511 > {
public:
    typedef osg::StateAttributeUIntPairList type;
    
};

template<>
class LunaType< 50169651 > {
public:
    typedef osg::Referenced type;
    
};

template<>
class LunaType< 87612809 > {
public:
    typedef osg::AnimationPath::TimeControlPointMap type;
    
};

template<>
class LunaType< 19942584 > {
public:
    typedef osg::AnimationPath::ControlPoint type;
    
};

template<>
class LunaType< 31149124 > {
public:
    typedef osg::ApplicationUsage::UsageMap type;
    
};

template<>
class LunaType< 50027641 > {
public:
    typedef osg::ApplicationUsageProxy type;
    
};

template<>
class LunaType< 99527028 > {
public:
    typedef osg::ArgumentParser type;
    
};

template<>
class LunaType< 92019184 > {
public:
    typedef osg::ArgumentParser::ErrorMessageMap type;
    
};

template<>
class LunaType< 67360031 > {
public:
    typedef osg::ArgumentParser::Parameter type;
    
};

template<>
class LunaType< 35264102 > {
public:
    typedef osg::ArrayVisitor type;
    
};

template<>
class LunaType< 80735172 > {
public:
    typedef osg::ConstArrayVisitor type;
    
};

template<>
class LunaType< 87991103 > {
public:
    typedef osg::ValueVisitor type;
    
};

template<>
class LunaType< 86989408 > {
public:
    typedef osg::ConstValueVisitor type;
    
};

template<>
class LunaType< 75373010 > {
public:
    typedef osg::Billboard::PositionList type;
    
};

template<>
class LunaType< 12032151 > {
public:
    typedef osg::BufferObjectProfile type;
    
};

template<>
class LunaType< 69650430 > {
public:
    typedef osg::GLBufferObject::BufferEntry type;
    
};

template<>
class LunaType< 31435107 > {
public:
    typedef osg::CullSettings type;
    
};

template<>
class LunaType< 89024977 > {
public:
    typedef osg::Camera::BufferAttachmentMap type;
    
};

template<>
class LunaType< 65796671 > {
public:
    typedef osg::Camera::Attachment type;
    
};

template<>
class LunaType< 73670266 > {
public:
    typedef osg::ClipNode::ClipPlaneList type;
    
};

template<>
class LunaType< 26463029 > {
public:
    typedef osg::CollectOccludersVisitor::ShadowVolumeOccluderSet type;
    
};

template<>
class LunaType< 25393619 > {
public:
    typedef osg::ConvexPlanarOccluder::HoleList type;
    
};

template<>
class LunaType< 16091124 > {
public:
    typedef osg::ConvexPlanarPolygon type;
    
};

template<>
class LunaType< 66044715 > {
public:
    typedef osg::ConvexPlanarPolygon::VertexList type;
    
};

template<>
class LunaType< 27134364 > {
public:
    typedef osg::CopyOp type;
    
};

template<>
class LunaType< 87315315 > {
public:
    typedef osg::CullingSet::StateFrustumPair type;
    
};

template<>
class LunaType< 87204151 > {
public:
    typedef osg::CullingSet::StateFrustumList type;
    
};

template<>
class LunaType< 82970996 > {
public:
    typedef osg::CullingSet::OccluderList type;
    
};

template<>
class LunaType< 85477666 > {
public:
    typedef osg::CullStack::OccluderList type;
    
};

template<>
class LunaType< 71916660 > {
public:
    typedef osg::CullStack::CullingStack type;
    
};

template<>
class LunaType< 1576447 > {
public:
    typedef osg::DeleteHandler type;
    
};

template<>
class LunaType< 33538310 > {
public:
    typedef osg::DeleteHandler::FrameNumberObjectPair type;
    
};

template<>
class LunaType< 16632691 > {
public:
    typedef osg::DeleteHandler::ObjectsToDeleteList type;
    
};

template<>
class LunaType< 87121047 > {
public:
    typedef osg::Drawable::ParentList type;
    
};

template<>
class LunaType< 13846292 > {
public:
    typedef osg::FragmentProgram::LocalParamList type;
    
};

template<>
class LunaType< 4745759 > {
public:
    typedef osg::FragmentProgram::MatrixList type;
    
};

template<>
class LunaType< 90669884 > {
public:
    typedef osg::FrameBufferAttachment type;
    
};

template<>
class LunaType< 67520441 > {
public:
    typedef osg::FrameBufferObject::AttachmentMap type;
    
};

template<>
class LunaType< 20278517 > {
public:
    typedef osg::FrameBufferObject::MultipleRenderingTargets type;
    
};

template<>
class LunaType< 47161606 > {
public:
    typedef osg::Geode::DrawableList type;
    
};

template<>
class LunaType< 57346078 > {
public:
    typedef osg::Geometry::ArrayDataList type;
    
};

template<>
class LunaType< 23074168 > {
public:
    typedef osg::Geometry::PrimitiveSetList type;
    
};

template<>
class LunaType< 26926568 > {
public:
    typedef osg::Geometry::ArrayList type;
    
};

template<>
class LunaType< 9739566 > {
public:
    typedef osg::Geometry::DrawElementsList type;
    
};

template<>
class LunaType< 26680564 > {
public:
    typedef osg::Geometry::ArrayData type;
    
};

template<>
class LunaType< 80248523 > {
public:
    typedef osg::Geometry::Vec3ArrayData type;
    
};

template<>
class LunaType< 22643526 > {
public:
    typedef osg::GLBeginEndAdapter type;
    
};

template<>
class LunaType< 58853759 > {
public:
    typedef osg::PixelStorageModes type;
    
};

template<>
class LunaType< 96527715 > {
public:
    typedef osg::GraphicsContext::ScreenSettingsList type;
    
};

template<>
class LunaType< 62380053 > {
public:
    typedef osg::GraphicsContext::GraphicsContexts type;
    
};

template<>
class LunaType< 2003493 > {
public:
    typedef osg::GraphicsContext::GraphicsOperationQueue type;
    
};

template<>
class LunaType< 30655397 > {
public:
    typedef osg::GraphicsContext::Cameras type;
    
};

template<>
class LunaType< 83590106 > {
public:
    typedef osg::GraphicsContext::ScreenIdentifier type;
    
};

template<>
class LunaType< 15827252 > {
public:
    typedef osg::GraphicsContext::ScreenSettings type;
    
};

template<>
class LunaType< 49050770 > {
public:
    typedef osg::ClampedLinearCostFunction1D type;
    
};

template<>
class LunaType< 63715389 > {
public:
    typedef osg::Image::MipmapDataType type;
    
};

template<>
class LunaType< 67922937 > {
public:
    typedef osg::ImageSequence::Images type;
    
};

template<>
class LunaType< 52401783 > {
public:
    typedef osg::ImageSequence::FileNames type;
    
};

template<>
class LunaType< 83757031 > {
public:
    typedef osg::ImageStream::AudioStreams type;
    
};

template<>
class LunaType< 91252552 > {
public:
    typedef osg::KdTree::LineSegmentIntersections type;
    
};

template<>
class LunaType< 4517862 > {
public:
    typedef osg::KdTree::KdNodeList type;
    
};

template<>
class LunaType< 51468997 > {
public:
    typedef osg::KdTree::TriangleList type;
    
};

template<>
class LunaType< 4714115 > {
public:
    typedef osg::KdTree::BuildOptions type;
    
};

template<>
class LunaType< 72782769 > {
public:
    typedef osg::KdTree::KdNode type;
    
};

template<>
class LunaType< 2943627 > {
public:
    typedef osg::KdTree::LineSegmentIntersection type;
    
};

template<>
class LunaType< 55864787 > {
public:
    typedef osg::KdTree::LineSegmentIntersection::IndexList type;
    
};

template<>
class LunaType< 14271479 > {
public:
    typedef osg::KdTree::LineSegmentIntersection::RatioList type;
    
};

template<>
class LunaType< 43117328 > {
public:
    typedef osg::KdTree::Triangle type;
    
};

template<>
class LunaType< 2638765 > {
public:
    typedef osg::LOD::MinMaxPair type;
    
};

template<>
class LunaType< 74660837 > {
public:
    typedef osg::LOD::RangeList type;
    
};

template<>
class LunaType< 18903838 > {
public:
    typedef osg::Matrixd type;
    
};

template<>
class LunaType< 18903840 > {
public:
    typedef osg::Matrixf type;
    
};

template<>
class LunaType< 44162724 > {
public:
    typedef osg::Node::ParentList type;
    
};

template<>
class LunaType< 27507650 > {
public:
    typedef osg::Node::DescriptionList type;
    
};

template<>
class LunaType< 69073940 > {
public:
    typedef osg::NodeAcceptOp type;
    
};

template<>
class LunaType< 58375525 > {
public:
    typedef osg::Observer type;
    
};

template<>
class LunaType< 311637 > {
public:
    typedef osg::ObserverSet::Observers type;
    
};

template<>
class LunaType< 5626651 > {
public:
    typedef osg::ObserverNodePath type;
    
};

template<>
class LunaType< 14844916 > {
public:
    typedef osg::OperationQueue::OperationThreads type;
    
};

template<>
class LunaType< 56081763 > {
public:
    typedef osg::PagedLOD::PerRangeDataList type;
    
};

template<>
class LunaType< 17496146 > {
public:
    typedef osg::PagedLOD::PerRangeData type;
    
};

template<>
class LunaType< 86970521 > {
public:
    typedef osg::Plane type;
    
};

template<>
class LunaType< 26652350 > {
public:
    typedef osg::Polytope type;
    
};

template<>
class LunaType< 33161232 > {
public:
    typedef osg::Polytope::PlaneList type;
    
};

template<>
class LunaType< 71066845 > {
public:
    typedef osg::Polytope::VertexList type;
    
};

template<>
class LunaType< 95628403 > {
public:
    typedef osg::Polytope::MaskStack type;
    
};

template<>
class LunaType< 65712176 > {
public:
    typedef osg::Program::AttribBindingList type;
    
};

template<>
class LunaType< 28455885 > {
public:
    typedef osg::Program::FragDataBindingList type;
    
};

template<>
class LunaType< 76794797 > {
public:
    typedef osg::Program::UniformBlockBindingList type;
    
};

template<>
class LunaType< 87388636 > {
public:
    typedef osg::Program::ActiveUniformMap type;
    
};

template<>
class LunaType< 58119214 > {
public:
    typedef osg::Program::ActiveVarInfoMap type;
    
};

template<>
class LunaType< 70732441 > {
public:
    typedef osg::Program::UniformBlockMap type;
    
};

template<>
class LunaType< 71916305 > {
public:
    typedef osg::Program::ActiveVarInfo type;
    
};

template<>
class LunaType< 92598171 > {
public:
    typedef osg::Program::UniformBlockInfo type;
    
};

template<>
class LunaType< 80263306 > {
public:
    typedef osg::Quat type;
    
};

template<>
class LunaType< 2286263 > {
public:
    typedef osg::RenderInfo type;
    
};

template<>
class LunaType< 87506632 > {
public:
    typedef osg::Shader::CodeInjectionMap type;
    
};

template<>
class LunaType< 39219188 > {
public:
    typedef osg::ShaderComposer::Shaders type;
    
};

template<>
class LunaType< 60344650 > {
public:
    typedef osg::ShadowVolumeOccluder type;
    
};

template<>
class LunaType< 59079133 > {
public:
    typedef osg::ShadowVolumeOccluder::HoleList type;
    
};

template<>
class LunaType< 36301858 > {
public:
    typedef osg::ShapeVisitor type;
    
};

template<>
class LunaType< 45826538 > {
public:
    typedef osg::ConstShapeVisitor type;
    
};

template<>
class LunaType< 93979646 > {
public:
    typedef osg::HeightField::HeightList type;
    
};

template<>
class LunaType< 38958908 > {
public:
    typedef osg::CompositeShape::ChildList type;
    
};

template<>
class LunaType< 48453816 > {
public:
    typedef osg::VertexAttribAlias type;
    
};

template<>
class LunaType< 493552 > {
public:
    typedef osg::StateAttribute::TypeMemberPair type;
    
};

template<>
class LunaType< 57890271 > {
public:
    typedef osg::StateAttribute::ParentList type;
    
};

template<>
class LunaType< 48108040 > {
public:
    typedef osg::StateAttribute::ModeUsage type;
    
};

template<>
class LunaType< 81229680 > {
public:
    typedef osg::StateSet::ParentList type;
    
};

template<>
class LunaType< 59463386 > {
public:
    typedef osg::StateSet::ModeList type;
    
};

template<>
class LunaType< 11966361 > {
public:
    typedef osg::StateSet::RefAttributePair type;
    
};

template<>
class LunaType< 84373691 > {
public:
    typedef osg::StateSet::AttributeList type;
    
};

template<>
class LunaType< 14028616 > {
public:
    typedef osg::StateSet::TextureModeList type;
    
};

template<>
class LunaType< 35981382 > {
public:
    typedef osg::StateSet::TextureAttributeList type;
    
};

template<>
class LunaType< 49832211 > {
public:
    typedef osg::StateSet::RefUniformPair type;
    
};

template<>
class LunaType< 47344864 > {
public:
    typedef osg::StateSet::UniformList type;
    
};

template<>
class LunaType< 79434031 > {
public:
    typedef osg::Stats::AttributeMap type;
    
};

template<>
class LunaType< 79753172 > {
public:
    typedef osg::Stats::AttributeMapList type;
    
};

template<>
class LunaType< 36973735 > {
public:
    typedef osg::Stats::CollectMap type;
    
};

template<>
class LunaType< 23153681 > {
public:
    typedef osg::Switch::ValueList type;
    
};

template<>
class LunaType< 68159455 > {
public:
    typedef osg::Texture::TextureObjectList type;
    
};

template<>
class LunaType< 69361645 > {
public:
    typedef osg::Texture::TextureProfile type;
    
};

template<>
class LunaType< 90586498 > {
public:
    typedef osg::Timer type;
    
};

template<>
class LunaType< 83804404 > {
public:
    typedef osg::ElapsedTime type;
    
};

template<>
class LunaType< 93067344 > {
public:
    typedef osg::TransferFunction1D::ColorMap type;
    
};

template<>
class LunaType< 18903788 > {
public:
    typedef osg::Matrix2 type;
    
};

template<>
class LunaType< 18903789 > {
public:
    typedef osg::Matrix3 type;
    
};

template<>
class LunaType< 54040596 > {
public:
    typedef osg::Uniform::ParentList type;
    
};

template<>
class LunaType< 13881074 > {
public:
    typedef osg::UserDataContainer::DescriptionList type;
    
};

template<>
class LunaType< 96962033 > {
public:
    typedef osg::ValueObject::GetValueVisitor type;
    
};

template<>
class LunaType< 55012529 > {
public:
    typedef osg::ValueObject::SetValueVisitor type;
    
};

template<>
class LunaType< 12315749 > {
public:
    typedef osg::ValueObjectClassNameTrait< std::string > type;
    
};

template<>
class LunaType< 41483556 > {
public:
    typedef osg::ValueObjectClassNameTrait< bool > type;
    
};

template<>
class LunaType< 63236752 > {
public:
    typedef osg::ValueObjectClassNameTrait< char > type;
    
};

template<>
class LunaType< 78346813 > {
public:
    typedef osg::ValueObjectClassNameTrait< unsigned char > type;
    
};

template<>
class LunaType< 73401234 > {
public:
    typedef osg::ValueObjectClassNameTrait< short > type;
    
};

template<>
class LunaType< 41811436 > {
public:
    typedef osg::ValueObjectClassNameTrait< unsigned short > type;
    
};

template<>
class LunaType< 40033589 > {
public:
    typedef osg::ValueObjectClassNameTrait< int > type;
    
};

template<>
class LunaType< 63101669 > {
public:
    typedef osg::ValueObjectClassNameTrait< unsigned int > type;
    
};

template<>
class LunaType< 49867860 > {
public:
    typedef osg::ValueObjectClassNameTrait< float > type;
    
};

template<>
class LunaType< 55730813 > {
public:
    typedef osg::ValueObjectClassNameTrait< double > type;
    
};

template<>
class LunaType< 36914485 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec2f > type;
    
};

template<>
class LunaType< 36944276 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec3f > type;
    
};

template<>
class LunaType< 36974067 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec4f > type;
    
};

template<>
class LunaType< 36912563 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec2d > type;
    
};

template<>
class LunaType< 36942354 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec3d > type;
    
};

template<>
class LunaType< 36972145 > {
public:
    typedef osg::ValueObjectClassNameTrait< Vec4d > type;
    
};

template<>
class LunaType< 59919919 > {
public:
    typedef osg::ValueObjectClassNameTrait< Quat > type;
    
};

template<>
class LunaType< 12237871 > {
public:
    typedef osg::ValueObjectClassNameTrait< Plane > type;
    
};

template<>
class LunaType< 33242627 > {
public:
    typedef osg::ValueObjectClassNameTrait< Matrixf > type;
    
};

template<>
class LunaType< 33240705 > {
public:
    typedef osg::ValueObjectClassNameTrait< Matrixd > type;
    
};

template<>
class LunaType< 92303169 > {
public:
    typedef osg::Vec2b type;
    
};

template<>
class LunaType< 92303171 > {
public:
    typedef osg::Vec2d type;
    
};

template<>
class LunaType< 92303173 > {
public:
    typedef osg::Vec2f type;
    
};

template<>
class LunaType< 92303186 > {
public:
    typedef osg::Vec2s type;
    
};

template<>
class LunaType< 92303200 > {
public:
    typedef osg::Vec3b type;
    
};

template<>
class LunaType< 92303202 > {
public:
    typedef osg::Vec3d type;
    
};

template<>
class LunaType< 92303204 > {
public:
    typedef osg::Vec3f type;
    
};

template<>
class LunaType< 92303217 > {
public:
    typedef osg::Vec3s type;
    
};

template<>
class LunaType< 92303231 > {
public:
    typedef osg::Vec4b type;
    
};

template<>
class LunaType< 92303233 > {
public:
    typedef osg::Vec4d type;
    
};

template<>
class LunaType< 92303235 > {
public:
    typedef osg::Vec4f type;
    
};

template<>
class LunaType< 92303248 > {
public:
    typedef osg::Vec4s type;
    
};

template<>
class LunaType< 61400540 > {
public:
    typedef osg::Vec4ub type;
    
};

template<>
class LunaType< 77412943 > {
public:
    typedef osg::VertexProgram::LocalParamList type;
    
};

template<>
class LunaType< 89639670 > {
public:
    typedef osg::VertexProgram::MatrixList type;
    
};

template<>
class LunaType< 94812983 > {
public:
    typedef osg::View::Slave type;
    
};

template<>
class LunaType< 14581426 > {
public:
    typedef osgGA::CameraViewSwitchManipulator::CameraViewList type;
    
};

template<>
class LunaType< 42735238 > {
public:
    typedef osgGA::EventQueue::Events type;
    
};

template<>
class LunaType< 29142050 > {
public:
    typedef osgGA::EventVisitor::EventList type;
    
};

template<>
class LunaType< 85302998 > {
public:
    typedef osgGA::GUIActionAdapter type;
    
};

template<>
class LunaType< 77825770 > {
public:
    typedef osgGA::GUIEventAdapter::TouchData::TouchSet type;
    
};

template<>
class LunaType< 88052401 > {
public:
    typedef osgGA::GUIEventAdapter::TouchData::TouchPoint type;
    
};

template<>
class LunaType< 65490382 > {
public:
    typedef osgGA::GUIEventHandlerVisitor type;
    
};

template<>
class LunaType< 44319162 > {
public:
    typedef osgGA::KeySwitchMatrixManipulator::NamedManipulator type;
    
};

template<>
class LunaType< 71456208 > {
public:
    typedef osgGA::KeySwitchMatrixManipulator::KeyManipMap type;
    
};

template<>
class LunaType< 91536996 > {
public:
    typedef osgUtil::DelaunayTriangulator::linelist type;
    
};

template<>
class LunaType< 96401270 > {
public:
    typedef osgUtil::DrawElementTypeSimplifier type;
    
};

template<>
class LunaType< 4191371 > {
public:
    typedef osgUtil::dereference_less type;
    
};

template<>
class LunaType< 21815425 > {
public:
    typedef osgUtil::dereference_clear type;
    
};

template<>
class LunaType< 81832682 > {
public:
    typedef osgUtil::EdgeCollector type;
    
};

template<>
class LunaType< 655286 > {
public:
    typedef osgUtil::EdgeCollector::IndexArrayList type;
    
};

template<>
class LunaType< 50528172 > {
public:
    typedef osgUtil::EdgeCollector::EdgeSet type;
    
};

template<>
class LunaType< 66168244 > {
public:
    typedef osgUtil::EdgeCollector::EdgeList type;
    
};

template<>
class LunaType< 55216760 > {
public:
    typedef osgUtil::EdgeCollector::EdgeloopList type;
    
};

template<>
class LunaType< 34110025 > {
public:
    typedef osgUtil::EdgeCollector::PointSet type;
    
};

template<>
class LunaType< 57205837 > {
public:
    typedef osgUtil::EdgeCollector::PointList type;
    
};

template<>
class LunaType< 52419701 > {
public:
    typedef osgUtil::EdgeCollector::TriangleList type;
    
};

template<>
class LunaType< 62987903 > {
public:
    typedef osgUtil::EdgeCollector::TriangleSet type;
    
};

template<>
class LunaType< 62982009 > {
public:
    typedef osgUtil::EdgeCollector::TriangleMap type;
    
};

template<>
class LunaType< 72030032 > {
public:
    typedef osgUtil::EdgeCollector::Edgeloop::EdgeList type;
    
};

template<>
class LunaType< 70884799 > {
public:
    typedef osgUtil::StateToCompile::DrawableSet type;
    
};

template<>
class LunaType< 88961844 > {
public:
    typedef osgUtil::StateToCompile::StateSetSet type;
    
};

template<>
class LunaType< 41341545 > {
public:
    typedef osgUtil::StateToCompile::TextureSet type;
    
};

template<>
class LunaType< 13242464 > {
public:
    typedef osgUtil::StateToCompile::ProgramSet type;
    
};

template<>
class LunaType< 99133557 > {
public:
    typedef osgUtil::IncrementalCompileOperation::Contexts type;
    
};

template<>
class LunaType< 67276006 > {
public:
    typedef osgUtil::IncrementalCompileOperation::ContextSet type;
    
};

template<>
class LunaType< 37124597 > {
public:
    typedef osgUtil::IncrementalCompileOperation::CompileSets type;
    
};

template<>
class LunaType< 36919874 > {
public:
    typedef osgUtil::IncrementalCompileOperation::CompileList type;
    
};

template<>
class LunaType< 95636375 > {
public:
    typedef osgUtil::IncrementalCompileOperation::CompileList::CompileOps type;
    
};

template<>
class LunaType< 82923186 > {
public:
    typedef osgUtil::IncrementalCompileOperation::CompileSet::CompileMap type;
    
};

template<>
class LunaType< 66660324 > {
public:
    typedef osgUtil::IntersectorGroup::Intersectors type;
    
};

template<>
class LunaType< 16095945 > {
public:
    typedef osgUtil::Hit type;
    
};

template<>
class LunaType< 26842661 > {
public:
    typedef osgUtil::Hit::VecIndexList type;
    
};

template<>
class LunaType< 19574398 > {
public:
    typedef osgUtil::LineSegmentIntersector::Intersections type;
    
};

template<>
class LunaType< 74825011 > {
public:
    typedef osgUtil::LineSegmentIntersector::Intersection type;
    
};

template<>
class LunaType< 24112391 > {
public:
    typedef osgUtil::LineSegmentIntersector::Intersection::IndexList type;
    
};

template<>
class LunaType< 81829436 > {
public:
    typedef osgUtil::LineSegmentIntersector::Intersection::RatioList type;
    
};

template<>
class LunaType< 43037357 > {
public:
    typedef osgUtil::GeometryCollector::GeometryList type;
    
};

template<>
class LunaType< 12139482 > {
public:
    typedef osgUtil::AddRangeOperator type;
    
};

template<>
class LunaType< 72996634 > {
public:
    typedef osgUtil::MultiplyRangeOperator type;
    
};

template<>
class LunaType< 85233381 > {
public:
    typedef osgUtil::Optimizer type;
    
};

template<>
class LunaType< 23612133 > {
public:
    typedef osgUtil::PlaneIntersector::Intersections type;
    
};

template<>
class LunaType< 761678 > {
public:
    typedef osgUtil::PlaneIntersector::Intersection type;
    
};

template<>
class LunaType< 1808182 > {
public:
    typedef osgUtil::PlaneIntersector::Intersection::Polyline type;
    
};

template<>
class LunaType< 12610647 > {
public:
    typedef osgUtil::PlaneIntersector::Intersection::Attributes type;
    
};

template<>
class LunaType< 63717560 > {
public:
    typedef osgUtil::PolytopeIntersector::Intersections type;
    
};

template<>
class LunaType< 31087672 > {
public:
    typedef osgUtil::PolytopeIntersector::Intersection type;
    
};

template<>
class LunaType< 92627939 > {
public:
    typedef osgUtil::PositionalStateContainer::AttrMatrixPair type;
    
};

template<>
class LunaType< 92516775 > {
public:
    typedef osgUtil::PositionalStateContainer::AttrMatrixList type;
    
};

template<>
class LunaType< 42744840 > {
public:
    typedef osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap type;
    
};

template<>
class LunaType< 21382558 > {
public:
    typedef osgUtil::RenderBin::RenderLeafList type;
    
};

template<>
class LunaType< 60103097 > {
public:
    typedef osgUtil::RenderBin::StateGraphList type;
    
};

template<>
class LunaType< 38528519 > {
public:
    typedef osgUtil::RenderBin::RenderBinList type;
    
};

template<>
class LunaType< 25782964 > {
public:
    typedef osgUtil::RenderStage::Attachment type;
    
};

template<>
class LunaType< 42545431 > {
public:
    typedef osgUtil::SceneGraphBuilder type;
    
};

template<>
class LunaType< 11745068 > {
public:
    typedef osgUtil::ShaderGenCache::StateSetMap type;
    
};

template<>
class LunaType< 12058436 > {
public:
    typedef osgUtil::Simplifier::IndexList type;
    
};

template<>
class LunaType< 8678160 > {
public:
    typedef osgUtil::StateGraph::ChildList type;
    
};

template<>
class LunaType< 32098161 > {
public:
    typedef osgUtil::StateGraph::LeafList type;
    
};

template<>
class LunaType< 95996950 > {
public:
    typedef osgUtil::Statistics type;
    
};

template<>
class LunaType< 48492479 > {
public:
    typedef osgUtil::Statistics::PrimitivePair type;
    
};

template<>
class LunaType< 74391787 > {
public:
    typedef osgUtil::Statistics::PrimitiveValueMap type;
    
};

template<>
class LunaType< 11573909 > {
public:
    typedef osgUtil::Statistics::PrimitiveCountMap type;
    
};

template<>
class LunaType< 22793184 > {
public:
    typedef osgUtil::StatsVisitor::NodeSet type;
    
};

template<>
class LunaType< 41381585 > {
public:
    typedef osgUtil::StatsVisitor::DrawableSet type;
    
};

template<>
class LunaType< 77774778 > {
public:
    typedef osgUtil::StatsVisitor::StateSetSet type;
    
};


#endif
