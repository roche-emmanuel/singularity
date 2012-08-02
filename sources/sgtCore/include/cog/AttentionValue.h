#ifndef ATTENTIONVALUE_H_
#define ATTENTIONVALUE_H_

#include "Object.h"

namespace sgt {

class SGTCORE_EXPORT AttentionValue : public sgt::Object {
public:
    typedef Double sti_type;   //!< short-term importance type
    typedef Double lti_type;   //!< long-term importance type
    typedef Double vlti_type; //!< very long-term importance type
	
public:
	/** main constructor.*/
	AttentionValue(const sti_type& sti = sti_type(), 
				   const lti_type& lti = lti_type(), 
				   const vlti_type& vlti = vlti_type()) :
		_sti(sti), _lti(lti), _vlti(vlti) {};
	
	/** destructor. */
	virtual ~AttentionValue() {};
	
	/** Copy constructor.*/
	AttentionValue(const  AttentionValue& rhs) :
		_sti(rhs._sti), _lti(rhs._lti), _vlti(rhs._vlti) {};
	
	/** Assignment operator.*/
	AttentionValue& operator=(const AttentionValue& rhs) {
		_sti=rhs._sti;
		_lti=rhs._lti;
		_vlti=rhs._vlti;
		return *this;
	}
	
	/** Get STI*/
	virtual sti_type getSTI() const { return _sti; }
	
	/** Get LTI*/
	virtual lti_type getLTI() const { return _lti; }
	
	/** Get VLTI*/
	virtual vlti_type getVLTI() const { return _vlti; }
	
	/** Set STI*/
	virtual void setSTI(const sti_type& val) { _sti = val; }
	
	/** Set LTI*/
	virtual void setLTI(const lti_type& val) {  _lti = val; }
	
	/** Set VLTI*/
	virtual void setVLTI(const vlti_type& val) { _vlti = val; }
	
	/** Convert the AttentionValue to string display. */
	virtual String toString() const;
	
	/** Check equality of attention values.*/
	virtual bool operator==(const AttentionValue& rhs) const {
		return _sti==rhs._sti && _lti==rhs._lti && _vlti==rhs._vlti;
	};
	
	/** Check non equality of attention values.*/
	inline bool operator!=(const AttentionValue& rhs) const { return !(*this == rhs); }
	
protected:
	sti_type _sti;
	lti_type _lti;
	vlti_type _vlti;
};

typedef sgtPtr<AttentionValue> RefAttentionValue;

} /* namespace sgt */

/** streaming of AttentionValues to a stream.*/
template <typename OutputStream>
OutputStream& operator<<(OutputStream& os, const sgt::AttentionValue& val) {
	return os << val.toString();
}

#endif /* Container_H_ */
