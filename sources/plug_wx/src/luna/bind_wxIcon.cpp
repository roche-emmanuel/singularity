#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIcon.h>

class luna_wrapper_wxIcon {
public:
	typedef Luna< wxIcon > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxIcon* ptr= dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,1));
		wxIcon* ptr= luna_caster< wxObject, wxIcon >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIcon >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82682189) ) return false;
		if( (!(Luna< wxIconLocation >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,82682189) ) return false;
		if( (!(Luna< wxIconLocation >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CopyFromBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxIcon::wxIcon()
	static wxIcon* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon() function, expected prototype:\nwxIcon::wxIcon()\nClass arguments details:\n");
		}


		return new wxIcon();
	}

	// wxIcon::wxIcon(const wxIcon & icon)
	static wxIcon* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(const wxIcon & icon) function, expected prototype:\nwxIcon::wxIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,1));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIcon::wxIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		return new wxIcon(icon);
	}

	// wxIcon::wxIcon(const char *const * bits)
	static wxIcon* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(const char *const * bits) function, expected prototype:\nwxIcon::wxIcon(const char *const * bits)\nClass arguments details:\n");
		}

		const char *const * bits=(const char *const *)lua_tostring(L,1);

		return new wxIcon(bits);
	}

	// wxIcon::wxIcon(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)
	static wxIcon* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1) function, expected prototype:\nwxIcon::wxIcon(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxICON_DEFAULT_TYPE;
		int desiredWidth=luatop>2 ? (int)lua_tointeger(L,3) : -1;
		int desiredHeight=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		return new wxIcon(name, type, desiredWidth, desiredHeight);
	}

	// wxIcon::wxIcon(const wxIconLocation & loc)
	static wxIcon* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(const wxIconLocation & loc) function, expected prototype:\nwxIcon::wxIcon(const wxIconLocation & loc)\nClass arguments details:\narg 1 ID = 82682189\n");
		}

		const wxIconLocation* loc_ptr=(Luna< wxIconLocation >::check(L,1));
		if( !loc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg loc in wxIcon::wxIcon function");
		}
		const wxIconLocation & loc=*loc_ptr;

		return new wxIcon(loc);
	}

	// wxIcon::wxIcon(lua_Table * data)
	static wxIcon* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(lua_Table * data) function, expected prototype:\nwxIcon::wxIcon(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxIcon(L,NULL);
	}

	// wxIcon::wxIcon(lua_Table * data, const wxIcon & icon)
	static wxIcon* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(lua_Table * data, const wxIcon & icon) function, expected prototype:\nwxIcon::wxIcon(lua_Table * data, const wxIcon & icon)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIcon::wxIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		return new wrapper_wxIcon(L,NULL, icon);
	}

	// wxIcon::wxIcon(lua_Table * data, const char *const * bits)
	static wxIcon* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(lua_Table * data, const char *const * bits) function, expected prototype:\nwxIcon::wxIcon(lua_Table * data, const char *const * bits)\nClass arguments details:\n");
		}

		const char *const * bits=(const char *const *)lua_tostring(L,2);

		return new wrapper_wxIcon(L,NULL, bits);
	}

	// wxIcon::wxIcon(lua_Table * data, const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)
	static wxIcon* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(lua_Table * data, const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1) function, expected prototype:\nwxIcon::wxIcon(lua_Table * data, const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxICON_DEFAULT_TYPE;
		int desiredWidth=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int desiredHeight=luatop>4 ? (int)lua_tointeger(L,5) : -1;

		return new wrapper_wxIcon(L,NULL, name, type, desiredWidth, desiredHeight);
	}

	// wxIcon::wxIcon(lua_Table * data, const wxIconLocation & loc)
	static wxIcon* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon::wxIcon(lua_Table * data, const wxIconLocation & loc) function, expected prototype:\nwxIcon::wxIcon(lua_Table * data, const wxIconLocation & loc)\nClass arguments details:\narg 2 ID = 82682189\n");
		}

		const wxIconLocation* loc_ptr=(Luna< wxIconLocation >::check(L,2));
		if( !loc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg loc in wxIcon::wxIcon function");
		}
		const wxIconLocation & loc=*loc_ptr;

		return new wrapper_wxIcon(L,NULL, loc);
	}

	// Overload binder for wxIcon::wxIcon
	static wxIcon* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);

		luaL_error(L, "error in function wxIcon, cannot match any of the overloads for function wxIcon:\n  wxIcon()\n  wxIcon(const wxIcon &)\n  wxIcon(const char *const *)\n  wxIcon(const wxString &, wxBitmapType, int, int)\n  wxIcon(const wxIconLocation &)\n  wxIcon(lua_Table *)\n  wxIcon(lua_Table *, const wxIcon &)\n  wxIcon(lua_Table *, const char *const *)\n  wxIcon(lua_Table *, const wxString &, wxBitmapType, int, int)\n  wxIcon(lua_Table *, const wxIconLocation &)\n");
		return NULL;
	}


	// Function binds:
	// void wxIcon::CopyFromBitmap(const wxBitmap & bmp)
	static int _bind_CopyFromBitmap(lua_State *L) {
		if (!_lg_typecheck_CopyFromBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIcon::CopyFromBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxIcon::CopyFromBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxIcon::CopyFromBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIcon::CopyFromBitmap(const wxBitmap &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->CopyFromBitmap(bmp);

		return 0;
	}

	// int wxIcon::GetDepth() const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIcon::GetDepth() const function, expected prototype:\nint wxIcon::GetDepth() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIcon::GetDepth() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxIcon::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIcon::GetHeight() const function, expected prototype:\nint wxIcon::GetHeight() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIcon::GetHeight() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxIcon::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIcon::GetWidth() const function, expected prototype:\nint wxIcon::GetWidth() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIcon::GetWidth() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxIcon::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIcon::IsOk() const function, expected prototype:\nbool wxIcon::IsOk() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIcon::IsOk() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIcon::LoadFile(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIcon::LoadFile(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1) function, expected prototype:\nbool wxIcon::LoadFile(const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxICON_DEFAULT_TYPE;
		int desiredWidth=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int desiredHeight=luatop>4 ? (int)lua_tointeger(L,5) : -1;

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIcon::LoadFile(const wxString &, wxBitmapType, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->LoadFile(name, type, desiredWidth, desiredHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxIcon::SetDepth(int depth)
	static int _bind_SetDepth(lua_State *L) {
		if (!_lg_typecheck_SetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIcon::SetDepth(int depth) function, expected prototype:\nvoid wxIcon::SetDepth(int depth)\nClass arguments details:\n");
		}

		int depth=(int)lua_tointeger(L,2);

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIcon::SetDepth(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetDepth(depth);

		return 0;
	}

	// void wxIcon::SetHeight(int height)
	static int _bind_SetHeight(lua_State *L) {
		if (!_lg_typecheck_SetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIcon::SetHeight(int height) function, expected prototype:\nvoid wxIcon::SetHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIcon::SetHeight(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetHeight(height);

		return 0;
	}

	// void wxIcon::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIcon::SetWidth(int width) function, expected prototype:\nvoid wxIcon::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIcon::SetWidth(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetWidth(width);

		return 0;
	}

	// wxClassInfo * wxIcon::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIcon::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIcon::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIcon::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxIcon::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxIcon::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIcon::base_IsOk() const function, expected prototype:\nbool wxIcon::base_IsOk() const\nClass arguments details:\n");
		}


		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIcon::base_IsOk() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->wxIcon::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// wxIcon & wxIcon::operator=(const wxIcon & icon)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon & wxIcon::operator=(const wxIcon & icon) function, expected prototype:\nwxIcon & wxIcon::operator=(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIcon::operator= function");
		}
		const wxIcon & icon=*icon_ptr;

		wxIcon* self=Luna< wxObject >::checkSubType< wxIcon >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon & wxIcon::operator=(const wxIcon &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		const wxIcon* lret = &self->operator=(icon);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}


};

wxIcon* LunaTraits< wxIcon >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxIcon::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxIcon >::_bind_dtor(wxIcon* obj) {
	delete obj;
}

const char LunaTraits< wxIcon >::className[] = "wxIcon";
const char LunaTraits< wxIcon >::fullName[] = "wxIcon";
const char LunaTraits< wxIcon >::moduleName[] = "wx";
const char* LunaTraits< wxIcon >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxIcon >::hash = 19964743;
const int LunaTraits< wxIcon >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIcon >::methods[] = {
	{"CopyFromBitmap", &luna_wrapper_wxIcon::_bind_CopyFromBitmap},
	{"GetDepth", &luna_wrapper_wxIcon::_bind_GetDepth},
	{"GetHeight", &luna_wrapper_wxIcon::_bind_GetHeight},
	{"GetWidth", &luna_wrapper_wxIcon::_bind_GetWidth},
	{"IsOk", &luna_wrapper_wxIcon::_bind_IsOk},
	{"LoadFile", &luna_wrapper_wxIcon::_bind_LoadFile},
	{"SetDepth", &luna_wrapper_wxIcon::_bind_SetDepth},
	{"SetHeight", &luna_wrapper_wxIcon::_bind_SetHeight},
	{"SetWidth", &luna_wrapper_wxIcon::_bind_SetWidth},
	{"base_GetClassInfo", &luna_wrapper_wxIcon::_bind_base_GetClassInfo},
	{"base_IsOk", &luna_wrapper_wxIcon::_bind_base_IsOk},
	{"op_assign", &luna_wrapper_wxIcon::_bind_op_assign},
	{"__eq", &luna_wrapper_wxIcon::_bind___eq},
	{"getTable", &luna_wrapper_wxIcon::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxIcon >::converters[] = {
	{"wxObject", &luna_wrapper_wxIcon::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIcon >::enumValues[] = {
	{0,0}
};


