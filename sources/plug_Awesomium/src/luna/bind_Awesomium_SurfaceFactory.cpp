#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_SurfaceFactory.h>

class luna_wrapper_Awesomium_SurfaceFactory {
public:
	typedef Luna< Awesomium::SurfaceFactory > luna_t;

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

		Awesomium::SurfaceFactory* self= (Awesomium::SurfaceFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::SurfaceFactory >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::SurfaceFactory* self=(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::SurfaceFactory");
		
		return luna_dynamicCast(L,converters,"Awesomium::SurfaceFactory",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::SurfaceFactory::SurfaceFactory(lua_Table * data)
	static Awesomium::SurfaceFactory* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::SurfaceFactory::SurfaceFactory(lua_Table * data) function, expected prototype:\nAwesomium::SurfaceFactory::SurfaceFactory(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_SurfaceFactory(L,NULL);
	}


	// Function binds:
	// Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	static int _bind_CreateSurface(lua_State *L) {
		if (!_lg_typecheck_CreateSurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height) function, expected prototype:\nAwesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		Awesomium::SurfaceFactory* self=(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView *, int, int). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		Awesomium::Surface * lret = self->CreateSurface(view, width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Surface >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	static int _bind_DestroySurface(lua_State *L) {
		if (!_lg_typecheck_DestroySurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface) function, expected prototype:\nvoid Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface)\nClass arguments details:\narg 1 ID = 23910648\n");
		}

		Awesomium::Surface* surface=(Luna< Awesomium::Surface >::check(L,2));

		Awesomium::SurfaceFactory* self=(Luna< Awesomium::SurfaceFactory >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface *). Got : '%s'",typeid(Luna< Awesomium::SurfaceFactory >::check(L,1)).name());
		}
		self->DestroySurface(surface);

		return 0;
	}


	// Operator binds:

};

Awesomium::SurfaceFactory* LunaTraits< Awesomium::SurfaceFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_SurfaceFactory::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	// void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface)
}

void LunaTraits< Awesomium::SurfaceFactory >::_bind_dtor(Awesomium::SurfaceFactory* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::SurfaceFactory >::className[] = "SurfaceFactory";
const char LunaTraits< Awesomium::SurfaceFactory >::fullName[] = "Awesomium::SurfaceFactory";
const char LunaTraits< Awesomium::SurfaceFactory >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::SurfaceFactory >::parents[] = {0};
const int LunaTraits< Awesomium::SurfaceFactory >::hash = 86287934;
const int LunaTraits< Awesomium::SurfaceFactory >::uniqueIDs[] = {86287934,0};

luna_RegType LunaTraits< Awesomium::SurfaceFactory >::methods[] = {
	{"CreateSurface", &luna_wrapper_Awesomium_SurfaceFactory::_bind_CreateSurface},
	{"DestroySurface", &luna_wrapper_Awesomium_SurfaceFactory::_bind_DestroySurface},
	{"dynCast", &luna_wrapper_Awesomium_SurfaceFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_SurfaceFactory::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_SurfaceFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_SurfaceFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_SurfaceFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::SurfaceFactory >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::SurfaceFactory >::enumValues[] = {
	{0,0}
};


