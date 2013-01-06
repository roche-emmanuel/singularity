#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include <osg/Referenced>

namespace atb {

class TwBoolCallback : public osg::Referenced {
public:
	static void setCallback(const void *value, void *clientData) {
		static_cast<TwBoolCallback*>(clientData)->setValue(*(const bool*)value);
	};
	
	static void getCallback(void *value, void *clientData) {
		*(bool *)value = static_cast<TwBoolCallback*>(clientData)->getValue();
	};
	
	virtual void setValue(bool val) = 0;
	virtual bool getValue() = 0;
};


};

#endif
