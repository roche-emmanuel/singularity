#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_SDL(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	Luna< void >::Register(L);
	Luna< SDL_ActiveEvent >::Register(L);
	Luna< SDL_AudioCVT >::Register(L);
	Luna< SDL_AudioSpec >::Register(L);
	Luna< SDL_CD >::Register(L);
	Luna< SDL_CDtrack >::Register(L);
	Luna< SDL_Color >::Register(L);
	Luna< SDL_cond >::Register(L);
	Luna< SDL_Cursor >::Register(L);
	Luna< SDL_Event >::Register(L);
	Luna< SDL_EventFilter >::Register(L);
	Luna< SDL_ExposeEvent >::Register(L);
	Luna< SDL_JoyAxisEvent >::Register(L);
	Luna< SDL_JoyBallEvent >::Register(L);
	Luna< SDL_JoyButtonEvent >::Register(L);
	Luna< SDL_JoyHatEvent >::Register(L);
	Luna< SDL_Joystick >::Register(L);
	Luna< SDL_KeyboardEvent >::Register(L);
	Luna< SDL_keysym >::Register(L);
	Luna< SDL_MouseButtonEvent >::Register(L);
	Luna< SDL_MouseMotionEvent >::Register(L);
	Luna< SDL_mutex >::Register(L);
	Luna< SDL_Overlay >::Register(L);
	Luna< SDL_Palette >::Register(L);
	Luna< SDL_PixelFormat >::Register(L);
	Luna< SDL_QuitEvent >::Register(L);
	Luna< SDL_Rect >::Register(L);
	Luna< SDL_ResizeEvent >::Register(L);
	Luna< SDL_sem >::Register(L);
	Luna< SDL_Surface >::Register(L);
	Luna< SDL_SysWMEvent >::Register(L);
	Luna< SDL_Thread >::Register(L);
	Luna< SDL_UserEvent >::Register(L);
	Luna< SDL_version >::Register(L);
	Luna< SDL_VideoInfo >::Register(L);

	register_defines(L);

	register_enums(L);

	register_global_functions(L);

	lua_setglobal(L,"SDL");
	lua_getglobal(L,"SDL");

	luna_copyParents(L,"SDL");

	return 1;
}

#ifdef __cplusplus
}
#endif

