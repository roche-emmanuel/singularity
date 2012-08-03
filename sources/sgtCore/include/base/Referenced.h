#ifndef REFERENCED_H_
#define REFERENCED_H_

#include <sgtCommon.h>

namespace sgt {

class SGTCORE_EXPORT Referenced : public sgtReferencedBase {
public:
	Referenced() {};
	virtual ~Referenced() {}; 
	
	inline void setName(const String& name) { _name = name; }

	inline String getName() { return _name; }

protected:
	/** The object name.*/
	String _name;
};

} /* namespace sc */

// Automatic global typedef
typedef sgt::Referenced sgtReferenced;

#endif /* OBJECT_H_ */
