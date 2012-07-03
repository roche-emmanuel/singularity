typedef unsigned int Uint32;
typedef unsigned char Uint8;
typedef int SDL_bool;

class SDL_EventFilter { 
protected:
	~SDL_EventFilter();
};

struct SDL_Event { 
protected:
	~SDL_Event();
};

struct SDL_Joystick { 
protected:
	~SDL_Joystick();
};

struct SDL_mutex { 
protected:
	~SDL_mutex();
};

struct SDL_sem { 
protected:
	~SDL_sem();
};

struct SDL_cond { 
protected:
	~SDL_cond();
};

struct SDL_Thread { 
protected:
	~SDL_Thread();
};

// struct _SDL_TimerID { 
// protected:
	// ~_SDL_TimerID();
// };

// typedef _SDL_TimerID* SDL_TimerID;

//typedef void* SDL_EventFilter;
