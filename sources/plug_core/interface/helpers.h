
// This is a trick to successfully export Referenced and Object classes from the core
// module and use them from all other osg modules.
namespace osg {

// class Referenced {
// protected:
	// ~Referenced();
// };

// class Object : public osg::Referenced {
// public:
	// virtual Object* cloneType() const = 0;
	// virtual Object* clone(const CopyOp&) const = 0;
	// virtual const char* libraryName() const = 0;
	// virtual const char* className() const = 0;	
// protected:
	// ~Object();
// };


/** LUNA_EXTERNAL osg */
class DeleteHandler {
protected:
	~DeleteHandler();
};

/** LUNA_EXTERNAL osg */
class Observer {
protected:
	~Observer();
};

/** LUNA_EXTERNAL osg */
class ObserverSet : public osg::Referenced {
};

/** LUNA_EXTERNAL osg */
class UserDataContainer : public osg::Object {
};

/** LUNA_EXTERNAL osg */
class CopyOp {
protected:
	~CopyOp();
};

/** LUNA_EXTERNAL osg */
class State : public osg::Referenced, public osg::Observer {
protected:
	~State();
};

};

void doLog(int level, const std::string& msg);
void doLogV(int level, const std::string& msg);
void doTrace(int level, const std::string& trace, const std::string& msg);
void doTraceV(int level, const std::string& trace, const std::string& msg);

namespace boost {

namespace posix_time {

class ptime {
};

};

};

namespace sgt {

class TimeManager {
public:
	static TimeProvider& instance();
	static void destroy();
	static bool isInstanciated();
};

};
