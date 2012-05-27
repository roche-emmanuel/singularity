/*
 * ProfileBase.h
 *
 *  Created on: 23 févr. 2012
 *      Author: kenshin
 */

#ifndef PROFILEBASE_H_
#define PROFILEBASE_H_

class ProfileBase {
public:
	ProfileBase(): _i(0) {};

	virtual ~ProfileBase() {};

	void increment_a_base(ProfileBase* base) {
		++base->_i;
	}

	virtual void virtual_func() {
		++_i;
	}

	virtual void pure_virtual_func() = 0;

private:
	int _i;
};

#endif /* PROFILEBASE_H_ */
