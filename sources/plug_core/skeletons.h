#ifndef _sgt_SKELETONS_H_
#define _sgt_SKELETONS_H_

class __int64 {
};

class BaseClass {
};

class void {
};

namespace boost {
	namespace posix_time {
		class ptime {
		};

	};

};

namespace osg {
	class depends_on {
	};

	class Referenced {
	};

	class Object: public osg::Referenced {
	};

};

namespace sgt {
	class RefPtr {
	};

	class Object: public osg::Object {
	};

	class Referenced: public osg::Referenced {
	};

	class TimeProvider: public sgt::Object {
	};

	class TimeManager {
	};

	class FileLogger: public sgt::LogSink {
	};

	class LogManager: public sgt::Referenced {
	public:
		class SinkVector {
		};

		class LevelFlagMap {
		};

		class TraceFlagMap {
		};

	};

	class LogRecord {
	};

	class LogSink: public sgt::Referenced {
	public:
		class StringSet {
		};

	};

	class StdLogger: public sgt::LogSink {
	};

	class AnyVector: public sgt::Object {
	};

};

namespace std {
	class istream {
	};

	class ostream {
	};

};


#endif
