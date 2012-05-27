/*
 * sgtApp.h
 *
 *  Created on: 15 févr. 2012
 *      Author: kenshin
 */

#ifndef SGTAPP_H_
#define SGTAPP_H_

#include <plug_common.h>

// The main application class
class sgtApp : public wxApp {
public:
	bool OnInit() { return true; };
};

DECLARE_APP(sgtApp);

#endif /* SGTAPP_H_ */
