#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "base/Container.h"

/** LUNA_CLASS_EXTENSION LUNA_RENAME __tostring */
int ptime_tostring(boost::posix_time::ptime* val, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME push_back */
int vector_push_back(sgt::AnyVector* vec, lua_Any* dum, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME get */
int vector_get(sgt::AnyVector* vec, unsigned int index, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME get */
int map_get(std::map< std::string, int >* data, const std::string& id);

/** LUNA_CLASS_EXTENSION LUNA_RENAME get */
unsigned int map_uint_get(std::map< std::string, unsigned int >* data, const std::string& id);

void setEnv(const std::string& var, const std::string& value);

#if 0
/** LUNA_CLASS_EXTENSION */
inline void push_back(std::vector<int>* vec, int val) {
	vec->push_back(val);
}

/** LUNA_CLASS_EXTENSION */
inline unsigned int size(std::vector<int>* vec) {
	return vec->size();
}

/** LUNA_CLASS_EXTENSION */
inline void push_back(std::vector<float>* vec, float val) {
	vec->push_back(val);
}

/** LUNA_CLASS_EXTENSION */
inline unsigned int size(std::vector<float>* vec) {
	return vec->size();
}

/** LUNA_CLASS_EXTENSION */
inline void push_back(std::vector<double>* vec, double val) {
	vec->push_back(val);
}

/** LUNA_CLASS_EXTENSION */
inline unsigned int size(std::vector<double>* vec) {
	return vec->size();
}

#endif

class BaseClass {
public:	
	BaseClass() {};
	virtual ~BaseClass() {};
};

void* fromLightUserdata(lua_Any* dum, lua_State* L);

int toLightUserdata(void* obj, lua_State* L);

#endif
