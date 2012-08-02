#ifndef TRUTHVALUE_H_
#define TRUTHVALUE_H_

#include "base/Object.h"

namespace sgt {

class SGTCORE_EXPORT TruthValue : public sgt::Object {
public:
    typedef float strength_type; //!< define the strength type
	typedef float count_type; //!< define the count type.
	typedef float confidence_type;	//!< define confidence type
	
	/** types of truth values. */
	enum TruthValueType {
		SIMPLE_TRUTH_VALUE = 0,
		COUNT_TRUTH_VALUE,
		INDEFINITE_TRUTH_VALUE,
		COMPOSITE_TRUTH_VALUE,
		NUMBER_OF_TRUTH_VALUE_TYPES
	};

public:
	/** destructor. */
	virtual ~TruthValue() {}

	/** Assignment operator.*/
	virtual TruthValue& operator=(const TruthValue& rhs) = 0;
	
    virtual strength_type getMean()  const = 0;
    virtual count_type getCount()  const = 0;
    virtual confidence_type getConfidence()  const = 0;

    virtual String toString() const  = 0;
    virtual TruthValueType getType() const  = 0;	
	
	virtual bool operator==(const TruthValue& rhs) const = 0;	
	inline bool operator!=(const TruthValue& rhs) const { return !(*this == rhs); }
};

typedef sgtPtr<TruthValue> RefTruthValue;

} /* namespace sgt */

/** streaming of AttentionValues to a stream.*/
template <typename OutputStream>
OutputStream& operator<<(OutputStream& os, const sgt::TruthValue& val) {
	return os << val.toString();
}

#endif /* Container_H_ */
