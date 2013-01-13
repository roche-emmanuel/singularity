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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in vlc::VLCImageStream::VLCImageStream() function, expected prototype:\nvlc::VLCImageStream::VLCImageStream()\nClass arguments details:\n");
		}


		return new vlc::VLCImageStream();
	}

	// vlc::VLCImageStream::VLCImageStream(lua_Table * data)
	static vlc::VLCImageStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in vlc::VLCImageStream::VLCImageStream(lua_Table * data) function, expected prototype:\nvlc::VLCImageStream::VLCImageStream(lua_Table * data)\nClass arguments details:\n");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::open(const std::string & file, bool needPlay = true, unsigned int w = 512, unsigned int h = 512) function, expected prototype:\nvoid vlc::VLCImageStream::open(const std::string & file, bool needPlay = true, unsigned int w = 512, unsigned int h = 512)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool needPlay=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		unsigned int w=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 512;
		unsigned int h=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 512;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::open(const std::string &, bool, unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->open(file, needPlay, w, h);

		return 0;
	}

	// void vlc::VLCImageStream::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::play() function, expected prototype:\nvoid vlc::VLCImageStream::play()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::play(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->play();

		return 0;
	}

	// void vlc::VLCImageStream::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::pause() function, expected prototype:\nvoid vlc::VLCImageStream::pause()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::pause(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->pause();

		return 0;
	}

	// void vlc::VLCImageStream::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::rewind() function, expected prototype:\nvoid vlc::VLCImageStream::rewind()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::rewind(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->rewind();

		return 0;
	}

	// void vlc::VLCImageStream::quit(bool waitForThreadToExit = true)
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::quit(bool waitForThreadToExit = true) function, expected prototype:\nvoid vlc::VLCImageStream::quit(bool waitForThreadToExit = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool waitForThreadToExit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::quit(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->quit(waitForThreadToExit);

		return 0;
	}

	// void vlc::VLCImageStream::setReferenceTime(double time)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setReferenceTime(double time) function, expected prototype:\nvoid vlc::VLCImageStream::setReferenceTime(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setReferenceTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setReferenceTime(time);

		return 0;
	}

	// double vlc::VLCImageStream::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::getReferenceTime() const function, expected prototype:\ndouble vlc::VLCImageStream::getReferenceTime() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::getReferenceTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::setTimeMultiplier(double m)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setTimeMultiplier(double m) function, expected prototype:\nvoid vlc::VLCImageStream::setTimeMultiplier(double m)\nClass arguments details:\n");
		}

		double m=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setTimeMultiplier(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTimeMultiplier(m);

		return 0;
	}

	// double vlc::VLCImageStream::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::getTimeMultiplier() const function, expected prototype:\ndouble vlc::VLCImageStream::getTimeMultiplier() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::getTimeMultiplier() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::setVolume(float vol)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::setVolume(float vol) function, expected prototype:\nvoid vlc::VLCImageStream::setVolume(float vol)\nClass arguments details:\n");
		}

		float vol=(float)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::setVolume(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setVolume(vol);

		return 0;
	}

	// float vlc::VLCImageStream::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float vlc::VLCImageStream::getVolume() const function, expected prototype:\nfloat vlc::VLCImageStream::getVolume() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float vlc::VLCImageStream::getVolume() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_play() function, expected prototype:\nvoid vlc::VLCImageStream::base_play()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_play(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::play();

		return 0;
	}

	// void vlc::VLCImageStream::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_pause() function, expected prototype:\nvoid vlc::VLCImageStream::base_pause()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_pause(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::pause();

		return 0;
	}

	// void vlc::VLCImageStream::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_rewind() function, expected prototype:\nvoid vlc::VLCImageStream::base_rewind()\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_rewind(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::rewind();

		return 0;
	}

	// void vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true) function, expected prototype:\nvoid vlc::VLCImageStream::base_quit(bool waitForThreadToExit = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool waitForThreadToExit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_quit(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::quit(waitForThreadToExit);

		return 0;
	}

	// void vlc::VLCImageStream::base_setReferenceTime(double time)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setReferenceTime(double time) function, expected prototype:\nvoid vlc::VLCImageStream::base_setReferenceTime(double time)\nClass arguments details:\n");
		}

		double time=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setReferenceTime(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::setReferenceTime(time);

		return 0;
	}

	// double vlc::VLCImageStream::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::base_getReferenceTime() const function, expected prototype:\ndouble vlc::VLCImageStream::base_getReferenceTime() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::base_getReferenceTime() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->VLCImageStream::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_setTimeMultiplier(double m)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setTimeMultiplier(double m) function, expected prototype:\nvoid vlc::VLCImageStream::base_setTimeMultiplier(double m)\nClass arguments details:\n");
		}

		double m=(double)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setTimeMultiplier(double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::setTimeMultiplier(m);

		return 0;
	}

	// double vlc::VLCImageStream::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double vlc::VLCImageStream::base_getTimeMultiplier() const function, expected prototype:\ndouble vlc::VLCImageStream::base_getTimeMultiplier() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double vlc::VLCImageStream::base_getTimeMultiplier() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		double lret = self->VLCImageStream::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void vlc::VLCImageStream::base_setVolume(float vol)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void vlc::VLCImageStream::base_setVolume(float vol) function, expected prototype:\nvoid vlc::VLCImageStream::base_setVolume(float vol)\nClass arguments details:\n");
		}

		float vol=(float)lua_tonumber(L,2);

		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void vlc::VLCImageStream::base_setVolume(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->VLCImageStream::setVolume(vol);

		return 0;
	}

	// float vlc::VLCImageStream::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float vlc::VLCImageStream::base_getVolume() const function, expected prototype:\nfloat vlc::VLCImageStream::base_getVolume() const\nClass arguments details:\n");
		}


		vlc::VLCImageStream* self=Luna< osg::Referenced >::checkSubType< vlc::VLCImageStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float vlc::VLCImageStream::base_getVolume() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->VLCImageStream::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

vlc::VLCImageStream* LunaTraits< vlc::VLCImageStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_vlc_VLCImageStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"__eq", &luna_wrapper_vlc_VLCImageStream::_bind___eq},
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


