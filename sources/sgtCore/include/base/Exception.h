/*
 * Exception.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <sgtCommon.h>

namespace sgt {

/** Internal exception implementation.
This base exception class is used to throw exception messages.*/
class SGTCORE_EXPORT Exception : public std::exception {
public:
	/** Default constructor.*/
	Exception() {}; // 
	/** Copy constructor.*/
	Exception(const Exception& rhs) : std::exception(rhs) {};
	/** Construction from a message string.*/
	Exception(const char* msg) : std::exception(msg) {};
	/** Construction from a message string.*/
	Exception(const std::string& msg) : std::exception(msg.c_str()) {};
	/** Assignment operator.*/
	Exception& operator= (const Exception& rhs) {
		std::exception::operator=(rhs);
		return *this;
	};

	virtual ~Exception() {};
};

} /* namespace scBase */

typedef sgt::Exception sgtException;

#endif /* EXCEPTION_H_ */
