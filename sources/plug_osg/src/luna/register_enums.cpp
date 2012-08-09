#include <osg/Endian>
#include <osg/Notify>
#include <osg/AlphaFunc>
#include <osg/AnimationPath>
#include <osg/ApplicationUsage>
#include <osg/ArgumentParser>
#include <osg/Array>
#include <osg/AudioStream>
#include <osg/AutoTransform>
#include <osg/Billboard>
#include <osg/BlendEquation>
#include <osg/BlendFunc>
#include <osg/BufferObject>
#include <osg/Camera>
#include <osg/CameraView>
#include <osg/ClipNode>
#include <osg/CopyOp>
#include <osg/CullFace>
#include <osg/CullingSet>
#include <osg/CullSettings>
#include <osg/Depth>
#include <osg/DisplaySettings>
#include <osg/Drawable>
#include <osg/Fog>
#include <osg/FrameBufferObject>
#include <osg/FrontFace>
#include <osg/Geometry>
#include <osg/GLBeginEndAdapter>
#include <osg/GraphicsThread>
#include <osg/Image>
#include <osg/ImageSequence>
#include <osg/ImageStream>
#include <osg/LightModel>
#include <osg/LightSource>
#include <osg/LOD>
#include <osg/LogicOp>
#include <osg/Material>
#include <osg/Multisample>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Plane>
#include <osg/PointSprite>
#include <osg/PolygonMode>
#include <osg/PrimitiveSet>
#include <osg/ProxyNode>
#include <osg/Sequence>
#include <osg/ShadeModel>
#include <osg/Shader>
#include <osg/ShapeDrawable>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/StateSet>
#include <osg/Stencil>
#include <osg/StencilTwoSided>
#include <osg/TexEnv>
#include <osg/TexEnvCombine>
#include <osg/TexGen>
#include <osg/TexGenNode>
#include <osg/Texture>
#include <osg/TextureCubeMap>
#include <osg/Transform>
#include <osg/Uniform>
#include <osg/Vec2b>
#include <osg/Vec2d>
#include <osg/Vec2f>
#include <osg/Vec2s>
#include <osg/Vec3b>
#include <osg/Vec3d>
#include <osg/Vec3f>
#include <osg/Vec3s>
#include <osg/Vec4b>
#include <osg/Vec4d>
#include <osg/Vec4f>
#include <osg/Vec4s>
#include <osg/Vec4ub>
#include <osg/View>
#include <osgDB/Callbacks>
#include <osgDB/FileUtils>
#include <osgDB/AuthenticationMap>
#include <osgDB/DatabasePager>
#include <osgDB/DotOsgWrapper>
#include <osgDB/ImageOptions>
#include <osgDB/ImagePager>
#include <osgDB/ImageProcessor>
#include <osgDB/Input>
#include <osgDB/Options>
#include <osgDB/Output>
#include <osgDB/OutputStream>
#include <osgDB/ReaderWriter>
#include <osgDB/Registry>
#include <osgDB/SharedStateManager>
#include <osgDB/XmlParser>
#include <osgGA/FlightManipulator>
#include <osgGA/GUIEventAdapter>
#include <osgGA/NodeTrackerManipulator>
#include <osgGA/SphericalManipulator>
#include <osgGA/StandardManipulator>
#include <osgGA/TerrainManipulator>
#include <osgParticle/DomainOperator>
#include <osgParticle/Particle>
#include <osgParticle/ParticleProcessor>
#include <osgParticle/ParticleSystem>
#include <osgParticle/SinkOperator>
#include <osgText/KerningType>
#include <osgText/String>
#include <osgText/Text>
#include <osgText/Text3D>
#include <osgText/TextBase>
#include <osgUtil/GLObjectsVisitor>
#include <osgUtil/IntersectionVisitor>
#include <osgUtil/IntersectVisitor>
#include <osgUtil/Optimizer>
#include <osgUtil/PolytopeIntersector>
#include <osgUtil/RenderBin>
#include <osgUtil/SceneView>
#include <osgUtil/ShaderGen>
#include <osgUtil/Statistics>
#include <osgUtil/Tessellator>
#include <osgViewer/GraphicsWindow>
#include <osgViewer/View>
#include <osgViewer/ViewerBase>
#include <osgViewer/ViewerEventHandlers>

#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum Endian

	lua_pushnumber(L,osg::BigEndian); lua_setfield(L,-2,"BigEndian");
	lua_pushnumber(L,osg::LittleEndian); lua_setfield(L,-2,"LittleEndian");

	lua_setfield(L,-2,"Endian");

	lua_pushnumber(L,osg::BigEndian); lua_setfield(L,-2,"BigEndian");
	lua_pushnumber(L,osg::LittleEndian); lua_setfield(L,-2,"LittleEndian");


	lua_newtable(L); // enum NotifySeverity

	lua_pushnumber(L,osg::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,osg::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,osg::WARN); lua_setfield(L,-2,"WARN");
	lua_pushnumber(L,osg::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,osg::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,osg::DEBUG_INFO); lua_setfield(L,-2,"DEBUG_INFO");
	lua_pushnumber(L,osg::DEBUG_FP); lua_setfield(L,-2,"DEBUG_FP");

	lua_setfield(L,-2,"NotifySeverity");

	lua_pushnumber(L,osg::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,osg::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,osg::WARN); lua_setfield(L,-2,"WARN");
	lua_pushnumber(L,osg::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,osg::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,osg::DEBUG_INFO); lua_setfield(L,-2,"DEBUG_INFO");
	lua_pushnumber(L,osg::DEBUG_FP); lua_setfield(L,-2,"DEBUG_FP");


	lua_newtable(L); // enum ComparisonFunction

	lua_pushnumber(L,osg::AlphaFunc::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::AlphaFunc::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::AlphaFunc::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::AlphaFunc::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::AlphaFunc::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::ALWAYS); lua_setfield(L,-2,"ALWAYS");

	lua_setfield(L,-2,"ComparisonFunction");

	lua_pushnumber(L,osg::AlphaFunc::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::AlphaFunc::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::AlphaFunc::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::AlphaFunc::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::AlphaFunc::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::AlphaFunc::ALWAYS); lua_setfield(L,-2,"ALWAYS");


	lua_newtable(L); // enum LoopMode

	lua_pushnumber(L,osg::AnimationPath::SWING); lua_setfield(L,-2,"SWING");
	lua_pushnumber(L,osg::AnimationPath::LOOP); lua_setfield(L,-2,"LOOP");
	lua_pushnumber(L,osg::AnimationPath::NO_LOOPING); lua_setfield(L,-2,"NO_LOOPING");

	lua_setfield(L,-2,"LoopMode");

	lua_pushnumber(L,osg::AnimationPath::SWING); lua_setfield(L,-2,"SWING");
	lua_pushnumber(L,osg::AnimationPath::LOOP); lua_setfield(L,-2,"LOOP");
	lua_pushnumber(L,osg::AnimationPath::NO_LOOPING); lua_setfield(L,-2,"NO_LOOPING");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::ApplicationUsage::NO_HELP); lua_setfield(L,-2,"NO_HELP");
	lua_pushnumber(L,osg::ApplicationUsage::COMMAND_LINE_OPTION); lua_setfield(L,-2,"COMMAND_LINE_OPTION");
	lua_pushnumber(L,osg::ApplicationUsage::ENVIRONMENTAL_VARIABLE); lua_setfield(L,-2,"ENVIRONMENTAL_VARIABLE");
	lua_pushnumber(L,osg::ApplicationUsage::KEYBOARD_MOUSE_BINDING); lua_setfield(L,-2,"KEYBOARD_MOUSE_BINDING");
	lua_pushnumber(L,osg::ApplicationUsage::HELP_ALL); lua_setfield(L,-2,"HELP_ALL");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::ApplicationUsage::NO_HELP); lua_setfield(L,-2,"NO_HELP");
	lua_pushnumber(L,osg::ApplicationUsage::COMMAND_LINE_OPTION); lua_setfield(L,-2,"COMMAND_LINE_OPTION");
	lua_pushnumber(L,osg::ApplicationUsage::ENVIRONMENTAL_VARIABLE); lua_setfield(L,-2,"ENVIRONMENTAL_VARIABLE");
	lua_pushnumber(L,osg::ApplicationUsage::KEYBOARD_MOUSE_BINDING); lua_setfield(L,-2,"KEYBOARD_MOUSE_BINDING");
	lua_pushnumber(L,osg::ApplicationUsage::HELP_ALL); lua_setfield(L,-2,"HELP_ALL");


	lua_newtable(L); // enum ErrorSeverity

	lua_pushnumber(L,osg::ArgumentParser::BENIGN); lua_setfield(L,-2,"BENIGN");
	lua_pushnumber(L,osg::ArgumentParser::CRITICAL); lua_setfield(L,-2,"CRITICAL");

	lua_setfield(L,-2,"ErrorSeverity");

	lua_pushnumber(L,osg::ArgumentParser::BENIGN); lua_setfield(L,-2,"BENIGN");
	lua_pushnumber(L,osg::ArgumentParser::CRITICAL); lua_setfield(L,-2,"CRITICAL");


	lua_newtable(L); // enum ParameterType

	lua_pushnumber(L,osg::ArgumentParser::Parameter::BOOL_PARAMETER); lua_setfield(L,-2,"BOOL_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::FLOAT_PARAMETER); lua_setfield(L,-2,"FLOAT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::DOUBLE_PARAMETER); lua_setfield(L,-2,"DOUBLE_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::INT_PARAMETER); lua_setfield(L,-2,"INT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::UNSIGNED_INT_PARAMETER); lua_setfield(L,-2,"UNSIGNED_INT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::STRING_PARAMETER); lua_setfield(L,-2,"STRING_PARAMETER");

	lua_setfield(L,-2,"ParameterType");

	lua_pushnumber(L,osg::ArgumentParser::Parameter::BOOL_PARAMETER); lua_setfield(L,-2,"BOOL_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::FLOAT_PARAMETER); lua_setfield(L,-2,"FLOAT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::DOUBLE_PARAMETER); lua_setfield(L,-2,"DOUBLE_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::INT_PARAMETER); lua_setfield(L,-2,"INT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::UNSIGNED_INT_PARAMETER); lua_setfield(L,-2,"UNSIGNED_INT_PARAMETER");
	lua_pushnumber(L,osg::ArgumentParser::Parameter::STRING_PARAMETER); lua_setfield(L,-2,"STRING_PARAMETER");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::Array::ArrayType); lua_setfield(L,-2,"ArrayType");
	lua_pushnumber(L,osg::Array::ByteArrayType); lua_setfield(L,-2,"ByteArrayType");
	lua_pushnumber(L,osg::Array::ShortArrayType); lua_setfield(L,-2,"ShortArrayType");
	lua_pushnumber(L,osg::Array::IntArrayType); lua_setfield(L,-2,"IntArrayType");
	lua_pushnumber(L,osg::Array::UByteArrayType); lua_setfield(L,-2,"UByteArrayType");
	lua_pushnumber(L,osg::Array::UShortArrayType); lua_setfield(L,-2,"UShortArrayType");
	lua_pushnumber(L,osg::Array::UIntArrayType); lua_setfield(L,-2,"UIntArrayType");
	lua_pushnumber(L,osg::Array::Vec4ubArrayType); lua_setfield(L,-2,"Vec4ubArrayType");
	lua_pushnumber(L,osg::Array::FloatArrayType); lua_setfield(L,-2,"FloatArrayType");
	lua_pushnumber(L,osg::Array::Vec2ArrayType); lua_setfield(L,-2,"Vec2ArrayType");
	lua_pushnumber(L,osg::Array::Vec3ArrayType); lua_setfield(L,-2,"Vec3ArrayType");
	lua_pushnumber(L,osg::Array::Vec4ArrayType); lua_setfield(L,-2,"Vec4ArrayType");
	lua_pushnumber(L,osg::Array::Vec2sArrayType); lua_setfield(L,-2,"Vec2sArrayType");
	lua_pushnumber(L,osg::Array::Vec3sArrayType); lua_setfield(L,-2,"Vec3sArrayType");
	lua_pushnumber(L,osg::Array::Vec4sArrayType); lua_setfield(L,-2,"Vec4sArrayType");
	lua_pushnumber(L,osg::Array::Vec2bArrayType); lua_setfield(L,-2,"Vec2bArrayType");
	lua_pushnumber(L,osg::Array::Vec3bArrayType); lua_setfield(L,-2,"Vec3bArrayType");
	lua_pushnumber(L,osg::Array::Vec4bArrayType); lua_setfield(L,-2,"Vec4bArrayType");
	lua_pushnumber(L,osg::Array::DoubleArrayType); lua_setfield(L,-2,"DoubleArrayType");
	lua_pushnumber(L,osg::Array::Vec2dArrayType); lua_setfield(L,-2,"Vec2dArrayType");
	lua_pushnumber(L,osg::Array::Vec3dArrayType); lua_setfield(L,-2,"Vec3dArrayType");
	lua_pushnumber(L,osg::Array::Vec4dArrayType); lua_setfield(L,-2,"Vec4dArrayType");
	lua_pushnumber(L,osg::Array::MatrixArrayType); lua_setfield(L,-2,"MatrixArrayType");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::Array::ArrayType); lua_setfield(L,-2,"ArrayType");
	lua_pushnumber(L,osg::Array::ByteArrayType); lua_setfield(L,-2,"ByteArrayType");
	lua_pushnumber(L,osg::Array::ShortArrayType); lua_setfield(L,-2,"ShortArrayType");
	lua_pushnumber(L,osg::Array::IntArrayType); lua_setfield(L,-2,"IntArrayType");
	lua_pushnumber(L,osg::Array::UByteArrayType); lua_setfield(L,-2,"UByteArrayType");
	lua_pushnumber(L,osg::Array::UShortArrayType); lua_setfield(L,-2,"UShortArrayType");
	lua_pushnumber(L,osg::Array::UIntArrayType); lua_setfield(L,-2,"UIntArrayType");
	lua_pushnumber(L,osg::Array::Vec4ubArrayType); lua_setfield(L,-2,"Vec4ubArrayType");
	lua_pushnumber(L,osg::Array::FloatArrayType); lua_setfield(L,-2,"FloatArrayType");
	lua_pushnumber(L,osg::Array::Vec2ArrayType); lua_setfield(L,-2,"Vec2ArrayType");
	lua_pushnumber(L,osg::Array::Vec3ArrayType); lua_setfield(L,-2,"Vec3ArrayType");
	lua_pushnumber(L,osg::Array::Vec4ArrayType); lua_setfield(L,-2,"Vec4ArrayType");
	lua_pushnumber(L,osg::Array::Vec2sArrayType); lua_setfield(L,-2,"Vec2sArrayType");
	lua_pushnumber(L,osg::Array::Vec3sArrayType); lua_setfield(L,-2,"Vec3sArrayType");
	lua_pushnumber(L,osg::Array::Vec4sArrayType); lua_setfield(L,-2,"Vec4sArrayType");
	lua_pushnumber(L,osg::Array::Vec2bArrayType); lua_setfield(L,-2,"Vec2bArrayType");
	lua_pushnumber(L,osg::Array::Vec3bArrayType); lua_setfield(L,-2,"Vec3bArrayType");
	lua_pushnumber(L,osg::Array::Vec4bArrayType); lua_setfield(L,-2,"Vec4bArrayType");
	lua_pushnumber(L,osg::Array::DoubleArrayType); lua_setfield(L,-2,"DoubleArrayType");
	lua_pushnumber(L,osg::Array::Vec2dArrayType); lua_setfield(L,-2,"Vec2dArrayType");
	lua_pushnumber(L,osg::Array::Vec3dArrayType); lua_setfield(L,-2,"Vec3dArrayType");
	lua_pushnumber(L,osg::Array::Vec4dArrayType); lua_setfield(L,-2,"Vec4dArrayType");
	lua_pushnumber(L,osg::Array::MatrixArrayType); lua_setfield(L,-2,"MatrixArrayType");


	lua_newtable(L); // enum SampleFormat

	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_U8); lua_setfield(L,-2,"SAMPLE_FORMAT_U8");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S16); lua_setfield(L,-2,"SAMPLE_FORMAT_S16");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S24); lua_setfield(L,-2,"SAMPLE_FORMAT_S24");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S32); lua_setfield(L,-2,"SAMPLE_FORMAT_S32");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_F32); lua_setfield(L,-2,"SAMPLE_FORMAT_F32");

	lua_setfield(L,-2,"SampleFormat");

	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_U8); lua_setfield(L,-2,"SAMPLE_FORMAT_U8");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S16); lua_setfield(L,-2,"SAMPLE_FORMAT_S16");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S24); lua_setfield(L,-2,"SAMPLE_FORMAT_S24");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_S32); lua_setfield(L,-2,"SAMPLE_FORMAT_S32");
	lua_pushnumber(L,osg::AudioStream::SAMPLE_FORMAT_F32); lua_setfield(L,-2,"SAMPLE_FORMAT_F32");


	lua_newtable(L); // enum AutoRotateMode

	lua_pushnumber(L,osg::AutoTransform::NO_ROTATION); lua_setfield(L,-2,"NO_ROTATION");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_SCREEN); lua_setfield(L,-2,"ROTATE_TO_SCREEN");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_CAMERA); lua_setfield(L,-2,"ROTATE_TO_CAMERA");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_AXIS); lua_setfield(L,-2,"ROTATE_TO_AXIS");

	lua_setfield(L,-2,"AutoRotateMode");

	lua_pushnumber(L,osg::AutoTransform::NO_ROTATION); lua_setfield(L,-2,"NO_ROTATION");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_SCREEN); lua_setfield(L,-2,"ROTATE_TO_SCREEN");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_CAMERA); lua_setfield(L,-2,"ROTATE_TO_CAMERA");
	lua_pushnumber(L,osg::AutoTransform::ROTATE_TO_AXIS); lua_setfield(L,-2,"ROTATE_TO_AXIS");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::Billboard::POINT_ROT_EYE); lua_setfield(L,-2,"POINT_ROT_EYE");
	lua_pushnumber(L,osg::Billboard::POINT_ROT_WORLD); lua_setfield(L,-2,"POINT_ROT_WORLD");
	lua_pushnumber(L,osg::Billboard::AXIAL_ROT); lua_setfield(L,-2,"AXIAL_ROT");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::Billboard::POINT_ROT_EYE); lua_setfield(L,-2,"POINT_ROT_EYE");
	lua_pushnumber(L,osg::Billboard::POINT_ROT_WORLD); lua_setfield(L,-2,"POINT_ROT_WORLD");
	lua_pushnumber(L,osg::Billboard::AXIAL_ROT); lua_setfield(L,-2,"AXIAL_ROT");


	lua_newtable(L); // enum Equation

	lua_pushnumber(L,osg::BlendEquation::RGBA_MIN); lua_setfield(L,-2,"RGBA_MIN");
	lua_pushnumber(L,osg::BlendEquation::RGBA_MAX); lua_setfield(L,-2,"RGBA_MAX");
	lua_pushnumber(L,osg::BlendEquation::ALPHA_MIN); lua_setfield(L,-2,"ALPHA_MIN");
	lua_pushnumber(L,osg::BlendEquation::ALPHA_MAX); lua_setfield(L,-2,"ALPHA_MAX");
	lua_pushnumber(L,osg::BlendEquation::LOGIC_OP); lua_setfield(L,-2,"LOGIC_OP");
	lua_pushnumber(L,osg::BlendEquation::FUNC_ADD); lua_setfield(L,-2,"FUNC_ADD");
	lua_pushnumber(L,osg::BlendEquation::FUNC_SUBTRACT); lua_setfield(L,-2,"FUNC_SUBTRACT");
	lua_pushnumber(L,osg::BlendEquation::FUNC_REVERSE_SUBTRACT); lua_setfield(L,-2,"FUNC_REVERSE_SUBTRACT");

	lua_setfield(L,-2,"Equation");

	lua_pushnumber(L,osg::BlendEquation::RGBA_MIN); lua_setfield(L,-2,"RGBA_MIN");
	lua_pushnumber(L,osg::BlendEquation::RGBA_MAX); lua_setfield(L,-2,"RGBA_MAX");
	lua_pushnumber(L,osg::BlendEquation::ALPHA_MIN); lua_setfield(L,-2,"ALPHA_MIN");
	lua_pushnumber(L,osg::BlendEquation::ALPHA_MAX); lua_setfield(L,-2,"ALPHA_MAX");
	lua_pushnumber(L,osg::BlendEquation::LOGIC_OP); lua_setfield(L,-2,"LOGIC_OP");
	lua_pushnumber(L,osg::BlendEquation::FUNC_ADD); lua_setfield(L,-2,"FUNC_ADD");
	lua_pushnumber(L,osg::BlendEquation::FUNC_SUBTRACT); lua_setfield(L,-2,"FUNC_SUBTRACT");
	lua_pushnumber(L,osg::BlendEquation::FUNC_REVERSE_SUBTRACT); lua_setfield(L,-2,"FUNC_REVERSE_SUBTRACT");


	lua_newtable(L); // enum BlendFuncMode

	lua_pushnumber(L,osg::BlendFunc::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,osg::BlendFunc::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::SRC_ALPHA_SATURATE); lua_setfield(L,-2,"SRC_ALPHA_SATURATE");
	lua_pushnumber(L,osg::BlendFunc::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,osg::BlendFunc::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,osg::BlendFunc::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ZERO); lua_setfield(L,-2,"ZERO");

	lua_setfield(L,-2,"BlendFuncMode");

	lua_pushnumber(L,osg::BlendFunc::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,osg::BlendFunc::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::SRC_ALPHA_SATURATE); lua_setfield(L,-2,"SRC_ALPHA_SATURATE");
	lua_pushnumber(L,osg::BlendFunc::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,osg::BlendFunc::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,osg::BlendFunc::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");
	lua_pushnumber(L,osg::BlendFunc::ZERO); lua_setfield(L,-2,"ZERO");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::PixelDataBufferObject::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,osg::PixelDataBufferObject::READ); lua_setfield(L,-2,"READ");
	lua_pushnumber(L,osg::PixelDataBufferObject::WRITE); lua_setfield(L,-2,"WRITE");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::PixelDataBufferObject::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,osg::PixelDataBufferObject::READ); lua_setfield(L,-2,"READ");
	lua_pushnumber(L,osg::PixelDataBufferObject::WRITE); lua_setfield(L,-2,"WRITE");


	lua_newtable(L); // enum TransformOrder

	lua_pushnumber(L,osg::Camera::PRE_MULTIPLY); lua_setfield(L,-2,"PRE_MULTIPLY");
	lua_pushnumber(L,osg::Camera::POST_MULTIPLY); lua_setfield(L,-2,"POST_MULTIPLY");

	lua_setfield(L,-2,"TransformOrder");

	lua_pushnumber(L,osg::Camera::PRE_MULTIPLY); lua_setfield(L,-2,"PRE_MULTIPLY");
	lua_pushnumber(L,osg::Camera::POST_MULTIPLY); lua_setfield(L,-2,"POST_MULTIPLY");


	lua_newtable(L); // enum ProjectionResizePolicy

	lua_pushnumber(L,osg::Camera::FIXED); lua_setfield(L,-2,"FIXED");
	lua_pushnumber(L,osg::Camera::HORIZONTAL); lua_setfield(L,-2,"HORIZONTAL");
	lua_pushnumber(L,osg::Camera::VERTICAL); lua_setfield(L,-2,"VERTICAL");

	lua_setfield(L,-2,"ProjectionResizePolicy");

	lua_pushnumber(L,osg::Camera::FIXED); lua_setfield(L,-2,"FIXED");
	lua_pushnumber(L,osg::Camera::HORIZONTAL); lua_setfield(L,-2,"HORIZONTAL");
	lua_pushnumber(L,osg::Camera::VERTICAL); lua_setfield(L,-2,"VERTICAL");


	lua_newtable(L); // enum RenderOrder

	lua_pushnumber(L,osg::Camera::PRE_RENDER); lua_setfield(L,-2,"PRE_RENDER");
	lua_pushnumber(L,osg::Camera::NESTED_RENDER); lua_setfield(L,-2,"NESTED_RENDER");
	lua_pushnumber(L,osg::Camera::POST_RENDER); lua_setfield(L,-2,"POST_RENDER");

	lua_setfield(L,-2,"RenderOrder");

	lua_pushnumber(L,osg::Camera::PRE_RENDER); lua_setfield(L,-2,"PRE_RENDER");
	lua_pushnumber(L,osg::Camera::NESTED_RENDER); lua_setfield(L,-2,"NESTED_RENDER");
	lua_pushnumber(L,osg::Camera::POST_RENDER); lua_setfield(L,-2,"POST_RENDER");


	lua_newtable(L); // enum RenderTargetImplementation

	lua_pushnumber(L,osg::Camera::FRAME_BUFFER_OBJECT); lua_setfield(L,-2,"FRAME_BUFFER_OBJECT");
	lua_pushnumber(L,osg::Camera::PIXEL_BUFFER_RTT); lua_setfield(L,-2,"PIXEL_BUFFER_RTT");
	lua_pushnumber(L,osg::Camera::PIXEL_BUFFER); lua_setfield(L,-2,"PIXEL_BUFFER");
	lua_pushnumber(L,osg::Camera::FRAME_BUFFER); lua_setfield(L,-2,"FRAME_BUFFER");
	lua_pushnumber(L,osg::Camera::SEPERATE_WINDOW); lua_setfield(L,-2,"SEPERATE_WINDOW");

	lua_setfield(L,-2,"RenderTargetImplementation");

	lua_pushnumber(L,osg::Camera::FRAME_BUFFER_OBJECT); lua_setfield(L,-2,"FRAME_BUFFER_OBJECT");
	lua_pushnumber(L,osg::Camera::PIXEL_BUFFER_RTT); lua_setfield(L,-2,"PIXEL_BUFFER_RTT");
	lua_pushnumber(L,osg::Camera::PIXEL_BUFFER); lua_setfield(L,-2,"PIXEL_BUFFER");
	lua_pushnumber(L,osg::Camera::FRAME_BUFFER); lua_setfield(L,-2,"FRAME_BUFFER");
	lua_pushnumber(L,osg::Camera::SEPERATE_WINDOW); lua_setfield(L,-2,"SEPERATE_WINDOW");


	lua_newtable(L); // enum BufferComponent

	lua_pushnumber(L,osg::Camera::DEPTH_BUFFER); lua_setfield(L,-2,"DEPTH_BUFFER");
	lua_pushnumber(L,osg::Camera::STENCIL_BUFFER); lua_setfield(L,-2,"STENCIL_BUFFER");
	lua_pushnumber(L,osg::Camera::PACKED_DEPTH_STENCIL_BUFFER); lua_setfield(L,-2,"PACKED_DEPTH_STENCIL_BUFFER");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER); lua_setfield(L,-2,"COLOR_BUFFER");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER0); lua_setfield(L,-2,"COLOR_BUFFER0");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER1); lua_setfield(L,-2,"COLOR_BUFFER1");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER2); lua_setfield(L,-2,"COLOR_BUFFER2");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER3); lua_setfield(L,-2,"COLOR_BUFFER3");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER4); lua_setfield(L,-2,"COLOR_BUFFER4");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER5); lua_setfield(L,-2,"COLOR_BUFFER5");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER6); lua_setfield(L,-2,"COLOR_BUFFER6");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER7); lua_setfield(L,-2,"COLOR_BUFFER7");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER8); lua_setfield(L,-2,"COLOR_BUFFER8");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER9); lua_setfield(L,-2,"COLOR_BUFFER9");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER10); lua_setfield(L,-2,"COLOR_BUFFER10");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER11); lua_setfield(L,-2,"COLOR_BUFFER11");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER12); lua_setfield(L,-2,"COLOR_BUFFER12");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER13); lua_setfield(L,-2,"COLOR_BUFFER13");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER14); lua_setfield(L,-2,"COLOR_BUFFER14");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER15); lua_setfield(L,-2,"COLOR_BUFFER15");

	lua_setfield(L,-2,"BufferComponent");

	lua_pushnumber(L,osg::Camera::DEPTH_BUFFER); lua_setfield(L,-2,"DEPTH_BUFFER");
	lua_pushnumber(L,osg::Camera::STENCIL_BUFFER); lua_setfield(L,-2,"STENCIL_BUFFER");
	lua_pushnumber(L,osg::Camera::PACKED_DEPTH_STENCIL_BUFFER); lua_setfield(L,-2,"PACKED_DEPTH_STENCIL_BUFFER");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER); lua_setfield(L,-2,"COLOR_BUFFER");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER0); lua_setfield(L,-2,"COLOR_BUFFER0");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER1); lua_setfield(L,-2,"COLOR_BUFFER1");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER2); lua_setfield(L,-2,"COLOR_BUFFER2");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER3); lua_setfield(L,-2,"COLOR_BUFFER3");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER4); lua_setfield(L,-2,"COLOR_BUFFER4");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER5); lua_setfield(L,-2,"COLOR_BUFFER5");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER6); lua_setfield(L,-2,"COLOR_BUFFER6");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER7); lua_setfield(L,-2,"COLOR_BUFFER7");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER8); lua_setfield(L,-2,"COLOR_BUFFER8");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER9); lua_setfield(L,-2,"COLOR_BUFFER9");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER10); lua_setfield(L,-2,"COLOR_BUFFER10");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER11); lua_setfield(L,-2,"COLOR_BUFFER11");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER12); lua_setfield(L,-2,"COLOR_BUFFER12");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER13); lua_setfield(L,-2,"COLOR_BUFFER13");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER14); lua_setfield(L,-2,"COLOR_BUFFER14");
	lua_pushnumber(L,osg::Camera::COLOR_BUFFER15); lua_setfield(L,-2,"COLOR_BUFFER15");


	lua_newtable(L); // enum ImplicitBufferAttachment

	lua_pushnumber(L,osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_DEPTH_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_STENCIL_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_COLOR_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::USE_DISPLAY_SETTINGS_MASK); lua_setfield(L,-2,"USE_DISPLAY_SETTINGS_MASK");

	lua_setfield(L,-2,"ImplicitBufferAttachment");

	lua_pushnumber(L,osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_DEPTH_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_STENCIL_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_COLOR_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::Camera::USE_DISPLAY_SETTINGS_MASK); lua_setfield(L,-2,"USE_DISPLAY_SETTINGS_MASK");


	lua_newtable(L); // enum FieldOfViewMode

	lua_pushnumber(L,osg::CameraView::UNCONSTRAINED); lua_setfield(L,-2,"UNCONSTRAINED");
	lua_pushnumber(L,osg::CameraView::HORIZONTAL); lua_setfield(L,-2,"HORIZONTAL");
	lua_pushnumber(L,osg::CameraView::VERTICAL); lua_setfield(L,-2,"VERTICAL");

	lua_setfield(L,-2,"FieldOfViewMode");

	lua_pushnumber(L,osg::CameraView::UNCONSTRAINED); lua_setfield(L,-2,"UNCONSTRAINED");
	lua_pushnumber(L,osg::CameraView::HORIZONTAL); lua_setfield(L,-2,"HORIZONTAL");
	lua_pushnumber(L,osg::CameraView::VERTICAL); lua_setfield(L,-2,"VERTICAL");


	lua_newtable(L); // enum ReferenceFrame

	lua_pushnumber(L,osg::ClipNode::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::ClipNode::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");

	lua_setfield(L,-2,"ReferenceFrame");

	lua_pushnumber(L,osg::ClipNode::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::ClipNode::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");


	lua_newtable(L); // enum Options

	lua_pushnumber(L,osg::CopyOp::SHALLOW_COPY); lua_setfield(L,-2,"SHALLOW_COPY");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_OBJECTS); lua_setfield(L,-2,"DEEP_COPY_OBJECTS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_NODES); lua_setfield(L,-2,"DEEP_COPY_NODES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_DRAWABLES); lua_setfield(L,-2,"DEEP_COPY_DRAWABLES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATESETS); lua_setfield(L,-2,"DEEP_COPY_STATESETS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATEATTRIBUTES); lua_setfield(L,-2,"DEEP_COPY_STATEATTRIBUTES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_TEXTURES); lua_setfield(L,-2,"DEEP_COPY_TEXTURES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_IMAGES); lua_setfield(L,-2,"DEEP_COPY_IMAGES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ARRAYS); lua_setfield(L,-2,"DEEP_COPY_ARRAYS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_PRIMITIVES); lua_setfield(L,-2,"DEEP_COPY_PRIMITIVES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_SHAPES); lua_setfield(L,-2,"DEEP_COPY_SHAPES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_UNIFORMS); lua_setfield(L,-2,"DEEP_COPY_UNIFORMS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_CALLBACKS); lua_setfield(L,-2,"DEEP_COPY_CALLBACKS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_USERDATA); lua_setfield(L,-2,"DEEP_COPY_USERDATA");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ALL); lua_setfield(L,-2,"DEEP_COPY_ALL");

	lua_setfield(L,-2,"Options");

	lua_pushnumber(L,osg::CopyOp::SHALLOW_COPY); lua_setfield(L,-2,"SHALLOW_COPY");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_OBJECTS); lua_setfield(L,-2,"DEEP_COPY_OBJECTS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_NODES); lua_setfield(L,-2,"DEEP_COPY_NODES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_DRAWABLES); lua_setfield(L,-2,"DEEP_COPY_DRAWABLES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATESETS); lua_setfield(L,-2,"DEEP_COPY_STATESETS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_STATEATTRIBUTES); lua_setfield(L,-2,"DEEP_COPY_STATEATTRIBUTES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_TEXTURES); lua_setfield(L,-2,"DEEP_COPY_TEXTURES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_IMAGES); lua_setfield(L,-2,"DEEP_COPY_IMAGES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ARRAYS); lua_setfield(L,-2,"DEEP_COPY_ARRAYS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_PRIMITIVES); lua_setfield(L,-2,"DEEP_COPY_PRIMITIVES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_SHAPES); lua_setfield(L,-2,"DEEP_COPY_SHAPES");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_UNIFORMS); lua_setfield(L,-2,"DEEP_COPY_UNIFORMS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_CALLBACKS); lua_setfield(L,-2,"DEEP_COPY_CALLBACKS");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_USERDATA); lua_setfield(L,-2,"DEEP_COPY_USERDATA");
	lua_pushnumber(L,osg::CopyOp::DEEP_COPY_ALL); lua_setfield(L,-2,"DEEP_COPY_ALL");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::CullFace::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::CullFace::BACK); lua_setfield(L,-2,"BACK");
	lua_pushnumber(L,osg::CullFace::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::CullFace::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::CullFace::BACK); lua_setfield(L,-2,"BACK");
	lua_pushnumber(L,osg::CullFace::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");


	lua_newtable(L); // enum MaskValues

	lua_pushnumber(L,osg::CullingSet::NO_CULLING); lua_setfield(L,-2,"NO_CULLING");
	lua_pushnumber(L,osg::CullingSet::VIEW_FRUSTUM_SIDES_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_SIDES_CULLING");
	lua_pushnumber(L,osg::CullingSet::NEAR_PLANE_CULLING); lua_setfield(L,-2,"NEAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullingSet::FAR_PLANE_CULLING); lua_setfield(L,-2,"FAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullingSet::VIEW_FRUSTUM_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_CULLING");
	lua_pushnumber(L,osg::CullingSet::SMALL_FEATURE_CULLING); lua_setfield(L,-2,"SMALL_FEATURE_CULLING");
	lua_pushnumber(L,osg::CullingSet::SHADOW_OCCLUSION_CULLING); lua_setfield(L,-2,"SHADOW_OCCLUSION_CULLING");
	lua_pushnumber(L,osg::CullingSet::DEFAULT_CULLING); lua_setfield(L,-2,"DEFAULT_CULLING");
	lua_pushnumber(L,osg::CullingSet::ENABLE_ALL_CULLING); lua_setfield(L,-2,"ENABLE_ALL_CULLING");

	lua_setfield(L,-2,"MaskValues");

	lua_pushnumber(L,osg::CullingSet::NO_CULLING); lua_setfield(L,-2,"NO_CULLING");
	lua_pushnumber(L,osg::CullingSet::VIEW_FRUSTUM_SIDES_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_SIDES_CULLING");
	lua_pushnumber(L,osg::CullingSet::NEAR_PLANE_CULLING); lua_setfield(L,-2,"NEAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullingSet::FAR_PLANE_CULLING); lua_setfield(L,-2,"FAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullingSet::VIEW_FRUSTUM_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_CULLING");
	lua_pushnumber(L,osg::CullingSet::SMALL_FEATURE_CULLING); lua_setfield(L,-2,"SMALL_FEATURE_CULLING");
	lua_pushnumber(L,osg::CullingSet::SHADOW_OCCLUSION_CULLING); lua_setfield(L,-2,"SHADOW_OCCLUSION_CULLING");
	lua_pushnumber(L,osg::CullingSet::DEFAULT_CULLING); lua_setfield(L,-2,"DEFAULT_CULLING");
	lua_pushnumber(L,osg::CullingSet::ENABLE_ALL_CULLING); lua_setfield(L,-2,"ENABLE_ALL_CULLING");


	lua_newtable(L); // enum VariablesMask

	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_MODE); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_MODE");
	lua_pushnumber(L,osg::CullSettings::CULLING_MODE); lua_setfield(L,-2,"CULLING_MODE");
	lua_pushnumber(L,osg::CullSettings::LOD_SCALE); lua_setfield(L,-2,"LOD_SCALE");
	lua_pushnumber(L,osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE); lua_setfield(L,-2,"SMALL_FEATURE_CULLING_PIXEL_SIZE");
	lua_pushnumber(L,osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK); lua_setfield(L,-2,"CLAMP_PROJECTION_MATRIX_CALLBACK");
	lua_pushnumber(L,osg::CullSettings::NEAR_FAR_RATIO); lua_setfield(L,-2,"NEAR_FAR_RATIO");
	lua_pushnumber(L,osg::CullSettings::IMPOSTOR_ACTIVE); lua_setfield(L,-2,"IMPOSTOR_ACTIVE");
	lua_pushnumber(L,osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES); lua_setfield(L,-2,"DEPTH_SORT_IMPOSTOR_SPRITES");
	lua_pushnumber(L,osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD); lua_setfield(L,-2,"IMPOSTOR_PIXEL_ERROR_THRESHOLD");
	lua_pushnumber(L,osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES); lua_setfield(L,-2,"NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK); lua_setfield(L,-2,"CULL_MASK");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK_LEFT); lua_setfield(L,-2,"CULL_MASK_LEFT");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK_RIGHT); lua_setfield(L,-2,"CULL_MASK_RIGHT");
	lua_pushnumber(L,osg::CullSettings::CLEAR_COLOR); lua_setfield(L,-2,"CLEAR_COLOR");
	lua_pushnumber(L,osg::CullSettings::CLEAR_MASK); lua_setfield(L,-2,"CLEAR_MASK");
	lua_pushnumber(L,osg::CullSettings::LIGHTING_MODE); lua_setfield(L,-2,"LIGHTING_MODE");
	lua_pushnumber(L,osg::CullSettings::LIGHT); lua_setfield(L,-2,"LIGHT");
	lua_pushnumber(L,osg::CullSettings::DRAW_BUFFER); lua_setfield(L,-2,"DRAW_BUFFER");
	lua_pushnumber(L,osg::CullSettings::READ_BUFFER); lua_setfield(L,-2,"READ_BUFFER");
	lua_pushnumber(L,osg::CullSettings::NO_VARIABLES); lua_setfield(L,-2,"NO_VARIABLES");
	lua_pushnumber(L,osg::CullSettings::ALL_VARIABLES); lua_setfield(L,-2,"ALL_VARIABLES");

	lua_setfield(L,-2,"VariablesMask");

	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_MODE); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_MODE");
	lua_pushnumber(L,osg::CullSettings::CULLING_MODE); lua_setfield(L,-2,"CULLING_MODE");
	lua_pushnumber(L,osg::CullSettings::LOD_SCALE); lua_setfield(L,-2,"LOD_SCALE");
	lua_pushnumber(L,osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE); lua_setfield(L,-2,"SMALL_FEATURE_CULLING_PIXEL_SIZE");
	lua_pushnumber(L,osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK); lua_setfield(L,-2,"CLAMP_PROJECTION_MATRIX_CALLBACK");
	lua_pushnumber(L,osg::CullSettings::NEAR_FAR_RATIO); lua_setfield(L,-2,"NEAR_FAR_RATIO");
	lua_pushnumber(L,osg::CullSettings::IMPOSTOR_ACTIVE); lua_setfield(L,-2,"IMPOSTOR_ACTIVE");
	lua_pushnumber(L,osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES); lua_setfield(L,-2,"DEPTH_SORT_IMPOSTOR_SPRITES");
	lua_pushnumber(L,osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD); lua_setfield(L,-2,"IMPOSTOR_PIXEL_ERROR_THRESHOLD");
	lua_pushnumber(L,osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES); lua_setfield(L,-2,"NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK); lua_setfield(L,-2,"CULL_MASK");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK_LEFT); lua_setfield(L,-2,"CULL_MASK_LEFT");
	lua_pushnumber(L,osg::CullSettings::CULL_MASK_RIGHT); lua_setfield(L,-2,"CULL_MASK_RIGHT");
	lua_pushnumber(L,osg::CullSettings::CLEAR_COLOR); lua_setfield(L,-2,"CLEAR_COLOR");
	lua_pushnumber(L,osg::CullSettings::CLEAR_MASK); lua_setfield(L,-2,"CLEAR_MASK");
	lua_pushnumber(L,osg::CullSettings::LIGHTING_MODE); lua_setfield(L,-2,"LIGHTING_MODE");
	lua_pushnumber(L,osg::CullSettings::LIGHT); lua_setfield(L,-2,"LIGHT");
	lua_pushnumber(L,osg::CullSettings::DRAW_BUFFER); lua_setfield(L,-2,"DRAW_BUFFER");
	lua_pushnumber(L,osg::CullSettings::READ_BUFFER); lua_setfield(L,-2,"READ_BUFFER");
	lua_pushnumber(L,osg::CullSettings::NO_VARIABLES); lua_setfield(L,-2,"NO_VARIABLES");
	lua_pushnumber(L,osg::CullSettings::ALL_VARIABLES); lua_setfield(L,-2,"ALL_VARIABLES");


	lua_newtable(L); // enum InheritanceMaskActionOnAttributeSetting

	lua_pushnumber(L,osg::CullSettings::DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT); lua_setfield(L,-2,"DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT");
	lua_pushnumber(L,osg::CullSettings::DO_NOT_MODIFY_INHERITANCE_MASK); lua_setfield(L,-2,"DO_NOT_MODIFY_INHERITANCE_MASK");

	lua_setfield(L,-2,"InheritanceMaskActionOnAttributeSetting");

	lua_pushnumber(L,osg::CullSettings::DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT); lua_setfield(L,-2,"DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT");
	lua_pushnumber(L,osg::CullSettings::DO_NOT_MODIFY_INHERITANCE_MASK); lua_setfield(L,-2,"DO_NOT_MODIFY_INHERITANCE_MASK");


	lua_newtable(L); // enum ComputeNearFarMode

	lua_pushnumber(L,osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR); lua_setfield(L,-2,"DO_NOT_COMPUTE_NEAR_FAR");
	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES");
	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_USING_PRIMITIVES");

	lua_setfield(L,-2,"ComputeNearFarMode");

	lua_pushnumber(L,osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR); lua_setfield(L,-2,"DO_NOT_COMPUTE_NEAR_FAR");
	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES");
	lua_pushnumber(L,osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES); lua_setfield(L,-2,"COMPUTE_NEAR_FAR_USING_PRIMITIVES");


	lua_newtable(L); // enum CullingModeValues

	lua_pushnumber(L,osg::CullSettings::NO_CULLING); lua_setfield(L,-2,"NO_CULLING");
	lua_pushnumber(L,osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_SIDES_CULLING");
	lua_pushnumber(L,osg::CullSettings::NEAR_PLANE_CULLING); lua_setfield(L,-2,"NEAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullSettings::FAR_PLANE_CULLING); lua_setfield(L,-2,"FAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullSettings::VIEW_FRUSTUM_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_CULLING");
	lua_pushnumber(L,osg::CullSettings::SMALL_FEATURE_CULLING); lua_setfield(L,-2,"SMALL_FEATURE_CULLING");
	lua_pushnumber(L,osg::CullSettings::SHADOW_OCCLUSION_CULLING); lua_setfield(L,-2,"SHADOW_OCCLUSION_CULLING");
	lua_pushnumber(L,osg::CullSettings::CLUSTER_CULLING); lua_setfield(L,-2,"CLUSTER_CULLING");
	lua_pushnumber(L,osg::CullSettings::DEFAULT_CULLING); lua_setfield(L,-2,"DEFAULT_CULLING");
	lua_pushnumber(L,osg::CullSettings::ENABLE_ALL_CULLING); lua_setfield(L,-2,"ENABLE_ALL_CULLING");

	lua_setfield(L,-2,"CullingModeValues");

	lua_pushnumber(L,osg::CullSettings::NO_CULLING); lua_setfield(L,-2,"NO_CULLING");
	lua_pushnumber(L,osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_SIDES_CULLING");
	lua_pushnumber(L,osg::CullSettings::NEAR_PLANE_CULLING); lua_setfield(L,-2,"NEAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullSettings::FAR_PLANE_CULLING); lua_setfield(L,-2,"FAR_PLANE_CULLING");
	lua_pushnumber(L,osg::CullSettings::VIEW_FRUSTUM_CULLING); lua_setfield(L,-2,"VIEW_FRUSTUM_CULLING");
	lua_pushnumber(L,osg::CullSettings::SMALL_FEATURE_CULLING); lua_setfield(L,-2,"SMALL_FEATURE_CULLING");
	lua_pushnumber(L,osg::CullSettings::SHADOW_OCCLUSION_CULLING); lua_setfield(L,-2,"SHADOW_OCCLUSION_CULLING");
	lua_pushnumber(L,osg::CullSettings::CLUSTER_CULLING); lua_setfield(L,-2,"CLUSTER_CULLING");
	lua_pushnumber(L,osg::CullSettings::DEFAULT_CULLING); lua_setfield(L,-2,"DEFAULT_CULLING");
	lua_pushnumber(L,osg::CullSettings::ENABLE_ALL_CULLING); lua_setfield(L,-2,"ENABLE_ALL_CULLING");


	lua_newtable(L); // enum Function

	lua_pushnumber(L,osg::Depth::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Depth::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Depth::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Depth::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Depth::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Depth::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Depth::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Depth::ALWAYS); lua_setfield(L,-2,"ALWAYS");

	lua_setfield(L,-2,"Function");

	lua_pushnumber(L,osg::Depth::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Depth::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Depth::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Depth::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Depth::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Depth::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Depth::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Depth::ALWAYS); lua_setfield(L,-2,"ALWAYS");


	lua_newtable(L); // enum DisplayType

	lua_pushnumber(L,osg::DisplaySettings::MONITOR); lua_setfield(L,-2,"MONITOR");
	lua_pushnumber(L,osg::DisplaySettings::POWERWALL); lua_setfield(L,-2,"POWERWALL");
	lua_pushnumber(L,osg::DisplaySettings::REALITY_CENTER); lua_setfield(L,-2,"REALITY_CENTER");
	lua_pushnumber(L,osg::DisplaySettings::HEAD_MOUNTED_DISPLAY); lua_setfield(L,-2,"HEAD_MOUNTED_DISPLAY");

	lua_setfield(L,-2,"DisplayType");

	lua_pushnumber(L,osg::DisplaySettings::MONITOR); lua_setfield(L,-2,"MONITOR");
	lua_pushnumber(L,osg::DisplaySettings::POWERWALL); lua_setfield(L,-2,"POWERWALL");
	lua_pushnumber(L,osg::DisplaySettings::REALITY_CENTER); lua_setfield(L,-2,"REALITY_CENTER");
	lua_pushnumber(L,osg::DisplaySettings::HEAD_MOUNTED_DISPLAY); lua_setfield(L,-2,"HEAD_MOUNTED_DISPLAY");


	lua_newtable(L); // enum StereoMode

	lua_pushnumber(L,osg::DisplaySettings::QUAD_BUFFER); lua_setfield(L,-2,"QUAD_BUFFER");
	lua_pushnumber(L,osg::DisplaySettings::ANAGLYPHIC); lua_setfield(L,-2,"ANAGLYPHIC");
	lua_pushnumber(L,osg::DisplaySettings::HORIZONTAL_SPLIT); lua_setfield(L,-2,"HORIZONTAL_SPLIT");
	lua_pushnumber(L,osg::DisplaySettings::VERTICAL_SPLIT); lua_setfield(L,-2,"VERTICAL_SPLIT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE); lua_setfield(L,-2,"LEFT_EYE");
	lua_pushnumber(L,osg::DisplaySettings::RIGHT_EYE); lua_setfield(L,-2,"RIGHT_EYE");
	lua_pushnumber(L,osg::DisplaySettings::HORIZONTAL_INTERLACE); lua_setfield(L,-2,"HORIZONTAL_INTERLACE");
	lua_pushnumber(L,osg::DisplaySettings::VERTICAL_INTERLACE); lua_setfield(L,-2,"VERTICAL_INTERLACE");
	lua_pushnumber(L,osg::DisplaySettings::CHECKERBOARD); lua_setfield(L,-2,"CHECKERBOARD");

	lua_setfield(L,-2,"StereoMode");

	lua_pushnumber(L,osg::DisplaySettings::QUAD_BUFFER); lua_setfield(L,-2,"QUAD_BUFFER");
	lua_pushnumber(L,osg::DisplaySettings::ANAGLYPHIC); lua_setfield(L,-2,"ANAGLYPHIC");
	lua_pushnumber(L,osg::DisplaySettings::HORIZONTAL_SPLIT); lua_setfield(L,-2,"HORIZONTAL_SPLIT");
	lua_pushnumber(L,osg::DisplaySettings::VERTICAL_SPLIT); lua_setfield(L,-2,"VERTICAL_SPLIT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE); lua_setfield(L,-2,"LEFT_EYE");
	lua_pushnumber(L,osg::DisplaySettings::RIGHT_EYE); lua_setfield(L,-2,"RIGHT_EYE");
	lua_pushnumber(L,osg::DisplaySettings::HORIZONTAL_INTERLACE); lua_setfield(L,-2,"HORIZONTAL_INTERLACE");
	lua_pushnumber(L,osg::DisplaySettings::VERTICAL_INTERLACE); lua_setfield(L,-2,"VERTICAL_INTERLACE");
	lua_pushnumber(L,osg::DisplaySettings::CHECKERBOARD); lua_setfield(L,-2,"CHECKERBOARD");


	lua_newtable(L); // enum SplitStereoHorizontalEyeMapping

	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_LEFT_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_LEFT_VIEWPORT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_RIGHT_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_RIGHT_VIEWPORT");

	lua_setfield(L,-2,"SplitStereoHorizontalEyeMapping");

	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_LEFT_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_LEFT_VIEWPORT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_RIGHT_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_RIGHT_VIEWPORT");


	lua_newtable(L); // enum SplitStereoVerticalEyeMapping

	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_TOP_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_TOP_VIEWPORT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_BOTTOM_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_BOTTOM_VIEWPORT");

	lua_setfield(L,-2,"SplitStereoVerticalEyeMapping");

	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_TOP_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_TOP_VIEWPORT");
	lua_pushnumber(L,osg::DisplaySettings::LEFT_EYE_BOTTOM_VIEWPORT); lua_setfield(L,-2,"LEFT_EYE_BOTTOM_VIEWPORT");


	lua_newtable(L); // enum ImplicitBufferAttachment

	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_DEPTH_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_DEPTH_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_STENCIL_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_STENCIL_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_COLOR_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_COLOR_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT); lua_setfield(L,-2,"DEFAULT_IMPLICIT_BUFFER_ATTACHMENT");

	lua_setfield(L,-2,"ImplicitBufferAttachment");

	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_DEPTH_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_DEPTH_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_STENCIL_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_STENCIL_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::IMPLICIT_COLOR_BUFFER_ATTACHMENT); lua_setfield(L,-2,"IMPLICIT_COLOR_BUFFER_ATTACHMENT");
	lua_pushnumber(L,osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT); lua_setfield(L,-2,"DEFAULT_IMPLICIT_BUFFER_ATTACHMENT");


	lua_newtable(L); // enum SwapMethod

	lua_pushnumber(L,osg::DisplaySettings::SWAP_DEFAULT); lua_setfield(L,-2,"SWAP_DEFAULT");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_EXCHANGE); lua_setfield(L,-2,"SWAP_EXCHANGE");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_COPY); lua_setfield(L,-2,"SWAP_COPY");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_UNDEFINED); lua_setfield(L,-2,"SWAP_UNDEFINED");

	lua_setfield(L,-2,"SwapMethod");

	lua_pushnumber(L,osg::DisplaySettings::SWAP_DEFAULT); lua_setfield(L,-2,"SWAP_DEFAULT");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_EXCHANGE); lua_setfield(L,-2,"SWAP_EXCHANGE");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_COPY); lua_setfield(L,-2,"SWAP_COPY");
	lua_pushnumber(L,osg::DisplaySettings::SWAP_UNDEFINED); lua_setfield(L,-2,"SWAP_UNDEFINED");


	lua_newtable(L); // enum AttributeTypes

	lua_pushnumber(L,osg::Drawable::VERTICES); lua_setfield(L,-2,"VERTICES");
	lua_pushnumber(L,osg::Drawable::WEIGHTS); lua_setfield(L,-2,"WEIGHTS");
	lua_pushnumber(L,osg::Drawable::NORMALS); lua_setfield(L,-2,"NORMALS");
	lua_pushnumber(L,osg::Drawable::COLORS); lua_setfield(L,-2,"COLORS");
	lua_pushnumber(L,osg::Drawable::SECONDARY_COLORS); lua_setfield(L,-2,"SECONDARY_COLORS");
	lua_pushnumber(L,osg::Drawable::FOG_COORDS); lua_setfield(L,-2,"FOG_COORDS");
	lua_pushnumber(L,osg::Drawable::ATTRIBUTE_6); lua_setfield(L,-2,"ATTRIBUTE_6");
	lua_pushnumber(L,osg::Drawable::ATTRIBUTE_7); lua_setfield(L,-2,"ATTRIBUTE_7");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS); lua_setfield(L,-2,"TEXTURE_COORDS");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_0); lua_setfield(L,-2,"TEXTURE_COORDS_0");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_1); lua_setfield(L,-2,"TEXTURE_COORDS_1");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_2); lua_setfield(L,-2,"TEXTURE_COORDS_2");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_3); lua_setfield(L,-2,"TEXTURE_COORDS_3");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_4); lua_setfield(L,-2,"TEXTURE_COORDS_4");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_5); lua_setfield(L,-2,"TEXTURE_COORDS_5");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_6); lua_setfield(L,-2,"TEXTURE_COORDS_6");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_7); lua_setfield(L,-2,"TEXTURE_COORDS_7");

	lua_setfield(L,-2,"AttributeTypes");

	lua_pushnumber(L,osg::Drawable::VERTICES); lua_setfield(L,-2,"VERTICES");
	lua_pushnumber(L,osg::Drawable::WEIGHTS); lua_setfield(L,-2,"WEIGHTS");
	lua_pushnumber(L,osg::Drawable::NORMALS); lua_setfield(L,-2,"NORMALS");
	lua_pushnumber(L,osg::Drawable::COLORS); lua_setfield(L,-2,"COLORS");
	lua_pushnumber(L,osg::Drawable::SECONDARY_COLORS); lua_setfield(L,-2,"SECONDARY_COLORS");
	lua_pushnumber(L,osg::Drawable::FOG_COORDS); lua_setfield(L,-2,"FOG_COORDS");
	lua_pushnumber(L,osg::Drawable::ATTRIBUTE_6); lua_setfield(L,-2,"ATTRIBUTE_6");
	lua_pushnumber(L,osg::Drawable::ATTRIBUTE_7); lua_setfield(L,-2,"ATTRIBUTE_7");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS); lua_setfield(L,-2,"TEXTURE_COORDS");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_0); lua_setfield(L,-2,"TEXTURE_COORDS_0");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_1); lua_setfield(L,-2,"TEXTURE_COORDS_1");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_2); lua_setfield(L,-2,"TEXTURE_COORDS_2");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_3); lua_setfield(L,-2,"TEXTURE_COORDS_3");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_4); lua_setfield(L,-2,"TEXTURE_COORDS_4");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_5); lua_setfield(L,-2,"TEXTURE_COORDS_5");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_6); lua_setfield(L,-2,"TEXTURE_COORDS_6");
	lua_pushnumber(L,osg::Drawable::TEXTURE_COORDS_7); lua_setfield(L,-2,"TEXTURE_COORDS_7");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::Fog::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osg::Fog::EXP); lua_setfield(L,-2,"EXP");
	lua_pushnumber(L,osg::Fog::EXP2); lua_setfield(L,-2,"EXP2");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::Fog::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osg::Fog::EXP); lua_setfield(L,-2,"EXP");
	lua_pushnumber(L,osg::Fog::EXP2); lua_setfield(L,-2,"EXP2");


	lua_newtable(L); // enum FogCoordinateSource

	lua_pushnumber(L,osg::Fog::FOG_COORDINATE); lua_setfield(L,-2,"FOG_COORDINATE");
	lua_pushnumber(L,osg::Fog::FRAGMENT_DEPTH); lua_setfield(L,-2,"FRAGMENT_DEPTH");

	lua_setfield(L,-2,"FogCoordinateSource");

	lua_pushnumber(L,osg::Fog::FOG_COORDINATE); lua_setfield(L,-2,"FOG_COORDINATE");
	lua_pushnumber(L,osg::Fog::FRAGMENT_DEPTH); lua_setfield(L,-2,"FRAGMENT_DEPTH");


	lua_newtable(L); // enum BindTarget

	lua_pushnumber(L,osg::FrameBufferObject::READ_FRAMEBUFFER); lua_setfield(L,-2,"READ_FRAMEBUFFER");
	lua_pushnumber(L,osg::FrameBufferObject::DRAW_FRAMEBUFFER); lua_setfield(L,-2,"DRAW_FRAMEBUFFER");
	lua_pushnumber(L,osg::FrameBufferObject::READ_DRAW_FRAMEBUFFER); lua_setfield(L,-2,"READ_DRAW_FRAMEBUFFER");

	lua_setfield(L,-2,"BindTarget");

	lua_pushnumber(L,osg::FrameBufferObject::READ_FRAMEBUFFER); lua_setfield(L,-2,"READ_FRAMEBUFFER");
	lua_pushnumber(L,osg::FrameBufferObject::DRAW_FRAMEBUFFER); lua_setfield(L,-2,"DRAW_FRAMEBUFFER");
	lua_pushnumber(L,osg::FrameBufferObject::READ_DRAW_FRAMEBUFFER); lua_setfield(L,-2,"READ_DRAW_FRAMEBUFFER");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::FrontFace::CLOCKWISE); lua_setfield(L,-2,"CLOCKWISE");
	lua_pushnumber(L,osg::FrontFace::COUNTER_CLOCKWISE); lua_setfield(L,-2,"COUNTER_CLOCKWISE");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::FrontFace::CLOCKWISE); lua_setfield(L,-2,"CLOCKWISE");
	lua_pushnumber(L,osg::FrontFace::COUNTER_CLOCKWISE); lua_setfield(L,-2,"COUNTER_CLOCKWISE");


	lua_newtable(L); // enum AttributeBinding

	lua_pushnumber(L,osg::Geometry::BIND_OFF); lua_setfield(L,-2,"BIND_OFF");
	lua_pushnumber(L,osg::Geometry::BIND_OVERALL); lua_setfield(L,-2,"BIND_OVERALL");
	lua_pushnumber(L,osg::Geometry::BIND_PER_PRIMITIVE_SET); lua_setfield(L,-2,"BIND_PER_PRIMITIVE_SET");
	lua_pushnumber(L,osg::Geometry::BIND_PER_PRIMITIVE); lua_setfield(L,-2,"BIND_PER_PRIMITIVE");
	lua_pushnumber(L,osg::Geometry::BIND_PER_VERTEX); lua_setfield(L,-2,"BIND_PER_VERTEX");

	lua_setfield(L,-2,"AttributeBinding");

	lua_pushnumber(L,osg::Geometry::BIND_OFF); lua_setfield(L,-2,"BIND_OFF");
	lua_pushnumber(L,osg::Geometry::BIND_OVERALL); lua_setfield(L,-2,"BIND_OVERALL");
	lua_pushnumber(L,osg::Geometry::BIND_PER_PRIMITIVE_SET); lua_setfield(L,-2,"BIND_PER_PRIMITIVE_SET");
	lua_pushnumber(L,osg::Geometry::BIND_PER_PRIMITIVE); lua_setfield(L,-2,"BIND_PER_PRIMITIVE");
	lua_pushnumber(L,osg::Geometry::BIND_PER_VERTEX); lua_setfield(L,-2,"BIND_PER_VERTEX");


	lua_newtable(L); // enum MatrixMode

	lua_pushnumber(L,osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES); lua_setfield(L,-2,"APPLY_LOCAL_MATRICES_TO_VERTICES");
	lua_pushnumber(L,osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW); lua_setfield(L,-2,"APPLY_LOCAL_MATRICES_TO_MODELVIEW");

	lua_setfield(L,-2,"MatrixMode");

	lua_pushnumber(L,osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES); lua_setfield(L,-2,"APPLY_LOCAL_MATRICES_TO_VERTICES");
	lua_pushnumber(L,osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW); lua_setfield(L,-2,"APPLY_LOCAL_MATRICES_TO_MODELVIEW");


	lua_newtable(L); // enum PreBlockOp

	lua_pushnumber(L,osg::BarrierOperation::NO_OPERATION); lua_setfield(L,-2,"NO_OPERATION");
	lua_pushnumber(L,osg::BarrierOperation::GL_FLUSH); lua_setfield(L,-2,"GL_FLUSH");
	lua_pushnumber(L,osg::BarrierOperation::GL_FINISH); lua_setfield(L,-2,"GL_FINISH");

	lua_setfield(L,-2,"PreBlockOp");

	lua_pushnumber(L,osg::BarrierOperation::NO_OPERATION); lua_setfield(L,-2,"NO_OPERATION");
	lua_pushnumber(L,osg::BarrierOperation::GL_FLUSH); lua_setfield(L,-2,"GL_FLUSH");
	lua_pushnumber(L,osg::BarrierOperation::GL_FINISH); lua_setfield(L,-2,"GL_FINISH");


	lua_newtable(L); // enum WriteHint

	lua_pushnumber(L,osg::Image::NO_PREFERENCE); lua_setfield(L,-2,"NO_PREFERENCE");
	lua_pushnumber(L,osg::Image::STORE_INLINE); lua_setfield(L,-2,"STORE_INLINE");
	lua_pushnumber(L,osg::Image::EXTERNAL_FILE); lua_setfield(L,-2,"EXTERNAL_FILE");

	lua_setfield(L,-2,"WriteHint");

	lua_pushnumber(L,osg::Image::NO_PREFERENCE); lua_setfield(L,-2,"NO_PREFERENCE");
	lua_pushnumber(L,osg::Image::STORE_INLINE); lua_setfield(L,-2,"STORE_INLINE");
	lua_pushnumber(L,osg::Image::EXTERNAL_FILE); lua_setfield(L,-2,"EXTERNAL_FILE");


	lua_newtable(L); // enum AllocationMode

	lua_pushnumber(L,osg::Image::NO_DELETE); lua_setfield(L,-2,"NO_DELETE");
	lua_pushnumber(L,osg::Image::USE_NEW_DELETE); lua_setfield(L,-2,"USE_NEW_DELETE");
	lua_pushnumber(L,osg::Image::USE_MALLOC_FREE); lua_setfield(L,-2,"USE_MALLOC_FREE");

	lua_setfield(L,-2,"AllocationMode");

	lua_pushnumber(L,osg::Image::NO_DELETE); lua_setfield(L,-2,"NO_DELETE");
	lua_pushnumber(L,osg::Image::USE_NEW_DELETE); lua_setfield(L,-2,"USE_NEW_DELETE");
	lua_pushnumber(L,osg::Image::USE_MALLOC_FREE); lua_setfield(L,-2,"USE_MALLOC_FREE");


	lua_newtable(L); // enum Origin

	lua_pushnumber(L,osg::Image::BOTTOM_LEFT); lua_setfield(L,-2,"BOTTOM_LEFT");
	lua_pushnumber(L,osg::Image::TOP_LEFT); lua_setfield(L,-2,"TOP_LEFT");

	lua_setfield(L,-2,"Origin");

	lua_pushnumber(L,osg::Image::BOTTOM_LEFT); lua_setfield(L,-2,"BOTTOM_LEFT");
	lua_pushnumber(L,osg::Image::TOP_LEFT); lua_setfield(L,-2,"TOP_LEFT");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::ImageSequence::PRE_LOAD_ALL_IMAGES); lua_setfield(L,-2,"PRE_LOAD_ALL_IMAGES");
	lua_pushnumber(L,osg::ImageSequence::PAGE_AND_RETAIN_IMAGES); lua_setfield(L,-2,"PAGE_AND_RETAIN_IMAGES");
	lua_pushnumber(L,osg::ImageSequence::PAGE_AND_DISCARD_USED_IMAGES); lua_setfield(L,-2,"PAGE_AND_DISCARD_USED_IMAGES");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::ImageSequence::PRE_LOAD_ALL_IMAGES); lua_setfield(L,-2,"PRE_LOAD_ALL_IMAGES");
	lua_pushnumber(L,osg::ImageSequence::PAGE_AND_RETAIN_IMAGES); lua_setfield(L,-2,"PAGE_AND_RETAIN_IMAGES");
	lua_pushnumber(L,osg::ImageSequence::PAGE_AND_DISCARD_USED_IMAGES); lua_setfield(L,-2,"PAGE_AND_DISCARD_USED_IMAGES");


	lua_newtable(L); // enum StreamStatus

	lua_pushnumber(L,osg::ImageStream::INVALID); lua_setfield(L,-2,"INVALID");
	lua_pushnumber(L,osg::ImageStream::PLAYING); lua_setfield(L,-2,"PLAYING");
	lua_pushnumber(L,osg::ImageStream::PAUSED); lua_setfield(L,-2,"PAUSED");
	lua_pushnumber(L,osg::ImageStream::REWINDING); lua_setfield(L,-2,"REWINDING");

	lua_setfield(L,-2,"StreamStatus");

	lua_pushnumber(L,osg::ImageStream::INVALID); lua_setfield(L,-2,"INVALID");
	lua_pushnumber(L,osg::ImageStream::PLAYING); lua_setfield(L,-2,"PLAYING");
	lua_pushnumber(L,osg::ImageStream::PAUSED); lua_setfield(L,-2,"PAUSED");
	lua_pushnumber(L,osg::ImageStream::REWINDING); lua_setfield(L,-2,"REWINDING");


	lua_newtable(L); // enum LoopingMode

	lua_pushnumber(L,osg::ImageStream::NO_LOOPING); lua_setfield(L,-2,"NO_LOOPING");
	lua_pushnumber(L,osg::ImageStream::LOOPING); lua_setfield(L,-2,"LOOPING");

	lua_setfield(L,-2,"LoopingMode");

	lua_pushnumber(L,osg::ImageStream::NO_LOOPING); lua_setfield(L,-2,"NO_LOOPING");
	lua_pushnumber(L,osg::ImageStream::LOOPING); lua_setfield(L,-2,"LOOPING");


	lua_newtable(L); // enum ColorControl

	lua_pushnumber(L,osg::LightModel::SEPARATE_SPECULAR_COLOR); lua_setfield(L,-2,"SEPARATE_SPECULAR_COLOR");
	lua_pushnumber(L,osg::LightModel::SINGLE_COLOR); lua_setfield(L,-2,"SINGLE_COLOR");

	lua_setfield(L,-2,"ColorControl");

	lua_pushnumber(L,osg::LightModel::SEPARATE_SPECULAR_COLOR); lua_setfield(L,-2,"SEPARATE_SPECULAR_COLOR");
	lua_pushnumber(L,osg::LightModel::SINGLE_COLOR); lua_setfield(L,-2,"SINGLE_COLOR");


	lua_newtable(L); // enum ReferenceFrame

	lua_pushnumber(L,osg::LightSource::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::LightSource::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");

	lua_setfield(L,-2,"ReferenceFrame");

	lua_pushnumber(L,osg::LightSource::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::LightSource::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");


	lua_newtable(L); // enum CenterMode

	lua_pushnumber(L,osg::LOD::USE_BOUNDING_SPHERE_CENTER); lua_setfield(L,-2,"USE_BOUNDING_SPHERE_CENTER");
	lua_pushnumber(L,osg::LOD::USER_DEFINED_CENTER); lua_setfield(L,-2,"USER_DEFINED_CENTER");

	lua_setfield(L,-2,"CenterMode");

	lua_pushnumber(L,osg::LOD::USE_BOUNDING_SPHERE_CENTER); lua_setfield(L,-2,"USE_BOUNDING_SPHERE_CENTER");
	lua_pushnumber(L,osg::LOD::USER_DEFINED_CENTER); lua_setfield(L,-2,"USER_DEFINED_CENTER");


	lua_newtable(L); // enum RangeMode

	lua_pushnumber(L,osg::LOD::DISTANCE_FROM_EYE_POINT); lua_setfield(L,-2,"DISTANCE_FROM_EYE_POINT");
	lua_pushnumber(L,osg::LOD::PIXEL_SIZE_ON_SCREEN); lua_setfield(L,-2,"PIXEL_SIZE_ON_SCREEN");

	lua_setfield(L,-2,"RangeMode");

	lua_pushnumber(L,osg::LOD::DISTANCE_FROM_EYE_POINT); lua_setfield(L,-2,"DISTANCE_FROM_EYE_POINT");
	lua_pushnumber(L,osg::LOD::PIXEL_SIZE_ON_SCREEN); lua_setfield(L,-2,"PIXEL_SIZE_ON_SCREEN");


	lua_newtable(L); // enum Opcode

	lua_pushnumber(L,osg::LogicOp::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,osg::LogicOp::SET); lua_setfield(L,-2,"SET");
	lua_pushnumber(L,osg::LogicOp::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,osg::LogicOp::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,osg::LogicOp::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,osg::LogicOp::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::LogicOp::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,osg::LogicOp::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,osg::LogicOp::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,osg::LogicOp::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,osg::LogicOp::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,osg::LogicOp::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,osg::LogicOp::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,osg::LogicOp::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,osg::LogicOp::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,osg::LogicOp::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");

	lua_setfield(L,-2,"Opcode");

	lua_pushnumber(L,osg::LogicOp::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,osg::LogicOp::SET); lua_setfield(L,-2,"SET");
	lua_pushnumber(L,osg::LogicOp::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,osg::LogicOp::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,osg::LogicOp::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,osg::LogicOp::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::LogicOp::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,osg::LogicOp::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,osg::LogicOp::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,osg::LogicOp::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,osg::LogicOp::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,osg::LogicOp::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,osg::LogicOp::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,osg::LogicOp::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,osg::LogicOp::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,osg::LogicOp::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");


	lua_newtable(L); // enum Face

	lua_pushnumber(L,osg::Material::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::Material::BACK); lua_setfield(L,-2,"BACK");
	lua_pushnumber(L,osg::Material::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");

	lua_setfield(L,-2,"Face");

	lua_pushnumber(L,osg::Material::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::Material::BACK); lua_setfield(L,-2,"BACK");
	lua_pushnumber(L,osg::Material::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");


	lua_newtable(L); // enum ColorMode

	lua_pushnumber(L,osg::Material::AMBIENT); lua_setfield(L,-2,"AMBIENT");
	lua_pushnumber(L,osg::Material::DIFFUSE); lua_setfield(L,-2,"DIFFUSE");
	lua_pushnumber(L,osg::Material::SPECULAR); lua_setfield(L,-2,"SPECULAR");
	lua_pushnumber(L,osg::Material::EMISSION); lua_setfield(L,-2,"EMISSION");
	lua_pushnumber(L,osg::Material::AMBIENT_AND_DIFFUSE); lua_setfield(L,-2,"AMBIENT_AND_DIFFUSE");
	lua_pushnumber(L,osg::Material::OFF); lua_setfield(L,-2,"OFF");

	lua_setfield(L,-2,"ColorMode");

	lua_pushnumber(L,osg::Material::AMBIENT); lua_setfield(L,-2,"AMBIENT");
	lua_pushnumber(L,osg::Material::DIFFUSE); lua_setfield(L,-2,"DIFFUSE");
	lua_pushnumber(L,osg::Material::SPECULAR); lua_setfield(L,-2,"SPECULAR");
	lua_pushnumber(L,osg::Material::EMISSION); lua_setfield(L,-2,"EMISSION");
	lua_pushnumber(L,osg::Material::AMBIENT_AND_DIFFUSE); lua_setfield(L,-2,"AMBIENT_AND_DIFFUSE");
	lua_pushnumber(L,osg::Material::OFF); lua_setfield(L,-2,"OFF");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::Multisample::FASTEST); lua_setfield(L,-2,"FASTEST");
	lua_pushnumber(L,osg::Multisample::NICEST); lua_setfield(L,-2,"NICEST");
	lua_pushnumber(L,osg::Multisample::DONT_CARE); lua_setfield(L,-2,"DONT_CARE");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::Multisample::FASTEST); lua_setfield(L,-2,"FASTEST");
	lua_pushnumber(L,osg::Multisample::NICEST); lua_setfield(L,-2,"NICEST");
	lua_pushnumber(L,osg::Multisample::DONT_CARE); lua_setfield(L,-2,"DONT_CARE");


	lua_newtable(L); // enum TraversalMode

	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_NONE); lua_setfield(L,-2,"TRAVERSE_NONE");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_PARENTS); lua_setfield(L,-2,"TRAVERSE_PARENTS");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_ALL_CHILDREN); lua_setfield(L,-2,"TRAVERSE_ALL_CHILDREN");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_ACTIVE_CHILDREN); lua_setfield(L,-2,"TRAVERSE_ACTIVE_CHILDREN");

	lua_setfield(L,-2,"TraversalMode");

	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_NONE); lua_setfield(L,-2,"TRAVERSE_NONE");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_PARENTS); lua_setfield(L,-2,"TRAVERSE_PARENTS");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_ALL_CHILDREN); lua_setfield(L,-2,"TRAVERSE_ALL_CHILDREN");
	lua_pushnumber(L,osg::NodeVisitor::TRAVERSE_ACTIVE_CHILDREN); lua_setfield(L,-2,"TRAVERSE_ACTIVE_CHILDREN");


	lua_newtable(L); // enum VisitorType

	lua_pushnumber(L,osg::NodeVisitor::NODE_VISITOR); lua_setfield(L,-2,"NODE_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::UPDATE_VISITOR); lua_setfield(L,-2,"UPDATE_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::EVENT_VISITOR); lua_setfield(L,-2,"EVENT_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::COLLECT_OCCLUDER_VISITOR); lua_setfield(L,-2,"COLLECT_OCCLUDER_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::CULL_VISITOR); lua_setfield(L,-2,"CULL_VISITOR");

	lua_setfield(L,-2,"VisitorType");

	lua_pushnumber(L,osg::NodeVisitor::NODE_VISITOR); lua_setfield(L,-2,"NODE_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::UPDATE_VISITOR); lua_setfield(L,-2,"UPDATE_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::EVENT_VISITOR); lua_setfield(L,-2,"EVENT_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::COLLECT_OCCLUDER_VISITOR); lua_setfield(L,-2,"COLLECT_OCCLUDER_VISITOR");
	lua_pushnumber(L,osg::NodeVisitor::CULL_VISITOR); lua_setfield(L,-2,"CULL_VISITOR");


	lua_newtable(L); // enum DataVariance

	lua_pushnumber(L,osg::Object::DYNAMIC); lua_setfield(L,-2,"DYNAMIC");
	lua_pushnumber(L,osg::Object::STATIC); lua_setfield(L,-2,"STATIC");
	lua_pushnumber(L,osg::Object::UNSPECIFIED); lua_setfield(L,-2,"UNSPECIFIED");

	lua_setfield(L,-2,"DataVariance");

	lua_pushnumber(L,osg::Object::DYNAMIC); lua_setfield(L,-2,"DYNAMIC");
	lua_pushnumber(L,osg::Object::STATIC); lua_setfield(L,-2,"STATIC");
	lua_pushnumber(L,osg::Object::UNSPECIFIED); lua_setfield(L,-2,"UNSPECIFIED");


	lua_newtable(L); // enum unnamed_0

	lua_pushnumber(L,osg::Plane::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_0");

	lua_pushnumber(L,osg::Plane::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum CoordOriginMode

	lua_pushnumber(L,osg::PointSprite::UPPER_LEFT); lua_setfield(L,-2,"UPPER_LEFT");
	lua_pushnumber(L,osg::PointSprite::LOWER_LEFT); lua_setfield(L,-2,"LOWER_LEFT");

	lua_setfield(L,-2,"CoordOriginMode");

	lua_pushnumber(L,osg::PointSprite::UPPER_LEFT); lua_setfield(L,-2,"UPPER_LEFT");
	lua_pushnumber(L,osg::PointSprite::LOWER_LEFT); lua_setfield(L,-2,"LOWER_LEFT");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::PolygonMode::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osg::PolygonMode::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,osg::PolygonMode::FILL); lua_setfield(L,-2,"FILL");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::PolygonMode::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osg::PolygonMode::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,osg::PolygonMode::FILL); lua_setfield(L,-2,"FILL");


	lua_newtable(L); // enum Face

	lua_pushnumber(L,osg::PolygonMode::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");
	lua_pushnumber(L,osg::PolygonMode::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::PolygonMode::BACK); lua_setfield(L,-2,"BACK");

	lua_setfield(L,-2,"Face");

	lua_pushnumber(L,osg::PolygonMode::FRONT_AND_BACK); lua_setfield(L,-2,"FRONT_AND_BACK");
	lua_pushnumber(L,osg::PolygonMode::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::PolygonMode::BACK); lua_setfield(L,-2,"BACK");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::PrimitiveSet::PrimitiveType); lua_setfield(L,-2,"PrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawArraysPrimitiveType); lua_setfield(L,-2,"DrawArraysPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawArrayLengthsPrimitiveType); lua_setfield(L,-2,"DrawArrayLengthsPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUBytePrimitiveType); lua_setfield(L,-2,"DrawElementsUBytePrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUShortPrimitiveType); lua_setfield(L,-2,"DrawElementsUShortPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUIntPrimitiveType); lua_setfield(L,-2,"DrawElementsUIntPrimitiveType");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::PrimitiveSet::PrimitiveType); lua_setfield(L,-2,"PrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawArraysPrimitiveType); lua_setfield(L,-2,"DrawArraysPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawArrayLengthsPrimitiveType); lua_setfield(L,-2,"DrawArrayLengthsPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUBytePrimitiveType); lua_setfield(L,-2,"DrawElementsUBytePrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUShortPrimitiveType); lua_setfield(L,-2,"DrawElementsUShortPrimitiveType");
	lua_pushnumber(L,osg::PrimitiveSet::DrawElementsUIntPrimitiveType); lua_setfield(L,-2,"DrawElementsUIntPrimitiveType");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::PrimitiveSet::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,osg::PrimitiveSet::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,osg::PrimitiveSet::QUADS); lua_setfield(L,-2,"QUADS");
	lua_pushnumber(L,osg::PrimitiveSet::QUAD_STRIP); lua_setfield(L,-2,"QUAD_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::POLYGON); lua_setfield(L,-2,"POLYGON");
	lua_pushnumber(L,osg::PrimitiveSet::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::PATCHES); lua_setfield(L,-2,"PATCHES");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::PrimitiveSet::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,osg::PrimitiveSet::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,osg::PrimitiveSet::QUADS); lua_setfield(L,-2,"QUADS");
	lua_pushnumber(L,osg::PrimitiveSet::QUAD_STRIP); lua_setfield(L,-2,"QUAD_STRIP");
	lua_pushnumber(L,osg::PrimitiveSet::POLYGON); lua_setfield(L,-2,"POLYGON");
	lua_pushnumber(L,osg::PrimitiveSet::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,osg::PrimitiveSet::PATCHES); lua_setfield(L,-2,"PATCHES");


	lua_newtable(L); // enum CenterMode

	lua_pushnumber(L,osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER); lua_setfield(L,-2,"USE_BOUNDING_SPHERE_CENTER");
	lua_pushnumber(L,osg::ProxyNode::USER_DEFINED_CENTER); lua_setfield(L,-2,"USER_DEFINED_CENTER");

	lua_setfield(L,-2,"CenterMode");

	lua_pushnumber(L,osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER); lua_setfield(L,-2,"USE_BOUNDING_SPHERE_CENTER");
	lua_pushnumber(L,osg::ProxyNode::USER_DEFINED_CENTER); lua_setfield(L,-2,"USER_DEFINED_CENTER");


	lua_newtable(L); // enum LoadingExternalReferenceMode

	lua_pushnumber(L,osg::ProxyNode::LOAD_IMMEDIATELY); lua_setfield(L,-2,"LOAD_IMMEDIATELY");
	lua_pushnumber(L,osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER); lua_setfield(L,-2,"DEFER_LOADING_TO_DATABASE_PAGER");
	lua_pushnumber(L,osg::ProxyNode::NO_AUTOMATIC_LOADING); lua_setfield(L,-2,"NO_AUTOMATIC_LOADING");

	lua_setfield(L,-2,"LoadingExternalReferenceMode");

	lua_pushnumber(L,osg::ProxyNode::LOAD_IMMEDIATELY); lua_setfield(L,-2,"LOAD_IMMEDIATELY");
	lua_pushnumber(L,osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER); lua_setfield(L,-2,"DEFER_LOADING_TO_DATABASE_PAGER");
	lua_pushnumber(L,osg::ProxyNode::NO_AUTOMATIC_LOADING); lua_setfield(L,-2,"NO_AUTOMATIC_LOADING");


	lua_newtable(L); // enum LoopMode

	lua_pushnumber(L,osg::Sequence::LOOP); lua_setfield(L,-2,"LOOP");
	lua_pushnumber(L,osg::Sequence::SWING); lua_setfield(L,-2,"SWING");

	lua_setfield(L,-2,"LoopMode");

	lua_pushnumber(L,osg::Sequence::LOOP); lua_setfield(L,-2,"LOOP");
	lua_pushnumber(L,osg::Sequence::SWING); lua_setfield(L,-2,"SWING");


	lua_newtable(L); // enum SequenceMode

	lua_pushnumber(L,osg::Sequence::START); lua_setfield(L,-2,"START");
	lua_pushnumber(L,osg::Sequence::STOP); lua_setfield(L,-2,"STOP");
	lua_pushnumber(L,osg::Sequence::PAUSE); lua_setfield(L,-2,"PAUSE");
	lua_pushnumber(L,osg::Sequence::RESUME); lua_setfield(L,-2,"RESUME");

	lua_setfield(L,-2,"SequenceMode");

	lua_pushnumber(L,osg::Sequence::START); lua_setfield(L,-2,"START");
	lua_pushnumber(L,osg::Sequence::STOP); lua_setfield(L,-2,"STOP");
	lua_pushnumber(L,osg::Sequence::PAUSE); lua_setfield(L,-2,"PAUSE");
	lua_pushnumber(L,osg::Sequence::RESUME); lua_setfield(L,-2,"RESUME");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::ShadeModel::FLAT); lua_setfield(L,-2,"FLAT");
	lua_pushnumber(L,osg::ShadeModel::SMOOTH); lua_setfield(L,-2,"SMOOTH");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::ShadeModel::FLAT); lua_setfield(L,-2,"FLAT");
	lua_pushnumber(L,osg::ShadeModel::SMOOTH); lua_setfield(L,-2,"SMOOTH");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::Shader::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,osg::Shader::TESSCONTROL); lua_setfield(L,-2,"TESSCONTROL");
	lua_pushnumber(L,osg::Shader::TESSEVALUATION); lua_setfield(L,-2,"TESSEVALUATION");
	lua_pushnumber(L,osg::Shader::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,osg::Shader::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");
	lua_pushnumber(L,osg::Shader::UNDEFINED); lua_setfield(L,-2,"UNDEFINED");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::Shader::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,osg::Shader::TESSCONTROL); lua_setfield(L,-2,"TESSCONTROL");
	lua_pushnumber(L,osg::Shader::TESSEVALUATION); lua_setfield(L,-2,"TESSEVALUATION");
	lua_pushnumber(L,osg::Shader::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,osg::Shader::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");
	lua_pushnumber(L,osg::Shader::UNDEFINED); lua_setfield(L,-2,"UNDEFINED");


	lua_newtable(L); // enum TessellationMode

	lua_pushnumber(L,osg::TessellationHints::USE_SHAPE_DEFAULTS); lua_setfield(L,-2,"USE_SHAPE_DEFAULTS");
	lua_pushnumber(L,osg::TessellationHints::USE_TARGET_NUM_FACES); lua_setfield(L,-2,"USE_TARGET_NUM_FACES");

	lua_setfield(L,-2,"TessellationMode");

	lua_pushnumber(L,osg::TessellationHints::USE_SHAPE_DEFAULTS); lua_setfield(L,-2,"USE_SHAPE_DEFAULTS");
	lua_pushnumber(L,osg::TessellationHints::USE_TARGET_NUM_FACES); lua_setfield(L,-2,"USE_TARGET_NUM_FACES");


	lua_newtable(L); // enum CheckForGLErrors

	lua_pushnumber(L,osg::State::NEVER_CHECK_GL_ERRORS); lua_setfield(L,-2,"NEVER_CHECK_GL_ERRORS");
	lua_pushnumber(L,osg::State::ONCE_PER_FRAME); lua_setfield(L,-2,"ONCE_PER_FRAME");
	lua_pushnumber(L,osg::State::ONCE_PER_ATTRIBUTE); lua_setfield(L,-2,"ONCE_PER_ATTRIBUTE");

	lua_setfield(L,-2,"CheckForGLErrors");

	lua_pushnumber(L,osg::State::NEVER_CHECK_GL_ERRORS); lua_setfield(L,-2,"NEVER_CHECK_GL_ERRORS");
	lua_pushnumber(L,osg::State::ONCE_PER_FRAME); lua_setfield(L,-2,"ONCE_PER_FRAME");
	lua_pushnumber(L,osg::State::ONCE_PER_ATTRIBUTE); lua_setfield(L,-2,"ONCE_PER_ATTRIBUTE");


	lua_newtable(L); // enum Values

	lua_pushnumber(L,osg::StateAttribute::OFF); lua_setfield(L,-2,"OFF");
	lua_pushnumber(L,osg::StateAttribute::ON); lua_setfield(L,-2,"ON");
	lua_pushnumber(L,osg::StateAttribute::OVERRIDE); lua_setfield(L,-2,"OVERRIDE");
	lua_pushnumber(L,osg::StateAttribute::PROTECTED); lua_setfield(L,-2,"PROTECTED");
	lua_pushnumber(L,osg::StateAttribute::INHERIT); lua_setfield(L,-2,"INHERIT");

	lua_setfield(L,-2,"Values");

	lua_pushnumber(L,osg::StateAttribute::OFF); lua_setfield(L,-2,"OFF");
	lua_pushnumber(L,osg::StateAttribute::ON); lua_setfield(L,-2,"ON");
	lua_pushnumber(L,osg::StateAttribute::OVERRIDE); lua_setfield(L,-2,"OVERRIDE");
	lua_pushnumber(L,osg::StateAttribute::PROTECTED); lua_setfield(L,-2,"PROTECTED");
	lua_pushnumber(L,osg::StateAttribute::INHERIT); lua_setfield(L,-2,"INHERIT");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::StateAttribute::TEXTURE); lua_setfield(L,-2,"TEXTURE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONMODE); lua_setfield(L,-2,"POLYGONMODE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONOFFSET); lua_setfield(L,-2,"POLYGONOFFSET");
	lua_pushnumber(L,osg::StateAttribute::MATERIAL); lua_setfield(L,-2,"MATERIAL");
	lua_pushnumber(L,osg::StateAttribute::ALPHAFUNC); lua_setfield(L,-2,"ALPHAFUNC");
	lua_pushnumber(L,osg::StateAttribute::ANTIALIAS); lua_setfield(L,-2,"ANTIALIAS");
	lua_pushnumber(L,osg::StateAttribute::COLORTABLE); lua_setfield(L,-2,"COLORTABLE");
	lua_pushnumber(L,osg::StateAttribute::CULLFACE); lua_setfield(L,-2,"CULLFACE");
	lua_pushnumber(L,osg::StateAttribute::FOG); lua_setfield(L,-2,"FOG");
	lua_pushnumber(L,osg::StateAttribute::FRONTFACE); lua_setfield(L,-2,"FRONTFACE");
	lua_pushnumber(L,osg::StateAttribute::LIGHT); lua_setfield(L,-2,"LIGHT");
	lua_pushnumber(L,osg::StateAttribute::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osg::StateAttribute::LINEWIDTH); lua_setfield(L,-2,"LINEWIDTH");
	lua_pushnumber(L,osg::StateAttribute::LINESTIPPLE); lua_setfield(L,-2,"LINESTIPPLE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONSTIPPLE); lua_setfield(L,-2,"POLYGONSTIPPLE");
	lua_pushnumber(L,osg::StateAttribute::SHADEMODEL); lua_setfield(L,-2,"SHADEMODEL");
	lua_pushnumber(L,osg::StateAttribute::TEXENV); lua_setfield(L,-2,"TEXENV");
	lua_pushnumber(L,osg::StateAttribute::TEXENVFILTER); lua_setfield(L,-2,"TEXENVFILTER");
	lua_pushnumber(L,osg::StateAttribute::TEXGEN); lua_setfield(L,-2,"TEXGEN");
	lua_pushnumber(L,osg::StateAttribute::TEXMAT); lua_setfield(L,-2,"TEXMAT");
	lua_pushnumber(L,osg::StateAttribute::LIGHTMODEL); lua_setfield(L,-2,"LIGHTMODEL");
	lua_pushnumber(L,osg::StateAttribute::BLENDFUNC); lua_setfield(L,-2,"BLENDFUNC");
	lua_pushnumber(L,osg::StateAttribute::BLENDEQUATION); lua_setfield(L,-2,"BLENDEQUATION");
	lua_pushnumber(L,osg::StateAttribute::LOGICOP); lua_setfield(L,-2,"LOGICOP");
	lua_pushnumber(L,osg::StateAttribute::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,osg::StateAttribute::COLORMASK); lua_setfield(L,-2,"COLORMASK");
	lua_pushnumber(L,osg::StateAttribute::DEPTH); lua_setfield(L,-2,"DEPTH");
	lua_pushnumber(L,osg::StateAttribute::VIEWPORT); lua_setfield(L,-2,"VIEWPORT");
	lua_pushnumber(L,osg::StateAttribute::SCISSOR); lua_setfield(L,-2,"SCISSOR");
	lua_pushnumber(L,osg::StateAttribute::BLENDCOLOR); lua_setfield(L,-2,"BLENDCOLOR");
	lua_pushnumber(L,osg::StateAttribute::MULTISAMPLE); lua_setfield(L,-2,"MULTISAMPLE");
	lua_pushnumber(L,osg::StateAttribute::CLIPPLANE); lua_setfield(L,-2,"CLIPPLANE");
	lua_pushnumber(L,osg::StateAttribute::COLORMATRIX); lua_setfield(L,-2,"COLORMATRIX");
	lua_pushnumber(L,osg::StateAttribute::VERTEXPROGRAM); lua_setfield(L,-2,"VERTEXPROGRAM");
	lua_pushnumber(L,osg::StateAttribute::FRAGMENTPROGRAM); lua_setfield(L,-2,"FRAGMENTPROGRAM");
	lua_pushnumber(L,osg::StateAttribute::POINTSPRITE); lua_setfield(L,-2,"POINTSPRITE");
	lua_pushnumber(L,osg::StateAttribute::PROGRAM); lua_setfield(L,-2,"PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::CLAMPCOLOR); lua_setfield(L,-2,"CLAMPCOLOR");
	lua_pushnumber(L,osg::StateAttribute::HINT); lua_setfield(L,-2,"HINT");
	lua_pushnumber(L,osg::StateAttribute::VALIDATOR); lua_setfield(L,-2,"VALIDATOR");
	lua_pushnumber(L,osg::StateAttribute::VIEWMATRIXEXTRACTOR); lua_setfield(L,-2,"VIEWMATRIXEXTRACTOR");
	lua_pushnumber(L,osg::StateAttribute::OSGNV_PARAMETER_BLOCK); lua_setfield(L,-2,"OSGNV_PARAMETER_BLOCK");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_TEXTURE_SHADER); lua_setfield(L,-2,"OSGNVEXT_TEXTURE_SHADER");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_VERTEX_PROGRAM); lua_setfield(L,-2,"OSGNVEXT_VERTEX_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_REGISTER_COMBINERS); lua_setfield(L,-2,"OSGNVEXT_REGISTER_COMBINERS");
	lua_pushnumber(L,osg::StateAttribute::OSGNVCG_PROGRAM); lua_setfield(L,-2,"OSGNVCG_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVSLANG_PROGRAM); lua_setfield(L,-2,"OSGNVSLANG_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVPARSE_PROGRAM_PARSER); lua_setfield(L,-2,"OSGNVPARSE_PROGRAM_PARSER");
	lua_pushnumber(L,osg::StateAttribute::UNIFORMBUFFERBINDING); lua_setfield(L,-2,"UNIFORMBUFFERBINDING");
	lua_pushnumber(L,osg::StateAttribute::TRANSFORMFEEDBACKBUFFERBINDING); lua_setfield(L,-2,"TRANSFORMFEEDBACKBUFFERBINDING");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::StateAttribute::TEXTURE); lua_setfield(L,-2,"TEXTURE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONMODE); lua_setfield(L,-2,"POLYGONMODE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONOFFSET); lua_setfield(L,-2,"POLYGONOFFSET");
	lua_pushnumber(L,osg::StateAttribute::MATERIAL); lua_setfield(L,-2,"MATERIAL");
	lua_pushnumber(L,osg::StateAttribute::ALPHAFUNC); lua_setfield(L,-2,"ALPHAFUNC");
	lua_pushnumber(L,osg::StateAttribute::ANTIALIAS); lua_setfield(L,-2,"ANTIALIAS");
	lua_pushnumber(L,osg::StateAttribute::COLORTABLE); lua_setfield(L,-2,"COLORTABLE");
	lua_pushnumber(L,osg::StateAttribute::CULLFACE); lua_setfield(L,-2,"CULLFACE");
	lua_pushnumber(L,osg::StateAttribute::FOG); lua_setfield(L,-2,"FOG");
	lua_pushnumber(L,osg::StateAttribute::FRONTFACE); lua_setfield(L,-2,"FRONTFACE");
	lua_pushnumber(L,osg::StateAttribute::LIGHT); lua_setfield(L,-2,"LIGHT");
	lua_pushnumber(L,osg::StateAttribute::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osg::StateAttribute::LINEWIDTH); lua_setfield(L,-2,"LINEWIDTH");
	lua_pushnumber(L,osg::StateAttribute::LINESTIPPLE); lua_setfield(L,-2,"LINESTIPPLE");
	lua_pushnumber(L,osg::StateAttribute::POLYGONSTIPPLE); lua_setfield(L,-2,"POLYGONSTIPPLE");
	lua_pushnumber(L,osg::StateAttribute::SHADEMODEL); lua_setfield(L,-2,"SHADEMODEL");
	lua_pushnumber(L,osg::StateAttribute::TEXENV); lua_setfield(L,-2,"TEXENV");
	lua_pushnumber(L,osg::StateAttribute::TEXENVFILTER); lua_setfield(L,-2,"TEXENVFILTER");
	lua_pushnumber(L,osg::StateAttribute::TEXGEN); lua_setfield(L,-2,"TEXGEN");
	lua_pushnumber(L,osg::StateAttribute::TEXMAT); lua_setfield(L,-2,"TEXMAT");
	lua_pushnumber(L,osg::StateAttribute::LIGHTMODEL); lua_setfield(L,-2,"LIGHTMODEL");
	lua_pushnumber(L,osg::StateAttribute::BLENDFUNC); lua_setfield(L,-2,"BLENDFUNC");
	lua_pushnumber(L,osg::StateAttribute::BLENDEQUATION); lua_setfield(L,-2,"BLENDEQUATION");
	lua_pushnumber(L,osg::StateAttribute::LOGICOP); lua_setfield(L,-2,"LOGICOP");
	lua_pushnumber(L,osg::StateAttribute::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,osg::StateAttribute::COLORMASK); lua_setfield(L,-2,"COLORMASK");
	lua_pushnumber(L,osg::StateAttribute::DEPTH); lua_setfield(L,-2,"DEPTH");
	lua_pushnumber(L,osg::StateAttribute::VIEWPORT); lua_setfield(L,-2,"VIEWPORT");
	lua_pushnumber(L,osg::StateAttribute::SCISSOR); lua_setfield(L,-2,"SCISSOR");
	lua_pushnumber(L,osg::StateAttribute::BLENDCOLOR); lua_setfield(L,-2,"BLENDCOLOR");
	lua_pushnumber(L,osg::StateAttribute::MULTISAMPLE); lua_setfield(L,-2,"MULTISAMPLE");
	lua_pushnumber(L,osg::StateAttribute::CLIPPLANE); lua_setfield(L,-2,"CLIPPLANE");
	lua_pushnumber(L,osg::StateAttribute::COLORMATRIX); lua_setfield(L,-2,"COLORMATRIX");
	lua_pushnumber(L,osg::StateAttribute::VERTEXPROGRAM); lua_setfield(L,-2,"VERTEXPROGRAM");
	lua_pushnumber(L,osg::StateAttribute::FRAGMENTPROGRAM); lua_setfield(L,-2,"FRAGMENTPROGRAM");
	lua_pushnumber(L,osg::StateAttribute::POINTSPRITE); lua_setfield(L,-2,"POINTSPRITE");
	lua_pushnumber(L,osg::StateAttribute::PROGRAM); lua_setfield(L,-2,"PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::CLAMPCOLOR); lua_setfield(L,-2,"CLAMPCOLOR");
	lua_pushnumber(L,osg::StateAttribute::HINT); lua_setfield(L,-2,"HINT");
	lua_pushnumber(L,osg::StateAttribute::VALIDATOR); lua_setfield(L,-2,"VALIDATOR");
	lua_pushnumber(L,osg::StateAttribute::VIEWMATRIXEXTRACTOR); lua_setfield(L,-2,"VIEWMATRIXEXTRACTOR");
	lua_pushnumber(L,osg::StateAttribute::OSGNV_PARAMETER_BLOCK); lua_setfield(L,-2,"OSGNV_PARAMETER_BLOCK");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_TEXTURE_SHADER); lua_setfield(L,-2,"OSGNVEXT_TEXTURE_SHADER");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_VERTEX_PROGRAM); lua_setfield(L,-2,"OSGNVEXT_VERTEX_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVEXT_REGISTER_COMBINERS); lua_setfield(L,-2,"OSGNVEXT_REGISTER_COMBINERS");
	lua_pushnumber(L,osg::StateAttribute::OSGNVCG_PROGRAM); lua_setfield(L,-2,"OSGNVCG_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVSLANG_PROGRAM); lua_setfield(L,-2,"OSGNVSLANG_PROGRAM");
	lua_pushnumber(L,osg::StateAttribute::OSGNVPARSE_PROGRAM_PARSER); lua_setfield(L,-2,"OSGNVPARSE_PROGRAM_PARSER");
	lua_pushnumber(L,osg::StateAttribute::UNIFORMBUFFERBINDING); lua_setfield(L,-2,"UNIFORMBUFFERBINDING");
	lua_pushnumber(L,osg::StateAttribute::TRANSFORMFEEDBACKBUFFERBINDING); lua_setfield(L,-2,"TRANSFORMFEEDBACKBUFFERBINDING");


	lua_newtable(L); // enum RenderingHint

	lua_pushnumber(L,osg::StateSet::DEFAULT_BIN); lua_setfield(L,-2,"DEFAULT_BIN");
	lua_pushnumber(L,osg::StateSet::OPAQUE_BIN); lua_setfield(L,-2,"OPAQUE_BIN");
	lua_pushnumber(L,osg::StateSet::TRANSPARENT_BIN); lua_setfield(L,-2,"TRANSPARENT_BIN");

	lua_setfield(L,-2,"RenderingHint");

	lua_pushnumber(L,osg::StateSet::DEFAULT_BIN); lua_setfield(L,-2,"DEFAULT_BIN");
	lua_pushnumber(L,osg::StateSet::OPAQUE_BIN); lua_setfield(L,-2,"OPAQUE_BIN");
	lua_pushnumber(L,osg::StateSet::TRANSPARENT_BIN); lua_setfield(L,-2,"TRANSPARENT_BIN");


	lua_newtable(L); // enum RenderBinMode

	lua_pushnumber(L,osg::StateSet::INHERIT_RENDERBIN_DETAILS); lua_setfield(L,-2,"INHERIT_RENDERBIN_DETAILS");
	lua_pushnumber(L,osg::StateSet::USE_RENDERBIN_DETAILS); lua_setfield(L,-2,"USE_RENDERBIN_DETAILS");
	lua_pushnumber(L,osg::StateSet::OVERRIDE_RENDERBIN_DETAILS); lua_setfield(L,-2,"OVERRIDE_RENDERBIN_DETAILS");

	lua_setfield(L,-2,"RenderBinMode");

	lua_pushnumber(L,osg::StateSet::INHERIT_RENDERBIN_DETAILS); lua_setfield(L,-2,"INHERIT_RENDERBIN_DETAILS");
	lua_pushnumber(L,osg::StateSet::USE_RENDERBIN_DETAILS); lua_setfield(L,-2,"USE_RENDERBIN_DETAILS");
	lua_pushnumber(L,osg::StateSet::OVERRIDE_RENDERBIN_DETAILS); lua_setfield(L,-2,"OVERRIDE_RENDERBIN_DETAILS");


	lua_newtable(L); // enum Function

	lua_pushnumber(L,osg::Stencil::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Stencil::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Stencil::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Stencil::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Stencil::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Stencil::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Stencil::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Stencil::ALWAYS); lua_setfield(L,-2,"ALWAYS");

	lua_setfield(L,-2,"Function");

	lua_pushnumber(L,osg::Stencil::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Stencil::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Stencil::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Stencil::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Stencil::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Stencil::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Stencil::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Stencil::ALWAYS); lua_setfield(L,-2,"ALWAYS");


	lua_newtable(L); // enum Operation

	lua_pushnumber(L,osg::Stencil::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,osg::Stencil::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,osg::Stencil::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::Stencil::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,osg::Stencil::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,osg::Stencil::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::Stencil::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,osg::Stencil::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");

	lua_setfield(L,-2,"Operation");

	lua_pushnumber(L,osg::Stencil::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,osg::Stencil::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,osg::Stencil::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::Stencil::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,osg::Stencil::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,osg::Stencil::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::Stencil::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,osg::Stencil::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");


	lua_newtable(L); // enum Face

	lua_pushnumber(L,osg::StencilTwoSided::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::StencilTwoSided::BACK); lua_setfield(L,-2,"BACK");

	lua_setfield(L,-2,"Face");

	lua_pushnumber(L,osg::StencilTwoSided::FRONT); lua_setfield(L,-2,"FRONT");
	lua_pushnumber(L,osg::StencilTwoSided::BACK); lua_setfield(L,-2,"BACK");


	lua_newtable(L); // enum Function

	lua_pushnumber(L,osg::StencilTwoSided::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::StencilTwoSided::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::StencilTwoSided::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::StencilTwoSided::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::ALWAYS); lua_setfield(L,-2,"ALWAYS");

	lua_setfield(L,-2,"Function");

	lua_pushnumber(L,osg::StencilTwoSided::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::StencilTwoSided::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::StencilTwoSided::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::StencilTwoSided::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::StencilTwoSided::ALWAYS); lua_setfield(L,-2,"ALWAYS");


	lua_newtable(L); // enum Operation

	lua_pushnumber(L,osg::StencilTwoSided::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,osg::StencilTwoSided::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,osg::StencilTwoSided::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::StencilTwoSided::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,osg::StencilTwoSided::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,osg::StencilTwoSided::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::StencilTwoSided::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,osg::StencilTwoSided::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");

	lua_setfield(L,-2,"Operation");

	lua_pushnumber(L,osg::StencilTwoSided::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,osg::StencilTwoSided::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,osg::StencilTwoSided::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::StencilTwoSided::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,osg::StencilTwoSided::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,osg::StencilTwoSided::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,osg::StencilTwoSided::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,osg::StencilTwoSided::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::TexEnv::DECAL); lua_setfield(L,-2,"DECAL");
	lua_pushnumber(L,osg::TexEnv::MODULATE); lua_setfield(L,-2,"MODULATE");
	lua_pushnumber(L,osg::TexEnv::BLEND); lua_setfield(L,-2,"BLEND");
	lua_pushnumber(L,osg::TexEnv::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::TexEnv::ADD); lua_setfield(L,-2,"ADD");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::TexEnv::DECAL); lua_setfield(L,-2,"DECAL");
	lua_pushnumber(L,osg::TexEnv::MODULATE); lua_setfield(L,-2,"MODULATE");
	lua_pushnumber(L,osg::TexEnv::BLEND); lua_setfield(L,-2,"BLEND");
	lua_pushnumber(L,osg::TexEnv::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::TexEnv::ADD); lua_setfield(L,-2,"ADD");


	lua_newtable(L); // enum CombineParam

	lua_pushnumber(L,osg::TexEnvCombine::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::TexEnvCombine::MODULATE); lua_setfield(L,-2,"MODULATE");
	lua_pushnumber(L,osg::TexEnvCombine::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,osg::TexEnvCombine::ADD_SIGNED); lua_setfield(L,-2,"ADD_SIGNED");
	lua_pushnumber(L,osg::TexEnvCombine::INTERPOLATE); lua_setfield(L,-2,"INTERPOLATE");
	lua_pushnumber(L,osg::TexEnvCombine::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,osg::TexEnvCombine::DOT3_RGB); lua_setfield(L,-2,"DOT3_RGB");
	lua_pushnumber(L,osg::TexEnvCombine::DOT3_RGBA); lua_setfield(L,-2,"DOT3_RGBA");

	lua_setfield(L,-2,"CombineParam");

	lua_pushnumber(L,osg::TexEnvCombine::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,osg::TexEnvCombine::MODULATE); lua_setfield(L,-2,"MODULATE");
	lua_pushnumber(L,osg::TexEnvCombine::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,osg::TexEnvCombine::ADD_SIGNED); lua_setfield(L,-2,"ADD_SIGNED");
	lua_pushnumber(L,osg::TexEnvCombine::INTERPOLATE); lua_setfield(L,-2,"INTERPOLATE");
	lua_pushnumber(L,osg::TexEnvCombine::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,osg::TexEnvCombine::DOT3_RGB); lua_setfield(L,-2,"DOT3_RGB");
	lua_pushnumber(L,osg::TexEnvCombine::DOT3_RGBA); lua_setfield(L,-2,"DOT3_RGBA");


	lua_newtable(L); // enum SourceParam

	lua_pushnumber(L,osg::TexEnvCombine::CONSTANT); lua_setfield(L,-2,"CONSTANT");
	lua_pushnumber(L,osg::TexEnvCombine::PRIMARY_COLOR); lua_setfield(L,-2,"PRIMARY_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::PREVIOUS); lua_setfield(L,-2,"PREVIOUS");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE); lua_setfield(L,-2,"TEXTURE");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE0); lua_setfield(L,-2,"TEXTURE0");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE1); lua_setfield(L,-2,"TEXTURE1");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE2); lua_setfield(L,-2,"TEXTURE2");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE3); lua_setfield(L,-2,"TEXTURE3");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE4); lua_setfield(L,-2,"TEXTURE4");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE5); lua_setfield(L,-2,"TEXTURE5");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE6); lua_setfield(L,-2,"TEXTURE6");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE7); lua_setfield(L,-2,"TEXTURE7");

	lua_setfield(L,-2,"SourceParam");

	lua_pushnumber(L,osg::TexEnvCombine::CONSTANT); lua_setfield(L,-2,"CONSTANT");
	lua_pushnumber(L,osg::TexEnvCombine::PRIMARY_COLOR); lua_setfield(L,-2,"PRIMARY_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::PREVIOUS); lua_setfield(L,-2,"PREVIOUS");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE); lua_setfield(L,-2,"TEXTURE");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE0); lua_setfield(L,-2,"TEXTURE0");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE1); lua_setfield(L,-2,"TEXTURE1");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE2); lua_setfield(L,-2,"TEXTURE2");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE3); lua_setfield(L,-2,"TEXTURE3");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE4); lua_setfield(L,-2,"TEXTURE4");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE5); lua_setfield(L,-2,"TEXTURE5");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE6); lua_setfield(L,-2,"TEXTURE6");
	lua_pushnumber(L,osg::TexEnvCombine::TEXTURE7); lua_setfield(L,-2,"TEXTURE7");


	lua_newtable(L); // enum OperandParam

	lua_pushnumber(L,osg::TexEnvCombine::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,osg::TexEnvCombine::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");

	lua_setfield(L,-2,"OperandParam");

	lua_pushnumber(L,osg::TexEnvCombine::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,osg::TexEnvCombine::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,osg::TexEnvCombine::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osg::TexGen::OBJECT_LINEAR); lua_setfield(L,-2,"OBJECT_LINEAR");
	lua_pushnumber(L,osg::TexGen::EYE_LINEAR); lua_setfield(L,-2,"EYE_LINEAR");
	lua_pushnumber(L,osg::TexGen::SPHERE_MAP); lua_setfield(L,-2,"SPHERE_MAP");
	lua_pushnumber(L,osg::TexGen::NORMAL_MAP); lua_setfield(L,-2,"NORMAL_MAP");
	lua_pushnumber(L,osg::TexGen::REFLECTION_MAP); lua_setfield(L,-2,"REFLECTION_MAP");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osg::TexGen::OBJECT_LINEAR); lua_setfield(L,-2,"OBJECT_LINEAR");
	lua_pushnumber(L,osg::TexGen::EYE_LINEAR); lua_setfield(L,-2,"EYE_LINEAR");
	lua_pushnumber(L,osg::TexGen::SPHERE_MAP); lua_setfield(L,-2,"SPHERE_MAP");
	lua_pushnumber(L,osg::TexGen::NORMAL_MAP); lua_setfield(L,-2,"NORMAL_MAP");
	lua_pushnumber(L,osg::TexGen::REFLECTION_MAP); lua_setfield(L,-2,"REFLECTION_MAP");


	lua_newtable(L); // enum Coord

	lua_pushnumber(L,osg::TexGen::S); lua_setfield(L,-2,"S");
	lua_pushnumber(L,osg::TexGen::T); lua_setfield(L,-2,"T");
	lua_pushnumber(L,osg::TexGen::R); lua_setfield(L,-2,"R");
	lua_pushnumber(L,osg::TexGen::Q); lua_setfield(L,-2,"Q");

	lua_setfield(L,-2,"Coord");

	lua_pushnumber(L,osg::TexGen::S); lua_setfield(L,-2,"S");
	lua_pushnumber(L,osg::TexGen::T); lua_setfield(L,-2,"T");
	lua_pushnumber(L,osg::TexGen::R); lua_setfield(L,-2,"R");
	lua_pushnumber(L,osg::TexGen::Q); lua_setfield(L,-2,"Q");


	lua_newtable(L); // enum ReferenceFrame

	lua_pushnumber(L,osg::TexGenNode::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::TexGenNode::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");

	lua_setfield(L,-2,"ReferenceFrame");

	lua_pushnumber(L,osg::TexGenNode::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::TexGenNode::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");


	lua_newtable(L); // enum WrapParameter

	lua_pushnumber(L,osg::Texture::WRAP_S); lua_setfield(L,-2,"WRAP_S");
	lua_pushnumber(L,osg::Texture::WRAP_T); lua_setfield(L,-2,"WRAP_T");
	lua_pushnumber(L,osg::Texture::WRAP_R); lua_setfield(L,-2,"WRAP_R");

	lua_setfield(L,-2,"WrapParameter");

	lua_pushnumber(L,osg::Texture::WRAP_S); lua_setfield(L,-2,"WRAP_S");
	lua_pushnumber(L,osg::Texture::WRAP_T); lua_setfield(L,-2,"WRAP_T");
	lua_pushnumber(L,osg::Texture::WRAP_R); lua_setfield(L,-2,"WRAP_R");


	lua_newtable(L); // enum WrapMode

	lua_pushnumber(L,osg::Texture::CLAMP); lua_setfield(L,-2,"CLAMP");
	lua_pushnumber(L,osg::Texture::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,osg::Texture::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,osg::Texture::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,osg::Texture::MIRROR); lua_setfield(L,-2,"MIRROR");

	lua_setfield(L,-2,"WrapMode");

	lua_pushnumber(L,osg::Texture::CLAMP); lua_setfield(L,-2,"CLAMP");
	lua_pushnumber(L,osg::Texture::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,osg::Texture::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,osg::Texture::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,osg::Texture::MIRROR); lua_setfield(L,-2,"MIRROR");


	lua_newtable(L); // enum FilterParameter

	lua_pushnumber(L,osg::Texture::MIN_FILTER); lua_setfield(L,-2,"MIN_FILTER");
	lua_pushnumber(L,osg::Texture::MAG_FILTER); lua_setfield(L,-2,"MAG_FILTER");

	lua_setfield(L,-2,"FilterParameter");

	lua_pushnumber(L,osg::Texture::MIN_FILTER); lua_setfield(L,-2,"MIN_FILTER");
	lua_pushnumber(L,osg::Texture::MAG_FILTER); lua_setfield(L,-2,"MAG_FILTER");


	lua_newtable(L); // enum FilterMode

	lua_pushnumber(L,osg::Texture::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osg::Texture::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");
	lua_pushnumber(L,osg::Texture::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,osg::Texture::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,osg::Texture::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,osg::Texture::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");

	lua_setfield(L,-2,"FilterMode");

	lua_pushnumber(L,osg::Texture::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osg::Texture::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");
	lua_pushnumber(L,osg::Texture::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,osg::Texture::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,osg::Texture::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,osg::Texture::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");


	lua_newtable(L); // enum InternalFormatMode

	lua_pushnumber(L,osg::Texture::USE_IMAGE_DATA_FORMAT); lua_setfield(L,-2,"USE_IMAGE_DATA_FORMAT");
	lua_pushnumber(L,osg::Texture::USE_USER_DEFINED_FORMAT); lua_setfield(L,-2,"USE_USER_DEFINED_FORMAT");
	lua_pushnumber(L,osg::Texture::USE_ARB_COMPRESSION); lua_setfield(L,-2,"USE_ARB_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT3_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT3_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT5_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT5_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_PVRTC_2BPP_COMPRESSION); lua_setfield(L,-2,"USE_PVRTC_2BPP_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_PVRTC_4BPP_COMPRESSION); lua_setfield(L,-2,"USE_PVRTC_4BPP_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_ETC_COMPRESSION); lua_setfield(L,-2,"USE_ETC_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_RGTC1_COMPRESSION); lua_setfield(L,-2,"USE_RGTC1_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_RGTC2_COMPRESSION); lua_setfield(L,-2,"USE_RGTC2_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1c_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1c_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1a_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1a_COMPRESSION");

	lua_setfield(L,-2,"InternalFormatMode");

	lua_pushnumber(L,osg::Texture::USE_IMAGE_DATA_FORMAT); lua_setfield(L,-2,"USE_IMAGE_DATA_FORMAT");
	lua_pushnumber(L,osg::Texture::USE_USER_DEFINED_FORMAT); lua_setfield(L,-2,"USE_USER_DEFINED_FORMAT");
	lua_pushnumber(L,osg::Texture::USE_ARB_COMPRESSION); lua_setfield(L,-2,"USE_ARB_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT3_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT3_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT5_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT5_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_PVRTC_2BPP_COMPRESSION); lua_setfield(L,-2,"USE_PVRTC_2BPP_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_PVRTC_4BPP_COMPRESSION); lua_setfield(L,-2,"USE_PVRTC_4BPP_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_ETC_COMPRESSION); lua_setfield(L,-2,"USE_ETC_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_RGTC1_COMPRESSION); lua_setfield(L,-2,"USE_RGTC1_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_RGTC2_COMPRESSION); lua_setfield(L,-2,"USE_RGTC2_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1c_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1c_COMPRESSION");
	lua_pushnumber(L,osg::Texture::USE_S3TC_DXT1a_COMPRESSION); lua_setfield(L,-2,"USE_S3TC_DXT1a_COMPRESSION");


	lua_newtable(L); // enum InternalFormatType

	lua_pushnumber(L,osg::Texture::NORMALIZED); lua_setfield(L,-2,"NORMALIZED");
	lua_pushnumber(L,osg::Texture::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,osg::Texture::SIGNED_INTEGER); lua_setfield(L,-2,"SIGNED_INTEGER");
	lua_pushnumber(L,osg::Texture::UNSIGNED_INTEGER); lua_setfield(L,-2,"UNSIGNED_INTEGER");

	lua_setfield(L,-2,"InternalFormatType");

	lua_pushnumber(L,osg::Texture::NORMALIZED); lua_setfield(L,-2,"NORMALIZED");
	lua_pushnumber(L,osg::Texture::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,osg::Texture::SIGNED_INTEGER); lua_setfield(L,-2,"SIGNED_INTEGER");
	lua_pushnumber(L,osg::Texture::UNSIGNED_INTEGER); lua_setfield(L,-2,"UNSIGNED_INTEGER");


	lua_newtable(L); // enum ShadowCompareFunc

	lua_pushnumber(L,osg::Texture::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Texture::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Texture::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Texture::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Texture::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Texture::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Texture::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Texture::ALWAYS); lua_setfield(L,-2,"ALWAYS");

	lua_setfield(L,-2,"ShadowCompareFunc");

	lua_pushnumber(L,osg::Texture::NEVER); lua_setfield(L,-2,"NEVER");
	lua_pushnumber(L,osg::Texture::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,osg::Texture::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,osg::Texture::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,osg::Texture::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,osg::Texture::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,osg::Texture::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,osg::Texture::ALWAYS); lua_setfield(L,-2,"ALWAYS");


	lua_newtable(L); // enum ShadowTextureMode

	lua_pushnumber(L,osg::Texture::LUMINANCE); lua_setfield(L,-2,"LUMINANCE");
	lua_pushnumber(L,osg::Texture::INTENSITY); lua_setfield(L,-2,"INTENSITY");
	lua_pushnumber(L,osg::Texture::ALPHA); lua_setfield(L,-2,"ALPHA");

	lua_setfield(L,-2,"ShadowTextureMode");

	lua_pushnumber(L,osg::Texture::LUMINANCE); lua_setfield(L,-2,"LUMINANCE");
	lua_pushnumber(L,osg::Texture::INTENSITY); lua_setfield(L,-2,"INTENSITY");
	lua_pushnumber(L,osg::Texture::ALPHA); lua_setfield(L,-2,"ALPHA");


	lua_newtable(L); // enum GenerateMipmapMode

	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP_NONE); lua_setfield(L,-2,"GENERATE_MIPMAP_NONE");
	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP); lua_setfield(L,-2,"GENERATE_MIPMAP");
	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP_TEX_PARAMETER); lua_setfield(L,-2,"GENERATE_MIPMAP_TEX_PARAMETER");

	lua_setfield(L,-2,"GenerateMipmapMode");

	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP_NONE); lua_setfield(L,-2,"GENERATE_MIPMAP_NONE");
	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP); lua_setfield(L,-2,"GENERATE_MIPMAP");
	lua_pushnumber(L,osg::Texture::GENERATE_MIPMAP_TEX_PARAMETER); lua_setfield(L,-2,"GENERATE_MIPMAP_TEX_PARAMETER");


	lua_newtable(L); // enum Face

	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");

	lua_setfield(L,-2,"Face");

	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,osg::TextureCubeMap::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,osg::TextureCubeMap::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");


	lua_newtable(L); // enum ReferenceFrame

	lua_pushnumber(L,osg::Transform::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::Transform::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");
	lua_pushnumber(L,osg::Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT); lua_setfield(L,-2,"ABSOLUTE_RF_INHERIT_VIEWPOINT");

	lua_setfield(L,-2,"ReferenceFrame");

	lua_pushnumber(L,osg::Transform::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osg::Transform::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");
	lua_pushnumber(L,osg::Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT); lua_setfield(L,-2,"ABSOLUTE_RF_INHERIT_VIEWPOINT");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osg::Uniform::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC2); lua_setfield(L,-2,"FLOAT_VEC2");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC3); lua_setfield(L,-2,"FLOAT_VEC3");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC4); lua_setfield(L,-2,"FLOAT_VEC4");
	lua_pushnumber(L,osg::Uniform::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,osg::Uniform::INT_VEC2); lua_setfield(L,-2,"INT_VEC2");
	lua_pushnumber(L,osg::Uniform::INT_VEC3); lua_setfield(L,-2,"INT_VEC3");
	lua_pushnumber(L,osg::Uniform::INT_VEC4); lua_setfield(L,-2,"INT_VEC4");
	lua_pushnumber(L,osg::Uniform::BOOL); lua_setfield(L,-2,"BOOL");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC2); lua_setfield(L,-2,"BOOL_VEC2");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC3); lua_setfield(L,-2,"BOOL_VEC3");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC4); lua_setfield(L,-2,"BOOL_VEC4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2); lua_setfield(L,-2,"FLOAT_MAT2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3); lua_setfield(L,-2,"FLOAT_MAT3");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4); lua_setfield(L,-2,"FLOAT_MAT4");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_SHADOW); lua_setfield(L,-2,"SAMPLER_1D_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_SHADOW); lua_setfield(L,-2,"SAMPLER_2D_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_ARRAY_SHADOW); lua_setfield(L,-2,"SAMPLER_1D_ARRAY_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_ARRAY_SHADOW); lua_setfield(L,-2,"SAMPLER_2D_ARRAY_SHADOW");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2x3); lua_setfield(L,-2,"FLOAT_MAT2x3");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2x4); lua_setfield(L,-2,"FLOAT_MAT2x4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3x2); lua_setfield(L,-2,"FLOAT_MAT3x2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3x4); lua_setfield(L,-2,"FLOAT_MAT3x4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4x2); lua_setfield(L,-2,"FLOAT_MAT4x2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4x3); lua_setfield(L,-2,"FLOAT_MAT4x3");
	lua_pushnumber(L,osg::Uniform::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::SAMPLER_CUBE_SHADOW); lua_setfield(L,-2,"SAMPLER_CUBE_SHADOW");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC2); lua_setfield(L,-2,"UNSIGNED_INT_VEC2");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC3); lua_setfield(L,-2,"UNSIGNED_INT_VEC3");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC4); lua_setfield(L,-2,"UNSIGNED_INT_VEC4");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::UNDEFINED); lua_setfield(L,-2,"UNDEFINED");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osg::Uniform::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC2); lua_setfield(L,-2,"FLOAT_VEC2");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC3); lua_setfield(L,-2,"FLOAT_VEC3");
	lua_pushnumber(L,osg::Uniform::FLOAT_VEC4); lua_setfield(L,-2,"FLOAT_VEC4");
	lua_pushnumber(L,osg::Uniform::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,osg::Uniform::INT_VEC2); lua_setfield(L,-2,"INT_VEC2");
	lua_pushnumber(L,osg::Uniform::INT_VEC3); lua_setfield(L,-2,"INT_VEC3");
	lua_pushnumber(L,osg::Uniform::INT_VEC4); lua_setfield(L,-2,"INT_VEC4");
	lua_pushnumber(L,osg::Uniform::BOOL); lua_setfield(L,-2,"BOOL");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC2); lua_setfield(L,-2,"BOOL_VEC2");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC3); lua_setfield(L,-2,"BOOL_VEC3");
	lua_pushnumber(L,osg::Uniform::BOOL_VEC4); lua_setfield(L,-2,"BOOL_VEC4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2); lua_setfield(L,-2,"FLOAT_MAT2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3); lua_setfield(L,-2,"FLOAT_MAT3");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4); lua_setfield(L,-2,"FLOAT_MAT4");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_SHADOW); lua_setfield(L,-2,"SAMPLER_1D_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_SHADOW); lua_setfield(L,-2,"SAMPLER_2D_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::SAMPLER_1D_ARRAY_SHADOW); lua_setfield(L,-2,"SAMPLER_1D_ARRAY_SHADOW");
	lua_pushnumber(L,osg::Uniform::SAMPLER_2D_ARRAY_SHADOW); lua_setfield(L,-2,"SAMPLER_2D_ARRAY_SHADOW");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2x3); lua_setfield(L,-2,"FLOAT_MAT2x3");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT2x4); lua_setfield(L,-2,"FLOAT_MAT2x4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3x2); lua_setfield(L,-2,"FLOAT_MAT3x2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT3x4); lua_setfield(L,-2,"FLOAT_MAT3x4");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4x2); lua_setfield(L,-2,"FLOAT_MAT4x2");
	lua_pushnumber(L,osg::Uniform::FLOAT_MAT4x3); lua_setfield(L,-2,"FLOAT_MAT4x3");
	lua_pushnumber(L,osg::Uniform::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::SAMPLER_CUBE_SHADOW); lua_setfield(L,-2,"SAMPLER_CUBE_SHADOW");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC2); lua_setfield(L,-2,"UNSIGNED_INT_VEC2");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC3); lua_setfield(L,-2,"UNSIGNED_INT_VEC3");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_VEC4); lua_setfield(L,-2,"UNSIGNED_INT_VEC4");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,osg::Uniform::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,osg::Uniform::UNDEFINED); lua_setfield(L,-2,"UNDEFINED");


	lua_newtable(L); // enum unnamed_1

	lua_pushnumber(L,osg::Vec2b::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_1");

	lua_pushnumber(L,osg::Vec2b::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_2

	lua_pushnumber(L,osg::Vec2d::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_2");

	lua_pushnumber(L,osg::Vec2d::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_3

	lua_pushnumber(L,osg::Vec2f::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_3");

	lua_pushnumber(L,osg::Vec2f::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_4

	lua_pushnumber(L,osg::Vec2s::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_4");

	lua_pushnumber(L,osg::Vec2s::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_5

	lua_pushnumber(L,osg::Vec3b::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_5");

	lua_pushnumber(L,osg::Vec3b::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_6

	lua_pushnumber(L,osg::Vec3d::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_6");

	lua_pushnumber(L,osg::Vec3d::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_7

	lua_pushnumber(L,osg::Vec3f::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_7");

	lua_pushnumber(L,osg::Vec3f::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_8

	lua_pushnumber(L,osg::Vec3s::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_8");

	lua_pushnumber(L,osg::Vec3s::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_9

	lua_pushnumber(L,osg::Vec4b::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_9");

	lua_pushnumber(L,osg::Vec4b::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_10

	lua_pushnumber(L,osg::Vec4d::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_10");

	lua_pushnumber(L,osg::Vec4d::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_11

	lua_pushnumber(L,osg::Vec4f::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_11");

	lua_pushnumber(L,osg::Vec4f::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_12

	lua_pushnumber(L,osg::Vec4s::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_12");

	lua_pushnumber(L,osg::Vec4s::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum unnamed_13

	lua_pushnumber(L,osg::Vec4ub::num_components); lua_setfield(L,-2,"num_components");

	lua_setfield(L,-2,"unnamed_13");

	lua_pushnumber(L,osg::Vec4ub::num_components); lua_setfield(L,-2,"num_components");


	lua_newtable(L); // enum LightingMode

	lua_pushnumber(L,osg::View::NO_LIGHT); lua_setfield(L,-2,"NO_LIGHT");
	lua_pushnumber(L,osg::View::HEADLIGHT); lua_setfield(L,-2,"HEADLIGHT");
	lua_pushnumber(L,osg::View::SKY_LIGHT); lua_setfield(L,-2,"SKY_LIGHT");

	lua_setfield(L,-2,"LightingMode");

	lua_pushnumber(L,osg::View::NO_LIGHT); lua_setfield(L,-2,"NO_LIGHT");
	lua_pushnumber(L,osg::View::HEADLIGHT); lua_setfield(L,-2,"HEADLIGHT");
	lua_pushnumber(L,osg::View::SKY_LIGHT); lua_setfield(L,-2,"SKY_LIGHT");


	lua_newtable(L); // enum CaseSensitivity

	lua_pushnumber(L,osgDB::CASE_SENSITIVE); lua_setfield(L,-2,"CASE_SENSITIVE");
	lua_pushnumber(L,osgDB::CASE_INSENSITIVE); lua_setfield(L,-2,"CASE_INSENSITIVE");

	lua_setfield(L,-2,"CaseSensitivity");

	lua_pushnumber(L,osgDB::CASE_SENSITIVE); lua_setfield(L,-2,"CASE_SENSITIVE");
	lua_pushnumber(L,osgDB::CASE_INSENSITIVE); lua_setfield(L,-2,"CASE_INSENSITIVE");


	lua_newtable(L); // enum FileType

	lua_pushnumber(L,osgDB::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::REGULAR_FILE); lua_setfield(L,-2,"REGULAR_FILE");
	lua_pushnumber(L,osgDB::DIRECTORY); lua_setfield(L,-2,"DIRECTORY");

	lua_setfield(L,-2,"FileType");

	lua_pushnumber(L,osgDB::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::REGULAR_FILE); lua_setfield(L,-2,"REGULAR_FILE");
	lua_pushnumber(L,osgDB::DIRECTORY); lua_setfield(L,-2,"DIRECTORY");


	lua_newtable(L); // enum HttpAuthentication

	lua_pushnumber(L,osgDB::AuthenticationDetails::BASIC); lua_setfield(L,-2,"BASIC");
	lua_pushnumber(L,osgDB::AuthenticationDetails::DIGEST); lua_setfield(L,-2,"DIGEST");
	lua_pushnumber(L,osgDB::AuthenticationDetails::NTLM); lua_setfield(L,-2,"NTLM");
	lua_pushnumber(L,osgDB::AuthenticationDetails::GSSNegotiate); lua_setfield(L,-2,"GSSNegotiate");
	lua_pushnumber(L,osgDB::AuthenticationDetails::ANY); lua_setfield(L,-2,"ANY");
	lua_pushnumber(L,osgDB::AuthenticationDetails::ANYSAFE); lua_setfield(L,-2,"ANYSAFE");

	lua_setfield(L,-2,"HttpAuthentication");

	lua_pushnumber(L,osgDB::AuthenticationDetails::BASIC); lua_setfield(L,-2,"BASIC");
	lua_pushnumber(L,osgDB::AuthenticationDetails::DIGEST); lua_setfield(L,-2,"DIGEST");
	lua_pushnumber(L,osgDB::AuthenticationDetails::NTLM); lua_setfield(L,-2,"NTLM");
	lua_pushnumber(L,osgDB::AuthenticationDetails::GSSNegotiate); lua_setfield(L,-2,"GSSNegotiate");
	lua_pushnumber(L,osgDB::AuthenticationDetails::ANY); lua_setfield(L,-2,"ANY");
	lua_pushnumber(L,osgDB::AuthenticationDetails::ANYSAFE); lua_setfield(L,-2,"ANYSAFE");


	lua_newtable(L); // enum Location

	lua_pushnumber(L,osgDB::FileLocationCallback::LOCAL_FILE); lua_setfield(L,-2,"LOCAL_FILE");
	lua_pushnumber(L,osgDB::FileLocationCallback::REMOTE_FILE); lua_setfield(L,-2,"REMOTE_FILE");

	lua_setfield(L,-2,"Location");

	lua_pushnumber(L,osgDB::FileLocationCallback::LOCAL_FILE); lua_setfield(L,-2,"LOCAL_FILE");
	lua_pushnumber(L,osgDB::FileLocationCallback::REMOTE_FILE); lua_setfield(L,-2,"REMOTE_FILE");


	lua_newtable(L); // enum DrawablePolicy

	lua_pushnumber(L,osgDB::DatabasePager::DO_NOT_MODIFY_DRAWABLE_SETTINGS); lua_setfield(L,-2,"DO_NOT_MODIFY_DRAWABLE_SETTINGS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_DISPLAY_LISTS); lua_setfield(L,-2,"USE_DISPLAY_LISTS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"USE_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_VERTEX_ARRAYS); lua_setfield(L,-2,"USE_VERTEX_ARRAYS");

	lua_setfield(L,-2,"DrawablePolicy");

	lua_pushnumber(L,osgDB::DatabasePager::DO_NOT_MODIFY_DRAWABLE_SETTINGS); lua_setfield(L,-2,"DO_NOT_MODIFY_DRAWABLE_SETTINGS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_DISPLAY_LISTS); lua_setfield(L,-2,"USE_DISPLAY_LISTS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"USE_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgDB::DatabasePager::USE_VERTEX_ARRAYS); lua_setfield(L,-2,"USE_VERTEX_ARRAYS");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_ALL_REQUESTS); lua_setfield(L,-2,"HANDLE_ALL_REQUESTS");
	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_NON_HTTP); lua_setfield(L,-2,"HANDLE_NON_HTTP");
	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_ONLY_HTTP); lua_setfield(L,-2,"HANDLE_ONLY_HTTP");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_ALL_REQUESTS); lua_setfield(L,-2,"HANDLE_ALL_REQUESTS");
	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_NON_HTTP); lua_setfield(L,-2,"HANDLE_NON_HTTP");
	lua_pushnumber(L,osgDB::DatabasePager::DatabaseThread::HANDLE_ONLY_HTTP); lua_setfield(L,-2,"HANDLE_ONLY_HTTP");


	lua_newtable(L); // enum ReadWriteMode

	lua_pushnumber(L,osgDB::DotOsgWrapper::READ_AND_WRITE); lua_setfield(L,-2,"READ_AND_WRITE");
	lua_pushnumber(L,osgDB::DotOsgWrapper::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");

	lua_setfield(L,-2,"ReadWriteMode");

	lua_pushnumber(L,osgDB::DotOsgWrapper::READ_AND_WRITE); lua_setfield(L,-2,"READ_AND_WRITE");
	lua_pushnumber(L,osgDB::DotOsgWrapper::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");


	lua_newtable(L); // enum ImageWindowMode

	lua_pushnumber(L,osgDB::ImageOptions::ALL_IMAGE); lua_setfield(L,-2,"ALL_IMAGE");
	lua_pushnumber(L,osgDB::ImageOptions::RATIO_WINDOW); lua_setfield(L,-2,"RATIO_WINDOW");
	lua_pushnumber(L,osgDB::ImageOptions::PIXEL_WINDOW); lua_setfield(L,-2,"PIXEL_WINDOW");

	lua_setfield(L,-2,"ImageWindowMode");

	lua_pushnumber(L,osgDB::ImageOptions::ALL_IMAGE); lua_setfield(L,-2,"ALL_IMAGE");
	lua_pushnumber(L,osgDB::ImageOptions::RATIO_WINDOW); lua_setfield(L,-2,"RATIO_WINDOW");
	lua_pushnumber(L,osgDB::ImageOptions::PIXEL_WINDOW); lua_setfield(L,-2,"PIXEL_WINDOW");


	lua_newtable(L); // enum ImageSamplingMode

	lua_pushnumber(L,osgDB::ImageOptions::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,osgDB::ImageOptions::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osgDB::ImageOptions::CUBIC); lua_setfield(L,-2,"CUBIC");

	lua_setfield(L,-2,"ImageSamplingMode");

	lua_pushnumber(L,osgDB::ImageOptions::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,osgDB::ImageOptions::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,osgDB::ImageOptions::CUBIC); lua_setfield(L,-2,"CUBIC");


	lua_newtable(L); // enum Mode

	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_ALL_REQUESTS); lua_setfield(L,-2,"HANDLE_ALL_REQUESTS");
	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_NON_HTTP); lua_setfield(L,-2,"HANDLE_NON_HTTP");
	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_ONLY_HTTP); lua_setfield(L,-2,"HANDLE_ONLY_HTTP");

	lua_setfield(L,-2,"Mode");

	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_ALL_REQUESTS); lua_setfield(L,-2,"HANDLE_ALL_REQUESTS");
	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_NON_HTTP); lua_setfield(L,-2,"HANDLE_NON_HTTP");
	lua_pushnumber(L,osgDB::ImagePager::ImageThread::HANDLE_ONLY_HTTP); lua_setfield(L,-2,"HANDLE_ONLY_HTTP");


	lua_newtable(L); // enum CompressionMethod

	lua_pushnumber(L,osgDB::ImageProcessor::USE_CPU); lua_setfield(L,-2,"USE_CPU");
	lua_pushnumber(L,osgDB::ImageProcessor::USE_GPU); lua_setfield(L,-2,"USE_GPU");

	lua_setfield(L,-2,"CompressionMethod");

	lua_pushnumber(L,osgDB::ImageProcessor::USE_CPU); lua_setfield(L,-2,"USE_CPU");
	lua_pushnumber(L,osgDB::ImageProcessor::USE_GPU); lua_setfield(L,-2,"USE_GPU");


	lua_newtable(L); // enum CompressionQuality

	lua_pushnumber(L,osgDB::ImageProcessor::FASTEST); lua_setfield(L,-2,"FASTEST");
	lua_pushnumber(L,osgDB::ImageProcessor::NORMAL); lua_setfield(L,-2,"NORMAL");
	lua_pushnumber(L,osgDB::ImageProcessor::PRODUCTION); lua_setfield(L,-2,"PRODUCTION");
	lua_pushnumber(L,osgDB::ImageProcessor::HIGHEST); lua_setfield(L,-2,"HIGHEST");

	lua_setfield(L,-2,"CompressionQuality");

	lua_pushnumber(L,osgDB::ImageProcessor::FASTEST); lua_setfield(L,-2,"FASTEST");
	lua_pushnumber(L,osgDB::ImageProcessor::NORMAL); lua_setfield(L,-2,"NORMAL");
	lua_pushnumber(L,osgDB::ImageProcessor::PRODUCTION); lua_setfield(L,-2,"PRODUCTION");
	lua_pushnumber(L,osgDB::ImageProcessor::HIGHEST); lua_setfield(L,-2,"HIGHEST");


	lua_newtable(L); // enum unnamed_14

	lua_pushnumber(L,osgDB::Field::MIN_CACHE_SIZE); lua_setfield(L,-2,"MIN_CACHE_SIZE");

	lua_setfield(L,-2,"unnamed_14");

	lua_pushnumber(L,osgDB::Field::MIN_CACHE_SIZE); lua_setfield(L,-2,"MIN_CACHE_SIZE");


	lua_newtable(L); // enum FieldType

	lua_pushnumber(L,osgDB::Field::OPEN_BRACKET); lua_setfield(L,-2,"OPEN_BRACKET");
	lua_pushnumber(L,osgDB::Field::CLOSE_BRACKET); lua_setfield(L,-2,"CLOSE_BRACKET");
	lua_pushnumber(L,osgDB::Field::STRING); lua_setfield(L,-2,"STRING");
	lua_pushnumber(L,osgDB::Field::WORD); lua_setfield(L,-2,"WORD");
	lua_pushnumber(L,osgDB::Field::REAL); lua_setfield(L,-2,"REAL");
	lua_pushnumber(L,osgDB::Field::INTEGER); lua_setfield(L,-2,"INTEGER");
	lua_pushnumber(L,osgDB::Field::BLANK); lua_setfield(L,-2,"BLANK");
	lua_pushnumber(L,osgDB::Field::UNINITIALISED); lua_setfield(L,-2,"UNINITIALISED");

	lua_setfield(L,-2,"FieldType");

	lua_pushnumber(L,osgDB::Field::OPEN_BRACKET); lua_setfield(L,-2,"OPEN_BRACKET");
	lua_pushnumber(L,osgDB::Field::CLOSE_BRACKET); lua_setfield(L,-2,"CLOSE_BRACKET");
	lua_pushnumber(L,osgDB::Field::STRING); lua_setfield(L,-2,"STRING");
	lua_pushnumber(L,osgDB::Field::WORD); lua_setfield(L,-2,"WORD");
	lua_pushnumber(L,osgDB::Field::REAL); lua_setfield(L,-2,"REAL");
	lua_pushnumber(L,osgDB::Field::INTEGER); lua_setfield(L,-2,"INTEGER");
	lua_pushnumber(L,osgDB::Field::BLANK); lua_setfield(L,-2,"BLANK");
	lua_pushnumber(L,osgDB::Field::UNINITIALISED); lua_setfield(L,-2,"UNINITIALISED");


	lua_newtable(L); // enum unnamed_15

	lua_pushnumber(L,osgDB::FieldReaderIterator::MINIMUM_FIELD_READER_QUEUE_SIZE); lua_setfield(L,-2,"MINIMUM_FIELD_READER_QUEUE_SIZE");

	lua_setfield(L,-2,"unnamed_15");

	lua_pushnumber(L,osgDB::FieldReaderIterator::MINIMUM_FIELD_READER_QUEUE_SIZE); lua_setfield(L,-2,"MINIMUM_FIELD_READER_QUEUE_SIZE");


	lua_newtable(L); // enum CacheHintOptions

	lua_pushnumber(L,osgDB::Options::CACHE_NONE); lua_setfield(L,-2,"CACHE_NONE");
	lua_pushnumber(L,osgDB::Options::CACHE_NODES); lua_setfield(L,-2,"CACHE_NODES");
	lua_pushnumber(L,osgDB::Options::CACHE_IMAGES); lua_setfield(L,-2,"CACHE_IMAGES");
	lua_pushnumber(L,osgDB::Options::CACHE_HEIGHTFIELDS); lua_setfield(L,-2,"CACHE_HEIGHTFIELDS");
	lua_pushnumber(L,osgDB::Options::CACHE_ARCHIVES); lua_setfield(L,-2,"CACHE_ARCHIVES");
	lua_pushnumber(L,osgDB::Options::CACHE_OBJECTS); lua_setfield(L,-2,"CACHE_OBJECTS");
	lua_pushnumber(L,osgDB::Options::CACHE_SHADERS); lua_setfield(L,-2,"CACHE_SHADERS");
	lua_pushnumber(L,osgDB::Options::CACHE_ALL); lua_setfield(L,-2,"CACHE_ALL");

	lua_setfield(L,-2,"CacheHintOptions");

	lua_pushnumber(L,osgDB::Options::CACHE_NONE); lua_setfield(L,-2,"CACHE_NONE");
	lua_pushnumber(L,osgDB::Options::CACHE_NODES); lua_setfield(L,-2,"CACHE_NODES");
	lua_pushnumber(L,osgDB::Options::CACHE_IMAGES); lua_setfield(L,-2,"CACHE_IMAGES");
	lua_pushnumber(L,osgDB::Options::CACHE_HEIGHTFIELDS); lua_setfield(L,-2,"CACHE_HEIGHTFIELDS");
	lua_pushnumber(L,osgDB::Options::CACHE_ARCHIVES); lua_setfield(L,-2,"CACHE_ARCHIVES");
	lua_pushnumber(L,osgDB::Options::CACHE_OBJECTS); lua_setfield(L,-2,"CACHE_OBJECTS");
	lua_pushnumber(L,osgDB::Options::CACHE_SHADERS); lua_setfield(L,-2,"CACHE_SHADERS");
	lua_pushnumber(L,osgDB::Options::CACHE_ALL); lua_setfield(L,-2,"CACHE_ALL");


	lua_newtable(L); // enum PrecisionHint

	lua_pushnumber(L,osgDB::Options::FLOAT_PRECISION_ALL); lua_setfield(L,-2,"FLOAT_PRECISION_ALL");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_VERTEX); lua_setfield(L,-2,"DOUBLE_PRECISION_VERTEX");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_NORMAL); lua_setfield(L,-2,"DOUBLE_PRECISION_NORMAL");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_COLOR); lua_setfield(L,-2,"DOUBLE_PRECISION_COLOR");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_SECONDARY_COLOR); lua_setfield(L,-2,"DOUBLE_PRECISION_SECONDARY_COLOR");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_FOG_COORD); lua_setfield(L,-2,"DOUBLE_PRECISION_FOG_COORD");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_TEX_COORD); lua_setfield(L,-2,"DOUBLE_PRECISION_TEX_COORD");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_VERTEX_ATTRIB); lua_setfield(L,-2,"DOUBLE_PRECISION_VERTEX_ATTRIB");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_ALL); lua_setfield(L,-2,"DOUBLE_PRECISION_ALL");

	lua_setfield(L,-2,"PrecisionHint");

	lua_pushnumber(L,osgDB::Options::FLOAT_PRECISION_ALL); lua_setfield(L,-2,"FLOAT_PRECISION_ALL");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_VERTEX); lua_setfield(L,-2,"DOUBLE_PRECISION_VERTEX");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_NORMAL); lua_setfield(L,-2,"DOUBLE_PRECISION_NORMAL");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_COLOR); lua_setfield(L,-2,"DOUBLE_PRECISION_COLOR");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_SECONDARY_COLOR); lua_setfield(L,-2,"DOUBLE_PRECISION_SECONDARY_COLOR");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_FOG_COORD); lua_setfield(L,-2,"DOUBLE_PRECISION_FOG_COORD");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_TEX_COORD); lua_setfield(L,-2,"DOUBLE_PRECISION_TEX_COORD");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_VERTEX_ATTRIB); lua_setfield(L,-2,"DOUBLE_PRECISION_VERTEX_ATTRIB");
	lua_pushnumber(L,osgDB::Options::DOUBLE_PRECISION_ALL); lua_setfield(L,-2,"DOUBLE_PRECISION_ALL");


	lua_newtable(L); // enum BuildKdTreesHint

	lua_pushnumber(L,osgDB::Options::NO_PREFERENCE); lua_setfield(L,-2,"NO_PREFERENCE");
	lua_pushnumber(L,osgDB::Options::DO_NOT_BUILD_KDTREES); lua_setfield(L,-2,"DO_NOT_BUILD_KDTREES");
	lua_pushnumber(L,osgDB::Options::BUILD_KDTREES); lua_setfield(L,-2,"BUILD_KDTREES");

	lua_setfield(L,-2,"BuildKdTreesHint");

	lua_pushnumber(L,osgDB::Options::NO_PREFERENCE); lua_setfield(L,-2,"NO_PREFERENCE");
	lua_pushnumber(L,osgDB::Options::DO_NOT_BUILD_KDTREES); lua_setfield(L,-2,"DO_NOT_BUILD_KDTREES");
	lua_pushnumber(L,osgDB::Options::BUILD_KDTREES); lua_setfield(L,-2,"BUILD_KDTREES");


	lua_newtable(L); // enum PathNameHint

	lua_pushnumber(L,osgDB::Output::AS_IS); lua_setfield(L,-2,"AS_IS");
	lua_pushnumber(L,osgDB::Output::FULL_PATH); lua_setfield(L,-2,"FULL_PATH");
	lua_pushnumber(L,osgDB::Output::RELATIVE_PATH); lua_setfield(L,-2,"RELATIVE_PATH");
	lua_pushnumber(L,osgDB::Output::FILENAME_ONLY); lua_setfield(L,-2,"FILENAME_ONLY");

	lua_setfield(L,-2,"PathNameHint");

	lua_pushnumber(L,osgDB::Output::AS_IS); lua_setfield(L,-2,"AS_IS");
	lua_pushnumber(L,osgDB::Output::FULL_PATH); lua_setfield(L,-2,"FULL_PATH");
	lua_pushnumber(L,osgDB::Output::RELATIVE_PATH); lua_setfield(L,-2,"RELATIVE_PATH");
	lua_pushnumber(L,osgDB::Output::FILENAME_ONLY); lua_setfield(L,-2,"FILENAME_ONLY");


	lua_newtable(L); // enum WriteType

	lua_pushnumber(L,osgDB::OutputStream::WRITE_UNKNOWN); lua_setfield(L,-2,"WRITE_UNKNOWN");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_SCENE); lua_setfield(L,-2,"WRITE_SCENE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_IMAGE); lua_setfield(L,-2,"WRITE_IMAGE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_OBJECT); lua_setfield(L,-2,"WRITE_OBJECT");

	lua_setfield(L,-2,"WriteType");

	lua_pushnumber(L,osgDB::OutputStream::WRITE_UNKNOWN); lua_setfield(L,-2,"WRITE_UNKNOWN");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_SCENE); lua_setfield(L,-2,"WRITE_SCENE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_IMAGE); lua_setfield(L,-2,"WRITE_IMAGE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_OBJECT); lua_setfield(L,-2,"WRITE_OBJECT");


	lua_newtable(L); // enum WriteImageHint

	lua_pushnumber(L,osgDB::OutputStream::WRITE_USE_IMAGE_HINT); lua_setfield(L,-2,"WRITE_USE_IMAGE_HINT");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_USE_EXTERNAL); lua_setfield(L,-2,"WRITE_USE_EXTERNAL");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_INLINE_DATA); lua_setfield(L,-2,"WRITE_INLINE_DATA");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_INLINE_FILE); lua_setfield(L,-2,"WRITE_INLINE_FILE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_EXTERNAL_FILE); lua_setfield(L,-2,"WRITE_EXTERNAL_FILE");

	lua_setfield(L,-2,"WriteImageHint");

	lua_pushnumber(L,osgDB::OutputStream::WRITE_USE_IMAGE_HINT); lua_setfield(L,-2,"WRITE_USE_IMAGE_HINT");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_USE_EXTERNAL); lua_setfield(L,-2,"WRITE_USE_EXTERNAL");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_INLINE_DATA); lua_setfield(L,-2,"WRITE_INLINE_DATA");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_INLINE_FILE); lua_setfield(L,-2,"WRITE_INLINE_FILE");
	lua_pushnumber(L,osgDB::OutputStream::WRITE_EXTERNAL_FILE); lua_setfield(L,-2,"WRITE_EXTERNAL_FILE");


	lua_newtable(L); // enum Features

	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_NONE); lua_setfield(L,-2,"FEATURE_NONE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_OBJECT); lua_setfield(L,-2,"FEATURE_READ_OBJECT");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_IMAGE); lua_setfield(L,-2,"FEATURE_READ_IMAGE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_HEIGHT_FIELD); lua_setfield(L,-2,"FEATURE_READ_HEIGHT_FIELD");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_NODE); lua_setfield(L,-2,"FEATURE_READ_NODE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_SHADER); lua_setfield(L,-2,"FEATURE_READ_SHADER");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_OBJECT); lua_setfield(L,-2,"FEATURE_WRITE_OBJECT");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_IMAGE); lua_setfield(L,-2,"FEATURE_WRITE_IMAGE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_HEIGHT_FIELD); lua_setfield(L,-2,"FEATURE_WRITE_HEIGHT_FIELD");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_NODE); lua_setfield(L,-2,"FEATURE_WRITE_NODE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_SHADER); lua_setfield(L,-2,"FEATURE_WRITE_SHADER");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_ALL); lua_setfield(L,-2,"FEATURE_ALL");

	lua_setfield(L,-2,"Features");

	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_NONE); lua_setfield(L,-2,"FEATURE_NONE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_OBJECT); lua_setfield(L,-2,"FEATURE_READ_OBJECT");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_IMAGE); lua_setfield(L,-2,"FEATURE_READ_IMAGE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_HEIGHT_FIELD); lua_setfield(L,-2,"FEATURE_READ_HEIGHT_FIELD");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_NODE); lua_setfield(L,-2,"FEATURE_READ_NODE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_READ_SHADER); lua_setfield(L,-2,"FEATURE_READ_SHADER");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_OBJECT); lua_setfield(L,-2,"FEATURE_WRITE_OBJECT");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_IMAGE); lua_setfield(L,-2,"FEATURE_WRITE_IMAGE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_HEIGHT_FIELD); lua_setfield(L,-2,"FEATURE_WRITE_HEIGHT_FIELD");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_NODE); lua_setfield(L,-2,"FEATURE_WRITE_NODE");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_WRITE_SHADER); lua_setfield(L,-2,"FEATURE_WRITE_SHADER");
	lua_pushnumber(L,osgDB::ReaderWriter::FEATURE_ALL); lua_setfield(L,-2,"FEATURE_ALL");


	lua_newtable(L); // enum ArchiveStatus

	lua_pushnumber(L,osgDB::ReaderWriter::READ); lua_setfield(L,-2,"READ");
	lua_pushnumber(L,osgDB::ReaderWriter::WRITE); lua_setfield(L,-2,"WRITE");
	lua_pushnumber(L,osgDB::ReaderWriter::CREATE); lua_setfield(L,-2,"CREATE");

	lua_setfield(L,-2,"ArchiveStatus");

	lua_pushnumber(L,osgDB::ReaderWriter::READ); lua_setfield(L,-2,"READ");
	lua_pushnumber(L,osgDB::ReaderWriter::WRITE); lua_setfield(L,-2,"WRITE");
	lua_pushnumber(L,osgDB::ReaderWriter::CREATE); lua_setfield(L,-2,"CREATE");


	lua_newtable(L); // enum ReadStatus

	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::NOT_IMPLEMENTED); lua_setfield(L,-2,"NOT_IMPLEMENTED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_NOT_HANDLED); lua_setfield(L,-2,"FILE_NOT_HANDLED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_LOADED); lua_setfield(L,-2,"FILE_LOADED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_LOADED_FROM_CACHE); lua_setfield(L,-2,"FILE_LOADED_FROM_CACHE");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::ERROR_IN_READING_FILE); lua_setfield(L,-2,"ERROR_IN_READING_FILE");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_REQUESTED); lua_setfield(L,-2,"FILE_REQUESTED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::INSUFFICIENT_MEMORY_TO_LOAD); lua_setfield(L,-2,"INSUFFICIENT_MEMORY_TO_LOAD");

	lua_setfield(L,-2,"ReadStatus");

	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::NOT_IMPLEMENTED); lua_setfield(L,-2,"NOT_IMPLEMENTED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_NOT_HANDLED); lua_setfield(L,-2,"FILE_NOT_HANDLED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_LOADED); lua_setfield(L,-2,"FILE_LOADED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_LOADED_FROM_CACHE); lua_setfield(L,-2,"FILE_LOADED_FROM_CACHE");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::ERROR_IN_READING_FILE); lua_setfield(L,-2,"ERROR_IN_READING_FILE");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::FILE_REQUESTED); lua_setfield(L,-2,"FILE_REQUESTED");
	lua_pushnumber(L,osgDB::ReaderWriter::ReadResult::INSUFFICIENT_MEMORY_TO_LOAD); lua_setfield(L,-2,"INSUFFICIENT_MEMORY_TO_LOAD");


	lua_newtable(L); // enum WriteStatus

	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::NOT_IMPLEMENTED); lua_setfield(L,-2,"NOT_IMPLEMENTED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::FILE_NOT_HANDLED); lua_setfield(L,-2,"FILE_NOT_HANDLED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::FILE_SAVED); lua_setfield(L,-2,"FILE_SAVED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::ERROR_IN_WRITING_FILE); lua_setfield(L,-2,"ERROR_IN_WRITING_FILE");

	lua_setfield(L,-2,"WriteStatus");

	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::NOT_IMPLEMENTED); lua_setfield(L,-2,"NOT_IMPLEMENTED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::FILE_NOT_HANDLED); lua_setfield(L,-2,"FILE_NOT_HANDLED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::FILE_SAVED); lua_setfield(L,-2,"FILE_SAVED");
	lua_pushnumber(L,osgDB::ReaderWriter::WriteResult::ERROR_IN_WRITING_FILE); lua_setfield(L,-2,"ERROR_IN_WRITING_FILE");


	lua_newtable(L); // enum LoadStatus

	lua_pushnumber(L,osgDB::Registry::NOT_LOADED); lua_setfield(L,-2,"NOT_LOADED");
	lua_pushnumber(L,osgDB::Registry::PREVIOUSLY_LOADED); lua_setfield(L,-2,"PREVIOUSLY_LOADED");
	lua_pushnumber(L,osgDB::Registry::LOADED); lua_setfield(L,-2,"LOADED");

	lua_setfield(L,-2,"LoadStatus");

	lua_pushnumber(L,osgDB::Registry::NOT_LOADED); lua_setfield(L,-2,"NOT_LOADED");
	lua_pushnumber(L,osgDB::Registry::PREVIOUSLY_LOADED); lua_setfield(L,-2,"PREVIOUSLY_LOADED");
	lua_pushnumber(L,osgDB::Registry::LOADED); lua_setfield(L,-2,"LOADED");


	lua_newtable(L); // enum ShareMode

	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_NONE); lua_setfield(L,-2,"SHARE_NONE");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATIC_TEXTURES); lua_setfield(L,-2,"SHARE_STATIC_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_UNSPECIFIED_TEXTURES); lua_setfield(L,-2,"SHARE_UNSPECIFIED_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_DYNAMIC_TEXTURES); lua_setfield(L,-2,"SHARE_DYNAMIC_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATIC_STATESETS); lua_setfield(L,-2,"SHARE_STATIC_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_UNSPECIFIED_STATESETS); lua_setfield(L,-2,"SHARE_UNSPECIFIED_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_DYNAMIC_STATESETS); lua_setfield(L,-2,"SHARE_DYNAMIC_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_TEXTURES); lua_setfield(L,-2,"SHARE_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATESETS); lua_setfield(L,-2,"SHARE_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_ALL); lua_setfield(L,-2,"SHARE_ALL");

	lua_setfield(L,-2,"ShareMode");

	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_NONE); lua_setfield(L,-2,"SHARE_NONE");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATIC_TEXTURES); lua_setfield(L,-2,"SHARE_STATIC_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_UNSPECIFIED_TEXTURES); lua_setfield(L,-2,"SHARE_UNSPECIFIED_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_DYNAMIC_TEXTURES); lua_setfield(L,-2,"SHARE_DYNAMIC_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATIC_STATESETS); lua_setfield(L,-2,"SHARE_STATIC_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_UNSPECIFIED_STATESETS); lua_setfield(L,-2,"SHARE_UNSPECIFIED_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_DYNAMIC_STATESETS); lua_setfield(L,-2,"SHARE_DYNAMIC_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_TEXTURES); lua_setfield(L,-2,"SHARE_TEXTURES");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_STATESETS); lua_setfield(L,-2,"SHARE_STATESETS");
	lua_pushnumber(L,osgDB::SharedStateManager::SHARE_ALL); lua_setfield(L,-2,"SHARE_ALL");


	lua_newtable(L); // enum NodeType

	lua_pushnumber(L,osgDB::XmlNode::UNASSIGNED); lua_setfield(L,-2,"UNASSIGNED");
	lua_pushnumber(L,osgDB::XmlNode::ATOM); lua_setfield(L,-2,"ATOM");
	lua_pushnumber(L,osgDB::XmlNode::NODE); lua_setfield(L,-2,"NODE");
	lua_pushnumber(L,osgDB::XmlNode::GROUP); lua_setfield(L,-2,"GROUP");
	lua_pushnumber(L,osgDB::XmlNode::ROOT); lua_setfield(L,-2,"ROOT");
	lua_pushnumber(L,osgDB::XmlNode::COMMENT); lua_setfield(L,-2,"COMMENT");
	lua_pushnumber(L,osgDB::XmlNode::INFORMATION); lua_setfield(L,-2,"INFORMATION");

	lua_setfield(L,-2,"NodeType");

	lua_pushnumber(L,osgDB::XmlNode::UNASSIGNED); lua_setfield(L,-2,"UNASSIGNED");
	lua_pushnumber(L,osgDB::XmlNode::ATOM); lua_setfield(L,-2,"ATOM");
	lua_pushnumber(L,osgDB::XmlNode::NODE); lua_setfield(L,-2,"NODE");
	lua_pushnumber(L,osgDB::XmlNode::GROUP); lua_setfield(L,-2,"GROUP");
	lua_pushnumber(L,osgDB::XmlNode::ROOT); lua_setfield(L,-2,"ROOT");
	lua_pushnumber(L,osgDB::XmlNode::COMMENT); lua_setfield(L,-2,"COMMENT");
	lua_pushnumber(L,osgDB::XmlNode::INFORMATION); lua_setfield(L,-2,"INFORMATION");


	lua_newtable(L); // enum Value


	lua_setfield(L,-2,"Value");



	lua_newtable(L); // enum YawControlMode

	lua_pushnumber(L,osgGA::FlightManipulator::YAW_AUTOMATICALLY_WHEN_BANKED); lua_setfield(L,-2,"YAW_AUTOMATICALLY_WHEN_BANKED");
	lua_pushnumber(L,osgGA::FlightManipulator::NO_AUTOMATIC_YAW); lua_setfield(L,-2,"NO_AUTOMATIC_YAW");

	lua_setfield(L,-2,"YawControlMode");

	lua_pushnumber(L,osgGA::FlightManipulator::YAW_AUTOMATICALLY_WHEN_BANKED); lua_setfield(L,-2,"YAW_AUTOMATICALLY_WHEN_BANKED");
	lua_pushnumber(L,osgGA::FlightManipulator::NO_AUTOMATIC_YAW); lua_setfield(L,-2,"NO_AUTOMATIC_YAW");


	lua_newtable(L); // enum MouseButtonMask

	lua_pushnumber(L,osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON); lua_setfield(L,-2,"LEFT_MOUSE_BUTTON");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON); lua_setfield(L,-2,"MIDDLE_MOUSE_BUTTON");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON); lua_setfield(L,-2,"RIGHT_MOUSE_BUTTON");

	lua_setfield(L,-2,"MouseButtonMask");

	lua_pushnumber(L,osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON); lua_setfield(L,-2,"LEFT_MOUSE_BUTTON");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON); lua_setfield(L,-2,"MIDDLE_MOUSE_BUTTON");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON); lua_setfield(L,-2,"RIGHT_MOUSE_BUTTON");


	lua_newtable(L); // enum EventType

	lua_pushnumber(L,osgGA::GUIEventAdapter::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PUSH); lua_setfield(L,-2,"PUSH");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RELEASE); lua_setfield(L,-2,"RELEASE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::DOUBLECLICK); lua_setfield(L,-2,"DOUBLECLICK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::DRAG); lua_setfield(L,-2,"DRAG");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MOVE); lua_setfield(L,-2,"MOVE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEYDOWN); lua_setfield(L,-2,"KEYDOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEYUP); lua_setfield(L,-2,"KEYUP");
	lua_pushnumber(L,osgGA::GUIEventAdapter::FRAME); lua_setfield(L,-2,"FRAME");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RESIZE); lua_setfield(L,-2,"RESIZE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL); lua_setfield(L,-2,"SCROLL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PRESSURE); lua_setfield(L,-2,"PEN_PRESSURE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_ORIENTATION); lua_setfield(L,-2,"PEN_ORIENTATION");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PROXIMITY_ENTER); lua_setfield(L,-2,"PEN_PROXIMITY_ENTER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PROXIMITY_LEAVE); lua_setfield(L,-2,"PEN_PROXIMITY_LEAVE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::CLOSE_WINDOW); lua_setfield(L,-2,"CLOSE_WINDOW");
	lua_pushnumber(L,osgGA::GUIEventAdapter::QUIT_APPLICATION); lua_setfield(L,-2,"QUIT_APPLICATION");
	lua_pushnumber(L,osgGA::GUIEventAdapter::USER); lua_setfield(L,-2,"USER");

	lua_setfield(L,-2,"EventType");

	lua_pushnumber(L,osgGA::GUIEventAdapter::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PUSH); lua_setfield(L,-2,"PUSH");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RELEASE); lua_setfield(L,-2,"RELEASE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::DOUBLECLICK); lua_setfield(L,-2,"DOUBLECLICK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::DRAG); lua_setfield(L,-2,"DRAG");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MOVE); lua_setfield(L,-2,"MOVE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEYDOWN); lua_setfield(L,-2,"KEYDOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEYUP); lua_setfield(L,-2,"KEYUP");
	lua_pushnumber(L,osgGA::GUIEventAdapter::FRAME); lua_setfield(L,-2,"FRAME");
	lua_pushnumber(L,osgGA::GUIEventAdapter::RESIZE); lua_setfield(L,-2,"RESIZE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL); lua_setfield(L,-2,"SCROLL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PRESSURE); lua_setfield(L,-2,"PEN_PRESSURE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_ORIENTATION); lua_setfield(L,-2,"PEN_ORIENTATION");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PROXIMITY_ENTER); lua_setfield(L,-2,"PEN_PROXIMITY_ENTER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN_PROXIMITY_LEAVE); lua_setfield(L,-2,"PEN_PROXIMITY_LEAVE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::CLOSE_WINDOW); lua_setfield(L,-2,"CLOSE_WINDOW");
	lua_pushnumber(L,osgGA::GUIEventAdapter::QUIT_APPLICATION); lua_setfield(L,-2,"QUIT_APPLICATION");
	lua_pushnumber(L,osgGA::GUIEventAdapter::USER); lua_setfield(L,-2,"USER");


	lua_newtable(L); // enum KeySymbol

	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Space); lua_setfield(L,-2,"KEY_Space");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_0); lua_setfield(L,-2,"KEY_0");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_1); lua_setfield(L,-2,"KEY_1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_2); lua_setfield(L,-2,"KEY_2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_3); lua_setfield(L,-2,"KEY_3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_4); lua_setfield(L,-2,"KEY_4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_5); lua_setfield(L,-2,"KEY_5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_6); lua_setfield(L,-2,"KEY_6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_7); lua_setfield(L,-2,"KEY_7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_8); lua_setfield(L,-2,"KEY_8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_9); lua_setfield(L,-2,"KEY_9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_A); lua_setfield(L,-2,"KEY_A");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_B); lua_setfield(L,-2,"KEY_B");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_C); lua_setfield(L,-2,"KEY_C");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_D); lua_setfield(L,-2,"KEY_D");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_E); lua_setfield(L,-2,"KEY_E");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F); lua_setfield(L,-2,"KEY_F");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_G); lua_setfield(L,-2,"KEY_G");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_H); lua_setfield(L,-2,"KEY_H");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_I); lua_setfield(L,-2,"KEY_I");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_J); lua_setfield(L,-2,"KEY_J");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_K); lua_setfield(L,-2,"KEY_K");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_L); lua_setfield(L,-2,"KEY_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_M); lua_setfield(L,-2,"KEY_M");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_N); lua_setfield(L,-2,"KEY_N");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_O); lua_setfield(L,-2,"KEY_O");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_P); lua_setfield(L,-2,"KEY_P");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Q); lua_setfield(L,-2,"KEY_Q");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_R); lua_setfield(L,-2,"KEY_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_S); lua_setfield(L,-2,"KEY_S");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_T); lua_setfield(L,-2,"KEY_T");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_U); lua_setfield(L,-2,"KEY_U");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_V); lua_setfield(L,-2,"KEY_V");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_W); lua_setfield(L,-2,"KEY_W");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_X); lua_setfield(L,-2,"KEY_X");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Y); lua_setfield(L,-2,"KEY_Y");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Z); lua_setfield(L,-2,"KEY_Z");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Exclaim); lua_setfield(L,-2,"KEY_Exclaim");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Quotedbl); lua_setfield(L,-2,"KEY_Quotedbl");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hash); lua_setfield(L,-2,"KEY_Hash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Dollar); lua_setfield(L,-2,"KEY_Dollar");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Ampersand); lua_setfield(L,-2,"KEY_Ampersand");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Quote); lua_setfield(L,-2,"KEY_Quote");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Leftparen); lua_setfield(L,-2,"KEY_Leftparen");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Rightparen); lua_setfield(L,-2,"KEY_Rightparen");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Asterisk); lua_setfield(L,-2,"KEY_Asterisk");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Plus); lua_setfield(L,-2,"KEY_Plus");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Comma); lua_setfield(L,-2,"KEY_Comma");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Minus); lua_setfield(L,-2,"KEY_Minus");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Period); lua_setfield(L,-2,"KEY_Period");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Slash); lua_setfield(L,-2,"KEY_Slash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Colon); lua_setfield(L,-2,"KEY_Colon");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Semicolon); lua_setfield(L,-2,"KEY_Semicolon");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Less); lua_setfield(L,-2,"KEY_Less");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Equals); lua_setfield(L,-2,"KEY_Equals");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Greater); lua_setfield(L,-2,"KEY_Greater");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Question); lua_setfield(L,-2,"KEY_Question");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_At); lua_setfield(L,-2,"KEY_At");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Leftbracket); lua_setfield(L,-2,"KEY_Leftbracket");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Backslash); lua_setfield(L,-2,"KEY_Backslash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Rightbracket); lua_setfield(L,-2,"KEY_Rightbracket");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Caret); lua_setfield(L,-2,"KEY_Caret");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Underscore); lua_setfield(L,-2,"KEY_Underscore");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Backquote); lua_setfield(L,-2,"KEY_Backquote");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_BackSpace); lua_setfield(L,-2,"KEY_BackSpace");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Tab); lua_setfield(L,-2,"KEY_Tab");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Linefeed); lua_setfield(L,-2,"KEY_Linefeed");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Clear); lua_setfield(L,-2,"KEY_Clear");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Return); lua_setfield(L,-2,"KEY_Return");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Pause); lua_setfield(L,-2,"KEY_Pause");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Scroll_Lock); lua_setfield(L,-2,"KEY_Scroll_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Sys_Req); lua_setfield(L,-2,"KEY_Sys_Req");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Escape); lua_setfield(L,-2,"KEY_Escape");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Delete); lua_setfield(L,-2,"KEY_Delete");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Home); lua_setfield(L,-2,"KEY_Home");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Left); lua_setfield(L,-2,"KEY_Left");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Up); lua_setfield(L,-2,"KEY_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Right); lua_setfield(L,-2,"KEY_Right");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Down); lua_setfield(L,-2,"KEY_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Prior); lua_setfield(L,-2,"KEY_Prior");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Page_Up); lua_setfield(L,-2,"KEY_Page_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Next); lua_setfield(L,-2,"KEY_Next");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Page_Down); lua_setfield(L,-2,"KEY_Page_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_End); lua_setfield(L,-2,"KEY_End");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Begin); lua_setfield(L,-2,"KEY_Begin");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Select); lua_setfield(L,-2,"KEY_Select");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Print); lua_setfield(L,-2,"KEY_Print");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Execute); lua_setfield(L,-2,"KEY_Execute");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Insert); lua_setfield(L,-2,"KEY_Insert");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Undo); lua_setfield(L,-2,"KEY_Undo");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Redo); lua_setfield(L,-2,"KEY_Redo");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Menu); lua_setfield(L,-2,"KEY_Menu");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Find); lua_setfield(L,-2,"KEY_Find");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Cancel); lua_setfield(L,-2,"KEY_Cancel");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Help); lua_setfield(L,-2,"KEY_Help");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Break); lua_setfield(L,-2,"KEY_Break");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Mode_switch); lua_setfield(L,-2,"KEY_Mode_switch");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Script_switch); lua_setfield(L,-2,"KEY_Script_switch");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Num_Lock); lua_setfield(L,-2,"KEY_Num_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Space); lua_setfield(L,-2,"KEY_KP_Space");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Tab); lua_setfield(L,-2,"KEY_KP_Tab");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Enter); lua_setfield(L,-2,"KEY_KP_Enter");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F1); lua_setfield(L,-2,"KEY_KP_F1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F2); lua_setfield(L,-2,"KEY_KP_F2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F3); lua_setfield(L,-2,"KEY_KP_F3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F4); lua_setfield(L,-2,"KEY_KP_F4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Home); lua_setfield(L,-2,"KEY_KP_Home");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Left); lua_setfield(L,-2,"KEY_KP_Left");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Up); lua_setfield(L,-2,"KEY_KP_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Right); lua_setfield(L,-2,"KEY_KP_Right");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Down); lua_setfield(L,-2,"KEY_KP_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Prior); lua_setfield(L,-2,"KEY_KP_Prior");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Page_Up); lua_setfield(L,-2,"KEY_KP_Page_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Next); lua_setfield(L,-2,"KEY_KP_Next");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Page_Down); lua_setfield(L,-2,"KEY_KP_Page_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_End); lua_setfield(L,-2,"KEY_KP_End");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Begin); lua_setfield(L,-2,"KEY_KP_Begin");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Insert); lua_setfield(L,-2,"KEY_KP_Insert");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Delete); lua_setfield(L,-2,"KEY_KP_Delete");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Equal); lua_setfield(L,-2,"KEY_KP_Equal");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Multiply); lua_setfield(L,-2,"KEY_KP_Multiply");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Add); lua_setfield(L,-2,"KEY_KP_Add");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Separator); lua_setfield(L,-2,"KEY_KP_Separator");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Subtract); lua_setfield(L,-2,"KEY_KP_Subtract");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Decimal); lua_setfield(L,-2,"KEY_KP_Decimal");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Divide); lua_setfield(L,-2,"KEY_KP_Divide");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_0); lua_setfield(L,-2,"KEY_KP_0");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_1); lua_setfield(L,-2,"KEY_KP_1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_2); lua_setfield(L,-2,"KEY_KP_2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_3); lua_setfield(L,-2,"KEY_KP_3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_4); lua_setfield(L,-2,"KEY_KP_4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_5); lua_setfield(L,-2,"KEY_KP_5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_6); lua_setfield(L,-2,"KEY_KP_6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_7); lua_setfield(L,-2,"KEY_KP_7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_8); lua_setfield(L,-2,"KEY_KP_8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_9); lua_setfield(L,-2,"KEY_KP_9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F1); lua_setfield(L,-2,"KEY_F1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F2); lua_setfield(L,-2,"KEY_F2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F3); lua_setfield(L,-2,"KEY_F3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F4); lua_setfield(L,-2,"KEY_F4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F5); lua_setfield(L,-2,"KEY_F5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F6); lua_setfield(L,-2,"KEY_F6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F7); lua_setfield(L,-2,"KEY_F7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F8); lua_setfield(L,-2,"KEY_F8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F9); lua_setfield(L,-2,"KEY_F9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F10); lua_setfield(L,-2,"KEY_F10");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F11); lua_setfield(L,-2,"KEY_F11");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F12); lua_setfield(L,-2,"KEY_F12");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F13); lua_setfield(L,-2,"KEY_F13");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F14); lua_setfield(L,-2,"KEY_F14");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F15); lua_setfield(L,-2,"KEY_F15");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F16); lua_setfield(L,-2,"KEY_F16");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F17); lua_setfield(L,-2,"KEY_F17");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F18); lua_setfield(L,-2,"KEY_F18");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F19); lua_setfield(L,-2,"KEY_F19");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F20); lua_setfield(L,-2,"KEY_F20");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F21); lua_setfield(L,-2,"KEY_F21");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F22); lua_setfield(L,-2,"KEY_F22");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F23); lua_setfield(L,-2,"KEY_F23");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F24); lua_setfield(L,-2,"KEY_F24");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F25); lua_setfield(L,-2,"KEY_F25");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F26); lua_setfield(L,-2,"KEY_F26");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F27); lua_setfield(L,-2,"KEY_F27");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F28); lua_setfield(L,-2,"KEY_F28");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F29); lua_setfield(L,-2,"KEY_F29");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F30); lua_setfield(L,-2,"KEY_F30");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F31); lua_setfield(L,-2,"KEY_F31");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F32); lua_setfield(L,-2,"KEY_F32");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F33); lua_setfield(L,-2,"KEY_F33");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F34); lua_setfield(L,-2,"KEY_F34");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F35); lua_setfield(L,-2,"KEY_F35");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_L); lua_setfield(L,-2,"KEY_Shift_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_R); lua_setfield(L,-2,"KEY_Shift_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Control_L); lua_setfield(L,-2,"KEY_Control_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Control_R); lua_setfield(L,-2,"KEY_Control_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Caps_Lock); lua_setfield(L,-2,"KEY_Caps_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_Lock); lua_setfield(L,-2,"KEY_Shift_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Meta_L); lua_setfield(L,-2,"KEY_Meta_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Meta_R); lua_setfield(L,-2,"KEY_Meta_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Alt_L); lua_setfield(L,-2,"KEY_Alt_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Alt_R); lua_setfield(L,-2,"KEY_Alt_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Super_L); lua_setfield(L,-2,"KEY_Super_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Super_R); lua_setfield(L,-2,"KEY_Super_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hyper_L); lua_setfield(L,-2,"KEY_Hyper_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hyper_R); lua_setfield(L,-2,"KEY_Hyper_R");

	lua_setfield(L,-2,"KeySymbol");

	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Space); lua_setfield(L,-2,"KEY_Space");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_0); lua_setfield(L,-2,"KEY_0");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_1); lua_setfield(L,-2,"KEY_1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_2); lua_setfield(L,-2,"KEY_2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_3); lua_setfield(L,-2,"KEY_3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_4); lua_setfield(L,-2,"KEY_4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_5); lua_setfield(L,-2,"KEY_5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_6); lua_setfield(L,-2,"KEY_6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_7); lua_setfield(L,-2,"KEY_7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_8); lua_setfield(L,-2,"KEY_8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_9); lua_setfield(L,-2,"KEY_9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_A); lua_setfield(L,-2,"KEY_A");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_B); lua_setfield(L,-2,"KEY_B");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_C); lua_setfield(L,-2,"KEY_C");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_D); lua_setfield(L,-2,"KEY_D");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_E); lua_setfield(L,-2,"KEY_E");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F); lua_setfield(L,-2,"KEY_F");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_G); lua_setfield(L,-2,"KEY_G");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_H); lua_setfield(L,-2,"KEY_H");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_I); lua_setfield(L,-2,"KEY_I");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_J); lua_setfield(L,-2,"KEY_J");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_K); lua_setfield(L,-2,"KEY_K");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_L); lua_setfield(L,-2,"KEY_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_M); lua_setfield(L,-2,"KEY_M");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_N); lua_setfield(L,-2,"KEY_N");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_O); lua_setfield(L,-2,"KEY_O");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_P); lua_setfield(L,-2,"KEY_P");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Q); lua_setfield(L,-2,"KEY_Q");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_R); lua_setfield(L,-2,"KEY_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_S); lua_setfield(L,-2,"KEY_S");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_T); lua_setfield(L,-2,"KEY_T");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_U); lua_setfield(L,-2,"KEY_U");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_V); lua_setfield(L,-2,"KEY_V");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_W); lua_setfield(L,-2,"KEY_W");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_X); lua_setfield(L,-2,"KEY_X");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Y); lua_setfield(L,-2,"KEY_Y");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Z); lua_setfield(L,-2,"KEY_Z");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Exclaim); lua_setfield(L,-2,"KEY_Exclaim");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Quotedbl); lua_setfield(L,-2,"KEY_Quotedbl");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hash); lua_setfield(L,-2,"KEY_Hash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Dollar); lua_setfield(L,-2,"KEY_Dollar");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Ampersand); lua_setfield(L,-2,"KEY_Ampersand");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Quote); lua_setfield(L,-2,"KEY_Quote");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Leftparen); lua_setfield(L,-2,"KEY_Leftparen");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Rightparen); lua_setfield(L,-2,"KEY_Rightparen");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Asterisk); lua_setfield(L,-2,"KEY_Asterisk");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Plus); lua_setfield(L,-2,"KEY_Plus");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Comma); lua_setfield(L,-2,"KEY_Comma");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Minus); lua_setfield(L,-2,"KEY_Minus");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Period); lua_setfield(L,-2,"KEY_Period");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Slash); lua_setfield(L,-2,"KEY_Slash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Colon); lua_setfield(L,-2,"KEY_Colon");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Semicolon); lua_setfield(L,-2,"KEY_Semicolon");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Less); lua_setfield(L,-2,"KEY_Less");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Equals); lua_setfield(L,-2,"KEY_Equals");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Greater); lua_setfield(L,-2,"KEY_Greater");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Question); lua_setfield(L,-2,"KEY_Question");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_At); lua_setfield(L,-2,"KEY_At");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Leftbracket); lua_setfield(L,-2,"KEY_Leftbracket");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Backslash); lua_setfield(L,-2,"KEY_Backslash");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Rightbracket); lua_setfield(L,-2,"KEY_Rightbracket");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Caret); lua_setfield(L,-2,"KEY_Caret");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Underscore); lua_setfield(L,-2,"KEY_Underscore");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Backquote); lua_setfield(L,-2,"KEY_Backquote");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_BackSpace); lua_setfield(L,-2,"KEY_BackSpace");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Tab); lua_setfield(L,-2,"KEY_Tab");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Linefeed); lua_setfield(L,-2,"KEY_Linefeed");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Clear); lua_setfield(L,-2,"KEY_Clear");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Return); lua_setfield(L,-2,"KEY_Return");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Pause); lua_setfield(L,-2,"KEY_Pause");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Scroll_Lock); lua_setfield(L,-2,"KEY_Scroll_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Sys_Req); lua_setfield(L,-2,"KEY_Sys_Req");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Escape); lua_setfield(L,-2,"KEY_Escape");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Delete); lua_setfield(L,-2,"KEY_Delete");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Home); lua_setfield(L,-2,"KEY_Home");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Left); lua_setfield(L,-2,"KEY_Left");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Up); lua_setfield(L,-2,"KEY_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Right); lua_setfield(L,-2,"KEY_Right");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Down); lua_setfield(L,-2,"KEY_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Prior); lua_setfield(L,-2,"KEY_Prior");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Page_Up); lua_setfield(L,-2,"KEY_Page_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Next); lua_setfield(L,-2,"KEY_Next");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Page_Down); lua_setfield(L,-2,"KEY_Page_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_End); lua_setfield(L,-2,"KEY_End");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Begin); lua_setfield(L,-2,"KEY_Begin");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Select); lua_setfield(L,-2,"KEY_Select");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Print); lua_setfield(L,-2,"KEY_Print");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Execute); lua_setfield(L,-2,"KEY_Execute");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Insert); lua_setfield(L,-2,"KEY_Insert");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Undo); lua_setfield(L,-2,"KEY_Undo");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Redo); lua_setfield(L,-2,"KEY_Redo");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Menu); lua_setfield(L,-2,"KEY_Menu");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Find); lua_setfield(L,-2,"KEY_Find");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Cancel); lua_setfield(L,-2,"KEY_Cancel");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Help); lua_setfield(L,-2,"KEY_Help");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Break); lua_setfield(L,-2,"KEY_Break");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Mode_switch); lua_setfield(L,-2,"KEY_Mode_switch");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Script_switch); lua_setfield(L,-2,"KEY_Script_switch");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Num_Lock); lua_setfield(L,-2,"KEY_Num_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Space); lua_setfield(L,-2,"KEY_KP_Space");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Tab); lua_setfield(L,-2,"KEY_KP_Tab");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Enter); lua_setfield(L,-2,"KEY_KP_Enter");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F1); lua_setfield(L,-2,"KEY_KP_F1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F2); lua_setfield(L,-2,"KEY_KP_F2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F3); lua_setfield(L,-2,"KEY_KP_F3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_F4); lua_setfield(L,-2,"KEY_KP_F4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Home); lua_setfield(L,-2,"KEY_KP_Home");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Left); lua_setfield(L,-2,"KEY_KP_Left");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Up); lua_setfield(L,-2,"KEY_KP_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Right); lua_setfield(L,-2,"KEY_KP_Right");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Down); lua_setfield(L,-2,"KEY_KP_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Prior); lua_setfield(L,-2,"KEY_KP_Prior");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Page_Up); lua_setfield(L,-2,"KEY_KP_Page_Up");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Next); lua_setfield(L,-2,"KEY_KP_Next");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Page_Down); lua_setfield(L,-2,"KEY_KP_Page_Down");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_End); lua_setfield(L,-2,"KEY_KP_End");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Begin); lua_setfield(L,-2,"KEY_KP_Begin");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Insert); lua_setfield(L,-2,"KEY_KP_Insert");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Delete); lua_setfield(L,-2,"KEY_KP_Delete");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Equal); lua_setfield(L,-2,"KEY_KP_Equal");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Multiply); lua_setfield(L,-2,"KEY_KP_Multiply");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Add); lua_setfield(L,-2,"KEY_KP_Add");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Separator); lua_setfield(L,-2,"KEY_KP_Separator");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Subtract); lua_setfield(L,-2,"KEY_KP_Subtract");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Decimal); lua_setfield(L,-2,"KEY_KP_Decimal");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_Divide); lua_setfield(L,-2,"KEY_KP_Divide");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_0); lua_setfield(L,-2,"KEY_KP_0");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_1); lua_setfield(L,-2,"KEY_KP_1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_2); lua_setfield(L,-2,"KEY_KP_2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_3); lua_setfield(L,-2,"KEY_KP_3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_4); lua_setfield(L,-2,"KEY_KP_4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_5); lua_setfield(L,-2,"KEY_KP_5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_6); lua_setfield(L,-2,"KEY_KP_6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_7); lua_setfield(L,-2,"KEY_KP_7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_8); lua_setfield(L,-2,"KEY_KP_8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_KP_9); lua_setfield(L,-2,"KEY_KP_9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F1); lua_setfield(L,-2,"KEY_F1");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F2); lua_setfield(L,-2,"KEY_F2");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F3); lua_setfield(L,-2,"KEY_F3");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F4); lua_setfield(L,-2,"KEY_F4");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F5); lua_setfield(L,-2,"KEY_F5");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F6); lua_setfield(L,-2,"KEY_F6");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F7); lua_setfield(L,-2,"KEY_F7");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F8); lua_setfield(L,-2,"KEY_F8");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F9); lua_setfield(L,-2,"KEY_F9");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F10); lua_setfield(L,-2,"KEY_F10");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F11); lua_setfield(L,-2,"KEY_F11");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F12); lua_setfield(L,-2,"KEY_F12");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F13); lua_setfield(L,-2,"KEY_F13");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F14); lua_setfield(L,-2,"KEY_F14");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F15); lua_setfield(L,-2,"KEY_F15");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F16); lua_setfield(L,-2,"KEY_F16");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F17); lua_setfield(L,-2,"KEY_F17");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F18); lua_setfield(L,-2,"KEY_F18");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F19); lua_setfield(L,-2,"KEY_F19");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F20); lua_setfield(L,-2,"KEY_F20");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F21); lua_setfield(L,-2,"KEY_F21");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F22); lua_setfield(L,-2,"KEY_F22");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F23); lua_setfield(L,-2,"KEY_F23");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F24); lua_setfield(L,-2,"KEY_F24");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F25); lua_setfield(L,-2,"KEY_F25");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F26); lua_setfield(L,-2,"KEY_F26");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F27); lua_setfield(L,-2,"KEY_F27");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F28); lua_setfield(L,-2,"KEY_F28");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F29); lua_setfield(L,-2,"KEY_F29");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F30); lua_setfield(L,-2,"KEY_F30");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F31); lua_setfield(L,-2,"KEY_F31");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F32); lua_setfield(L,-2,"KEY_F32");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F33); lua_setfield(L,-2,"KEY_F33");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F34); lua_setfield(L,-2,"KEY_F34");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_F35); lua_setfield(L,-2,"KEY_F35");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_L); lua_setfield(L,-2,"KEY_Shift_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_R); lua_setfield(L,-2,"KEY_Shift_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Control_L); lua_setfield(L,-2,"KEY_Control_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Control_R); lua_setfield(L,-2,"KEY_Control_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Caps_Lock); lua_setfield(L,-2,"KEY_Caps_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Shift_Lock); lua_setfield(L,-2,"KEY_Shift_Lock");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Meta_L); lua_setfield(L,-2,"KEY_Meta_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Meta_R); lua_setfield(L,-2,"KEY_Meta_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Alt_L); lua_setfield(L,-2,"KEY_Alt_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Alt_R); lua_setfield(L,-2,"KEY_Alt_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Super_L); lua_setfield(L,-2,"KEY_Super_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Super_R); lua_setfield(L,-2,"KEY_Super_R");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hyper_L); lua_setfield(L,-2,"KEY_Hyper_L");
	lua_pushnumber(L,osgGA::GUIEventAdapter::KEY_Hyper_R); lua_setfield(L,-2,"KEY_Hyper_R");


	lua_newtable(L); // enum ModKeyMask

	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_SHIFT); lua_setfield(L,-2,"MODKEY_LEFT_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_SHIFT); lua_setfield(L,-2,"MODKEY_RIGHT_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_CTRL); lua_setfield(L,-2,"MODKEY_LEFT_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_CTRL); lua_setfield(L,-2,"MODKEY_RIGHT_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_ALT); lua_setfield(L,-2,"MODKEY_LEFT_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_ALT); lua_setfield(L,-2,"MODKEY_RIGHT_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_META); lua_setfield(L,-2,"MODKEY_LEFT_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_META); lua_setfield(L,-2,"MODKEY_RIGHT_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_SUPER); lua_setfield(L,-2,"MODKEY_LEFT_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_SUPER); lua_setfield(L,-2,"MODKEY_RIGHT_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_HYPER); lua_setfield(L,-2,"MODKEY_LEFT_HYPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_HYPER); lua_setfield(L,-2,"MODKEY_RIGHT_HYPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_NUM_LOCK); lua_setfield(L,-2,"MODKEY_NUM_LOCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_CAPS_LOCK); lua_setfield(L,-2,"MODKEY_CAPS_LOCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_CTRL); lua_setfield(L,-2,"MODKEY_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_SHIFT); lua_setfield(L,-2,"MODKEY_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_ALT); lua_setfield(L,-2,"MODKEY_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_META); lua_setfield(L,-2,"MODKEY_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_SUPER); lua_setfield(L,-2,"MODKEY_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_HYPER); lua_setfield(L,-2,"MODKEY_HYPER");

	lua_setfield(L,-2,"ModKeyMask");

	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_SHIFT); lua_setfield(L,-2,"MODKEY_LEFT_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_SHIFT); lua_setfield(L,-2,"MODKEY_RIGHT_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_CTRL); lua_setfield(L,-2,"MODKEY_LEFT_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_CTRL); lua_setfield(L,-2,"MODKEY_RIGHT_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_ALT); lua_setfield(L,-2,"MODKEY_LEFT_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_ALT); lua_setfield(L,-2,"MODKEY_RIGHT_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_META); lua_setfield(L,-2,"MODKEY_LEFT_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_META); lua_setfield(L,-2,"MODKEY_RIGHT_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_SUPER); lua_setfield(L,-2,"MODKEY_LEFT_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_SUPER); lua_setfield(L,-2,"MODKEY_RIGHT_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_LEFT_HYPER); lua_setfield(L,-2,"MODKEY_LEFT_HYPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_RIGHT_HYPER); lua_setfield(L,-2,"MODKEY_RIGHT_HYPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_NUM_LOCK); lua_setfield(L,-2,"MODKEY_NUM_LOCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_CAPS_LOCK); lua_setfield(L,-2,"MODKEY_CAPS_LOCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_CTRL); lua_setfield(L,-2,"MODKEY_CTRL");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_SHIFT); lua_setfield(L,-2,"MODKEY_SHIFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_ALT); lua_setfield(L,-2,"MODKEY_ALT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_META); lua_setfield(L,-2,"MODKEY_META");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_SUPER); lua_setfield(L,-2,"MODKEY_SUPER");
	lua_pushnumber(L,osgGA::GUIEventAdapter::MODKEY_HYPER); lua_setfield(L,-2,"MODKEY_HYPER");


	lua_newtable(L); // enum MouseYOrientation

	lua_pushnumber(L,osgGA::GUIEventAdapter::Y_INCREASING_UPWARDS); lua_setfield(L,-2,"Y_INCREASING_UPWARDS");
	lua_pushnumber(L,osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS); lua_setfield(L,-2,"Y_INCREASING_DOWNWARDS");

	lua_setfield(L,-2,"MouseYOrientation");

	lua_pushnumber(L,osgGA::GUIEventAdapter::Y_INCREASING_UPWARDS); lua_setfield(L,-2,"Y_INCREASING_UPWARDS");
	lua_pushnumber(L,osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS); lua_setfield(L,-2,"Y_INCREASING_DOWNWARDS");


	lua_newtable(L); // enum ScrollingMotion

	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_NONE); lua_setfield(L,-2,"SCROLL_NONE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_LEFT); lua_setfield(L,-2,"SCROLL_LEFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_RIGHT); lua_setfield(L,-2,"SCROLL_RIGHT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_UP); lua_setfield(L,-2,"SCROLL_UP");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_DOWN); lua_setfield(L,-2,"SCROLL_DOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_2D); lua_setfield(L,-2,"SCROLL_2D");

	lua_setfield(L,-2,"ScrollingMotion");

	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_NONE); lua_setfield(L,-2,"SCROLL_NONE");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_LEFT); lua_setfield(L,-2,"SCROLL_LEFT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_RIGHT); lua_setfield(L,-2,"SCROLL_RIGHT");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_UP); lua_setfield(L,-2,"SCROLL_UP");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_DOWN); lua_setfield(L,-2,"SCROLL_DOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::SCROLL_2D); lua_setfield(L,-2,"SCROLL_2D");


	lua_newtable(L); // enum TabletPointerType

	lua_pushnumber(L,osgGA::GUIEventAdapter::UNKNOWN); lua_setfield(L,-2,"UNKNOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN); lua_setfield(L,-2,"PEN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PUCK); lua_setfield(L,-2,"PUCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::ERASER); lua_setfield(L,-2,"ERASER");

	lua_setfield(L,-2,"TabletPointerType");

	lua_pushnumber(L,osgGA::GUIEventAdapter::UNKNOWN); lua_setfield(L,-2,"UNKNOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PEN); lua_setfield(L,-2,"PEN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::PUCK); lua_setfield(L,-2,"PUCK");
	lua_pushnumber(L,osgGA::GUIEventAdapter::ERASER); lua_setfield(L,-2,"ERASER");


	lua_newtable(L); // enum TouchPhase

	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_UNKNOWN); lua_setfield(L,-2,"TOUCH_UNKNOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_BEGAN); lua_setfield(L,-2,"TOUCH_BEGAN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_MOVED); lua_setfield(L,-2,"TOUCH_MOVED");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_STATIONERY); lua_setfield(L,-2,"TOUCH_STATIONERY");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_ENDED); lua_setfield(L,-2,"TOUCH_ENDED");

	lua_setfield(L,-2,"TouchPhase");

	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_UNKNOWN); lua_setfield(L,-2,"TOUCH_UNKNOWN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_BEGAN); lua_setfield(L,-2,"TOUCH_BEGAN");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_MOVED); lua_setfield(L,-2,"TOUCH_MOVED");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_STATIONERY); lua_setfield(L,-2,"TOUCH_STATIONERY");
	lua_pushnumber(L,osgGA::GUIEventAdapter::TOUCH_ENDED); lua_setfield(L,-2,"TOUCH_ENDED");


	lua_newtable(L); // enum TrackerMode

	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER); lua_setfield(L,-2,"NODE_CENTER");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER_AND_AZIM); lua_setfield(L,-2,"NODE_CENTER_AND_AZIM");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER_AND_ROTATION); lua_setfield(L,-2,"NODE_CENTER_AND_ROTATION");

	lua_setfield(L,-2,"TrackerMode");

	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER); lua_setfield(L,-2,"NODE_CENTER");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER_AND_AZIM); lua_setfield(L,-2,"NODE_CENTER_AND_AZIM");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::NODE_CENTER_AND_ROTATION); lua_setfield(L,-2,"NODE_CENTER_AND_ROTATION");


	lua_newtable(L); // enum RotationMode

	lua_pushnumber(L,osgGA::NodeTrackerManipulator::TRACKBALL); lua_setfield(L,-2,"TRACKBALL");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::ELEVATION_AZIM); lua_setfield(L,-2,"ELEVATION_AZIM");

	lua_setfield(L,-2,"RotationMode");

	lua_pushnumber(L,osgGA::NodeTrackerManipulator::TRACKBALL); lua_setfield(L,-2,"TRACKBALL");
	lua_pushnumber(L,osgGA::NodeTrackerManipulator::ELEVATION_AZIM); lua_setfield(L,-2,"ELEVATION_AZIM");


	lua_newtable(L); // enum RotationMode

	lua_pushnumber(L,osgGA::SphericalManipulator::ELEVATION_HEADING); lua_setfield(L,-2,"ELEVATION_HEADING");
	lua_pushnumber(L,osgGA::SphericalManipulator::HEADING); lua_setfield(L,-2,"HEADING");
	lua_pushnumber(L,osgGA::SphericalManipulator::ELEVATION); lua_setfield(L,-2,"ELEVATION");
	lua_pushnumber(L,osgGA::SphericalManipulator::MAP); lua_setfield(L,-2,"MAP");

	lua_setfield(L,-2,"RotationMode");

	lua_pushnumber(L,osgGA::SphericalManipulator::ELEVATION_HEADING); lua_setfield(L,-2,"ELEVATION_HEADING");
	lua_pushnumber(L,osgGA::SphericalManipulator::HEADING); lua_setfield(L,-2,"HEADING");
	lua_pushnumber(L,osgGA::SphericalManipulator::ELEVATION); lua_setfield(L,-2,"ELEVATION");
	lua_pushnumber(L,osgGA::SphericalManipulator::MAP); lua_setfield(L,-2,"MAP");


	lua_newtable(L); // enum UserInteractionFlags

	lua_pushnumber(L,osgGA::StandardManipulator::UPDATE_MODEL_SIZE); lua_setfield(L,-2,"UPDATE_MODEL_SIZE");
	lua_pushnumber(L,osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX); lua_setfield(L,-2,"COMPUTE_HOME_USING_BBOX");
	lua_pushnumber(L,osgGA::StandardManipulator::PROCESS_MOUSE_WHEEL); lua_setfield(L,-2,"PROCESS_MOUSE_WHEEL");
	lua_pushnumber(L,osgGA::StandardManipulator::SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT); lua_setfield(L,-2,"SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT");
	lua_pushnumber(L,osgGA::StandardManipulator::DEFAULT_SETTINGS); lua_setfield(L,-2,"DEFAULT_SETTINGS");

	lua_setfield(L,-2,"UserInteractionFlags");

	lua_pushnumber(L,osgGA::StandardManipulator::UPDATE_MODEL_SIZE); lua_setfield(L,-2,"UPDATE_MODEL_SIZE");
	lua_pushnumber(L,osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX); lua_setfield(L,-2,"COMPUTE_HOME_USING_BBOX");
	lua_pushnumber(L,osgGA::StandardManipulator::PROCESS_MOUSE_WHEEL); lua_setfield(L,-2,"PROCESS_MOUSE_WHEEL");
	lua_pushnumber(L,osgGA::StandardManipulator::SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT); lua_setfield(L,-2,"SET_CENTER_ON_WHEEL_FORWARD_MOVEMENT");
	lua_pushnumber(L,osgGA::StandardManipulator::DEFAULT_SETTINGS); lua_setfield(L,-2,"DEFAULT_SETTINGS");


	lua_newtable(L); // enum RotationMode

	lua_pushnumber(L,osgGA::TerrainManipulator::ELEVATION_AZIM_ROLL); lua_setfield(L,-2,"ELEVATION_AZIM_ROLL");
	lua_pushnumber(L,osgGA::TerrainManipulator::ELEVATION_AZIM); lua_setfield(L,-2,"ELEVATION_AZIM");

	lua_setfield(L,-2,"RotationMode");

	lua_pushnumber(L,osgGA::TerrainManipulator::ELEVATION_AZIM_ROLL); lua_setfield(L,-2,"ELEVATION_AZIM_ROLL");
	lua_pushnumber(L,osgGA::TerrainManipulator::ELEVATION_AZIM); lua_setfield(L,-2,"ELEVATION_AZIM");


	lua_newtable(L); // enum Type

	lua_pushnumber(L,osgParticle::DomainOperator::Domain::UNDEFINED_DOMAIN); lua_setfield(L,-2,"UNDEFINED_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::POINT_DOMAIN); lua_setfield(L,-2,"POINT_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::LINE_DOMAIN); lua_setfield(L,-2,"LINE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::TRI_DOMAIN); lua_setfield(L,-2,"TRI_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::RECT_DOMAIN); lua_setfield(L,-2,"RECT_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::PLANE_DOMAIN); lua_setfield(L,-2,"PLANE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::SPHERE_DOMAIN); lua_setfield(L,-2,"SPHERE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::BOX_DOMAIN); lua_setfield(L,-2,"BOX_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::DISK_DOMAIN); lua_setfield(L,-2,"DISK_DOMAIN");

	lua_setfield(L,-2,"Type");

	lua_pushnumber(L,osgParticle::DomainOperator::Domain::UNDEFINED_DOMAIN); lua_setfield(L,-2,"UNDEFINED_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::POINT_DOMAIN); lua_setfield(L,-2,"POINT_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::LINE_DOMAIN); lua_setfield(L,-2,"LINE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::TRI_DOMAIN); lua_setfield(L,-2,"TRI_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::RECT_DOMAIN); lua_setfield(L,-2,"RECT_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::PLANE_DOMAIN); lua_setfield(L,-2,"PLANE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::SPHERE_DOMAIN); lua_setfield(L,-2,"SPHERE_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::BOX_DOMAIN); lua_setfield(L,-2,"BOX_DOMAIN");
	lua_pushnumber(L,osgParticle::DomainOperator::Domain::DISK_DOMAIN); lua_setfield(L,-2,"DISK_DOMAIN");


	lua_newtable(L); // enum unnamed_16

	lua_pushnumber(L,osgParticle::Particle::INVALID_INDEX); lua_setfield(L,-2,"INVALID_INDEX");

	lua_setfield(L,-2,"unnamed_16");

	lua_pushnumber(L,osgParticle::Particle::INVALID_INDEX); lua_setfield(L,-2,"INVALID_INDEX");


	lua_newtable(L); // enum Shape

	lua_pushnumber(L,osgParticle::Particle::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osgParticle::Particle::QUAD); lua_setfield(L,-2,"QUAD");
	lua_pushnumber(L,osgParticle::Particle::QUAD_TRIANGLESTRIP); lua_setfield(L,-2,"QUAD_TRIANGLESTRIP");
	lua_pushnumber(L,osgParticle::Particle::HEXAGON); lua_setfield(L,-2,"HEXAGON");
	lua_pushnumber(L,osgParticle::Particle::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,osgParticle::Particle::USER); lua_setfield(L,-2,"USER");

	lua_setfield(L,-2,"Shape");

	lua_pushnumber(L,osgParticle::Particle::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,osgParticle::Particle::QUAD); lua_setfield(L,-2,"QUAD");
	lua_pushnumber(L,osgParticle::Particle::QUAD_TRIANGLESTRIP); lua_setfield(L,-2,"QUAD_TRIANGLESTRIP");
	lua_pushnumber(L,osgParticle::Particle::HEXAGON); lua_setfield(L,-2,"HEXAGON");
	lua_pushnumber(L,osgParticle::Particle::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,osgParticle::Particle::USER); lua_setfield(L,-2,"USER");


	lua_newtable(L); // enum ReferenceFrame

	lua_pushnumber(L,osgParticle::ParticleProcessor::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osgParticle::ParticleProcessor::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");

	lua_setfield(L,-2,"ReferenceFrame");

	lua_pushnumber(L,osgParticle::ParticleProcessor::RELATIVE_RF); lua_setfield(L,-2,"RELATIVE_RF");
	lua_pushnumber(L,osgParticle::ParticleProcessor::ABSOLUTE_RF); lua_setfield(L,-2,"ABSOLUTE_RF");


	lua_newtable(L); // enum Alignment

	lua_pushnumber(L,osgParticle::ParticleSystem::BILLBOARD); lua_setfield(L,-2,"BILLBOARD");
	lua_pushnumber(L,osgParticle::ParticleSystem::FIXED); lua_setfield(L,-2,"FIXED");

	lua_setfield(L,-2,"Alignment");

	lua_pushnumber(L,osgParticle::ParticleSystem::BILLBOARD); lua_setfield(L,-2,"BILLBOARD");
	lua_pushnumber(L,osgParticle::ParticleSystem::FIXED); lua_setfield(L,-2,"FIXED");


	lua_newtable(L); // enum ParticleScaleReferenceFrame

	lua_pushnumber(L,osgParticle::ParticleSystem::LOCAL_COORDINATES); lua_setfield(L,-2,"LOCAL_COORDINATES");
	lua_pushnumber(L,osgParticle::ParticleSystem::WORLD_COORDINATES); lua_setfield(L,-2,"WORLD_COORDINATES");

	lua_setfield(L,-2,"ParticleScaleReferenceFrame");

	lua_pushnumber(L,osgParticle::ParticleSystem::LOCAL_COORDINATES); lua_setfield(L,-2,"LOCAL_COORDINATES");
	lua_pushnumber(L,osgParticle::ParticleSystem::WORLD_COORDINATES); lua_setfield(L,-2,"WORLD_COORDINATES");


	lua_newtable(L); // enum SortMode

	lua_pushnumber(L,osgParticle::ParticleSystem::NO_SORT); lua_setfield(L,-2,"NO_SORT");
	lua_pushnumber(L,osgParticle::ParticleSystem::SORT_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_FRONT_TO_BACK");
	lua_pushnumber(L,osgParticle::ParticleSystem::SORT_BACK_TO_FRONT); lua_setfield(L,-2,"SORT_BACK_TO_FRONT");

	lua_setfield(L,-2,"SortMode");

	lua_pushnumber(L,osgParticle::ParticleSystem::NO_SORT); lua_setfield(L,-2,"NO_SORT");
	lua_pushnumber(L,osgParticle::ParticleSystem::SORT_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_FRONT_TO_BACK");
	lua_pushnumber(L,osgParticle::ParticleSystem::SORT_BACK_TO_FRONT); lua_setfield(L,-2,"SORT_BACK_TO_FRONT");


	lua_newtable(L); // enum SinkTarget

	lua_pushnumber(L,osgParticle::SinkOperator::SINK_POSITION); lua_setfield(L,-2,"SINK_POSITION");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_VELOCITY); lua_setfield(L,-2,"SINK_VELOCITY");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_ANGULAR_VELOCITY); lua_setfield(L,-2,"SINK_ANGULAR_VELOCITY");

	lua_setfield(L,-2,"SinkTarget");

	lua_pushnumber(L,osgParticle::SinkOperator::SINK_POSITION); lua_setfield(L,-2,"SINK_POSITION");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_VELOCITY); lua_setfield(L,-2,"SINK_VELOCITY");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_ANGULAR_VELOCITY); lua_setfield(L,-2,"SINK_ANGULAR_VELOCITY");


	lua_newtable(L); // enum SinkStrategy

	lua_pushnumber(L,osgParticle::SinkOperator::SINK_INSIDE); lua_setfield(L,-2,"SINK_INSIDE");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_OUTSIDE); lua_setfield(L,-2,"SINK_OUTSIDE");

	lua_setfield(L,-2,"SinkStrategy");

	lua_pushnumber(L,osgParticle::SinkOperator::SINK_INSIDE); lua_setfield(L,-2,"SINK_INSIDE");
	lua_pushnumber(L,osgParticle::SinkOperator::SINK_OUTSIDE); lua_setfield(L,-2,"SINK_OUTSIDE");


	lua_newtable(L); // enum KerningType

	lua_pushnumber(L,osgText::KERNING_DEFAULT); lua_setfield(L,-2,"KERNING_DEFAULT");
	lua_pushnumber(L,osgText::KERNING_UNFITTED); lua_setfield(L,-2,"KERNING_UNFITTED");
	lua_pushnumber(L,osgText::KERNING_NONE); lua_setfield(L,-2,"KERNING_NONE");

	lua_setfield(L,-2,"KerningType");

	lua_pushnumber(L,osgText::KERNING_DEFAULT); lua_setfield(L,-2,"KERNING_DEFAULT");
	lua_pushnumber(L,osgText::KERNING_UNFITTED); lua_setfield(L,-2,"KERNING_UNFITTED");
	lua_pushnumber(L,osgText::KERNING_NONE); lua_setfield(L,-2,"KERNING_NONE");


	lua_newtable(L); // enum Encoding

	lua_pushnumber(L,osgText::String::ENCODING_UNDEFINED); lua_setfield(L,-2,"ENCODING_UNDEFINED");
	lua_pushnumber(L,osgText::String::ENCODING_ASCII); lua_setfield(L,-2,"ENCODING_ASCII");
	lua_pushnumber(L,osgText::String::ENCODING_UTF8); lua_setfield(L,-2,"ENCODING_UTF8");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16); lua_setfield(L,-2,"ENCODING_UTF16");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16_BE); lua_setfield(L,-2,"ENCODING_UTF16_BE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16_LE); lua_setfield(L,-2,"ENCODING_UTF16_LE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32); lua_setfield(L,-2,"ENCODING_UTF32");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32_BE); lua_setfield(L,-2,"ENCODING_UTF32_BE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32_LE); lua_setfield(L,-2,"ENCODING_UTF32_LE");
	lua_pushnumber(L,osgText::String::ENCODING_SIGNATURE); lua_setfield(L,-2,"ENCODING_SIGNATURE");

	lua_setfield(L,-2,"Encoding");

	lua_pushnumber(L,osgText::String::ENCODING_UNDEFINED); lua_setfield(L,-2,"ENCODING_UNDEFINED");
	lua_pushnumber(L,osgText::String::ENCODING_ASCII); lua_setfield(L,-2,"ENCODING_ASCII");
	lua_pushnumber(L,osgText::String::ENCODING_UTF8); lua_setfield(L,-2,"ENCODING_UTF8");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16); lua_setfield(L,-2,"ENCODING_UTF16");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16_BE); lua_setfield(L,-2,"ENCODING_UTF16_BE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF16_LE); lua_setfield(L,-2,"ENCODING_UTF16_LE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32); lua_setfield(L,-2,"ENCODING_UTF32");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32_BE); lua_setfield(L,-2,"ENCODING_UTF32_BE");
	lua_pushnumber(L,osgText::String::ENCODING_UTF32_LE); lua_setfield(L,-2,"ENCODING_UTF32_LE");
	lua_pushnumber(L,osgText::String::ENCODING_SIGNATURE); lua_setfield(L,-2,"ENCODING_SIGNATURE");


	lua_newtable(L); // enum BackdropType

	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_CENTER_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_CENTER_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_TOP_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_CENTER); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_CENTER");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_CENTER); lua_setfield(L,-2,"DROP_SHADOW_TOP_CENTER");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_LEFT); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_LEFT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_CENTER_LEFT); lua_setfield(L,-2,"DROP_SHADOW_CENTER_LEFT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_LEFT); lua_setfield(L,-2,"DROP_SHADOW_TOP_LEFT");
	lua_pushnumber(L,osgText::Text::OUTLINE); lua_setfield(L,-2,"OUTLINE");
	lua_pushnumber(L,osgText::Text::NONE); lua_setfield(L,-2,"NONE");

	lua_setfield(L,-2,"BackdropType");

	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_CENTER_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_CENTER_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_RIGHT); lua_setfield(L,-2,"DROP_SHADOW_TOP_RIGHT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_CENTER); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_CENTER");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_CENTER); lua_setfield(L,-2,"DROP_SHADOW_TOP_CENTER");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_BOTTOM_LEFT); lua_setfield(L,-2,"DROP_SHADOW_BOTTOM_LEFT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_CENTER_LEFT); lua_setfield(L,-2,"DROP_SHADOW_CENTER_LEFT");
	lua_pushnumber(L,osgText::Text::DROP_SHADOW_TOP_LEFT); lua_setfield(L,-2,"DROP_SHADOW_TOP_LEFT");
	lua_pushnumber(L,osgText::Text::OUTLINE); lua_setfield(L,-2,"OUTLINE");
	lua_pushnumber(L,osgText::Text::NONE); lua_setfield(L,-2,"NONE");


	lua_newtable(L); // enum BackdropImplementation

	lua_pushnumber(L,osgText::Text::POLYGON_OFFSET); lua_setfield(L,-2,"POLYGON_OFFSET");
	lua_pushnumber(L,osgText::Text::NO_DEPTH_BUFFER); lua_setfield(L,-2,"NO_DEPTH_BUFFER");
	lua_pushnumber(L,osgText::Text::DEPTH_RANGE); lua_setfield(L,-2,"DEPTH_RANGE");
	lua_pushnumber(L,osgText::Text::STENCIL_BUFFER); lua_setfield(L,-2,"STENCIL_BUFFER");
	lua_pushnumber(L,osgText::Text::DELAYED_DEPTH_WRITES); lua_setfield(L,-2,"DELAYED_DEPTH_WRITES");

	lua_setfield(L,-2,"BackdropImplementation");

	lua_pushnumber(L,osgText::Text::POLYGON_OFFSET); lua_setfield(L,-2,"POLYGON_OFFSET");
	lua_pushnumber(L,osgText::Text::NO_DEPTH_BUFFER); lua_setfield(L,-2,"NO_DEPTH_BUFFER");
	lua_pushnumber(L,osgText::Text::DEPTH_RANGE); lua_setfield(L,-2,"DEPTH_RANGE");
	lua_pushnumber(L,osgText::Text::STENCIL_BUFFER); lua_setfield(L,-2,"STENCIL_BUFFER");
	lua_pushnumber(L,osgText::Text::DELAYED_DEPTH_WRITES); lua_setfield(L,-2,"DELAYED_DEPTH_WRITES");


	lua_newtable(L); // enum ColorGradientMode

	lua_pushnumber(L,osgText::Text::SOLID); lua_setfield(L,-2,"SOLID");
	lua_pushnumber(L,osgText::Text::PER_CHARACTER); lua_setfield(L,-2,"PER_CHARACTER");
	lua_pushnumber(L,osgText::Text::OVERALL); lua_setfield(L,-2,"OVERALL");

	lua_setfield(L,-2,"ColorGradientMode");

	lua_pushnumber(L,osgText::Text::SOLID); lua_setfield(L,-2,"SOLID");
	lua_pushnumber(L,osgText::Text::PER_CHARACTER); lua_setfield(L,-2,"PER_CHARACTER");
	lua_pushnumber(L,osgText::Text::OVERALL); lua_setfield(L,-2,"OVERALL");


	lua_newtable(L); // enum RenderMode

	lua_pushnumber(L,osgText::Text3D::PER_FACE); lua_setfield(L,-2,"PER_FACE");
	lua_pushnumber(L,osgText::Text3D::PER_GLYPH); lua_setfield(L,-2,"PER_GLYPH");

	lua_setfield(L,-2,"RenderMode");

	lua_pushnumber(L,osgText::Text3D::PER_FACE); lua_setfield(L,-2,"PER_FACE");
	lua_pushnumber(L,osgText::Text3D::PER_GLYPH); lua_setfield(L,-2,"PER_GLYPH");


	lua_newtable(L); // enum CharacterSizeMode

	lua_pushnumber(L,osgText::TextBase::OBJECT_COORDS); lua_setfield(L,-2,"OBJECT_COORDS");
	lua_pushnumber(L,osgText::TextBase::SCREEN_COORDS); lua_setfield(L,-2,"SCREEN_COORDS");
	lua_pushnumber(L,osgText::TextBase::OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT); lua_setfield(L,-2,"OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT");

	lua_setfield(L,-2,"CharacterSizeMode");

	lua_pushnumber(L,osgText::TextBase::OBJECT_COORDS); lua_setfield(L,-2,"OBJECT_COORDS");
	lua_pushnumber(L,osgText::TextBase::SCREEN_COORDS); lua_setfield(L,-2,"SCREEN_COORDS");
	lua_pushnumber(L,osgText::TextBase::OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT); lua_setfield(L,-2,"OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT");


	lua_newtable(L); // enum AlignmentType

	lua_pushnumber(L,osgText::TextBase::LEFT_TOP); lua_setfield(L,-2,"LEFT_TOP");
	lua_pushnumber(L,osgText::TextBase::LEFT_CENTER); lua_setfield(L,-2,"LEFT_CENTER");
	lua_pushnumber(L,osgText::TextBase::LEFT_BOTTOM); lua_setfield(L,-2,"LEFT_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::CENTER_TOP); lua_setfield(L,-2,"CENTER_TOP");
	lua_pushnumber(L,osgText::TextBase::CENTER_CENTER); lua_setfield(L,-2,"CENTER_CENTER");
	lua_pushnumber(L,osgText::TextBase::CENTER_BOTTOM); lua_setfield(L,-2,"CENTER_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::RIGHT_TOP); lua_setfield(L,-2,"RIGHT_TOP");
	lua_pushnumber(L,osgText::TextBase::RIGHT_CENTER); lua_setfield(L,-2,"RIGHT_CENTER");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BOTTOM); lua_setfield(L,-2,"RIGHT_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::LEFT_BASE_LINE); lua_setfield(L,-2,"LEFT_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::CENTER_BASE_LINE); lua_setfield(L,-2,"CENTER_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BASE_LINE); lua_setfield(L,-2,"RIGHT_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::LEFT_BOTTOM_BASE_LINE); lua_setfield(L,-2,"LEFT_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::CENTER_BOTTOM_BASE_LINE); lua_setfield(L,-2,"CENTER_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BOTTOM_BASE_LINE); lua_setfield(L,-2,"RIGHT_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::BASE_LINE); lua_setfield(L,-2,"BASE_LINE");

	lua_setfield(L,-2,"AlignmentType");

	lua_pushnumber(L,osgText::TextBase::LEFT_TOP); lua_setfield(L,-2,"LEFT_TOP");
	lua_pushnumber(L,osgText::TextBase::LEFT_CENTER); lua_setfield(L,-2,"LEFT_CENTER");
	lua_pushnumber(L,osgText::TextBase::LEFT_BOTTOM); lua_setfield(L,-2,"LEFT_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::CENTER_TOP); lua_setfield(L,-2,"CENTER_TOP");
	lua_pushnumber(L,osgText::TextBase::CENTER_CENTER); lua_setfield(L,-2,"CENTER_CENTER");
	lua_pushnumber(L,osgText::TextBase::CENTER_BOTTOM); lua_setfield(L,-2,"CENTER_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::RIGHT_TOP); lua_setfield(L,-2,"RIGHT_TOP");
	lua_pushnumber(L,osgText::TextBase::RIGHT_CENTER); lua_setfield(L,-2,"RIGHT_CENTER");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BOTTOM); lua_setfield(L,-2,"RIGHT_BOTTOM");
	lua_pushnumber(L,osgText::TextBase::LEFT_BASE_LINE); lua_setfield(L,-2,"LEFT_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::CENTER_BASE_LINE); lua_setfield(L,-2,"CENTER_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BASE_LINE); lua_setfield(L,-2,"RIGHT_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::LEFT_BOTTOM_BASE_LINE); lua_setfield(L,-2,"LEFT_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::CENTER_BOTTOM_BASE_LINE); lua_setfield(L,-2,"CENTER_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::RIGHT_BOTTOM_BASE_LINE); lua_setfield(L,-2,"RIGHT_BOTTOM_BASE_LINE");
	lua_pushnumber(L,osgText::TextBase::BASE_LINE); lua_setfield(L,-2,"BASE_LINE");


	lua_newtable(L); // enum AxisAlignment

	lua_pushnumber(L,osgText::TextBase::XY_PLANE); lua_setfield(L,-2,"XY_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_XY_PLANE); lua_setfield(L,-2,"REVERSED_XY_PLANE");
	lua_pushnumber(L,osgText::TextBase::XZ_PLANE); lua_setfield(L,-2,"XZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_XZ_PLANE); lua_setfield(L,-2,"REVERSED_XZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::YZ_PLANE); lua_setfield(L,-2,"YZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_YZ_PLANE); lua_setfield(L,-2,"REVERSED_YZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::SCREEN); lua_setfield(L,-2,"SCREEN");
	lua_pushnumber(L,osgText::TextBase::USER_DEFINED_ROTATION); lua_setfield(L,-2,"USER_DEFINED_ROTATION");

	lua_setfield(L,-2,"AxisAlignment");

	lua_pushnumber(L,osgText::TextBase::XY_PLANE); lua_setfield(L,-2,"XY_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_XY_PLANE); lua_setfield(L,-2,"REVERSED_XY_PLANE");
	lua_pushnumber(L,osgText::TextBase::XZ_PLANE); lua_setfield(L,-2,"XZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_XZ_PLANE); lua_setfield(L,-2,"REVERSED_XZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::YZ_PLANE); lua_setfield(L,-2,"YZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::REVERSED_YZ_PLANE); lua_setfield(L,-2,"REVERSED_YZ_PLANE");
	lua_pushnumber(L,osgText::TextBase::SCREEN); lua_setfield(L,-2,"SCREEN");
	lua_pushnumber(L,osgText::TextBase::USER_DEFINED_ROTATION); lua_setfield(L,-2,"USER_DEFINED_ROTATION");


	lua_newtable(L); // enum Layout

	lua_pushnumber(L,osgText::TextBase::LEFT_TO_RIGHT); lua_setfield(L,-2,"LEFT_TO_RIGHT");
	lua_pushnumber(L,osgText::TextBase::RIGHT_TO_LEFT); lua_setfield(L,-2,"RIGHT_TO_LEFT");
	lua_pushnumber(L,osgText::TextBase::VERTICAL); lua_setfield(L,-2,"VERTICAL");

	lua_setfield(L,-2,"Layout");

	lua_pushnumber(L,osgText::TextBase::LEFT_TO_RIGHT); lua_setfield(L,-2,"LEFT_TO_RIGHT");
	lua_pushnumber(L,osgText::TextBase::RIGHT_TO_LEFT); lua_setfield(L,-2,"RIGHT_TO_LEFT");
	lua_pushnumber(L,osgText::TextBase::VERTICAL); lua_setfield(L,-2,"VERTICAL");


	lua_newtable(L); // enum DrawModeMask

	lua_pushnumber(L,osgText::TextBase::TEXT); lua_setfield(L,-2,"TEXT");
	lua_pushnumber(L,osgText::TextBase::BOUNDINGBOX); lua_setfield(L,-2,"BOUNDINGBOX");
	lua_pushnumber(L,osgText::TextBase::FILLEDBOUNDINGBOX); lua_setfield(L,-2,"FILLEDBOUNDINGBOX");
	lua_pushnumber(L,osgText::TextBase::ALIGNMENT); lua_setfield(L,-2,"ALIGNMENT");

	lua_setfield(L,-2,"DrawModeMask");

	lua_pushnumber(L,osgText::TextBase::TEXT); lua_setfield(L,-2,"TEXT");
	lua_pushnumber(L,osgText::TextBase::BOUNDINGBOX); lua_setfield(L,-2,"BOUNDINGBOX");
	lua_pushnumber(L,osgText::TextBase::FILLEDBOUNDINGBOX); lua_setfield(L,-2,"FILLEDBOUNDINGBOX");
	lua_pushnumber(L,osgText::TextBase::ALIGNMENT); lua_setfield(L,-2,"ALIGNMENT");


	lua_newtable(L); // enum ModeValues

	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_ON_DISPLAY_LISTS); lua_setfield(L,-2,"SWITCH_ON_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_OFF_DISPLAY_LISTS); lua_setfield(L,-2,"SWITCH_OFF_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS); lua_setfield(L,-2,"COMPILE_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES); lua_setfield(L,-2,"COMPILE_STATE_ATTRIBUTES");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::RELEASE_DISPLAY_LISTS); lua_setfield(L,-2,"RELEASE_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::RELEASE_STATE_ATTRIBUTES); lua_setfield(L,-2,"RELEASE_STATE_ATTRIBUTES");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_ON_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"SWITCH_ON_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_OFF_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"SWITCH_OFF_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES); lua_setfield(L,-2,"CHECK_BLACK_LISTED_MODES");

	lua_setfield(L,-2,"ModeValues");

	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_ON_DISPLAY_LISTS); lua_setfield(L,-2,"SWITCH_ON_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_OFF_DISPLAY_LISTS); lua_setfield(L,-2,"SWITCH_OFF_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS); lua_setfield(L,-2,"COMPILE_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES); lua_setfield(L,-2,"COMPILE_STATE_ATTRIBUTES");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::RELEASE_DISPLAY_LISTS); lua_setfield(L,-2,"RELEASE_DISPLAY_LISTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::RELEASE_STATE_ATTRIBUTES); lua_setfield(L,-2,"RELEASE_STATE_ATTRIBUTES");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_ON_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"SWITCH_ON_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::SWITCH_OFF_VERTEX_BUFFER_OBJECTS); lua_setfield(L,-2,"SWITCH_OFF_VERTEX_BUFFER_OBJECTS");
	lua_pushnumber(L,osgUtil::GLObjectsVisitor::CHECK_BLACK_LISTED_MODES); lua_setfield(L,-2,"CHECK_BLACK_LISTED_MODES");


	lua_newtable(L); // enum CoordinateFrame

	lua_pushnumber(L,osgUtil::Intersector::WINDOW); lua_setfield(L,-2,"WINDOW");
	lua_pushnumber(L,osgUtil::Intersector::PROJECTION); lua_setfield(L,-2,"PROJECTION");
	lua_pushnumber(L,osgUtil::Intersector::VIEW); lua_setfield(L,-2,"VIEW");
	lua_pushnumber(L,osgUtil::Intersector::MODEL); lua_setfield(L,-2,"MODEL");

	lua_setfield(L,-2,"CoordinateFrame");

	lua_pushnumber(L,osgUtil::Intersector::WINDOW); lua_setfield(L,-2,"WINDOW");
	lua_pushnumber(L,osgUtil::Intersector::PROJECTION); lua_setfield(L,-2,"PROJECTION");
	lua_pushnumber(L,osgUtil::Intersector::VIEW); lua_setfield(L,-2,"VIEW");
	lua_pushnumber(L,osgUtil::Intersector::MODEL); lua_setfield(L,-2,"MODEL");


	lua_newtable(L); // enum IntersectionLimit

	lua_pushnumber(L,osgUtil::Intersector::NO_LIMIT); lua_setfield(L,-2,"NO_LIMIT");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_ONE_PER_DRAWABLE); lua_setfield(L,-2,"LIMIT_ONE_PER_DRAWABLE");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_ONE); lua_setfield(L,-2,"LIMIT_ONE");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_NEAREST); lua_setfield(L,-2,"LIMIT_NEAREST");

	lua_setfield(L,-2,"IntersectionLimit");

	lua_pushnumber(L,osgUtil::Intersector::NO_LIMIT); lua_setfield(L,-2,"NO_LIMIT");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_ONE_PER_DRAWABLE); lua_setfield(L,-2,"LIMIT_ONE_PER_DRAWABLE");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_ONE); lua_setfield(L,-2,"LIMIT_ONE");
	lua_pushnumber(L,osgUtil::Intersector::LIMIT_NEAREST); lua_setfield(L,-2,"LIMIT_NEAREST");


	lua_newtable(L); // enum LODSelectionMode

	lua_pushnumber(L,osgUtil::IntersectionVisitor::USE_HIGHEST_LEVEL_OF_DETAIL); lua_setfield(L,-2,"USE_HIGHEST_LEVEL_OF_DETAIL");
	lua_pushnumber(L,osgUtil::IntersectionVisitor::USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION); lua_setfield(L,-2,"USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION");

	lua_setfield(L,-2,"LODSelectionMode");

	lua_pushnumber(L,osgUtil::IntersectionVisitor::USE_HIGHEST_LEVEL_OF_DETAIL); lua_setfield(L,-2,"USE_HIGHEST_LEVEL_OF_DETAIL");
	lua_pushnumber(L,osgUtil::IntersectionVisitor::USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION); lua_setfield(L,-2,"USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION");


	lua_newtable(L); // enum LODSelectionMode

	lua_pushnumber(L,osgUtil::IntersectVisitor::USE_HIGHEST_LEVEL_OF_DETAIL); lua_setfield(L,-2,"USE_HIGHEST_LEVEL_OF_DETAIL");
	lua_pushnumber(L,osgUtil::IntersectVisitor::USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION); lua_setfield(L,-2,"USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION");

	lua_setfield(L,-2,"LODSelectionMode");

	lua_pushnumber(L,osgUtil::IntersectVisitor::USE_HIGHEST_LEVEL_OF_DETAIL); lua_setfield(L,-2,"USE_HIGHEST_LEVEL_OF_DETAIL");
	lua_pushnumber(L,osgUtil::IntersectVisitor::USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION); lua_setfield(L,-2,"USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION");


	lua_newtable(L); // enum OptimizationOptions

	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS); lua_setfield(L,-2,"FLATTEN_STATIC_TRANSFORMS");
	lua_pushnumber(L,osgUtil::Optimizer::REMOVE_REDUNDANT_NODES); lua_setfield(L,-2,"REMOVE_REDUNDANT_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::REMOVE_LOADED_PROXY_NODES); lua_setfield(L,-2,"REMOVE_LOADED_PROXY_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::COMBINE_ADJACENT_LODS); lua_setfield(L,-2,"COMBINE_ADJACENT_LODS");
	lua_pushnumber(L,osgUtil::Optimizer::SHARE_DUPLICATE_STATE); lua_setfield(L,-2,"SHARE_DUPLICATE_STATE");
	lua_pushnumber(L,osgUtil::Optimizer::MERGE_GEOMETRY); lua_setfield(L,-2,"MERGE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::CHECK_GEOMETRY); lua_setfield(L,-2,"CHECK_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::MAKE_FAST_GEOMETRY); lua_setfield(L,-2,"MAKE_FAST_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::SPATIALIZE_GROUPS); lua_setfield(L,-2,"SPATIALIZE_GROUPS");
	lua_pushnumber(L,osgUtil::Optimizer::COPY_SHARED_NODES); lua_setfield(L,-2,"COPY_SHARED_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::TRISTRIP_GEOMETRY); lua_setfield(L,-2,"TRISTRIP_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::TESSELLATE_GEOMETRY); lua_setfield(L,-2,"TESSELLATE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::OPTIMIZE_TEXTURE_SETTINGS); lua_setfield(L,-2,"OPTIMIZE_TEXTURE_SETTINGS");
	lua_pushnumber(L,osgUtil::Optimizer::MERGE_GEODES); lua_setfield(L,-2,"MERGE_GEODES");
	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_BILLBOARDS); lua_setfield(L,-2,"FLATTEN_BILLBOARDS");
	lua_pushnumber(L,osgUtil::Optimizer::TEXTURE_ATLAS_BUILDER); lua_setfield(L,-2,"TEXTURE_ATLAS_BUILDER");
	lua_pushnumber(L,osgUtil::Optimizer::STATIC_OBJECT_DETECTION); lua_setfield(L,-2,"STATIC_OBJECT_DETECTION");
	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS); lua_setfield(L,-2,"FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS");
	lua_pushnumber(L,osgUtil::Optimizer::INDEX_MESH); lua_setfield(L,-2,"INDEX_MESH");
	lua_pushnumber(L,osgUtil::Optimizer::VERTEX_POSTTRANSFORM); lua_setfield(L,-2,"VERTEX_POSTTRANSFORM");
	lua_pushnumber(L,osgUtil::Optimizer::VERTEX_PRETRANSFORM); lua_setfield(L,-2,"VERTEX_PRETRANSFORM");
	lua_pushnumber(L,osgUtil::Optimizer::DEFAULT_OPTIMIZATIONS); lua_setfield(L,-2,"DEFAULT_OPTIMIZATIONS");
	lua_pushnumber(L,osgUtil::Optimizer::ALL_OPTIMIZATIONS); lua_setfield(L,-2,"ALL_OPTIMIZATIONS");

	lua_setfield(L,-2,"OptimizationOptions");

	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS); lua_setfield(L,-2,"FLATTEN_STATIC_TRANSFORMS");
	lua_pushnumber(L,osgUtil::Optimizer::REMOVE_REDUNDANT_NODES); lua_setfield(L,-2,"REMOVE_REDUNDANT_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::REMOVE_LOADED_PROXY_NODES); lua_setfield(L,-2,"REMOVE_LOADED_PROXY_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::COMBINE_ADJACENT_LODS); lua_setfield(L,-2,"COMBINE_ADJACENT_LODS");
	lua_pushnumber(L,osgUtil::Optimizer::SHARE_DUPLICATE_STATE); lua_setfield(L,-2,"SHARE_DUPLICATE_STATE");
	lua_pushnumber(L,osgUtil::Optimizer::MERGE_GEOMETRY); lua_setfield(L,-2,"MERGE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::CHECK_GEOMETRY); lua_setfield(L,-2,"CHECK_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::MAKE_FAST_GEOMETRY); lua_setfield(L,-2,"MAKE_FAST_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::SPATIALIZE_GROUPS); lua_setfield(L,-2,"SPATIALIZE_GROUPS");
	lua_pushnumber(L,osgUtil::Optimizer::COPY_SHARED_NODES); lua_setfield(L,-2,"COPY_SHARED_NODES");
	lua_pushnumber(L,osgUtil::Optimizer::TRISTRIP_GEOMETRY); lua_setfield(L,-2,"TRISTRIP_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::TESSELLATE_GEOMETRY); lua_setfield(L,-2,"TESSELLATE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Optimizer::OPTIMIZE_TEXTURE_SETTINGS); lua_setfield(L,-2,"OPTIMIZE_TEXTURE_SETTINGS");
	lua_pushnumber(L,osgUtil::Optimizer::MERGE_GEODES); lua_setfield(L,-2,"MERGE_GEODES");
	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_BILLBOARDS); lua_setfield(L,-2,"FLATTEN_BILLBOARDS");
	lua_pushnumber(L,osgUtil::Optimizer::TEXTURE_ATLAS_BUILDER); lua_setfield(L,-2,"TEXTURE_ATLAS_BUILDER");
	lua_pushnumber(L,osgUtil::Optimizer::STATIC_OBJECT_DETECTION); lua_setfield(L,-2,"STATIC_OBJECT_DETECTION");
	lua_pushnumber(L,osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS); lua_setfield(L,-2,"FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS");
	lua_pushnumber(L,osgUtil::Optimizer::INDEX_MESH); lua_setfield(L,-2,"INDEX_MESH");
	lua_pushnumber(L,osgUtil::Optimizer::VERTEX_POSTTRANSFORM); lua_setfield(L,-2,"VERTEX_POSTTRANSFORM");
	lua_pushnumber(L,osgUtil::Optimizer::VERTEX_PRETRANSFORM); lua_setfield(L,-2,"VERTEX_PRETRANSFORM");
	lua_pushnumber(L,osgUtil::Optimizer::DEFAULT_OPTIMIZATIONS); lua_setfield(L,-2,"DEFAULT_OPTIMIZATIONS");
	lua_pushnumber(L,osgUtil::Optimizer::ALL_OPTIMIZATIONS); lua_setfield(L,-2,"ALL_OPTIMIZATIONS");


	lua_newtable(L); // enum FitsIn


	lua_setfield(L,-2,"FitsIn");



	lua_newtable(L); // enum unnamed_17

	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimZero); lua_setfield(L,-2,"DimZero");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimOne); lua_setfield(L,-2,"DimOne");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimTwo); lua_setfield(L,-2,"DimTwo");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::AllDims); lua_setfield(L,-2,"AllDims");

	lua_setfield(L,-2,"unnamed_17");

	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimZero); lua_setfield(L,-2,"DimZero");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimOne); lua_setfield(L,-2,"DimOne");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::DimTwo); lua_setfield(L,-2,"DimTwo");
	lua_pushnumber(L,osgUtil::PolytopeIntersector::AllDims); lua_setfield(L,-2,"AllDims");


	lua_newtable(L); // enum unnamed_18

	lua_pushnumber(L,osgUtil::PolytopeIntersector::Intersection::MaxNumIntesectionPoints); lua_setfield(L,-2,"MaxNumIntesectionPoints");

	lua_setfield(L,-2,"unnamed_18");

	lua_pushnumber(L,osgUtil::PolytopeIntersector::Intersection::MaxNumIntesectionPoints); lua_setfield(L,-2,"MaxNumIntesectionPoints");


	lua_newtable(L); // enum SortMode

	lua_pushnumber(L,osgUtil::RenderBin::SORT_BY_STATE); lua_setfield(L,-2,"SORT_BY_STATE");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_BY_STATE_THEN_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_BY_STATE_THEN_FRONT_TO_BACK");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_FRONT_TO_BACK");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_BACK_TO_FRONT); lua_setfield(L,-2,"SORT_BACK_TO_FRONT");
	lua_pushnumber(L,osgUtil::RenderBin::TRAVERSAL_ORDER); lua_setfield(L,-2,"TRAVERSAL_ORDER");

	lua_setfield(L,-2,"SortMode");

	lua_pushnumber(L,osgUtil::RenderBin::SORT_BY_STATE); lua_setfield(L,-2,"SORT_BY_STATE");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_BY_STATE_THEN_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_BY_STATE_THEN_FRONT_TO_BACK");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_FRONT_TO_BACK); lua_setfield(L,-2,"SORT_FRONT_TO_BACK");
	lua_pushnumber(L,osgUtil::RenderBin::SORT_BACK_TO_FRONT); lua_setfield(L,-2,"SORT_BACK_TO_FRONT");
	lua_pushnumber(L,osgUtil::RenderBin::TRAVERSAL_ORDER); lua_setfield(L,-2,"TRAVERSAL_ORDER");


	lua_newtable(L); // enum Options

	lua_pushnumber(L,osgUtil::SceneView::NO_SCENEVIEW_LIGHT); lua_setfield(L,-2,"NO_SCENEVIEW_LIGHT");
	lua_pushnumber(L,osgUtil::SceneView::HEADLIGHT); lua_setfield(L,-2,"HEADLIGHT");
	lua_pushnumber(L,osgUtil::SceneView::SKY_LIGHT); lua_setfield(L,-2,"SKY_LIGHT");
	lua_pushnumber(L,osgUtil::SceneView::COMPILE_GLOBJECTS_AT_INIT); lua_setfield(L,-2,"COMPILE_GLOBJECTS_AT_INIT");
	lua_pushnumber(L,osgUtil::SceneView::STANDARD_SETTINGS); lua_setfield(L,-2,"STANDARD_SETTINGS");

	lua_setfield(L,-2,"Options");

	lua_pushnumber(L,osgUtil::SceneView::NO_SCENEVIEW_LIGHT); lua_setfield(L,-2,"NO_SCENEVIEW_LIGHT");
	lua_pushnumber(L,osgUtil::SceneView::HEADLIGHT); lua_setfield(L,-2,"HEADLIGHT");
	lua_pushnumber(L,osgUtil::SceneView::SKY_LIGHT); lua_setfield(L,-2,"SKY_LIGHT");
	lua_pushnumber(L,osgUtil::SceneView::COMPILE_GLOBJECTS_AT_INIT); lua_setfield(L,-2,"COMPILE_GLOBJECTS_AT_INIT");
	lua_pushnumber(L,osgUtil::SceneView::STANDARD_SETTINGS); lua_setfield(L,-2,"STANDARD_SETTINGS");


	lua_newtable(L); // enum ActiveUniforms

	lua_pushnumber(L,osgUtil::SceneView::FRAME_NUMBER_UNIFORM); lua_setfield(L,-2,"FRAME_NUMBER_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::FRAME_TIME_UNIFORM); lua_setfield(L,-2,"FRAME_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DELTA_FRAME_TIME_UNIFORM); lua_setfield(L,-2,"DELTA_FRAME_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::SIMULATION_TIME_UNIFORM); lua_setfield(L,-2,"SIMULATION_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DELTA_SIMULATION_TIME_UNIFORM); lua_setfield(L,-2,"DELTA_SIMULATION_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::VIEW_MATRIX_UNIFORM); lua_setfield(L,-2,"VIEW_MATRIX_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::VIEW_MATRIX_INVERSE_UNIFORM); lua_setfield(L,-2,"VIEW_MATRIX_INVERSE_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DEFAULT_UNIFORMS); lua_setfield(L,-2,"DEFAULT_UNIFORMS");
	lua_pushnumber(L,osgUtil::SceneView::ALL_UNIFORMS); lua_setfield(L,-2,"ALL_UNIFORMS");

	lua_setfield(L,-2,"ActiveUniforms");

	lua_pushnumber(L,osgUtil::SceneView::FRAME_NUMBER_UNIFORM); lua_setfield(L,-2,"FRAME_NUMBER_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::FRAME_TIME_UNIFORM); lua_setfield(L,-2,"FRAME_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DELTA_FRAME_TIME_UNIFORM); lua_setfield(L,-2,"DELTA_FRAME_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::SIMULATION_TIME_UNIFORM); lua_setfield(L,-2,"SIMULATION_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DELTA_SIMULATION_TIME_UNIFORM); lua_setfield(L,-2,"DELTA_SIMULATION_TIME_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::VIEW_MATRIX_UNIFORM); lua_setfield(L,-2,"VIEW_MATRIX_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::VIEW_MATRIX_INVERSE_UNIFORM); lua_setfield(L,-2,"VIEW_MATRIX_INVERSE_UNIFORM");
	lua_pushnumber(L,osgUtil::SceneView::DEFAULT_UNIFORMS); lua_setfield(L,-2,"DEFAULT_UNIFORMS");
	lua_pushnumber(L,osgUtil::SceneView::ALL_UNIFORMS); lua_setfield(L,-2,"ALL_UNIFORMS");


	lua_newtable(L); // enum FusionDistanceMode

	lua_pushnumber(L,osgUtil::SceneView::USE_FUSION_DISTANCE_VALUE); lua_setfield(L,-2,"USE_FUSION_DISTANCE_VALUE");
	lua_pushnumber(L,osgUtil::SceneView::PROPORTIONAL_TO_SCREEN_DISTANCE); lua_setfield(L,-2,"PROPORTIONAL_TO_SCREEN_DISTANCE");

	lua_setfield(L,-2,"FusionDistanceMode");

	lua_pushnumber(L,osgUtil::SceneView::USE_FUSION_DISTANCE_VALUE); lua_setfield(L,-2,"USE_FUSION_DISTANCE_VALUE");
	lua_pushnumber(L,osgUtil::SceneView::PROPORTIONAL_TO_SCREEN_DISTANCE); lua_setfield(L,-2,"PROPORTIONAL_TO_SCREEN_DISTANCE");


	lua_newtable(L); // enum StateMask

	lua_pushnumber(L,osgUtil::ShaderGenCache::BLEND); lua_setfield(L,-2,"BLEND");
	lua_pushnumber(L,osgUtil::ShaderGenCache::LIGHTING); lua_setfield(L,-2,"LIGHTING");
	lua_pushnumber(L,osgUtil::ShaderGenCache::FOG); lua_setfield(L,-2,"FOG");
	lua_pushnumber(L,osgUtil::ShaderGenCache::DIFFUSE_MAP); lua_setfield(L,-2,"DIFFUSE_MAP");
	lua_pushnumber(L,osgUtil::ShaderGenCache::NORMAL_MAP); lua_setfield(L,-2,"NORMAL_MAP");

	lua_setfield(L,-2,"StateMask");

	lua_pushnumber(L,osgUtil::ShaderGenCache::BLEND); lua_setfield(L,-2,"BLEND");
	lua_pushnumber(L,osgUtil::ShaderGenCache::LIGHTING); lua_setfield(L,-2,"LIGHTING");
	lua_pushnumber(L,osgUtil::ShaderGenCache::FOG); lua_setfield(L,-2,"FOG");
	lua_pushnumber(L,osgUtil::ShaderGenCache::DIFFUSE_MAP); lua_setfield(L,-2,"DIFFUSE_MAP");
	lua_pushnumber(L,osgUtil::ShaderGenCache::NORMAL_MAP); lua_setfield(L,-2,"NORMAL_MAP");


	lua_newtable(L); // enum StatsType

	lua_pushnumber(L,osgUtil::Statistics::STAT_NONE); lua_setfield(L,-2,"STAT_NONE");
	lua_pushnumber(L,osgUtil::Statistics::STAT_FRAMERATE); lua_setfield(L,-2,"STAT_FRAMERATE");
	lua_pushnumber(L,osgUtil::Statistics::STAT_GRAPHS); lua_setfield(L,-2,"STAT_GRAPHS");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMS); lua_setfield(L,-2,"STAT_PRIMS");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMSPERVIEW); lua_setfield(L,-2,"STAT_PRIMSPERVIEW");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMSPERBIN); lua_setfield(L,-2,"STAT_PRIMSPERBIN");
	lua_pushnumber(L,osgUtil::Statistics::STAT_DC); lua_setfield(L,-2,"STAT_DC");
	lua_pushnumber(L,osgUtil::Statistics::STAT_RESTART); lua_setfield(L,-2,"STAT_RESTART");

	lua_setfield(L,-2,"StatsType");

	lua_pushnumber(L,osgUtil::Statistics::STAT_NONE); lua_setfield(L,-2,"STAT_NONE");
	lua_pushnumber(L,osgUtil::Statistics::STAT_FRAMERATE); lua_setfield(L,-2,"STAT_FRAMERATE");
	lua_pushnumber(L,osgUtil::Statistics::STAT_GRAPHS); lua_setfield(L,-2,"STAT_GRAPHS");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMS); lua_setfield(L,-2,"STAT_PRIMS");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMSPERVIEW); lua_setfield(L,-2,"STAT_PRIMSPERVIEW");
	lua_pushnumber(L,osgUtil::Statistics::STAT_PRIMSPERBIN); lua_setfield(L,-2,"STAT_PRIMSPERBIN");
	lua_pushnumber(L,osgUtil::Statistics::STAT_DC); lua_setfield(L,-2,"STAT_DC");
	lua_pushnumber(L,osgUtil::Statistics::STAT_RESTART); lua_setfield(L,-2,"STAT_RESTART");


	lua_newtable(L); // enum WindingType

	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_ODD); lua_setfield(L,-2,"TESS_WINDING_ODD");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_NONZERO); lua_setfield(L,-2,"TESS_WINDING_NONZERO");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_POSITIVE); lua_setfield(L,-2,"TESS_WINDING_POSITIVE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_NEGATIVE); lua_setfield(L,-2,"TESS_WINDING_NEGATIVE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_ABS_GEQ_TWO); lua_setfield(L,-2,"TESS_WINDING_ABS_GEQ_TWO");

	lua_setfield(L,-2,"WindingType");

	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_ODD); lua_setfield(L,-2,"TESS_WINDING_ODD");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_NONZERO); lua_setfield(L,-2,"TESS_WINDING_NONZERO");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_POSITIVE); lua_setfield(L,-2,"TESS_WINDING_POSITIVE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_NEGATIVE); lua_setfield(L,-2,"TESS_WINDING_NEGATIVE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_WINDING_ABS_GEQ_TWO); lua_setfield(L,-2,"TESS_WINDING_ABS_GEQ_TWO");


	lua_newtable(L); // enum TessellationType

	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_GEOMETRY); lua_setfield(L,-2,"TESS_TYPE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_DRAWABLE); lua_setfield(L,-2,"TESS_TYPE_DRAWABLE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_POLYGONS); lua_setfield(L,-2,"TESS_TYPE_POLYGONS");

	lua_setfield(L,-2,"TessellationType");

	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_GEOMETRY); lua_setfield(L,-2,"TESS_TYPE_GEOMETRY");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_DRAWABLE); lua_setfield(L,-2,"TESS_TYPE_DRAWABLE");
	lua_pushnumber(L,osgUtil::Tessellator::TESS_TYPE_POLYGONS); lua_setfield(L,-2,"TESS_TYPE_POLYGONS");


	lua_newtable(L); // enum MouseCursor

	lua_pushnumber(L,osgViewer::GraphicsWindow::InheritCursor); lua_setfield(L,-2,"InheritCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::NoCursor); lua_setfield(L,-2,"NoCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::RightArrowCursor); lua_setfield(L,-2,"RightArrowCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftArrowCursor); lua_setfield(L,-2,"LeftArrowCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::InfoCursor); lua_setfield(L,-2,"InfoCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::DestroyCursor); lua_setfield(L,-2,"DestroyCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::HelpCursor); lua_setfield(L,-2,"HelpCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::CycleCursor); lua_setfield(L,-2,"CycleCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::SprayCursor); lua_setfield(L,-2,"SprayCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::WaitCursor); lua_setfield(L,-2,"WaitCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TextCursor); lua_setfield(L,-2,"TextCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::CrosshairCursor); lua_setfield(L,-2,"CrosshairCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::HandCursor); lua_setfield(L,-2,"HandCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::UpDownCursor); lua_setfield(L,-2,"UpDownCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftRightCursor); lua_setfield(L,-2,"LeftRightCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopSideCursor); lua_setfield(L,-2,"TopSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomSideCursor); lua_setfield(L,-2,"BottomSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftSideCursor); lua_setfield(L,-2,"LeftSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::RightSideCursor); lua_setfield(L,-2,"RightSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopLeftCorner); lua_setfield(L,-2,"TopLeftCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopRightCorner); lua_setfield(L,-2,"TopRightCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomRightCorner); lua_setfield(L,-2,"BottomRightCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomLeftCorner); lua_setfield(L,-2,"BottomLeftCorner");

	lua_setfield(L,-2,"MouseCursor");

	lua_pushnumber(L,osgViewer::GraphicsWindow::InheritCursor); lua_setfield(L,-2,"InheritCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::NoCursor); lua_setfield(L,-2,"NoCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::RightArrowCursor); lua_setfield(L,-2,"RightArrowCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftArrowCursor); lua_setfield(L,-2,"LeftArrowCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::InfoCursor); lua_setfield(L,-2,"InfoCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::DestroyCursor); lua_setfield(L,-2,"DestroyCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::HelpCursor); lua_setfield(L,-2,"HelpCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::CycleCursor); lua_setfield(L,-2,"CycleCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::SprayCursor); lua_setfield(L,-2,"SprayCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::WaitCursor); lua_setfield(L,-2,"WaitCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TextCursor); lua_setfield(L,-2,"TextCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::CrosshairCursor); lua_setfield(L,-2,"CrosshairCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::HandCursor); lua_setfield(L,-2,"HandCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::UpDownCursor); lua_setfield(L,-2,"UpDownCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftRightCursor); lua_setfield(L,-2,"LeftRightCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopSideCursor); lua_setfield(L,-2,"TopSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomSideCursor); lua_setfield(L,-2,"BottomSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::LeftSideCursor); lua_setfield(L,-2,"LeftSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::RightSideCursor); lua_setfield(L,-2,"RightSideCursor");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopLeftCorner); lua_setfield(L,-2,"TopLeftCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::TopRightCorner); lua_setfield(L,-2,"TopRightCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomRightCorner); lua_setfield(L,-2,"BottomRightCorner");
	lua_pushnumber(L,osgViewer::GraphicsWindow::BottomLeftCorner); lua_setfield(L,-2,"BottomLeftCorner");


	lua_newtable(L); // enum DepthMode

	lua_pushnumber(L,osgViewer::DepthPartitionSettings::FIXED_RANGE); lua_setfield(L,-2,"FIXED_RANGE");
	lua_pushnumber(L,osgViewer::DepthPartitionSettings::BOUNDING_VOLUME); lua_setfield(L,-2,"BOUNDING_VOLUME");

	lua_setfield(L,-2,"DepthMode");

	lua_pushnumber(L,osgViewer::DepthPartitionSettings::FIXED_RANGE); lua_setfield(L,-2,"FIXED_RANGE");
	lua_pushnumber(L,osgViewer::DepthPartitionSettings::BOUNDING_VOLUME); lua_setfield(L,-2,"BOUNDING_VOLUME");


	lua_newtable(L); // enum ThreadingModel

	lua_pushnumber(L,osgViewer::ViewerBase::SingleThreaded); lua_setfield(L,-2,"SingleThreaded");
	lua_pushnumber(L,osgViewer::ViewerBase::CullDrawThreadPerContext); lua_setfield(L,-2,"CullDrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::ThreadPerContext); lua_setfield(L,-2,"ThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::DrawThreadPerContext); lua_setfield(L,-2,"DrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::CullThreadPerCameraDrawThreadPerContext); lua_setfield(L,-2,"CullThreadPerCameraDrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::ThreadPerCamera); lua_setfield(L,-2,"ThreadPerCamera");
	lua_pushnumber(L,osgViewer::ViewerBase::AutomaticSelection); lua_setfield(L,-2,"AutomaticSelection");

	lua_setfield(L,-2,"ThreadingModel");

	lua_pushnumber(L,osgViewer::ViewerBase::SingleThreaded); lua_setfield(L,-2,"SingleThreaded");
	lua_pushnumber(L,osgViewer::ViewerBase::CullDrawThreadPerContext); lua_setfield(L,-2,"CullDrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::ThreadPerContext); lua_setfield(L,-2,"ThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::DrawThreadPerContext); lua_setfield(L,-2,"DrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::CullThreadPerCameraDrawThreadPerContext); lua_setfield(L,-2,"CullThreadPerCameraDrawThreadPerContext");
	lua_pushnumber(L,osgViewer::ViewerBase::ThreadPerCamera); lua_setfield(L,-2,"ThreadPerCamera");
	lua_pushnumber(L,osgViewer::ViewerBase::AutomaticSelection); lua_setfield(L,-2,"AutomaticSelection");


	lua_newtable(L); // enum BarrierPosition

	lua_pushnumber(L,osgViewer::ViewerBase::BeforeSwapBuffers); lua_setfield(L,-2,"BeforeSwapBuffers");
	lua_pushnumber(L,osgViewer::ViewerBase::AfterSwapBuffers); lua_setfield(L,-2,"AfterSwapBuffers");

	lua_setfield(L,-2,"BarrierPosition");

	lua_pushnumber(L,osgViewer::ViewerBase::BeforeSwapBuffers); lua_setfield(L,-2,"BeforeSwapBuffers");
	lua_pushnumber(L,osgViewer::ViewerBase::AfterSwapBuffers); lua_setfield(L,-2,"AfterSwapBuffers");


	lua_newtable(L); // enum FrameScheme

	lua_pushnumber(L,osgViewer::ViewerBase::ON_DEMAND); lua_setfield(L,-2,"ON_DEMAND");
	lua_pushnumber(L,osgViewer::ViewerBase::CONTINUOUS); lua_setfield(L,-2,"CONTINUOUS");

	lua_setfield(L,-2,"FrameScheme");

	lua_pushnumber(L,osgViewer::ViewerBase::ON_DEMAND); lua_setfield(L,-2,"ON_DEMAND");
	lua_pushnumber(L,osgViewer::ViewerBase::CONTINUOUS); lua_setfield(L,-2,"CONTINUOUS");


	lua_newtable(L); // enum StatsType

	lua_pushnumber(L,osgViewer::StatsHandler::NO_STATS); lua_setfield(L,-2,"NO_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::FRAME_RATE); lua_setfield(L,-2,"FRAME_RATE");
	lua_pushnumber(L,osgViewer::StatsHandler::VIEWER_STATS); lua_setfield(L,-2,"VIEWER_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::CAMERA_SCENE_STATS); lua_setfield(L,-2,"CAMERA_SCENE_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::VIEWER_SCENE_STATS); lua_setfield(L,-2,"VIEWER_SCENE_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::LAST); lua_setfield(L,-2,"LAST");

	lua_setfield(L,-2,"StatsType");

	lua_pushnumber(L,osgViewer::StatsHandler::NO_STATS); lua_setfield(L,-2,"NO_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::FRAME_RATE); lua_setfield(L,-2,"FRAME_RATE");
	lua_pushnumber(L,osgViewer::StatsHandler::VIEWER_STATS); lua_setfield(L,-2,"VIEWER_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::CAMERA_SCENE_STATS); lua_setfield(L,-2,"CAMERA_SCENE_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::VIEWER_SCENE_STATS); lua_setfield(L,-2,"VIEWER_SCENE_STATS");
	lua_pushnumber(L,osgViewer::StatsHandler::LAST); lua_setfield(L,-2,"LAST");


	lua_newtable(L); // enum SavePolicy

	lua_pushnumber(L,osgViewer::ScreenCaptureHandler::WriteToFile::OVERWRITE); lua_setfield(L,-2,"OVERWRITE");
	lua_pushnumber(L,osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER); lua_setfield(L,-2,"SEQUENTIAL_NUMBER");

	lua_setfield(L,-2,"SavePolicy");

	lua_pushnumber(L,osgViewer::ScreenCaptureHandler::WriteToFile::OVERWRITE); lua_setfield(L,-2,"OVERWRITE");
	lua_pushnumber(L,osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER); lua_setfield(L,-2,"SEQUENTIAL_NUMBER");


}

#ifdef __cplusplus
}
#endif

