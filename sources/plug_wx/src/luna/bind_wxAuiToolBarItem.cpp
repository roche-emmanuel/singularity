#include <plug_common.h>

class luna_wrapper_wxAuiToolBarItem {
public:
	typedef Luna< wxAuiToolBarItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95634835) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiToolBarItem*)");
		}

		wxAuiToolBarItem* rhs =(Luna< wxAuiToolBarItem >::check(L,2));
		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
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

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiToolBarItem");
		
		return luna_dynamicCast(L,converters,"wxAuiToolBarItem",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95634835) ) return false;
		if( (!dynamic_cast< wxAuiToolBarItem* >(Luna< wxAuiToolBarItem >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetKind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSizerItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSizerItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDisabledBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDisabledBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHoverBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHoverBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetShortHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetShortHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLongHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLongHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSpacerPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSpacerPixels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetProportion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHasDropDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasDropDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSticky(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSticky(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiToolBarItem::wxAuiToolBarItem()
	static wxAuiToolBarItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem::wxAuiToolBarItem() function, expected prototype:\nwxAuiToolBarItem::wxAuiToolBarItem()\nClass arguments details:\n");
		}


		return new wxAuiToolBarItem();
	}

	// wxAuiToolBarItem::wxAuiToolBarItem(const wxAuiToolBarItem & c)
	static wxAuiToolBarItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiToolBarItem::wxAuiToolBarItem(const wxAuiToolBarItem & c) function, expected prototype:\nwxAuiToolBarItem::wxAuiToolBarItem(const wxAuiToolBarItem & c)\nClass arguments details:\narg 1 ID = 95634835\n");
		}

		const wxAuiToolBarItem* c_ptr=(Luna< wxAuiToolBarItem >::check(L,1));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxAuiToolBarItem::wxAuiToolBarItem function");
		}
		const wxAuiToolBarItem & c=*c_ptr;

		return new wxAuiToolBarItem(c);
	}

	// Overload binder for wxAuiToolBarItem::wxAuiToolBarItem
	static wxAuiToolBarItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAuiToolBarItem, cannot match any of the overloads for function wxAuiToolBarItem:\n  wxAuiToolBarItem()\n  wxAuiToolBarItem(const wxAuiToolBarItem &)\n");
		return NULL;
	}


	// Function binds:
	// void wxAuiToolBarItem::Assign(const wxAuiToolBarItem & c)
	static int _bind_Assign(lua_State *L) {
		if (!_lg_typecheck_Assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::Assign(const wxAuiToolBarItem & c) function, expected prototype:\nvoid wxAuiToolBarItem::Assign(const wxAuiToolBarItem & c)\nClass arguments details:\narg 1 ID = 95634835\n");
		}

		const wxAuiToolBarItem* c_ptr=(Luna< wxAuiToolBarItem >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxAuiToolBarItem::Assign function");
		}
		const wxAuiToolBarItem & c=*c_ptr;

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::Assign(const wxAuiToolBarItem &)");
		}
		self->Assign(c);

		return 0;
	}

	// void wxAuiToolBarItem::SetWindow(wxWindow * w)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetWindow(wxWindow * w) function, expected prototype:\nvoid wxAuiToolBarItem::SetWindow(wxWindow * w)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* w=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetWindow(wxWindow *)");
		}
		self->SetWindow(w);

		return 0;
	}

	// wxWindow * wxAuiToolBarItem::GetWindow()
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiToolBarItem::GetWindow() function, expected prototype:\nwxWindow * wxAuiToolBarItem::GetWindow()\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiToolBarItem::GetWindow()");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetId(int new_id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetId(int new_id) function, expected prototype:\nvoid wxAuiToolBarItem::SetId(int new_id)\nClass arguments details:\n");
		}

		int new_id=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetId(int)");
		}
		self->SetId(new_id);

		return 0;
	}

	// int wxAuiToolBarItem::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetId() const function, expected prototype:\nint wxAuiToolBarItem::GetId() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetKind(int new_kind)
	static int _bind_SetKind(lua_State *L) {
		if (!_lg_typecheck_SetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetKind(int new_kind) function, expected prototype:\nvoid wxAuiToolBarItem::SetKind(int new_kind)\nClass arguments details:\n");
		}

		int new_kind=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetKind(int)");
		}
		self->SetKind(new_kind);

		return 0;
	}

	// int wxAuiToolBarItem::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetKind() const function, expected prototype:\nint wxAuiToolBarItem::GetKind() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetKind() const");
		}
		int lret = self->GetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetState(int new_state)
	static int _bind_SetState(lua_State *L) {
		if (!_lg_typecheck_SetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetState(int new_state) function, expected prototype:\nvoid wxAuiToolBarItem::SetState(int new_state)\nClass arguments details:\n");
		}

		int new_state=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetState(int)");
		}
		self->SetState(new_state);

		return 0;
	}

	// int wxAuiToolBarItem::GetState() const
	static int _bind_GetState(lua_State *L) {
		if (!_lg_typecheck_GetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetState() const function, expected prototype:\nint wxAuiToolBarItem::GetState() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetState() const");
		}
		int lret = self->GetState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetSizerItem(wxSizerItem * s)
	static int _bind_SetSizerItem(lua_State *L) {
		if (!_lg_typecheck_SetSizerItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetSizerItem(wxSizerItem * s) function, expected prototype:\nvoid wxAuiToolBarItem::SetSizerItem(wxSizerItem * s)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizerItem* s=(Luna< wxObject >::checkSubType< wxSizerItem >(L,2));

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetSizerItem(wxSizerItem *)");
		}
		self->SetSizerItem(s);

		return 0;
	}

	// wxSizerItem * wxAuiToolBarItem::GetSizerItem() const
	static int _bind_GetSizerItem(lua_State *L) {
		if (!_lg_typecheck_GetSizerItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxAuiToolBarItem::GetSizerItem() const function, expected prototype:\nwxSizerItem * wxAuiToolBarItem::GetSizerItem() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxAuiToolBarItem::GetSizerItem() const");
		}
		wxSizerItem * lret = self->GetSizerItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetLabel(const wxString & s)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetLabel(const wxString & s) function, expected prototype:\nvoid wxAuiToolBarItem::SetLabel(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetLabel(const wxString &)");
		}
		self->SetLabel(s);

		return 0;
	}

	// const wxString & wxAuiToolBarItem::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxAuiToolBarItem::GetLabel() const function, expected prototype:\nconst wxString & wxAuiToolBarItem::GetLabel() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxAuiToolBarItem::GetLabel() const");
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBarItem::SetBitmap(const wxBitmap & bmp)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxAuiToolBarItem::SetBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxAuiToolBarItem::SetBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(bmp);

		return 0;
	}

	// const wxBitmap & wxAuiToolBarItem::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxAuiToolBarItem::GetBitmap() const function, expected prototype:\nconst wxBitmap & wxAuiToolBarItem::GetBitmap() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxAuiToolBarItem::GetBitmap() const");
		}
		const wxBitmap* lret = &self->GetBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetDisabledBitmap(const wxBitmap & bmp)
	static int _bind_SetDisabledBitmap(lua_State *L) {
		if (!_lg_typecheck_SetDisabledBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetDisabledBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxAuiToolBarItem::SetDisabledBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxAuiToolBarItem::SetDisabledBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetDisabledBitmap(const wxBitmap &)");
		}
		self->SetDisabledBitmap(bmp);

		return 0;
	}

	// const wxBitmap & wxAuiToolBarItem::GetDisabledBitmap() const
	static int _bind_GetDisabledBitmap(lua_State *L) {
		if (!_lg_typecheck_GetDisabledBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxAuiToolBarItem::GetDisabledBitmap() const function, expected prototype:\nconst wxBitmap & wxAuiToolBarItem::GetDisabledBitmap() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxAuiToolBarItem::GetDisabledBitmap() const");
		}
		const wxBitmap* lret = &self->GetDisabledBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetHoverBitmap(const wxBitmap & bmp)
	static int _bind_SetHoverBitmap(lua_State *L) {
		if (!_lg_typecheck_SetHoverBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetHoverBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxAuiToolBarItem::SetHoverBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxAuiToolBarItem::SetHoverBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetHoverBitmap(const wxBitmap &)");
		}
		self->SetHoverBitmap(bmp);

		return 0;
	}

	// const wxBitmap & wxAuiToolBarItem::GetHoverBitmap() const
	static int _bind_GetHoverBitmap(lua_State *L) {
		if (!_lg_typecheck_GetHoverBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxAuiToolBarItem::GetHoverBitmap() const function, expected prototype:\nconst wxBitmap & wxAuiToolBarItem::GetHoverBitmap() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxBitmap & wxAuiToolBarItem::GetHoverBitmap() const");
		}
		const wxBitmap* lret = &self->GetHoverBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetShortHelp(const wxString & s)
	static int _bind_SetShortHelp(lua_State *L) {
		if (!_lg_typecheck_SetShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetShortHelp(const wxString & s) function, expected prototype:\nvoid wxAuiToolBarItem::SetShortHelp(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetShortHelp(const wxString &)");
		}
		self->SetShortHelp(s);

		return 0;
	}

	// const wxString & wxAuiToolBarItem::GetShortHelp() const
	static int _bind_GetShortHelp(lua_State *L) {
		if (!_lg_typecheck_GetShortHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxAuiToolBarItem::GetShortHelp() const function, expected prototype:\nconst wxString & wxAuiToolBarItem::GetShortHelp() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxAuiToolBarItem::GetShortHelp() const");
		}
		const wxString & lret = self->GetShortHelp();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBarItem::SetLongHelp(const wxString & s)
	static int _bind_SetLongHelp(lua_State *L) {
		if (!_lg_typecheck_SetLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetLongHelp(const wxString & s) function, expected prototype:\nvoid wxAuiToolBarItem::SetLongHelp(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetLongHelp(const wxString &)");
		}
		self->SetLongHelp(s);

		return 0;
	}

	// const wxString & wxAuiToolBarItem::GetLongHelp() const
	static int _bind_GetLongHelp(lua_State *L) {
		if (!_lg_typecheck_GetLongHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxAuiToolBarItem::GetLongHelp() const function, expected prototype:\nconst wxString & wxAuiToolBarItem::GetLongHelp() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxAuiToolBarItem::GetLongHelp() const");
		}
		const wxString & lret = self->GetLongHelp();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiToolBarItem::SetMinSize(const wxSize & s)
	static int _bind_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_SetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetMinSize(const wxSize & s) function, expected prototype:\nvoid wxAuiToolBarItem::SetMinSize(const wxSize & s)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxAuiToolBarItem::SetMinSize function");
		}
		const wxSize & s=*s_ptr;

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetMinSize(const wxSize &)");
		}
		self->SetMinSize(s);

		return 0;
	}

	// const wxSize & wxAuiToolBarItem::GetMinSize() const
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxSize & wxAuiToolBarItem::GetMinSize() const function, expected prototype:\nconst wxSize & wxAuiToolBarItem::GetMinSize() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxSize & wxAuiToolBarItem::GetMinSize() const");
		}
		const wxSize* lret = &self->GetMinSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,false);

		return 1;
	}

	// void wxAuiToolBarItem::SetSpacerPixels(int s)
	static int _bind_SetSpacerPixels(lua_State *L) {
		if (!_lg_typecheck_SetSpacerPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetSpacerPixels(int s) function, expected prototype:\nvoid wxAuiToolBarItem::SetSpacerPixels(int s)\nClass arguments details:\n");
		}

		int s=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetSpacerPixels(int)");
		}
		self->SetSpacerPixels(s);

		return 0;
	}

	// int wxAuiToolBarItem::GetSpacerPixels() const
	static int _bind_GetSpacerPixels(lua_State *L) {
		if (!_lg_typecheck_GetSpacerPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetSpacerPixels() const function, expected prototype:\nint wxAuiToolBarItem::GetSpacerPixels() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetSpacerPixels() const");
		}
		int lret = self->GetSpacerPixels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetProportion(int p)
	static int _bind_SetProportion(lua_State *L) {
		if (!_lg_typecheck_SetProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetProportion(int p) function, expected prototype:\nvoid wxAuiToolBarItem::SetProportion(int p)\nClass arguments details:\n");
		}

		int p=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetProportion(int)");
		}
		self->SetProportion(p);

		return 0;
	}

	// int wxAuiToolBarItem::GetProportion() const
	static int _bind_GetProportion(lua_State *L) {
		if (!_lg_typecheck_GetProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetProportion() const function, expected prototype:\nint wxAuiToolBarItem::GetProportion() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetProportion() const");
		}
		int lret = self->GetProportion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetActive(bool b)
	static int _bind_SetActive(lua_State *L) {
		if (!_lg_typecheck_SetActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetActive(bool b) function, expected prototype:\nvoid wxAuiToolBarItem::SetActive(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetActive(bool)");
		}
		self->SetActive(b);

		return 0;
	}

	// bool wxAuiToolBarItem::IsActive() const
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBarItem::IsActive() const function, expected prototype:\nbool wxAuiToolBarItem::IsActive() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBarItem::IsActive() const");
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBarItem::SetHasDropDown(bool b)
	static int _bind_SetHasDropDown(lua_State *L) {
		if (!_lg_typecheck_SetHasDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetHasDropDown(bool b) function, expected prototype:\nvoid wxAuiToolBarItem::SetHasDropDown(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetHasDropDown(bool)");
		}
		self->SetHasDropDown(b);

		return 0;
	}

	// bool wxAuiToolBarItem::HasDropDown() const
	static int _bind_HasDropDown(lua_State *L) {
		if (!_lg_typecheck_HasDropDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBarItem::HasDropDown() const function, expected prototype:\nbool wxAuiToolBarItem::HasDropDown() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBarItem::HasDropDown() const");
		}
		bool lret = self->HasDropDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBarItem::SetSticky(bool b)
	static int _bind_SetSticky(lua_State *L) {
		if (!_lg_typecheck_SetSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetSticky(bool b) function, expected prototype:\nvoid wxAuiToolBarItem::SetSticky(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetSticky(bool)");
		}
		self->SetSticky(b);

		return 0;
	}

	// bool wxAuiToolBarItem::IsSticky() const
	static int _bind_IsSticky(lua_State *L) {
		if (!_lg_typecheck_IsSticky(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBarItem::IsSticky() const function, expected prototype:\nbool wxAuiToolBarItem::IsSticky() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiToolBarItem::IsSticky() const");
		}
		bool lret = self->IsSticky();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiToolBarItem::SetUserData(long l)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetUserData(long l) function, expected prototype:\nvoid wxAuiToolBarItem::SetUserData(long l)\nClass arguments details:\n");
		}

		long l=(long)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetUserData(long)");
		}
		self->SetUserData(l);

		return 0;
	}

	// long wxAuiToolBarItem::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxAuiToolBarItem::GetUserData() const function, expected prototype:\nlong wxAuiToolBarItem::GetUserData() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxAuiToolBarItem::GetUserData() const");
		}
		long lret = self->GetUserData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiToolBarItem::SetAlignment(int l)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiToolBarItem::SetAlignment(int l) function, expected prototype:\nvoid wxAuiToolBarItem::SetAlignment(int l)\nClass arguments details:\n");
		}

		int l=(int)lua_tointeger(L,2);

		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiToolBarItem::SetAlignment(int)");
		}
		self->SetAlignment(l);

		return 0;
	}

	// int wxAuiToolBarItem::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarItem::GetAlignment() const function, expected prototype:\nint wxAuiToolBarItem::GetAlignment() const\nClass arguments details:\n");
		}


		wxAuiToolBarItem* self=(Luna< wxAuiToolBarItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiToolBarItem::GetAlignment() const");
		}
		int lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBarItem* LunaTraits< wxAuiToolBarItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiToolBarItem::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxAuiToolBarItem >::_bind_dtor(wxAuiToolBarItem* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBarItem >::className[] = "wxAuiToolBarItem";
const char LunaTraits< wxAuiToolBarItem >::fullName[] = "wxAuiToolBarItem";
const char LunaTraits< wxAuiToolBarItem >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBarItem >::parents[] = {0};
const int LunaTraits< wxAuiToolBarItem >::hash = 95634835;
const int LunaTraits< wxAuiToolBarItem >::uniqueIDs[] = {95634835,0};

luna_RegType LunaTraits< wxAuiToolBarItem >::methods[] = {
	{"Assign", &luna_wrapper_wxAuiToolBarItem::_bind_Assign},
	{"SetWindow", &luna_wrapper_wxAuiToolBarItem::_bind_SetWindow},
	{"GetWindow", &luna_wrapper_wxAuiToolBarItem::_bind_GetWindow},
	{"SetId", &luna_wrapper_wxAuiToolBarItem::_bind_SetId},
	{"GetId", &luna_wrapper_wxAuiToolBarItem::_bind_GetId},
	{"SetKind", &luna_wrapper_wxAuiToolBarItem::_bind_SetKind},
	{"GetKind", &luna_wrapper_wxAuiToolBarItem::_bind_GetKind},
	{"SetState", &luna_wrapper_wxAuiToolBarItem::_bind_SetState},
	{"GetState", &luna_wrapper_wxAuiToolBarItem::_bind_GetState},
	{"SetSizerItem", &luna_wrapper_wxAuiToolBarItem::_bind_SetSizerItem},
	{"GetSizerItem", &luna_wrapper_wxAuiToolBarItem::_bind_GetSizerItem},
	{"SetLabel", &luna_wrapper_wxAuiToolBarItem::_bind_SetLabel},
	{"GetLabel", &luna_wrapper_wxAuiToolBarItem::_bind_GetLabel},
	{"SetBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_SetBitmap},
	{"GetBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_GetBitmap},
	{"SetDisabledBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_SetDisabledBitmap},
	{"GetDisabledBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_GetDisabledBitmap},
	{"SetHoverBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_SetHoverBitmap},
	{"GetHoverBitmap", &luna_wrapper_wxAuiToolBarItem::_bind_GetHoverBitmap},
	{"SetShortHelp", &luna_wrapper_wxAuiToolBarItem::_bind_SetShortHelp},
	{"GetShortHelp", &luna_wrapper_wxAuiToolBarItem::_bind_GetShortHelp},
	{"SetLongHelp", &luna_wrapper_wxAuiToolBarItem::_bind_SetLongHelp},
	{"GetLongHelp", &luna_wrapper_wxAuiToolBarItem::_bind_GetLongHelp},
	{"SetMinSize", &luna_wrapper_wxAuiToolBarItem::_bind_SetMinSize},
	{"GetMinSize", &luna_wrapper_wxAuiToolBarItem::_bind_GetMinSize},
	{"SetSpacerPixels", &luna_wrapper_wxAuiToolBarItem::_bind_SetSpacerPixels},
	{"GetSpacerPixels", &luna_wrapper_wxAuiToolBarItem::_bind_GetSpacerPixels},
	{"SetProportion", &luna_wrapper_wxAuiToolBarItem::_bind_SetProportion},
	{"GetProportion", &luna_wrapper_wxAuiToolBarItem::_bind_GetProportion},
	{"SetActive", &luna_wrapper_wxAuiToolBarItem::_bind_SetActive},
	{"IsActive", &luna_wrapper_wxAuiToolBarItem::_bind_IsActive},
	{"SetHasDropDown", &luna_wrapper_wxAuiToolBarItem::_bind_SetHasDropDown},
	{"HasDropDown", &luna_wrapper_wxAuiToolBarItem::_bind_HasDropDown},
	{"SetSticky", &luna_wrapper_wxAuiToolBarItem::_bind_SetSticky},
	{"IsSticky", &luna_wrapper_wxAuiToolBarItem::_bind_IsSticky},
	{"SetUserData", &luna_wrapper_wxAuiToolBarItem::_bind_SetUserData},
	{"GetUserData", &luna_wrapper_wxAuiToolBarItem::_bind_GetUserData},
	{"SetAlignment", &luna_wrapper_wxAuiToolBarItem::_bind_SetAlignment},
	{"GetAlignment", &luna_wrapper_wxAuiToolBarItem::_bind_GetAlignment},
	{"dynCast", &luna_wrapper_wxAuiToolBarItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiToolBarItem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBarItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBarItem >::enumValues[] = {
	{0,0}
};


