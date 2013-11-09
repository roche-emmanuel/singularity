#include <plug_common.h>

class luna_wrapper_SDL_Event {
public:
	typedef Luna< SDL_Event > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46878127) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Event*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Event* rhs =(Luna< SDL_Event >::check(L,2));
		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Event* self= (SDL_Event*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Event >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46878127) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Event");
		
		return luna_dynamicCast(L,converters,"SDL_Event",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJaxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJball(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJhat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJbutton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getResize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47816679) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54883043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65570431) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83012203) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJaxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57386537) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJball(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20374949) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJhat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,38522231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJbutton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94708358) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setResize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35035544) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExpose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17901200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQuit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91180727) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22520081) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_Event::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_Event::type() function, expected prototype:\nunsigned char SDL_Event::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_Event::type(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// SDL_ActiveEvent SDL_Event::active()
	static int _bind_getActive(lua_State *L) {
		if (!_lg_typecheck_getActive(L)) {
			luaL_error(L, "luna typecheck failed in SDL_ActiveEvent SDL_Event::active() function, expected prototype:\nSDL_ActiveEvent SDL_Event::active()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_ActiveEvent SDL_Event::active(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_ActiveEvent* lret = &self->active;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_ActiveEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_KeyboardEvent SDL_Event::key()
	static int _bind_getKey(lua_State *L) {
		if (!_lg_typecheck_getKey(L)) {
			luaL_error(L, "luna typecheck failed in SDL_KeyboardEvent SDL_Event::key() function, expected prototype:\nSDL_KeyboardEvent SDL_Event::key()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_KeyboardEvent SDL_Event::key(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_KeyboardEvent* lret = &self->key;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_KeyboardEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_MouseMotionEvent SDL_Event::motion()
	static int _bind_getMotion(lua_State *L) {
		if (!_lg_typecheck_getMotion(L)) {
			luaL_error(L, "luna typecheck failed in SDL_MouseMotionEvent SDL_Event::motion() function, expected prototype:\nSDL_MouseMotionEvent SDL_Event::motion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_MouseMotionEvent SDL_Event::motion(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_MouseMotionEvent* lret = &self->motion;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_MouseMotionEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_MouseButtonEvent SDL_Event::button()
	static int _bind_getButton(lua_State *L) {
		if (!_lg_typecheck_getButton(L)) {
			luaL_error(L, "luna typecheck failed in SDL_MouseButtonEvent SDL_Event::button() function, expected prototype:\nSDL_MouseButtonEvent SDL_Event::button()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_MouseButtonEvent SDL_Event::button(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_MouseButtonEvent* lret = &self->button;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_MouseButtonEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_JoyAxisEvent SDL_Event::jaxis()
	static int _bind_getJaxis(lua_State *L) {
		if (!_lg_typecheck_getJaxis(L)) {
			luaL_error(L, "luna typecheck failed in SDL_JoyAxisEvent SDL_Event::jaxis() function, expected prototype:\nSDL_JoyAxisEvent SDL_Event::jaxis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_JoyAxisEvent SDL_Event::jaxis(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_JoyAxisEvent* lret = &self->jaxis;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_JoyAxisEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_JoyBallEvent SDL_Event::jball()
	static int _bind_getJball(lua_State *L) {
		if (!_lg_typecheck_getJball(L)) {
			luaL_error(L, "luna typecheck failed in SDL_JoyBallEvent SDL_Event::jball() function, expected prototype:\nSDL_JoyBallEvent SDL_Event::jball()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_JoyBallEvent SDL_Event::jball(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_JoyBallEvent* lret = &self->jball;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_JoyBallEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_JoyHatEvent SDL_Event::jhat()
	static int _bind_getJhat(lua_State *L) {
		if (!_lg_typecheck_getJhat(L)) {
			luaL_error(L, "luna typecheck failed in SDL_JoyHatEvent SDL_Event::jhat() function, expected prototype:\nSDL_JoyHatEvent SDL_Event::jhat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_JoyHatEvent SDL_Event::jhat(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_JoyHatEvent* lret = &self->jhat;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_JoyHatEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_JoyButtonEvent SDL_Event::jbutton()
	static int _bind_getJbutton(lua_State *L) {
		if (!_lg_typecheck_getJbutton(L)) {
			luaL_error(L, "luna typecheck failed in SDL_JoyButtonEvent SDL_Event::jbutton() function, expected prototype:\nSDL_JoyButtonEvent SDL_Event::jbutton()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_JoyButtonEvent SDL_Event::jbutton(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_JoyButtonEvent* lret = &self->jbutton;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_JoyButtonEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_ResizeEvent SDL_Event::resize()
	static int _bind_getResize(lua_State *L) {
		if (!_lg_typecheck_getResize(L)) {
			luaL_error(L, "luna typecheck failed in SDL_ResizeEvent SDL_Event::resize() function, expected prototype:\nSDL_ResizeEvent SDL_Event::resize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_ResizeEvent SDL_Event::resize(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_ResizeEvent* lret = &self->resize;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_ResizeEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_ExposeEvent SDL_Event::expose()
	static int _bind_getExpose(lua_State *L) {
		if (!_lg_typecheck_getExpose(L)) {
			luaL_error(L, "luna typecheck failed in SDL_ExposeEvent SDL_Event::expose() function, expected prototype:\nSDL_ExposeEvent SDL_Event::expose()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_ExposeEvent SDL_Event::expose(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_ExposeEvent* lret = &self->expose;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_ExposeEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_QuitEvent SDL_Event::quit()
	static int _bind_getQuit(lua_State *L) {
		if (!_lg_typecheck_getQuit(L)) {
			luaL_error(L, "luna typecheck failed in SDL_QuitEvent SDL_Event::quit() function, expected prototype:\nSDL_QuitEvent SDL_Event::quit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_QuitEvent SDL_Event::quit(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_QuitEvent* lret = &self->quit;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_QuitEvent >::push(L,lret,false);

		return 1;
	}

	// SDL_UserEvent SDL_Event::user()
	static int _bind_getUser(lua_State *L) {
		if (!_lg_typecheck_getUser(L)) {
			luaL_error(L, "luna typecheck failed in SDL_UserEvent SDL_Event::user() function, expected prototype:\nSDL_UserEvent SDL_Event::user()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_UserEvent SDL_Event::user(). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_UserEvent* lret = &self->user;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_UserEvent >::push(L,lret,false);

		return 1;
	}

	// void SDL_Event::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::type(unsigned char value) function, expected prototype:\nvoid SDL_Event::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_Event::active(SDL_ActiveEvent value)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::active(SDL_ActiveEvent value) function, expected prototype:\nvoid SDL_Event::active(SDL_ActiveEvent value)\nClass arguments details:\narg 1 ID = 47816679\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ActiveEvent* value_ptr=(Luna< SDL_ActiveEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::active function");
		}
		SDL_ActiveEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::active(SDL_ActiveEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->active = value;

		return 0;
	}

	// void SDL_Event::key(SDL_KeyboardEvent value)
	static int _bind_setKey(lua_State *L) {
		if (!_lg_typecheck_setKey(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::key(SDL_KeyboardEvent value) function, expected prototype:\nvoid SDL_Event::key(SDL_KeyboardEvent value)\nClass arguments details:\narg 1 ID = 54883043\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_KeyboardEvent* value_ptr=(Luna< SDL_KeyboardEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::key function");
		}
		SDL_KeyboardEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::key(SDL_KeyboardEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->key = value;

		return 0;
	}

	// void SDL_Event::motion(SDL_MouseMotionEvent value)
	static int _bind_setMotion(lua_State *L) {
		if (!_lg_typecheck_setMotion(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::motion(SDL_MouseMotionEvent value) function, expected prototype:\nvoid SDL_Event::motion(SDL_MouseMotionEvent value)\nClass arguments details:\narg 1 ID = 65570431\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_MouseMotionEvent* value_ptr=(Luna< SDL_MouseMotionEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::motion function");
		}
		SDL_MouseMotionEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::motion(SDL_MouseMotionEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->motion = value;

		return 0;
	}

	// void SDL_Event::button(SDL_MouseButtonEvent value)
	static int _bind_setButton(lua_State *L) {
		if (!_lg_typecheck_setButton(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::button(SDL_MouseButtonEvent value) function, expected prototype:\nvoid SDL_Event::button(SDL_MouseButtonEvent value)\nClass arguments details:\narg 1 ID = 83012203\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_MouseButtonEvent* value_ptr=(Luna< SDL_MouseButtonEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::button function");
		}
		SDL_MouseButtonEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::button(SDL_MouseButtonEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->button = value;

		return 0;
	}

	// void SDL_Event::jaxis(SDL_JoyAxisEvent value)
	static int _bind_setJaxis(lua_State *L) {
		if (!_lg_typecheck_setJaxis(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::jaxis(SDL_JoyAxisEvent value) function, expected prototype:\nvoid SDL_Event::jaxis(SDL_JoyAxisEvent value)\nClass arguments details:\narg 1 ID = 57386537\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyAxisEvent* value_ptr=(Luna< SDL_JoyAxisEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::jaxis function");
		}
		SDL_JoyAxisEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::jaxis(SDL_JoyAxisEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->jaxis = value;

		return 0;
	}

	// void SDL_Event::jball(SDL_JoyBallEvent value)
	static int _bind_setJball(lua_State *L) {
		if (!_lg_typecheck_setJball(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::jball(SDL_JoyBallEvent value) function, expected prototype:\nvoid SDL_Event::jball(SDL_JoyBallEvent value)\nClass arguments details:\narg 1 ID = 20374949\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyBallEvent* value_ptr=(Luna< SDL_JoyBallEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::jball function");
		}
		SDL_JoyBallEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::jball(SDL_JoyBallEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->jball = value;

		return 0;
	}

	// void SDL_Event::jhat(SDL_JoyHatEvent value)
	static int _bind_setJhat(lua_State *L) {
		if (!_lg_typecheck_setJhat(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::jhat(SDL_JoyHatEvent value) function, expected prototype:\nvoid SDL_Event::jhat(SDL_JoyHatEvent value)\nClass arguments details:\narg 1 ID = 38522231\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyHatEvent* value_ptr=(Luna< SDL_JoyHatEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::jhat function");
		}
		SDL_JoyHatEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::jhat(SDL_JoyHatEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->jhat = value;

		return 0;
	}

	// void SDL_Event::jbutton(SDL_JoyButtonEvent value)
	static int _bind_setJbutton(lua_State *L) {
		if (!_lg_typecheck_setJbutton(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::jbutton(SDL_JoyButtonEvent value) function, expected prototype:\nvoid SDL_Event::jbutton(SDL_JoyButtonEvent value)\nClass arguments details:\narg 1 ID = 94708358\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyButtonEvent* value_ptr=(Luna< SDL_JoyButtonEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::jbutton function");
		}
		SDL_JoyButtonEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::jbutton(SDL_JoyButtonEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->jbutton = value;

		return 0;
	}

	// void SDL_Event::resize(SDL_ResizeEvent value)
	static int _bind_setResize(lua_State *L) {
		if (!_lg_typecheck_setResize(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::resize(SDL_ResizeEvent value) function, expected prototype:\nvoid SDL_Event::resize(SDL_ResizeEvent value)\nClass arguments details:\narg 1 ID = 35035544\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ResizeEvent* value_ptr=(Luna< SDL_ResizeEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::resize function");
		}
		SDL_ResizeEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::resize(SDL_ResizeEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize = value;

		return 0;
	}

	// void SDL_Event::expose(SDL_ExposeEvent value)
	static int _bind_setExpose(lua_State *L) {
		if (!_lg_typecheck_setExpose(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::expose(SDL_ExposeEvent value) function, expected prototype:\nvoid SDL_Event::expose(SDL_ExposeEvent value)\nClass arguments details:\narg 1 ID = 17901200\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ExposeEvent* value_ptr=(Luna< SDL_ExposeEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::expose function");
		}
		SDL_ExposeEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::expose(SDL_ExposeEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->expose = value;

		return 0;
	}

	// void SDL_Event::quit(SDL_QuitEvent value)
	static int _bind_setQuit(lua_State *L) {
		if (!_lg_typecheck_setQuit(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::quit(SDL_QuitEvent value) function, expected prototype:\nvoid SDL_Event::quit(SDL_QuitEvent value)\nClass arguments details:\narg 1 ID = 91180727\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_QuitEvent* value_ptr=(Luna< SDL_QuitEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::quit function");
		}
		SDL_QuitEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::quit(SDL_QuitEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quit = value;

		return 0;
	}

	// void SDL_Event::user(SDL_UserEvent value)
	static int _bind_setUser(lua_State *L) {
		if (!_lg_typecheck_setUser(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Event::user(SDL_UserEvent value) function, expected prototype:\nvoid SDL_Event::user(SDL_UserEvent value)\nClass arguments details:\narg 1 ID = 22520081\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_UserEvent* value_ptr=(Luna< SDL_UserEvent >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Event::user function");
		}
		SDL_UserEvent value=*value_ptr;

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Event::user(SDL_UserEvent). Got : '%s'\n%s",typeid(Luna< SDL_Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->user = value;

		return 0;
	}


	// Operator binds:

};

SDL_Event* LunaTraits< SDL_Event >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Event >::_bind_dtor(SDL_Event* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_Event >::className[] = "SDL_Event";
const char LunaTraits< SDL_Event >::fullName[] = "SDL_Event";
const char LunaTraits< SDL_Event >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Event >::parents[] = {0};
const int LunaTraits< SDL_Event >::hash = 46878127;
const int LunaTraits< SDL_Event >::uniqueIDs[] = {46878127,0};

luna_RegType LunaTraits< SDL_Event >::methods[] = {
	{"getType", &luna_wrapper_SDL_Event::_bind_getType},
	{"getActive", &luna_wrapper_SDL_Event::_bind_getActive},
	{"getKey", &luna_wrapper_SDL_Event::_bind_getKey},
	{"getMotion", &luna_wrapper_SDL_Event::_bind_getMotion},
	{"getButton", &luna_wrapper_SDL_Event::_bind_getButton},
	{"getJaxis", &luna_wrapper_SDL_Event::_bind_getJaxis},
	{"getJball", &luna_wrapper_SDL_Event::_bind_getJball},
	{"getJhat", &luna_wrapper_SDL_Event::_bind_getJhat},
	{"getJbutton", &luna_wrapper_SDL_Event::_bind_getJbutton},
	{"getResize", &luna_wrapper_SDL_Event::_bind_getResize},
	{"getExpose", &luna_wrapper_SDL_Event::_bind_getExpose},
	{"getQuit", &luna_wrapper_SDL_Event::_bind_getQuit},
	{"getUser", &luna_wrapper_SDL_Event::_bind_getUser},
	{"setType", &luna_wrapper_SDL_Event::_bind_setType},
	{"setActive", &luna_wrapper_SDL_Event::_bind_setActive},
	{"setKey", &luna_wrapper_SDL_Event::_bind_setKey},
	{"setMotion", &luna_wrapper_SDL_Event::_bind_setMotion},
	{"setButton", &luna_wrapper_SDL_Event::_bind_setButton},
	{"setJaxis", &luna_wrapper_SDL_Event::_bind_setJaxis},
	{"setJball", &luna_wrapper_SDL_Event::_bind_setJball},
	{"setJhat", &luna_wrapper_SDL_Event::_bind_setJhat},
	{"setJbutton", &luna_wrapper_SDL_Event::_bind_setJbutton},
	{"setResize", &luna_wrapper_SDL_Event::_bind_setResize},
	{"setExpose", &luna_wrapper_SDL_Event::_bind_setExpose},
	{"setQuit", &luna_wrapper_SDL_Event::_bind_setQuit},
	{"setUser", &luna_wrapper_SDL_Event::_bind_setUser},
	{"dynCast", &luna_wrapper_SDL_Event::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Event::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Event::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Event::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Event >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Event >::enumValues[] = {
	{0,0}
};


