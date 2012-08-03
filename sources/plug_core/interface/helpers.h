
namespace osg {

class Referenced {
protected:
	~Referenced();
};

class CopyOp {
public:

	enum Options
	{
		SHALLOW_COPY                = 0,
		DEEP_COPY_OBJECTS           = 1<<0,
		DEEP_COPY_NODES             = 1<<1,
		DEEP_COPY_DRAWABLES         = 1<<2,
		DEEP_COPY_STATESETS         = 1<<3,
		DEEP_COPY_STATEATTRIBUTES   = 1<<4,
		DEEP_COPY_TEXTURES          = 1<<5,
		DEEP_COPY_IMAGES            = 1<<6,
		DEEP_COPY_ARRAYS            = 1<<7,
		DEEP_COPY_PRIMITIVES        = 1<<8,
		DEEP_COPY_SHAPES            = 1<<9,
		DEEP_COPY_UNIFORMS          = 1<<10,
		DEEP_COPY_CALLBACKS         = 1<<11,
		DEEP_COPY_USERDATA          = 1<<12,
		DEEP_COPY_ALL               = 0x7FFFFFFF
	};

	typedef unsigned int CopyFlags;

	inline CopyOp(CopyFlags flags=SHALLOW_COPY):_flags(flags) {}
	virtual ~CopyOp() {}
};

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