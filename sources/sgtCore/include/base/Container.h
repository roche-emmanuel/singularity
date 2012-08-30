#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "Object.h"
#include "Variant.h"

namespace sgt {

/** Class used to build containers of various types
based on the variant type concept.*/
template < typename ContType, typename ValueType >
class Container : public sgt::Object {
public:
	/** The type of the container used here.*/
	typedef ContType container_type;
	
	/** The type of the value items.*/
	typedef ValueType value_type;
		
	/** Iterator on container value type.*/
	typedef typename ContType::iterator iterator;
	
public:
	/** Default constructor.*/
	Container() {};

	Container(const Container& rhs) : _data(rhs._data), sgt::Object(rhs) {};

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
	/*void push_front(const ValueType& val) {
		_data.push_front(val);	
	};*/

	void pop_back() {
		_data.pop_back();
	}
	
	/*void pop_front() {
		_data.pop_front();
	}*/

	ValueType& back() {
		return _data.back();
	}
	
	ValueType& front() {
		return _data.front();
	}
	
	/*iterator find(const ValueType& val) {
	
	}
	
	Bool contains(const ValueType& val) {
	
	}
	
	ValueType& operator[](UInt32 index) {
	
	}*/
	
	inline void setData(const container_type& data) { _data = data; }
	inline const container_type& getData() const { return _data; }

protected:

	/** The actual container with the real items inside.*/
	ContType _data;
};

class SGTCORE_EXPORT AnyVector : public Container< std::vector<Any>, Any > {
public:
	typedef Container< std::vector<Any>, Any > base_type;

	AnyVector() {};
	AnyVector( const AnyVector & rhs, const sgtCopyOp& copyop = sgtCopyOp::SHALLOW_COPY ) : base_type(rhs) {};

	Object_META(sgt, AnyVector);
};

//typedef Container< std::vector<Any>, Any > AnyVector;
typedef Container< std::set<Any>, Any > AnySet;
typedef Container< std::deque<Any>, Any > AnyDeque;

} /* namespace sgt */


#endif /* Container_H_ */
