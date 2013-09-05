#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <DXSurface.h>

// Class: Awesomium::Surface
template<>
class LunaTraits< Awesomium::Surface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::Surface* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::Surface* obj);
	typedef Awesomium::Surface parent_t;
	typedef Awesomium::Surface base_t;
	static luna_ConverterType converters[];
};

// Class: DXSurface
template<>
class LunaTraits< DXSurface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static DXSurface* _bind_ctor(lua_State *L);
	static void _bind_dtor(DXSurface* obj);
	typedef Awesomium::Surface parent_t;
	typedef DXSurface base_t;
	static luna_ConverterType converters[];
};



// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: IDirect3DSurface9
template<>
class LunaTraits< IDirect3DSurface9 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDirect3DSurface9* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDirect3DSurface9* obj);
	typedef IDirect3DSurface9 parent_t;
	typedef IDirect3DSurface9 base_t;
	static luna_ConverterType converters[];
};

// Referenced external: Awesomium::Rect
template<>
class LunaTraits< Awesomium::Rect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::Rect* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::Rect* obj);
	typedef Awesomium::Rect parent_t;
	typedef Awesomium::Rect base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 23910648 > {
public:
	typedef Awesomium::Surface type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 52064030 > {
public:
	typedef IDirect3DSurface9 type;
	
};

template<>
class LunaType< 8907551 > {
public:
	typedef Awesomium::Rect type;
	
};


#endif

