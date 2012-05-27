/*
 * ProfileDerived.h
 *
 *  Created on: 23 févr. 2012
 *      Author: kenshin
 */

#ifndef PROFILEDERIVED_H_
#define PROFILEDERIVED_H_

#include "ProfileBase.h"

class ProfileDerived : public ProfileBase {
public:
	ProfileDerived() {};
	virtual ~ProfileDerived() {};
	virtual void pure_virtual_func() {
		++_i;
	}
private:
	int _i;
};

#endif /* PROFILEDERIVED_H_ */
