#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_BitmapSurfaceFactory.h>

class luna_wrapper_Awesomium_BitmapSurfaceFactory {
public:
	typedef Luna< Awesomium::BitmapSurfaceFactory > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86287934) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::SurfaceFactory*)");
		}

		Awesomium::SurfaceFactory* rhs =(Luna< Awesomium::SurfaceFactory >::check(L,2));
		Awesomium::SurfaceFactory* self=(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::BitmapSurfaceFactory* self= (Awesomium::BitmapSurfaceFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::BitmapSurfaceFactory >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86287934) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
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
		//Awesomium::BitmapSurfaceFactory* ptr= dynamic_cast< Awesomium::BitmapSurfaceFactory* >(Luna< Awesomium::SurfaceFactory >::check(L,1));
		Awesomium::BitmapSurfaceFactory* ptr= luna_caster< Awesomium::SurfaceFactory, Awesomium::BitmapSurfaceFactory >::cast(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< Awesomium::BitmapSurfaceFactory >::push(L,ptr,false);
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
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroySurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23910648)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateSurface(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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
	// Awesomium::BitmapSurfaceFactory::BitmapSurfaceFactory()
	static Awesomium::BitmapSurfaceFactory* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::BitmapSurfaceFactory::BitmapSurfaceFactory() function, expected prototype:\nAwesomium::BitmapSurfaceFactory::BitmapSurfaceFactory()\nClass arguments details:\n");
		}


		return new Awesomium::BitmapSurfaceFactory();
	}

	// Awesomium::BitmapSurfaceFactory::BitmapSurfaceFactory(lua_Table * data)
	static Awesomium::BitmapSurfaceFactory* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::BitmapSurfaceFactory::BitmapSurfaceFactory(lua_Table * data) function, expected prototype:\nAwesomium::BitmapSurfaceFactory::BitmapSurfaceFactory(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_BitmapSurfaceFactory(L,NULL);
	}

	// Overload binder for Awesomium::BitmapSurfaceFactory::BitmapSurfaceFactory
	static Awesomium::BitmapSurfaceFactory* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BitmapSurfaceFactory, cannot match any of the overloads for function BitmapSurfaceFactory:\n  BitmapSurfaceFactory()\n  BitmapSurfaceFactory(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// Awesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	static int _bind_CreateSurface(lua_State *L) {
		if (!_lg_typecheck_CreateSurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height) function, expected prototype:\nAwesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		Awesomium::BitmapSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< Awesomium::BitmapSurfaceFactory >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView *, int, int). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		Awesomium::Surface * lret = self->CreateSurface(view, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	static int _bind_DestroySurface(lua_State *L) {
		if (!_lg_typecheck_DestroySurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface * surface) function, expected prototype:\nvoid Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n");
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		Awesomium::BitmapSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< Awesomium::BitmapSurfaceFactory >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface *). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		self->DestroySurface(surface);

		return 0;
	}

	// Awesomium::Surface * Awesomium::BitmapSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height)
	static int _bind_base_CreateSurface(lua_State *L) {
		if (!_lg_typecheck_base_CreateSurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * Awesomium::BitmapSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height) function, expected prototype:\nAwesomium::Surface * Awesomium::BitmapSurfaceFactory::base_CreateSurface(Awesomium::WebView * view, int width, int height)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		Awesomium::BitmapSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< Awesomium::BitmapSurfaceFactory >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Surface * Awesomium::BitmapSurfaceFactory::base_CreateSurface(Awesomium::WebView *, int, int). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		Awesomium::Surface * lret = self->BitmapSurfaceFactory::CreateSurface(view, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::BitmapSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface)
	static int _bind_base_DestroySurface(lua_State *L) {
		if (!_lg_typecheck_base_DestroySurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface) function, expected prototype:\nvoid Awesomium::BitmapSurfaceFactory::base_DestroySurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n");
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		Awesomium::BitmapSurfaceFactory* self=Luna< Awesomium::SurfaceFactory >::checkSubType< Awesomium::BitmapSurfaceFactory >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurfaceFactory::base_DestroySurface(Awesomium::Surface *). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		self->BitmapSurfaceFactory::DestroySurface(surface);

		return 0;
	}


	// Operator binds:

};

Awesomium::BitmapSurfaceFactory* LunaTraits< Awesomium::BitmapSurfaceFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_ctor(L);
}

void LunaTraits< Awesomium::BitmapSurfaceFactory >::_bind_dtor(Awesomium::BitmapSurfaceFactory* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::BitmapSurfaceFactory >::className[] = "BitmapSurfaceFactory";
const char LunaTraits< Awesomium::BitmapSurfaceFactory >::fullName[] = "Awesomium::BitmapSurfaceFactory";
const char LunaTraits< Awesomium::BitmapSurfaceFactory >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::BitmapSurfaceFactory >::parents[] = {"Awesomium.SurfaceFactory", 0};
const int LunaTraits< Awesomium::BitmapSurfaceFactory >::hash = 85091471;
const int LunaTraits< Awesomium::BitmapSurfaceFactory >::uniqueIDs[] = {86287934,0};

luna_RegType LunaTraits< Awesomium::BitmapSurfaceFactory >::methods[] = {
	{"CreateSurface", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_CreateSurface},
	{"DestroySurface", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_DestroySurface},
	{"base_CreateSurface", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_base_CreateSurface},
	{"base_DestroySurface", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_base_DestroySurface},
	{"__eq", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::BitmapSurfaceFactory >::converters[] = {
	{"Awesomium::SurfaceFactory", &luna_wrapper_Awesomium_BitmapSurfaceFactory::_cast_from_SurfaceFactory},
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::BitmapSurfaceFactory >::enumValues[] = {
	{0,0}
};


