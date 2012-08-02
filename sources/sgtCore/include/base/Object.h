/*
 * Object.h
 *
 *  Created on: 29 f�vr. 2012
 *      Author: kenshin
 */

#ifndef OBJECT_H_
#define OBJECT_H_

#include <sgtCommon.h>

namespace sgt {

#define Object_META(library,name) \
        virtual sgt::Object* cloneType() const { return new name (); } \
        virtual sgt::Object* clone() const { return new name (*this); } \
        virtual osg::Object* clone(const sgtCopyOp& copyop) const { return new name (*this,copyop); } \
        virtual bool isSameKindAs(const sgt::Object* obj) const { return dynamic_cast<const name *>(obj)!=NULL; } \
        virtual const char* libraryName() const { return #library; }\
        virtual const char* className() const { return #name; }  \
		virtual String toString(Bool shortDesc = false) { std::ostringstream os; toStream(os,shortDesc); return os.str(); }
		
#define Object_META_DEF(library,name) \
	name( const name & rhs ) {}; \
	name( const name & rhs, const sgtCopyOp& copyop ) {}; \
	virtual sgt::Object* cloneType() const { return new name (); } \
	virtual sgt::Object* clone() const { return new name (*this); } \
	virtual osg::Object* clone(const sgtCopyOp& copyop) const { return new name (*this,copyop); } \
	virtual bool isSameKindAs(const sgt::Object* obj) const { return dynamic_cast<const name *>(obj)!=NULL; } \
	virtual const char* libraryName() const { return #library; }\
	virtual const char* className() const { return #name; }  \
	virtual String toString(Bool shortDesc = false) { std::ostringstream os; toStream(os,shortDesc); return os.str(); }


/** Base class for all library object.
The Object class will serve as the base object class for all other classes. To simplify object access and memory management.
*/
class SGTCORE_EXPORT Object : public sgtObjectBase {
public:
	Object() {};
	virtual ~Object(); 
	
	template <typename OutStream>
	void toStream(OutStream& os, Bool shortDesc = false) {
		os << "[" << libraryName() << "::" << className() << "]";
	}
	
	inline void setName(const String& name) { _name = name; }

	inline String getName() { return _name; }

protected:
	/** The object name.*/
	String _name;
};

} /* namespace sc */

// Automatic global typedef
typedef sgt::Object sgtObject;

#endif /* OBJECT_H_ */
