#include "base/Object.h"

// write the wrapper:
REGISTER_OBJECT_WRAPPER( sgtObject_Wrapper,
						new sgt::Object, sgt::Object,
						"osg::Object sgt::Object" )
{
}
