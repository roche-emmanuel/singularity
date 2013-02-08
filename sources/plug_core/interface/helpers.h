
namespace OpenThreads {

class Mutex {
};

};

// This is a trick to successfully export Referenced and Object classes from the core
// module and use them from all other osg modules.
namespace osg {

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

class __int64 {
};

class uintptr_t {
};

class void {
};

namespace std {

class istream {
protected:
	istream();
	~istream();
};

class ostream {
protected:
	ostream();
	~ostream();
};

}

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
protected:
	~TimeManager();
public:
	static TimeProvider& instance();
	static void destroy();
	static bool isInstanciated();
};

class ModuleManager {
protected:
	~ModuleManager();
public:
	static ModuleProvider& instance();
	static void destroy();
	static bool isInstanciated();
};

class AnyVector : public sgt::Object {
public:
	AnyVector();
};

};

LUNA_IMPLEMENT_VECTOR(int);
LUNA_IMPLEMENT_VECTOR(float);
LUNA_IMPLEMENT_VECTOR(double);
LUNA_IMPLEMENT_VECTOR(void*);
