#include <plug_common.h>

class luna_wrapper_Awesomium_ResourceResponse {
public:
	typedef Luna< Awesomium::ResourceResponse > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92193223) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::ResourceResponse*)");
		}

		Awesomium::ResourceResponse* rhs =(Luna< Awesomium::ResourceResponse >::check(L,2));
		Awesomium::ResourceResponse* self=(Luna< Awesomium::ResourceResponse >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::ResourceResponse* self= (Awesomium::ResourceResponse*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::ResourceResponse >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92193223) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::ResourceResponse >::check(L,1));
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

		Awesomium::ResourceResponse* self=(Luna< Awesomium::ResourceResponse >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::ResourceResponse");
		
		return luna_dynamicCast(L,converters,"Awesomium::ResourceResponse",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(unsigned int num_bytes, unsigned char * buffer, const Awesomium::WebString & mime_type)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(unsigned int num_bytes, unsigned char * buffer, const Awesomium::WebString & mime_type) function, expected prototype:\nstatic Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(unsigned int num_bytes, unsigned char * buffer, const Awesomium::WebString & mime_type)\nClass arguments details:\narg 3 ID = 13938525\n");
		}

		unsigned int num_bytes=(unsigned int)lua_tointeger(L,1);
		unsigned char buffer = (unsigned char)(lua_tointeger(L,2));
		std::string mime_type_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString mime_type = Awesomium::ToWebString(mime_type_str);

		Awesomium::ResourceResponse * lret = Awesomium::ResourceResponse::Create(num_bytes, &buffer, mime_type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}

	// static Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(const Awesomium::WebString & file_path)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(const Awesomium::WebString & file_path) function, expected prototype:\nstatic Awesomium::ResourceResponse * Awesomium::ResourceResponse::Create(const Awesomium::WebString & file_path)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string file_path_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString file_path = Awesomium::ToWebString(file_path_str);

		Awesomium::ResourceResponse * lret = Awesomium::ResourceResponse::Create(file_path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::ResourceResponse::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(unsigned int, unsigned char *, const Awesomium::WebString &)\n  Create(const Awesomium::WebString &)\n");
		return 0;
	}


	// Operator binds:

};

Awesomium::ResourceResponse* LunaTraits< Awesomium::ResourceResponse >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::ResourceResponse >::_bind_dtor(Awesomium::ResourceResponse* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::ResourceResponse >::className[] = "ResourceResponse";
const char LunaTraits< Awesomium::ResourceResponse >::fullName[] = "Awesomium::ResourceResponse";
const char LunaTraits< Awesomium::ResourceResponse >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::ResourceResponse >::parents[] = {0};
const int LunaTraits< Awesomium::ResourceResponse >::hash = 92193223;
const int LunaTraits< Awesomium::ResourceResponse >::uniqueIDs[] = {92193223,0};

luna_RegType LunaTraits< Awesomium::ResourceResponse >::methods[] = {
	{"Create", &luna_wrapper_Awesomium_ResourceResponse::_bind_Create},
	{"dynCast", &luna_wrapper_Awesomium_ResourceResponse::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_ResourceResponse::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_ResourceResponse::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_ResourceResponse::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::ResourceResponse >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::ResourceResponse >::enumValues[] = {
	{0,0}
};


