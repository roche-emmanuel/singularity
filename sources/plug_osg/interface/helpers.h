typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

class __int64 {
};


class GLUtesselator {
protected:
	~GLUtesselator();
};

typedef GLUtesselator GLUtesselatorObj;
typedef GLUtesselator GLUtriangulatorObj;

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

namespace osg {

typedef NodeList RefNodePath;

class Vec2Array : public osg::Array {
public:
	Vec2Array();
	
	void push_back(const osg::Vec2& vec);
	unsigned int size();
	
	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec2Array();
};

class Vec3Array : public osg::Array {
public:
	Vec3Array();
	
	void push_back(const osg::Vec3& vec);
	unsigned int size();
	
	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec3Array();
};

class Vec4Array : public osg::Array {
public:
	Vec4Array();
	
	void push_back(const osg::Vec4& vec);
	unsigned int size();

	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec4Array();
};

};
