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

/** Base class for all library object.
The Object class will serve as the base object class for all other classes. To simplify object access and memory management.
*/
class SGTCORE_EXPORT Object : public osg::Referenced {
public:
	Object() {};
	virtual ~Object();

	/** Set the name of this object. This will override the previous name value.*/
	inline void setName(const std::string& name) { _name = name; }

	/** Retrieve the name of this object.*/
	inline std::string getName() { return _name; }

protected:
	/** The object name.*/
	std::string _name;
};

} /* namespace sc */

// Automatic global typedef
typedef sgt::Object sgtObject;

#endif /* OBJECT_H_ */
