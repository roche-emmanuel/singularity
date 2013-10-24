#include <plug_common.h>

#include <luna/wrappers/wrapper_OSGSurfaceFactory.h>

class luna_wrapper_OSGSurfaceFactory {
public:
	typedef Luna< OSGSurfaceFactory > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::SurfaceFactory* self=(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::SurfaceFactory,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		OSGSurfaceFactory* self= (OSGSurfaceFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OSGSurfaceFactory >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86287934) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_SurfaceFactory(lua_State *L) {
		// all checked are already performed before reaching this point.
		//OSGSurfaceFactory* ptr= dynamic_cast< OSGSurfaceFactory* >(Luna< Awesomium::SurfaceFactory >::check(L,1));
		OSGSurfaceFactory* ptr= luna_caster< Awesomium::SurfaceFactory, OSGSurfaceFactory >::cast(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< OSGSurfaceFactory >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_CreateSurface(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroySurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23910648)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateSurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseSurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23910648)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseAllSurfaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CreateSurface(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DestroySurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23910648)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OSGSurfaceFactory::OSGSurfaceFactory()
	static OSGSurfaceFactory* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in OSGSurfaceFactory::OSGSurfaceFactory() function, expected prototype:\nOSGSurfaceFactory::OSGSurfaceFactory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new OSGSurfaceFactory();
	}

	// OSGSurfaceFactory::OSGSurfaceFactory(lua_Table * data)
	static OSGSurfaceFactory* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in OSGSurfaceFactory::OSGSurfaceFactory(lua_Table * data) function, expected prototype:\nOSGSurfaceFactory::OSGSurfaceFactory(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_OSGSurfaceFactory(L,NULL);
	}

	// Overload binder for OSGSurfaceFactory::OSGSurfaceFactory
	static OSGSurfaceFactory* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OSGSurfaceFactory, cannot match any of the overloads for function OSGSurfaceFactory:\n  OSGSurfaceFactory()\n  OSGSurfaceFactory(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// Awesomium::Surface * OSGSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	static int _bind_CreateSurface(lua_State *L) {
		if (!_lg_typecheck_CreateSurface(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * OSGSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height) function, expected prototype:\nAwesomium::Surface * OSGSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::Surface * OSGSurfaceFactory::CreateSurface(Awesomium::WebView *, int, int). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::Surface * lret = self->CreateSurface(view, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// void OSGSurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	static int _bind_DestroySurface(lua_State *L) {
		if (!_lg_typecheck_DestroySurface(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurfaceFactory::DestroySurface(Awesomium::Surface * surface) function, expected prototype:\nvoid OSGSurfaceFactory::DestroySurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurfaceFactory::DestroySurface(Awesomium::Surface *). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DestroySurface(surface);

		return 0;
	}

	// OSGSurface * OSGSurfaceFactory::getOrCreateSurface(Awesomium::WebView * view)
	static int _bind_getOrCreateSurface(lua_State *L) {
		if (!_lg_typecheck_getOrCreateSurface(L)) {
			luaL_error(L, "luna typecheck failed in OSGSurface * OSGSurfaceFactory::getOrCreateSurface(Awesomium::WebView * view) function, expected prototype:\nOSGSurface * OSGSurfaceFactory::getOrCreateSurface(Awesomium::WebView * view)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call OSGSurface * OSGSurfaceFactory::getOrCreateSurface(Awesomium::WebView *). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		OSGSurface * lret = self->getOrCreateSurface(view);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< OSGSurface >::push(L,lret,false);

		return 1;
	}

	// bool OSGSurfaceFactory::releaseSurface(Awesomium::Surface * surface)
	static int _bind_releaseSurface(lua_State *L) {
		if (!_lg_typecheck_releaseSurface(L)) {
			luaL_error(L, "luna typecheck failed in bool OSGSurfaceFactory::releaseSurface(Awesomium::Surface * surface) function, expected prototype:\nbool OSGSurfaceFactory::releaseSurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool OSGSurfaceFactory::releaseSurface(Awesomium::Surface *). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseSurface(surface);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void OSGSurfaceFactory::releaseAllSurfaces()
	static int _bind_releaseAllSurfaces(lua_State *L) {
		if (!_lg_typecheck_releaseAllSurfaces(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurfaceFactory::releaseAllSurfaces() function, expected prototype:\nvoid OSGSurfaceFactory::releaseAllSurfaces()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurfaceFactory::releaseAllSurfaces(). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseAllSurfaces();

		return 0;
	}

	// Awesomium::Surface * OSGSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height)
	static int _bind_base_CreateSurface(lua_State *L) {
		if (!_lg_typecheck_base_CreateSurface(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * OSGSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height) function, expected prototype:\nAwesomium::Surface * OSGSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::Surface * OSGSurfaceFactory::base_CreateSurface(Awesomium::WebView *, int, int). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::Surface * lret = self->OSGSurfaceFactory::CreateSurface(view, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// void OSGSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface)
	static int _bind_base_DestroySurface(lua_State *L) {
		if (!_lg_typecheck_base_DestroySurface(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface) function, expected prototype:\nvoid OSGSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		OSGSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< OSGSurfaceFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurfaceFactory::base_DestroySurface(Awesomium::Surface *). Got : '%s'\n%s",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OSGSurfaceFactory::DestroySurface(surface);

		return 0;
	}


	// Operator binds:

};

OSGSurfaceFactory* LunaTraits< OSGSurfaceFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OSGSurfaceFactory::_bind_ctor(L);
}

void LunaTraits< OSGSurfaceFactory >::_bind_dtor(OSGSurfaceFactory* obj) {
	delete obj;
}

const char LunaTraits< OSGSurfaceFactory >::className[] = "OSGSurfaceFactory";
const char LunaTraits< OSGSurfaceFactory >::fullName[] = "OSGSurfaceFactory";
const char LunaTraits< OSGSurfaceFactory >::moduleName[] = "Awesomium";
const char* LunaTraits< OSGSurfaceFactory >::parents[] = {"Awesomium.SurfaceFactory", 0};
const int LunaTraits< OSGSurfaceFactory >::hash = 6510400;
const int LunaTraits< OSGSurfaceFactory >::uniqueIDs[] = {86287934,0};

luna_RegType LunaTraits< OSGSurfaceFactory >::methods[] = {
	{"CreateSurface", &luna_wrapper_OSGSurfaceFactory::_bind_CreateSurface},
	{"DestroySurface", &luna_wrapper_OSGSurfaceFactory::_bind_DestroySurface},
	{"getOrCreateSurface", &luna_wrapper_OSGSurfaceFactory::_bind_getOrCreateSurface},
	{"releaseSurface", &luna_wrapper_OSGSurfaceFactory::_bind_releaseSurface},
	{"releaseAllSurfaces", &luna_wrapper_OSGSurfaceFactory::_bind_releaseAllSurfaces},
	{"base_CreateSurface", &luna_wrapper_OSGSurfaceFactory::_bind_base_CreateSurface},
	{"base_DestroySurface", &luna_wrapper_OSGSurfaceFactory::_bind_base_DestroySurface},
	{"fromVoid", &luna_wrapper_OSGSurfaceFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OSGSurfaceFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_OSGSurfaceFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OSGSurfaceFactory >::converters[] = {
	{"Awesomium::SurfaceFactory", &luna_wrapper_OSGSurfaceFactory::_cast_from_SurfaceFactory},
	{0,0}
};

luna_RegEnumType LunaTraits< OSGSurfaceFactory >::enumValues[] = {
	{0,0}
};


