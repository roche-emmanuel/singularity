#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebCore.h>

class luna_wrapper_Awesomium_WebCore {
public:
	typedef Luna< Awesomium::WebCore > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebCore,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53327) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebCore*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebCore* rhs =(Luna< Awesomium::WebCore >::check(L,2));
		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
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

		Awesomium::WebCore* self= (Awesomium::WebCore*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebCore >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53327) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebCore >::check(L,1));
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

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebCore");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebCore",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51132402) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Shutdown(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateWebSession(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,51772222) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateWebView(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3873994)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_surface_factory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86287934)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_surface_factory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_resource_interceptor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,29549996)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resource_interceptor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_version_string(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebCore::WebCore(lua_Table * data)
	static Awesomium::WebCore* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebCore::WebCore(lua_Table * data) function, expected prototype:\nAwesomium::WebCore::WebCore(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_WebCore(L,NULL);
	}


	// Function binds:
	// static Awesomium::WebCore * Awesomium::WebCore::Initialize(const Awesomium::WebConfig & config)
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in static Awesomium::WebCore * Awesomium::WebCore::Initialize(const Awesomium::WebConfig & config) function, expected prototype:\nstatic Awesomium::WebCore * Awesomium::WebCore::Initialize(const Awesomium::WebConfig & config)\nClass arguments details:\narg 1 ID = 51132402\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebConfig* config_ptr=(Luna< Awesomium::WebConfig >::check(L,1));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in Awesomium::WebCore::Initialize function");
		}
		const Awesomium::WebConfig & config=*config_ptr;

		Awesomium::WebCore * lret = Awesomium::WebCore::Initialize(config);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebCore >::push(L,lret,false);

		return 1;
	}

	// static void Awesomium::WebCore::Shutdown()
	static int _bind_Shutdown(lua_State *L) {
		if (!_lg_typecheck_Shutdown(L)) {
			luaL_error(L, "luna typecheck failed in static void Awesomium::WebCore::Shutdown() function, expected prototype:\nstatic void Awesomium::WebCore::Shutdown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore::Shutdown();

		return 0;
	}

	// static Awesomium::WebCore * Awesomium::WebCore::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luaL_error(L, "luna typecheck failed in static Awesomium::WebCore * Awesomium::WebCore::instance() function, expected prototype:\nstatic Awesomium::WebCore * Awesomium::WebCore::instance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore * lret = Awesomium::WebCore::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebCore >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs)
	static int _bind_CreateWebSession(lua_State *L) {
		if (!_lg_typecheck_CreateWebSession(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs) function, expected prototype:\nAwesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 51772222\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);
		const Awesomium::WebPreferences* prefs_ptr=(Luna< Awesomium::WebPreferences >::check(L,3));
		if( !prefs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prefs in Awesomium::WebCore::CreateWebSession function");
		}
		const Awesomium::WebPreferences & prefs=*prefs_ptr;

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString &, const Awesomium::WebPreferences &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebSession * lret = self->CreateWebSession(path, prefs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebSession >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebView * Awesomium::WebCore::CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen)
	static int _bind_CreateWebView(lua_State *L) {
		if (!_lg_typecheck_CreateWebView(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebView * Awesomium::WebCore::CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen) function, expected prototype:\nAwesomium::WebView * Awesomium::WebCore::CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen)\nClass arguments details:\narg 3 ID = 3873994\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		Awesomium::WebSession* session=luatop>3 ? (Luna< Awesomium::WebSession >::check(L,4)) : (Awesomium::WebSession*)0;
		Awesomium::WebViewType type=luatop>4 ? (Awesomium::WebViewType)lua_tointeger(L,5) : (Awesomium::WebViewType)Awesomium::kWebViewType_Offscreen;

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebView * Awesomium::WebCore::CreateWebView(int, int, Awesomium::WebSession *, Awesomium::WebViewType). Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebView * lret = self->CreateWebView(width, height, session, type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebView >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory * factory)
	static int _bind_set_surface_factory(lua_State *L) {
		if (!_lg_typecheck_set_surface_factory(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory * factory) function, expected prototype:\nvoid Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory * factory)\nClass arguments details:\narg 1 ID = 86287934\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::SurfaceFactory* factory=(Luna< Awesomium::SurfaceFactory >::check(L,2));

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory *). Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_surface_factory(factory);

		return 0;
	}

	// Awesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const
	static int _bind_surface_factory(lua_State *L) {
		if (!_lg_typecheck_surface_factory(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const function, expected prototype:\nAwesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::SurfaceFactory * lret = self->surface_factory();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::SurfaceFactory >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor)
	static int _bind_set_resource_interceptor(lua_State *L) {
		if (!_lg_typecheck_set_resource_interceptor(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor) function, expected prototype:\nvoid Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor)\nClass arguments details:\narg 1 ID = 29549996\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::ResourceInterceptor* interceptor=(Luna< Awesomium::ResourceInterceptor >::check(L,2));

		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor *). Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_resource_interceptor(interceptor);

		return 0;
	}

	// Awesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const
	static int _bind_resource_interceptor(lua_State *L) {
		if (!_lg_typecheck_resource_interceptor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const function, expected prototype:\nAwesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::ResourceInterceptor * lret = self->resource_interceptor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceInterceptor >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebCore::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebCore::Update() function, expected prototype:\nvoid Awesomium::WebCore::Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebCore::Update(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Update();

		return 0;
	}

	// const char * Awesomium::WebCore::version_string() const
	static int _bind_version_string(lua_State *L) {
		if (!_lg_typecheck_version_string(L)) {
			luaL_error(L, "luna typecheck failed in const char * Awesomium::WebCore::version_string() const function, expected prototype:\nconst char * Awesomium::WebCore::version_string() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebCore* self=(Luna< Awesomium::WebCore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * Awesomium::WebCore::version_string() const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebCore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->version_string();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

Awesomium::WebCore* LunaTraits< Awesomium::WebCore >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebCore::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// Awesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs)
	// Awesomium::WebView * Awesomium::WebCore::CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen)
	// void Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory * factory)
	// Awesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const
	// void Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor)
	// Awesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const
	// void Awesomium::WebCore::Update()
	// const char * Awesomium::WebCore::version_string() const
}

void LunaTraits< Awesomium::WebCore >::_bind_dtor(Awesomium::WebCore* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebCore >::className[] = "WebCore";
const char LunaTraits< Awesomium::WebCore >::fullName[] = "Awesomium::WebCore";
const char LunaTraits< Awesomium::WebCore >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebCore >::parents[] = {0};
const int LunaTraits< Awesomium::WebCore >::hash = 53327;
const int LunaTraits< Awesomium::WebCore >::uniqueIDs[] = {53327,0};

luna_RegType LunaTraits< Awesomium::WebCore >::methods[] = {
	{"Initialize", &luna_wrapper_Awesomium_WebCore::_bind_Initialize},
	{"Shutdown", &luna_wrapper_Awesomium_WebCore::_bind_Shutdown},
	{"instance", &luna_wrapper_Awesomium_WebCore::_bind_instance},
	{"CreateWebSession", &luna_wrapper_Awesomium_WebCore::_bind_CreateWebSession},
	{"CreateWebView", &luna_wrapper_Awesomium_WebCore::_bind_CreateWebView},
	{"set_surface_factory", &luna_wrapper_Awesomium_WebCore::_bind_set_surface_factory},
	{"surface_factory", &luna_wrapper_Awesomium_WebCore::_bind_surface_factory},
	{"set_resource_interceptor", &luna_wrapper_Awesomium_WebCore::_bind_set_resource_interceptor},
	{"resource_interceptor", &luna_wrapper_Awesomium_WebCore::_bind_resource_interceptor},
	{"Update", &luna_wrapper_Awesomium_WebCore::_bind_Update},
	{"version_string", &luna_wrapper_Awesomium_WebCore::_bind_version_string},
	{"dynCast", &luna_wrapper_Awesomium_WebCore::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebCore::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebCore::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebCore::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebCore::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebCore >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebCore >::enumValues[] = {
	{0,0}
};


