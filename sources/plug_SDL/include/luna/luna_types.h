#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <SDL_events.h>
#include <SDL_audio.h>
#include <SDL_cdrom.h>
#include <SDL_video.h>
#include <SDL_mouse.h>
#include <SDL_keyboard.h>
#include <SDL_version.h>

// Class: SDL_ActiveEvent
template<>
class LunaTraits< SDL_ActiveEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_ActiveEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_ActiveEvent* obj);
	typedef SDL_ActiveEvent parent_t;
	typedef SDL_ActiveEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_AudioCVT
template<>
class LunaTraits< SDL_AudioCVT > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_AudioCVT* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_AudioCVT* obj);
	typedef SDL_AudioCVT parent_t;
	typedef SDL_AudioCVT base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_AudioSpec
template<>
class LunaTraits< SDL_AudioSpec > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_AudioSpec* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_AudioSpec* obj);
	typedef SDL_AudioSpec parent_t;
	typedef SDL_AudioSpec base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_CD
template<>
class LunaTraits< SDL_CD > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_CD* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_CD* obj);
	typedef SDL_CD parent_t;
	typedef SDL_CD base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_CDtrack
template<>
class LunaTraits< SDL_CDtrack > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_CDtrack* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_CDtrack* obj);
	typedef SDL_CDtrack parent_t;
	typedef SDL_CDtrack base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Color
template<>
class LunaTraits< SDL_Color > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Color* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Color* obj);
	typedef SDL_Color parent_t;
	typedef SDL_Color base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_cond
template<>
class LunaTraits< SDL_cond > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_cond* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_cond* obj);
	typedef SDL_cond parent_t;
	typedef SDL_cond base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Cursor
template<>
class LunaTraits< SDL_Cursor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Cursor* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Cursor* obj);
	typedef SDL_Cursor parent_t;
	typedef SDL_Cursor base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Event
template<>
class LunaTraits< SDL_Event > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Event* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Event* obj);
	typedef SDL_Event parent_t;
	typedef SDL_Event base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_EventFilter
template<>
class LunaTraits< SDL_EventFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_EventFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_EventFilter* obj);
	typedef SDL_EventFilter parent_t;
	typedef SDL_EventFilter base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_ExposeEvent
template<>
class LunaTraits< SDL_ExposeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_ExposeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_ExposeEvent* obj);
	typedef SDL_ExposeEvent parent_t;
	typedef SDL_ExposeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_JoyAxisEvent
template<>
class LunaTraits< SDL_JoyAxisEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_JoyAxisEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_JoyAxisEvent* obj);
	typedef SDL_JoyAxisEvent parent_t;
	typedef SDL_JoyAxisEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_JoyBallEvent
template<>
class LunaTraits< SDL_JoyBallEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_JoyBallEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_JoyBallEvent* obj);
	typedef SDL_JoyBallEvent parent_t;
	typedef SDL_JoyBallEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_JoyButtonEvent
template<>
class LunaTraits< SDL_JoyButtonEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_JoyButtonEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_JoyButtonEvent* obj);
	typedef SDL_JoyButtonEvent parent_t;
	typedef SDL_JoyButtonEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_JoyHatEvent
template<>
class LunaTraits< SDL_JoyHatEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_JoyHatEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_JoyHatEvent* obj);
	typedef SDL_JoyHatEvent parent_t;
	typedef SDL_JoyHatEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Joystick
template<>
class LunaTraits< SDL_Joystick > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Joystick* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Joystick* obj);
	typedef SDL_Joystick parent_t;
	typedef SDL_Joystick base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_KeyboardEvent
template<>
class LunaTraits< SDL_KeyboardEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_KeyboardEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_KeyboardEvent* obj);
	typedef SDL_KeyboardEvent parent_t;
	typedef SDL_KeyboardEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_keysym
template<>
class LunaTraits< SDL_keysym > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_keysym* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_keysym* obj);
	typedef SDL_keysym parent_t;
	typedef SDL_keysym base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_MouseButtonEvent
template<>
class LunaTraits< SDL_MouseButtonEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_MouseButtonEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_MouseButtonEvent* obj);
	typedef SDL_MouseButtonEvent parent_t;
	typedef SDL_MouseButtonEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_MouseMotionEvent
template<>
class LunaTraits< SDL_MouseMotionEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_MouseMotionEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_MouseMotionEvent* obj);
	typedef SDL_MouseMotionEvent parent_t;
	typedef SDL_MouseMotionEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_mutex
template<>
class LunaTraits< SDL_mutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_mutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_mutex* obj);
	typedef SDL_mutex parent_t;
	typedef SDL_mutex base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Overlay
template<>
class LunaTraits< SDL_Overlay > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Overlay* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Overlay* obj);
	typedef SDL_Overlay parent_t;
	typedef SDL_Overlay base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Palette
template<>
class LunaTraits< SDL_Palette > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Palette* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Palette* obj);
	typedef SDL_Palette parent_t;
	typedef SDL_Palette base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_PixelFormat
template<>
class LunaTraits< SDL_PixelFormat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_PixelFormat* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_PixelFormat* obj);
	typedef SDL_PixelFormat parent_t;
	typedef SDL_PixelFormat base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_QuitEvent
template<>
class LunaTraits< SDL_QuitEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_QuitEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_QuitEvent* obj);
	typedef SDL_QuitEvent parent_t;
	typedef SDL_QuitEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Rect
template<>
class LunaTraits< SDL_Rect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Rect* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Rect* obj);
	typedef SDL_Rect parent_t;
	typedef SDL_Rect base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_ResizeEvent
template<>
class LunaTraits< SDL_ResizeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_ResizeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_ResizeEvent* obj);
	typedef SDL_ResizeEvent parent_t;
	typedef SDL_ResizeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_sem
template<>
class LunaTraits< SDL_sem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_sem* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_sem* obj);
	typedef SDL_sem parent_t;
	typedef SDL_sem base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Surface
template<>
class LunaTraits< SDL_Surface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Surface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Surface* obj);
	typedef SDL_Surface parent_t;
	typedef SDL_Surface base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_Thread
template<>
class LunaTraits< SDL_Thread > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_Thread* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_Thread* obj);
	typedef SDL_Thread parent_t;
	typedef SDL_Thread base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_UserEvent
template<>
class LunaTraits< SDL_UserEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_UserEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_UserEvent* obj);
	typedef SDL_UserEvent parent_t;
	typedef SDL_UserEvent base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_version
template<>
class LunaTraits< SDL_version > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_version* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_version* obj);
	typedef SDL_version parent_t;
	typedef SDL_version base_t;
	static luna_ConverterType converters[];
};

// Class: SDL_VideoInfo
template<>
class LunaTraits< SDL_VideoInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SDL_VideoInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(SDL_VideoInfo* obj);
	typedef SDL_VideoInfo parent_t;
	typedef SDL_VideoInfo base_t;
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

template<>
class LunaType< 47816679 > {
public:
	typedef SDL_ActiveEvent type;
	
};

template<>
class LunaType< 74863825 > {
public:
	typedef SDL_AudioCVT type;
	
};

template<>
class LunaType< 21280544 > {
public:
	typedef SDL_AudioSpec type;
	
};

template<>
class LunaType< 41376373 > {
public:
	typedef SDL_CD type;
	
};

template<>
class LunaType< 57367836 > {
public:
	typedef SDL_CDtrack type;
	
};

template<>
class LunaType< 44829304 > {
public:
	typedef SDL_Color type;
	
};

template<>
class LunaType< 63689794 > {
public:
	typedef SDL_cond type;
	
};

template<>
class LunaType< 95432031 > {
public:
	typedef SDL_Cursor type;
	
};

template<>
class LunaType< 46878127 > {
public:
	typedef SDL_Event type;
	
};

template<>
class LunaType< 99065423 > {
public:
	typedef SDL_EventFilter type;
	
};

template<>
class LunaType< 17901200 > {
public:
	typedef SDL_ExposeEvent type;
	
};

template<>
class LunaType< 57386537 > {
public:
	typedef SDL_JoyAxisEvent type;
	
};

template<>
class LunaType< 20374949 > {
public:
	typedef SDL_JoyBallEvent type;
	
};

template<>
class LunaType< 94708358 > {
public:
	typedef SDL_JoyButtonEvent type;
	
};

template<>
class LunaType< 38522231 > {
public:
	typedef SDL_JoyHatEvent type;
	
};

template<>
class LunaType< 73977241 > {
public:
	typedef SDL_Joystick type;
	
};

template<>
class LunaType< 54883043 > {
public:
	typedef SDL_KeyboardEvent type;
	
};

template<>
class LunaType< 26030457 > {
public:
	typedef SDL_keysym type;
	
};

template<>
class LunaType< 83012203 > {
public:
	typedef SDL_MouseButtonEvent type;
	
};

template<>
class LunaType< 65570431 > {
public:
	typedef SDL_MouseMotionEvent type;
	
};

template<>
class LunaType< 83803316 > {
public:
	typedef SDL_mutex type;
	
};

template<>
class LunaType< 25026059 > {
public:
	typedef SDL_Overlay type;
	
};

template<>
class LunaType< 17403157 > {
public:
	typedef SDL_Palette type;
	
};

template<>
class LunaType< 19743188 > {
public:
	typedef SDL_PixelFormat type;
	
};

template<>
class LunaType< 91180727 > {
public:
	typedef SDL_QuitEvent type;
	
};

template<>
class LunaType< 63173412 > {
public:
	typedef SDL_Rect type;
	
};

template<>
class LunaType< 35035544 > {
public:
	typedef SDL_ResizeEvent type;
	
};

template<>
class LunaType< 82714739 > {
public:
	typedef SDL_sem type;
	
};

template<>
class LunaType< 58049030 > {
public:
	typedef SDL_Surface type;
	
};

template<>
class LunaType< 70107873 > {
public:
	typedef SDL_Thread type;
	
};

template<>
class LunaType< 22520081 > {
public:
	typedef SDL_UserEvent type;
	
};

template<>
class LunaType< 63003745 > {
public:
	typedef SDL_version type;
	
};

template<>
class LunaType< 65126038 > {
public:
	typedef SDL_VideoInfo type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

