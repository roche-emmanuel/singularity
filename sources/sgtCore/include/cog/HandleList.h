#ifndef HANDLELIST_H_
#define HANDLELIST_H_

#include "base/Container.h"
#include "Handle.h"

namespace sgt {

/** List of Handles with support functions.*/ 
class SGTCORE_EXPORT HandleList : public sgt::Container< RefHandleVector, Refhandle >  {

};

typedef sgtPtr<HandleList> RefHandleList;

} /* namespace sgt */


#endif /* Container_H_ */
