#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<SDL_ActiveEvent,dstType> {
	static inline dstType* cast(SDL_ActiveEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_AudioCVT,dstType> {
	static inline dstType* cast(SDL_AudioCVT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_AudioSpec,dstType> {
	static inline dstType* cast(SDL_AudioSpec* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_CD,dstType> {
	static inline dstType* cast(SDL_CD* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_CDtrack,dstType> {
	static inline dstType* cast(SDL_CDtrack* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Color,dstType> {
	static inline dstType* cast(SDL_Color* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_cond,dstType> {
	static inline dstType* cast(SDL_cond* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Cursor,dstType> {
	static inline dstType* cast(SDL_Cursor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Event,dstType> {
	static inline dstType* cast(SDL_Event* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_EventFilter,dstType> {
	static inline dstType* cast(SDL_EventFilter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_ExposeEvent,dstType> {
	static inline dstType* cast(SDL_ExposeEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_JoyAxisEvent,dstType> {
	static inline dstType* cast(SDL_JoyAxisEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_JoyBallEvent,dstType> {
	static inline dstType* cast(SDL_JoyBallEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_JoyButtonEvent,dstType> {
	static inline dstType* cast(SDL_JoyButtonEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_JoyHatEvent,dstType> {
	static inline dstType* cast(SDL_JoyHatEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Joystick,dstType> {
	static inline dstType* cast(SDL_Joystick* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_KeyboardEvent,dstType> {
	static inline dstType* cast(SDL_KeyboardEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_keysym,dstType> {
	static inline dstType* cast(SDL_keysym* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_MouseButtonEvent,dstType> {
	static inline dstType* cast(SDL_MouseButtonEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_MouseMotionEvent,dstType> {
	static inline dstType* cast(SDL_MouseMotionEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_mutex,dstType> {
	static inline dstType* cast(SDL_mutex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Overlay,dstType> {
	static inline dstType* cast(SDL_Overlay* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Palette,dstType> {
	static inline dstType* cast(SDL_Palette* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_PixelFormat,dstType> {
	static inline dstType* cast(SDL_PixelFormat* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_QuitEvent,dstType> {
	static inline dstType* cast(SDL_QuitEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Rect,dstType> {
	static inline dstType* cast(SDL_Rect* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_ResizeEvent,dstType> {
	static inline dstType* cast(SDL_ResizeEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_sem,dstType> {
	static inline dstType* cast(SDL_sem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Surface,dstType> {
	static inline dstType* cast(SDL_Surface* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_Thread,dstType> {
	static inline dstType* cast(SDL_Thread* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_UserEvent,dstType> {
	static inline dstType* cast(SDL_UserEvent* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_version,dstType> {
	static inline dstType* cast(SDL_version* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<SDL_VideoInfo,dstType> {
	static inline dstType* cast(SDL_VideoInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

