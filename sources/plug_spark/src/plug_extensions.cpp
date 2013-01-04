#include "plug_extensions.h"
#include <boost/function.hpp>

void setLookVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec) {
	CHECK(vec,"Invalid vector.");
	intf->lookVector = *vec;
}

void setUpVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec) {
	CHECK(vec,"Invalid vector.");
	intf->upVector = *vec;
}

typedef bool (*UpdateFunc)( SPK::Particle& particle, float deltaTime );

void setCustomUpdate(SPK::Group* grp, spark::GroupCustomUpdate* cb) {
	// boost::function<bool (SPK::Particle& p, float t)> f = cb;
	logERROR("setCUstomUpdate is not implemented!!");
	
	// grp->setCustomUpdate((UpdateFunc)cb);
	// grp->setCustomUpdate(f);
}
