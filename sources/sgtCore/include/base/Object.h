/*
 * Object.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef OBJECT_H_
#define OBJECT_H_

#include <sgtCommon.h>

namespace sgt {

#define Object_META(library,name) \
        virtual sgtObjectBase* cloneType() const { return new name (); } \
        virtual sgtObjectBase* clone() const { return new name (*this); } \
        virtual sgtObjectBase* clone(const sgtCopyOp& copyop) const { return new name (*this,copyop); } \
        virtual bool isSameKindAs(const sgtObjectBase* obj) const { return dynamic_cast<const name *>(obj)!=NULL; } \
        virtual const char* libraryName() const { return #library; }\
        virtual const char* className() const { return #name; } 
		//virtual String toString(Bool shortDesc = false) { std::ostringstream os; toStream(os,shortDesc); return os.str(); }
		
#define Object_META_DEF(library,name) \
	name( const name & rhs ) {}; \
	name( const name & rhs, const sgtCopyOp& copyop ) {}; \
	virtual sgtObjectBase* cloneType() const { return new name (); } \
	virtual sgtObjectBase* clone() const { return new name (*this); } \
	virtual sgtObjectBase* clone(const sgtCopyOp& copyop) const { return new name (*this,copyop); } \
	virtual bool isSameKindAs(const sgtObjectBase* obj) const { return dynamic_cast<const name *>(obj)!=NULL; } \
	virtual const char* libraryName() const { return #library; }\
	virtual const char* className() const { return #name; }
	//virtual String toString(Bool shortDesc = false) { std::ostringstream os; toStream(os,shortDesc); return os.str(); }


/** Base class for all library object.
The Object class will serve as the base object class for all other classes. To simplify object access and memory management.
*/
class SGTCORE_EXPORT Object : public sgtObjectBase {
public:
	Object() {};
	virtual ~Object() {}; 

	Object_META_DEF(sgt,Object);
};

} /* namespace sc */

// Automatic global typedef
typedef sgt::Object sgtObject;

#endif /* OBJECT_H_ */
