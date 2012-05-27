/*
 * ProfileMultiBases.h
 *
 *  Created on: 24 févr. 2012
 *      Author: kenshin
 */

#ifndef PROFILEMULTIBASES_H_
#define PROFILEMULTIBASES_H_

#include <ProfileDerived.h>
#include <ProfileAnotherBase.h>

class ProfileMultiBases :  public ProfileAnotherBase, public ProfileDerived  {
public:
	ProfileMultiBases() {};
	virtual void virtual_func() {
		++_i;
	}

	virtual ~ProfileMultiBases() {};

private:
	int _i;
};

#endif /* PROFILEMULTIBASES_H_ */
