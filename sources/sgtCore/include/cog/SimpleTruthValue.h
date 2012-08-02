#ifndef SIMPLETRUTHVALUE_H_
#define SIMPLETRUTHVALUE_H_

#include "TruthValue.h"

namespace sgt {

class SGTCORE_EXPORT SimpleTruthValue : public TruthValue {
public:
	Object_META(sgt,SimpleTruthValue);

	/** Basic constructor. */
	SimpleTruthValue(strength_type mean, count_type count): _mean(mean), _count(count) {};

	/** Copy constructor. */
	SimpleTruthValue(const SimpleTruthValue& rhs) : _mean(rhs._mean), _count(rhs._count) {};
	
	/** Copy constructor. */
	SimpleTruthValue(const SimpleTruthValue& rhs, const sgtCopyOp& copyop) : _mean(rhs._mean), _count(rhs._count) {};

	/** constructor from other truth value.*/
	SimpleTruthValue(const TruthValue& rhs) {
		_mean = rhs.getMean();
		_count = rhs.getCount();
	};
	
	/** destructor. */
	virtual ~SimpleTruthValue() {}
	
	virtual SimpleTruthValue& operator=(const TruthValue& rhs);

    virtual strength_type getMean()  const { return _mean; };
    virtual count_type getCount()  const { return _count; }
    virtual confidence_type getConfidence()  const { return countToConfidence(_count); }

    virtual String toString() const;
    virtual TruthValueType getType() const { return SIMPLE_TRUTH_VALUE;	}

	/** Set the mean of the object.*/
	inline void setMean(strength_type mean) { _mean = mean; }
	
	/** Set the count of this value. */
	inline void setCount(count_type count) { _count = count; }
	
	/** Set count from confidence. */
	inline void setConfidence(confidence_type c)
	{
		_count = confidenceToCount(c);
	}

protected:
    /// Heuristic to compute the count given the confidence (according
    /// to the PLN book)
    /// count =  confidence * k / (1 - confidence)
    /// where k is the look-ahead
    static count_type confidenceToCount(confidence_type);

    /// Heuristic to compute the confidence given the count (according
    /// to the PLN book)
    /// confidence = count / (count + k)
    /// where k is the look-ahead
    static confidence_type countToConfidence(count_type);
	
    /** Mean of the strength of the TV over all observations*/
    strength_type _mean;

    /** Total number of observations used to estimate the mean*/
    count_type _count;
};

} /* namespace sgt */

#endif /* Container_H_ */
