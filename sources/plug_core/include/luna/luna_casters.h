#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<__int64,dstType> {
	static inline dstType* cast(__int64* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<void,dstType> {
	static inline dstType* cast(void* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::ptime,dstType> {
	static inline dstType* cast(boost::posix_time::ptime* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::Mutex,dstType> {
	static inline dstType* cast(OpenThreads::Mutex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::DeleteHandler,dstType> {
	static inline dstType* cast(osg::DeleteHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Observer,dstType> {
	static inline dstType* cast(osg::Observer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::CopyOp,dstType> {
	static inline dstType* cast(osg::CopyOp* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ref_ptr< osg::Referenced >,dstType> {
	static inline dstType* cast(osg::ref_ptr< osg::Referenced >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::TimeManager,dstType> {
	static inline dstType* cast(sgt::TimeManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< sgt::LogSink > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< sgt::LogSink > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, int >,dstType> {
	static inline dstType* cast(std::map< int, int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, int >,dstType> {
	static inline dstType* cast(std::map< std::string, int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::LogRecord,dstType> {
	static inline dstType* cast(sgt::LogRecord* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< std::string >,dstType> {
	static inline dstType* cast(std::set< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::istream,dstType> {
	static inline dstType* cast(std::istream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::ostream,dstType> {
	static inline dstType* cast(std::ostream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

