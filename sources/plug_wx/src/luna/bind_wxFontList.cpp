#include <plug_common.h>

class luna_wrapper_wxFontList {
public:
	typedef Luna< wxFontList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20060012) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxList*)");
		}

		wxList* rhs =(Luna< wxList >::check(L,2));
		wxList* self=(Luna< wxList >::check(L,1));
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

		wxFontList* self= (wxFontList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFontList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20060012) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxList(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFontList* ptr= dynamic_cast< wxFontList* >(Luna< wxList >::check(L,1));
		wxFontList* ptr= luna_caster< wxList, wxFontList >::cast(Luna< wxList >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FindOrCreateFont(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontList::wxFontList()
	static wxFontList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontList::wxFontList() function, expected prototype:\nwxFontList::wxFontList()\nClass arguments details:\n");
		}


		return new wxFontList();
	}


	// Function binds:
	// wxFont * wxFontList::FindOrCreateFont(int point_size, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & facename = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static int _bind_FindOrCreateFont(lua_State *L) {
		if (!_lg_typecheck_FindOrCreateFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont * wxFontList::FindOrCreateFont(int point_size, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & facename = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxFont * wxFontList::FindOrCreateFont(int point_size, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & facename = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int point_size=(int)lua_tointeger(L,2);
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,3);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,4);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,5);
		bool underline=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		wxString facename(lua_tostring(L,7),lua_objlen(L,7));
		wxFontEncoding encoding=luatop>7 ? (wxFontEncoding)lua_tointeger(L,8) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		wxFontList* self=Luna< wxList >::checkSubType< wxFontList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont * wxFontList::FindOrCreateFont(int, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding). Got : '%s'",typeid(Luna< wxList >::check(L,1)).name());
		}
		wxFont * lret = self->FindOrCreateFont(point_size, family, style, weight, underline, facename, encoding);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFontList* LunaTraits< wxFontList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontList::_bind_ctor(L);
}

void LunaTraits< wxFontList >::_bind_dtor(wxFontList* obj) {
	delete obj;
}

const char LunaTraits< wxFontList >::className[] = "wxFontList";
const char LunaTraits< wxFontList >::fullName[] = "wxFontList";
const char LunaTraits< wxFontList >::moduleName[] = "wx";
const char* LunaTraits< wxFontList >::parents[] = {"wx.wxList", 0};
const int LunaTraits< wxFontList >::hash = 49611970;
const int LunaTraits< wxFontList >::uniqueIDs[] = {20060012,0};

luna_RegType LunaTraits< wxFontList >::methods[] = {
	{"FindOrCreateFont", &luna_wrapper_wxFontList::_bind_FindOrCreateFont},
	{"__eq", &luna_wrapper_wxFontList::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFontList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFontList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontList >::converters[] = {
	{"wxList", &luna_wrapper_wxFontList::_cast_from_wxList},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontList >::enumValues[] = {
	{0,0}
};


