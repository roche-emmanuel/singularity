#include <plug_common.h>

#include <luna/wrappers/wrapper_vlc_VLCImageStream.h>

class luna_wrapper_vlc_VLCImageStream {
public:
	typedef Luna< vlc::VLCImageStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		vlc::VLCImageStream* self= (vlc::VLCImageStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< vlc::VLCImageStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_ImageStream(lua_State *L) {
		// all checked are already performed before reaching this point.
		//vlc::VLCImageStream* ptr= dynamic_cast< vlc::VLCImageStream* >(Luna< osg::Referenced >::check(L,1));
		vlc::VLCImageStream* ptr= luna_caster< osg::Referenced, vlc::VLCImageStream >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< vlc::VLCImageStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_open(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// vlc::VLCImageStream::VLCImageStream()
	static vlc::VLCImageStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in vlc::VLCImageStream::VLCImageStream() function, expected prototype:\nvlc::VLCImageStream::VLCImageStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new vlc::VLCImageStream();
	}

	// vlc::VLCImageStream::VLCImageStream(lua_Table * data)
	static vlc::VLCImageStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in vlc::VLCImageStream::VLCImageStream(lua_Table * data) function, expected prototype:\nvlc::VLCImageStream::VLCImageStream(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_vlc_VLCImageStream(L,NULL);
	}

	// Overload binder for vlc::VLCImageStream::VLCImageStream
	static vlc::VLCImageStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VLCImageStream, cannot match any of the overloads for function VLCImageStream:\n  VLCImageStream()\n  VLCImageStream(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void vlc::VLCImageStream::open(const std::string & file, bool needPlay = true, unsigned int w = 512, unsigned int h = 512)
	static int _bind_open(lua_State *L) {
		if (!_lg_typecheck_open(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::open(const std::string & file, bool needPlay = true, unsigned int w = 512, unsigned int h = 512) function, expected prototype:\nvoid vlc::VLCImageStream::open(const std::string & file, bool needPlay = true, unsigned int w = 512, unsigned int h = 512)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool needPlay=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		unsigned int w=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)512;
		unsigned int h=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)512;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::open(const std::string &, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->open(file, needPlay, w, h);

		return 0;
	}

	// void vlc::VLCImageStream::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::play() function, expected prototype:\nvoid vlc::VLCImageStream::play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->play();

		return 0;
	}

	// void vlc::VLCImageStream::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::pause() function, expected prototype:\nvoid vlc::VLCImageStream::pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pause();

		return 0;
	}

	// void vlc::VLCImageStream::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::rewind() function, expected prototype:\nvoid vlc::VLCImageStream::rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rewind();

		return 0;
	}

	// void vlc::VLCImageStream::quit(bool waitForThreadToExit = true)
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::quit(bool waitForThreadToExit = true) function, expected prototype:\nvoid vlc::VLCImageStream::quit(bool waitForThreadToExit = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool waitForThreadToExit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::quit(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quit(waitForThreadToExit);

		return 0;
	}

	// void vlc::VLCImageStream::setReferenceTime(double time)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setReferenceTime(double time) function, expected prototype:\nvoid vlc::VLCImageStream::setReferenceTime(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceTime(time);

		return 0;
	}

	// double vlc::VLCImageStream::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::getReferenceTime() const function, expected prototype:\ndouble vlc::VLCImageStream::getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::setTimeMultiplier(double m)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setTimeMultiplier(double m) function, expected prototype:\nvoid vlc::VLCImageStream::setTimeMultiplier(double m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double m=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeMultiplier(m);

		return 0;
	}

	// double vlc::VLCImageStream::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::getTimeMultiplier() const function, expected prototype:\ndouble vlc::VLCImageStream::getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::setVolume(float vol)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setVolume(float vol) function, expected prototype:\nvoid vlc::VLCImageStream::setVolume(float vol)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float vol=(float)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVolume(vol);

		return 0;
	}

	// float vlc::VLCImageStream::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float vlc::VLCImageStream::getVolume() const function, expected prototype:\nfloat vlc::VLCImageStream::getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float vlc::VLCImageStream::getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_play() function, expected prototype:\nvoid vlc::VLCImageStream::base_play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::play();

		return 0;
	}

	// void vlc::VLCImageStream::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_pause() function, expected prototype:\nvoid vlc::VLCImageStream::base_pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::pause();

		return 0;
	}

	// void vlc::VLCImageStream::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_rewind() function, expected prototype:\nvoid vlc::VLCImageStream::base_rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::rewind();

		return 0;
	}

	// void vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true) function, expected prototype:\nvoid vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool waitForThreadToExit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_quit(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::quit(waitForThreadToExit);

		return 0;
	}

	// void vlc::VLCImageStream::base_setReferenceTime(double time)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setReferenceTime(double time) function, expected prototype:\nvoid vlc::VLCImageStream::base_setReferenceTime(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::setReferenceTime(time);

		return 0;
	}

	// double vlc::VLCImageStream::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::base_getReferenceTime() const function, expected prototype:\ndouble vlc::VLCImageStream::base_getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::base_getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->VLCImageStream::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_setTimeMultiplier(double m)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setTimeMultiplier(double m) function, expected prototype:\nvoid vlc::VLCImageStream::base_setTimeMultiplier(double m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double m=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::setTimeMultiplier(m);

		return 0;
	}

	// double vlc::VLCImageStream::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::base_getTimeMultiplier() const function, expected prototype:\ndouble vlc::VLCImageStream::base_getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::base_getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->VLCImageStream::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_setVolume(float vol)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setVolume(float vol) function, expected prototype:\nvoid vlc::VLCImageStream::base_setVolume(float vol)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float vol=(float)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VLCImageStream::setVolume(vol);

		return 0;
	}

	// float vlc::VLCImageStream::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float vlc::VLCImageStream::base_getVolume() const function, expected prototype:\nfloat vlc::VLCImageStream::base_getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float vlc::VLCImageStream::base_getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VLCImageStream::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

vlc::VLCImageStream* LunaTraits< vlc::VLCImageStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_vlc_VLCImageStream::_bind_ctor(L);
}

void LunaTraits< vlc::VLCImageStream >::_bind_dtor(vlc::VLCImageStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< vlc::VLCImageStream >::className[] = "VLCImageStream";
const char LunaTraits< vlc::VLCImageStream >::fullName[] = "vlc::VLCImageStream";
const char LunaTraits< vlc::VLCImageStream >::moduleName[] = "vlc";
const char* LunaTraits< vlc::VLCImageStream >::parents[] = {"osg.ImageStream", 0};
const int LunaTraits< vlc::VLCImageStream >::hash = 85975448;
const int LunaTraits< vlc::VLCImageStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< vlc::VLCImageStream >::methods[] = {
	{"open", &luna_wrapper_vlc_VLCImageStream::_bind_open},
	{"play", &luna_wrapper_vlc_VLCImageStream::_bind_play},
	{"pause", &luna_wrapper_vlc_VLCImageStream::_bind_pause},
	{"rewind", &luna_wrapper_vlc_VLCImageStream::_bind_rewind},
	{"quit", &luna_wrapper_vlc_VLCImageStream::_bind_quit},
	{"setReferenceTime", &luna_wrapper_vlc_VLCImageStream::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_vlc_VLCImageStream::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_vlc_VLCImageStream::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_vlc_VLCImageStream::_bind_getTimeMultiplier},
	{"setVolume", &luna_wrapper_vlc_VLCImageStream::_bind_setVolume},
	{"getVolume", &luna_wrapper_vlc_VLCImageStream::_bind_getVolume},
	{"base_play", &luna_wrapper_vlc_VLCImageStream::_bind_base_play},
	{"base_pause", &luna_wrapper_vlc_VLCImageStream::_bind_base_pause},
	{"base_rewind", &luna_wrapper_vlc_VLCImageStream::_bind_base_rewind},
	{"base_quit", &luna_wrapper_vlc_VLCImageStream::_bind_base_quit},
	{"base_setReferenceTime", &luna_wrapper_vlc_VLCImageStream::_bind_base_setReferenceTime},
	{"base_getReferenceTime", &luna_wrapper_vlc_VLCImageStream::_bind_base_getReferenceTime},
	{"base_setTimeMultiplier", &luna_wrapper_vlc_VLCImageStream::_bind_base_setTimeMultiplier},
	{"base_getTimeMultiplier", &luna_wrapper_vlc_VLCImageStream::_bind_base_getTimeMultiplier},
	{"base_setVolume", &luna_wrapper_vlc_VLCImageStream::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_vlc_VLCImageStream::_bind_base_getVolume},
	{"fromVoid", &luna_wrapper_vlc_VLCImageStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_vlc_VLCImageStream::_bind_asVoid},
	{"getTable", &luna_wrapper_vlc_VLCImageStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< vlc::VLCImageStream >::converters[] = {
	{"osg::ImageStream", &luna_wrapper_vlc_VLCImageStream::_cast_from_ImageStream},
	{0,0}
};

luna_RegEnumType LunaTraits< vlc::VLCImageStream >::enumValues[] = {
	{0,0}
};


