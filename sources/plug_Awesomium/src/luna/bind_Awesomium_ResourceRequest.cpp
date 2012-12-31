#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_ResourceRequest.h>

class luna_wrapper_Awesomium_ResourceRequest {
public:
	typedef Luna< Awesomium::ResourceRequest > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4492238) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::ResourceRequest*)");
		}

		Awesomium::ResourceRequest* rhs =(Luna< Awesomium::ResourceRequest >::check(L,2));
		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::ResourceRequest");
		
		return luna_dynamicCast(L,converters,"Awesomium::ResourceRequest",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_origin_process_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_method(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_method(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_referrer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_referrer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_extra_headers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_extra_headers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendExtraHeader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_num_upload_elements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUploadElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearUploadElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AppendUploadFilePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendUploadBytes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::ResourceRequest::ResourceRequest(lua_Table * data)
	static Awesomium::ResourceRequest* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceRequest::ResourceRequest(lua_Table * data) function, expected prototype:\nAwesomium::ResourceRequest::ResourceRequest(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_ResourceRequest(L,NULL);
	}


	// Function binds:
	// void Awesomium::ResourceRequest::Cancel()
	static int _bind_Cancel(lua_State *L) {
		if (!_lg_typecheck_Cancel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::Cancel() function, expected prototype:\nvoid Awesomium::ResourceRequest::Cancel()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::Cancel()");
		}
		self->Cancel();

		return 0;
	}

	// int Awesomium::ResourceRequest::origin_process_id()
	static int _bind_origin_process_id(lua_State *L) {
		if (!_lg_typecheck_origin_process_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::ResourceRequest::origin_process_id() function, expected prototype:\nint Awesomium::ResourceRequest::origin_process_id()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::ResourceRequest::origin_process_id()");
		}
		int lret = self->origin_process_id();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebURL Awesomium::ResourceRequest::url()
	static int _bind_url(lua_State *L) {
		if (!_lg_typecheck_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::ResourceRequest::url() function, expected prototype:\nAwesomium::WebURL Awesomium::ResourceRequest::url()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::ResourceRequest::url()");
		}
		Awesomium::WebURL stack_lret = self->url();
		Awesomium::WebURL* lret = new Awesomium::WebURL(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,true);

		return 1;
	}

	// Awesomium::WebString Awesomium::ResourceRequest::method()
	static int _bind_method(lua_State *L) {
		if (!_lg_typecheck_method(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::ResourceRequest::method() function, expected prototype:\nAwesomium::WebString Awesomium::ResourceRequest::method()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::ResourceRequest::method()");
		}
		Awesomium::WebString stack_lret = self->method();
		Awesomium::WebString* lret = new Awesomium::WebString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebString >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::ResourceRequest::set_method(const Awesomium::WebString & method)
	static int _bind_set_method(lua_State *L) {
		if (!_lg_typecheck_set_method(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::set_method(const Awesomium::WebString & method) function, expected prototype:\nvoid Awesomium::ResourceRequest::set_method(const Awesomium::WebString & method)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string method_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString method = Awesomium::ToWebString(method_str);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::set_method(const Awesomium::WebString &)");
		}
		self->set_method(method);

		return 0;
	}

	// Awesomium::WebString Awesomium::ResourceRequest::referrer()
	static int _bind_referrer(lua_State *L) {
		if (!_lg_typecheck_referrer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::ResourceRequest::referrer() function, expected prototype:\nAwesomium::WebString Awesomium::ResourceRequest::referrer()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::ResourceRequest::referrer()");
		}
		Awesomium::WebString stack_lret = self->referrer();
		Awesomium::WebString* lret = new Awesomium::WebString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebString >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString & referrer)
	static int _bind_set_referrer(lua_State *L) {
		if (!_lg_typecheck_set_referrer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString & referrer) function, expected prototype:\nvoid Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString & referrer)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string referrer_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString referrer = Awesomium::ToWebString(referrer_str);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString &)");
		}
		self->set_referrer(referrer);

		return 0;
	}

	// Awesomium::WebString Awesomium::ResourceRequest::extra_headers()
	static int _bind_extra_headers(lua_State *L) {
		if (!_lg_typecheck_extra_headers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::ResourceRequest::extra_headers() function, expected prototype:\nAwesomium::WebString Awesomium::ResourceRequest::extra_headers()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::ResourceRequest::extra_headers()");
		}
		Awesomium::WebString stack_lret = self->extra_headers();
		Awesomium::WebString* lret = new Awesomium::WebString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebString >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString & headers)
	static int _bind_set_extra_headers(lua_State *L) {
		if (!_lg_typecheck_set_extra_headers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString & headers) function, expected prototype:\nvoid Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString & headers)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string headers_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString headers = Awesomium::ToWebString(headers_str);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString &)");
		}
		self->set_extra_headers(headers);

		return 0;
	}

	// void Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value)
	static int _bind_AppendExtraHeader(lua_State *L) {
		if (!_lg_typecheck_AppendExtraHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value) function, expected prototype:\nvoid Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);
		std::string value_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString &, const Awesomium::WebString &)");
		}
		self->AppendExtraHeader(name, value);

		return 0;
	}

	// unsigned int Awesomium::ResourceRequest::num_upload_elements()
	static int _bind_num_upload_elements(lua_State *L) {
		if (!_lg_typecheck_num_upload_elements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::ResourceRequest::num_upload_elements() function, expected prototype:\nunsigned int Awesomium::ResourceRequest::num_upload_elements()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::ResourceRequest::num_upload_elements()");
		}
		unsigned int lret = self->num_upload_elements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int idx)
	static int _bind_GetUploadElement(lua_State *L) {
		if (!_lg_typecheck_GetUploadElement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int idx) function, expected prototype:\nconst Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int)");
		}
		const Awesomium::UploadElement * lret = self->GetUploadElement(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::UploadElement >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::ResourceRequest::ClearUploadElements()
	static int _bind_ClearUploadElements(lua_State *L) {
		if (!_lg_typecheck_ClearUploadElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::ClearUploadElements() function, expected prototype:\nvoid Awesomium::ResourceRequest::ClearUploadElements()\nClass arguments details:\n");
		}


		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::ClearUploadElements()");
		}
		self->ClearUploadElements();

		return 0;
	}

	// void Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString & path)
	static int _bind_AppendUploadFilePath(lua_State *L) {
		if (!_lg_typecheck_AppendUploadFilePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString & path) function, expected prototype:\nvoid Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString & path)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string path_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString &)");
		}
		self->AppendUploadFilePath(path);

		return 0;
	}

	// void Awesomium::ResourceRequest::AppendUploadBytes(const char * bytes, unsigned int num_bytes)
	static int _bind_AppendUploadBytes(lua_State *L) {
		if (!_lg_typecheck_AppendUploadBytes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::ResourceRequest::AppendUploadBytes(const char * bytes, unsigned int num_bytes) function, expected prototype:\nvoid Awesomium::ResourceRequest::AppendUploadBytes(const char * bytes, unsigned int num_bytes)\nClass arguments details:\n");
		}

		const char * bytes=(const char *)lua_tostring(L,2);
		unsigned int num_bytes=(unsigned int)lua_tointeger(L,3);

		Awesomium::ResourceRequest* self=(Luna< Awesomium::ResourceRequest >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::ResourceRequest::AppendUploadBytes(const char *, unsigned int)");
		}
		self->AppendUploadBytes(bytes, num_bytes);

		return 0;
	}


	// Operator binds:

};

Awesomium::ResourceRequest* LunaTraits< Awesomium::ResourceRequest >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_ResourceRequest::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::ResourceRequest::Cancel()
	// int Awesomium::ResourceRequest::origin_process_id()
	// Awesomium::WebURL Awesomium::ResourceRequest::url()
	// Awesomium::WebString Awesomium::ResourceRequest::method()
	// void Awesomium::ResourceRequest::set_method(const Awesomium::WebString & method)
	// Awesomium::WebString Awesomium::ResourceRequest::referrer()
	// void Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString & referrer)
	// Awesomium::WebString Awesomium::ResourceRequest::extra_headers()
	// void Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString & headers)
	// void Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value)
	// unsigned int Awesomium::ResourceRequest::num_upload_elements()
	// const Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int idx)
	// void Awesomium::ResourceRequest::ClearUploadElements()
	// void Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString & path)
	// void Awesomium::ResourceRequest::AppendUploadBytes(const char * bytes, unsigned int num_bytes)
}

void LunaTraits< Awesomium::ResourceRequest >::_bind_dtor(Awesomium::ResourceRequest* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::ResourceRequest >::className[] = "ResourceRequest";
const char LunaTraits< Awesomium::ResourceRequest >::fullName[] = "Awesomium::ResourceRequest";
const char LunaTraits< Awesomium::ResourceRequest >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::ResourceRequest >::parents[] = {0};
const int LunaTraits< Awesomium::ResourceRequest >::hash = 4492238;
const int LunaTraits< Awesomium::ResourceRequest >::uniqueIDs[] = {4492238,0};

luna_RegType LunaTraits< Awesomium::ResourceRequest >::methods[] = {
	{"Cancel", &luna_wrapper_Awesomium_ResourceRequest::_bind_Cancel},
	{"origin_process_id", &luna_wrapper_Awesomium_ResourceRequest::_bind_origin_process_id},
	{"url", &luna_wrapper_Awesomium_ResourceRequest::_bind_url},
	{"method", &luna_wrapper_Awesomium_ResourceRequest::_bind_method},
	{"set_method", &luna_wrapper_Awesomium_ResourceRequest::_bind_set_method},
	{"referrer", &luna_wrapper_Awesomium_ResourceRequest::_bind_referrer},
	{"set_referrer", &luna_wrapper_Awesomium_ResourceRequest::_bind_set_referrer},
	{"extra_headers", &luna_wrapper_Awesomium_ResourceRequest::_bind_extra_headers},
	{"set_extra_headers", &luna_wrapper_Awesomium_ResourceRequest::_bind_set_extra_headers},
	{"AppendExtraHeader", &luna_wrapper_Awesomium_ResourceRequest::_bind_AppendExtraHeader},
	{"num_upload_elements", &luna_wrapper_Awesomium_ResourceRequest::_bind_num_upload_elements},
	{"GetUploadElement", &luna_wrapper_Awesomium_ResourceRequest::_bind_GetUploadElement},
	{"ClearUploadElements", &luna_wrapper_Awesomium_ResourceRequest::_bind_ClearUploadElements},
	{"AppendUploadFilePath", &luna_wrapper_Awesomium_ResourceRequest::_bind_AppendUploadFilePath},
	{"AppendUploadBytes", &luna_wrapper_Awesomium_ResourceRequest::_bind_AppendUploadBytes},
	{"dynCast", &luna_wrapper_Awesomium_ResourceRequest::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_ResourceRequest::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_ResourceRequest::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::ResourceRequest >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::ResourceRequest >::enumValues[] = {
	{0,0}
};


