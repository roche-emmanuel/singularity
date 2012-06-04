#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Uniform>
#include <osg/Program>

namespace osg {

	typedef std::vector< osg::Vec3d > Vec3dList;
	typedef std::vector< osg::StateSet const *> StateSetList;
	typedef std::vector< std::pair<osg::StateAttribute const *,unsigned int> > StateAttributeUIntPairList;

};

#endif
