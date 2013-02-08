#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<spark::SparkDrawable::DeferredSystemHandler::PosAndRotate,dstType> {
	static inline dstType* cast(spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Drawable::UpdateCallback,dstType> {
	static inline dstType* cast(osg::Drawable::UpdateCallback* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Drawable,dstType> {
	static inline dstType* cast(osg::Drawable* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Referenced,dstType> {
	static inline dstType* cast(osg::Referenced* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Object,dstType> {
	static inline dstType* cast(osg::Object* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgGA::GUIEventHandler,dstType> {
	static inline dstType* cast(osgGA::GUIEventHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< SPK::System * >,dstType> {
	static inline dstType* cast(std::vector< SPK::System * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, spark::SparkDrawable::ImageAttribute >,dstType> {
	static inline dstType* cast(std::map< std::string, spark::SparkDrawable::ImageAttribute >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, unsigned int >,dstType> {
	static inline dstType* cast(std::map< std::string, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<spark::SparkDrawable::ImageAttribute,dstType> {
	static inline dstType* cast(spark::SparkDrawable::ImageAttribute* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::ArrayBuffer< float >,dstType> {
	static inline dstType* cast(SPK::ArrayBuffer< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::ArrayBufferCreator< float >,dstType> {
	static inline dstType* cast(SPK::ArrayBufferCreator< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::SPKFactory,dstType> {
	static inline dstType* cast(SPK::SPKFactory* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::InterpolatorEntry,dstType> {
	static inline dstType* cast(SPK::InterpolatorEntry* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::Interpolator,dstType> {
	static inline dstType* cast(SPK::Interpolator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::Particle,dstType> {
	static inline dstType* cast(SPK::Particle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::Vector3D,dstType> {
	static inline dstType* cast(SPK::Vector3D* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SPK::GL::GLExtHandler,dstType> {
	static inline dstType* cast(SPK::GL::GLExtHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

