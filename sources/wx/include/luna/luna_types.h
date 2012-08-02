#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

template<>
class LunaTraits< wxObject > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxObject* obj);
    typedef wxObject base_t;
};

template<>
class LunaTraits< wxEvtHandler > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxEvtHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxEvtHandler* obj);
    typedef wxEvtHandler base_t;
};

template<>
class LunaTraits< wxAppConsole > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxAppConsole* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxAppConsole* obj);
    typedef wxAppConsole base_t;
};

template<>
class LunaTraits< wxApp > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxApp* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxApp* obj);
    typedef wxApp base_t;
};

template<>
class LunaTraits< wxClassInfo > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxClassInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxClassInfo* obj);
    typedef wxClassInfo base_t;
};

template<>
class LunaTraits< wxEvent > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxEvent* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxEvent* obj);
    typedef wxEvent base_t;
};

template<>
class LunaTraits< wxRefCounter > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxRefCounter* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxRefCounter* obj);
    typedef wxRefCounter base_t;
};

template<>
class LunaTraits< wxString > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxString* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxString* obj);
    typedef wxString base_t;
};

template<>
class LunaTraits< wxWindow > {
public:
    static const char className[];
    static const char moduleName[];
    static const int uniqueIDs[];
    static luna_RegType methods[];
    static wxWindow* _bind_ctor(lua_State *L);
    static void _bind_dtor(wxWindow* obj);
    typedef wxWindow base_t;
};


#endif

