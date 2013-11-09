#include <plug_common.h>

#include <SDL.h>
#include <SDL_active.h>
#include <SDL_audio.h>
#include <SDL_cdrom.h>
#include <SDL_endian.h>
#include <SDL_events.h>
#include <SDL_joystick.h>
#include <SDL_keyboard.h>
#include <SDL_mouse.h>
#include <SDL_mutex.h>
#include <SDL_version.h>
#include <SDL_video.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,SDL_INIT_TIMER); lua_setfield(L,-2,"SDL_INIT_TIMER");
	lua_pushnumber(L,SDL_INIT_AUDIO); lua_setfield(L,-2,"SDL_INIT_AUDIO");
	lua_pushnumber(L,SDL_INIT_VIDEO); lua_setfield(L,-2,"SDL_INIT_VIDEO");
	lua_pushnumber(L,SDL_INIT_CDROM); lua_setfield(L,-2,"SDL_INIT_CDROM");
	lua_pushnumber(L,SDL_INIT_JOYSTICK); lua_setfield(L,-2,"SDL_INIT_JOYSTICK");
	lua_pushnumber(L,SDL_INIT_NOPARACHUTE); lua_setfield(L,-2,"SDL_INIT_NOPARACHUTE");
	lua_pushnumber(L,SDL_INIT_EVENTTHREAD); lua_setfield(L,-2,"SDL_INIT_EVENTTHREAD");
	lua_pushnumber(L,SDL_INIT_EVERYTHING); lua_setfield(L,-2,"SDL_INIT_EVERYTHING");
	lua_pushnumber(L,SDL_APPMOUSEFOCUS); lua_setfield(L,-2,"SDL_APPMOUSEFOCUS");
	lua_pushnumber(L,SDL_APPINPUTFOCUS); lua_setfield(L,-2,"SDL_APPINPUTFOCUS");
	lua_pushnumber(L,SDL_APPACTIVE); lua_setfield(L,-2,"SDL_APPACTIVE");
	lua_pushnumber(L,AUDIO_U8); lua_setfield(L,-2,"AUDIO_U8");
	lua_pushnumber(L,AUDIO_S8); lua_setfield(L,-2,"AUDIO_S8");
	lua_pushnumber(L,AUDIO_U16LSB); lua_setfield(L,-2,"AUDIO_U16LSB");
	lua_pushnumber(L,AUDIO_S16LSB); lua_setfield(L,-2,"AUDIO_S16LSB");
	lua_pushnumber(L,AUDIO_U16MSB); lua_setfield(L,-2,"AUDIO_U16MSB");
	lua_pushnumber(L,AUDIO_S16MSB); lua_setfield(L,-2,"AUDIO_S16MSB");
	lua_pushnumber(L,SDL_MIX_MAXVOLUME); lua_setfield(L,-2,"SDL_MIX_MAXVOLUME");
	lua_pushnumber(L,SDL_AUDIO_TRACK); lua_setfield(L,-2,"SDL_AUDIO_TRACK");
	lua_pushnumber(L,SDL_DATA_TRACK); lua_setfield(L,-2,"SDL_DATA_TRACK");
	lua_pushnumber(L,CD_FPS); lua_setfield(L,-2,"CD_FPS");
	lua_pushnumber(L,SDL_MAX_TRACKS); lua_setfield(L,-2,"SDL_MAX_TRACKS");
	lua_pushnumber(L,SDL_LIL_ENDIAN); lua_setfield(L,-2,"SDL_LIL_ENDIAN");
	lua_pushnumber(L,SDL_BIG_ENDIAN); lua_setfield(L,-2,"SDL_BIG_ENDIAN");
	lua_pushnumber(L,SDL_RELEASED); lua_setfield(L,-2,"SDL_RELEASED");
	lua_pushnumber(L,SDL_PRESSED); lua_setfield(L,-2,"SDL_PRESSED");
	lua_pushnumber(L,SDL_ALLEVENTS); lua_setfield(L,-2,"SDL_ALLEVENTS");
	lua_pushnumber(L,SDL_QUERY); lua_setfield(L,-2,"SDL_QUERY");
	lua_pushnumber(L,SDL_IGNORE); lua_setfield(L,-2,"SDL_IGNORE");
	lua_pushnumber(L,SDL_DISABLE); lua_setfield(L,-2,"SDL_DISABLE");
	lua_pushnumber(L,SDL_ENABLE); lua_setfield(L,-2,"SDL_ENABLE");
	lua_pushnumber(L,SDL_HAT_CENTERED); lua_setfield(L,-2,"SDL_HAT_CENTERED");
	lua_pushnumber(L,SDL_HAT_UP); lua_setfield(L,-2,"SDL_HAT_UP");
	lua_pushnumber(L,SDL_HAT_RIGHT); lua_setfield(L,-2,"SDL_HAT_RIGHT");
	lua_pushnumber(L,SDL_HAT_DOWN); lua_setfield(L,-2,"SDL_HAT_DOWN");
	lua_pushnumber(L,SDL_HAT_LEFT); lua_setfield(L,-2,"SDL_HAT_LEFT");
	lua_pushnumber(L,SDL_HAT_RIGHTUP); lua_setfield(L,-2,"SDL_HAT_RIGHTUP");
	lua_pushnumber(L,SDL_HAT_RIGHTDOWN); lua_setfield(L,-2,"SDL_HAT_RIGHTDOWN");
	lua_pushnumber(L,SDL_HAT_LEFTUP); lua_setfield(L,-2,"SDL_HAT_LEFTUP");
	lua_pushnumber(L,SDL_HAT_LEFTDOWN); lua_setfield(L,-2,"SDL_HAT_LEFTDOWN");
	lua_pushnumber(L,SDL_ALL_HOTKEYS); lua_setfield(L,-2,"SDL_ALL_HOTKEYS");
	lua_pushnumber(L,SDL_DEFAULT_REPEAT_DELAY); lua_setfield(L,-2,"SDL_DEFAULT_REPEAT_DELAY");
	lua_pushnumber(L,SDL_DEFAULT_REPEAT_INTERVAL); lua_setfield(L,-2,"SDL_DEFAULT_REPEAT_INTERVAL");
	lua_pushnumber(L,SDL_BUTTON_LEFT); lua_setfield(L,-2,"SDL_BUTTON_LEFT");
	lua_pushnumber(L,SDL_BUTTON_MIDDLE); lua_setfield(L,-2,"SDL_BUTTON_MIDDLE");
	lua_pushnumber(L,SDL_BUTTON_RIGHT); lua_setfield(L,-2,"SDL_BUTTON_RIGHT");
	lua_pushnumber(L,SDL_BUTTON_WHEELUP); lua_setfield(L,-2,"SDL_BUTTON_WHEELUP");
	lua_pushnumber(L,SDL_BUTTON_WHEELDOWN); lua_setfield(L,-2,"SDL_BUTTON_WHEELDOWN");
	lua_pushnumber(L,SDL_BUTTON_X1); lua_setfield(L,-2,"SDL_BUTTON_X1");
	lua_pushnumber(L,SDL_BUTTON_X2); lua_setfield(L,-2,"SDL_BUTTON_X2");
	lua_pushnumber(L,SDL_MUTEX_TIMEDOUT); lua_setfield(L,-2,"SDL_MUTEX_TIMEDOUT");
	lua_pushnumber(L,SDL_MAJOR_VERSION); lua_setfield(L,-2,"SDL_MAJOR_VERSION");
	lua_pushnumber(L,SDL_MINOR_VERSION); lua_setfield(L,-2,"SDL_MINOR_VERSION");
	lua_pushnumber(L,SDL_PATCHLEVEL); lua_setfield(L,-2,"SDL_PATCHLEVEL");
	lua_pushnumber(L,SDL_ALPHA_OPAQUE); lua_setfield(L,-2,"SDL_ALPHA_OPAQUE");
	lua_pushnumber(L,SDL_ALPHA_TRANSPARENT); lua_setfield(L,-2,"SDL_ALPHA_TRANSPARENT");
	lua_pushnumber(L,SDL_SWSURFACE); lua_setfield(L,-2,"SDL_SWSURFACE");
	lua_pushnumber(L,SDL_HWSURFACE); lua_setfield(L,-2,"SDL_HWSURFACE");
	lua_pushnumber(L,SDL_ASYNCBLIT); lua_setfield(L,-2,"SDL_ASYNCBLIT");
	lua_pushnumber(L,SDL_ANYFORMAT); lua_setfield(L,-2,"SDL_ANYFORMAT");
	lua_pushnumber(L,SDL_HWPALETTE); lua_setfield(L,-2,"SDL_HWPALETTE");
	lua_pushnumber(L,SDL_DOUBLEBUF); lua_setfield(L,-2,"SDL_DOUBLEBUF");
	lua_pushnumber(L,SDL_FULLSCREEN); lua_setfield(L,-2,"SDL_FULLSCREEN");
	lua_pushnumber(L,SDL_OPENGL); lua_setfield(L,-2,"SDL_OPENGL");
	lua_pushnumber(L,SDL_OPENGLBLIT); lua_setfield(L,-2,"SDL_OPENGLBLIT");
	lua_pushnumber(L,SDL_RESIZABLE); lua_setfield(L,-2,"SDL_RESIZABLE");
	lua_pushnumber(L,SDL_NOFRAME); lua_setfield(L,-2,"SDL_NOFRAME");
	lua_pushnumber(L,SDL_HWACCEL); lua_setfield(L,-2,"SDL_HWACCEL");
	lua_pushnumber(L,SDL_SRCCOLORKEY); lua_setfield(L,-2,"SDL_SRCCOLORKEY");
	lua_pushnumber(L,SDL_RLEACCELOK); lua_setfield(L,-2,"SDL_RLEACCELOK");
	lua_pushnumber(L,SDL_RLEACCEL); lua_setfield(L,-2,"SDL_RLEACCEL");
	lua_pushnumber(L,SDL_SRCALPHA); lua_setfield(L,-2,"SDL_SRCALPHA");
	lua_pushnumber(L,SDL_PREALLOC); lua_setfield(L,-2,"SDL_PREALLOC");
	lua_pushnumber(L,SDL_YV12_OVERLAY); lua_setfield(L,-2,"SDL_YV12_OVERLAY");
	lua_pushnumber(L,SDL_IYUV_OVERLAY); lua_setfield(L,-2,"SDL_IYUV_OVERLAY");
	lua_pushnumber(L,SDL_YUY2_OVERLAY); lua_setfield(L,-2,"SDL_YUY2_OVERLAY");
	lua_pushnumber(L,SDL_UYVY_OVERLAY); lua_setfield(L,-2,"SDL_UYVY_OVERLAY");
	lua_pushnumber(L,SDL_YVYU_OVERLAY); lua_setfield(L,-2,"SDL_YVYU_OVERLAY");
	lua_pushnumber(L,SDL_LOGPAL); lua_setfield(L,-2,"SDL_LOGPAL");
	lua_pushnumber(L,SDL_PHYSPAL); lua_setfield(L,-2,"SDL_PHYSPAL");
}

#ifdef __cplusplus
}
#endif

