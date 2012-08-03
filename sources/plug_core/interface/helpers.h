
namespace osg {

/** LUNA_EXTERNAL osg */
class Referenced {
};

/** LUNA_EXTERNAL osg */
class CopyOp {
};

/** LUNA_EXTERNAL osg */
class Object : public osg::Referenced {
public:
	virtual Object* cloneType() const = 0;
	virtual Object* clone(const CopyOp&) const = 0;
	virtual const char* libraryName() const = 0;
	virtual const char* className() const = 0;
protected:
	~Object();
};
	
}

void doLog(int level, const std::string& msg);
void doLogV(int level, const std::string& msg);
void doTrace(int level, const std::string& trace, const std::string& msg);
void doTraceV(int level, const std::string& trace, const std::string& msg);