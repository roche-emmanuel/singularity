#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

/** LUNA_CLASS_EXTENSION LUNA_RENAME __tostring */
int ptime_tostring(boost::posix_time::ptime* val, lua_State* L);


//#include "base/DataMap.h"

/** LUNA_CLASS_EXTENSION LUNA_RENAME get */
//int datamap_get(sgt::DataMap* dmap, sgt::String& name, lua_Any* dummy, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME get */
//int datamap_get(sgt::DataMap* dmap, sgt::String& name, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME set */
//int datamap_set(sgt::DataMap* dmap, sgt::String& name, lua_Any* dummy, lua_State* L);

#endif
