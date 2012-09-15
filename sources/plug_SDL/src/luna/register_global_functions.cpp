#include <plug_common.h>

#include <SDL.h>
#include <SDL_active.h>
#include <SDL_audio.h>
#include <SDL_cdrom.h>
#include <SDL_cpuinfo.h>
#include <SDL_endian.h>
#include <SDL_error.h>
#include <SDL_events.h>
#include <SDL_joystick.h>
#include <SDL_keyboard.h>
#include <SDL_loadso.h>
#include <SDL_mouse.h>
#include <SDL_mutex.h>
#include <SDL_thread.h>
#include <SDL_version.h>
#include <SDL_video.h>

// Function checkers:
inline static bool _lg_typecheck_SDL_Init(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_InitSubSystem(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_QuitSubSystem(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WasInit(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_Quit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_GetAppState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_AudioInit(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_AudioQuit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_LockAudio(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_UnlockAudio(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_AudioDriverName(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_OpenAudio(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,21280544)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,21280544)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetAudioStatus(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_PauseAudio(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_FreeWAV(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_BuildAudioCVT(lua_State *L) {
	if( lua_gettop(L)!=7 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,74863825)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_ConvertAudio(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,74863825)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_MixAudio(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CloseAudio(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_CDNumDrives(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_CDName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDOpen(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDStatus(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDPlayTracks(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDPlay(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDPause(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDResume(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDStop(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDEject(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CDClose(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,41376373)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_HasRDTSC(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_HasMMX(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_HasMMXExt(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_Has3DNow(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_Has3DNowExt(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_HasSSE(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_HasSSE2(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_HasAltiVec(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_Swap16(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_Swap32(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetError(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_ClearError(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_Error(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetEventFilter(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,99065423) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetEventFilter(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_PumpEvents(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_PeepEvents(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,46878127)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_PollEvent(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,46878127)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WaitEvent(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,46878127)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_PushEvent(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,46878127)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_EventState(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_NumJoysticks(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_JoystickName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickOpen(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickOpened(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickIndex(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickNumAxes(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickNumBalls(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickNumHats(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickNumButtons(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickUpdate(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_JoystickEventState(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickGetAxis(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickGetHat(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickGetBall(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickGetButton(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_JoystickClose(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,73977241)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_EnableUNICODE(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_EnableKeyRepeat(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetKeyRepeat(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetKeyState(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetModState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_SetModState(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetKeyName(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_LoadObject(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_LoadFunction(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_UnloadObject(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetMouseState(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetRelativeMouseState(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WarpMouse(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateCursor(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetCursor(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95432031)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetCursor(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_FreeCursor(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95432031)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_ShowCursor(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateMutex(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_mutexP(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83803316)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_mutexV(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83803316)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_DestroyMutex(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,83803316)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateSemaphore(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_DestroySemaphore(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SemWait(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SemTryWait(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SemWaitTimeout(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SemPost(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SemValue(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,82714739)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateCond(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_DestroyCond(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,63689794)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CondSignal(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,63689794)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CondBroadcast(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,63689794)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CondWait(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,63689794)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83803316)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CondWaitTimeout(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,63689794)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83803316)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_ThreadID(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_GetThreadID(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70107873)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WaitThread(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70107873)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_KillThread(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70107873)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_Linked_Version(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_VideoInit(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_VideoQuit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_UpdateRects(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_UpdateRect(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateYUVOverlay(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_LockYUVOverlay(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25026059)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_UnlockYUVOverlay(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25026059)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_DisplayYUVOverlay(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25026059)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_FreeYUVOverlay(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25026059)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_LoadLibrary(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_GetProcAddress(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_SetAttribute(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_GetAttribute(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_SwapBuffers(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_GL_UpdateRects(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GL_Lock(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_GL_Unlock(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_WM_SetCaption(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WM_SetIcon(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WM_IconifyWindow(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_WM_ToggleFullScreen(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_WM_GrabInput(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_VideoDriverName(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetVideoSurface(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_GetVideoInfo(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_SDL_VideoModeOK(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetVideoMode(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_Flip(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetGamma(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isnumber(L,1)==0 ) return false;
	if( lua_isnumber(L,2)==0 ) return false;
	if( lua_isnumber(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetGammaRamp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetGammaRamp(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetColors(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44829304)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetPalette(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44829304)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_MapRGB(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,19743188)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_MapRGBA(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,19743188)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetRGB(lua_State *L) {
	if( lua_gettop(L)!=5 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19743188)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetRGBA(lua_State *L) {
	if( lua_gettop(L)!=6 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19743188)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateRGBSurface(lua_State *L) {
	if( lua_gettop(L)!=8 ) return false;

	if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_CreateRGBSurfaceFrom(lua_State *L) {
	if( lua_gettop(L)!=9 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_FreeSurface(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_LockSurface(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_UnlockSurface(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetColorKey(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetAlpha(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SetClipRect(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_GetClipRect(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_ConvertSurface(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19743188)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_UpperBlit(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58049030)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_LowerBlit(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58049030)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63173412)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_FillRect(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_DisplayFormat(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_DisplayFormatAlpha(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	return true;
}

inline static bool _lg_typecheck_SDL_SoftStretch(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58049030)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63173412)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58049030)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63173412)) ) return false;
	return true;
}


// Function binds:
// int SDL_Init(unsigned int flags)
static int _bind_SDL_Init(lua_State *L) {
	if (!_lg_typecheck_SDL_Init(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_Init(unsigned int flags) function, expected prototype:\nint SDL_Init(unsigned int flags)\nClass arguments details:\n");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	int lret = SDL_Init(flags);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_InitSubSystem(unsigned int flags)
static int _bind_SDL_InitSubSystem(lua_State *L) {
	if (!_lg_typecheck_SDL_InitSubSystem(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_InitSubSystem(unsigned int flags) function, expected prototype:\nint SDL_InitSubSystem(unsigned int flags)\nClass arguments details:\n");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	int lret = SDL_InitSubSystem(flags);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_QuitSubSystem(unsigned int flags)
static int _bind_SDL_QuitSubSystem(lua_State *L) {
	if (!_lg_typecheck_SDL_QuitSubSystem(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_QuitSubSystem(unsigned int flags) function, expected prototype:\nvoid SDL_QuitSubSystem(unsigned int flags)\nClass arguments details:\n");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	SDL_QuitSubSystem(flags);

	return 0;
}

// unsigned int SDL_WasInit(unsigned int flags)
static int _bind_SDL_WasInit(lua_State *L) {
	if (!_lg_typecheck_SDL_WasInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_WasInit(unsigned int flags) function, expected prototype:\nunsigned int SDL_WasInit(unsigned int flags)\nClass arguments details:\n");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = SDL_WasInit(flags);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_Quit()
static int _bind_SDL_Quit(lua_State *L) {
	if (!_lg_typecheck_SDL_Quit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_Quit() function, expected prototype:\nvoid SDL_Quit()\nClass arguments details:\n");
	}


	SDL_Quit();

	return 0;
}

// unsigned char SDL_GetAppState()
static int _bind_SDL_GetAppState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetAppState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_GetAppState() function, expected prototype:\nunsigned char SDL_GetAppState()\nClass arguments details:\n");
	}


	unsigned char lret = SDL_GetAppState();
	lua_pushnumber(L,(int)lret);

	return 1;
}

// int SDL_AudioInit(const char * driver_name)
static int _bind_SDL_AudioInit(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_AudioInit(const char * driver_name) function, expected prototype:\nint SDL_AudioInit(const char * driver_name)\nClass arguments details:\n");
	}

	const char * driver_name=(const char *)lua_tostring(L,1);

	int lret = SDL_AudioInit(driver_name);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_AudioQuit()
static int _bind_SDL_AudioQuit(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioQuit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_AudioQuit() function, expected prototype:\nvoid SDL_AudioQuit()\nClass arguments details:\n");
	}


	SDL_AudioQuit();

	return 0;
}

// void SDL_LockAudio()
static int _bind_SDL_LockAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_LockAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_LockAudio() function, expected prototype:\nvoid SDL_LockAudio()\nClass arguments details:\n");
	}


	SDL_LockAudio();

	return 0;
}

// void SDL_UnlockAudio()
static int _bind_SDL_UnlockAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UnlockAudio() function, expected prototype:\nvoid SDL_UnlockAudio()\nClass arguments details:\n");
	}


	SDL_UnlockAudio();

	return 0;
}

// char * SDL_AudioDriverName(char * namebuf, int maxlen)
static int _bind_SDL_AudioDriverName(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioDriverName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char * SDL_AudioDriverName(char * namebuf, int maxlen) function, expected prototype:\nchar * SDL_AudioDriverName(char * namebuf, int maxlen)\nClass arguments details:\n");
	}

	char namebuf=(char)lua_tointeger(L,1);
	int maxlen=(int)lua_tointeger(L,2);

	char * lret = SDL_AudioDriverName(&namebuf, maxlen);
	lua_pushnumber(L,*lret);

	return 1;
}

// int SDL_OpenAudio(SDL_AudioSpec * desired, SDL_AudioSpec * obtained)
static int _bind_SDL_OpenAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_OpenAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_OpenAudio(SDL_AudioSpec * desired, SDL_AudioSpec * obtained) function, expected prototype:\nint SDL_OpenAudio(SDL_AudioSpec * desired, SDL_AudioSpec * obtained)\nClass arguments details:\narg 1 ID = 21280544\narg 2 ID = 21280544\n");
	}

	SDL_AudioSpec* desired=(Luna< SDL_AudioSpec >::check(L,1));
	SDL_AudioSpec* obtained=(Luna< SDL_AudioSpec >::check(L,2));

	int lret = SDL_OpenAudio(desired, obtained);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_audiostatus SDL_GetAudioStatus()
static int _bind_SDL_GetAudioStatus(lua_State *L) {
	if (!_lg_typecheck_SDL_GetAudioStatus(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_audiostatus SDL_GetAudioStatus() function, expected prototype:\nSDL_audiostatus SDL_GetAudioStatus()\nClass arguments details:\n");
	}


	SDL_audiostatus lret = SDL_GetAudioStatus();
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_PauseAudio(int pause_on)
static int _bind_SDL_PauseAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_PauseAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_PauseAudio(int pause_on) function, expected prototype:\nvoid SDL_PauseAudio(int pause_on)\nClass arguments details:\n");
	}

	int pause_on=(int)lua_tointeger(L,1);

	SDL_PauseAudio(pause_on);

	return 0;
}

// void SDL_FreeWAV(unsigned char * audio_buf)
static int _bind_SDL_FreeWAV(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeWAV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_FreeWAV(unsigned char * audio_buf) function, expected prototype:\nvoid SDL_FreeWAV(unsigned char * audio_buf)\nClass arguments details:\n");
	}

	unsigned char audio_buf = (unsigned char)(lua_tointeger(L,1));

	SDL_FreeWAV(&audio_buf);

	return 0;
}

// int SDL_BuildAudioCVT(SDL_AudioCVT * cvt, Uint16 src_format, unsigned char src_channels, int src_rate, Uint16 dst_format, unsigned char dst_channels, int dst_rate)
static int _bind_SDL_BuildAudioCVT(lua_State *L) {
	if (!_lg_typecheck_SDL_BuildAudioCVT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_BuildAudioCVT(SDL_AudioCVT * cvt, Uint16 src_format, unsigned char src_channels, int src_rate, Uint16 dst_format, unsigned char dst_channels, int dst_rate) function, expected prototype:\nint SDL_BuildAudioCVT(SDL_AudioCVT * cvt, Uint16 src_format, unsigned char src_channels, int src_rate, Uint16 dst_format, unsigned char dst_channels, int dst_rate)\nClass arguments details:\narg 1 ID = 74863825\n");
	}

	SDL_AudioCVT* cvt=(Luna< SDL_AudioCVT >::check(L,1));
	Uint16 src_format=(Uint16)lua_tointeger(L,2);
	unsigned char src_channels = (unsigned char)(lua_tointeger(L,3));
	int src_rate=(int)lua_tointeger(L,4);
	Uint16 dst_format=(Uint16)lua_tointeger(L,5);
	unsigned char dst_channels = (unsigned char)(lua_tointeger(L,6));
	int dst_rate=(int)lua_tointeger(L,7);

	int lret = SDL_BuildAudioCVT(cvt, src_format, src_channels, src_rate, dst_format, dst_channels, dst_rate);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_ConvertAudio(SDL_AudioCVT * cvt)
static int _bind_SDL_ConvertAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_ConvertAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_ConvertAudio(SDL_AudioCVT * cvt) function, expected prototype:\nint SDL_ConvertAudio(SDL_AudioCVT * cvt)\nClass arguments details:\narg 1 ID = 74863825\n");
	}

	SDL_AudioCVT* cvt=(Luna< SDL_AudioCVT >::check(L,1));

	int lret = SDL_ConvertAudio(cvt);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_MixAudio(unsigned char * dst, const unsigned char * src, unsigned int len, int volume)
static int _bind_SDL_MixAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_MixAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_MixAudio(unsigned char * dst, const unsigned char * src, unsigned int len, int volume) function, expected prototype:\nvoid SDL_MixAudio(unsigned char * dst, const unsigned char * src, unsigned int len, int volume)\nClass arguments details:\n");
	}

	unsigned char dst = (unsigned char)(lua_tointeger(L,1));
	unsigned char src = (unsigned char)(lua_tointeger(L,2));
	unsigned int len=(unsigned int)lua_tointeger(L,3);
	int volume=(int)lua_tointeger(L,4);

	SDL_MixAudio(&dst, &src, len, volume);

	return 0;
}

// void SDL_CloseAudio()
static int _bind_SDL_CloseAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_CloseAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_CloseAudio() function, expected prototype:\nvoid SDL_CloseAudio()\nClass arguments details:\n");
	}


	SDL_CloseAudio();

	return 0;
}

// int SDL_CDNumDrives()
static int _bind_SDL_CDNumDrives(lua_State *L) {
	if (!_lg_typecheck_SDL_CDNumDrives(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDNumDrives() function, expected prototype:\nint SDL_CDNumDrives()\nClass arguments details:\n");
	}


	int lret = SDL_CDNumDrives();
	lua_pushnumber(L,lret);

	return 1;
}

// const char * SDL_CDName(int drive)
static int _bind_SDL_CDName(lua_State *L) {
	if (!_lg_typecheck_SDL_CDName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * SDL_CDName(int drive) function, expected prototype:\nconst char * SDL_CDName(int drive)\nClass arguments details:\n");
	}

	int drive=(int)lua_tointeger(L,1);

	const char * lret = SDL_CDName(drive);
	lua_pushstring(L,lret);

	return 1;
}

// SDL_CD * SDL_CDOpen(int drive)
static int _bind_SDL_CDOpen(lua_State *L) {
	if (!_lg_typecheck_SDL_CDOpen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CD * SDL_CDOpen(int drive) function, expected prototype:\nSDL_CD * SDL_CDOpen(int drive)\nClass arguments details:\n");
	}

	int drive=(int)lua_tointeger(L,1);

	SDL_CD * lret = SDL_CDOpen(drive);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_CD >::push(L,lret,false);

	return 1;
}

// CDstatus SDL_CDStatus(SDL_CD * cdrom)
static int _bind_SDL_CDStatus(lua_State *L) {
	if (!_lg_typecheck_SDL_CDStatus(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in CDstatus SDL_CDStatus(SDL_CD * cdrom) function, expected prototype:\nCDstatus SDL_CDStatus(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	CDstatus lret = SDL_CDStatus(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDPlayTracks(SDL_CD * cdrom, int start_track, int start_frame, int ntracks, int nframes)
static int _bind_SDL_CDPlayTracks(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPlayTracks(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDPlayTracks(SDL_CD * cdrom, int start_track, int start_frame, int ntracks, int nframes) function, expected prototype:\nint SDL_CDPlayTracks(SDL_CD * cdrom, int start_track, int start_frame, int ntracks, int nframes)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));
	int start_track=(int)lua_tointeger(L,2);
	int start_frame=(int)lua_tointeger(L,3);
	int ntracks=(int)lua_tointeger(L,4);
	int nframes=(int)lua_tointeger(L,5);

	int lret = SDL_CDPlayTracks(cdrom, start_track, start_frame, ntracks, nframes);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDPlay(SDL_CD * cdrom, int start, int length)
static int _bind_SDL_CDPlay(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDPlay(SDL_CD * cdrom, int start, int length) function, expected prototype:\nint SDL_CDPlay(SDL_CD * cdrom, int start, int length)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));
	int start=(int)lua_tointeger(L,2);
	int length=(int)lua_tointeger(L,3);

	int lret = SDL_CDPlay(cdrom, start, length);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDPause(SDL_CD * cdrom)
static int _bind_SDL_CDPause(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPause(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDPause(SDL_CD * cdrom) function, expected prototype:\nint SDL_CDPause(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDPause(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDResume(SDL_CD * cdrom)
static int _bind_SDL_CDResume(lua_State *L) {
	if (!_lg_typecheck_SDL_CDResume(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDResume(SDL_CD * cdrom) function, expected prototype:\nint SDL_CDResume(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDResume(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDStop(SDL_CD * cdrom)
static int _bind_SDL_CDStop(lua_State *L) {
	if (!_lg_typecheck_SDL_CDStop(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDStop(SDL_CD * cdrom) function, expected prototype:\nint SDL_CDStop(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDStop(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CDEject(SDL_CD * cdrom)
static int _bind_SDL_CDEject(lua_State *L) {
	if (!_lg_typecheck_SDL_CDEject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CDEject(SDL_CD * cdrom) function, expected prototype:\nint SDL_CDEject(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDEject(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_CDClose(SDL_CD * cdrom)
static int _bind_SDL_CDClose(lua_State *L) {
	if (!_lg_typecheck_SDL_CDClose(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_CDClose(SDL_CD * cdrom) function, expected prototype:\nvoid SDL_CDClose(SDL_CD * cdrom)\nClass arguments details:\narg 1 ID = 41376373\n");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	SDL_CDClose(cdrom);

	return 0;
}

// int SDL_HasRDTSC()
static int _bind_SDL_HasRDTSC(lua_State *L) {
	if (!_lg_typecheck_SDL_HasRDTSC(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasRDTSC() function, expected prototype:\nint SDL_HasRDTSC()\nClass arguments details:\n");
	}


	int lret = SDL_HasRDTSC();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_HasMMX()
static int _bind_SDL_HasMMX(lua_State *L) {
	if (!_lg_typecheck_SDL_HasMMX(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasMMX() function, expected prototype:\nint SDL_HasMMX()\nClass arguments details:\n");
	}


	int lret = SDL_HasMMX();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_HasMMXExt()
static int _bind_SDL_HasMMXExt(lua_State *L) {
	if (!_lg_typecheck_SDL_HasMMXExt(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasMMXExt() function, expected prototype:\nint SDL_HasMMXExt()\nClass arguments details:\n");
	}


	int lret = SDL_HasMMXExt();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_Has3DNow()
static int _bind_SDL_Has3DNow(lua_State *L) {
	if (!_lg_typecheck_SDL_Has3DNow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_Has3DNow() function, expected prototype:\nint SDL_Has3DNow()\nClass arguments details:\n");
	}


	int lret = SDL_Has3DNow();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_Has3DNowExt()
static int _bind_SDL_Has3DNowExt(lua_State *L) {
	if (!_lg_typecheck_SDL_Has3DNowExt(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_Has3DNowExt() function, expected prototype:\nint SDL_Has3DNowExt()\nClass arguments details:\n");
	}


	int lret = SDL_Has3DNowExt();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_HasSSE()
static int _bind_SDL_HasSSE(lua_State *L) {
	if (!_lg_typecheck_SDL_HasSSE(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasSSE() function, expected prototype:\nint SDL_HasSSE()\nClass arguments details:\n");
	}


	int lret = SDL_HasSSE();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_HasSSE2()
static int _bind_SDL_HasSSE2(lua_State *L) {
	if (!_lg_typecheck_SDL_HasSSE2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasSSE2() function, expected prototype:\nint SDL_HasSSE2()\nClass arguments details:\n");
	}


	int lret = SDL_HasSSE2();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_HasAltiVec()
static int _bind_SDL_HasAltiVec(lua_State *L) {
	if (!_lg_typecheck_SDL_HasAltiVec(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_HasAltiVec() function, expected prototype:\nint SDL_HasAltiVec()\nClass arguments details:\n");
	}


	int lret = SDL_HasAltiVec();
	lua_pushnumber(L,lret);

	return 1;
}

// static Uint16 SDL_Swap16(Uint16 x)
static int _bind_SDL_Swap16(lua_State *L) {
	if (!_lg_typecheck_SDL_Swap16(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in static Uint16 SDL_Swap16(Uint16 x) function, expected prototype:\nstatic Uint16 SDL_Swap16(Uint16 x)\nClass arguments details:\n");
	}

	Uint16 x=(Uint16)lua_tointeger(L,1);

	Uint16 lret = SDL_Swap16(x);
	lua_pushnumber(L,lret);

	return 1;
}

// static unsigned int SDL_Swap32(unsigned int x)
static int _bind_SDL_Swap32(lua_State *L) {
	if (!_lg_typecheck_SDL_Swap32(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in static unsigned int SDL_Swap32(unsigned int x) function, expected prototype:\nstatic unsigned int SDL_Swap32(unsigned int x)\nClass arguments details:\n");
	}

	unsigned int x=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = SDL_Swap32(x);
	lua_pushnumber(L,lret);

	return 1;
}

// char * SDL_GetError()
static int _bind_SDL_GetError(lua_State *L) {
	if (!_lg_typecheck_SDL_GetError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char * SDL_GetError() function, expected prototype:\nchar * SDL_GetError()\nClass arguments details:\n");
	}


	char * lret = SDL_GetError();
	lua_pushnumber(L,*lret);

	return 1;
}

// void SDL_ClearError()
static int _bind_SDL_ClearError(lua_State *L) {
	if (!_lg_typecheck_SDL_ClearError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_ClearError() function, expected prototype:\nvoid SDL_ClearError()\nClass arguments details:\n");
	}


	SDL_ClearError();

	return 0;
}

// void SDL_Error(SDL_errorcode code)
static int _bind_SDL_Error(lua_State *L) {
	if (!_lg_typecheck_SDL_Error(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_Error(SDL_errorcode code) function, expected prototype:\nvoid SDL_Error(SDL_errorcode code)\nClass arguments details:\n");
	}

	SDL_errorcode code=(SDL_errorcode)lua_tointeger(L,1);

	SDL_Error(code);

	return 0;
}

// void SDL_SetEventFilter(SDL_EventFilter filter)
static int _bind_SDL_SetEventFilter(lua_State *L) {
	if (!_lg_typecheck_SDL_SetEventFilter(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_SetEventFilter(SDL_EventFilter filter) function, expected prototype:\nvoid SDL_SetEventFilter(SDL_EventFilter filter)\nClass arguments details:\narg 1 ID = 99065423\n");
	}

	SDL_EventFilter* filter_ptr=(Luna< SDL_EventFilter >::check(L,1));
	if( !filter_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filter in SDL_SetEventFilter function");
	}
	SDL_EventFilter filter=*filter_ptr;

	SDL_SetEventFilter(filter);

	return 0;
}

// SDL_EventFilter SDL_GetEventFilter()
static int _bind_SDL_GetEventFilter(lua_State *L) {
	if (!_lg_typecheck_SDL_GetEventFilter(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_EventFilter SDL_GetEventFilter() function, expected prototype:\nSDL_EventFilter SDL_GetEventFilter()\nClass arguments details:\n");
	}


	SDL_EventFilter stack_lret = SDL_GetEventFilter();
	SDL_EventFilter* lret = new SDL_EventFilter(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_EventFilter >::push(L,lret,true);

	return 1;
}

// void SDL_PumpEvents()
static int _bind_SDL_PumpEvents(lua_State *L) {
	if (!_lg_typecheck_SDL_PumpEvents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_PumpEvents() function, expected prototype:\nvoid SDL_PumpEvents()\nClass arguments details:\n");
	}


	SDL_PumpEvents();

	return 0;
}

// int SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action, unsigned int mask)
static int _bind_SDL_PeepEvents(lua_State *L) {
	if (!_lg_typecheck_SDL_PeepEvents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action, unsigned int mask) function, expected prototype:\nint SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action, unsigned int mask)\nClass arguments details:\narg 1 ID = 46878127\n");
	}

	SDL_Event* events=(Luna< SDL_Event >::check(L,1));
	int numevents=(int)lua_tointeger(L,2);
	SDL_eventaction action=(SDL_eventaction)lua_tointeger(L,3);
	unsigned int mask=(unsigned int)lua_tointeger(L,4);

	int lret = SDL_PeepEvents(events, numevents, action, mask);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_PollEvent(SDL_Event * event)
static int _bind_SDL_PollEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_PollEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_PollEvent(SDL_Event * event) function, expected prototype:\nint SDL_PollEvent(SDL_Event * event)\nClass arguments details:\narg 1 ID = 46878127\n");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_PollEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_WaitEvent(SDL_Event * event)
static int _bind_SDL_WaitEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_WaitEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_WaitEvent(SDL_Event * event) function, expected prototype:\nint SDL_WaitEvent(SDL_Event * event)\nClass arguments details:\narg 1 ID = 46878127\n");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_WaitEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_PushEvent(SDL_Event * event)
static int _bind_SDL_PushEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_PushEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_PushEvent(SDL_Event * event) function, expected prototype:\nint SDL_PushEvent(SDL_Event * event)\nClass arguments details:\narg 1 ID = 46878127\n");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_PushEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned char SDL_EventState(unsigned char type, int state)
static int _bind_SDL_EventState(lua_State *L) {
	if (!_lg_typecheck_SDL_EventState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_EventState(unsigned char type, int state) function, expected prototype:\nunsigned char SDL_EventState(unsigned char type, int state)\nClass arguments details:\n");
	}

	unsigned char type = (unsigned char)(lua_tointeger(L,1));
	int state=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_EventState(type, state);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// int SDL_NumJoysticks()
static int _bind_SDL_NumJoysticks(lua_State *L) {
	if (!_lg_typecheck_SDL_NumJoysticks(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_NumJoysticks() function, expected prototype:\nint SDL_NumJoysticks()\nClass arguments details:\n");
	}


	int lret = SDL_NumJoysticks();
	lua_pushnumber(L,lret);

	return 1;
}

// const char * SDL_JoystickName(int device_index)
static int _bind_SDL_JoystickName(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * SDL_JoystickName(int device_index) function, expected prototype:\nconst char * SDL_JoystickName(int device_index)\nClass arguments details:\n");
	}

	int device_index=(int)lua_tointeger(L,1);

	const char * lret = SDL_JoystickName(device_index);
	lua_pushstring(L,lret);

	return 1;
}

// SDL_Joystick * SDL_JoystickOpen(int device_index)
static int _bind_SDL_JoystickOpen(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickOpen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Joystick * SDL_JoystickOpen(int device_index) function, expected prototype:\nSDL_Joystick * SDL_JoystickOpen(int device_index)\nClass arguments details:\n");
	}

	int device_index=(int)lua_tointeger(L,1);

	SDL_Joystick * lret = SDL_JoystickOpen(device_index);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Joystick >::push(L,lret,false);

	return 1;
}

// int SDL_JoystickOpened(int device_index)
static int _bind_SDL_JoystickOpened(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickOpened(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickOpened(int device_index) function, expected prototype:\nint SDL_JoystickOpened(int device_index)\nClass arguments details:\n");
	}

	int device_index=(int)lua_tointeger(L,1);

	int lret = SDL_JoystickOpened(device_index);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_JoystickIndex(SDL_Joystick * joystick)
static int _bind_SDL_JoystickIndex(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickIndex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickIndex(SDL_Joystick * joystick) function, expected prototype:\nint SDL_JoystickIndex(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickIndex(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_JoystickNumAxes(SDL_Joystick * joystick)
static int _bind_SDL_JoystickNumAxes(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumAxes(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickNumAxes(SDL_Joystick * joystick) function, expected prototype:\nint SDL_JoystickNumAxes(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumAxes(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_JoystickNumBalls(SDL_Joystick * joystick)
static int _bind_SDL_JoystickNumBalls(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumBalls(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickNumBalls(SDL_Joystick * joystick) function, expected prototype:\nint SDL_JoystickNumBalls(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumBalls(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_JoystickNumHats(SDL_Joystick * joystick)
static int _bind_SDL_JoystickNumHats(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumHats(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickNumHats(SDL_Joystick * joystick) function, expected prototype:\nint SDL_JoystickNumHats(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumHats(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_JoystickNumButtons(SDL_Joystick * joystick)
static int _bind_SDL_JoystickNumButtons(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumButtons(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickNumButtons(SDL_Joystick * joystick) function, expected prototype:\nint SDL_JoystickNumButtons(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumButtons(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_JoystickUpdate()
static int _bind_SDL_JoystickUpdate(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickUpdate(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_JoystickUpdate() function, expected prototype:\nvoid SDL_JoystickUpdate()\nClass arguments details:\n");
	}


	SDL_JoystickUpdate();

	return 0;
}

// int SDL_JoystickEventState(int state)
static int _bind_SDL_JoystickEventState(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickEventState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickEventState(int state) function, expected prototype:\nint SDL_JoystickEventState(int state)\nClass arguments details:\n");
	}

	int state=(int)lua_tointeger(L,1);

	int lret = SDL_JoystickEventState(state);
	lua_pushnumber(L,lret);

	return 1;
}

// Sint16 SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis)
static int _bind_SDL_JoystickGetAxis(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetAxis(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in Sint16 SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis) function, expected prototype:\nSint16 SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int axis=(int)lua_tointeger(L,2);

	Sint16 lret = SDL_JoystickGetAxis(joystick, axis);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned char SDL_JoystickGetHat(SDL_Joystick * joystick, int hat)
static int _bind_SDL_JoystickGetHat(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetHat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_JoystickGetHat(SDL_Joystick * joystick, int hat) function, expected prototype:\nunsigned char SDL_JoystickGetHat(SDL_Joystick * joystick, int hat)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int hat=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_JoystickGetHat(joystick, hat);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// int SDL_JoystickGetBall(SDL_Joystick * joystick, int ball, int * dx, int * dy)
static int _bind_SDL_JoystickGetBall(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetBall(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_JoystickGetBall(SDL_Joystick * joystick, int ball, int * dx, int * dy) function, expected prototype:\nint SDL_JoystickGetBall(SDL_Joystick * joystick, int ball, int * dx, int * dy)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int ball=(int)lua_tointeger(L,2);
	int dx=(int)lua_tointeger(L,3);
	int dy=(int)lua_tointeger(L,4);

	int lret = SDL_JoystickGetBall(joystick, ball, &dx, &dy);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned char SDL_JoystickGetButton(SDL_Joystick * joystick, int button)
static int _bind_SDL_JoystickGetButton(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetButton(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_JoystickGetButton(SDL_Joystick * joystick, int button) function, expected prototype:\nunsigned char SDL_JoystickGetButton(SDL_Joystick * joystick, int button)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int button=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_JoystickGetButton(joystick, button);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void SDL_JoystickClose(SDL_Joystick * joystick)
static int _bind_SDL_JoystickClose(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickClose(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_JoystickClose(SDL_Joystick * joystick) function, expected prototype:\nvoid SDL_JoystickClose(SDL_Joystick * joystick)\nClass arguments details:\narg 1 ID = 73977241\n");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	SDL_JoystickClose(joystick);

	return 0;
}

// int SDL_EnableUNICODE(int enable)
static int _bind_SDL_EnableUNICODE(lua_State *L) {
	if (!_lg_typecheck_SDL_EnableUNICODE(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_EnableUNICODE(int enable) function, expected prototype:\nint SDL_EnableUNICODE(int enable)\nClass arguments details:\n");
	}

	int enable=(int)lua_tointeger(L,1);

	int lret = SDL_EnableUNICODE(enable);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_EnableKeyRepeat(int delay, int interval)
static int _bind_SDL_EnableKeyRepeat(lua_State *L) {
	if (!_lg_typecheck_SDL_EnableKeyRepeat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_EnableKeyRepeat(int delay, int interval) function, expected prototype:\nint SDL_EnableKeyRepeat(int delay, int interval)\nClass arguments details:\n");
	}

	int delay=(int)lua_tointeger(L,1);
	int interval=(int)lua_tointeger(L,2);

	int lret = SDL_EnableKeyRepeat(delay, interval);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_GetKeyRepeat(int * delay, int * interval)
static int _bind_SDL_GetKeyRepeat(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyRepeat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GetKeyRepeat(int * delay, int * interval) function, expected prototype:\nvoid SDL_GetKeyRepeat(int * delay, int * interval)\nClass arguments details:\n");
	}

	int delay=(int)lua_tointeger(L,1);
	int interval=(int)lua_tointeger(L,2);

	SDL_GetKeyRepeat(&delay, &interval);

	return 0;
}

// unsigned char * SDL_GetKeyState(int * numkeys)
static int _bind_SDL_GetKeyState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char * SDL_GetKeyState(int * numkeys) function, expected prototype:\nunsigned char * SDL_GetKeyState(int * numkeys)\nClass arguments details:\n");
	}

	int numkeys=(int)lua_tointeger(L,1);

	unsigned char * lret = SDL_GetKeyState(&numkeys);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

// SDLMod SDL_GetModState()
static int _bind_SDL_GetModState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetModState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDLMod SDL_GetModState() function, expected prototype:\nSDLMod SDL_GetModState()\nClass arguments details:\n");
	}


	SDLMod lret = SDL_GetModState();
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_SetModState(SDLMod modstate)
static int _bind_SDL_SetModState(lua_State *L) {
	if (!_lg_typecheck_SDL_SetModState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_SetModState(SDLMod modstate) function, expected prototype:\nvoid SDL_SetModState(SDLMod modstate)\nClass arguments details:\n");
	}

	SDLMod modstate=(SDLMod)lua_tointeger(L,1);

	SDL_SetModState(modstate);

	return 0;
}

// char * SDL_GetKeyName(SDLKey key)
static int _bind_SDL_GetKeyName(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char * SDL_GetKeyName(SDLKey key) function, expected prototype:\nchar * SDL_GetKeyName(SDLKey key)\nClass arguments details:\n");
	}

	SDLKey key=(SDLKey)lua_tointeger(L,1);

	char * lret = SDL_GetKeyName(key);
	lua_pushnumber(L,*lret);

	return 1;
}

// void * SDL_LoadObject(const char * sofile)
static int _bind_SDL_LoadObject(lua_State *L) {
	if (!_lg_typecheck_SDL_LoadObject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * SDL_LoadObject(const char * sofile) function, expected prototype:\nvoid * SDL_LoadObject(const char * sofile)\nClass arguments details:\n");
	}

	const char * sofile=(const char *)lua_tostring(L,1);

	void * lret = SDL_LoadObject(sofile);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void * SDL_LoadFunction(void * handle, const char * name)
static int _bind_SDL_LoadFunction(lua_State *L) {
	if (!_lg_typecheck_SDL_LoadFunction(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * SDL_LoadFunction(void * handle, const char * name) function, expected prototype:\nvoid * SDL_LoadFunction(void * handle, const char * name)\nClass arguments details:\n");
	}

	void* handle=(Luna< void >::check(L,1));
	const char * name=(const char *)lua_tostring(L,2);

	void * lret = SDL_LoadFunction(handle, name);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// void SDL_UnloadObject(void * handle)
static int _bind_SDL_UnloadObject(lua_State *L) {
	if (!_lg_typecheck_SDL_UnloadObject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UnloadObject(void * handle) function, expected prototype:\nvoid SDL_UnloadObject(void * handle)\nClass arguments details:\n");
	}

	void* handle=(Luna< void >::check(L,1));

	SDL_UnloadObject(handle);

	return 0;
}

// unsigned char SDL_GetMouseState(int * x, int * y)
static int _bind_SDL_GetMouseState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetMouseState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_GetMouseState(int * x, int * y) function, expected prototype:\nunsigned char SDL_GetMouseState(int * x, int * y)\nClass arguments details:\n");
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_GetMouseState(&x, &y);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// unsigned char SDL_GetRelativeMouseState(int * x, int * y)
static int _bind_SDL_GetRelativeMouseState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRelativeMouseState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned char SDL_GetRelativeMouseState(int * x, int * y) function, expected prototype:\nunsigned char SDL_GetRelativeMouseState(int * x, int * y)\nClass arguments details:\n");
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_GetRelativeMouseState(&x, &y);
	lua_pushnumber(L,(int)lret);

	return 1;
}

// void SDL_WarpMouse(Uint16 x, Uint16 y)
static int _bind_SDL_WarpMouse(lua_State *L) {
	if (!_lg_typecheck_SDL_WarpMouse(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_WarpMouse(Uint16 x, Uint16 y) function, expected prototype:\nvoid SDL_WarpMouse(Uint16 x, Uint16 y)\nClass arguments details:\n");
	}

	Uint16 x=(Uint16)lua_tointeger(L,1);
	Uint16 y=(Uint16)lua_tointeger(L,2);

	SDL_WarpMouse(x, y);

	return 0;
}

// SDL_Cursor * SDL_CreateCursor(unsigned char * data, unsigned char * mask, int w, int h, int hot_x, int hot_y)
static int _bind_SDL_CreateCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Cursor * SDL_CreateCursor(unsigned char * data, unsigned char * mask, int w, int h, int hot_x, int hot_y) function, expected prototype:\nSDL_Cursor * SDL_CreateCursor(unsigned char * data, unsigned char * mask, int w, int h, int hot_x, int hot_y)\nClass arguments details:\n");
	}

	unsigned char data = (unsigned char)(lua_tointeger(L,1));
	unsigned char mask = (unsigned char)(lua_tointeger(L,2));
	int w=(int)lua_tointeger(L,3);
	int h=(int)lua_tointeger(L,4);
	int hot_x=(int)lua_tointeger(L,5);
	int hot_y=(int)lua_tointeger(L,6);

	SDL_Cursor * lret = SDL_CreateCursor(&data, &mask, w, h, hot_x, hot_y);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Cursor >::push(L,lret,false);

	return 1;
}

// void SDL_SetCursor(SDL_Cursor * cursor)
static int _bind_SDL_SetCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_SetCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_SetCursor(SDL_Cursor * cursor) function, expected prototype:\nvoid SDL_SetCursor(SDL_Cursor * cursor)\nClass arguments details:\narg 1 ID = 95432031\n");
	}

	SDL_Cursor* cursor=(Luna< SDL_Cursor >::check(L,1));

	SDL_SetCursor(cursor);

	return 0;
}

// SDL_Cursor * SDL_GetCursor()
static int _bind_SDL_GetCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_GetCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Cursor * SDL_GetCursor() function, expected prototype:\nSDL_Cursor * SDL_GetCursor()\nClass arguments details:\n");
	}


	SDL_Cursor * lret = SDL_GetCursor();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Cursor >::push(L,lret,false);

	return 1;
}

// void SDL_FreeCursor(SDL_Cursor * cursor)
static int _bind_SDL_FreeCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_FreeCursor(SDL_Cursor * cursor) function, expected prototype:\nvoid SDL_FreeCursor(SDL_Cursor * cursor)\nClass arguments details:\narg 1 ID = 95432031\n");
	}

	SDL_Cursor* cursor=(Luna< SDL_Cursor >::check(L,1));

	SDL_FreeCursor(cursor);

	return 0;
}

// int SDL_ShowCursor(int toggle)
static int _bind_SDL_ShowCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_ShowCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_ShowCursor(int toggle) function, expected prototype:\nint SDL_ShowCursor(int toggle)\nClass arguments details:\n");
	}

	int toggle=(int)lua_tointeger(L,1);

	int lret = SDL_ShowCursor(toggle);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_mutex * SDL_CreateMutex()
static int _bind_SDL_CreateMutex(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateMutex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_mutex * SDL_CreateMutex() function, expected prototype:\nSDL_mutex * SDL_CreateMutex()\nClass arguments details:\n");
	}


	SDL_mutex * lret = SDL_CreateMutex();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_mutex >::push(L,lret,false);

	return 1;
}

// int SDL_mutexP(SDL_mutex * mutex)
static int _bind_SDL_mutexP(lua_State *L) {
	if (!_lg_typecheck_SDL_mutexP(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_mutexP(SDL_mutex * mutex) function, expected prototype:\nint SDL_mutexP(SDL_mutex * mutex)\nClass arguments details:\narg 1 ID = 83803316\n");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	int lret = SDL_mutexP(mutex);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_mutexV(SDL_mutex * mutex)
static int _bind_SDL_mutexV(lua_State *L) {
	if (!_lg_typecheck_SDL_mutexV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_mutexV(SDL_mutex * mutex) function, expected prototype:\nint SDL_mutexV(SDL_mutex * mutex)\nClass arguments details:\narg 1 ID = 83803316\n");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	int lret = SDL_mutexV(mutex);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_DestroyMutex(SDL_mutex * mutex)
static int _bind_SDL_DestroyMutex(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroyMutex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_DestroyMutex(SDL_mutex * mutex) function, expected prototype:\nvoid SDL_DestroyMutex(SDL_mutex * mutex)\nClass arguments details:\narg 1 ID = 83803316\n");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	SDL_DestroyMutex(mutex);

	return 0;
}

// SDL_sem * SDL_CreateSemaphore(unsigned int initial_value)
static int _bind_SDL_CreateSemaphore(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateSemaphore(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_sem * SDL_CreateSemaphore(unsigned int initial_value) function, expected prototype:\nSDL_sem * SDL_CreateSemaphore(unsigned int initial_value)\nClass arguments details:\n");
	}

	unsigned int initial_value=(unsigned int)lua_tointeger(L,1);

	SDL_sem * lret = SDL_CreateSemaphore(initial_value);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_sem >::push(L,lret,false);

	return 1;
}

// void SDL_DestroySemaphore(SDL_sem * sem)
static int _bind_SDL_DestroySemaphore(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroySemaphore(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_DestroySemaphore(SDL_sem * sem) function, expected prototype:\nvoid SDL_DestroySemaphore(SDL_sem * sem)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	SDL_DestroySemaphore(sem);

	return 0;
}

// int SDL_SemWait(SDL_sem * sem)
static int _bind_SDL_SemWait(lua_State *L) {
	if (!_lg_typecheck_SDL_SemWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SemWait(SDL_sem * sem) function, expected prototype:\nint SDL_SemWait(SDL_sem * sem)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemWait(sem);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SemTryWait(SDL_sem * sem)
static int _bind_SDL_SemTryWait(lua_State *L) {
	if (!_lg_typecheck_SDL_SemTryWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SemTryWait(SDL_sem * sem) function, expected prototype:\nint SDL_SemTryWait(SDL_sem * sem)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemTryWait(sem);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SemWaitTimeout(SDL_sem * sem, unsigned int ms)
static int _bind_SDL_SemWaitTimeout(lua_State *L) {
	if (!_lg_typecheck_SDL_SemWaitTimeout(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SemWaitTimeout(SDL_sem * sem, unsigned int ms) function, expected prototype:\nint SDL_SemWaitTimeout(SDL_sem * sem, unsigned int ms)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));
	unsigned int ms=(unsigned int)lua_tointeger(L,2);

	int lret = SDL_SemWaitTimeout(sem, ms);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SemPost(SDL_sem * sem)
static int _bind_SDL_SemPost(lua_State *L) {
	if (!_lg_typecheck_SDL_SemPost(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SemPost(SDL_sem * sem) function, expected prototype:\nint SDL_SemPost(SDL_sem * sem)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemPost(sem);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int SDL_SemValue(SDL_sem * sem)
static int _bind_SDL_SemValue(lua_State *L) {
	if (!_lg_typecheck_SDL_SemValue(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_SemValue(SDL_sem * sem) function, expected prototype:\nunsigned int SDL_SemValue(SDL_sem * sem)\nClass arguments details:\narg 1 ID = 82714739\n");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	unsigned int lret = SDL_SemValue(sem);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_cond * SDL_CreateCond()
static int _bind_SDL_CreateCond(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateCond(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_cond * SDL_CreateCond() function, expected prototype:\nSDL_cond * SDL_CreateCond()\nClass arguments details:\n");
	}


	SDL_cond * lret = SDL_CreateCond();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_cond >::push(L,lret,false);

	return 1;
}

// void SDL_DestroyCond(SDL_cond * cond)
static int _bind_SDL_DestroyCond(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroyCond(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_DestroyCond(SDL_cond * cond) function, expected prototype:\nvoid SDL_DestroyCond(SDL_cond * cond)\nClass arguments details:\narg 1 ID = 63689794\n");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	SDL_DestroyCond(cond);

	return 0;
}

// int SDL_CondSignal(SDL_cond * cond)
static int _bind_SDL_CondSignal(lua_State *L) {
	if (!_lg_typecheck_SDL_CondSignal(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CondSignal(SDL_cond * cond) function, expected prototype:\nint SDL_CondSignal(SDL_cond * cond)\nClass arguments details:\narg 1 ID = 63689794\n");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	int lret = SDL_CondSignal(cond);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CondBroadcast(SDL_cond * cond)
static int _bind_SDL_CondBroadcast(lua_State *L) {
	if (!_lg_typecheck_SDL_CondBroadcast(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CondBroadcast(SDL_cond * cond) function, expected prototype:\nint SDL_CondBroadcast(SDL_cond * cond)\nClass arguments details:\narg 1 ID = 63689794\n");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	int lret = SDL_CondBroadcast(cond);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CondWait(SDL_cond * cond, SDL_mutex * mut)
static int _bind_SDL_CondWait(lua_State *L) {
	if (!_lg_typecheck_SDL_CondWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CondWait(SDL_cond * cond, SDL_mutex * mut) function, expected prototype:\nint SDL_CondWait(SDL_cond * cond, SDL_mutex * mut)\nClass arguments details:\narg 1 ID = 63689794\narg 2 ID = 83803316\n");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));
	SDL_mutex* mut=(Luna< SDL_mutex >::check(L,2));

	int lret = SDL_CondWait(cond, mut);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_CondWaitTimeout(SDL_cond * cond, SDL_mutex * mutex, unsigned int ms)
static int _bind_SDL_CondWaitTimeout(lua_State *L) {
	if (!_lg_typecheck_SDL_CondWaitTimeout(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_CondWaitTimeout(SDL_cond * cond, SDL_mutex * mutex, unsigned int ms) function, expected prototype:\nint SDL_CondWaitTimeout(SDL_cond * cond, SDL_mutex * mutex, unsigned int ms)\nClass arguments details:\narg 1 ID = 63689794\narg 2 ID = 83803316\n");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));
	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,2));
	unsigned int ms=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_CondWaitTimeout(cond, mutex, ms);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int SDL_ThreadID()
static int _bind_SDL_ThreadID(lua_State *L) {
	if (!_lg_typecheck_SDL_ThreadID(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_ThreadID() function, expected prototype:\nunsigned int SDL_ThreadID()\nClass arguments details:\n");
	}


	unsigned int lret = SDL_ThreadID();
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int SDL_GetThreadID(SDL_Thread * thread)
static int _bind_SDL_GetThreadID(lua_State *L) {
	if (!_lg_typecheck_SDL_GetThreadID(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_GetThreadID(SDL_Thread * thread) function, expected prototype:\nunsigned int SDL_GetThreadID(SDL_Thread * thread)\nClass arguments details:\narg 1 ID = 70107873\n");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));

	unsigned int lret = SDL_GetThreadID(thread);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_WaitThread(SDL_Thread * thread, int * status)
static int _bind_SDL_WaitThread(lua_State *L) {
	if (!_lg_typecheck_SDL_WaitThread(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_WaitThread(SDL_Thread * thread, int * status) function, expected prototype:\nvoid SDL_WaitThread(SDL_Thread * thread, int * status)\nClass arguments details:\narg 1 ID = 70107873\n");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));
	int status=(int)lua_tointeger(L,2);

	SDL_WaitThread(thread, &status);

	return 0;
}

// void SDL_KillThread(SDL_Thread * thread)
static int _bind_SDL_KillThread(lua_State *L) {
	if (!_lg_typecheck_SDL_KillThread(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_KillThread(SDL_Thread * thread) function, expected prototype:\nvoid SDL_KillThread(SDL_Thread * thread)\nClass arguments details:\narg 1 ID = 70107873\n");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));

	SDL_KillThread(thread);

	return 0;
}

// const SDL_version * SDL_Linked_Version()
static int _bind_SDL_Linked_Version(lua_State *L) {
	if (!_lg_typecheck_SDL_Linked_Version(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const SDL_version * SDL_Linked_Version() function, expected prototype:\nconst SDL_version * SDL_Linked_Version()\nClass arguments details:\n");
	}


	const SDL_version * lret = SDL_Linked_Version();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_version >::push(L,lret,false);

	return 1;
}

// int SDL_VideoInit(const char * driver_name, unsigned int flags)
static int _bind_SDL_VideoInit(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_VideoInit(const char * driver_name, unsigned int flags) function, expected prototype:\nint SDL_VideoInit(const char * driver_name, unsigned int flags)\nClass arguments details:\n");
	}

	const char * driver_name=(const char *)lua_tostring(L,1);
	unsigned int flags=(unsigned int)lua_tointeger(L,2);

	int lret = SDL_VideoInit(driver_name, flags);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_VideoQuit()
static int _bind_SDL_VideoQuit(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoQuit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_VideoQuit() function, expected prototype:\nvoid SDL_VideoQuit()\nClass arguments details:\n");
	}


	SDL_VideoQuit();

	return 0;
}

// void SDL_UpdateRects(SDL_Surface * screen, int numrects, SDL_Rect * rects)
static int _bind_SDL_UpdateRects(lua_State *L) {
	if (!_lg_typecheck_SDL_UpdateRects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UpdateRects(SDL_Surface * screen, int numrects, SDL_Rect * rects) function, expected prototype:\nvoid SDL_UpdateRects(SDL_Surface * screen, int numrects, SDL_Rect * rects)\nClass arguments details:\narg 1 ID = 58049030\narg 3 ID = 63173412\n");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));
	int numrects=(int)lua_tointeger(L,2);
	SDL_Rect* rects=(Luna< SDL_Rect >::check(L,3));

	SDL_UpdateRects(screen, numrects, rects);

	return 0;
}

// void SDL_UpdateRect(SDL_Surface * screen, Sint32 x, Sint32 y, unsigned int w, unsigned int h)
static int _bind_SDL_UpdateRect(lua_State *L) {
	if (!_lg_typecheck_SDL_UpdateRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UpdateRect(SDL_Surface * screen, Sint32 x, Sint32 y, unsigned int w, unsigned int h) function, expected prototype:\nvoid SDL_UpdateRect(SDL_Surface * screen, Sint32 x, Sint32 y, unsigned int w, unsigned int h)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));
	Sint32 x=(Sint32)lua_tointeger(L,2);
	Sint32 y=(Sint32)lua_tointeger(L,3);
	unsigned int w=(unsigned int)lua_tointeger(L,4);
	unsigned int h=(unsigned int)lua_tointeger(L,5);

	SDL_UpdateRect(screen, x, y, w, h);

	return 0;
}

// SDL_Overlay * SDL_CreateYUVOverlay(int width, int height, unsigned int format, SDL_Surface * display)
static int _bind_SDL_CreateYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Overlay * SDL_CreateYUVOverlay(int width, int height, unsigned int format, SDL_Surface * display) function, expected prototype:\nSDL_Overlay * SDL_CreateYUVOverlay(int width, int height, unsigned int format, SDL_Surface * display)\nClass arguments details:\narg 4 ID = 58049030\n");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);
	unsigned int format=(unsigned int)lua_tointeger(L,3);
	SDL_Surface* display=(Luna< SDL_Surface >::check(L,4));

	SDL_Overlay * lret = SDL_CreateYUVOverlay(width, height, format, display);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Overlay >::push(L,lret,false);

	return 1;
}

// int SDL_LockYUVOverlay(SDL_Overlay * overlay)
static int _bind_SDL_LockYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_LockYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_LockYUVOverlay(SDL_Overlay * overlay) function, expected prototype:\nint SDL_LockYUVOverlay(SDL_Overlay * overlay)\nClass arguments details:\narg 1 ID = 25026059\n");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	int lret = SDL_LockYUVOverlay(overlay);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_UnlockYUVOverlay(SDL_Overlay * overlay)
static int _bind_SDL_UnlockYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UnlockYUVOverlay(SDL_Overlay * overlay) function, expected prototype:\nvoid SDL_UnlockYUVOverlay(SDL_Overlay * overlay)\nClass arguments details:\narg 1 ID = 25026059\n");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	SDL_UnlockYUVOverlay(overlay);

	return 0;
}

// int SDL_DisplayYUVOverlay(SDL_Overlay * overlay, SDL_Rect * dstrect)
static int _bind_SDL_DisplayYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_DisplayYUVOverlay(SDL_Overlay * overlay, SDL_Rect * dstrect) function, expected prototype:\nint SDL_DisplayYUVOverlay(SDL_Overlay * overlay, SDL_Rect * dstrect)\nClass arguments details:\narg 1 ID = 25026059\narg 2 ID = 63173412\n");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,2));

	int lret = SDL_DisplayYUVOverlay(overlay, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_FreeYUVOverlay(SDL_Overlay * overlay)
static int _bind_SDL_FreeYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_FreeYUVOverlay(SDL_Overlay * overlay) function, expected prototype:\nvoid SDL_FreeYUVOverlay(SDL_Overlay * overlay)\nClass arguments details:\narg 1 ID = 25026059\n");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	SDL_FreeYUVOverlay(overlay);

	return 0;
}

// int SDL_GL_LoadLibrary(const char * path)
static int _bind_SDL_GL_LoadLibrary(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_LoadLibrary(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_GL_LoadLibrary(const char * path) function, expected prototype:\nint SDL_GL_LoadLibrary(const char * path)\nClass arguments details:\n");
	}

	const char * path=(const char *)lua_tostring(L,1);

	int lret = SDL_GL_LoadLibrary(path);
	lua_pushnumber(L,lret);

	return 1;
}

// void * SDL_GL_GetProcAddress(const char * proc)
static int _bind_SDL_GL_GetProcAddress(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_GetProcAddress(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void * SDL_GL_GetProcAddress(const char * proc) function, expected prototype:\nvoid * SDL_GL_GetProcAddress(const char * proc)\nClass arguments details:\n");
	}

	const char * proc=(const char *)lua_tostring(L,1);

	void * lret = SDL_GL_GetProcAddress(proc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

// int SDL_GL_SetAttribute(SDL_GLattr attr, int value)
static int _bind_SDL_GL_SetAttribute(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_SetAttribute(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_GL_SetAttribute(SDL_GLattr attr, int value) function, expected prototype:\nint SDL_GL_SetAttribute(SDL_GLattr attr, int value)\nClass arguments details:\n");
	}

	SDL_GLattr attr=(SDL_GLattr)lua_tointeger(L,1);
	int value=(int)lua_tointeger(L,2);

	int lret = SDL_GL_SetAttribute(attr, value);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_GL_GetAttribute(SDL_GLattr attr, int * value)
static int _bind_SDL_GL_GetAttribute(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_GetAttribute(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_GL_GetAttribute(SDL_GLattr attr, int * value) function, expected prototype:\nint SDL_GL_GetAttribute(SDL_GLattr attr, int * value)\nClass arguments details:\n");
	}

	SDL_GLattr attr=(SDL_GLattr)lua_tointeger(L,1);
	int value=(int)lua_tointeger(L,2);

	int lret = SDL_GL_GetAttribute(attr, &value);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_GL_SwapBuffers()
static int _bind_SDL_GL_SwapBuffers(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_SwapBuffers(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GL_SwapBuffers() function, expected prototype:\nvoid SDL_GL_SwapBuffers()\nClass arguments details:\n");
	}


	SDL_GL_SwapBuffers();

	return 0;
}

// void SDL_GL_UpdateRects(int numrects, SDL_Rect * rects)
static int _bind_SDL_GL_UpdateRects(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_UpdateRects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GL_UpdateRects(int numrects, SDL_Rect * rects) function, expected prototype:\nvoid SDL_GL_UpdateRects(int numrects, SDL_Rect * rects)\nClass arguments details:\narg 2 ID = 63173412\n");
	}

	int numrects=(int)lua_tointeger(L,1);
	SDL_Rect* rects=(Luna< SDL_Rect >::check(L,2));

	SDL_GL_UpdateRects(numrects, rects);

	return 0;
}

// void SDL_GL_Lock()
static int _bind_SDL_GL_Lock(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_Lock(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GL_Lock() function, expected prototype:\nvoid SDL_GL_Lock()\nClass arguments details:\n");
	}


	SDL_GL_Lock();

	return 0;
}

// void SDL_GL_Unlock()
static int _bind_SDL_GL_Unlock(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_Unlock(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GL_Unlock() function, expected prototype:\nvoid SDL_GL_Unlock()\nClass arguments details:\n");
	}


	SDL_GL_Unlock();

	return 0;
}

// void SDL_WM_SetCaption(const char * title, const char * icon)
static int _bind_SDL_WM_SetCaption(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_SetCaption(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_WM_SetCaption(const char * title, const char * icon) function, expected prototype:\nvoid SDL_WM_SetCaption(const char * title, const char * icon)\nClass arguments details:\n");
	}

	const char * title=(const char *)lua_tostring(L,1);
	const char * icon=(const char *)lua_tostring(L,2);

	SDL_WM_SetCaption(title, icon);

	return 0;
}

// void SDL_WM_SetIcon(SDL_Surface * icon, unsigned char * mask)
static int _bind_SDL_WM_SetIcon(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_SetIcon(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_WM_SetIcon(SDL_Surface * icon, unsigned char * mask) function, expected prototype:\nvoid SDL_WM_SetIcon(SDL_Surface * icon, unsigned char * mask)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* icon=(Luna< SDL_Surface >::check(L,1));
	unsigned char mask = (unsigned char)(lua_tointeger(L,2));

	SDL_WM_SetIcon(icon, &mask);

	return 0;
}

// int SDL_WM_IconifyWindow()
static int _bind_SDL_WM_IconifyWindow(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_IconifyWindow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_WM_IconifyWindow() function, expected prototype:\nint SDL_WM_IconifyWindow()\nClass arguments details:\n");
	}


	int lret = SDL_WM_IconifyWindow();
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_WM_ToggleFullScreen(SDL_Surface * surface)
static int _bind_SDL_WM_ToggleFullScreen(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_ToggleFullScreen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_WM_ToggleFullScreen(SDL_Surface * surface) function, expected prototype:\nint SDL_WM_ToggleFullScreen(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_WM_ToggleFullScreen(surface);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode)
static int _bind_SDL_WM_GrabInput(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_GrabInput(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode) function, expected prototype:\nSDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode)\nClass arguments details:\n");
	}

	SDL_GrabMode mode=(SDL_GrabMode)lua_tointeger(L,1);

	SDL_GrabMode lret = SDL_WM_GrabInput(mode);
	lua_pushnumber(L,lret);

	return 1;
}

// char * SDL_VideoDriverName(char * namebuf, int maxlen)
static int _bind_SDL_VideoDriverName(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoDriverName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in char * SDL_VideoDriverName(char * namebuf, int maxlen) function, expected prototype:\nchar * SDL_VideoDriverName(char * namebuf, int maxlen)\nClass arguments details:\n");
	}

	char namebuf=(char)lua_tointeger(L,1);
	int maxlen=(int)lua_tointeger(L,2);

	char * lret = SDL_VideoDriverName(&namebuf, maxlen);
	lua_pushnumber(L,*lret);

	return 1;
}

// SDL_Surface * SDL_GetVideoSurface()
static int _bind_SDL_GetVideoSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_GetVideoSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_GetVideoSurface() function, expected prototype:\nSDL_Surface * SDL_GetVideoSurface()\nClass arguments details:\n");
	}


	SDL_Surface * lret = SDL_GetVideoSurface();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// const SDL_VideoInfo * SDL_GetVideoInfo()
static int _bind_SDL_GetVideoInfo(lua_State *L) {
	if (!_lg_typecheck_SDL_GetVideoInfo(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const SDL_VideoInfo * SDL_GetVideoInfo() function, expected prototype:\nconst SDL_VideoInfo * SDL_GetVideoInfo()\nClass arguments details:\n");
	}


	const SDL_VideoInfo * lret = SDL_GetVideoInfo();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_VideoInfo >::push(L,lret,false);

	return 1;
}

// int SDL_VideoModeOK(int width, int height, int bpp, unsigned int flags)
static int _bind_SDL_VideoModeOK(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoModeOK(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_VideoModeOK(int width, int height, int bpp, unsigned int flags) function, expected prototype:\nint SDL_VideoModeOK(int width, int height, int bpp, unsigned int flags)\nClass arguments details:\n");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);
	int bpp=(int)lua_tointeger(L,3);
	unsigned int flags=(unsigned int)lua_tointeger(L,4);

	int lret = SDL_VideoModeOK(width, height, bpp, flags);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_Surface * SDL_SetVideoMode(int width, int height, int bpp, unsigned int flags)
static int _bind_SDL_SetVideoMode(lua_State *L) {
	if (!_lg_typecheck_SDL_SetVideoMode(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_SetVideoMode(int width, int height, int bpp, unsigned int flags) function, expected prototype:\nSDL_Surface * SDL_SetVideoMode(int width, int height, int bpp, unsigned int flags)\nClass arguments details:\n");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);
	int bpp=(int)lua_tointeger(L,3);
	unsigned int flags=(unsigned int)lua_tointeger(L,4);

	SDL_Surface * lret = SDL_SetVideoMode(width, height, bpp, flags);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// int SDL_Flip(SDL_Surface * screen)
static int _bind_SDL_Flip(lua_State *L) {
	if (!_lg_typecheck_SDL_Flip(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_Flip(SDL_Surface * screen) function, expected prototype:\nint SDL_Flip(SDL_Surface * screen)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_Flip(screen);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetGamma(float red, float green, float blue)
static int _bind_SDL_SetGamma(lua_State *L) {
	if (!_lg_typecheck_SDL_SetGamma(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetGamma(float red, float green, float blue) function, expected prototype:\nint SDL_SetGamma(float red, float green, float blue)\nClass arguments details:\n");
	}

	float red=(float)lua_tonumber(L,1);
	float green=(float)lua_tonumber(L,2);
	float blue=(float)lua_tonumber(L,3);

	int lret = SDL_SetGamma(red, green, blue);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetGammaRamp(const Uint16 * red, const Uint16 * green, const Uint16 * blue)
static int _bind_SDL_SetGammaRamp(lua_State *L) {
	if (!_lg_typecheck_SDL_SetGammaRamp(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetGammaRamp(const Uint16 * red, const Uint16 * green, const Uint16 * blue) function, expected prototype:\nint SDL_SetGammaRamp(const Uint16 * red, const Uint16 * green, const Uint16 * blue)\nClass arguments details:\n");
	}

	Uint16 red=(Uint16)lua_tointeger(L,1);
	Uint16 green=(Uint16)lua_tointeger(L,2);
	Uint16 blue=(Uint16)lua_tointeger(L,3);

	int lret = SDL_SetGammaRamp(&red, &green, &blue);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_GetGammaRamp(Uint16 * red, Uint16 * green, Uint16 * blue)
static int _bind_SDL_GetGammaRamp(lua_State *L) {
	if (!_lg_typecheck_SDL_GetGammaRamp(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_GetGammaRamp(Uint16 * red, Uint16 * green, Uint16 * blue) function, expected prototype:\nint SDL_GetGammaRamp(Uint16 * red, Uint16 * green, Uint16 * blue)\nClass arguments details:\n");
	}

	Uint16 red=(Uint16)lua_tointeger(L,1);
	Uint16 green=(Uint16)lua_tointeger(L,2);
	Uint16 blue=(Uint16)lua_tointeger(L,3);

	int lret = SDL_GetGammaRamp(&red, &green, &blue);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetColors(SDL_Surface * surface, SDL_Color * colors, int firstcolor, int ncolors)
static int _bind_SDL_SetColors(lua_State *L) {
	if (!_lg_typecheck_SDL_SetColors(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetColors(SDL_Surface * surface, SDL_Color * colors, int firstcolor, int ncolors) function, expected prototype:\nint SDL_SetColors(SDL_Surface * surface, SDL_Color * colors, int firstcolor, int ncolors)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 44829304\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	SDL_Color* colors=(Luna< SDL_Color >::check(L,2));
	int firstcolor=(int)lua_tointeger(L,3);
	int ncolors=(int)lua_tointeger(L,4);

	int lret = SDL_SetColors(surface, colors, firstcolor, ncolors);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetPalette(SDL_Surface * surface, int flags, SDL_Color * colors, int firstcolor, int ncolors)
static int _bind_SDL_SetPalette(lua_State *L) {
	if (!_lg_typecheck_SDL_SetPalette(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetPalette(SDL_Surface * surface, int flags, SDL_Color * colors, int firstcolor, int ncolors) function, expected prototype:\nint SDL_SetPalette(SDL_Surface * surface, int flags, SDL_Color * colors, int firstcolor, int ncolors)\nClass arguments details:\narg 1 ID = 58049030\narg 3 ID = 44829304\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	int flags=(int)lua_tointeger(L,2);
	SDL_Color* colors=(Luna< SDL_Color >::check(L,3));
	int firstcolor=(int)lua_tointeger(L,4);
	int ncolors=(int)lua_tointeger(L,5);

	int lret = SDL_SetPalette(surface, flags, colors, firstcolor, ncolors);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int SDL_MapRGB(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b)
static int _bind_SDL_MapRGB(lua_State *L) {
	if (!_lg_typecheck_SDL_MapRGB(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_MapRGB(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b) function, expected prototype:\nunsigned int SDL_MapRGB(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b)\nClass arguments details:\narg 1 ID = 19743188\n");
	}

	const SDL_PixelFormat* format=(Luna< SDL_PixelFormat >::check(L,1));
	unsigned char r = (unsigned char)(lua_tointeger(L,2));
	unsigned char g = (unsigned char)(lua_tointeger(L,3));
	unsigned char b = (unsigned char)(lua_tointeger(L,4));

	unsigned int lret = SDL_MapRGB(format, r, g, b);
	lua_pushnumber(L,lret);

	return 1;
}

// unsigned int SDL_MapRGBA(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b, const unsigned char a)
static int _bind_SDL_MapRGBA(lua_State *L) {
	if (!_lg_typecheck_SDL_MapRGBA(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in unsigned int SDL_MapRGBA(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b, const unsigned char a) function, expected prototype:\nunsigned int SDL_MapRGBA(const SDL_PixelFormat *const format, const unsigned char r, const unsigned char g, const unsigned char b, const unsigned char a)\nClass arguments details:\narg 1 ID = 19743188\n");
	}

	const SDL_PixelFormat* format=(Luna< SDL_PixelFormat >::check(L,1));
	unsigned char r = (unsigned char)(lua_tointeger(L,2));
	unsigned char g = (unsigned char)(lua_tointeger(L,3));
	unsigned char b = (unsigned char)(lua_tointeger(L,4));
	unsigned char a = (unsigned char)(lua_tointeger(L,5));

	unsigned int lret = SDL_MapRGBA(format, r, g, b, a);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_GetRGB(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b)
static int _bind_SDL_GetRGB(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRGB(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GetRGB(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b) function, expected prototype:\nvoid SDL_GetRGB(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b)\nClass arguments details:\narg 2 ID = 19743188\n");
	}

	unsigned int pixel=(unsigned int)lua_tointeger(L,1);
	const SDL_PixelFormat* fmt=(Luna< SDL_PixelFormat >::check(L,2));
	unsigned char r = (unsigned char)(lua_tointeger(L,3));
	unsigned char g = (unsigned char)(lua_tointeger(L,4));
	unsigned char b = (unsigned char)(lua_tointeger(L,5));

	SDL_GetRGB(pixel, fmt, &r, &g, &b);

	return 0;
}

// void SDL_GetRGBA(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char * a)
static int _bind_SDL_GetRGBA(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRGBA(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GetRGBA(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char * a) function, expected prototype:\nvoid SDL_GetRGBA(unsigned int pixel, const SDL_PixelFormat *const fmt, unsigned char * r, unsigned char * g, unsigned char * b, unsigned char * a)\nClass arguments details:\narg 2 ID = 19743188\n");
	}

	unsigned int pixel=(unsigned int)lua_tointeger(L,1);
	const SDL_PixelFormat* fmt=(Luna< SDL_PixelFormat >::check(L,2));
	unsigned char r = (unsigned char)(lua_tointeger(L,3));
	unsigned char g = (unsigned char)(lua_tointeger(L,4));
	unsigned char b = (unsigned char)(lua_tointeger(L,5));
	unsigned char a = (unsigned char)(lua_tointeger(L,6));

	SDL_GetRGBA(pixel, fmt, &r, &g, &b, &a);

	return 0;
}

// SDL_Surface * SDL_CreateRGBSurface(unsigned int flags, int width, int height, int depth, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask)
static int _bind_SDL_CreateRGBSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateRGBSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_CreateRGBSurface(unsigned int flags, int width, int height, int depth, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask) function, expected prototype:\nSDL_Surface * SDL_CreateRGBSurface(unsigned int flags, int width, int height, int depth, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask)\nClass arguments details:\n");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);
	int width=(int)lua_tointeger(L,2);
	int height=(int)lua_tointeger(L,3);
	int depth=(int)lua_tointeger(L,4);
	unsigned int Rmask=(unsigned int)lua_tointeger(L,5);
	unsigned int Gmask=(unsigned int)lua_tointeger(L,6);
	unsigned int Bmask=(unsigned int)lua_tointeger(L,7);
	unsigned int Amask=(unsigned int)lua_tointeger(L,8);

	SDL_Surface * lret = SDL_CreateRGBSurface(flags, width, height, depth, Rmask, Gmask, Bmask, Amask);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// SDL_Surface * SDL_CreateRGBSurfaceFrom(void * pixels, int width, int height, int depth, int pitch, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask)
static int _bind_SDL_CreateRGBSurfaceFrom(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateRGBSurfaceFrom(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_CreateRGBSurfaceFrom(void * pixels, int width, int height, int depth, int pitch, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask) function, expected prototype:\nSDL_Surface * SDL_CreateRGBSurfaceFrom(void * pixels, int width, int height, int depth, int pitch, unsigned int Rmask, unsigned int Gmask, unsigned int Bmask, unsigned int Amask)\nClass arguments details:\n");
	}

	void* pixels=(Luna< void >::check(L,1));
	int width=(int)lua_tointeger(L,2);
	int height=(int)lua_tointeger(L,3);
	int depth=(int)lua_tointeger(L,4);
	int pitch=(int)lua_tointeger(L,5);
	unsigned int Rmask=(unsigned int)lua_tointeger(L,6);
	unsigned int Gmask=(unsigned int)lua_tointeger(L,7);
	unsigned int Bmask=(unsigned int)lua_tointeger(L,8);
	unsigned int Amask=(unsigned int)lua_tointeger(L,9);

	SDL_Surface * lret = SDL_CreateRGBSurfaceFrom(pixels, width, height, depth, pitch, Rmask, Gmask, Bmask, Amask);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// void SDL_FreeSurface(SDL_Surface * surface)
static int _bind_SDL_FreeSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_FreeSurface(SDL_Surface * surface) function, expected prototype:\nvoid SDL_FreeSurface(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_FreeSurface(surface);

	return 0;
}

// int SDL_LockSurface(SDL_Surface * surface)
static int _bind_SDL_LockSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_LockSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_LockSurface(SDL_Surface * surface) function, expected prototype:\nint SDL_LockSurface(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_LockSurface(surface);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_UnlockSurface(SDL_Surface * surface)
static int _bind_SDL_UnlockSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_UnlockSurface(SDL_Surface * surface) function, expected prototype:\nvoid SDL_UnlockSurface(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_UnlockSurface(surface);

	return 0;
}

// int SDL_SetColorKey(SDL_Surface * surface, unsigned int flag, unsigned int key)
static int _bind_SDL_SetColorKey(lua_State *L) {
	if (!_lg_typecheck_SDL_SetColorKey(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetColorKey(SDL_Surface * surface, unsigned int flag, unsigned int key) function, expected prototype:\nint SDL_SetColorKey(SDL_Surface * surface, unsigned int flag, unsigned int key)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	unsigned int flag=(unsigned int)lua_tointeger(L,2);
	unsigned int key=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_SetColorKey(surface, flag, key);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetAlpha(SDL_Surface * surface, unsigned int flag, unsigned char alpha)
static int _bind_SDL_SetAlpha(lua_State *L) {
	if (!_lg_typecheck_SDL_SetAlpha(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetAlpha(SDL_Surface * surface, unsigned int flag, unsigned char alpha) function, expected prototype:\nint SDL_SetAlpha(SDL_Surface * surface, unsigned int flag, unsigned char alpha)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	unsigned int flag=(unsigned int)lua_tointeger(L,2);
	unsigned char alpha = (unsigned char)(lua_tointeger(L,3));

	int lret = SDL_SetAlpha(surface, flag, alpha);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_SetClipRect(SDL_Surface * surface, const SDL_Rect * rect)
static int _bind_SDL_SetClipRect(lua_State *L) {
	if (!_lg_typecheck_SDL_SetClipRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SetClipRect(SDL_Surface * surface, const SDL_Rect * rect) function, expected prototype:\nint SDL_SetClipRect(SDL_Surface * surface, const SDL_Rect * rect)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	const SDL_Rect* rect=(Luna< SDL_Rect >::check(L,2));

	int lret = SDL_SetClipRect(surface, rect);
	lua_pushnumber(L,lret);

	return 1;
}

// void SDL_GetClipRect(SDL_Surface * surface, SDL_Rect * rect)
static int _bind_SDL_GetClipRect(lua_State *L) {
	if (!_lg_typecheck_SDL_GetClipRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in void SDL_GetClipRect(SDL_Surface * surface, SDL_Rect * rect) function, expected prototype:\nvoid SDL_GetClipRect(SDL_Surface * surface, SDL_Rect * rect)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* rect=(Luna< SDL_Rect >::check(L,2));

	SDL_GetClipRect(surface, rect);

	return 0;
}

// SDL_Surface * SDL_ConvertSurface(SDL_Surface * src, SDL_PixelFormat * fmt, unsigned int flags)
static int _bind_SDL_ConvertSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_ConvertSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_ConvertSurface(SDL_Surface * src, SDL_PixelFormat * fmt, unsigned int flags) function, expected prototype:\nSDL_Surface * SDL_ConvertSurface(SDL_Surface * src, SDL_PixelFormat * fmt, unsigned int flags)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 19743188\n");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_PixelFormat* fmt=(Luna< SDL_PixelFormat >::check(L,2));
	unsigned int flags=(unsigned int)lua_tointeger(L,3);

	SDL_Surface * lret = SDL_ConvertSurface(src, fmt, flags);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// int SDL_UpperBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
static int _bind_SDL_UpperBlit(lua_State *L) {
	if (!_lg_typecheck_SDL_UpperBlit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_UpperBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) function, expected prototype:\nint SDL_UpperBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\narg 3 ID = 58049030\narg 4 ID = 63173412\n");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* srcrect=(Luna< SDL_Rect >::check(L,2));
	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,3));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,4));

	int lret = SDL_UpperBlit(src, srcrect, dst, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_LowerBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
static int _bind_SDL_LowerBlit(lua_State *L) {
	if (!_lg_typecheck_SDL_LowerBlit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_LowerBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) function, expected prototype:\nint SDL_LowerBlit(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\narg 3 ID = 58049030\narg 4 ID = 63173412\n");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* srcrect=(Luna< SDL_Rect >::check(L,2));
	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,3));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,4));

	int lret = SDL_LowerBlit(src, srcrect, dst, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

// int SDL_FillRect(SDL_Surface * dst, SDL_Rect * dstrect, unsigned int color)
static int _bind_SDL_FillRect(lua_State *L) {
	if (!_lg_typecheck_SDL_FillRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_FillRect(SDL_Surface * dst, SDL_Rect * dstrect, unsigned int color) function, expected prototype:\nint SDL_FillRect(SDL_Surface * dst, SDL_Rect * dstrect, unsigned int color)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\n");
	}

	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,2));
	unsigned int color=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_FillRect(dst, dstrect, color);
	lua_pushnumber(L,lret);

	return 1;
}

// SDL_Surface * SDL_DisplayFormat(SDL_Surface * surface)
static int _bind_SDL_DisplayFormat(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayFormat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_DisplayFormat(SDL_Surface * surface) function, expected prototype:\nSDL_Surface * SDL_DisplayFormat(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_Surface * lret = SDL_DisplayFormat(surface);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// SDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface * surface)
static int _bind_SDL_DisplayFormatAlpha(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayFormatAlpha(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface * surface) function, expected prototype:\nSDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface * surface)\nClass arguments details:\narg 1 ID = 58049030\n");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_Surface * lret = SDL_DisplayFormatAlpha(surface);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

// int SDL_SoftStretch(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)
static int _bind_SDL_SoftStretch(lua_State *L) {
	if (!_lg_typecheck_SDL_SoftStretch(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int SDL_SoftStretch(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) function, expected prototype:\nint SDL_SoftStretch(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect)\nClass arguments details:\narg 1 ID = 58049030\narg 2 ID = 63173412\narg 3 ID = 58049030\narg 4 ID = 63173412\n");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* srcrect=(Luna< SDL_Rect >::check(L,2));
	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,3));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,4));

	int lret = SDL_SoftStretch(src, srcrect, dst, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_SDL_Init); lua_setfield(L,-2,"SDL_Init");
	lua_pushcfunction(L, _bind_SDL_InitSubSystem); lua_setfield(L,-2,"SDL_InitSubSystem");
	lua_pushcfunction(L, _bind_SDL_QuitSubSystem); lua_setfield(L,-2,"SDL_QuitSubSystem");
	lua_pushcfunction(L, _bind_SDL_WasInit); lua_setfield(L,-2,"SDL_WasInit");
	lua_pushcfunction(L, _bind_SDL_Quit); lua_setfield(L,-2,"SDL_Quit");
	lua_pushcfunction(L, _bind_SDL_GetAppState); lua_setfield(L,-2,"SDL_GetAppState");
	lua_pushcfunction(L, _bind_SDL_AudioInit); lua_setfield(L,-2,"SDL_AudioInit");
	lua_pushcfunction(L, _bind_SDL_AudioQuit); lua_setfield(L,-2,"SDL_AudioQuit");
	lua_pushcfunction(L, _bind_SDL_LockAudio); lua_setfield(L,-2,"SDL_LockAudio");
	lua_pushcfunction(L, _bind_SDL_UnlockAudio); lua_setfield(L,-2,"SDL_UnlockAudio");
	lua_pushcfunction(L, _bind_SDL_AudioDriverName); lua_setfield(L,-2,"SDL_AudioDriverName");
	lua_pushcfunction(L, _bind_SDL_OpenAudio); lua_setfield(L,-2,"SDL_OpenAudio");
	lua_pushcfunction(L, _bind_SDL_GetAudioStatus); lua_setfield(L,-2,"SDL_GetAudioStatus");
	lua_pushcfunction(L, _bind_SDL_PauseAudio); lua_setfield(L,-2,"SDL_PauseAudio");
	lua_pushcfunction(L, _bind_SDL_FreeWAV); lua_setfield(L,-2,"SDL_FreeWAV");
	lua_pushcfunction(L, _bind_SDL_BuildAudioCVT); lua_setfield(L,-2,"SDL_BuildAudioCVT");
	lua_pushcfunction(L, _bind_SDL_ConvertAudio); lua_setfield(L,-2,"SDL_ConvertAudio");
	lua_pushcfunction(L, _bind_SDL_MixAudio); lua_setfield(L,-2,"SDL_MixAudio");
	lua_pushcfunction(L, _bind_SDL_CloseAudio); lua_setfield(L,-2,"SDL_CloseAudio");
	lua_pushcfunction(L, _bind_SDL_CDNumDrives); lua_setfield(L,-2,"SDL_CDNumDrives");
	lua_pushcfunction(L, _bind_SDL_CDName); lua_setfield(L,-2,"SDL_CDName");
	lua_pushcfunction(L, _bind_SDL_CDOpen); lua_setfield(L,-2,"SDL_CDOpen");
	lua_pushcfunction(L, _bind_SDL_CDStatus); lua_setfield(L,-2,"SDL_CDStatus");
	lua_pushcfunction(L, _bind_SDL_CDPlayTracks); lua_setfield(L,-2,"SDL_CDPlayTracks");
	lua_pushcfunction(L, _bind_SDL_CDPlay); lua_setfield(L,-2,"SDL_CDPlay");
	lua_pushcfunction(L, _bind_SDL_CDPause); lua_setfield(L,-2,"SDL_CDPause");
	lua_pushcfunction(L, _bind_SDL_CDResume); lua_setfield(L,-2,"SDL_CDResume");
	lua_pushcfunction(L, _bind_SDL_CDStop); lua_setfield(L,-2,"SDL_CDStop");
	lua_pushcfunction(L, _bind_SDL_CDEject); lua_setfield(L,-2,"SDL_CDEject");
	lua_pushcfunction(L, _bind_SDL_CDClose); lua_setfield(L,-2,"SDL_CDClose");
	lua_pushcfunction(L, _bind_SDL_HasRDTSC); lua_setfield(L,-2,"SDL_HasRDTSC");
	lua_pushcfunction(L, _bind_SDL_HasMMX); lua_setfield(L,-2,"SDL_HasMMX");
	lua_pushcfunction(L, _bind_SDL_HasMMXExt); lua_setfield(L,-2,"SDL_HasMMXExt");
	lua_pushcfunction(L, _bind_SDL_Has3DNow); lua_setfield(L,-2,"SDL_Has3DNow");
	lua_pushcfunction(L, _bind_SDL_Has3DNowExt); lua_setfield(L,-2,"SDL_Has3DNowExt");
	lua_pushcfunction(L, _bind_SDL_HasSSE); lua_setfield(L,-2,"SDL_HasSSE");
	lua_pushcfunction(L, _bind_SDL_HasSSE2); lua_setfield(L,-2,"SDL_HasSSE2");
	lua_pushcfunction(L, _bind_SDL_HasAltiVec); lua_setfield(L,-2,"SDL_HasAltiVec");
	lua_pushcfunction(L, _bind_SDL_Swap16); lua_setfield(L,-2,"SDL_Swap16");
	lua_pushcfunction(L, _bind_SDL_Swap32); lua_setfield(L,-2,"SDL_Swap32");
	lua_pushcfunction(L, _bind_SDL_GetError); lua_setfield(L,-2,"SDL_GetError");
	lua_pushcfunction(L, _bind_SDL_ClearError); lua_setfield(L,-2,"SDL_ClearError");
	lua_pushcfunction(L, _bind_SDL_Error); lua_setfield(L,-2,"SDL_Error");
	lua_pushcfunction(L, _bind_SDL_SetEventFilter); lua_setfield(L,-2,"SDL_SetEventFilter");
	lua_pushcfunction(L, _bind_SDL_GetEventFilter); lua_setfield(L,-2,"SDL_GetEventFilter");
	lua_pushcfunction(L, _bind_SDL_PumpEvents); lua_setfield(L,-2,"SDL_PumpEvents");
	lua_pushcfunction(L, _bind_SDL_PeepEvents); lua_setfield(L,-2,"SDL_PeepEvents");
	lua_pushcfunction(L, _bind_SDL_PollEvent); lua_setfield(L,-2,"SDL_PollEvent");
	lua_pushcfunction(L, _bind_SDL_WaitEvent); lua_setfield(L,-2,"SDL_WaitEvent");
	lua_pushcfunction(L, _bind_SDL_PushEvent); lua_setfield(L,-2,"SDL_PushEvent");
	lua_pushcfunction(L, _bind_SDL_EventState); lua_setfield(L,-2,"SDL_EventState");
	lua_pushcfunction(L, _bind_SDL_NumJoysticks); lua_setfield(L,-2,"SDL_NumJoysticks");
	lua_pushcfunction(L, _bind_SDL_JoystickName); lua_setfield(L,-2,"SDL_JoystickName");
	lua_pushcfunction(L, _bind_SDL_JoystickOpen); lua_setfield(L,-2,"SDL_JoystickOpen");
	lua_pushcfunction(L, _bind_SDL_JoystickOpened); lua_setfield(L,-2,"SDL_JoystickOpened");
	lua_pushcfunction(L, _bind_SDL_JoystickIndex); lua_setfield(L,-2,"SDL_JoystickIndex");
	lua_pushcfunction(L, _bind_SDL_JoystickNumAxes); lua_setfield(L,-2,"SDL_JoystickNumAxes");
	lua_pushcfunction(L, _bind_SDL_JoystickNumBalls); lua_setfield(L,-2,"SDL_JoystickNumBalls");
	lua_pushcfunction(L, _bind_SDL_JoystickNumHats); lua_setfield(L,-2,"SDL_JoystickNumHats");
	lua_pushcfunction(L, _bind_SDL_JoystickNumButtons); lua_setfield(L,-2,"SDL_JoystickNumButtons");
	lua_pushcfunction(L, _bind_SDL_JoystickUpdate); lua_setfield(L,-2,"SDL_JoystickUpdate");
	lua_pushcfunction(L, _bind_SDL_JoystickEventState); lua_setfield(L,-2,"SDL_JoystickEventState");
	lua_pushcfunction(L, _bind_SDL_JoystickGetAxis); lua_setfield(L,-2,"SDL_JoystickGetAxis");
	lua_pushcfunction(L, _bind_SDL_JoystickGetHat); lua_setfield(L,-2,"SDL_JoystickGetHat");
	lua_pushcfunction(L, _bind_SDL_JoystickGetBall); lua_setfield(L,-2,"SDL_JoystickGetBall");
	lua_pushcfunction(L, _bind_SDL_JoystickGetButton); lua_setfield(L,-2,"SDL_JoystickGetButton");
	lua_pushcfunction(L, _bind_SDL_JoystickClose); lua_setfield(L,-2,"SDL_JoystickClose");
	lua_pushcfunction(L, _bind_SDL_EnableUNICODE); lua_setfield(L,-2,"SDL_EnableUNICODE");
	lua_pushcfunction(L, _bind_SDL_EnableKeyRepeat); lua_setfield(L,-2,"SDL_EnableKeyRepeat");
	lua_pushcfunction(L, _bind_SDL_GetKeyRepeat); lua_setfield(L,-2,"SDL_GetKeyRepeat");
	lua_pushcfunction(L, _bind_SDL_GetKeyState); lua_setfield(L,-2,"SDL_GetKeyState");
	lua_pushcfunction(L, _bind_SDL_GetModState); lua_setfield(L,-2,"SDL_GetModState");
	lua_pushcfunction(L, _bind_SDL_SetModState); lua_setfield(L,-2,"SDL_SetModState");
	lua_pushcfunction(L, _bind_SDL_GetKeyName); lua_setfield(L,-2,"SDL_GetKeyName");
	lua_pushcfunction(L, _bind_SDL_LoadObject); lua_setfield(L,-2,"SDL_LoadObject");
	lua_pushcfunction(L, _bind_SDL_LoadFunction); lua_setfield(L,-2,"SDL_LoadFunction");
	lua_pushcfunction(L, _bind_SDL_UnloadObject); lua_setfield(L,-2,"SDL_UnloadObject");
	lua_pushcfunction(L, _bind_SDL_GetMouseState); lua_setfield(L,-2,"SDL_GetMouseState");
	lua_pushcfunction(L, _bind_SDL_GetRelativeMouseState); lua_setfield(L,-2,"SDL_GetRelativeMouseState");
	lua_pushcfunction(L, _bind_SDL_WarpMouse); lua_setfield(L,-2,"SDL_WarpMouse");
	lua_pushcfunction(L, _bind_SDL_CreateCursor); lua_setfield(L,-2,"SDL_CreateCursor");
	lua_pushcfunction(L, _bind_SDL_SetCursor); lua_setfield(L,-2,"SDL_SetCursor");
	lua_pushcfunction(L, _bind_SDL_GetCursor); lua_setfield(L,-2,"SDL_GetCursor");
	lua_pushcfunction(L, _bind_SDL_FreeCursor); lua_setfield(L,-2,"SDL_FreeCursor");
	lua_pushcfunction(L, _bind_SDL_ShowCursor); lua_setfield(L,-2,"SDL_ShowCursor");
	lua_pushcfunction(L, _bind_SDL_CreateMutex); lua_setfield(L,-2,"SDL_CreateMutex");
	lua_pushcfunction(L, _bind_SDL_mutexP); lua_setfield(L,-2,"SDL_mutexP");
	lua_pushcfunction(L, _bind_SDL_mutexV); lua_setfield(L,-2,"SDL_mutexV");
	lua_pushcfunction(L, _bind_SDL_DestroyMutex); lua_setfield(L,-2,"SDL_DestroyMutex");
	lua_pushcfunction(L, _bind_SDL_CreateSemaphore); lua_setfield(L,-2,"SDL_CreateSemaphore");
	lua_pushcfunction(L, _bind_SDL_DestroySemaphore); lua_setfield(L,-2,"SDL_DestroySemaphore");
	lua_pushcfunction(L, _bind_SDL_SemWait); lua_setfield(L,-2,"SDL_SemWait");
	lua_pushcfunction(L, _bind_SDL_SemTryWait); lua_setfield(L,-2,"SDL_SemTryWait");
	lua_pushcfunction(L, _bind_SDL_SemWaitTimeout); lua_setfield(L,-2,"SDL_SemWaitTimeout");
	lua_pushcfunction(L, _bind_SDL_SemPost); lua_setfield(L,-2,"SDL_SemPost");
	lua_pushcfunction(L, _bind_SDL_SemValue); lua_setfield(L,-2,"SDL_SemValue");
	lua_pushcfunction(L, _bind_SDL_CreateCond); lua_setfield(L,-2,"SDL_CreateCond");
	lua_pushcfunction(L, _bind_SDL_DestroyCond); lua_setfield(L,-2,"SDL_DestroyCond");
	lua_pushcfunction(L, _bind_SDL_CondSignal); lua_setfield(L,-2,"SDL_CondSignal");
	lua_pushcfunction(L, _bind_SDL_CondBroadcast); lua_setfield(L,-2,"SDL_CondBroadcast");
	lua_pushcfunction(L, _bind_SDL_CondWait); lua_setfield(L,-2,"SDL_CondWait");
	lua_pushcfunction(L, _bind_SDL_CondWaitTimeout); lua_setfield(L,-2,"SDL_CondWaitTimeout");
	lua_pushcfunction(L, _bind_SDL_ThreadID); lua_setfield(L,-2,"SDL_ThreadID");
	lua_pushcfunction(L, _bind_SDL_GetThreadID); lua_setfield(L,-2,"SDL_GetThreadID");
	lua_pushcfunction(L, _bind_SDL_WaitThread); lua_setfield(L,-2,"SDL_WaitThread");
	lua_pushcfunction(L, _bind_SDL_KillThread); lua_setfield(L,-2,"SDL_KillThread");
	lua_pushcfunction(L, _bind_SDL_Linked_Version); lua_setfield(L,-2,"SDL_Linked_Version");
	lua_pushcfunction(L, _bind_SDL_VideoInit); lua_setfield(L,-2,"SDL_VideoInit");
	lua_pushcfunction(L, _bind_SDL_VideoQuit); lua_setfield(L,-2,"SDL_VideoQuit");
	lua_pushcfunction(L, _bind_SDL_UpdateRects); lua_setfield(L,-2,"SDL_UpdateRects");
	lua_pushcfunction(L, _bind_SDL_UpdateRect); lua_setfield(L,-2,"SDL_UpdateRect");
	lua_pushcfunction(L, _bind_SDL_CreateYUVOverlay); lua_setfield(L,-2,"SDL_CreateYUVOverlay");
	lua_pushcfunction(L, _bind_SDL_LockYUVOverlay); lua_setfield(L,-2,"SDL_LockYUVOverlay");
	lua_pushcfunction(L, _bind_SDL_UnlockYUVOverlay); lua_setfield(L,-2,"SDL_UnlockYUVOverlay");
	lua_pushcfunction(L, _bind_SDL_DisplayYUVOverlay); lua_setfield(L,-2,"SDL_DisplayYUVOverlay");
	lua_pushcfunction(L, _bind_SDL_FreeYUVOverlay); lua_setfield(L,-2,"SDL_FreeYUVOverlay");
	lua_pushcfunction(L, _bind_SDL_GL_LoadLibrary); lua_setfield(L,-2,"SDL_GL_LoadLibrary");
	lua_pushcfunction(L, _bind_SDL_GL_GetProcAddress); lua_setfield(L,-2,"SDL_GL_GetProcAddress");
	lua_pushcfunction(L, _bind_SDL_GL_SetAttribute); lua_setfield(L,-2,"SDL_GL_SetAttribute");
	lua_pushcfunction(L, _bind_SDL_GL_GetAttribute); lua_setfield(L,-2,"SDL_GL_GetAttribute");
	lua_pushcfunction(L, _bind_SDL_GL_SwapBuffers); lua_setfield(L,-2,"SDL_GL_SwapBuffers");
	lua_pushcfunction(L, _bind_SDL_GL_UpdateRects); lua_setfield(L,-2,"SDL_GL_UpdateRects");
	lua_pushcfunction(L, _bind_SDL_GL_Lock); lua_setfield(L,-2,"SDL_GL_Lock");
	lua_pushcfunction(L, _bind_SDL_GL_Unlock); lua_setfield(L,-2,"SDL_GL_Unlock");
	lua_pushcfunction(L, _bind_SDL_WM_SetCaption); lua_setfield(L,-2,"SDL_WM_SetCaption");
	lua_pushcfunction(L, _bind_SDL_WM_SetIcon); lua_setfield(L,-2,"SDL_WM_SetIcon");
	lua_pushcfunction(L, _bind_SDL_WM_IconifyWindow); lua_setfield(L,-2,"SDL_WM_IconifyWindow");
	lua_pushcfunction(L, _bind_SDL_WM_ToggleFullScreen); lua_setfield(L,-2,"SDL_WM_ToggleFullScreen");
	lua_pushcfunction(L, _bind_SDL_WM_GrabInput); lua_setfield(L,-2,"SDL_WM_GrabInput");
	lua_pushcfunction(L, _bind_SDL_VideoDriverName); lua_setfield(L,-2,"SDL_VideoDriverName");
	lua_pushcfunction(L, _bind_SDL_GetVideoSurface); lua_setfield(L,-2,"SDL_GetVideoSurface");
	lua_pushcfunction(L, _bind_SDL_GetVideoInfo); lua_setfield(L,-2,"SDL_GetVideoInfo");
	lua_pushcfunction(L, _bind_SDL_VideoModeOK); lua_setfield(L,-2,"SDL_VideoModeOK");
	lua_pushcfunction(L, _bind_SDL_SetVideoMode); lua_setfield(L,-2,"SDL_SetVideoMode");
	lua_pushcfunction(L, _bind_SDL_Flip); lua_setfield(L,-2,"SDL_Flip");
	lua_pushcfunction(L, _bind_SDL_SetGamma); lua_setfield(L,-2,"SDL_SetGamma");
	lua_pushcfunction(L, _bind_SDL_SetGammaRamp); lua_setfield(L,-2,"SDL_SetGammaRamp");
	lua_pushcfunction(L, _bind_SDL_GetGammaRamp); lua_setfield(L,-2,"SDL_GetGammaRamp");
	lua_pushcfunction(L, _bind_SDL_SetColors); lua_setfield(L,-2,"SDL_SetColors");
	lua_pushcfunction(L, _bind_SDL_SetPalette); lua_setfield(L,-2,"SDL_SetPalette");
	lua_pushcfunction(L, _bind_SDL_MapRGB); lua_setfield(L,-2,"SDL_MapRGB");
	lua_pushcfunction(L, _bind_SDL_MapRGBA); lua_setfield(L,-2,"SDL_MapRGBA");
	lua_pushcfunction(L, _bind_SDL_GetRGB); lua_setfield(L,-2,"SDL_GetRGB");
	lua_pushcfunction(L, _bind_SDL_GetRGBA); lua_setfield(L,-2,"SDL_GetRGBA");
	lua_pushcfunction(L, _bind_SDL_CreateRGBSurface); lua_setfield(L,-2,"SDL_CreateRGBSurface");
	lua_pushcfunction(L, _bind_SDL_CreateRGBSurfaceFrom); lua_setfield(L,-2,"SDL_CreateRGBSurfaceFrom");
	lua_pushcfunction(L, _bind_SDL_FreeSurface); lua_setfield(L,-2,"SDL_FreeSurface");
	lua_pushcfunction(L, _bind_SDL_LockSurface); lua_setfield(L,-2,"SDL_LockSurface");
	lua_pushcfunction(L, _bind_SDL_UnlockSurface); lua_setfield(L,-2,"SDL_UnlockSurface");
	lua_pushcfunction(L, _bind_SDL_SetColorKey); lua_setfield(L,-2,"SDL_SetColorKey");
	lua_pushcfunction(L, _bind_SDL_SetAlpha); lua_setfield(L,-2,"SDL_SetAlpha");
	lua_pushcfunction(L, _bind_SDL_SetClipRect); lua_setfield(L,-2,"SDL_SetClipRect");
	lua_pushcfunction(L, _bind_SDL_GetClipRect); lua_setfield(L,-2,"SDL_GetClipRect");
	lua_pushcfunction(L, _bind_SDL_ConvertSurface); lua_setfield(L,-2,"SDL_ConvertSurface");
	lua_pushcfunction(L, _bind_SDL_UpperBlit); lua_setfield(L,-2,"SDL_UpperBlit");
	lua_pushcfunction(L, _bind_SDL_LowerBlit); lua_setfield(L,-2,"SDL_LowerBlit");
	lua_pushcfunction(L, _bind_SDL_FillRect); lua_setfield(L,-2,"SDL_FillRect");
	lua_pushcfunction(L, _bind_SDL_DisplayFormat); lua_setfield(L,-2,"SDL_DisplayFormat");
	lua_pushcfunction(L, _bind_SDL_DisplayFormatAlpha); lua_setfield(L,-2,"SDL_DisplayFormatAlpha");
	lua_pushcfunction(L, _bind_SDL_SoftStretch); lua_setfield(L,-2,"SDL_SoftStretch");
}

#ifdef __cplusplus
}
#endif

