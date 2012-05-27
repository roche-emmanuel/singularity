/*
 * GetSetTester.h
 *
 *  Created on: 23 févr. 2012
 *      Author: kenshin
 */

#ifndef GETSETTESTER_H_
#define GETSETTESTER_H_

class GetSetTester {
public:
	GetSetTester():_i(0.0){}

	void set(double i) {
		_i = i;
	}

	double get() const {
		return _i;
	}

private:
        double _i;
};

#endif /* GETSETTESTER_H_ */
