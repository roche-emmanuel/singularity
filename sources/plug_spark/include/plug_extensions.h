#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "Extensions/Renderers/SPK_Oriented3DRendererInterface.h"

/** LUNA_CLASS_EXTENSION */
void setLookVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec);

/** LUNA_CLASS_EXTENSION */
void setUpVector(SPK::Oriented3DRendererInterface* intf, SPK::Vector3D* vec);

#endif
