#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "SDL_joystick.h"

inline int joystickGetBall(SDL_Joystick *joystick, int ball, lua_State* L) {
	int dx, dy;
	CHECK_RET(SDL_JoystickGetBall(joystick, ball, &dx, &dy)==0,0,"Invalid call to joystick get ball.");
	
	lua_pushinteger(L,dx);
	lua_pushinteger(L,dy);
	return 2;
}


#endif
