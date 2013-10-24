#include <plug_common.h>

class luna_wrapper_Awesomium_PrintConfig {
public:
	typedef Luna< Awesomium::PrintConfig > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23715294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::PrintConfig*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::PrintConfig* rhs =(Luna< Awesomium::PrintConfig >::check(L,2));
		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
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

		Awesomium::PrintConfig* self= (Awesomium::PrintConfig*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::PrintConfig >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23715294) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::PrintConfig >::check(L,1));
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

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::PrintConfig");
		
		return luna_dynamicCast(L,converters,"Awesomium::PrintConfig",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_page_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDpi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_split_pages_into_multiple_files(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_print_selection_only(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_page_size(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8907551) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDpi(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_split_pages_into_multiple_files(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_print_selection_only(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::PrintConfig::PrintConfig()
	static Awesomium::PrintConfig* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::PrintConfig::PrintConfig() function, expected prototype:\nAwesomium::PrintConfig::PrintConfig()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new Awesomium::PrintConfig();
	}


	// Function binds:
	// Awesomium::Rect Awesomium::PrintConfig::page_size()
	static int _bind_get_page_size(lua_State *L) {
		if (!_lg_typecheck_get_page_size(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::Rect Awesomium::PrintConfig::page_size() function, expected prototype:\nAwesomium::Rect Awesomium::PrintConfig::page_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::Rect Awesomium::PrintConfig::page_size(). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::Rect* lret = &self->page_size;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Rect >::push(L,lret,false);

		return 1;
	}

	// double Awesomium::PrintConfig::dpi()
	static int _bind_getDpi(lua_State *L) {
		if (!_lg_typecheck_getDpi(L)) {
			luaL_error(L, "luna typecheck failed in double Awesomium::PrintConfig::dpi() function, expected prototype:\ndouble Awesomium::PrintConfig::dpi()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double Awesomium::PrintConfig::dpi(). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->dpi;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool Awesomium::PrintConfig::split_pages_into_multiple_files()
	static int _bind_get_split_pages_into_multiple_files(lua_State *L) {
		if (!_lg_typecheck_get_split_pages_into_multiple_files(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::PrintConfig::split_pages_into_multiple_files() function, expected prototype:\nbool Awesomium::PrintConfig::split_pages_into_multiple_files()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::PrintConfig::split_pages_into_multiple_files(). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->split_pages_into_multiple_files;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::PrintConfig::print_selection_only()
	static int _bind_get_print_selection_only(lua_State *L) {
		if (!_lg_typecheck_get_print_selection_only(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::PrintConfig::print_selection_only() function, expected prototype:\nbool Awesomium::PrintConfig::print_selection_only()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::PrintConfig::print_selection_only(). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->print_selection_only;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::PrintConfig::page_size(Awesomium::Rect value)
	static int _bind_set_page_size(lua_State *L) {
		if (!_lg_typecheck_set_page_size(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::PrintConfig::page_size(Awesomium::Rect value) function, expected prototype:\nvoid Awesomium::PrintConfig::page_size(Awesomium::Rect value)\nClass arguments details:\narg 1 ID = 8907551\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::Rect* value_ptr=(Luna< Awesomium::Rect >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::PrintConfig::page_size function");
		}
		Awesomium::Rect value=*value_ptr;

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::PrintConfig::page_size(Awesomium::Rect). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->page_size = value;

		return 0;
	}

	// void Awesomium::PrintConfig::dpi(double value)
	static int _bind_setDpi(lua_State *L) {
		if (!_lg_typecheck_setDpi(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::PrintConfig::dpi(double value) function, expected prototype:\nvoid Awesomium::PrintConfig::dpi(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::PrintConfig::dpi(double). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dpi = value;

		return 0;
	}

	// void Awesomium::PrintConfig::split_pages_into_multiple_files(bool value)
	static int _bind_set_split_pages_into_multiple_files(lua_State *L) {
		if (!_lg_typecheck_set_split_pages_into_multiple_files(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::PrintConfig::split_pages_into_multiple_files(bool value) function, expected prototype:\nvoid Awesomium::PrintConfig::split_pages_into_multiple_files(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::PrintConfig::split_pages_into_multiple_files(bool). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->split_pages_into_multiple_files = value;

		return 0;
	}

	// void Awesomium::PrintConfig::print_selection_only(bool value)
	static int _bind_set_print_selection_only(lua_State *L) {
		if (!_lg_typecheck_set_print_selection_only(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::PrintConfig::print_selection_only(bool value) function, expected prototype:\nvoid Awesomium::PrintConfig::print_selection_only(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::PrintConfig* self=(Luna< Awesomium::PrintConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::PrintConfig::print_selection_only(bool). Got : '%s'\n%s",typeid(Luna< Awesomium::PrintConfig >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print_selection_only = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::PrintConfig* LunaTraits< Awesomium::PrintConfig >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_PrintConfig::_bind_ctor(L);
}

void LunaTraits< Awesomium::PrintConfig >::_bind_dtor(Awesomium::PrintConfig* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::PrintConfig >::className[] = "PrintConfig";
const char LunaTraits< Awesomium::PrintConfig >::fullName[] = "Awesomium::PrintConfig";
const char LunaTraits< Awesomium::PrintConfig >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::PrintConfig >::parents[] = {0};
const int LunaTraits< Awesomium::PrintConfig >::hash = 23715294;
const int LunaTraits< Awesomium::PrintConfig >::uniqueIDs[] = {23715294,0};

luna_RegType LunaTraits< Awesomium::PrintConfig >::methods[] = {
	{"get_page_size", &luna_wrapper_Awesomium_PrintConfig::_bind_get_page_size},
	{"getDpi", &luna_wrapper_Awesomium_PrintConfig::_bind_getDpi},
	{"get_split_pages_into_multiple_files", &luna_wrapper_Awesomium_PrintConfig::_bind_get_split_pages_into_multiple_files},
	{"get_print_selection_only", &luna_wrapper_Awesomium_PrintConfig::_bind_get_print_selection_only},
	{"set_page_size", &luna_wrapper_Awesomium_PrintConfig::_bind_set_page_size},
	{"setDpi", &luna_wrapper_Awesomium_PrintConfig::_bind_setDpi},
	{"set_split_pages_into_multiple_files", &luna_wrapper_Awesomium_PrintConfig::_bind_set_split_pages_into_multiple_files},
	{"set_print_selection_only", &luna_wrapper_Awesomium_PrintConfig::_bind_set_print_selection_only},
	{"dynCast", &luna_wrapper_Awesomium_PrintConfig::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_PrintConfig::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_PrintConfig::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_PrintConfig::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::PrintConfig >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::PrintConfig >::enumValues[] = {
	{0,0}
};


