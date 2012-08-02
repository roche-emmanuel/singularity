#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "Object.h"
#include "Variant.h"

namespace sgt {

/** Class used to build containers of various types
based on the variant type concept.*/
template < typename ContType, typename ValueType >
class SGTCORE_EXPORT Container : public sgt::Object {
public:
	/** The type of the container used here.*/
	typedef ContType container_type;
	
	/** The type of the value items.*/
	typedef ValueType value_type;
		
	/** Iterator on container value type.*/
	typedef ContType::iterator iterator;
	
public:
	/** Default constructor.*/
	Container() {};
	virtual ~Container() {};

	/** Retrieve the beginning iterator on the underlying map implementation.*/
	inline iterator begin() {
		return _data.begin();
	}

	/** Retrieve the ending iterator on the underlying map implementation.*/
	inline iterator end() {
		return _data.end();
	}

	/** Return the size of the container.*/
	inline UInt32 size() {
		return _data.size();
	}
	
	/** Clear the map container. This will remove all the (key,value) pairs.*/
	inline void clear() {
		_data.clear();
	}
	
	/** Insert an object at the back of a vector, when applicable.*/
	void push_back(const ValueType& val) {
		_data.push_back(val);	
	};
	
	/** Insert an object at the front of a vector, when applicable.*/
	void push_front(const ValueType& val) {
		_data.push_front(val);	
	};

	void pop_back() {
		_data.pop_back();
	}
	
	void pop_front() {
		_data.pop_front();
	}

	ValueType& back() {
		_data.back();
	}
	
	ValueType& front() {
		_data.front();
	}
	
	iterator find(const ValueType& val) {
	
	}
	
	Bool contains(const ValueType& val) {
	
	}
	
	ValueType& operator[](UInt32 index) {
	
	}
	
protected:

	/** The actual container with the real items inside.*/
	ContType _data;
};

typedef Container< std::vector<Any>, Any > AnyVector;
typedef Container< std::set<Any>, Any > AnySet;
typedef Container< std::deque<Any>, Any > AnyDeque;

} /* namespace sgt */


#endif /* Container_H_ */
