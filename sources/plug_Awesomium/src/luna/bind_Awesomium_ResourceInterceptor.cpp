#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_ResourceInterceptor.h>

class luna_wrapper_Awesomium_ResourceInterceptor {
public:
	typedef Luna< Awesomium::ResourceInterceptor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::ResourceInterceptor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29549996) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::ResourceInterceptor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::ResourceInterceptor* rhs =(Luna< Awesomium::ResourceInterceptor >::check(L,2));
		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
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

		Awesomium::ResourceInterceptor* self= (Awesomium::ResourceInterceptor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::ResourceInterceptor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29549996) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::ResourceInterceptor >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::ResourceInterceptor");
		
		return luna_dynamicCast(L,converters,"Awesomium::ResourceInterceptor",name);
	}


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
	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4492238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFilterNavigation(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isstring(L,4)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnWillDownload(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4492238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFilterNavigation(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isstring(L,4)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnWillDownload(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3243885) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::ResourceInterceptor::ResourceInterceptor()
	static Awesomium::ResourceInterceptor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceInterceptor::ResourceInterceptor() function, expected prototype:\nAwesomium::ResourceInterceptor::ResourceInterceptor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new Awesomium::ResourceInterceptor();
	}

	// Awesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data)
	static Awesomium::ResourceInterceptor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data) function, expected prototype:\nAwesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_ResourceInterceptor(L,NULL);
	}

	// Overload binder for Awesomium::ResourceInterceptor::ResourceInterceptor
	static Awesomium::ResourceInterceptor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ResourceInterceptor, cannot match any of the overloads for function ResourceInterceptor:\n  ResourceInterceptor()\n  ResourceInterceptor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request) function, expected prototype:\nAwesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)\nClass arguments details:\narg 1 ID = 4492238\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::ResourceRequest* request=(Luna< Awesomium::ResourceRequest >::check(L,2));

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest *). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::ResourceResponse * lret = self->OnRequest(request);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}

	// bool Awesomium::ResourceInterceptor::OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame)
	static int _bind_OnFilterNavigation(lua_State *L) {
		if (!_lg_typecheck_OnFilterNavigation(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::ResourceInterceptor::OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame) function, expected prototype:\nbool Awesomium::ResourceInterceptor::OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame)\nClass arguments details:\narg 3 ID = 13938525\narg 4 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		int origin_process_id=(int)lua_tointeger(L,2);
		int origin_routing_id=(int)lua_tointeger(L,3);
		std::string method_str(lua_tostring(L,4),lua_objlen(L,4));
		Awesomium::WebString method = Awesomium::ToWebString(method_str);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::ResourceInterceptor::OnFilterNavigation function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		bool is_main_frame=(bool)(lua_toboolean(L,6)==1);

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::ResourceInterceptor::OnFilterNavigation(int, int, const Awesomium::WebString &, const Awesomium::WebURL &, bool). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnFilterNavigation(origin_process_id, origin_routing_id, method, url, is_main_frame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::ResourceInterceptor::OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url)
	static int _bind_OnWillDownload(lua_State *L) {
		if (!_lg_typecheck_OnWillDownload(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceInterceptor::OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::ResourceInterceptor::OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url)\nClass arguments details:\narg 3 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		int origin_process_id=(int)lua_tointeger(L,2);
		int origin_routing_id=(int)lua_tointeger(L,3);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::ResourceInterceptor::OnWillDownload function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceInterceptor::OnWillDownload(int, int, const Awesomium::WebURL &). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnWillDownload(origin_process_id, origin_routing_id, url);

		return 0;
	}

	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request)
	static int _bind_base_OnRequest(lua_State *L) {
		if (!_lg_typecheck_base_OnRequest(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request) function, expected prototype:\nAwesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request)\nClass arguments details:\narg 1 ID = 4492238\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::ResourceRequest* request=(Luna< Awesomium::ResourceRequest >::check(L,2));

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest *). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::ResourceResponse * lret = self->ResourceInterceptor::OnRequest(request);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}

	// bool Awesomium::ResourceInterceptor::base_OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame)
	static int _bind_base_OnFilterNavigation(lua_State *L) {
		if (!_lg_typecheck_base_OnFilterNavigation(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::ResourceInterceptor::base_OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame) function, expected prototype:\nbool Awesomium::ResourceInterceptor::base_OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame)\nClass arguments details:\narg 3 ID = 13938525\narg 4 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		int origin_process_id=(int)lua_tointeger(L,2);
		int origin_routing_id=(int)lua_tointeger(L,3);
		std::string method_str(lua_tostring(L,4),lua_objlen(L,4));
		Awesomium::WebString method = Awesomium::ToWebString(method_str);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::ResourceInterceptor::base_OnFilterNavigation function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		bool is_main_frame=(bool)(lua_toboolean(L,6)==1);

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::ResourceInterceptor::base_OnFilterNavigation(int, int, const Awesomium::WebString &, const Awesomium::WebURL &, bool). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ResourceInterceptor::OnFilterNavigation(origin_process_id, origin_routing_id, method, url, is_main_frame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::ResourceInterceptor::base_OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url)
	static int _bind_base_OnWillDownload(lua_State *L) {
		if (!_lg_typecheck_base_OnWillDownload(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceInterceptor::base_OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::ResourceInterceptor::base_OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url)\nClass arguments details:\narg 3 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		int origin_process_id=(int)lua_tointeger(L,2);
		int origin_routing_id=(int)lua_tointeger(L,3);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::ResourceInterceptor::base_OnWillDownload function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceInterceptor::base_OnWillDownload(int, int, const Awesomium::WebURL &). Got : '%s'\n%s",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResourceInterceptor::OnWillDownload(origin_process_id, origin_routing_id, url);

		return 0;
	}


	// Operator binds:

};

Awesomium::ResourceInterceptor* LunaTraits< Awesomium::ResourceInterceptor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_ResourceInterceptor::_bind_ctor(L);
}

void LunaTraits< Awesomium::ResourceInterceptor >::_bind_dtor(Awesomium::ResourceInterceptor* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::ResourceInterceptor >::className[] = "ResourceInterceptor";
const char LunaTraits< Awesomium::ResourceInterceptor >::fullName[] = "Awesomium::ResourceInterceptor";
const char LunaTraits< Awesomium::ResourceInterceptor >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::ResourceInterceptor >::parents[] = {0};
const int LunaTraits< Awesomium::ResourceInterceptor >::hash = 29549996;
const int LunaTraits< Awesomium::ResourceInterceptor >::uniqueIDs[] = {29549996,0};

luna_RegType LunaTraits< Awesomium::ResourceInterceptor >::methods[] = {
	{"OnRequest", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_OnRequest},
	{"OnFilterNavigation", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_OnFilterNavigation},
	{"OnWillDownload", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_OnWillDownload},
	{"base_OnRequest", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_base_OnRequest},
	{"base_OnFilterNavigation", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_base_OnFilterNavigation},
	{"base_OnWillDownload", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_base_OnWillDownload},
	{"dynCast", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_ResourceInterceptor::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::ResourceInterceptor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::ResourceInterceptor >::enumValues[] = {
	{0,0}
};


