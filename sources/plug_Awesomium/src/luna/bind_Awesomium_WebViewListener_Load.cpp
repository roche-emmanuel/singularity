#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_Load.h>

class luna_wrapper_Awesomium_WebViewListener_Load {
public:
	typedef Luna< Awesomium::WebViewListener::Load > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::Load,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9685114) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::Load*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Load* rhs =(Luna< Awesomium::WebViewListener::Load >::check(L,2));
		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
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

		Awesomium::WebViewListener::Load* self= (Awesomium::WebViewListener::Load*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::Load >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9685114) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::Load >::check(L,1));
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

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::Load");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::Load",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnBeginLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFailLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFinishLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDocumentReady(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3243885) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebViewListener::Load::Load(lua_Table * data)
	static Awesomium::WebViewListener::Load* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Load::Load(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::Load::Load(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_WebViewListener_Load(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	static int _bind_OnBeginLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnBeginLoadingFrame(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page) function, expected prototype:\nvoid Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tonumber(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::Load::OnBeginLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		bool is_error_page=(bool)(lua_toboolean(L,6)==1);

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &, bool). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Load >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnBeginLoadingFrame(caller, frame_id, is_main_frame, url, is_error_page);

		return 0;
	}

	// void Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	static int _bind_OnFailLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnFailLoadingFrame(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc) function, expected prototype:\nvoid Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\narg 6 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tonumber(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::Load::OnFailLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		int error_code=(int)lua_tointeger(L,6);
		std::string error_desc_str(lua_tostring(L,7),lua_objlen(L,7));
		Awesomium::WebString error_desc = Awesomium::ToWebString(error_desc_str);

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &, int, const Awesomium::WebString &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Load >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFailLoadingFrame(caller, frame_id, is_main_frame, url, error_code, error_desc);

		return 0;
	}

	// void Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	static int _bind_OnFinishLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnFinishLoadingFrame(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tonumber(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::Load::OnFinishLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Load >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFinishLoadingFrame(caller, frame_id, is_main_frame, url);

		return 0;
	}

	// void Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnDocumentReady(lua_State *L) {
		if (!_lg_typecheck_OnDocumentReady(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::Load::OnDocumentReady function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::WebViewListener::Load* self=(Luna< Awesomium::WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView *, const Awesomium::WebURL &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Load >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnDocumentReady(caller, url);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::Load* LunaTraits< Awesomium::WebViewListener::Load >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_Load::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	// void Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	// void Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	// void Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
}

void LunaTraits< Awesomium::WebViewListener::Load >::_bind_dtor(Awesomium::WebViewListener::Load* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::Load >::className[] = "Load";
const char LunaTraits< Awesomium::WebViewListener::Load >::fullName[] = "Awesomium::WebViewListener::Load";
const char LunaTraits< Awesomium::WebViewListener::Load >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::Load >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::Load >::hash = 9685114;
const int LunaTraits< Awesomium::WebViewListener::Load >::uniqueIDs[] = {9685114,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::Load >::methods[] = {
	{"OnBeginLoadingFrame", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_OnBeginLoadingFrame},
	{"OnFailLoadingFrame", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_OnFailLoadingFrame},
	{"OnFinishLoadingFrame", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_OnFinishLoadingFrame},
	{"OnDocumentReady", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_OnDocumentReady},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_Load::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_Load::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::Load >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::Load >::enumValues[] = {
	{0,0}
};


