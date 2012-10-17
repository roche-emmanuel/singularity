#include <plug_common.h>

class luna_wrapper_osg_AudioSink {
public:
	typedef Luna< osg::AudioSink > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::AudioSink* ptr= dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AudioSink >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_playing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osg::AudioSink::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::libraryName() const function, expected prototype:\nconst char * osg::AudioSink::libraryName() const\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioSink::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::className() const function, expected prototype:\nconst char * osg::AudioSink::className() const\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AudioSink::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::play() function, expected prototype:\nvoid osg::AudioSink::play()\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioSink::play()");
		}
		self->play();

		return 0;
	}

	// void osg::AudioSink::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::pause() function, expected prototype:\nvoid osg::AudioSink::pause()\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioSink::pause()");
		}
		self->pause();

		return 0;
	}

	// void osg::AudioSink::stop()
	static int _bind_stop(lua_State *L) {
		if (!_lg_typecheck_stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::stop() function, expected prototype:\nvoid osg::AudioSink::stop()\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioSink::stop()");
		}
		self->stop();

		return 0;
	}

	// bool osg::AudioSink::playing() const
	static int _bind_playing(lua_State *L) {
		if (!_lg_typecheck_playing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AudioSink::playing() const function, expected prototype:\nbool osg::AudioSink::playing() const\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AudioSink::playing() const");
		}
		bool lret = self->playing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::AudioSink::getDelay() const
	static int _bind_getDelay(lua_State *L) {
		if (!_lg_typecheck_getDelay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AudioSink::getDelay() const function, expected prototype:\ndouble osg::AudioSink::getDelay() const\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AudioSink::getDelay() const");
		}
		double lret = self->getDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AudioSink::setDelay(const double delay)
	static int _bind_setDelay(lua_State *L) {
		if (!_lg_typecheck_setDelay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::setDelay(const double delay) function, expected prototype:\nvoid osg::AudioSink::setDelay(const double delay)\nClass arguments details:\n");
		}

		double delay=(double)lua_tonumber(L,2);

		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioSink::setDelay(const double)");
		}
		self->setDelay(delay);

		return 0;
	}

	// void osg::AudioSink::setVolume(float )
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::setVolume(float ) function, expected prototype:\nvoid osg::AudioSink::setVolume(float )\nClass arguments details:\n");
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioSink::setVolume(float)");
		}
		self->setVolume(_arg1);

		return 0;
	}

	// float osg::AudioSink::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::AudioSink::getVolume() const function, expected prototype:\nfloat osg::AudioSink::getVolume() const\nClass arguments details:\n");
		}


		osg::AudioSink* self=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::AudioSink::getVolume() const");
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AudioSink* LunaTraits< osg::AudioSink >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::AudioSink::play()
	// void osg::AudioSink::pause()
	// void osg::AudioSink::stop()
	// bool osg::AudioSink::playing() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::AudioSink >::_bind_dtor(osg::AudioSink* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AudioSink >::className[] = "AudioSink";
const char LunaTraits< osg::AudioSink >::fullName[] = "osg::AudioSink";
const char LunaTraits< osg::AudioSink >::moduleName[] = "osg";
const char* LunaTraits< osg::AudioSink >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AudioSink >::hash = 74189446;
const int LunaTraits< osg::AudioSink >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AudioSink >::methods[] = {
	{"libraryName", &luna_wrapper_osg_AudioSink::_bind_libraryName},
	{"className", &luna_wrapper_osg_AudioSink::_bind_className},
	{"play", &luna_wrapper_osg_AudioSink::_bind_play},
	{"pause", &luna_wrapper_osg_AudioSink::_bind_pause},
	{"stop", &luna_wrapper_osg_AudioSink::_bind_stop},
	{"playing", &luna_wrapper_osg_AudioSink::_bind_playing},
	{"getDelay", &luna_wrapper_osg_AudioSink::_bind_getDelay},
	{"setDelay", &luna_wrapper_osg_AudioSink::_bind_setDelay},
	{"setVolume", &luna_wrapper_osg_AudioSink::_bind_setVolume},
	{"getVolume", &luna_wrapper_osg_AudioSink::_bind_getVolume},
	{"__eq", &luna_wrapper_osg_AudioSink::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AudioSink >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AudioSink::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AudioSink >::enumValues[] = {
	{0,0}
};


