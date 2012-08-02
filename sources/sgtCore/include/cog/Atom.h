#ifndef ATOM_H_
#define ATOM_H_

#include "base/StringMap.h"
#include "AttentionValue.h"
#include "TruthValue.h"
#include "HandleList.h"

namespace sgt {

class SGTCORE_EXPORT Atom : public sgt::AnyMap {
public:
	/** retrieve the attention value assigned to this atom.*/
	AttentionValue* getAttentionValue() { return _attentionValue.get(); }
	
	/** Set attention value object.*/
	void setAttentionValue(AttentionValue* av) { _attentionValue = av; }
	
	/** Retrieve the truth value of this atom.*/
	TruthValue* getTruthValue() { return _truthValue.get(); }
	
	/** Set the truth value of this atom.*/
	void setTruthValue(TruthValue* tv) { _truthValue = tv; }
	
	/** Retrieve the handle corresponding to this atom.*/
	Handle* getHandle() { return _handle.get(); }
	
	/** set the handle corresponding to this atom. */
	void setHandle(Handle* handle) { _handle = handle; }
	
protected:
	/** Current attention value for this atom.*/
	RefAttentionValue _attentionValue;
	
	/** TruthValue for this atom.*/
	RefTruthValue _truthValue;
	
	/** An handle used as key to map this atom.*/
	RefHandle _handle;
	
	/** list of incoming connections to this atom.*/
	RefHandleList _incoming;
};

} /* namespace sgt */


#endif /* Container_H_ */
