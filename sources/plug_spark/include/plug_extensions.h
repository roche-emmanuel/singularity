#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "Extensions/Renderers/SPK_Oriented3DRendererInterface.h"

/** LUNA_CLASS_EXTENSION */
void setLookVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec);

/** LUNA_CLASS_EXTENSION */
void setUpVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec);


namespace spark {

class GroupCustomUpdate {
public:
	GroupCustomUpdate() {};
	
	virtual bool operator()( SPK::Particle& particle, float deltaTime ) const {
		logINFO("Hello from Group Custom update!");
		return false;
	}
};

};

/** LUNA_CLASS_EXTENSION */
void setCustomUpdate(SPK::Group* grp, spark::GroupCustomUpdate* cb);

/** LUNA_CLASS_EXTENSION LUNA_RENAME x */
inline float vec_get_x(SPK::Vector3D* vec) {
	return vec->x;
}

/** LUNA_CLASS_EXTENSION LUNA_RENAME y */
inline float vec_get_y(SPK::Vector3D* vec) {
	return vec->y;
}

/** LUNA_CLASS_EXTENSION LUNA_RENAME z */
inline float vec_get_z(SPK::Vector3D* vec) {
	return vec->z;
}

#endif
