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

#endif
