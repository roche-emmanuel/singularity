#ifndef ATOMCOMPARATOR_H_
#define ATOMCOMPARATOR_H_

#include "Object.h"

namespace sgt {

class SGTCORE_EXPORT AtomComparator : public sgt::Object {
public:
	virtual bool operator()(const Atom& a1, const Atom& a2) const = 0; 
};

} /* namespace sgt */


#endif /* Container_H_ */
