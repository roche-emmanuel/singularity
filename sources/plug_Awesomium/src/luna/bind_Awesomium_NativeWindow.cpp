#include <plug_common.h>

class luna_wrapper_Awesomium_NativeWindow {
public:
	typedef Luna< Awesomium::NativeWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91964941) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::NativeWindow*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::NativeWindow* rhs =(Luna< Awesomium::NativeWindow >::check(L,2));
		Awesomium::NativeWindow* self=(Luna< Awesomium::NativeWindow >::check(L,1));
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

		Awesomium::NativeWindow* self= (Awesomium::NativeWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::NativeWindow >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91964941) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::NativeWindow >::check(L,1));
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

		Awesomium::NativeWindow* self=(Luna< Awesomium::NativeWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::NativeWindow");
		
		return luna_dynamicCast(L,converters,"Awesomium::NativeWindow",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

Awesomium::NativeWindow* LunaTraits< Awesomium::NativeWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::NativeWindow >::_bind_dtor(Awesomium::NativeWindow* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::NativeWindow >::className[] = "NativeWindow";
const char LunaTraits< Awesomium::NativeWindow >::fullName[] = "Awesomium::NativeWindow";
const char LunaTraits< Awesomium::NativeWindow >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::NativeWindow >::parents[] = {0};
const int LunaTraits< Awesomium::NativeWindow >::hash = 91964941;
const int LunaTraits< Awesomium::NativeWindow >::uniqueIDs[] = {91964941,0};

luna_RegType LunaTraits< Awesomium::NativeWindow >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_NativeWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_NativeWindow::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_NativeWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_NativeWindow::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::NativeWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::NativeWindow >::enumValues[] = {
	{0,0}
};


