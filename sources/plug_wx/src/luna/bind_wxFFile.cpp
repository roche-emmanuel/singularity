#include <plug_common.h>

class luna_wrapper_wxFFile {
public:
	typedef Luna< wxFFile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15266762) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFFile*)");
		}

		wxFFile* rhs =(Luna< wxFFile >::check(L,2));
		wxFFile* self=(Luna< wxFFile >::check(L,1));
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

		wxFFile* self= (wxFFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFFile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15266762) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxFFile >::check(L,1));
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

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFFile");
		
		return luna_dynamicCast(L,converters,"wxFFile",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxFFile* LunaTraits< wxFFile >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFFile >::_bind_dtor(wxFFile* obj) {
	delete obj;
}

const char LunaTraits< wxFFile >::className[] = "wxFFile";
const char LunaTraits< wxFFile >::fullName[] = "wxFFile";
const char LunaTraits< wxFFile >::moduleName[] = "wx";
const char* LunaTraits< wxFFile >::parents[] = {0};
const int LunaTraits< wxFFile >::hash = 15266762;
const int LunaTraits< wxFFile >::uniqueIDs[] = {15266762,0};

luna_RegType LunaTraits< wxFFile >::methods[] = {
	{"dynCast", &luna_wrapper_wxFFile::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFFile::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFFile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFile >::enumValues[] = {
	{0,0}
};


