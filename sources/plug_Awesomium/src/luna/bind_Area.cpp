#include <plug_common.h>

class luna_wrapper_Area {
public:
	typedef Luna< Area > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Area* self= (Area*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Area >::push(L,self,false);
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
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//Area* ptr= dynamic_cast< Area* >(Luna< osg::Referenced >::check(L,1));
		Area* ptr= luna_caster< osg::Referenced, Area >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< Area >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Area::Area()
	static Area* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Area::Area() function, expected prototype:\nArea::Area()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new Area();
	}

	// Area::Area(int xx, int yy, int ww, int hh, unsigned char * ptr)
	static Area* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in Area::Area(int xx, int yy, int ww, int hh, unsigned char * ptr) function, expected prototype:\nArea::Area(int xx, int yy, int ww, int hh, unsigned char * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xx=(int)lua_tointeger(L,1);
		int yy=(int)lua_tointeger(L,2);
		int ww=(int)lua_tointeger(L,3);
		int hh=(int)lua_tointeger(L,4);
		unsigned char ptr = (unsigned char)(lua_tointeger(L,5));

		return new Area(xx, yy, ww, hh, &ptr);
	}

	// Overload binder for Area::Area
	static Area* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Area, cannot match any of the overloads for function Area:\n  Area()\n  Area(int, int, int, int, unsigned char *)\n");
		return NULL;
	}


	// Function binds:
	// int Area::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int Area::x() function, expected prototype:\nint Area::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int Area::x(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Area::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int Area::y() function, expected prototype:\nint Area::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int Area::y(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Area::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int Area::width() function, expected prototype:\nint Area::width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int Area::width(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Area::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int Area::height() function, expected prototype:\nint Area::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int Area::height(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * Area::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * Area::data() function, expected prototype:\nunsigned char * Area::data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * Area::data(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->data;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void Area::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void Area::x(int value) function, expected prototype:\nvoid Area::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Area::x(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void Area::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void Area::y(int value) function, expected prototype:\nvoid Area::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Area::y(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void Area::width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void Area::width(int value) function, expected prototype:\nvoid Area::width(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Area::width(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->width = value;

		return 0;
	}

	// void Area::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void Area::height(int value) function, expected prototype:\nvoid Area::height(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Area::height(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->height = value;

		return 0;
	}

	// void Area::data(unsigned char * value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void Area::data(unsigned char * value) function, expected prototype:\nvoid Area::data(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		Area* self=Luna< osg::Referenced >::checkSubType< Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Area::data(unsigned char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data = &value;

		return 0;
	}


	// Operator binds:

};

Area* LunaTraits< Area >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Area::_bind_ctor(L);
}

void LunaTraits< Area >::_bind_dtor(Area* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< Area >::className[] = "Area";
const char LunaTraits< Area >::fullName[] = "Area";
const char LunaTraits< Area >::moduleName[] = "Awesomium";
const char* LunaTraits< Area >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< Area >::hash = 2049197;
const int LunaTraits< Area >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< Area >::methods[] = {
	{"getX", &luna_wrapper_Area::_bind_getX},
	{"getY", &luna_wrapper_Area::_bind_getY},
	{"getWidth", &luna_wrapper_Area::_bind_getWidth},
	{"getHeight", &luna_wrapper_Area::_bind_getHeight},
	{"getData", &luna_wrapper_Area::_bind_getData},
	{"setX", &luna_wrapper_Area::_bind_setX},
	{"setY", &luna_wrapper_Area::_bind_setY},
	{"setWidth", &luna_wrapper_Area::_bind_setWidth},
	{"setHeight", &luna_wrapper_Area::_bind_setHeight},
	{"setData", &luna_wrapper_Area::_bind_setData},
	{"fromVoid", &luna_wrapper_Area::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Area::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Area >::converters[] = {
	{"osg::Referenced", &luna_wrapper_Area::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< Area >::enumValues[] = {
	{0,0}
};


