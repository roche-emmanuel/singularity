#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

namespace proland {

class ProlandTest {
public:
	ProlandTest() {};
	int hello() { return 1; };
};

int playProlandDemo(const std::string& archive, const std::string& data, const std::string& events);

};

#endif
