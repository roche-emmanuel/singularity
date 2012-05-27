#ifndef _PLUG_COMMON_H_
#define _PLUG_COMMON_H_

//#define LUABIND_MAX_ARITY 16

// #include <stdarg.h>
#include <lua.hpp>
#include <iostream> 
#include <wx_headers.h>

#ifdef LUABIND_BINDINGS
#include <luabind/luabind.hpp>
#include <luabind/operator.hpp>
#include <luabind/adopt_policy.hpp>
#include <luabind/dependency_policy.hpp>
#include <boost/function.hpp>

#include <luabind/type_converters.h>

#include <luabind/wx_registers.h>
#include <luabind/wx_converters.h>
#include <luabind/wx_dynamicCasters.h>

#endif

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

#endif
