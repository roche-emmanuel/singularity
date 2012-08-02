#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

template<>
class LunaTraits< GetSetTester > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static GetSetTester* _bind_ctor(lua_State *L);
    static void _bind_dtor(GetSetTester* obj);
    typedef GetSetTester base_t;
};

template<>
class LunaTraits< ProfileAnotherBase > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static ProfileAnotherBase* _bind_ctor(lua_State *L);
    static void _bind_dtor(ProfileAnotherBase* obj);
    typedef ProfileAnotherBase base_t;
};

template<>
class LunaTraits< ProfileBase > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static ProfileBase* _bind_ctor(lua_State *L);
    static void _bind_dtor(ProfileBase* obj);
    typedef ProfileBase base_t;
};

template<>
class LunaTraits< ProfileDerived > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static ProfileDerived* _bind_ctor(lua_State *L);
    static void _bind_dtor(ProfileDerived* obj);
    typedef ProfileDerived base_t;
};

template<>
class LunaTraits< ProfileMultiBases > {
public:
    static const char className[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static ProfileMultiBases* _bind_ctor(lua_State *L);
    static void _bind_dtor(ProfileMultiBases* obj);
    typedef ProfileMultiBases base_t;
};


template<>
class LunaType< 21160797 > {
public:
    typedef GetSetTester type;
};

template<>
class LunaType< 15791216 > {
public:
    typedef ProfileAnotherBase type;
};

template<>
class LunaType< 1821726 > {
public:
    typedef ProfileBase type;
};


#endif

