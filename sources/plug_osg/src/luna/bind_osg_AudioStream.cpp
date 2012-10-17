#include <plug_common.h>

class luna_wrapper_osg_AudioStream {
public:
	typedef Luna< osg::AudioStream > luna_t;

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
		osg::AudioStream* ptr= dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AudioStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAudioSink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_consumeAudioBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_audioFrequency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_audioNbChannels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_audioSampleFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::AudioStream::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AudioStream::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AudioStream::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AudioStream::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AudioStream::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::libraryName() const function, expected prototype:\nconst char * osg::AudioStream::libraryName() const\nClass arguments details:\n");
		}


		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioStream::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::className() const function, expected prototype:\nconst char * osg::AudioStream::className() const\nClass arguments details:\n");
		}


		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)
	static int _bind_setAudioSink(lua_State *L) {
		if (!_lg_typecheck_setAudioSink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink) function, expected prototype:\nvoid osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::AudioSink* audio_sink=dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,2));

		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioStream::setAudioSink(osg::AudioSink *)");
		}
		self->setAudioSink(audio_sink);

		return 0;
	}

	// void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)
	static int _bind_consumeAudioBuffer(lua_State *L) {
		if (!_lg_typecheck_consumeAudioBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size) function, expected prototype:\nvoid osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AudioStream::consumeAudioBuffer(void *const, const size_t)");
		}
		self->consumeAudioBuffer(buffer, size);

		return 0;
	}

	// int osg::AudioStream::audioFrequency() const
	static int _bind_audioFrequency(lua_State *L) {
		if (!_lg_typecheck_audioFrequency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::AudioStream::audioFrequency() const function, expected prototype:\nint osg::AudioStream::audioFrequency() const\nClass arguments details:\n");
		}


		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::AudioStream::audioFrequency() const");
		}
		int lret = self->audioFrequency();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AudioStream::audioNbChannels() const
	static int _bind_audioNbChannels(lua_State *L) {
		if (!_lg_typecheck_audioNbChannels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::AudioStream::audioNbChannels() const function, expected prototype:\nint osg::AudioStream::audioNbChannels() const\nClass arguments details:\n");
		}


		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::AudioStream::audioNbChannels() const");
		}
		int lret = self->audioNbChannels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const
	static int _bind_audioSampleFormat(lua_State *L) {
		if (!_lg_typecheck_audioSampleFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const function, expected prototype:\nosg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const\nClass arguments details:\n");
		}


		osg::AudioStream* self=dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const");
		}
		osg::AudioStream::SampleFormat lret = self->audioSampleFormat();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AudioStream* LunaTraits< osg::AudioStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)
	// void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)
	// int osg::AudioStream::audioFrequency() const
	// int osg::AudioStream::audioNbChannels() const
	// osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::AudioStream >::_bind_dtor(osg::AudioStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AudioStream >::className[] = "AudioStream";
const char LunaTraits< osg::AudioStream >::fullName[] = "osg::AudioStream";
const char LunaTraits< osg::AudioStream >::moduleName[] = "osg";
const char* LunaTraits< osg::AudioStream >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AudioStream >::hash = 6322156;
const int LunaTraits< osg::AudioStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AudioStream >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_AudioStream::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AudioStream::_bind_libraryName},
	{"className", &luna_wrapper_osg_AudioStream::_bind_className},
	{"setAudioSink", &luna_wrapper_osg_AudioStream::_bind_setAudioSink},
	{"consumeAudioBuffer", &luna_wrapper_osg_AudioStream::_bind_consumeAudioBuffer},
	{"audioFrequency", &luna_wrapper_osg_AudioStream::_bind_audioFrequency},
	{"audioNbChannels", &luna_wrapper_osg_AudioStream::_bind_audioNbChannels},
	{"audioSampleFormat", &luna_wrapper_osg_AudioStream::_bind_audioSampleFormat},
	{"__eq", &luna_wrapper_osg_AudioStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AudioStream >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AudioStream::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AudioStream >::enumValues[] = {
	{"SAMPLE_FORMAT_U8", osg::AudioStream::SAMPLE_FORMAT_U8},
	{"SAMPLE_FORMAT_S16", osg::AudioStream::SAMPLE_FORMAT_S16},
	{"SAMPLE_FORMAT_S24", osg::AudioStream::SAMPLE_FORMAT_S24},
	{"SAMPLE_FORMAT_S32", osg::AudioStream::SAMPLE_FORMAT_S32},
	{"SAMPLE_FORMAT_F32", osg::AudioStream::SAMPLE_FORMAT_F32},
	{0,0}
};


