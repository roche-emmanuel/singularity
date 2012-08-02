#ifndef HANDLE_H_
#define HANDLE_H_

#include "Object.h"

namespace sgt {

/** Handle that can be used as key to retrieve atoms
from the atom space.*/
class SGTCORE_EXPORT Handle : public sgt::Object {

};

typedef sgtPtr<Handle> RefHandle;
typedef std::vector<RefHandle> RefHandleVector;

} /* namespace sgt */


#endif /* Container_H_ */
