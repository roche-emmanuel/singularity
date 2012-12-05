#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmapButton.h>

class luna_wrapper_wxBitmapButton {
public:
	typedef Luna< wxBitmapButton > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBitmapButton* ptr= dynamic_cast< wxBitmapButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7))) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapButton::wxBitmapButton()
	static wxBitmapButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapButton::wxBitmapButton() function, expected prototype:\nwxBitmapButton::wxBitmapButton()\nClass arguments details:\n");
		}


		return new wxBitmapButton();
	}

	// wxBitmapButton::wxBitmapButton(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static wxBitmapButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapButton::wxBitmapButton(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nwxBitmapButton::wxBitmapButton(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapButton::wxBitmapButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapButton::wxBitmapButton function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapButton::wxBitmapButton function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxBU_AUTODRAW;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapButton::wxBitmapButton function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxBitmapButton(parent, id, bitmap, pos, size, style, validator, name);
	}

	// wxBitmapButton::wxBitmapButton(lua_Table * data)
	static wxBitmapButton* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapButton::wxBitmapButton(lua_Table * data) function, expected prototype:\nwxBitmapButton::wxBitmapButton(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxBitmapButton(L,NULL);
	}

	// wxBitmapButton::wxBitmapButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static wxBitmapButton* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapButton::wxBitmapButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nwxBitmapButton::wxBitmapButton(lua_Table * data, wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapButton::wxBitmapButton function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapButton::wxBitmapButton function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapButton::wxBitmapButton function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxBU_AUTODRAW;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapButton::wxBitmapButton function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxBitmapButton(L,NULL, parent, id, bitmap, pos, size, style, validator, name);
	}

	// Overload binder for wxBitmapButton::wxBitmapButton
	static wxBitmapButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxBitmapButton, cannot match any of the overloads for function wxBitmapButton:\n  wxBitmapButton()\n  wxBitmapButton(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxBitmapButton(lua_Table *)\n  wxBitmapButton(lua_Table *, wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxBitmapButton::Create(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmapButton::Create(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr) function, expected prototype:\nbool wxBitmapButton::Create(wxWindow * parent, int id, const wxBitmap & bitmap, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxButtonNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapButton::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapButton::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapButton::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxBU_AUTODRAW;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapButton::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxBitmapButton* self=dynamic_cast< wxBitmapButton* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmapButton::Create(wxWindow *, int, const wxBitmap &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, bitmap, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxBitmapButton* LunaTraits< wxBitmapButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapButton::_bind_ctor(L);
}

void LunaTraits< wxBitmapButton >::_bind_dtor(wxBitmapButton* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapButton >::className[] = "wxBitmapButton";
const char LunaTraits< wxBitmapButton >::fullName[] = "wxBitmapButton";
const char LunaTraits< wxBitmapButton >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapButton >::parents[] = {"wx.wxButton", 0};
const int LunaTraits< wxBitmapButton >::hash = 64023365;
const int LunaTraits< wxBitmapButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxBitmapButton >::methods[] = {
	{"Create", &luna_wrapper_wxBitmapButton::_bind_Create},
	{"__eq", &luna_wrapper_wxBitmapButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmapButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapButton >::enumValues[] = {
	{0,0}
};


