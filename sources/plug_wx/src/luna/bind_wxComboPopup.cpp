#include <plug_common.h>

class luna_wrapper_wxComboPopup {
public:
	typedef Luna< wxComboPopup > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7956593) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxComboPopup*)");
		}

		wxComboPopup* rhs =(Luna< wxComboPopup >::check(L,2));
		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
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

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxComboPopup");
		
		return luna_dynamicCast(L,converters,"wxComboPopup",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdjustedSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetComboCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStringValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCreated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LazyCreate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnComboDoubleClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnComboKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PaintComboControl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStringValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxComboPopup::Create(wxWindow * parent)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboPopup::Create(wxWindow * parent) function, expected prototype:\nbool wxComboPopup::Create(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboPopup::Create(wxWindow *)");
		}
		bool lret = self->Create(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboPopup::DestroyPopup()
	static int _bind_DestroyPopup(lua_State *L) {
		if (!_lg_typecheck_DestroyPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::DestroyPopup() function, expected prototype:\nvoid wxComboPopup::DestroyPopup()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::DestroyPopup()");
		}
		self->DestroyPopup();

		return 0;
	}

	// void wxComboPopup::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::Dismiss() function, expected prototype:\nvoid wxComboPopup::Dismiss()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::Dismiss()");
		}
		self->Dismiss();

		return 0;
	}

	// bool wxComboPopup::FindItem(const wxString & item, wxString * trueItem = NULL)
	static int _bind_FindItem(lua_State *L) {
		if (!_lg_typecheck_FindItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboPopup::FindItem(const wxString & item, wxString * trueItem = NULL) function, expected prototype:\nbool wxComboPopup::FindItem(const wxString & item, wxString * trueItem = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxString trueItem(lua_tostring(L,3),lua_objlen(L,3));

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboPopup::FindItem(const wxString &, wxString *)");
		}
		bool lret = self->FindItem(item, &trueItem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxComboPopup::GetAdjustedSize(int minWidth, int prefHeight, int maxHeight)
	static int _bind_GetAdjustedSize(lua_State *L) {
		if (!_lg_typecheck_GetAdjustedSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxComboPopup::GetAdjustedSize(int minWidth, int prefHeight, int maxHeight) function, expected prototype:\nwxSize wxComboPopup::GetAdjustedSize(int minWidth, int prefHeight, int maxHeight)\nClass arguments details:\n");
		}

		int minWidth=(int)lua_tointeger(L,2);
		int prefHeight=(int)lua_tointeger(L,3);
		int maxHeight=(int)lua_tointeger(L,4);

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxComboPopup::GetAdjustedSize(int, int, int)");
		}
		wxSize stack_lret = self->GetAdjustedSize(minWidth, prefHeight, maxHeight);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxComboCtrl * wxComboPopup::GetComboCtrl() const
	static int _bind_GetComboCtrl(lua_State *L) {
		if (!_lg_typecheck_GetComboCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboCtrl * wxComboPopup::GetComboCtrl() const function, expected prototype:\nwxComboCtrl * wxComboPopup::GetComboCtrl() const\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxComboCtrl * wxComboPopup::GetComboCtrl() const");
		}
		wxComboCtrl * lret = self->GetComboCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxComboCtrl >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxComboPopup::GetControl()
	static int _bind_GetControl(lua_State *L) {
		if (!_lg_typecheck_GetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxComboPopup::GetControl() function, expected prototype:\nwxWindow * wxComboPopup::GetControl()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxComboPopup::GetControl()");
		}
		wxWindow * lret = self->GetControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxComboPopup::GetStringValue() const
	static int _bind_GetStringValue(lua_State *L) {
		if (!_lg_typecheck_GetStringValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxComboPopup::GetStringValue() const function, expected prototype:\nwxString wxComboPopup::GetStringValue() const\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxComboPopup::GetStringValue() const");
		}
		wxString lret = self->GetStringValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboPopup::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::Init() function, expected prototype:\nvoid wxComboPopup::Init()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::Init()");
		}
		self->Init();

		return 0;
	}

	// bool wxComboPopup::IsCreated() const
	static int _bind_IsCreated(lua_State *L) {
		if (!_lg_typecheck_IsCreated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboPopup::IsCreated() const function, expected prototype:\nbool wxComboPopup::IsCreated() const\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboPopup::IsCreated() const");
		}
		bool lret = self->IsCreated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboPopup::LazyCreate()
	static int _bind_LazyCreate(lua_State *L) {
		if (!_lg_typecheck_LazyCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboPopup::LazyCreate() function, expected prototype:\nbool wxComboPopup::LazyCreate()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboPopup::LazyCreate()");
		}
		bool lret = self->LazyCreate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboPopup::OnComboDoubleClick()
	static int _bind_OnComboDoubleClick(lua_State *L) {
		if (!_lg_typecheck_OnComboDoubleClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::OnComboDoubleClick() function, expected prototype:\nvoid wxComboPopup::OnComboDoubleClick()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::OnComboDoubleClick()");
		}
		self->OnComboDoubleClick();

		return 0;
	}

	// void wxComboPopup::OnComboKeyEvent(wxKeyEvent & event)
	static int _bind_OnComboKeyEvent(lua_State *L) {
		if (!_lg_typecheck_OnComboKeyEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::OnComboKeyEvent(wxKeyEvent & event) function, expected prototype:\nvoid wxComboPopup::OnComboKeyEvent(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxComboPopup::OnComboKeyEvent function");
		}
		wxKeyEvent & event=*event_ptr;

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::OnComboKeyEvent(wxKeyEvent &)");
		}
		self->OnComboKeyEvent(event);

		return 0;
	}

	// void wxComboPopup::OnDismiss()
	static int _bind_OnDismiss(lua_State *L) {
		if (!_lg_typecheck_OnDismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::OnDismiss() function, expected prototype:\nvoid wxComboPopup::OnDismiss()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::OnDismiss()");
		}
		self->OnDismiss();

		return 0;
	}

	// void wxComboPopup::OnPopup()
	static int _bind_OnPopup(lua_State *L) {
		if (!_lg_typecheck_OnPopup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::OnPopup() function, expected prototype:\nvoid wxComboPopup::OnPopup()\nClass arguments details:\n");
		}


		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::OnPopup()");
		}
		self->OnPopup();

		return 0;
	}

	// void wxComboPopup::PaintComboControl(wxDC & dc, const wxRect & rect)
	static int _bind_PaintComboControl(lua_State *L) {
		if (!_lg_typecheck_PaintComboControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::PaintComboControl(wxDC & dc, const wxRect & rect) function, expected prototype:\nvoid wxComboPopup::PaintComboControl(wxDC & dc, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\n");
		}

		wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxComboPopup::PaintComboControl function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxComboPopup::PaintComboControl function");
		}
		const wxRect & rect=*rect_ptr;

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::PaintComboControl(wxDC &, const wxRect &)");
		}
		self->PaintComboControl(dc, rect);

		return 0;
	}

	// void wxComboPopup::SetStringValue(const wxString & value)
	static int _bind_SetStringValue(lua_State *L) {
		if (!_lg_typecheck_SetStringValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboPopup::SetStringValue(const wxString & value) function, expected prototype:\nvoid wxComboPopup::SetStringValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboPopup* self=(Luna< wxComboPopup >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboPopup::SetStringValue(const wxString &)");
		}
		self->SetStringValue(value);

		return 0;
	}


	// Operator binds:

};

wxComboPopup* LunaTraits< wxComboPopup >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxComboPopup::Create(wxWindow * parent)
	// wxWindow * wxComboPopup::GetControl()
	// wxString wxComboPopup::GetStringValue() const

	// Abstract operators:
}

void LunaTraits< wxComboPopup >::_bind_dtor(wxComboPopup* obj) {
	delete obj;
}

const char LunaTraits< wxComboPopup >::className[] = "wxComboPopup";
const char LunaTraits< wxComboPopup >::fullName[] = "wxComboPopup";
const char LunaTraits< wxComboPopup >::moduleName[] = "wx";
const char* LunaTraits< wxComboPopup >::parents[] = {0};
const int LunaTraits< wxComboPopup >::hash = 7956593;
const int LunaTraits< wxComboPopup >::uniqueIDs[] = {7956593,0};

luna_RegType LunaTraits< wxComboPopup >::methods[] = {
	{"Create", &luna_wrapper_wxComboPopup::_bind_Create},
	{"DestroyPopup", &luna_wrapper_wxComboPopup::_bind_DestroyPopup},
	{"Dismiss", &luna_wrapper_wxComboPopup::_bind_Dismiss},
	{"FindItem", &luna_wrapper_wxComboPopup::_bind_FindItem},
	{"GetAdjustedSize", &luna_wrapper_wxComboPopup::_bind_GetAdjustedSize},
	{"GetComboCtrl", &luna_wrapper_wxComboPopup::_bind_GetComboCtrl},
	{"GetControl", &luna_wrapper_wxComboPopup::_bind_GetControl},
	{"GetStringValue", &luna_wrapper_wxComboPopup::_bind_GetStringValue},
	{"Init", &luna_wrapper_wxComboPopup::_bind_Init},
	{"IsCreated", &luna_wrapper_wxComboPopup::_bind_IsCreated},
	{"LazyCreate", &luna_wrapper_wxComboPopup::_bind_LazyCreate},
	{"OnComboDoubleClick", &luna_wrapper_wxComboPopup::_bind_OnComboDoubleClick},
	{"OnComboKeyEvent", &luna_wrapper_wxComboPopup::_bind_OnComboKeyEvent},
	{"OnDismiss", &luna_wrapper_wxComboPopup::_bind_OnDismiss},
	{"OnPopup", &luna_wrapper_wxComboPopup::_bind_OnPopup},
	{"PaintComboControl", &luna_wrapper_wxComboPopup::_bind_PaintComboControl},
	{"SetStringValue", &luna_wrapper_wxComboPopup::_bind_SetStringValue},
	{"dynCast", &luna_wrapper_wxComboPopup::_bind_dynCast},
	{"__eq", &luna_wrapper_wxComboPopup::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxComboPopup >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxComboPopup >::enumValues[] = {
	{0,0}
};


