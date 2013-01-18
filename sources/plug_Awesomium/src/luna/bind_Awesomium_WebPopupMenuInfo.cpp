#include <plug_common.h>

class luna_wrapper_Awesomium_WebPopupMenuInfo {
public:
	typedef Luna< Awesomium::WebPopupMenuInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93395030) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebPopupMenuInfo*)");
		}

		Awesomium::WebPopupMenuInfo* rhs =(Luna< Awesomium::WebPopupMenuInfo >::check(L,2));
		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
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

		Awesomium::WebPopupMenuInfo* self= (Awesomium::WebPopupMenuInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebPopupMenuInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93395030) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
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

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebPopupMenuInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebPopupMenuInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_item_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_item_font_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_selected_item(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_right_aligned(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBounds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8907551) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_item_height(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_item_font_size(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_selected_item(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setItems(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,62259121) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_right_aligned(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// Awesomium::Rect Awesomium::WebPopupMenuInfo::bounds()
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Rect Awesomium::WebPopupMenuInfo::bounds() function, expected prototype:\nAwesomium::Rect Awesomium::WebPopupMenuInfo::bounds()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Rect Awesomium::WebPopupMenuInfo::bounds(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		const Awesomium::Rect* lret = &self->bounds;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::Rect >::push(L,lret,false);

		return 1;
	}

	// int Awesomium::WebPopupMenuInfo::item_height()
	static int _bind_get_item_height(lua_State *L) {
		if (!_lg_typecheck_get_item_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebPopupMenuInfo::item_height() function, expected prototype:\nint Awesomium::WebPopupMenuInfo::item_height()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebPopupMenuInfo::item_height(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		int lret = self->item_height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double Awesomium::WebPopupMenuInfo::item_font_size()
	static int _bind_get_item_font_size(lua_State *L) {
		if (!_lg_typecheck_get_item_font_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double Awesomium::WebPopupMenuInfo::item_font_size() function, expected prototype:\ndouble Awesomium::WebPopupMenuInfo::item_font_size()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double Awesomium::WebPopupMenuInfo::item_font_size(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		double lret = self->item_font_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebPopupMenuInfo::selected_item()
	static int _bind_get_selected_item(lua_State *L) {
		if (!_lg_typecheck_get_selected_item(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebPopupMenuInfo::selected_item() function, expected prototype:\nint Awesomium::WebPopupMenuInfo::selected_item()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebPopupMenuInfo::selected_item(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		int lret = self->selected_item;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebMenuItemArray Awesomium::WebPopupMenuInfo::items()
	static int _bind_getItems(lua_State *L) {
		if (!_lg_typecheck_getItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemArray Awesomium::WebPopupMenuInfo::items() function, expected prototype:\nAwesomium::WebMenuItemArray Awesomium::WebPopupMenuInfo::items()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebMenuItemArray Awesomium::WebPopupMenuInfo::items(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		const Awesomium::WebMenuItemArray* lret = &self->items;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItemArray >::push(L,lret,false);

		return 1;
	}

	// bool Awesomium::WebPopupMenuInfo::right_aligned()
	static int _bind_get_right_aligned(lua_State *L) {
		if (!_lg_typecheck_get_right_aligned(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPopupMenuInfo::right_aligned() function, expected prototype:\nbool Awesomium::WebPopupMenuInfo::right_aligned()\nClass arguments details:\n");
		}


		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPopupMenuInfo::right_aligned(). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		bool lret = self->right_aligned;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebPopupMenuInfo::bounds(Awesomium::Rect value)
	static int _bind_setBounds(lua_State *L) {
		if (!_lg_typecheck_setBounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::bounds(Awesomium::Rect value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::bounds(Awesomium::Rect value)\nClass arguments details:\narg 1 ID = 8907551\n");
		}

		Awesomium::Rect* value_ptr=(Luna< Awesomium::Rect >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebPopupMenuInfo::bounds function");
		}
		Awesomium::Rect value=*value_ptr;

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::bounds(Awesomium::Rect). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->bounds = value;

		return 0;
	}

	// void Awesomium::WebPopupMenuInfo::item_height(int value)
	static int _bind_set_item_height(lua_State *L) {
		if (!_lg_typecheck_set_item_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::item_height(int value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::item_height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::item_height(int). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->item_height = value;

		return 0;
	}

	// void Awesomium::WebPopupMenuInfo::item_font_size(double value)
	static int _bind_set_item_font_size(lua_State *L) {
		if (!_lg_typecheck_set_item_font_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::item_font_size(double value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::item_font_size(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::item_font_size(double). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->item_font_size = value;

		return 0;
	}

	// void Awesomium::WebPopupMenuInfo::selected_item(int value)
	static int _bind_set_selected_item(lua_State *L) {
		if (!_lg_typecheck_set_selected_item(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::selected_item(int value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::selected_item(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::selected_item(int). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->selected_item = value;

		return 0;
	}

	// void Awesomium::WebPopupMenuInfo::items(Awesomium::WebMenuItemArray value)
	static int _bind_setItems(lua_State *L) {
		if (!_lg_typecheck_setItems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::items(Awesomium::WebMenuItemArray value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::items(Awesomium::WebMenuItemArray value)\nClass arguments details:\narg 1 ID = 62259121\n");
		}

		Awesomium::WebMenuItemArray* value_ptr=(Luna< Awesomium::WebMenuItemArray >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebPopupMenuInfo::items function");
		}
		Awesomium::WebMenuItemArray value=*value_ptr;

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::items(Awesomium::WebMenuItemArray). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->items = value;

		return 0;
	}

	// void Awesomium::WebPopupMenuInfo::right_aligned(bool value)
	static int _bind_set_right_aligned(lua_State *L) {
		if (!_lg_typecheck_set_right_aligned(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPopupMenuInfo::right_aligned(bool value) function, expected prototype:\nvoid Awesomium::WebPopupMenuInfo::right_aligned(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPopupMenuInfo* self=(Luna< Awesomium::WebPopupMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPopupMenuInfo::right_aligned(bool). Got : '%s'",typeid(Luna< Awesomium::WebPopupMenuInfo >::check(L,1)).name());
		}
		self->right_aligned = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebPopupMenuInfo* LunaTraits< Awesomium::WebPopupMenuInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebPopupMenuInfo >::_bind_dtor(Awesomium::WebPopupMenuInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebPopupMenuInfo >::className[] = "WebPopupMenuInfo";
const char LunaTraits< Awesomium::WebPopupMenuInfo >::fullName[] = "Awesomium::WebPopupMenuInfo";
const char LunaTraits< Awesomium::WebPopupMenuInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebPopupMenuInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebPopupMenuInfo >::hash = 93395030;
const int LunaTraits< Awesomium::WebPopupMenuInfo >::uniqueIDs[] = {93395030,0};

luna_RegType LunaTraits< Awesomium::WebPopupMenuInfo >::methods[] = {
	{"getBounds", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_getBounds},
	{"get_item_height", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_get_item_height},
	{"get_item_font_size", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_get_item_font_size},
	{"get_selected_item", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_get_selected_item},
	{"getItems", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_getItems},
	{"get_right_aligned", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_get_right_aligned},
	{"setBounds", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_setBounds},
	{"set_item_height", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_set_item_height},
	{"set_item_font_size", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_set_item_font_size},
	{"set_selected_item", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_set_selected_item},
	{"setItems", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_setItems},
	{"set_right_aligned", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_set_right_aligned},
	{"dynCast", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebPopupMenuInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebPopupMenuInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebPopupMenuInfo >::enumValues[] = {
	{0,0}
};


