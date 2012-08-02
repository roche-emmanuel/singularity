/*
 * MapContainer.h
 *
 *  Created on: 9 mars 2012
 *      Author: kenshin
 */
#ifndef MAPCONTAINER_H_
#define MAPCONTAINER_H_

#include "Container.h"

namespace sgt {

/** Class used to Map key to values. */
template <typename KeyType, typename ValueType = Any> 
class SGTCORE_EXPORT MapContainer: public sgt::Container< std::map<KeyType,ValueType>, ValueType > {
public:
	typedef KeyType key_type;
	
public:

	/** Retrieve a sub container based on the separator tokenizing if applicable.
	Note that this function might also modify the key itself.
	If createIfNeeded is set to false, then no submap is created if needed.*/
	virtual MapContainer* getSubContainer(KeyType& key, bool createIfNeeded = true) {
		return NULL;
	};

	/** Assign an value under a given key. This function will override any previous 
	value assigned to that key.*/
	void setValue(const KeyType& key, const ValueType& val) {
		KeyType realKey = key;
		MapContainer* container = getSubContainer(realKey);

		if(container) {
			trDEBUG2_V("MapContaineer","Found sub container.");
			return container->set(realKey,val);
		}

		_data[key] = val;	
	};
	
	/** Remove a (key,value) pair per key.*/
	bool eraseKey(const KeyType& key) {
		KeyType realKey = key;
		MapContainer* container = getSubContainer(realKey,false);

		if(container)
			return container->erase(realKey);

		iterator it = _data.find(key);
		if(it==_data.end())
			return false;
		_data.erase(it);
		return true;
	}

	/** Check if a given key as a value assigned or not.*/
	inline bool hasKey(const KeyType& key) {
		KeyType realKey = key;
		MapContainer* container = getSubContainer(realKey,false);

		if(container)
			return container->hasKey(realKey);
		
		return _data.find(realKey)!=_data.end();
	}

	/** Get the any value assigned to a given key. If there is no value assigned to that key
	an empty Any value is returned.*/
	ValueType getValue(const KeyType& key) {
		KeyType realKey = key;
		MapContainer* container = getSubContainer(realKey);

		if(container)
			return container->getAny(realKey);

		iterator it = _data.find(key);
		if(it==_data.end())
			return ValueType();
		return it->second;
	}

	/** Get the any value assigned to a given key. If there is no value assigned to that key
	the provided defVal is returned.
	\param key The key string to consider.
	\param defVal Default value returned if there is no value assigned to the given key.
	\param assign If true, then the defVal is assigned to the key if there is no value yet under that key.
	*/
	ValueType get(const KeyType& key, const ValueType& defVal, bool assign = false) {
		KeyType realKey = key;
		MapContainer* container = getSubContainer(realKey);

		if(container)
			return container->get(realKey,defVal,assign);

		iterator it = _data.find(key);
		if(it==_data.end()) {
			if(assign) {
				_data[key] = defVal;
			}
			return defVal;
		}
		return it->second;
	}

	/** Retrieve the key string by index number.*/
	const KeyType& getKeyByIndex(unsigned int index) const {
		CHECK_RET(index<_data.size(),"","Out of range access: id="<<index<<", size="<<_data.size());
		iterator it = _data.begin();
		for(unsigned int i=0;i<index;++i,++it); 
		return it->first;
	}

	/** Retrieve the value by index number.*/
	ValueType& getValueByIndex(unsigned int index) {
		CHECK_RET(index<_data.size(),Any(),"Out of range access: id="<<index<<", size="<<_data.size());
		iterator it = _data.begin();
		for(unsigned int i=0;i<index;++i,++it);
		return it->second;
	}

	/** Return a pointer on an object assigned to a given key. If the value under that key cannot be
	casted to the requested object type NULL is returned.*/
	template < typename T, typename Base>
	T* getObject(const KeyType& key) {
		const ValueType& val = getValue(key);
		Base* ref = val.get<Base*>();		
		T* result = dynamic_cast<T*>(ref ? ref : NULL);
		return result;
	}

	/** Return a pointer on an object assigned to a given key. If the value under that key cannot be
	casted to the requested object type NULL is returned.*/
	template < typename T >
	T* getObject(const KeyType& key) {
		return getObject<T,sgtReferenced>(key);
	}
	
	/** Get or create an object assigned to a given key. The requested type T must provide a default constructor
	to allow the construction of the object if not available yet.*/
	template < typename T >
	T* getOrCreateObject(const KeyType& key) {
		T* result = getObject<T>(key);
		if(!result) {
			result = new T();
			set(key,result);
		}
		return result;
	}

	/** Check if the value under the given key is available and is of given type.*/
	template<typename T>
	Bool has(const KeyType& key) {
		ValueType& val = getValue(key);
		return val.contains<T>();	
	}

	/** Retrieve a given value. The default value is returned if the assigned value cannot
	be casted to the requested type.*/
	template<typename T>
	T get(const KeyType& key, const T & defVal = T()) {
		ValueType& val = getValue(key);
		return val.get<T>();	
	}

	/** Dump the content of this map printing all (key,value) pairs recursively.*/
	String dump();

protected:
	/** Method used internal for efficiently dumping the content of this datamap object.*/
	void dumpContent(const String prefix, std::ostream& list);
};

} /* namespace sgt */


#endif /* DATAMAP_H_ */
