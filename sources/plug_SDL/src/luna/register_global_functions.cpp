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
static int _bind_SDL_Init(lua_State *L) {
	if (!_lg_typecheck_SDL_Init(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Init function, expected prototype:\nSDL_Init(unsigned int)");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	int lret = SDL_Init(flags);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_InitSubSystem(lua_State *L) {
	if (!_lg_typecheck_SDL_InitSubSystem(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_InitSubSystem function, expected prototype:\nSDL_InitSubSystem(unsigned int)");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	int lret = SDL_InitSubSystem(flags);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_QuitSubSystem(lua_State *L) {
	if (!_lg_typecheck_SDL_QuitSubSystem(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_QuitSubSystem function, expected prototype:\nSDL_QuitSubSystem(unsigned int)");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	SDL_QuitSubSystem(flags);

	return 0;
}

static int _bind_SDL_WasInit(lua_State *L) {
	if (!_lg_typecheck_SDL_WasInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WasInit function, expected prototype:\nSDL_WasInit(unsigned int)");
	}

	unsigned int flags=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = SDL_WasInit(flags);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_Quit(lua_State *L) {
	if (!_lg_typecheck_SDL_Quit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Quit function, expected prototype:\nSDL_Quit()");
	}


	SDL_Quit();

	return 0;
}

static int _bind_SDL_GetAppState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetAppState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetAppState function, expected prototype:\nSDL_GetAppState()");
	}


	unsigned char lret = SDL_GetAppState();
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_AudioInit(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_AudioInit function, expected prototype:\nSDL_AudioInit(const char *)");
	}

	const char * driver_name=(const char *)lua_tostring(L,1);

	int lret = SDL_AudioInit(driver_name);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_AudioQuit(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioQuit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_AudioQuit function, expected prototype:\nSDL_AudioQuit()");
	}


	SDL_AudioQuit();

	return 0;
}

static int _bind_SDL_LockAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_LockAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LockAudio function, expected prototype:\nSDL_LockAudio()");
	}


	SDL_LockAudio();

	return 0;
}

static int _bind_SDL_UnlockAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UnlockAudio function, expected prototype:\nSDL_UnlockAudio()");
	}


	SDL_UnlockAudio();

	return 0;
}

static int _bind_SDL_AudioDriverName(lua_State *L) {
	if (!_lg_typecheck_SDL_AudioDriverName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_AudioDriverName function, expected prototype:\nSDL_AudioDriverName(char *, int)");
	}

	char namebuf=(char)lua_tointeger(L,1);
	int maxlen=(int)lua_tointeger(L,2);

	char * lret = SDL_AudioDriverName(&namebuf, maxlen);
	lua_pushnumber(L,*lret);

	return 1;
}

static int _bind_SDL_OpenAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_OpenAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_OpenAudio function, expected prototype:\nSDL_OpenAudio(SDL_AudioSpec *, SDL_AudioSpec *)");
	}

	SDL_AudioSpec* desired=(Luna< SDL_AudioSpec >::check(L,1));
	SDL_AudioSpec* obtained=(Luna< SDL_AudioSpec >::check(L,2));

	int lret = SDL_OpenAudio(desired, obtained);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetAudioStatus(lua_State *L) {
	if (!_lg_typecheck_SDL_GetAudioStatus(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetAudioStatus function, expected prototype:\nSDL_GetAudioStatus()");
	}


	SDL_audiostatus lret = SDL_GetAudioStatus();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_PauseAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_PauseAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_PauseAudio function, expected prototype:\nSDL_PauseAudio(int)");
	}

	int pause_on=(int)lua_tointeger(L,1);

	SDL_PauseAudio(pause_on);

	return 0;
}

static int _bind_SDL_FreeWAV(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeWAV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_FreeWAV function, expected prototype:\nSDL_FreeWAV(unsigned char *)");
	}

	unsigned char audio_buf = (unsigned char)(lua_tointeger(L,1));

	SDL_FreeWAV(&audio_buf);

	return 0;
}

static int _bind_SDL_BuildAudioCVT(lua_State *L) {
	if (!_lg_typecheck_SDL_BuildAudioCVT(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_BuildAudioCVT function, expected prototype:\nSDL_BuildAudioCVT(SDL_AudioCVT *, Uint16, unsigned char, int, Uint16, unsigned char, int)");
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

static int _bind_SDL_ConvertAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_ConvertAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_ConvertAudio function, expected prototype:\nSDL_ConvertAudio(SDL_AudioCVT *)");
	}

	SDL_AudioCVT* cvt=(Luna< SDL_AudioCVT >::check(L,1));

	int lret = SDL_ConvertAudio(cvt);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_MixAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_MixAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_MixAudio function, expected prototype:\nSDL_MixAudio(unsigned char *, const unsigned char *, unsigned int, int)");
	}

	unsigned char dst = (unsigned char)(lua_tointeger(L,1));
	unsigned char src = (unsigned char)(lua_tointeger(L,2));
	unsigned int len=(unsigned int)lua_tointeger(L,3);
	int volume=(int)lua_tointeger(L,4);

	SDL_MixAudio(&dst, &src, len, volume);

	return 0;
}

static int _bind_SDL_CloseAudio(lua_State *L) {
	if (!_lg_typecheck_SDL_CloseAudio(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CloseAudio function, expected prototype:\nSDL_CloseAudio()");
	}


	SDL_CloseAudio();

	return 0;
}

static int _bind_SDL_CDNumDrives(lua_State *L) {
	if (!_lg_typecheck_SDL_CDNumDrives(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDNumDrives function, expected prototype:\nSDL_CDNumDrives()");
	}


	int lret = SDL_CDNumDrives();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDName(lua_State *L) {
	if (!_lg_typecheck_SDL_CDName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDName function, expected prototype:\nSDL_CDName(int)");
	}

	int drive=(int)lua_tointeger(L,1);

	const char * lret = SDL_CDName(drive);
	lua_pushstring(L,lret);

	return 1;
}

static int _bind_SDL_CDOpen(lua_State *L) {
	if (!_lg_typecheck_SDL_CDOpen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDOpen function, expected prototype:\nSDL_CDOpen(int)");
	}

	int drive=(int)lua_tointeger(L,1);

	SDL_CD * lret = SDL_CDOpen(drive);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_CD >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_CDStatus(lua_State *L) {
	if (!_lg_typecheck_SDL_CDStatus(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDStatus function, expected prototype:\nSDL_CDStatus(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	CDstatus lret = SDL_CDStatus(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDPlayTracks(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPlayTracks(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDPlayTracks function, expected prototype:\nSDL_CDPlayTracks(SDL_CD *, int, int, int, int)");
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

static int _bind_SDL_CDPlay(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDPlay function, expected prototype:\nSDL_CDPlay(SDL_CD *, int, int)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));
	int start=(int)lua_tointeger(L,2);
	int length=(int)lua_tointeger(L,3);

	int lret = SDL_CDPlay(cdrom, start, length);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDPause(lua_State *L) {
	if (!_lg_typecheck_SDL_CDPause(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDPause function, expected prototype:\nSDL_CDPause(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDPause(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDResume(lua_State *L) {
	if (!_lg_typecheck_SDL_CDResume(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDResume function, expected prototype:\nSDL_CDResume(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDResume(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDStop(lua_State *L) {
	if (!_lg_typecheck_SDL_CDStop(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDStop function, expected prototype:\nSDL_CDStop(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDStop(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDEject(lua_State *L) {
	if (!_lg_typecheck_SDL_CDEject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDEject function, expected prototype:\nSDL_CDEject(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	int lret = SDL_CDEject(cdrom);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CDClose(lua_State *L) {
	if (!_lg_typecheck_SDL_CDClose(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CDClose function, expected prototype:\nSDL_CDClose(SDL_CD *)");
	}

	SDL_CD* cdrom=(Luna< SDL_CD >::check(L,1));

	SDL_CDClose(cdrom);

	return 0;
}

static int _bind_SDL_HasRDTSC(lua_State *L) {
	if (!_lg_typecheck_SDL_HasRDTSC(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasRDTSC function, expected prototype:\nSDL_HasRDTSC()");
	}


	int lret = SDL_HasRDTSC();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_HasMMX(lua_State *L) {
	if (!_lg_typecheck_SDL_HasMMX(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasMMX function, expected prototype:\nSDL_HasMMX()");
	}


	int lret = SDL_HasMMX();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_HasMMXExt(lua_State *L) {
	if (!_lg_typecheck_SDL_HasMMXExt(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasMMXExt function, expected prototype:\nSDL_HasMMXExt()");
	}


	int lret = SDL_HasMMXExt();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_Has3DNow(lua_State *L) {
	if (!_lg_typecheck_SDL_Has3DNow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Has3DNow function, expected prototype:\nSDL_Has3DNow()");
	}


	int lret = SDL_Has3DNow();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_Has3DNowExt(lua_State *L) {
	if (!_lg_typecheck_SDL_Has3DNowExt(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Has3DNowExt function, expected prototype:\nSDL_Has3DNowExt()");
	}


	int lret = SDL_Has3DNowExt();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_HasSSE(lua_State *L) {
	if (!_lg_typecheck_SDL_HasSSE(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasSSE function, expected prototype:\nSDL_HasSSE()");
	}


	int lret = SDL_HasSSE();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_HasSSE2(lua_State *L) {
	if (!_lg_typecheck_SDL_HasSSE2(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasSSE2 function, expected prototype:\nSDL_HasSSE2()");
	}


	int lret = SDL_HasSSE2();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_HasAltiVec(lua_State *L) {
	if (!_lg_typecheck_SDL_HasAltiVec(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_HasAltiVec function, expected prototype:\nSDL_HasAltiVec()");
	}


	int lret = SDL_HasAltiVec();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_Swap16(lua_State *L) {
	if (!_lg_typecheck_SDL_Swap16(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Swap16 function, expected prototype:\nSDL_Swap16(Uint16)");
	}

	Uint16 x=(Uint16)lua_tointeger(L,1);

	Uint16 lret = SDL_Swap16(x);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_Swap32(lua_State *L) {
	if (!_lg_typecheck_SDL_Swap32(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Swap32 function, expected prototype:\nSDL_Swap32(unsigned int)");
	}

	unsigned int x=(unsigned int)lua_tointeger(L,1);

	unsigned int lret = SDL_Swap32(x);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetError(lua_State *L) {
	if (!_lg_typecheck_SDL_GetError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetError function, expected prototype:\nSDL_GetError()");
	}


	char * lret = SDL_GetError();
	lua_pushnumber(L,*lret);

	return 1;
}

static int _bind_SDL_ClearError(lua_State *L) {
	if (!_lg_typecheck_SDL_ClearError(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_ClearError function, expected prototype:\nSDL_ClearError()");
	}


	SDL_ClearError();

	return 0;
}

static int _bind_SDL_Error(lua_State *L) {
	if (!_lg_typecheck_SDL_Error(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Error function, expected prototype:\nSDL_Error(SDL_errorcode)");
	}

	SDL_errorcode code=(SDL_errorcode)lua_tointeger(L,1);

	SDL_Error(code);

	return 0;
}

static int _bind_SDL_SetEventFilter(lua_State *L) {
	if (!_lg_typecheck_SDL_SetEventFilter(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetEventFilter function, expected prototype:\nSDL_SetEventFilter(SDL_EventFilter)");
	}

	SDL_EventFilter* filter_ptr=(Luna< SDL_EventFilter >::check(L,1));
	if( !filter_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filter in SDL_SetEventFilter function");
	}
	SDL_EventFilter filter=*filter_ptr;

	SDL_SetEventFilter(filter);

	return 0;
}

static int _bind_SDL_GetEventFilter(lua_State *L) {
	if (!_lg_typecheck_SDL_GetEventFilter(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetEventFilter function, expected prototype:\nSDL_GetEventFilter()");
	}


	SDL_EventFilter stack_lret = SDL_GetEventFilter();
	SDL_EventFilter* lret = new SDL_EventFilter(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_EventFilter >::push(L,lret,true);

	return 1;
}

static int _bind_SDL_PumpEvents(lua_State *L) {
	if (!_lg_typecheck_SDL_PumpEvents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_PumpEvents function, expected prototype:\nSDL_PumpEvents()");
	}


	SDL_PumpEvents();

	return 0;
}

static int _bind_SDL_PeepEvents(lua_State *L) {
	if (!_lg_typecheck_SDL_PeepEvents(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_PeepEvents function, expected prototype:\nSDL_PeepEvents(SDL_Event *, int, SDL_eventaction, unsigned int)");
	}

	SDL_Event* events=(Luna< SDL_Event >::check(L,1));
	int numevents=(int)lua_tointeger(L,2);
	SDL_eventaction action=(SDL_eventaction)lua_tointeger(L,3);
	unsigned int mask=(unsigned int)lua_tointeger(L,4);

	int lret = SDL_PeepEvents(events, numevents, action, mask);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_PollEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_PollEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_PollEvent function, expected prototype:\nSDL_PollEvent(SDL_Event *)");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_PollEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_WaitEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_WaitEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WaitEvent function, expected prototype:\nSDL_WaitEvent(SDL_Event *)");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_WaitEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_PushEvent(lua_State *L) {
	if (!_lg_typecheck_SDL_PushEvent(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_PushEvent function, expected prototype:\nSDL_PushEvent(SDL_Event *)");
	}

	SDL_Event* event=(Luna< SDL_Event >::check(L,1));

	int lret = SDL_PushEvent(event);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_EventState(lua_State *L) {
	if (!_lg_typecheck_SDL_EventState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_EventState function, expected prototype:\nSDL_EventState(unsigned char, int)");
	}

	unsigned char type = (unsigned char)(lua_tointeger(L,1));
	int state=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_EventState(type, state);
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_NumJoysticks(lua_State *L) {
	if (!_lg_typecheck_SDL_NumJoysticks(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_NumJoysticks function, expected prototype:\nSDL_NumJoysticks()");
	}


	int lret = SDL_NumJoysticks();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickName(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickName function, expected prototype:\nSDL_JoystickName(int)");
	}

	int device_index=(int)lua_tointeger(L,1);

	const char * lret = SDL_JoystickName(device_index);
	lua_pushstring(L,lret);

	return 1;
}

static int _bind_SDL_JoystickOpen(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickOpen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickOpen function, expected prototype:\nSDL_JoystickOpen(int)");
	}

	int device_index=(int)lua_tointeger(L,1);

	SDL_Joystick * lret = SDL_JoystickOpen(device_index);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Joystick >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_JoystickOpened(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickOpened(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickOpened function, expected prototype:\nSDL_JoystickOpened(int)");
	}

	int device_index=(int)lua_tointeger(L,1);

	int lret = SDL_JoystickOpened(device_index);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickIndex(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickIndex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickIndex function, expected prototype:\nSDL_JoystickIndex(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickIndex(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickNumAxes(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumAxes(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickNumAxes function, expected prototype:\nSDL_JoystickNumAxes(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumAxes(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickNumBalls(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumBalls(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickNumBalls function, expected prototype:\nSDL_JoystickNumBalls(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumBalls(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickNumHats(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumHats(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickNumHats function, expected prototype:\nSDL_JoystickNumHats(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumHats(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickNumButtons(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickNumButtons(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickNumButtons function, expected prototype:\nSDL_JoystickNumButtons(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	int lret = SDL_JoystickNumButtons(joystick);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickUpdate(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickUpdate(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickUpdate function, expected prototype:\nSDL_JoystickUpdate()");
	}


	SDL_JoystickUpdate();

	return 0;
}

static int _bind_SDL_JoystickEventState(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickEventState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickEventState function, expected prototype:\nSDL_JoystickEventState(int)");
	}

	int state=(int)lua_tointeger(L,1);

	int lret = SDL_JoystickEventState(state);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickGetAxis(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetAxis(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickGetAxis function, expected prototype:\nSDL_JoystickGetAxis(SDL_Joystick *, int)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int axis=(int)lua_tointeger(L,2);

	Sint16 lret = SDL_JoystickGetAxis(joystick, axis);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickGetHat(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetHat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickGetHat function, expected prototype:\nSDL_JoystickGetHat(SDL_Joystick *, int)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int hat=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_JoystickGetHat(joystick, hat);
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_JoystickGetBall(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetBall(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickGetBall function, expected prototype:\nSDL_JoystickGetBall(SDL_Joystick *, int, int *, int *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int ball=(int)lua_tointeger(L,2);
	int dx=(int)lua_tointeger(L,3);
	int dy=(int)lua_tointeger(L,4);

	int lret = SDL_JoystickGetBall(joystick, ball, &dx, &dy);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_JoystickGetButton(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickGetButton(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickGetButton function, expected prototype:\nSDL_JoystickGetButton(SDL_Joystick *, int)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));
	int button=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_JoystickGetButton(joystick, button);
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_JoystickClose(lua_State *L) {
	if (!_lg_typecheck_SDL_JoystickClose(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_JoystickClose function, expected prototype:\nSDL_JoystickClose(SDL_Joystick *)");
	}

	SDL_Joystick* joystick=(Luna< SDL_Joystick >::check(L,1));

	SDL_JoystickClose(joystick);

	return 0;
}

static int _bind_SDL_EnableUNICODE(lua_State *L) {
	if (!_lg_typecheck_SDL_EnableUNICODE(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_EnableUNICODE function, expected prototype:\nSDL_EnableUNICODE(int)");
	}

	int enable=(int)lua_tointeger(L,1);

	int lret = SDL_EnableUNICODE(enable);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_EnableKeyRepeat(lua_State *L) {
	if (!_lg_typecheck_SDL_EnableKeyRepeat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_EnableKeyRepeat function, expected prototype:\nSDL_EnableKeyRepeat(int, int)");
	}

	int delay=(int)lua_tointeger(L,1);
	int interval=(int)lua_tointeger(L,2);

	int lret = SDL_EnableKeyRepeat(delay, interval);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetKeyRepeat(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyRepeat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetKeyRepeat function, expected prototype:\nSDL_GetKeyRepeat(int *, int *)");
	}

	int delay=(int)lua_tointeger(L,1);
	int interval=(int)lua_tointeger(L,2);

	SDL_GetKeyRepeat(&delay, &interval);

	return 0;
}

static int _bind_SDL_GetKeyState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetKeyState function, expected prototype:\nSDL_GetKeyState(int *)");
	}

	int numkeys=(int)lua_tointeger(L,1);

	unsigned char * lret = SDL_GetKeyState(&numkeys);
	luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

	return 1;
}

static int _bind_SDL_GetModState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetModState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetModState function, expected prototype:\nSDL_GetModState()");
	}


	SDLMod lret = SDL_GetModState();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetModState(lua_State *L) {
	if (!_lg_typecheck_SDL_SetModState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetModState function, expected prototype:\nSDL_SetModState(SDLMod)");
	}

	SDLMod modstate=(SDLMod)lua_tointeger(L,1);

	SDL_SetModState(modstate);

	return 0;
}

static int _bind_SDL_GetKeyName(lua_State *L) {
	if (!_lg_typecheck_SDL_GetKeyName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetKeyName function, expected prototype:\nSDL_GetKeyName(SDLKey)");
	}

	SDLKey key=(SDLKey)lua_tointeger(L,1);

	char * lret = SDL_GetKeyName(key);
	lua_pushnumber(L,*lret);

	return 1;
}

static int _bind_SDL_LoadObject(lua_State *L) {
	if (!_lg_typecheck_SDL_LoadObject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LoadObject function, expected prototype:\nSDL_LoadObject(const char *)");
	}

	const char * sofile=(const char *)lua_tostring(L,1);

	void * lret = SDL_LoadObject(sofile);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_LoadFunction(lua_State *L) {
	if (!_lg_typecheck_SDL_LoadFunction(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LoadFunction function, expected prototype:\nSDL_LoadFunction(void *, const char *)");
	}

	void* handle=(Luna< void >::check(L,1));
	const char * name=(const char *)lua_tostring(L,2);

	void * lret = SDL_LoadFunction(handle, name);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_UnloadObject(lua_State *L) {
	if (!_lg_typecheck_SDL_UnloadObject(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UnloadObject function, expected prototype:\nSDL_UnloadObject(void *)");
	}

	void* handle=(Luna< void >::check(L,1));

	SDL_UnloadObject(handle);

	return 0;
}

static int _bind_SDL_GetMouseState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetMouseState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetMouseState function, expected prototype:\nSDL_GetMouseState(int *, int *)");
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_GetMouseState(&x, &y);
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_GetRelativeMouseState(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRelativeMouseState(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetRelativeMouseState function, expected prototype:\nSDL_GetRelativeMouseState(int *, int *)");
	}

	int x=(int)lua_tointeger(L,1);
	int y=(int)lua_tointeger(L,2);

	unsigned char lret = SDL_GetRelativeMouseState(&x, &y);
	lua_pushnumber(L,(int)lret);

	return 1;
}

static int _bind_SDL_WarpMouse(lua_State *L) {
	if (!_lg_typecheck_SDL_WarpMouse(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WarpMouse function, expected prototype:\nSDL_WarpMouse(Uint16, Uint16)");
	}

	Uint16 x=(Uint16)lua_tointeger(L,1);
	Uint16 y=(Uint16)lua_tointeger(L,2);

	SDL_WarpMouse(x, y);

	return 0;
}

static int _bind_SDL_CreateCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateCursor function, expected prototype:\nSDL_CreateCursor(unsigned char *, unsigned char *, int, int, int, int)");
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

static int _bind_SDL_SetCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_SetCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetCursor function, expected prototype:\nSDL_SetCursor(SDL_Cursor *)");
	}

	SDL_Cursor* cursor=(Luna< SDL_Cursor >::check(L,1));

	SDL_SetCursor(cursor);

	return 0;
}

static int _bind_SDL_GetCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_GetCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetCursor function, expected prototype:\nSDL_GetCursor()");
	}


	SDL_Cursor * lret = SDL_GetCursor();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Cursor >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_FreeCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_FreeCursor function, expected prototype:\nSDL_FreeCursor(SDL_Cursor *)");
	}

	SDL_Cursor* cursor=(Luna< SDL_Cursor >::check(L,1));

	SDL_FreeCursor(cursor);

	return 0;
}

static int _bind_SDL_ShowCursor(lua_State *L) {
	if (!_lg_typecheck_SDL_ShowCursor(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_ShowCursor function, expected prototype:\nSDL_ShowCursor(int)");
	}

	int toggle=(int)lua_tointeger(L,1);

	int lret = SDL_ShowCursor(toggle);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CreateMutex(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateMutex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateMutex function, expected prototype:\nSDL_CreateMutex()");
	}


	SDL_mutex * lret = SDL_CreateMutex();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_mutex >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_mutexP(lua_State *L) {
	if (!_lg_typecheck_SDL_mutexP(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_mutexP function, expected prototype:\nSDL_mutexP(SDL_mutex *)");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	int lret = SDL_mutexP(mutex);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_mutexV(lua_State *L) {
	if (!_lg_typecheck_SDL_mutexV(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_mutexV function, expected prototype:\nSDL_mutexV(SDL_mutex *)");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	int lret = SDL_mutexV(mutex);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_DestroyMutex(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroyMutex(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DestroyMutex function, expected prototype:\nSDL_DestroyMutex(SDL_mutex *)");
	}

	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,1));

	SDL_DestroyMutex(mutex);

	return 0;
}

static int _bind_SDL_CreateSemaphore(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateSemaphore(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateSemaphore function, expected prototype:\nSDL_CreateSemaphore(unsigned int)");
	}

	unsigned int initial_value=(unsigned int)lua_tointeger(L,1);

	SDL_sem * lret = SDL_CreateSemaphore(initial_value);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_sem >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_DestroySemaphore(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroySemaphore(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DestroySemaphore function, expected prototype:\nSDL_DestroySemaphore(SDL_sem *)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	SDL_DestroySemaphore(sem);

	return 0;
}

static int _bind_SDL_SemWait(lua_State *L) {
	if (!_lg_typecheck_SDL_SemWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SemWait function, expected prototype:\nSDL_SemWait(SDL_sem *)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemWait(sem);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SemTryWait(lua_State *L) {
	if (!_lg_typecheck_SDL_SemTryWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SemTryWait function, expected prototype:\nSDL_SemTryWait(SDL_sem *)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemTryWait(sem);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SemWaitTimeout(lua_State *L) {
	if (!_lg_typecheck_SDL_SemWaitTimeout(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SemWaitTimeout function, expected prototype:\nSDL_SemWaitTimeout(SDL_sem *, unsigned int)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));
	unsigned int ms=(unsigned int)lua_tointeger(L,2);

	int lret = SDL_SemWaitTimeout(sem, ms);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SemPost(lua_State *L) {
	if (!_lg_typecheck_SDL_SemPost(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SemPost function, expected prototype:\nSDL_SemPost(SDL_sem *)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	int lret = SDL_SemPost(sem);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SemValue(lua_State *L) {
	if (!_lg_typecheck_SDL_SemValue(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SemValue function, expected prototype:\nSDL_SemValue(SDL_sem *)");
	}

	SDL_sem* sem=(Luna< SDL_sem >::check(L,1));

	unsigned int lret = SDL_SemValue(sem);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CreateCond(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateCond(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateCond function, expected prototype:\nSDL_CreateCond()");
	}


	SDL_cond * lret = SDL_CreateCond();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_cond >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_DestroyCond(lua_State *L) {
	if (!_lg_typecheck_SDL_DestroyCond(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DestroyCond function, expected prototype:\nSDL_DestroyCond(SDL_cond *)");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	SDL_DestroyCond(cond);

	return 0;
}

static int _bind_SDL_CondSignal(lua_State *L) {
	if (!_lg_typecheck_SDL_CondSignal(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CondSignal function, expected prototype:\nSDL_CondSignal(SDL_cond *)");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	int lret = SDL_CondSignal(cond);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CondBroadcast(lua_State *L) {
	if (!_lg_typecheck_SDL_CondBroadcast(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CondBroadcast function, expected prototype:\nSDL_CondBroadcast(SDL_cond *)");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));

	int lret = SDL_CondBroadcast(cond);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CondWait(lua_State *L) {
	if (!_lg_typecheck_SDL_CondWait(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CondWait function, expected prototype:\nSDL_CondWait(SDL_cond *, SDL_mutex *)");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));
	SDL_mutex* mut=(Luna< SDL_mutex >::check(L,2));

	int lret = SDL_CondWait(cond, mut);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_CondWaitTimeout(lua_State *L) {
	if (!_lg_typecheck_SDL_CondWaitTimeout(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CondWaitTimeout function, expected prototype:\nSDL_CondWaitTimeout(SDL_cond *, SDL_mutex *, unsigned int)");
	}

	SDL_cond* cond=(Luna< SDL_cond >::check(L,1));
	SDL_mutex* mutex=(Luna< SDL_mutex >::check(L,2));
	unsigned int ms=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_CondWaitTimeout(cond, mutex, ms);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_ThreadID(lua_State *L) {
	if (!_lg_typecheck_SDL_ThreadID(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_ThreadID function, expected prototype:\nSDL_ThreadID()");
	}


	unsigned int lret = SDL_ThreadID();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetThreadID(lua_State *L) {
	if (!_lg_typecheck_SDL_GetThreadID(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetThreadID function, expected prototype:\nSDL_GetThreadID(SDL_Thread *)");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));

	unsigned int lret = SDL_GetThreadID(thread);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_WaitThread(lua_State *L) {
	if (!_lg_typecheck_SDL_WaitThread(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WaitThread function, expected prototype:\nSDL_WaitThread(SDL_Thread *, int *)");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));
	int status=(int)lua_tointeger(L,2);

	SDL_WaitThread(thread, &status);

	return 0;
}

static int _bind_SDL_KillThread(lua_State *L) {
	if (!_lg_typecheck_SDL_KillThread(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_KillThread function, expected prototype:\nSDL_KillThread(SDL_Thread *)");
	}

	SDL_Thread* thread=(Luna< SDL_Thread >::check(L,1));

	SDL_KillThread(thread);

	return 0;
}

static int _bind_SDL_Linked_Version(lua_State *L) {
	if (!_lg_typecheck_SDL_Linked_Version(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Linked_Version function, expected prototype:\nSDL_Linked_Version()");
	}


	const SDL_version * lret = SDL_Linked_Version();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_version >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_VideoInit(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoInit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_VideoInit function, expected prototype:\nSDL_VideoInit(const char *, unsigned int)");
	}

	const char * driver_name=(const char *)lua_tostring(L,1);
	unsigned int flags=(unsigned int)lua_tointeger(L,2);

	int lret = SDL_VideoInit(driver_name, flags);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_VideoQuit(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoQuit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_VideoQuit function, expected prototype:\nSDL_VideoQuit()");
	}


	SDL_VideoQuit();

	return 0;
}

static int _bind_SDL_UpdateRects(lua_State *L) {
	if (!_lg_typecheck_SDL_UpdateRects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UpdateRects function, expected prototype:\nSDL_UpdateRects(SDL_Surface *, int, SDL_Rect *)");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));
	int numrects=(int)lua_tointeger(L,2);
	SDL_Rect* rects=(Luna< SDL_Rect >::check(L,3));

	SDL_UpdateRects(screen, numrects, rects);

	return 0;
}

static int _bind_SDL_UpdateRect(lua_State *L) {
	if (!_lg_typecheck_SDL_UpdateRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UpdateRect function, expected prototype:\nSDL_UpdateRect(SDL_Surface *, Sint32, Sint32, unsigned int, unsigned int)");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));
	Sint32 x=(Sint32)lua_tointeger(L,2);
	Sint32 y=(Sint32)lua_tointeger(L,3);
	unsigned int w=(unsigned int)lua_tointeger(L,4);
	unsigned int h=(unsigned int)lua_tointeger(L,5);

	SDL_UpdateRect(screen, x, y, w, h);

	return 0;
}

static int _bind_SDL_CreateYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateYUVOverlay function, expected prototype:\nSDL_CreateYUVOverlay(int, int, unsigned int, SDL_Surface *)");
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

static int _bind_SDL_LockYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_LockYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LockYUVOverlay function, expected prototype:\nSDL_LockYUVOverlay(SDL_Overlay *)");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	int lret = SDL_LockYUVOverlay(overlay);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_UnlockYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UnlockYUVOverlay function, expected prototype:\nSDL_UnlockYUVOverlay(SDL_Overlay *)");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	SDL_UnlockYUVOverlay(overlay);

	return 0;
}

static int _bind_SDL_DisplayYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DisplayYUVOverlay function, expected prototype:\nSDL_DisplayYUVOverlay(SDL_Overlay *, SDL_Rect *)");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,2));

	int lret = SDL_DisplayYUVOverlay(overlay, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_FreeYUVOverlay(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeYUVOverlay(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_FreeYUVOverlay function, expected prototype:\nSDL_FreeYUVOverlay(SDL_Overlay *)");
	}

	SDL_Overlay* overlay=(Luna< SDL_Overlay >::check(L,1));

	SDL_FreeYUVOverlay(overlay);

	return 0;
}

static int _bind_SDL_GL_LoadLibrary(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_LoadLibrary(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_LoadLibrary function, expected prototype:\nSDL_GL_LoadLibrary(const char *)");
	}

	const char * path=(const char *)lua_tostring(L,1);

	int lret = SDL_GL_LoadLibrary(path);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GL_GetProcAddress(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_GetProcAddress(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_GetProcAddress function, expected prototype:\nSDL_GL_GetProcAddress(const char *)");
	}

	const char * proc=(const char *)lua_tostring(L,1);

	void * lret = SDL_GL_GetProcAddress(proc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< void >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_GL_SetAttribute(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_SetAttribute(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_SetAttribute function, expected prototype:\nSDL_GL_SetAttribute(SDL_GLattr, int)");
	}

	SDL_GLattr attr=(SDL_GLattr)lua_tointeger(L,1);
	int value=(int)lua_tointeger(L,2);

	int lret = SDL_GL_SetAttribute(attr, value);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GL_GetAttribute(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_GetAttribute(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_GetAttribute function, expected prototype:\nSDL_GL_GetAttribute(SDL_GLattr, int *)");
	}

	SDL_GLattr attr=(SDL_GLattr)lua_tointeger(L,1);
	int value=(int)lua_tointeger(L,2);

	int lret = SDL_GL_GetAttribute(attr, &value);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GL_SwapBuffers(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_SwapBuffers(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_SwapBuffers function, expected prototype:\nSDL_GL_SwapBuffers()");
	}


	SDL_GL_SwapBuffers();

	return 0;
}

static int _bind_SDL_GL_UpdateRects(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_UpdateRects(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_UpdateRects function, expected prototype:\nSDL_GL_UpdateRects(int, SDL_Rect *)");
	}

	int numrects=(int)lua_tointeger(L,1);
	SDL_Rect* rects=(Luna< SDL_Rect >::check(L,2));

	SDL_GL_UpdateRects(numrects, rects);

	return 0;
}

static int _bind_SDL_GL_Lock(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_Lock(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_Lock function, expected prototype:\nSDL_GL_Lock()");
	}


	SDL_GL_Lock();

	return 0;
}

static int _bind_SDL_GL_Unlock(lua_State *L) {
	if (!_lg_typecheck_SDL_GL_Unlock(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GL_Unlock function, expected prototype:\nSDL_GL_Unlock()");
	}


	SDL_GL_Unlock();

	return 0;
}

static int _bind_SDL_WM_SetCaption(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_SetCaption(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WM_SetCaption function, expected prototype:\nSDL_WM_SetCaption(const char *, const char *)");
	}

	const char * title=(const char *)lua_tostring(L,1);
	const char * icon=(const char *)lua_tostring(L,2);

	SDL_WM_SetCaption(title, icon);

	return 0;
}

static int _bind_SDL_WM_SetIcon(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_SetIcon(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WM_SetIcon function, expected prototype:\nSDL_WM_SetIcon(SDL_Surface *, unsigned char *)");
	}

	SDL_Surface* icon=(Luna< SDL_Surface >::check(L,1));
	unsigned char mask = (unsigned char)(lua_tointeger(L,2));

	SDL_WM_SetIcon(icon, &mask);

	return 0;
}

static int _bind_SDL_WM_IconifyWindow(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_IconifyWindow(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WM_IconifyWindow function, expected prototype:\nSDL_WM_IconifyWindow()");
	}


	int lret = SDL_WM_IconifyWindow();
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_WM_ToggleFullScreen(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_ToggleFullScreen(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WM_ToggleFullScreen function, expected prototype:\nSDL_WM_ToggleFullScreen(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_WM_ToggleFullScreen(surface);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_WM_GrabInput(lua_State *L) {
	if (!_lg_typecheck_SDL_WM_GrabInput(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_WM_GrabInput function, expected prototype:\nSDL_WM_GrabInput(SDL_GrabMode)");
	}

	SDL_GrabMode mode=(SDL_GrabMode)lua_tointeger(L,1);

	SDL_GrabMode lret = SDL_WM_GrabInput(mode);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_VideoDriverName(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoDriverName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_VideoDriverName function, expected prototype:\nSDL_VideoDriverName(char *, int)");
	}

	char namebuf=(char)lua_tointeger(L,1);
	int maxlen=(int)lua_tointeger(L,2);

	char * lret = SDL_VideoDriverName(&namebuf, maxlen);
	lua_pushnumber(L,*lret);

	return 1;
}

static int _bind_SDL_GetVideoSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_GetVideoSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetVideoSurface function, expected prototype:\nSDL_GetVideoSurface()");
	}


	SDL_Surface * lret = SDL_GetVideoSurface();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_GetVideoInfo(lua_State *L) {
	if (!_lg_typecheck_SDL_GetVideoInfo(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetVideoInfo function, expected prototype:\nSDL_GetVideoInfo()");
	}


	const SDL_VideoInfo * lret = SDL_GetVideoInfo();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_VideoInfo >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_VideoModeOK(lua_State *L) {
	if (!_lg_typecheck_SDL_VideoModeOK(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_VideoModeOK function, expected prototype:\nSDL_VideoModeOK(int, int, int, unsigned int)");
	}

	int width=(int)lua_tointeger(L,1);
	int height=(int)lua_tointeger(L,2);
	int bpp=(int)lua_tointeger(L,3);
	unsigned int flags=(unsigned int)lua_tointeger(L,4);

	int lret = SDL_VideoModeOK(width, height, bpp, flags);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetVideoMode(lua_State *L) {
	if (!_lg_typecheck_SDL_SetVideoMode(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetVideoMode function, expected prototype:\nSDL_SetVideoMode(int, int, int, unsigned int)");
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

static int _bind_SDL_Flip(lua_State *L) {
	if (!_lg_typecheck_SDL_Flip(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_Flip function, expected prototype:\nSDL_Flip(SDL_Surface *)");
	}

	SDL_Surface* screen=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_Flip(screen);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetGamma(lua_State *L) {
	if (!_lg_typecheck_SDL_SetGamma(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetGamma function, expected prototype:\nSDL_SetGamma(float, float, float)");
	}

	float red=(float)lua_tonumber(L,1);
	float green=(float)lua_tonumber(L,2);
	float blue=(float)lua_tonumber(L,3);

	int lret = SDL_SetGamma(red, green, blue);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetGammaRamp(lua_State *L) {
	if (!_lg_typecheck_SDL_SetGammaRamp(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetGammaRamp function, expected prototype:\nSDL_SetGammaRamp(const Uint16 *, const Uint16 *, const Uint16 *)");
	}

	Uint16 red=(Uint16)lua_tointeger(L,1);
	Uint16 green=(Uint16)lua_tointeger(L,2);
	Uint16 blue=(Uint16)lua_tointeger(L,3);

	int lret = SDL_SetGammaRamp(&red, &green, &blue);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetGammaRamp(lua_State *L) {
	if (!_lg_typecheck_SDL_GetGammaRamp(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetGammaRamp function, expected prototype:\nSDL_GetGammaRamp(Uint16 *, Uint16 *, Uint16 *)");
	}

	Uint16 red=(Uint16)lua_tointeger(L,1);
	Uint16 green=(Uint16)lua_tointeger(L,2);
	Uint16 blue=(Uint16)lua_tointeger(L,3);

	int lret = SDL_GetGammaRamp(&red, &green, &blue);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetColors(lua_State *L) {
	if (!_lg_typecheck_SDL_SetColors(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetColors function, expected prototype:\nSDL_SetColors(SDL_Surface *, SDL_Color *, int, int)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	SDL_Color* colors=(Luna< SDL_Color >::check(L,2));
	int firstcolor=(int)lua_tointeger(L,3);
	int ncolors=(int)lua_tointeger(L,4);

	int lret = SDL_SetColors(surface, colors, firstcolor, ncolors);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetPalette(lua_State *L) {
	if (!_lg_typecheck_SDL_SetPalette(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetPalette function, expected prototype:\nSDL_SetPalette(SDL_Surface *, int, SDL_Color *, int, int)");
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

static int _bind_SDL_MapRGB(lua_State *L) {
	if (!_lg_typecheck_SDL_MapRGB(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_MapRGB function, expected prototype:\nSDL_MapRGB(const SDL_PixelFormat *const, const unsigned char, const unsigned char, const unsigned char)");
	}

	const SDL_PixelFormat* format=(Luna< SDL_PixelFormat >::check(L,1));
	unsigned char r = (unsigned char)(lua_tointeger(L,2));
	unsigned char g = (unsigned char)(lua_tointeger(L,3));
	unsigned char b = (unsigned char)(lua_tointeger(L,4));

	unsigned int lret = SDL_MapRGB(format, r, g, b);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_MapRGBA(lua_State *L) {
	if (!_lg_typecheck_SDL_MapRGBA(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_MapRGBA function, expected prototype:\nSDL_MapRGBA(const SDL_PixelFormat *const, const unsigned char, const unsigned char, const unsigned char, const unsigned char)");
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

static int _bind_SDL_GetRGB(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRGB(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetRGB function, expected prototype:\nSDL_GetRGB(unsigned int, const SDL_PixelFormat *const, unsigned char *, unsigned char *, unsigned char *)");
	}

	unsigned int pixel=(unsigned int)lua_tointeger(L,1);
	const SDL_PixelFormat* fmt=(Luna< SDL_PixelFormat >::check(L,2));
	unsigned char r = (unsigned char)(lua_tointeger(L,3));
	unsigned char g = (unsigned char)(lua_tointeger(L,4));
	unsigned char b = (unsigned char)(lua_tointeger(L,5));

	SDL_GetRGB(pixel, fmt, &r, &g, &b);

	return 0;
}

static int _bind_SDL_GetRGBA(lua_State *L) {
	if (!_lg_typecheck_SDL_GetRGBA(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetRGBA function, expected prototype:\nSDL_GetRGBA(unsigned int, const SDL_PixelFormat *const, unsigned char *, unsigned char *, unsigned char *, unsigned char *)");
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

static int _bind_SDL_CreateRGBSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateRGBSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateRGBSurface function, expected prototype:\nSDL_CreateRGBSurface(unsigned int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int)");
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

static int _bind_SDL_CreateRGBSurfaceFrom(lua_State *L) {
	if (!_lg_typecheck_SDL_CreateRGBSurfaceFrom(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_CreateRGBSurfaceFrom function, expected prototype:\nSDL_CreateRGBSurfaceFrom(void *, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int)");
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

static int _bind_SDL_FreeSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_FreeSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_FreeSurface function, expected prototype:\nSDL_FreeSurface(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_FreeSurface(surface);

	return 0;
}

static int _bind_SDL_LockSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_LockSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LockSurface function, expected prototype:\nSDL_LockSurface(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	int lret = SDL_LockSurface(surface);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_UnlockSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_UnlockSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UnlockSurface function, expected prototype:\nSDL_UnlockSurface(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_UnlockSurface(surface);

	return 0;
}

static int _bind_SDL_SetColorKey(lua_State *L) {
	if (!_lg_typecheck_SDL_SetColorKey(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetColorKey function, expected prototype:\nSDL_SetColorKey(SDL_Surface *, unsigned int, unsigned int)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	unsigned int flag=(unsigned int)lua_tointeger(L,2);
	unsigned int key=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_SetColorKey(surface, flag, key);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetAlpha(lua_State *L) {
	if (!_lg_typecheck_SDL_SetAlpha(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetAlpha function, expected prototype:\nSDL_SetAlpha(SDL_Surface *, unsigned int, unsigned char)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	unsigned int flag=(unsigned int)lua_tointeger(L,2);
	unsigned char alpha = (unsigned char)(lua_tointeger(L,3));

	int lret = SDL_SetAlpha(surface, flag, alpha);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_SetClipRect(lua_State *L) {
	if (!_lg_typecheck_SDL_SetClipRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SetClipRect function, expected prototype:\nSDL_SetClipRect(SDL_Surface *, const SDL_Rect *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	const SDL_Rect* rect=(Luna< SDL_Rect >::check(L,2));

	int lret = SDL_SetClipRect(surface, rect);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_GetClipRect(lua_State *L) {
	if (!_lg_typecheck_SDL_GetClipRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_GetClipRect function, expected prototype:\nSDL_GetClipRect(SDL_Surface *, SDL_Rect *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* rect=(Luna< SDL_Rect >::check(L,2));

	SDL_GetClipRect(surface, rect);

	return 0;
}

static int _bind_SDL_ConvertSurface(lua_State *L) {
	if (!_lg_typecheck_SDL_ConvertSurface(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_ConvertSurface function, expected prototype:\nSDL_ConvertSurface(SDL_Surface *, SDL_PixelFormat *, unsigned int)");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_PixelFormat* fmt=(Luna< SDL_PixelFormat >::check(L,2));
	unsigned int flags=(unsigned int)lua_tointeger(L,3);

	SDL_Surface * lret = SDL_ConvertSurface(src, fmt, flags);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_UpperBlit(lua_State *L) {
	if (!_lg_typecheck_SDL_UpperBlit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_UpperBlit function, expected prototype:\nSDL_UpperBlit(SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* srcrect=(Luna< SDL_Rect >::check(L,2));
	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,3));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,4));

	int lret = SDL_UpperBlit(src, srcrect, dst, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_LowerBlit(lua_State *L) {
	if (!_lg_typecheck_SDL_LowerBlit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_LowerBlit function, expected prototype:\nSDL_LowerBlit(SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)");
	}

	SDL_Surface* src=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* srcrect=(Luna< SDL_Rect >::check(L,2));
	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,3));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,4));

	int lret = SDL_LowerBlit(src, srcrect, dst, dstrect);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_FillRect(lua_State *L) {
	if (!_lg_typecheck_SDL_FillRect(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_FillRect function, expected prototype:\nSDL_FillRect(SDL_Surface *, SDL_Rect *, unsigned int)");
	}

	SDL_Surface* dst=(Luna< SDL_Surface >::check(L,1));
	SDL_Rect* dstrect=(Luna< SDL_Rect >::check(L,2));
	unsigned int color=(unsigned int)lua_tointeger(L,3);

	int lret = SDL_FillRect(dst, dstrect, color);
	lua_pushnumber(L,lret);

	return 1;
}

static int _bind_SDL_DisplayFormat(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayFormat(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DisplayFormat function, expected prototype:\nSDL_DisplayFormat(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_Surface * lret = SDL_DisplayFormat(surface);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_DisplayFormatAlpha(lua_State *L) {
	if (!_lg_typecheck_SDL_DisplayFormatAlpha(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_DisplayFormatAlpha function, expected prototype:\nSDL_DisplayFormatAlpha(SDL_Surface *)");
	}

	SDL_Surface* surface=(Luna< SDL_Surface >::check(L,1));

	SDL_Surface * lret = SDL_DisplayFormatAlpha(surface);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< SDL_Surface >::push(L,lret,false);

	return 1;
}

static int _bind_SDL_SoftStretch(lua_State *L) {
	if (!_lg_typecheck_SDL_SoftStretch(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in SDL_SoftStretch function, expected prototype:\nSDL_SoftStretch(SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)");
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

