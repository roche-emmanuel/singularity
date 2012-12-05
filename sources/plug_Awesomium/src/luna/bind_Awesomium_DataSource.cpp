#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_DataSource.h>

class luna_wrapper_Awesomium_DataSource {
public:
	typedef Luna< Awesomium::DataSource > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37218942) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::DataSource*)");
		}

		Awesomium::DataSource* rhs =(Luna< Awesomium::DataSource >::check(L,2));
		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
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

		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::DataSource");
		
		return luna_dynamicCast(L,converters,"Awesomium::DataSource",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SendResponse(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isstring(L,5)==0) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path) function, expected prototype:\nvoid Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path)\nClass arguments details:\narg 2 ID = 13938525\n");
		}

		int request_id=(int)lua_tointeger(L,2);
		std::string path_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);

		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::DataSource::OnRequest(int, const Awesomium::WebString &)");
		}
		self->OnRequest(request_id, path);

		return 0;
	}

	// void Awesomium::DataSource::SendResponse(int request_id, unsigned int buffer_size, unsigned char * buffer, const Awesomium::WebString & mime_type)
	static int _bind_SendResponse(lua_State *L) {
		if (!_lg_typecheck_SendResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::DataSource::SendResponse(int request_id, unsigned int buffer_size, unsigned char * buffer, const Awesomium::WebString & mime_type) function, expected prototype:\nvoid Awesomium::DataSource::SendResponse(int request_id, unsigned int buffer_size, unsigned char * buffer, const Awesomium::WebString & mime_type)\nClass arguments details:\narg 4 ID = 13938525\n");
		}

		int request_id=(int)lua_tointeger(L,2);
		unsigned int buffer_size=(unsigned int)lua_tointeger(L,3);
		unsigned char buffer = (unsigned char)(lua_tointeger(L,4));
		std::string mime_type_str(lua_tostring(L,5),lua_objlen(L,5));
		Awesomium::WebString mime_type = Awesomium::ToWebString(mime_type_str);

		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::DataSource::SendResponse(int, unsigned int, unsigned char *, const Awesomium::WebString &)");
		}
		self->SendResponse(request_id, buffer_size, &buffer, mime_type);

		return 0;
	}


	// Operator binds:

};

Awesomium::DataSource* LunaTraits< Awesomium::DataSource >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path)
}

void LunaTraits< Awesomium::DataSource >::_bind_dtor(Awesomium::DataSource* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::DataSource >::className[] = "DataSource";
const char LunaTraits< Awesomium::DataSource >::fullName[] = "Awesomium::DataSource";
const char LunaTraits< Awesomium::DataSource >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::DataSource >::parents[] = {0};
const int LunaTraits< Awesomium::DataSource >::hash = 37218942;
const int LunaTraits< Awesomium::DataSource >::uniqueIDs[] = {37218942,0};

luna_RegType LunaTraits< Awesomium::DataSource >::methods[] = {
	{"OnRequest", &luna_wrapper_Awesomium_DataSource::_bind_OnRequest},
	{"SendResponse", &luna_wrapper_Awesomium_DataSource::_bind_SendResponse},
	{"dynCast", &luna_wrapper_Awesomium_DataSource::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_DataSource::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::DataSource >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::DataSource >::enumValues[] = {
	{0,0}
};


