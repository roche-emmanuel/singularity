#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "base/Container.h"

/** LUNA_CLASS_EXTENSION LUNA_RENAME __tostring2 */
int ptime_tostring(boost::posix_time::ptime* val, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME push_back */
int vector_push_back(sgt::AnyVector* vec, lua_Any* dum, lua_State* L);


#endif
