#include "plug_extensions.h"

void setLookVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec) {
	CHECK(vec,"Invalid vector.");
	intf->lookVector = *vec;
}

void setUpVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec) {
	CHECK(vec,"Invalid vector.");
	intf->upVector = *vec;
}

