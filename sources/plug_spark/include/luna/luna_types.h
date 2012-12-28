#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <SparkDrawable.h>
#include <SparkUpdatingHandler.h>
#include <Core/SPK_ArrayBuffer.h>
#include <Core/SPK_Buffer.h>
#include <Core/SPK_BufferHandler.h>
#include <Core/SPK_Registerable.h>
#include <Core/SPK_Transformable.h>
#include <Core/SPK_Emitter.h>
#include <Core/SPK_Factory.h>
#include <Core/SPK_Group.h>
#include <Core/SPK_Interpolator.h>
#include <Core/SPK_Model.h>
#include <Core/SPK_Modifier.h>
#include <Core/SPK_Particle.h>
#include <Core/SPK_Renderer.h>
#include <Core/SPK_System.h>
#include <Core/SPK_Vector3D.h>
#include <Core/SPK_Zone.h>
#include <Extensions/Emitters/SPK_NormalEmitter.h>
#include <Extensions/Emitters/SPK_RandomEmitter.h>
#include <Extensions/Emitters/SPK_SphericEmitter.h>
#include <Extensions/Emitters/SPK_StaticEmitter.h>
#include <Extensions/Emitters/SPK_StraightEmitter.h>
#include <Extensions/Modifiers/SPK_Collision.h>
#include <Extensions/Modifiers/SPK_Destroyer.h>
#include <Extensions/Modifiers/SPK_LinearForce.h>
#include <Extensions/Modifiers/SPK_ModifierGroup.h>
#include <Extensions/Modifiers/SPK_Obstacle.h>
#include <Extensions/Modifiers/SPK_PointMass.h>
#include <Extensions/Modifiers/SPK_Rotator.h>
#include <Extensions/Modifiers/SPK_Vortex.h>
#include <Extensions/Renderers/SPK_LineRendererInterface.h>
#include <Extensions/Renderers/SPK_Oriented2DRendererInterface.h>
#include <Extensions/Renderers/SPK_Oriented3DRendererInterface.h>
#include <Extensions/Renderers/SPK_PointRendererInterface.h>
#include <Extensions/Renderers/SPK_QuadRendererInterface.h>
#include <Extensions/Zones/SPK_AABox.h>
#include <Extensions/Zones/SPK_Cylinder.h>
#include <Extensions/Zones/SPK_Line.h>
#include <Extensions/Zones/SPK_Plane.h>
#include <Extensions/Zones/SPK_Point.h>
#include <Extensions/Zones/SPK_Ring.h>
#include <Extensions/Zones/SPK_Sphere.h>
#include <RenderingAPIs/OpenGL/SPK_GLExtHandler.h>
#include <RenderingAPIs/OpenGL/SPK_GLRenderer.h>
#include <RenderingAPIs/OpenGL/SPK_GLLineRenderer.h>
#include <RenderingAPIs/OpenGL/SPK_GLLineTrailRenderer.h>
#include <RenderingAPIs/OpenGL/SPK_GLPointRenderer.h>
#include <RenderingAPIs/OpenGL/SPK_GLQuadRenderer.h>

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
	typedef osg::Drawable parent_t;
	typedef osg::Drawable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable* obj);
	typedef osg::Drawable parent_t;
	typedef SparkDrawable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::vector< SPK::System * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< SPK::System * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< SPK::System * >* obj);
	typedef SparkDrawable::ParticleSystemList parent_t;
	typedef std::vector< SPK::System * > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< std::map< std::string, SparkDrawable::ImageAttribute > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, SparkDrawable::ImageAttribute >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, SparkDrawable::ImageAttribute >* obj);
	typedef SparkDrawable::TextureObjMap parent_t;
	typedef std::map< std::string, SparkDrawable::ImageAttribute > base_t;
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
	typedef SparkDrawable::TextureIDMap parent_t;
	typedef std::map< std::string, unsigned int > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable::BaseSystemCreator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable::BaseSystemCreator* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable::BaseSystemCreator* obj);
	typedef SparkDrawable::BaseSystemCreator parent_t;
	typedef SparkDrawable::BaseSystemCreator base_t;
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
	typedef osg::Drawable::UpdateCallback parent_t;
	typedef osg::Drawable::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable::DeferredSystemHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable::DeferredSystemHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable::DeferredSystemHandler* obj);
	typedef osg::Drawable::UpdateCallback parent_t;
	typedef SparkDrawable::DeferredSystemHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable::DeferredSystemHandler::PosAndRotate* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable::DeferredSystemHandler::PosAndRotate* obj);
	typedef SparkDrawable::DeferredSystemHandler::PosAndRotate parent_t;
	typedef SparkDrawable::DeferredSystemHandler::PosAndRotate base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable::ImageAttribute > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable::ImageAttribute* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable::ImageAttribute* obj);
	typedef SparkDrawable::ImageAttribute parent_t;
	typedef SparkDrawable::ImageAttribute base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkDrawable::SortParticlesOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkDrawable::SortParticlesOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkDrawable::SortParticlesOperator* obj);
	typedef SparkDrawable::SortParticlesOperator parent_t;
	typedef SparkDrawable::SortParticlesOperator base_t;
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
	typedef osgGA::GUIEventHandler parent_t;
	typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SparkUpdatingHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SparkUpdatingHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(SparkUpdatingHandler* obj);
	typedef osgGA::GUIEventHandler parent_t;
	typedef SparkUpdatingHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::ArrayBuffer< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::ArrayBuffer< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::ArrayBuffer< float >* obj);
	typedef SPK::FloatBuffer parent_t;
	typedef SPK::ArrayBuffer< float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::ArrayBufferCreator< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::ArrayBufferCreator< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::ArrayBufferCreator< float >* obj);
	typedef SPK::FloatBufferCreator parent_t;
	typedef SPK::ArrayBufferCreator< float > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Buffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Buffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Buffer* obj);
	typedef SPK::Buffer parent_t;
	typedef SPK::Buffer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::BufferCreator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::BufferCreator* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::BufferCreator* obj);
	typedef SPK::BufferCreator parent_t;
	typedef SPK::BufferCreator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::BufferHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::BufferHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::BufferHandler* obj);
	typedef SPK::BufferHandler parent_t;
	typedef SPK::BufferHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Registerable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Registerable* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Registerable* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Registerable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Transformable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Transformable* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Transformable* obj);
	typedef SPK::Transformable parent_t;
	typedef SPK::Transformable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Emitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Emitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Emitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Emitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::SPKFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::SPKFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::SPKFactory* obj);
	typedef SPK::SPKFactory parent_t;
	typedef SPK::SPKFactory base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Group > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Group* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Group* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Group base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::InterpolatorEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::InterpolatorEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::InterpolatorEntry* obj);
	typedef SPK::InterpolatorEntry parent_t;
	typedef SPK::InterpolatorEntry base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Interpolator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Interpolator* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Interpolator* obj);
	typedef SPK::Interpolator parent_t;
	typedef SPK::Interpolator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Model > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Model* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Model* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Model base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Modifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Modifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Modifier* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Modifier base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Particle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Particle* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Particle* obj);
	typedef SPK::Particle parent_t;
	typedef SPK::Particle base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Renderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Renderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Renderer* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Renderer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::System > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::System* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::System* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::System base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Vector3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Vector3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Vector3D* obj);
	typedef SPK::Vector3D parent_t;
	typedef SPK::Vector3D base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Zone > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Zone* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Zone* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Zone base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::NormalEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::NormalEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::NormalEmitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::NormalEmitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::RandomEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::RandomEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::RandomEmitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::RandomEmitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::SphericEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::SphericEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::SphericEmitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::SphericEmitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::StaticEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::StaticEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::StaticEmitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::StaticEmitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::StraightEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::StraightEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::StraightEmitter* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::StraightEmitter base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Collision > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Collision* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Collision* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Collision base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Destroyer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Destroyer* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Destroyer* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Destroyer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::LinearForce > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::LinearForce* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::LinearForce* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::LinearForce base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::ModifierGroup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::ModifierGroup* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::ModifierGroup* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::ModifierGroup base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Obstacle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Obstacle* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Obstacle* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Obstacle base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::PointMass > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::PointMass* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::PointMass* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::PointMass base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Rotator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Rotator* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Rotator* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Rotator base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Vortex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Vortex* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Vortex* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Vortex base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::LineRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::LineRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::LineRendererInterface* obj);
	typedef SPK::LineRendererInterface parent_t;
	typedef SPK::LineRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Oriented2DRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Oriented2DRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Oriented2DRendererInterface* obj);
	typedef SPK::Oriented2DRendererInterface parent_t;
	typedef SPK::Oriented2DRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Oriented3DRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Oriented3DRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Oriented3DRendererInterface* obj);
	typedef SPK::Oriented3DRendererInterface parent_t;
	typedef SPK::Oriented3DRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::PointRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::PointRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::PointRendererInterface* obj);
	typedef SPK::PointRendererInterface parent_t;
	typedef SPK::PointRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::QuadRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::QuadRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::QuadRendererInterface* obj);
	typedef SPK::QuadRendererInterface parent_t;
	typedef SPK::QuadRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::AABox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::AABox* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::AABox* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::AABox base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Cylinder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Cylinder* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Cylinder* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Cylinder base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Line > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Line* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Line* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Line base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Plane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Plane* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Plane* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Plane base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Point > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Point* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Point* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Point base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Ring > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Ring* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Ring* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Ring base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Sphere > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Sphere* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Sphere* obj);
	typedef SPK::Registerable parent_t;
	typedef SPK::Sphere base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Pool< class SPK::Particle > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Pool< class SPK::Particle >* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Pool< class SPK::Particle >* obj);
	typedef SPK::Pool< class SPK::Particle > parent_t;
	typedef SPK::Pool< class SPK::Particle > base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLExtHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLExtHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLExtHandler* obj);
	typedef GL::GLExtHandler parent_t;
	typedef GL::GLExtHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLRenderer* obj);
	typedef SPK::Registerable parent_t;
	typedef GL::GLRenderer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLLineRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLLineRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLLineRenderer* obj);
	typedef SPK::Registerable parent_t;
	typedef GL::GLLineRenderer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLLineTrailRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLLineTrailRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLLineTrailRenderer* obj);
	typedef SPK::Registerable parent_t;
	typedef GL::GLLineTrailRenderer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLPointRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLPointRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLPointRenderer* obj);
	typedef SPK::Registerable parent_t;
	typedef GL::GLPointRenderer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< GL::GLQuadRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GL::GLQuadRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(GL::GLQuadRenderer* obj);
	typedef SPK::Registerable parent_t;
	typedef GL::GLQuadRenderer base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 20484188 > {
public:
	typedef osg::Drawable type;
	
};

template<>
class LunaType< 29584974 > {
public:
	typedef SparkDrawable::ParticleSystemList type;
	
};

template<>
class LunaType< 81928969 > {
public:
	typedef SparkDrawable::TextureObjMap type;
	
};

template<>
class LunaType< 92954997 > {
public:
	typedef SparkDrawable::TextureIDMap type;
	
};

template<>
class LunaType< 81795760 > {
public:
	typedef SparkDrawable::BaseSystemCreator type;
	
};

template<>
class LunaType< 5213827 > {
public:
	typedef osg::Drawable::UpdateCallback type;
	
};

template<>
class LunaType< 2783204 > {
public:
	typedef SparkDrawable::DeferredSystemHandler::PosAndRotate type;
	
};

template<>
class LunaType< 36168738 > {
public:
	typedef SparkDrawable::ImageAttribute type;
	
};

template<>
class LunaType< 7585549 > {
public:
	typedef SparkDrawable::SortParticlesOperator type;
	
};

template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 10104619 > {
public:
	typedef SPK::FloatBuffer type;
	
};

template<>
class LunaType< 26856862 > {
public:
	typedef SPK::FloatBufferCreator type;
	
};

template<>
class LunaType< 99782100 > {
public:
	typedef SPK::Buffer type;
	
};

template<>
class LunaType< 22446991 > {
public:
	typedef SPK::BufferCreator type;
	
};

template<>
class LunaType< 81662222 > {
public:
	typedef SPK::BufferHandler type;
	
};

template<>
class LunaType< 31337102 > {
public:
	typedef SPK::Registerable type;
	
};

template<>
class LunaType< 41560017 > {
public:
	typedef SPK::Transformable type;
	
};

template<>
class LunaType< 51091037 > {
public:
	typedef SPK::SPKFactory type;
	
};

template<>
class LunaType< 63689174 > {
public:
	typedef SPK::InterpolatorEntry type;
	
};

template<>
class LunaType< 45960683 > {
public:
	typedef SPK::Interpolator type;
	
};

template<>
class LunaType< 73657533 > {
public:
	typedef SPK::Particle type;
	
};

template<>
class LunaType< 70092749 > {
public:
	typedef SPK::Vector3D type;
	
};

template<>
class LunaType< 87424637 > {
public:
	typedef SPK::LineRendererInterface type;
	
};

template<>
class LunaType< 11888444 > {
public:
	typedef SPK::Oriented2DRendererInterface type;
	
};

template<>
class LunaType< 95637678 > {
public:
	typedef SPK::Oriented3DRendererInterface type;
	
};

template<>
class LunaType< 24217931 > {
public:
	typedef SPK::PointRendererInterface type;
	
};

template<>
class LunaType< 74399712 > {
public:
	typedef SPK::QuadRendererInterface type;
	
};

template<>
class LunaType< 49606317 > {
public:
	typedef SPK::Pool< class SPK::Particle > type;
	
};

template<>
class LunaType< 94328851 > {
public:
	typedef GL::GLExtHandler type;
	
};


#endif

