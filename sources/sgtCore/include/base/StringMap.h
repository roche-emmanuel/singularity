/*
 * MapContainer.h
 *
 *  Created on: 9 mars 2012
 *      Author: kenshin
 */
#ifndef STRINGMAP_H_
#define STRINGMAP_H_

#include "MapContainer.h"

namespace sgt {

/** Class used to Map key to values. */
template <typename ValueType >
class SGTCORE_EXPORT StringMap: public sgt::MapContainer< String, ValueType > {
public:
	/** Retrieve a sub container based on the separator tokenizing if applicable.
	Note that this function might also modify the key itself.
	If createIfNeeded is set to false, then no submap is created if needed.*/
	virtual MapContainer* getSubContainer(String& key, bool createIfNeeded = true) {
		size_t index = key.find_first_of(_separator);
		if(index==String::npos)
			return NULL;

		StringMap* container = this;
		while(index != String::npos) {
			String contName = key.substr(0,index);
			trDEBUG2_V("DataMap","Getting sub container " << contName);
			if(createIfNeeded) {
				container = container->getOrCreateObject<StringMap>(contName);
			}
			else {
				container = container->getObject<StringMap>(contName);
				if(!container) {
					key = "[invalid_key]"; // ensure we return an invalid key in that case.
					return NULL;
				}
			}
			key = key.substr(index+1);
			index = key.find_first_of(_separator);
		}

		trDEBUG2_V("DataMap","replacing full key with " << key);

		return container;
	};
	
	/** Assign a specific separator to the parsing system.*/
	inline void setSeparator(const std::string sep) { 
		CHECK(!sep.empty(),"Invalid empty separator.");	
		_separator = sep; 
	}
	
protected:

	/** Separator used for sub map finding in entry keys.*/
	String _separator;
};

/** Definition of the anymap type.*/
typedef StringMap<Any> AnyMap;

} /* namespace sgt */


#endif /* DATAMAP_H_ */
