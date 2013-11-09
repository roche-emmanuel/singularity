#include <plug_common.h>

#include <SDL_audio.h>
#include <SDL_cdrom.h>
#include <SDL_error.h>
#include <SDL_events.h>
#include <SDL_keysym.h>
#include <SDL_video.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum SDL_audiostatus

	lua_pushnumber(L,::SDL_AUDIO_STOPPED); lua_setfield(L,-2,"SDL_AUDIO_STOPPED");
	lua_pushnumber(L,::SDL_AUDIO_PLAYING); lua_setfield(L,-2,"SDL_AUDIO_PLAYING");
	lua_pushnumber(L,::SDL_AUDIO_PAUSED); lua_setfield(L,-2,"SDL_AUDIO_PAUSED");

	lua_setfield(L,-2,"SDL_audiostatus");

	lua_pushnumber(L,::SDL_AUDIO_STOPPED); lua_setfield(L,-2,"SDL_AUDIO_STOPPED");
	lua_pushnumber(L,::SDL_AUDIO_PLAYING); lua_setfield(L,-2,"SDL_AUDIO_PLAYING");
	lua_pushnumber(L,::SDL_AUDIO_PAUSED); lua_setfield(L,-2,"SDL_AUDIO_PAUSED");


	lua_newtable(L); // enum CDstatus

	lua_pushnumber(L,::CD_TRAYEMPTY); lua_setfield(L,-2,"CD_TRAYEMPTY");
	lua_pushnumber(L,::CD_STOPPED); lua_setfield(L,-2,"CD_STOPPED");
	lua_pushnumber(L,::CD_PLAYING); lua_setfield(L,-2,"CD_PLAYING");
	lua_pushnumber(L,::CD_PAUSED); lua_setfield(L,-2,"CD_PAUSED");
	lua_pushnumber(L,::CD_ERROR); lua_setfield(L,-2,"CD_ERROR");

	lua_setfield(L,-2,"CDstatus");

	lua_pushnumber(L,::CD_TRAYEMPTY); lua_setfield(L,-2,"CD_TRAYEMPTY");
	lua_pushnumber(L,::CD_STOPPED); lua_setfield(L,-2,"CD_STOPPED");
	lua_pushnumber(L,::CD_PLAYING); lua_setfield(L,-2,"CD_PLAYING");
	lua_pushnumber(L,::CD_PAUSED); lua_setfield(L,-2,"CD_PAUSED");
	lua_pushnumber(L,::CD_ERROR); lua_setfield(L,-2,"CD_ERROR");


	lua_newtable(L); // enum SDL_errorcode

	lua_pushnumber(L,::SDL_ENOMEM); lua_setfield(L,-2,"SDL_ENOMEM");
	lua_pushnumber(L,::SDL_EFREAD); lua_setfield(L,-2,"SDL_EFREAD");
	lua_pushnumber(L,::SDL_EFWRITE); lua_setfield(L,-2,"SDL_EFWRITE");
	lua_pushnumber(L,::SDL_EFSEEK); lua_setfield(L,-2,"SDL_EFSEEK");
	lua_pushnumber(L,::SDL_UNSUPPORTED); lua_setfield(L,-2,"SDL_UNSUPPORTED");
	lua_pushnumber(L,::SDL_LASTERROR); lua_setfield(L,-2,"SDL_LASTERROR");

	lua_setfield(L,-2,"SDL_errorcode");

	lua_pushnumber(L,::SDL_ENOMEM); lua_setfield(L,-2,"SDL_ENOMEM");
	lua_pushnumber(L,::SDL_EFREAD); lua_setfield(L,-2,"SDL_EFREAD");
	lua_pushnumber(L,::SDL_EFWRITE); lua_setfield(L,-2,"SDL_EFWRITE");
	lua_pushnumber(L,::SDL_EFSEEK); lua_setfield(L,-2,"SDL_EFSEEK");
	lua_pushnumber(L,::SDL_UNSUPPORTED); lua_setfield(L,-2,"SDL_UNSUPPORTED");
	lua_pushnumber(L,::SDL_LASTERROR); lua_setfield(L,-2,"SDL_LASTERROR");


	lua_newtable(L); // enum SDL_EventMask

	lua_pushnumber(L,::SDL_ACTIVEEVENTMASK); lua_setfield(L,-2,"SDL_ACTIVEEVENTMASK");
	lua_pushnumber(L,::SDL_KEYDOWNMASK); lua_setfield(L,-2,"SDL_KEYDOWNMASK");
	lua_pushnumber(L,::SDL_KEYUPMASK); lua_setfield(L,-2,"SDL_KEYUPMASK");
	lua_pushnumber(L,::SDL_KEYEVENTMASK); lua_setfield(L,-2,"SDL_KEYEVENTMASK");
	lua_pushnumber(L,::SDL_MOUSEMOTIONMASK); lua_setfield(L,-2,"SDL_MOUSEMOTIONMASK");
	lua_pushnumber(L,::SDL_MOUSEBUTTONDOWNMASK); lua_setfield(L,-2,"SDL_MOUSEBUTTONDOWNMASK");
	lua_pushnumber(L,::SDL_MOUSEBUTTONUPMASK); lua_setfield(L,-2,"SDL_MOUSEBUTTONUPMASK");
	lua_pushnumber(L,::SDL_MOUSEEVENTMASK); lua_setfield(L,-2,"SDL_MOUSEEVENTMASK");
	lua_pushnumber(L,::SDL_JOYAXISMOTIONMASK); lua_setfield(L,-2,"SDL_JOYAXISMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYBALLMOTIONMASK); lua_setfield(L,-2,"SDL_JOYBALLMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYHATMOTIONMASK); lua_setfield(L,-2,"SDL_JOYHATMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYBUTTONDOWNMASK); lua_setfield(L,-2,"SDL_JOYBUTTONDOWNMASK");
	lua_pushnumber(L,::SDL_JOYBUTTONUPMASK); lua_setfield(L,-2,"SDL_JOYBUTTONUPMASK");
	lua_pushnumber(L,::SDL_JOYEVENTMASK); lua_setfield(L,-2,"SDL_JOYEVENTMASK");
	lua_pushnumber(L,::SDL_VIDEORESIZEMASK); lua_setfield(L,-2,"SDL_VIDEORESIZEMASK");
	lua_pushnumber(L,::SDL_VIDEOEXPOSEMASK); lua_setfield(L,-2,"SDL_VIDEOEXPOSEMASK");
	lua_pushnumber(L,::SDL_QUITMASK); lua_setfield(L,-2,"SDL_QUITMASK");
	lua_pushnumber(L,::SDL_SYSWMEVENTMASK); lua_setfield(L,-2,"SDL_SYSWMEVENTMASK");

	lua_setfield(L,-2,"SDL_EventMask");

	lua_pushnumber(L,::SDL_ACTIVEEVENTMASK); lua_setfield(L,-2,"SDL_ACTIVEEVENTMASK");
	lua_pushnumber(L,::SDL_KEYDOWNMASK); lua_setfield(L,-2,"SDL_KEYDOWNMASK");
	lua_pushnumber(L,::SDL_KEYUPMASK); lua_setfield(L,-2,"SDL_KEYUPMASK");
	lua_pushnumber(L,::SDL_KEYEVENTMASK); lua_setfield(L,-2,"SDL_KEYEVENTMASK");
	lua_pushnumber(L,::SDL_MOUSEMOTIONMASK); lua_setfield(L,-2,"SDL_MOUSEMOTIONMASK");
	lua_pushnumber(L,::SDL_MOUSEBUTTONDOWNMASK); lua_setfield(L,-2,"SDL_MOUSEBUTTONDOWNMASK");
	lua_pushnumber(L,::SDL_MOUSEBUTTONUPMASK); lua_setfield(L,-2,"SDL_MOUSEBUTTONUPMASK");
	lua_pushnumber(L,::SDL_MOUSEEVENTMASK); lua_setfield(L,-2,"SDL_MOUSEEVENTMASK");
	lua_pushnumber(L,::SDL_JOYAXISMOTIONMASK); lua_setfield(L,-2,"SDL_JOYAXISMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYBALLMOTIONMASK); lua_setfield(L,-2,"SDL_JOYBALLMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYHATMOTIONMASK); lua_setfield(L,-2,"SDL_JOYHATMOTIONMASK");
	lua_pushnumber(L,::SDL_JOYBUTTONDOWNMASK); lua_setfield(L,-2,"SDL_JOYBUTTONDOWNMASK");
	lua_pushnumber(L,::SDL_JOYBUTTONUPMASK); lua_setfield(L,-2,"SDL_JOYBUTTONUPMASK");
	lua_pushnumber(L,::SDL_JOYEVENTMASK); lua_setfield(L,-2,"SDL_JOYEVENTMASK");
	lua_pushnumber(L,::SDL_VIDEORESIZEMASK); lua_setfield(L,-2,"SDL_VIDEORESIZEMASK");
	lua_pushnumber(L,::SDL_VIDEOEXPOSEMASK); lua_setfield(L,-2,"SDL_VIDEOEXPOSEMASK");
	lua_pushnumber(L,::SDL_QUITMASK); lua_setfield(L,-2,"SDL_QUITMASK");
	lua_pushnumber(L,::SDL_SYSWMEVENTMASK); lua_setfield(L,-2,"SDL_SYSWMEVENTMASK");


	lua_newtable(L); // enum SDL_EventType

	lua_pushnumber(L,::SDL_NOEVENT); lua_setfield(L,-2,"SDL_NOEVENT");
	lua_pushnumber(L,::SDL_ACTIVEEVENT); lua_setfield(L,-2,"SDL_ACTIVEEVENT");
	lua_pushnumber(L,::SDL_KEYDOWN); lua_setfield(L,-2,"SDL_KEYDOWN");
	lua_pushnumber(L,::SDL_KEYUP); lua_setfield(L,-2,"SDL_KEYUP");
	lua_pushnumber(L,::SDL_MOUSEMOTION); lua_setfield(L,-2,"SDL_MOUSEMOTION");
	lua_pushnumber(L,::SDL_MOUSEBUTTONDOWN); lua_setfield(L,-2,"SDL_MOUSEBUTTONDOWN");
	lua_pushnumber(L,::SDL_MOUSEBUTTONUP); lua_setfield(L,-2,"SDL_MOUSEBUTTONUP");
	lua_pushnumber(L,::SDL_JOYAXISMOTION); lua_setfield(L,-2,"SDL_JOYAXISMOTION");
	lua_pushnumber(L,::SDL_JOYBALLMOTION); lua_setfield(L,-2,"SDL_JOYBALLMOTION");
	lua_pushnumber(L,::SDL_JOYHATMOTION); lua_setfield(L,-2,"SDL_JOYHATMOTION");
	lua_pushnumber(L,::SDL_JOYBUTTONDOWN); lua_setfield(L,-2,"SDL_JOYBUTTONDOWN");
	lua_pushnumber(L,::SDL_JOYBUTTONUP); lua_setfield(L,-2,"SDL_JOYBUTTONUP");
	lua_pushnumber(L,::SDL_QUIT); lua_setfield(L,-2,"SDL_QUIT");
	lua_pushnumber(L,::SDL_SYSWMEVENT); lua_setfield(L,-2,"SDL_SYSWMEVENT");
	lua_pushnumber(L,::SDL_EVENT_RESERVEDA); lua_setfield(L,-2,"SDL_EVENT_RESERVEDA");
	lua_pushnumber(L,::SDL_EVENT_RESERVEDB); lua_setfield(L,-2,"SDL_EVENT_RESERVEDB");
	lua_pushnumber(L,::SDL_VIDEORESIZE); lua_setfield(L,-2,"SDL_VIDEORESIZE");
	lua_pushnumber(L,::SDL_VIDEOEXPOSE); lua_setfield(L,-2,"SDL_VIDEOEXPOSE");
	lua_pushnumber(L,::SDL_EVENT_RESERVED2); lua_setfield(L,-2,"SDL_EVENT_RESERVED2");
	lua_pushnumber(L,::SDL_EVENT_RESERVED3); lua_setfield(L,-2,"SDL_EVENT_RESERVED3");
	lua_pushnumber(L,::SDL_EVENT_RESERVED4); lua_setfield(L,-2,"SDL_EVENT_RESERVED4");
	lua_pushnumber(L,::SDL_EVENT_RESERVED5); lua_setfield(L,-2,"SDL_EVENT_RESERVED5");
	lua_pushnumber(L,::SDL_EVENT_RESERVED6); lua_setfield(L,-2,"SDL_EVENT_RESERVED6");
	lua_pushnumber(L,::SDL_EVENT_RESERVED7); lua_setfield(L,-2,"SDL_EVENT_RESERVED7");
	lua_pushnumber(L,::SDL_USEREVENT); lua_setfield(L,-2,"SDL_USEREVENT");
	lua_pushnumber(L,::SDL_NUMEVENTS); lua_setfield(L,-2,"SDL_NUMEVENTS");

	lua_setfield(L,-2,"SDL_EventType");

	lua_pushnumber(L,::SDL_NOEVENT); lua_setfield(L,-2,"SDL_NOEVENT");
	lua_pushnumber(L,::SDL_ACTIVEEVENT); lua_setfield(L,-2,"SDL_ACTIVEEVENT");
	lua_pushnumber(L,::SDL_KEYDOWN); lua_setfield(L,-2,"SDL_KEYDOWN");
	lua_pushnumber(L,::SDL_KEYUP); lua_setfield(L,-2,"SDL_KEYUP");
	lua_pushnumber(L,::SDL_MOUSEMOTION); lua_setfield(L,-2,"SDL_MOUSEMOTION");
	lua_pushnumber(L,::SDL_MOUSEBUTTONDOWN); lua_setfield(L,-2,"SDL_MOUSEBUTTONDOWN");
	lua_pushnumber(L,::SDL_MOUSEBUTTONUP); lua_setfield(L,-2,"SDL_MOUSEBUTTONUP");
	lua_pushnumber(L,::SDL_JOYAXISMOTION); lua_setfield(L,-2,"SDL_JOYAXISMOTION");
	lua_pushnumber(L,::SDL_JOYBALLMOTION); lua_setfield(L,-2,"SDL_JOYBALLMOTION");
	lua_pushnumber(L,::SDL_JOYHATMOTION); lua_setfield(L,-2,"SDL_JOYHATMOTION");
	lua_pushnumber(L,::SDL_JOYBUTTONDOWN); lua_setfield(L,-2,"SDL_JOYBUTTONDOWN");
	lua_pushnumber(L,::SDL_JOYBUTTONUP); lua_setfield(L,-2,"SDL_JOYBUTTONUP");
	lua_pushnumber(L,::SDL_QUIT); lua_setfield(L,-2,"SDL_QUIT");
	lua_pushnumber(L,::SDL_SYSWMEVENT); lua_setfield(L,-2,"SDL_SYSWMEVENT");
	lua_pushnumber(L,::SDL_EVENT_RESERVEDA); lua_setfield(L,-2,"SDL_EVENT_RESERVEDA");
	lua_pushnumber(L,::SDL_EVENT_RESERVEDB); lua_setfield(L,-2,"SDL_EVENT_RESERVEDB");
	lua_pushnumber(L,::SDL_VIDEORESIZE); lua_setfield(L,-2,"SDL_VIDEORESIZE");
	lua_pushnumber(L,::SDL_VIDEOEXPOSE); lua_setfield(L,-2,"SDL_VIDEOEXPOSE");
	lua_pushnumber(L,::SDL_EVENT_RESERVED2); lua_setfield(L,-2,"SDL_EVENT_RESERVED2");
	lua_pushnumber(L,::SDL_EVENT_RESERVED3); lua_setfield(L,-2,"SDL_EVENT_RESERVED3");
	lua_pushnumber(L,::SDL_EVENT_RESERVED4); lua_setfield(L,-2,"SDL_EVENT_RESERVED4");
	lua_pushnumber(L,::SDL_EVENT_RESERVED5); lua_setfield(L,-2,"SDL_EVENT_RESERVED5");
	lua_pushnumber(L,::SDL_EVENT_RESERVED6); lua_setfield(L,-2,"SDL_EVENT_RESERVED6");
	lua_pushnumber(L,::SDL_EVENT_RESERVED7); lua_setfield(L,-2,"SDL_EVENT_RESERVED7");
	lua_pushnumber(L,::SDL_USEREVENT); lua_setfield(L,-2,"SDL_USEREVENT");
	lua_pushnumber(L,::SDL_NUMEVENTS); lua_setfield(L,-2,"SDL_NUMEVENTS");


	lua_newtable(L); // enum SDL_eventaction

	lua_pushnumber(L,::SDL_ADDEVENT); lua_setfield(L,-2,"SDL_ADDEVENT");
	lua_pushnumber(L,::SDL_PEEKEVENT); lua_setfield(L,-2,"SDL_PEEKEVENT");
	lua_pushnumber(L,::SDL_GETEVENT); lua_setfield(L,-2,"SDL_GETEVENT");

	lua_setfield(L,-2,"SDL_eventaction");

	lua_pushnumber(L,::SDL_ADDEVENT); lua_setfield(L,-2,"SDL_ADDEVENT");
	lua_pushnumber(L,::SDL_PEEKEVENT); lua_setfield(L,-2,"SDL_PEEKEVENT");
	lua_pushnumber(L,::SDL_GETEVENT); lua_setfield(L,-2,"SDL_GETEVENT");


	lua_newtable(L); // enum SDLKey

	lua_pushnumber(L,::SDLK_UNKNOWN); lua_setfield(L,-2,"SDLK_UNKNOWN");
	lua_pushnumber(L,::SDLK_FIRST); lua_setfield(L,-2,"SDLK_FIRST");
	lua_pushnumber(L,::SDLK_BACKSPACE); lua_setfield(L,-2,"SDLK_BACKSPACE");
	lua_pushnumber(L,::SDLK_TAB); lua_setfield(L,-2,"SDLK_TAB");
	lua_pushnumber(L,::SDLK_CLEAR); lua_setfield(L,-2,"SDLK_CLEAR");
	lua_pushnumber(L,::SDLK_RETURN); lua_setfield(L,-2,"SDLK_RETURN");
	lua_pushnumber(L,::SDLK_PAUSE); lua_setfield(L,-2,"SDLK_PAUSE");
	lua_pushnumber(L,::SDLK_ESCAPE); lua_setfield(L,-2,"SDLK_ESCAPE");
	lua_pushnumber(L,::SDLK_SPACE); lua_setfield(L,-2,"SDLK_SPACE");
	lua_pushnumber(L,::SDLK_EXCLAIM); lua_setfield(L,-2,"SDLK_EXCLAIM");
	lua_pushnumber(L,::SDLK_QUOTEDBL); lua_setfield(L,-2,"SDLK_QUOTEDBL");
	lua_pushnumber(L,::SDLK_HASH); lua_setfield(L,-2,"SDLK_HASH");
	lua_pushnumber(L,::SDLK_DOLLAR); lua_setfield(L,-2,"SDLK_DOLLAR");
	lua_pushnumber(L,::SDLK_AMPERSAND); lua_setfield(L,-2,"SDLK_AMPERSAND");
	lua_pushnumber(L,::SDLK_QUOTE); lua_setfield(L,-2,"SDLK_QUOTE");
	lua_pushnumber(L,::SDLK_LEFTPAREN); lua_setfield(L,-2,"SDLK_LEFTPAREN");
	lua_pushnumber(L,::SDLK_RIGHTPAREN); lua_setfield(L,-2,"SDLK_RIGHTPAREN");
	lua_pushnumber(L,::SDLK_ASTERISK); lua_setfield(L,-2,"SDLK_ASTERISK");
	lua_pushnumber(L,::SDLK_PLUS); lua_setfield(L,-2,"SDLK_PLUS");
	lua_pushnumber(L,::SDLK_COMMA); lua_setfield(L,-2,"SDLK_COMMA");
	lua_pushnumber(L,::SDLK_MINUS); lua_setfield(L,-2,"SDLK_MINUS");
	lua_pushnumber(L,::SDLK_PERIOD); lua_setfield(L,-2,"SDLK_PERIOD");
	lua_pushnumber(L,::SDLK_SLASH); lua_setfield(L,-2,"SDLK_SLASH");
	lua_pushnumber(L,::SDLK_0); lua_setfield(L,-2,"SDLK_0");
	lua_pushnumber(L,::SDLK_1); lua_setfield(L,-2,"SDLK_1");
	lua_pushnumber(L,::SDLK_2); lua_setfield(L,-2,"SDLK_2");
	lua_pushnumber(L,::SDLK_3); lua_setfield(L,-2,"SDLK_3");
	lua_pushnumber(L,::SDLK_4); lua_setfield(L,-2,"SDLK_4");
	lua_pushnumber(L,::SDLK_5); lua_setfield(L,-2,"SDLK_5");
	lua_pushnumber(L,::SDLK_6); lua_setfield(L,-2,"SDLK_6");
	lua_pushnumber(L,::SDLK_7); lua_setfield(L,-2,"SDLK_7");
	lua_pushnumber(L,::SDLK_8); lua_setfield(L,-2,"SDLK_8");
	lua_pushnumber(L,::SDLK_9); lua_setfield(L,-2,"SDLK_9");
	lua_pushnumber(L,::SDLK_COLON); lua_setfield(L,-2,"SDLK_COLON");
	lua_pushnumber(L,::SDLK_SEMICOLON); lua_setfield(L,-2,"SDLK_SEMICOLON");
	lua_pushnumber(L,::SDLK_LESS); lua_setfield(L,-2,"SDLK_LESS");
	lua_pushnumber(L,::SDLK_EQUALS); lua_setfield(L,-2,"SDLK_EQUALS");
	lua_pushnumber(L,::SDLK_GREATER); lua_setfield(L,-2,"SDLK_GREATER");
	lua_pushnumber(L,::SDLK_QUESTION); lua_setfield(L,-2,"SDLK_QUESTION");
	lua_pushnumber(L,::SDLK_AT); lua_setfield(L,-2,"SDLK_AT");
	lua_pushnumber(L,::SDLK_LEFTBRACKET); lua_setfield(L,-2,"SDLK_LEFTBRACKET");
	lua_pushnumber(L,::SDLK_BACKSLASH); lua_setfield(L,-2,"SDLK_BACKSLASH");
	lua_pushnumber(L,::SDLK_RIGHTBRACKET); lua_setfield(L,-2,"SDLK_RIGHTBRACKET");
	lua_pushnumber(L,::SDLK_CARET); lua_setfield(L,-2,"SDLK_CARET");
	lua_pushnumber(L,::SDLK_UNDERSCORE); lua_setfield(L,-2,"SDLK_UNDERSCORE");
	lua_pushnumber(L,::SDLK_BACKQUOTE); lua_setfield(L,-2,"SDLK_BACKQUOTE");
	lua_pushnumber(L,::SDLK_a); lua_setfield(L,-2,"SDLK_a");
	lua_pushnumber(L,::SDLK_b); lua_setfield(L,-2,"SDLK_b");
	lua_pushnumber(L,::SDLK_c); lua_setfield(L,-2,"SDLK_c");
	lua_pushnumber(L,::SDLK_d); lua_setfield(L,-2,"SDLK_d");
	lua_pushnumber(L,::SDLK_e); lua_setfield(L,-2,"SDLK_e");
	lua_pushnumber(L,::SDLK_f); lua_setfield(L,-2,"SDLK_f");
	lua_pushnumber(L,::SDLK_g); lua_setfield(L,-2,"SDLK_g");
	lua_pushnumber(L,::SDLK_h); lua_setfield(L,-2,"SDLK_h");
	lua_pushnumber(L,::SDLK_i); lua_setfield(L,-2,"SDLK_i");
	lua_pushnumber(L,::SDLK_j); lua_setfield(L,-2,"SDLK_j");
	lua_pushnumber(L,::SDLK_k); lua_setfield(L,-2,"SDLK_k");
	lua_pushnumber(L,::SDLK_l); lua_setfield(L,-2,"SDLK_l");
	lua_pushnumber(L,::SDLK_m); lua_setfield(L,-2,"SDLK_m");
	lua_pushnumber(L,::SDLK_n); lua_setfield(L,-2,"SDLK_n");
	lua_pushnumber(L,::SDLK_o); lua_setfield(L,-2,"SDLK_o");
	lua_pushnumber(L,::SDLK_p); lua_setfield(L,-2,"SDLK_p");
	lua_pushnumber(L,::SDLK_q); lua_setfield(L,-2,"SDLK_q");
	lua_pushnumber(L,::SDLK_r); lua_setfield(L,-2,"SDLK_r");
	lua_pushnumber(L,::SDLK_s); lua_setfield(L,-2,"SDLK_s");
	lua_pushnumber(L,::SDLK_t); lua_setfield(L,-2,"SDLK_t");
	lua_pushnumber(L,::SDLK_u); lua_setfield(L,-2,"SDLK_u");
	lua_pushnumber(L,::SDLK_v); lua_setfield(L,-2,"SDLK_v");
	lua_pushnumber(L,::SDLK_w); lua_setfield(L,-2,"SDLK_w");
	lua_pushnumber(L,::SDLK_x); lua_setfield(L,-2,"SDLK_x");
	lua_pushnumber(L,::SDLK_y); lua_setfield(L,-2,"SDLK_y");
	lua_pushnumber(L,::SDLK_z); lua_setfield(L,-2,"SDLK_z");
	lua_pushnumber(L,::SDLK_DELETE); lua_setfield(L,-2,"SDLK_DELETE");
	lua_pushnumber(L,::SDLK_WORLD_0); lua_setfield(L,-2,"SDLK_WORLD_0");
	lua_pushnumber(L,::SDLK_WORLD_1); lua_setfield(L,-2,"SDLK_WORLD_1");
	lua_pushnumber(L,::SDLK_WORLD_2); lua_setfield(L,-2,"SDLK_WORLD_2");
	lua_pushnumber(L,::SDLK_WORLD_3); lua_setfield(L,-2,"SDLK_WORLD_3");
	lua_pushnumber(L,::SDLK_WORLD_4); lua_setfield(L,-2,"SDLK_WORLD_4");
	lua_pushnumber(L,::SDLK_WORLD_5); lua_setfield(L,-2,"SDLK_WORLD_5");
	lua_pushnumber(L,::SDLK_WORLD_6); lua_setfield(L,-2,"SDLK_WORLD_6");
	lua_pushnumber(L,::SDLK_WORLD_7); lua_setfield(L,-2,"SDLK_WORLD_7");
	lua_pushnumber(L,::SDLK_WORLD_8); lua_setfield(L,-2,"SDLK_WORLD_8");
	lua_pushnumber(L,::SDLK_WORLD_9); lua_setfield(L,-2,"SDLK_WORLD_9");
	lua_pushnumber(L,::SDLK_WORLD_10); lua_setfield(L,-2,"SDLK_WORLD_10");
	lua_pushnumber(L,::SDLK_WORLD_11); lua_setfield(L,-2,"SDLK_WORLD_11");
	lua_pushnumber(L,::SDLK_WORLD_12); lua_setfield(L,-2,"SDLK_WORLD_12");
	lua_pushnumber(L,::SDLK_WORLD_13); lua_setfield(L,-2,"SDLK_WORLD_13");
	lua_pushnumber(L,::SDLK_WORLD_14); lua_setfield(L,-2,"SDLK_WORLD_14");
	lua_pushnumber(L,::SDLK_WORLD_15); lua_setfield(L,-2,"SDLK_WORLD_15");
	lua_pushnumber(L,::SDLK_WORLD_16); lua_setfield(L,-2,"SDLK_WORLD_16");
	lua_pushnumber(L,::SDLK_WORLD_17); lua_setfield(L,-2,"SDLK_WORLD_17");
	lua_pushnumber(L,::SDLK_WORLD_18); lua_setfield(L,-2,"SDLK_WORLD_18");
	lua_pushnumber(L,::SDLK_WORLD_19); lua_setfield(L,-2,"SDLK_WORLD_19");
	lua_pushnumber(L,::SDLK_WORLD_20); lua_setfield(L,-2,"SDLK_WORLD_20");
	lua_pushnumber(L,::SDLK_WORLD_21); lua_setfield(L,-2,"SDLK_WORLD_21");
	lua_pushnumber(L,::SDLK_WORLD_22); lua_setfield(L,-2,"SDLK_WORLD_22");
	lua_pushnumber(L,::SDLK_WORLD_23); lua_setfield(L,-2,"SDLK_WORLD_23");
	lua_pushnumber(L,::SDLK_WORLD_24); lua_setfield(L,-2,"SDLK_WORLD_24");
	lua_pushnumber(L,::SDLK_WORLD_25); lua_setfield(L,-2,"SDLK_WORLD_25");
	lua_pushnumber(L,::SDLK_WORLD_26); lua_setfield(L,-2,"SDLK_WORLD_26");
	lua_pushnumber(L,::SDLK_WORLD_27); lua_setfield(L,-2,"SDLK_WORLD_27");
	lua_pushnumber(L,::SDLK_WORLD_28); lua_setfield(L,-2,"SDLK_WORLD_28");
	lua_pushnumber(L,::SDLK_WORLD_29); lua_setfield(L,-2,"SDLK_WORLD_29");
	lua_pushnumber(L,::SDLK_WORLD_30); lua_setfield(L,-2,"SDLK_WORLD_30");
	lua_pushnumber(L,::SDLK_WORLD_31); lua_setfield(L,-2,"SDLK_WORLD_31");
	lua_pushnumber(L,::SDLK_WORLD_32); lua_setfield(L,-2,"SDLK_WORLD_32");
	lua_pushnumber(L,::SDLK_WORLD_33); lua_setfield(L,-2,"SDLK_WORLD_33");
	lua_pushnumber(L,::SDLK_WORLD_34); lua_setfield(L,-2,"SDLK_WORLD_34");
	lua_pushnumber(L,::SDLK_WORLD_35); lua_setfield(L,-2,"SDLK_WORLD_35");
	lua_pushnumber(L,::SDLK_WORLD_36); lua_setfield(L,-2,"SDLK_WORLD_36");
	lua_pushnumber(L,::SDLK_WORLD_37); lua_setfield(L,-2,"SDLK_WORLD_37");
	lua_pushnumber(L,::SDLK_WORLD_38); lua_setfield(L,-2,"SDLK_WORLD_38");
	lua_pushnumber(L,::SDLK_WORLD_39); lua_setfield(L,-2,"SDLK_WORLD_39");
	lua_pushnumber(L,::SDLK_WORLD_40); lua_setfield(L,-2,"SDLK_WORLD_40");
	lua_pushnumber(L,::SDLK_WORLD_41); lua_setfield(L,-2,"SDLK_WORLD_41");
	lua_pushnumber(L,::SDLK_WORLD_42); lua_setfield(L,-2,"SDLK_WORLD_42");
	lua_pushnumber(L,::SDLK_WORLD_43); lua_setfield(L,-2,"SDLK_WORLD_43");
	lua_pushnumber(L,::SDLK_WORLD_44); lua_setfield(L,-2,"SDLK_WORLD_44");
	lua_pushnumber(L,::SDLK_WORLD_45); lua_setfield(L,-2,"SDLK_WORLD_45");
	lua_pushnumber(L,::SDLK_WORLD_46); lua_setfield(L,-2,"SDLK_WORLD_46");
	lua_pushnumber(L,::SDLK_WORLD_47); lua_setfield(L,-2,"SDLK_WORLD_47");
	lua_pushnumber(L,::SDLK_WORLD_48); lua_setfield(L,-2,"SDLK_WORLD_48");
	lua_pushnumber(L,::SDLK_WORLD_49); lua_setfield(L,-2,"SDLK_WORLD_49");
	lua_pushnumber(L,::SDLK_WORLD_50); lua_setfield(L,-2,"SDLK_WORLD_50");
	lua_pushnumber(L,::SDLK_WORLD_51); lua_setfield(L,-2,"SDLK_WORLD_51");
	lua_pushnumber(L,::SDLK_WORLD_52); lua_setfield(L,-2,"SDLK_WORLD_52");
	lua_pushnumber(L,::SDLK_WORLD_53); lua_setfield(L,-2,"SDLK_WORLD_53");
	lua_pushnumber(L,::SDLK_WORLD_54); lua_setfield(L,-2,"SDLK_WORLD_54");
	lua_pushnumber(L,::SDLK_WORLD_55); lua_setfield(L,-2,"SDLK_WORLD_55");
	lua_pushnumber(L,::SDLK_WORLD_56); lua_setfield(L,-2,"SDLK_WORLD_56");
	lua_pushnumber(L,::SDLK_WORLD_57); lua_setfield(L,-2,"SDLK_WORLD_57");
	lua_pushnumber(L,::SDLK_WORLD_58); lua_setfield(L,-2,"SDLK_WORLD_58");
	lua_pushnumber(L,::SDLK_WORLD_59); lua_setfield(L,-2,"SDLK_WORLD_59");
	lua_pushnumber(L,::SDLK_WORLD_60); lua_setfield(L,-2,"SDLK_WORLD_60");
	lua_pushnumber(L,::SDLK_WORLD_61); lua_setfield(L,-2,"SDLK_WORLD_61");
	lua_pushnumber(L,::SDLK_WORLD_62); lua_setfield(L,-2,"SDLK_WORLD_62");
	lua_pushnumber(L,::SDLK_WORLD_63); lua_setfield(L,-2,"SDLK_WORLD_63");
	lua_pushnumber(L,::SDLK_WORLD_64); lua_setfield(L,-2,"SDLK_WORLD_64");
	lua_pushnumber(L,::SDLK_WORLD_65); lua_setfield(L,-2,"SDLK_WORLD_65");
	lua_pushnumber(L,::SDLK_WORLD_66); lua_setfield(L,-2,"SDLK_WORLD_66");
	lua_pushnumber(L,::SDLK_WORLD_67); lua_setfield(L,-2,"SDLK_WORLD_67");
	lua_pushnumber(L,::SDLK_WORLD_68); lua_setfield(L,-2,"SDLK_WORLD_68");
	lua_pushnumber(L,::SDLK_WORLD_69); lua_setfield(L,-2,"SDLK_WORLD_69");
	lua_pushnumber(L,::SDLK_WORLD_70); lua_setfield(L,-2,"SDLK_WORLD_70");
	lua_pushnumber(L,::SDLK_WORLD_71); lua_setfield(L,-2,"SDLK_WORLD_71");
	lua_pushnumber(L,::SDLK_WORLD_72); lua_setfield(L,-2,"SDLK_WORLD_72");
	lua_pushnumber(L,::SDLK_WORLD_73); lua_setfield(L,-2,"SDLK_WORLD_73");
	lua_pushnumber(L,::SDLK_WORLD_74); lua_setfield(L,-2,"SDLK_WORLD_74");
	lua_pushnumber(L,::SDLK_WORLD_75); lua_setfield(L,-2,"SDLK_WORLD_75");
	lua_pushnumber(L,::SDLK_WORLD_76); lua_setfield(L,-2,"SDLK_WORLD_76");
	lua_pushnumber(L,::SDLK_WORLD_77); lua_setfield(L,-2,"SDLK_WORLD_77");
	lua_pushnumber(L,::SDLK_WORLD_78); lua_setfield(L,-2,"SDLK_WORLD_78");
	lua_pushnumber(L,::SDLK_WORLD_79); lua_setfield(L,-2,"SDLK_WORLD_79");
	lua_pushnumber(L,::SDLK_WORLD_80); lua_setfield(L,-2,"SDLK_WORLD_80");
	lua_pushnumber(L,::SDLK_WORLD_81); lua_setfield(L,-2,"SDLK_WORLD_81");
	lua_pushnumber(L,::SDLK_WORLD_82); lua_setfield(L,-2,"SDLK_WORLD_82");
	lua_pushnumber(L,::SDLK_WORLD_83); lua_setfield(L,-2,"SDLK_WORLD_83");
	lua_pushnumber(L,::SDLK_WORLD_84); lua_setfield(L,-2,"SDLK_WORLD_84");
	lua_pushnumber(L,::SDLK_WORLD_85); lua_setfield(L,-2,"SDLK_WORLD_85");
	lua_pushnumber(L,::SDLK_WORLD_86); lua_setfield(L,-2,"SDLK_WORLD_86");
	lua_pushnumber(L,::SDLK_WORLD_87); lua_setfield(L,-2,"SDLK_WORLD_87");
	lua_pushnumber(L,::SDLK_WORLD_88); lua_setfield(L,-2,"SDLK_WORLD_88");
	lua_pushnumber(L,::SDLK_WORLD_89); lua_setfield(L,-2,"SDLK_WORLD_89");
	lua_pushnumber(L,::SDLK_WORLD_90); lua_setfield(L,-2,"SDLK_WORLD_90");
	lua_pushnumber(L,::SDLK_WORLD_91); lua_setfield(L,-2,"SDLK_WORLD_91");
	lua_pushnumber(L,::SDLK_WORLD_92); lua_setfield(L,-2,"SDLK_WORLD_92");
	lua_pushnumber(L,::SDLK_WORLD_93); lua_setfield(L,-2,"SDLK_WORLD_93");
	lua_pushnumber(L,::SDLK_WORLD_94); lua_setfield(L,-2,"SDLK_WORLD_94");
	lua_pushnumber(L,::SDLK_WORLD_95); lua_setfield(L,-2,"SDLK_WORLD_95");
	lua_pushnumber(L,::SDLK_KP0); lua_setfield(L,-2,"SDLK_KP0");
	lua_pushnumber(L,::SDLK_KP1); lua_setfield(L,-2,"SDLK_KP1");
	lua_pushnumber(L,::SDLK_KP2); lua_setfield(L,-2,"SDLK_KP2");
	lua_pushnumber(L,::SDLK_KP3); lua_setfield(L,-2,"SDLK_KP3");
	lua_pushnumber(L,::SDLK_KP4); lua_setfield(L,-2,"SDLK_KP4");
	lua_pushnumber(L,::SDLK_KP5); lua_setfield(L,-2,"SDLK_KP5");
	lua_pushnumber(L,::SDLK_KP6); lua_setfield(L,-2,"SDLK_KP6");
	lua_pushnumber(L,::SDLK_KP7); lua_setfield(L,-2,"SDLK_KP7");
	lua_pushnumber(L,::SDLK_KP8); lua_setfield(L,-2,"SDLK_KP8");
	lua_pushnumber(L,::SDLK_KP9); lua_setfield(L,-2,"SDLK_KP9");
	lua_pushnumber(L,::SDLK_KP_PERIOD); lua_setfield(L,-2,"SDLK_KP_PERIOD");
	lua_pushnumber(L,::SDLK_KP_DIVIDE); lua_setfield(L,-2,"SDLK_KP_DIVIDE");
	lua_pushnumber(L,::SDLK_KP_MULTIPLY); lua_setfield(L,-2,"SDLK_KP_MULTIPLY");
	lua_pushnumber(L,::SDLK_KP_MINUS); lua_setfield(L,-2,"SDLK_KP_MINUS");
	lua_pushnumber(L,::SDLK_KP_PLUS); lua_setfield(L,-2,"SDLK_KP_PLUS");
	lua_pushnumber(L,::SDLK_KP_ENTER); lua_setfield(L,-2,"SDLK_KP_ENTER");
	lua_pushnumber(L,::SDLK_KP_EQUALS); lua_setfield(L,-2,"SDLK_KP_EQUALS");
	lua_pushnumber(L,::SDLK_UP); lua_setfield(L,-2,"SDLK_UP");
	lua_pushnumber(L,::SDLK_DOWN); lua_setfield(L,-2,"SDLK_DOWN");
	lua_pushnumber(L,::SDLK_RIGHT); lua_setfield(L,-2,"SDLK_RIGHT");
	lua_pushnumber(L,::SDLK_LEFT); lua_setfield(L,-2,"SDLK_LEFT");
	lua_pushnumber(L,::SDLK_INSERT); lua_setfield(L,-2,"SDLK_INSERT");
	lua_pushnumber(L,::SDLK_HOME); lua_setfield(L,-2,"SDLK_HOME");
	lua_pushnumber(L,::SDLK_END); lua_setfield(L,-2,"SDLK_END");
	lua_pushnumber(L,::SDLK_PAGEUP); lua_setfield(L,-2,"SDLK_PAGEUP");
	lua_pushnumber(L,::SDLK_PAGEDOWN); lua_setfield(L,-2,"SDLK_PAGEDOWN");
	lua_pushnumber(L,::SDLK_F1); lua_setfield(L,-2,"SDLK_F1");
	lua_pushnumber(L,::SDLK_F2); lua_setfield(L,-2,"SDLK_F2");
	lua_pushnumber(L,::SDLK_F3); lua_setfield(L,-2,"SDLK_F3");
	lua_pushnumber(L,::SDLK_F4); lua_setfield(L,-2,"SDLK_F4");
	lua_pushnumber(L,::SDLK_F5); lua_setfield(L,-2,"SDLK_F5");
	lua_pushnumber(L,::SDLK_F6); lua_setfield(L,-2,"SDLK_F6");
	lua_pushnumber(L,::SDLK_F7); lua_setfield(L,-2,"SDLK_F7");
	lua_pushnumber(L,::SDLK_F8); lua_setfield(L,-2,"SDLK_F8");
	lua_pushnumber(L,::SDLK_F9); lua_setfield(L,-2,"SDLK_F9");
	lua_pushnumber(L,::SDLK_F10); lua_setfield(L,-2,"SDLK_F10");
	lua_pushnumber(L,::SDLK_F11); lua_setfield(L,-2,"SDLK_F11");
	lua_pushnumber(L,::SDLK_F12); lua_setfield(L,-2,"SDLK_F12");
	lua_pushnumber(L,::SDLK_F13); lua_setfield(L,-2,"SDLK_F13");
	lua_pushnumber(L,::SDLK_F14); lua_setfield(L,-2,"SDLK_F14");
	lua_pushnumber(L,::SDLK_F15); lua_setfield(L,-2,"SDLK_F15");
	lua_pushnumber(L,::SDLK_NUMLOCK); lua_setfield(L,-2,"SDLK_NUMLOCK");
	lua_pushnumber(L,::SDLK_CAPSLOCK); lua_setfield(L,-2,"SDLK_CAPSLOCK");
	lua_pushnumber(L,::SDLK_SCROLLOCK); lua_setfield(L,-2,"SDLK_SCROLLOCK");
	lua_pushnumber(L,::SDLK_RSHIFT); lua_setfield(L,-2,"SDLK_RSHIFT");
	lua_pushnumber(L,::SDLK_LSHIFT); lua_setfield(L,-2,"SDLK_LSHIFT");
	lua_pushnumber(L,::SDLK_RCTRL); lua_setfield(L,-2,"SDLK_RCTRL");
	lua_pushnumber(L,::SDLK_LCTRL); lua_setfield(L,-2,"SDLK_LCTRL");
	lua_pushnumber(L,::SDLK_RALT); lua_setfield(L,-2,"SDLK_RALT");
	lua_pushnumber(L,::SDLK_LALT); lua_setfield(L,-2,"SDLK_LALT");
	lua_pushnumber(L,::SDLK_RMETA); lua_setfield(L,-2,"SDLK_RMETA");
	lua_pushnumber(L,::SDLK_LMETA); lua_setfield(L,-2,"SDLK_LMETA");
	lua_pushnumber(L,::SDLK_LSUPER); lua_setfield(L,-2,"SDLK_LSUPER");
	lua_pushnumber(L,::SDLK_RSUPER); lua_setfield(L,-2,"SDLK_RSUPER");
	lua_pushnumber(L,::SDLK_MODE); lua_setfield(L,-2,"SDLK_MODE");
	lua_pushnumber(L,::SDLK_COMPOSE); lua_setfield(L,-2,"SDLK_COMPOSE");
	lua_pushnumber(L,::SDLK_HELP); lua_setfield(L,-2,"SDLK_HELP");
	lua_pushnumber(L,::SDLK_PRINT); lua_setfield(L,-2,"SDLK_PRINT");
	lua_pushnumber(L,::SDLK_SYSREQ); lua_setfield(L,-2,"SDLK_SYSREQ");
	lua_pushnumber(L,::SDLK_BREAK); lua_setfield(L,-2,"SDLK_BREAK");
	lua_pushnumber(L,::SDLK_MENU); lua_setfield(L,-2,"SDLK_MENU");
	lua_pushnumber(L,::SDLK_POWER); lua_setfield(L,-2,"SDLK_POWER");
	lua_pushnumber(L,::SDLK_EURO); lua_setfield(L,-2,"SDLK_EURO");
	lua_pushnumber(L,::SDLK_UNDO); lua_setfield(L,-2,"SDLK_UNDO");
	lua_pushnumber(L,::SDLK_LAST); lua_setfield(L,-2,"SDLK_LAST");

	lua_setfield(L,-2,"SDLKey");

	lua_pushnumber(L,::SDLK_UNKNOWN); lua_setfield(L,-2,"SDLK_UNKNOWN");
	lua_pushnumber(L,::SDLK_FIRST); lua_setfield(L,-2,"SDLK_FIRST");
	lua_pushnumber(L,::SDLK_BACKSPACE); lua_setfield(L,-2,"SDLK_BACKSPACE");
	lua_pushnumber(L,::SDLK_TAB); lua_setfield(L,-2,"SDLK_TAB");
	lua_pushnumber(L,::SDLK_CLEAR); lua_setfield(L,-2,"SDLK_CLEAR");
	lua_pushnumber(L,::SDLK_RETURN); lua_setfield(L,-2,"SDLK_RETURN");
	lua_pushnumber(L,::SDLK_PAUSE); lua_setfield(L,-2,"SDLK_PAUSE");
	lua_pushnumber(L,::SDLK_ESCAPE); lua_setfield(L,-2,"SDLK_ESCAPE");
	lua_pushnumber(L,::SDLK_SPACE); lua_setfield(L,-2,"SDLK_SPACE");
	lua_pushnumber(L,::SDLK_EXCLAIM); lua_setfield(L,-2,"SDLK_EXCLAIM");
	lua_pushnumber(L,::SDLK_QUOTEDBL); lua_setfield(L,-2,"SDLK_QUOTEDBL");
	lua_pushnumber(L,::SDLK_HASH); lua_setfield(L,-2,"SDLK_HASH");
	lua_pushnumber(L,::SDLK_DOLLAR); lua_setfield(L,-2,"SDLK_DOLLAR");
	lua_pushnumber(L,::SDLK_AMPERSAND); lua_setfield(L,-2,"SDLK_AMPERSAND");
	lua_pushnumber(L,::SDLK_QUOTE); lua_setfield(L,-2,"SDLK_QUOTE");
	lua_pushnumber(L,::SDLK_LEFTPAREN); lua_setfield(L,-2,"SDLK_LEFTPAREN");
	lua_pushnumber(L,::SDLK_RIGHTPAREN); lua_setfield(L,-2,"SDLK_RIGHTPAREN");
	lua_pushnumber(L,::SDLK_ASTERISK); lua_setfield(L,-2,"SDLK_ASTERISK");
	lua_pushnumber(L,::SDLK_PLUS); lua_setfield(L,-2,"SDLK_PLUS");
	lua_pushnumber(L,::SDLK_COMMA); lua_setfield(L,-2,"SDLK_COMMA");
	lua_pushnumber(L,::SDLK_MINUS); lua_setfield(L,-2,"SDLK_MINUS");
	lua_pushnumber(L,::SDLK_PERIOD); lua_setfield(L,-2,"SDLK_PERIOD");
	lua_pushnumber(L,::SDLK_SLASH); lua_setfield(L,-2,"SDLK_SLASH");
	lua_pushnumber(L,::SDLK_0); lua_setfield(L,-2,"SDLK_0");
	lua_pushnumber(L,::SDLK_1); lua_setfield(L,-2,"SDLK_1");
	lua_pushnumber(L,::SDLK_2); lua_setfield(L,-2,"SDLK_2");
	lua_pushnumber(L,::SDLK_3); lua_setfield(L,-2,"SDLK_3");
	lua_pushnumber(L,::SDLK_4); lua_setfield(L,-2,"SDLK_4");
	lua_pushnumber(L,::SDLK_5); lua_setfield(L,-2,"SDLK_5");
	lua_pushnumber(L,::SDLK_6); lua_setfield(L,-2,"SDLK_6");
	lua_pushnumber(L,::SDLK_7); lua_setfield(L,-2,"SDLK_7");
	lua_pushnumber(L,::SDLK_8); lua_setfield(L,-2,"SDLK_8");
	lua_pushnumber(L,::SDLK_9); lua_setfield(L,-2,"SDLK_9");
	lua_pushnumber(L,::SDLK_COLON); lua_setfield(L,-2,"SDLK_COLON");
	lua_pushnumber(L,::SDLK_SEMICOLON); lua_setfield(L,-2,"SDLK_SEMICOLON");
	lua_pushnumber(L,::SDLK_LESS); lua_setfield(L,-2,"SDLK_LESS");
	lua_pushnumber(L,::SDLK_EQUALS); lua_setfield(L,-2,"SDLK_EQUALS");
	lua_pushnumber(L,::SDLK_GREATER); lua_setfield(L,-2,"SDLK_GREATER");
	lua_pushnumber(L,::SDLK_QUESTION); lua_setfield(L,-2,"SDLK_QUESTION");
	lua_pushnumber(L,::SDLK_AT); lua_setfield(L,-2,"SDLK_AT");
	lua_pushnumber(L,::SDLK_LEFTBRACKET); lua_setfield(L,-2,"SDLK_LEFTBRACKET");
	lua_pushnumber(L,::SDLK_BACKSLASH); lua_setfield(L,-2,"SDLK_BACKSLASH");
	lua_pushnumber(L,::SDLK_RIGHTBRACKET); lua_setfield(L,-2,"SDLK_RIGHTBRACKET");
	lua_pushnumber(L,::SDLK_CARET); lua_setfield(L,-2,"SDLK_CARET");
	lua_pushnumber(L,::SDLK_UNDERSCORE); lua_setfield(L,-2,"SDLK_UNDERSCORE");
	lua_pushnumber(L,::SDLK_BACKQUOTE); lua_setfield(L,-2,"SDLK_BACKQUOTE");
	lua_pushnumber(L,::SDLK_a); lua_setfield(L,-2,"SDLK_a");
	lua_pushnumber(L,::SDLK_b); lua_setfield(L,-2,"SDLK_b");
	lua_pushnumber(L,::SDLK_c); lua_setfield(L,-2,"SDLK_c");
	lua_pushnumber(L,::SDLK_d); lua_setfield(L,-2,"SDLK_d");
	lua_pushnumber(L,::SDLK_e); lua_setfield(L,-2,"SDLK_e");
	lua_pushnumber(L,::SDLK_f); lua_setfield(L,-2,"SDLK_f");
	lua_pushnumber(L,::SDLK_g); lua_setfield(L,-2,"SDLK_g");
	lua_pushnumber(L,::SDLK_h); lua_setfield(L,-2,"SDLK_h");
	lua_pushnumber(L,::SDLK_i); lua_setfield(L,-2,"SDLK_i");
	lua_pushnumber(L,::SDLK_j); lua_setfield(L,-2,"SDLK_j");
	lua_pushnumber(L,::SDLK_k); lua_setfield(L,-2,"SDLK_k");
	lua_pushnumber(L,::SDLK_l); lua_setfield(L,-2,"SDLK_l");
	lua_pushnumber(L,::SDLK_m); lua_setfield(L,-2,"SDLK_m");
	lua_pushnumber(L,::SDLK_n); lua_setfield(L,-2,"SDLK_n");
	lua_pushnumber(L,::SDLK_o); lua_setfield(L,-2,"SDLK_o");
	lua_pushnumber(L,::SDLK_p); lua_setfield(L,-2,"SDLK_p");
	lua_pushnumber(L,::SDLK_q); lua_setfield(L,-2,"SDLK_q");
	lua_pushnumber(L,::SDLK_r); lua_setfield(L,-2,"SDLK_r");
	lua_pushnumber(L,::SDLK_s); lua_setfield(L,-2,"SDLK_s");
	lua_pushnumber(L,::SDLK_t); lua_setfield(L,-2,"SDLK_t");
	lua_pushnumber(L,::SDLK_u); lua_setfield(L,-2,"SDLK_u");
	lua_pushnumber(L,::SDLK_v); lua_setfield(L,-2,"SDLK_v");
	lua_pushnumber(L,::SDLK_w); lua_setfield(L,-2,"SDLK_w");
	lua_pushnumber(L,::SDLK_x); lua_setfield(L,-2,"SDLK_x");
	lua_pushnumber(L,::SDLK_y); lua_setfield(L,-2,"SDLK_y");
	lua_pushnumber(L,::SDLK_z); lua_setfield(L,-2,"SDLK_z");
	lua_pushnumber(L,::SDLK_DELETE); lua_setfield(L,-2,"SDLK_DELETE");
	lua_pushnumber(L,::SDLK_WORLD_0); lua_setfield(L,-2,"SDLK_WORLD_0");
	lua_pushnumber(L,::SDLK_WORLD_1); lua_setfield(L,-2,"SDLK_WORLD_1");
	lua_pushnumber(L,::SDLK_WORLD_2); lua_setfield(L,-2,"SDLK_WORLD_2");
	lua_pushnumber(L,::SDLK_WORLD_3); lua_setfield(L,-2,"SDLK_WORLD_3");
	lua_pushnumber(L,::SDLK_WORLD_4); lua_setfield(L,-2,"SDLK_WORLD_4");
	lua_pushnumber(L,::SDLK_WORLD_5); lua_setfield(L,-2,"SDLK_WORLD_5");
	lua_pushnumber(L,::SDLK_WORLD_6); lua_setfield(L,-2,"SDLK_WORLD_6");
	lua_pushnumber(L,::SDLK_WORLD_7); lua_setfield(L,-2,"SDLK_WORLD_7");
	lua_pushnumber(L,::SDLK_WORLD_8); lua_setfield(L,-2,"SDLK_WORLD_8");
	lua_pushnumber(L,::SDLK_WORLD_9); lua_setfield(L,-2,"SDLK_WORLD_9");
	lua_pushnumber(L,::SDLK_WORLD_10); lua_setfield(L,-2,"SDLK_WORLD_10");
	lua_pushnumber(L,::SDLK_WORLD_11); lua_setfield(L,-2,"SDLK_WORLD_11");
	lua_pushnumber(L,::SDLK_WORLD_12); lua_setfield(L,-2,"SDLK_WORLD_12");
	lua_pushnumber(L,::SDLK_WORLD_13); lua_setfield(L,-2,"SDLK_WORLD_13");
	lua_pushnumber(L,::SDLK_WORLD_14); lua_setfield(L,-2,"SDLK_WORLD_14");
	lua_pushnumber(L,::SDLK_WORLD_15); lua_setfield(L,-2,"SDLK_WORLD_15");
	lua_pushnumber(L,::SDLK_WORLD_16); lua_setfield(L,-2,"SDLK_WORLD_16");
	lua_pushnumber(L,::SDLK_WORLD_17); lua_setfield(L,-2,"SDLK_WORLD_17");
	lua_pushnumber(L,::SDLK_WORLD_18); lua_setfield(L,-2,"SDLK_WORLD_18");
	lua_pushnumber(L,::SDLK_WORLD_19); lua_setfield(L,-2,"SDLK_WORLD_19");
	lua_pushnumber(L,::SDLK_WORLD_20); lua_setfield(L,-2,"SDLK_WORLD_20");
	lua_pushnumber(L,::SDLK_WORLD_21); lua_setfield(L,-2,"SDLK_WORLD_21");
	lua_pushnumber(L,::SDLK_WORLD_22); lua_setfield(L,-2,"SDLK_WORLD_22");
	lua_pushnumber(L,::SDLK_WORLD_23); lua_setfield(L,-2,"SDLK_WORLD_23");
	lua_pushnumber(L,::SDLK_WORLD_24); lua_setfield(L,-2,"SDLK_WORLD_24");
	lua_pushnumber(L,::SDLK_WORLD_25); lua_setfield(L,-2,"SDLK_WORLD_25");
	lua_pushnumber(L,::SDLK_WORLD_26); lua_setfield(L,-2,"SDLK_WORLD_26");
	lua_pushnumber(L,::SDLK_WORLD_27); lua_setfield(L,-2,"SDLK_WORLD_27");
	lua_pushnumber(L,::SDLK_WORLD_28); lua_setfield(L,-2,"SDLK_WORLD_28");
	lua_pushnumber(L,::SDLK_WORLD_29); lua_setfield(L,-2,"SDLK_WORLD_29");
	lua_pushnumber(L,::SDLK_WORLD_30); lua_setfield(L,-2,"SDLK_WORLD_30");
	lua_pushnumber(L,::SDLK_WORLD_31); lua_setfield(L,-2,"SDLK_WORLD_31");
	lua_pushnumber(L,::SDLK_WORLD_32); lua_setfield(L,-2,"SDLK_WORLD_32");
	lua_pushnumber(L,::SDLK_WORLD_33); lua_setfield(L,-2,"SDLK_WORLD_33");
	lua_pushnumber(L,::SDLK_WORLD_34); lua_setfield(L,-2,"SDLK_WORLD_34");
	lua_pushnumber(L,::SDLK_WORLD_35); lua_setfield(L,-2,"SDLK_WORLD_35");
	lua_pushnumber(L,::SDLK_WORLD_36); lua_setfield(L,-2,"SDLK_WORLD_36");
	lua_pushnumber(L,::SDLK_WORLD_37); lua_setfield(L,-2,"SDLK_WORLD_37");
	lua_pushnumber(L,::SDLK_WORLD_38); lua_setfield(L,-2,"SDLK_WORLD_38");
	lua_pushnumber(L,::SDLK_WORLD_39); lua_setfield(L,-2,"SDLK_WORLD_39");
	lua_pushnumber(L,::SDLK_WORLD_40); lua_setfield(L,-2,"SDLK_WORLD_40");
	lua_pushnumber(L,::SDLK_WORLD_41); lua_setfield(L,-2,"SDLK_WORLD_41");
	lua_pushnumber(L,::SDLK_WORLD_42); lua_setfield(L,-2,"SDLK_WORLD_42");
	lua_pushnumber(L,::SDLK_WORLD_43); lua_setfield(L,-2,"SDLK_WORLD_43");
	lua_pushnumber(L,::SDLK_WORLD_44); lua_setfield(L,-2,"SDLK_WORLD_44");
	lua_pushnumber(L,::SDLK_WORLD_45); lua_setfield(L,-2,"SDLK_WORLD_45");
	lua_pushnumber(L,::SDLK_WORLD_46); lua_setfield(L,-2,"SDLK_WORLD_46");
	lua_pushnumber(L,::SDLK_WORLD_47); lua_setfield(L,-2,"SDLK_WORLD_47");
	lua_pushnumber(L,::SDLK_WORLD_48); lua_setfield(L,-2,"SDLK_WORLD_48");
	lua_pushnumber(L,::SDLK_WORLD_49); lua_setfield(L,-2,"SDLK_WORLD_49");
	lua_pushnumber(L,::SDLK_WORLD_50); lua_setfield(L,-2,"SDLK_WORLD_50");
	lua_pushnumber(L,::SDLK_WORLD_51); lua_setfield(L,-2,"SDLK_WORLD_51");
	lua_pushnumber(L,::SDLK_WORLD_52); lua_setfield(L,-2,"SDLK_WORLD_52");
	lua_pushnumber(L,::SDLK_WORLD_53); lua_setfield(L,-2,"SDLK_WORLD_53");
	lua_pushnumber(L,::SDLK_WORLD_54); lua_setfield(L,-2,"SDLK_WORLD_54");
	lua_pushnumber(L,::SDLK_WORLD_55); lua_setfield(L,-2,"SDLK_WORLD_55");
	lua_pushnumber(L,::SDLK_WORLD_56); lua_setfield(L,-2,"SDLK_WORLD_56");
	lua_pushnumber(L,::SDLK_WORLD_57); lua_setfield(L,-2,"SDLK_WORLD_57");
	lua_pushnumber(L,::SDLK_WORLD_58); lua_setfield(L,-2,"SDLK_WORLD_58");
	lua_pushnumber(L,::SDLK_WORLD_59); lua_setfield(L,-2,"SDLK_WORLD_59");
	lua_pushnumber(L,::SDLK_WORLD_60); lua_setfield(L,-2,"SDLK_WORLD_60");
	lua_pushnumber(L,::SDLK_WORLD_61); lua_setfield(L,-2,"SDLK_WORLD_61");
	lua_pushnumber(L,::SDLK_WORLD_62); lua_setfield(L,-2,"SDLK_WORLD_62");
	lua_pushnumber(L,::SDLK_WORLD_63); lua_setfield(L,-2,"SDLK_WORLD_63");
	lua_pushnumber(L,::SDLK_WORLD_64); lua_setfield(L,-2,"SDLK_WORLD_64");
	lua_pushnumber(L,::SDLK_WORLD_65); lua_setfield(L,-2,"SDLK_WORLD_65");
	lua_pushnumber(L,::SDLK_WORLD_66); lua_setfield(L,-2,"SDLK_WORLD_66");
	lua_pushnumber(L,::SDLK_WORLD_67); lua_setfield(L,-2,"SDLK_WORLD_67");
	lua_pushnumber(L,::SDLK_WORLD_68); lua_setfield(L,-2,"SDLK_WORLD_68");
	lua_pushnumber(L,::SDLK_WORLD_69); lua_setfield(L,-2,"SDLK_WORLD_69");
	lua_pushnumber(L,::SDLK_WORLD_70); lua_setfield(L,-2,"SDLK_WORLD_70");
	lua_pushnumber(L,::SDLK_WORLD_71); lua_setfield(L,-2,"SDLK_WORLD_71");
	lua_pushnumber(L,::SDLK_WORLD_72); lua_setfield(L,-2,"SDLK_WORLD_72");
	lua_pushnumber(L,::SDLK_WORLD_73); lua_setfield(L,-2,"SDLK_WORLD_73");
	lua_pushnumber(L,::SDLK_WORLD_74); lua_setfield(L,-2,"SDLK_WORLD_74");
	lua_pushnumber(L,::SDLK_WORLD_75); lua_setfield(L,-2,"SDLK_WORLD_75");
	lua_pushnumber(L,::SDLK_WORLD_76); lua_setfield(L,-2,"SDLK_WORLD_76");
	lua_pushnumber(L,::SDLK_WORLD_77); lua_setfield(L,-2,"SDLK_WORLD_77");
	lua_pushnumber(L,::SDLK_WORLD_78); lua_setfield(L,-2,"SDLK_WORLD_78");
	lua_pushnumber(L,::SDLK_WORLD_79); lua_setfield(L,-2,"SDLK_WORLD_79");
	lua_pushnumber(L,::SDLK_WORLD_80); lua_setfield(L,-2,"SDLK_WORLD_80");
	lua_pushnumber(L,::SDLK_WORLD_81); lua_setfield(L,-2,"SDLK_WORLD_81");
	lua_pushnumber(L,::SDLK_WORLD_82); lua_setfield(L,-2,"SDLK_WORLD_82");
	lua_pushnumber(L,::SDLK_WORLD_83); lua_setfield(L,-2,"SDLK_WORLD_83");
	lua_pushnumber(L,::SDLK_WORLD_84); lua_setfield(L,-2,"SDLK_WORLD_84");
	lua_pushnumber(L,::SDLK_WORLD_85); lua_setfield(L,-2,"SDLK_WORLD_85");
	lua_pushnumber(L,::SDLK_WORLD_86); lua_setfield(L,-2,"SDLK_WORLD_86");
	lua_pushnumber(L,::SDLK_WORLD_87); lua_setfield(L,-2,"SDLK_WORLD_87");
	lua_pushnumber(L,::SDLK_WORLD_88); lua_setfield(L,-2,"SDLK_WORLD_88");
	lua_pushnumber(L,::SDLK_WORLD_89); lua_setfield(L,-2,"SDLK_WORLD_89");
	lua_pushnumber(L,::SDLK_WORLD_90); lua_setfield(L,-2,"SDLK_WORLD_90");
	lua_pushnumber(L,::SDLK_WORLD_91); lua_setfield(L,-2,"SDLK_WORLD_91");
	lua_pushnumber(L,::SDLK_WORLD_92); lua_setfield(L,-2,"SDLK_WORLD_92");
	lua_pushnumber(L,::SDLK_WORLD_93); lua_setfield(L,-2,"SDLK_WORLD_93");
	lua_pushnumber(L,::SDLK_WORLD_94); lua_setfield(L,-2,"SDLK_WORLD_94");
	lua_pushnumber(L,::SDLK_WORLD_95); lua_setfield(L,-2,"SDLK_WORLD_95");
	lua_pushnumber(L,::SDLK_KP0); lua_setfield(L,-2,"SDLK_KP0");
	lua_pushnumber(L,::SDLK_KP1); lua_setfield(L,-2,"SDLK_KP1");
	lua_pushnumber(L,::SDLK_KP2); lua_setfield(L,-2,"SDLK_KP2");
	lua_pushnumber(L,::SDLK_KP3); lua_setfield(L,-2,"SDLK_KP3");
	lua_pushnumber(L,::SDLK_KP4); lua_setfield(L,-2,"SDLK_KP4");
	lua_pushnumber(L,::SDLK_KP5); lua_setfield(L,-2,"SDLK_KP5");
	lua_pushnumber(L,::SDLK_KP6); lua_setfield(L,-2,"SDLK_KP6");
	lua_pushnumber(L,::SDLK_KP7); lua_setfield(L,-2,"SDLK_KP7");
	lua_pushnumber(L,::SDLK_KP8); lua_setfield(L,-2,"SDLK_KP8");
	lua_pushnumber(L,::SDLK_KP9); lua_setfield(L,-2,"SDLK_KP9");
	lua_pushnumber(L,::SDLK_KP_PERIOD); lua_setfield(L,-2,"SDLK_KP_PERIOD");
	lua_pushnumber(L,::SDLK_KP_DIVIDE); lua_setfield(L,-2,"SDLK_KP_DIVIDE");
	lua_pushnumber(L,::SDLK_KP_MULTIPLY); lua_setfield(L,-2,"SDLK_KP_MULTIPLY");
	lua_pushnumber(L,::SDLK_KP_MINUS); lua_setfield(L,-2,"SDLK_KP_MINUS");
	lua_pushnumber(L,::SDLK_KP_PLUS); lua_setfield(L,-2,"SDLK_KP_PLUS");
	lua_pushnumber(L,::SDLK_KP_ENTER); lua_setfield(L,-2,"SDLK_KP_ENTER");
	lua_pushnumber(L,::SDLK_KP_EQUALS); lua_setfield(L,-2,"SDLK_KP_EQUALS");
	lua_pushnumber(L,::SDLK_UP); lua_setfield(L,-2,"SDLK_UP");
	lua_pushnumber(L,::SDLK_DOWN); lua_setfield(L,-2,"SDLK_DOWN");
	lua_pushnumber(L,::SDLK_RIGHT); lua_setfield(L,-2,"SDLK_RIGHT");
	lua_pushnumber(L,::SDLK_LEFT); lua_setfield(L,-2,"SDLK_LEFT");
	lua_pushnumber(L,::SDLK_INSERT); lua_setfield(L,-2,"SDLK_INSERT");
	lua_pushnumber(L,::SDLK_HOME); lua_setfield(L,-2,"SDLK_HOME");
	lua_pushnumber(L,::SDLK_END); lua_setfield(L,-2,"SDLK_END");
	lua_pushnumber(L,::SDLK_PAGEUP); lua_setfield(L,-2,"SDLK_PAGEUP");
	lua_pushnumber(L,::SDLK_PAGEDOWN); lua_setfield(L,-2,"SDLK_PAGEDOWN");
	lua_pushnumber(L,::SDLK_F1); lua_setfield(L,-2,"SDLK_F1");
	lua_pushnumber(L,::SDLK_F2); lua_setfield(L,-2,"SDLK_F2");
	lua_pushnumber(L,::SDLK_F3); lua_setfield(L,-2,"SDLK_F3");
	lua_pushnumber(L,::SDLK_F4); lua_setfield(L,-2,"SDLK_F4");
	lua_pushnumber(L,::SDLK_F5); lua_setfield(L,-2,"SDLK_F5");
	lua_pushnumber(L,::SDLK_F6); lua_setfield(L,-2,"SDLK_F6");
	lua_pushnumber(L,::SDLK_F7); lua_setfield(L,-2,"SDLK_F7");
	lua_pushnumber(L,::SDLK_F8); lua_setfield(L,-2,"SDLK_F8");
	lua_pushnumber(L,::SDLK_F9); lua_setfield(L,-2,"SDLK_F9");
	lua_pushnumber(L,::SDLK_F10); lua_setfield(L,-2,"SDLK_F10");
	lua_pushnumber(L,::SDLK_F11); lua_setfield(L,-2,"SDLK_F11");
	lua_pushnumber(L,::SDLK_F12); lua_setfield(L,-2,"SDLK_F12");
	lua_pushnumber(L,::SDLK_F13); lua_setfield(L,-2,"SDLK_F13");
	lua_pushnumber(L,::SDLK_F14); lua_setfield(L,-2,"SDLK_F14");
	lua_pushnumber(L,::SDLK_F15); lua_setfield(L,-2,"SDLK_F15");
	lua_pushnumber(L,::SDLK_NUMLOCK); lua_setfield(L,-2,"SDLK_NUMLOCK");
	lua_pushnumber(L,::SDLK_CAPSLOCK); lua_setfield(L,-2,"SDLK_CAPSLOCK");
	lua_pushnumber(L,::SDLK_SCROLLOCK); lua_setfield(L,-2,"SDLK_SCROLLOCK");
	lua_pushnumber(L,::SDLK_RSHIFT); lua_setfield(L,-2,"SDLK_RSHIFT");
	lua_pushnumber(L,::SDLK_LSHIFT); lua_setfield(L,-2,"SDLK_LSHIFT");
	lua_pushnumber(L,::SDLK_RCTRL); lua_setfield(L,-2,"SDLK_RCTRL");
	lua_pushnumber(L,::SDLK_LCTRL); lua_setfield(L,-2,"SDLK_LCTRL");
	lua_pushnumber(L,::SDLK_RALT); lua_setfield(L,-2,"SDLK_RALT");
	lua_pushnumber(L,::SDLK_LALT); lua_setfield(L,-2,"SDLK_LALT");
	lua_pushnumber(L,::SDLK_RMETA); lua_setfield(L,-2,"SDLK_RMETA");
	lua_pushnumber(L,::SDLK_LMETA); lua_setfield(L,-2,"SDLK_LMETA");
	lua_pushnumber(L,::SDLK_LSUPER); lua_setfield(L,-2,"SDLK_LSUPER");
	lua_pushnumber(L,::SDLK_RSUPER); lua_setfield(L,-2,"SDLK_RSUPER");
	lua_pushnumber(L,::SDLK_MODE); lua_setfield(L,-2,"SDLK_MODE");
	lua_pushnumber(L,::SDLK_COMPOSE); lua_setfield(L,-2,"SDLK_COMPOSE");
	lua_pushnumber(L,::SDLK_HELP); lua_setfield(L,-2,"SDLK_HELP");
	lua_pushnumber(L,::SDLK_PRINT); lua_setfield(L,-2,"SDLK_PRINT");
	lua_pushnumber(L,::SDLK_SYSREQ); lua_setfield(L,-2,"SDLK_SYSREQ");
	lua_pushnumber(L,::SDLK_BREAK); lua_setfield(L,-2,"SDLK_BREAK");
	lua_pushnumber(L,::SDLK_MENU); lua_setfield(L,-2,"SDLK_MENU");
	lua_pushnumber(L,::SDLK_POWER); lua_setfield(L,-2,"SDLK_POWER");
	lua_pushnumber(L,::SDLK_EURO); lua_setfield(L,-2,"SDLK_EURO");
	lua_pushnumber(L,::SDLK_UNDO); lua_setfield(L,-2,"SDLK_UNDO");
	lua_pushnumber(L,::SDLK_LAST); lua_setfield(L,-2,"SDLK_LAST");


	lua_newtable(L); // enum SDLMod

	lua_pushnumber(L,::KMOD_NONE); lua_setfield(L,-2,"KMOD_NONE");
	lua_pushnumber(L,::KMOD_LSHIFT); lua_setfield(L,-2,"KMOD_LSHIFT");
	lua_pushnumber(L,::KMOD_RSHIFT); lua_setfield(L,-2,"KMOD_RSHIFT");
	lua_pushnumber(L,::KMOD_LCTRL); lua_setfield(L,-2,"KMOD_LCTRL");
	lua_pushnumber(L,::KMOD_RCTRL); lua_setfield(L,-2,"KMOD_RCTRL");
	lua_pushnumber(L,::KMOD_LALT); lua_setfield(L,-2,"KMOD_LALT");
	lua_pushnumber(L,::KMOD_RALT); lua_setfield(L,-2,"KMOD_RALT");
	lua_pushnumber(L,::KMOD_LMETA); lua_setfield(L,-2,"KMOD_LMETA");
	lua_pushnumber(L,::KMOD_RMETA); lua_setfield(L,-2,"KMOD_RMETA");
	lua_pushnumber(L,::KMOD_NUM); lua_setfield(L,-2,"KMOD_NUM");
	lua_pushnumber(L,::KMOD_CAPS); lua_setfield(L,-2,"KMOD_CAPS");
	lua_pushnumber(L,::KMOD_MODE); lua_setfield(L,-2,"KMOD_MODE");
	lua_pushnumber(L,::KMOD_RESERVED); lua_setfield(L,-2,"KMOD_RESERVED");

	lua_setfield(L,-2,"SDLMod");

	lua_pushnumber(L,::KMOD_NONE); lua_setfield(L,-2,"KMOD_NONE");
	lua_pushnumber(L,::KMOD_LSHIFT); lua_setfield(L,-2,"KMOD_LSHIFT");
	lua_pushnumber(L,::KMOD_RSHIFT); lua_setfield(L,-2,"KMOD_RSHIFT");
	lua_pushnumber(L,::KMOD_LCTRL); lua_setfield(L,-2,"KMOD_LCTRL");
	lua_pushnumber(L,::KMOD_RCTRL); lua_setfield(L,-2,"KMOD_RCTRL");
	lua_pushnumber(L,::KMOD_LALT); lua_setfield(L,-2,"KMOD_LALT");
	lua_pushnumber(L,::KMOD_RALT); lua_setfield(L,-2,"KMOD_RALT");
	lua_pushnumber(L,::KMOD_LMETA); lua_setfield(L,-2,"KMOD_LMETA");
	lua_pushnumber(L,::KMOD_RMETA); lua_setfield(L,-2,"KMOD_RMETA");
	lua_pushnumber(L,::KMOD_NUM); lua_setfield(L,-2,"KMOD_NUM");
	lua_pushnumber(L,::KMOD_CAPS); lua_setfield(L,-2,"KMOD_CAPS");
	lua_pushnumber(L,::KMOD_MODE); lua_setfield(L,-2,"KMOD_MODE");
	lua_pushnumber(L,::KMOD_RESERVED); lua_setfield(L,-2,"KMOD_RESERVED");


	lua_newtable(L); // enum SDL_GrabMode

	lua_pushnumber(L,::SDL_GRAB_QUERY); lua_setfield(L,-2,"SDL_GRAB_QUERY");
	lua_pushnumber(L,::SDL_GRAB_OFF); lua_setfield(L,-2,"SDL_GRAB_OFF");
	lua_pushnumber(L,::SDL_GRAB_ON); lua_setfield(L,-2,"SDL_GRAB_ON");
	lua_pushnumber(L,::SDL_GRAB_FULLSCREEN); lua_setfield(L,-2,"SDL_GRAB_FULLSCREEN");

	lua_setfield(L,-2,"SDL_GrabMode");

	lua_pushnumber(L,::SDL_GRAB_QUERY); lua_setfield(L,-2,"SDL_GRAB_QUERY");
	lua_pushnumber(L,::SDL_GRAB_OFF); lua_setfield(L,-2,"SDL_GRAB_OFF");
	lua_pushnumber(L,::SDL_GRAB_ON); lua_setfield(L,-2,"SDL_GRAB_ON");
	lua_pushnumber(L,::SDL_GRAB_FULLSCREEN); lua_setfield(L,-2,"SDL_GRAB_FULLSCREEN");


	lua_newtable(L); // enum SDL_GLattr

	lua_pushnumber(L,::SDL_GL_RED_SIZE); lua_setfield(L,-2,"SDL_GL_RED_SIZE");
	lua_pushnumber(L,::SDL_GL_GREEN_SIZE); lua_setfield(L,-2,"SDL_GL_GREEN_SIZE");
	lua_pushnumber(L,::SDL_GL_BLUE_SIZE); lua_setfield(L,-2,"SDL_GL_BLUE_SIZE");
	lua_pushnumber(L,::SDL_GL_ALPHA_SIZE); lua_setfield(L,-2,"SDL_GL_ALPHA_SIZE");
	lua_pushnumber(L,::SDL_GL_BUFFER_SIZE); lua_setfield(L,-2,"SDL_GL_BUFFER_SIZE");
	lua_pushnumber(L,::SDL_GL_DOUBLEBUFFER); lua_setfield(L,-2,"SDL_GL_DOUBLEBUFFER");
	lua_pushnumber(L,::SDL_GL_DEPTH_SIZE); lua_setfield(L,-2,"SDL_GL_DEPTH_SIZE");
	lua_pushnumber(L,::SDL_GL_STENCIL_SIZE); lua_setfield(L,-2,"SDL_GL_STENCIL_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_RED_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_RED_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_GREEN_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_GREEN_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_BLUE_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_BLUE_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_ALPHA_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_ALPHA_SIZE");
	lua_pushnumber(L,::SDL_GL_STEREO); lua_setfield(L,-2,"SDL_GL_STEREO");
	lua_pushnumber(L,::SDL_GL_MULTISAMPLEBUFFERS); lua_setfield(L,-2,"SDL_GL_MULTISAMPLEBUFFERS");
	lua_pushnumber(L,::SDL_GL_MULTISAMPLESAMPLES); lua_setfield(L,-2,"SDL_GL_MULTISAMPLESAMPLES");
	lua_pushnumber(L,::SDL_GL_ACCELERATED_VISUAL); lua_setfield(L,-2,"SDL_GL_ACCELERATED_VISUAL");
	lua_pushnumber(L,::SDL_GL_SWAP_CONTROL); lua_setfield(L,-2,"SDL_GL_SWAP_CONTROL");

	lua_setfield(L,-2,"SDL_GLattr");

	lua_pushnumber(L,::SDL_GL_RED_SIZE); lua_setfield(L,-2,"SDL_GL_RED_SIZE");
	lua_pushnumber(L,::SDL_GL_GREEN_SIZE); lua_setfield(L,-2,"SDL_GL_GREEN_SIZE");
	lua_pushnumber(L,::SDL_GL_BLUE_SIZE); lua_setfield(L,-2,"SDL_GL_BLUE_SIZE");
	lua_pushnumber(L,::SDL_GL_ALPHA_SIZE); lua_setfield(L,-2,"SDL_GL_ALPHA_SIZE");
	lua_pushnumber(L,::SDL_GL_BUFFER_SIZE); lua_setfield(L,-2,"SDL_GL_BUFFER_SIZE");
	lua_pushnumber(L,::SDL_GL_DOUBLEBUFFER); lua_setfield(L,-2,"SDL_GL_DOUBLEBUFFER");
	lua_pushnumber(L,::SDL_GL_DEPTH_SIZE); lua_setfield(L,-2,"SDL_GL_DEPTH_SIZE");
	lua_pushnumber(L,::SDL_GL_STENCIL_SIZE); lua_setfield(L,-2,"SDL_GL_STENCIL_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_RED_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_RED_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_GREEN_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_GREEN_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_BLUE_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_BLUE_SIZE");
	lua_pushnumber(L,::SDL_GL_ACCUM_ALPHA_SIZE); lua_setfield(L,-2,"SDL_GL_ACCUM_ALPHA_SIZE");
	lua_pushnumber(L,::SDL_GL_STEREO); lua_setfield(L,-2,"SDL_GL_STEREO");
	lua_pushnumber(L,::SDL_GL_MULTISAMPLEBUFFERS); lua_setfield(L,-2,"SDL_GL_MULTISAMPLEBUFFERS");
	lua_pushnumber(L,::SDL_GL_MULTISAMPLESAMPLES); lua_setfield(L,-2,"SDL_GL_MULTISAMPLESAMPLES");
	lua_pushnumber(L,::SDL_GL_ACCELERATED_VISUAL); lua_setfield(L,-2,"SDL_GL_ACCELERATED_VISUAL");
	lua_pushnumber(L,::SDL_GL_SWAP_CONTROL); lua_setfield(L,-2,"SDL_GL_SWAP_CONTROL");


}

#ifdef __cplusplus
}
#endif


