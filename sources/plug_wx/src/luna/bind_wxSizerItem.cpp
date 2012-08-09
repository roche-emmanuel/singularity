#include <plug_common.h>

class luna_wrapper_wxSizerItem {
public:
	typedef Luna< wxSizerItem > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSizerItem* ptr= dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizerItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85412581) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85412581) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AssignWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSpacer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSpacer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteWindows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DetachSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProportion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSpacer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSpacer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxSizerItem(width, height, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,2));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wxSizerItem(window, flags);
	}

	// wxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int proportion=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int flag=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxObject* userData=luatop>4 ? (Luna< wxObject >::check(L,5)) : (wxObject*)NULL;

		return new wxSizerItem(window, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,2));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wxSizerItem(sizer, flags);
	}

	// wxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		int proportion=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int flag=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		wxObject* userData=luatop>4 ? (Luna< wxObject >::check(L,5)) : (wxObject*)NULL;

		return new wxSizerItem(sizer, proportion, flag, border, userData);
	}

	// Overload binder for wxSizerItem::wxSizerItem
	static wxSizerItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function wxSizerItem, cannot match any of the overloads for function wxSizerItem:\n  wxSizerItem(int, int, int, int, int, wxObject *)\n  wxSizerItem(wxWindow *, const wxSizerFlags &)\n  wxSizerItem(wxWindow *, int, int, int, wxObject *)\n  wxSizerItem(wxSizer *, const wxSizerFlags &)\n  wxSizerItem(wxSizer *, int, int, int, wxObject *)\n");
		return NULL;
	}


	// Function binds:
	// void wxSizerItem::AssignWindow(wxWindow * window)
	static int _bind_AssignWindow(lua_State *L) {
		if (!_lg_typecheck_AssignWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignWindow(wxWindow * window) function, expected prototype:\nvoid wxSizerItem::AssignWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignWindow(wxWindow *)");
		}
		self->AssignWindow(window);

		return 0;
	}

	// void wxSizerItem::AssignSizer(wxSizer * sizer)
	static int _bind_AssignSizer(lua_State *L) {
		if (!_lg_typecheck_AssignSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSizer(wxSizer * sizer) function, expected prototype:\nvoid wxSizerItem::AssignSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSizer(wxSizer *)");
		}
		self->AssignSizer(sizer);

		return 0;
	}

	// void wxSizerItem::AssignSpacer(const wxSize & size)
	static int _bind_AssignSpacer_overload_1(lua_State *L) {
		if (!_lg_typecheck_AssignSpacer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSpacer(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::AssignSpacer(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::AssignSpacer function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSpacer(const wxSize &)");
		}
		self->AssignSpacer(size);

		return 0;
	}

	// void wxSizerItem::AssignSpacer(int w, int h)
	static int _bind_AssignSpacer_overload_2(lua_State *L) {
		if (!_lg_typecheck_AssignSpacer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSpacer(int w, int h) function, expected prototype:\nvoid wxSizerItem::AssignSpacer(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSpacer(int, int)");
		}
		self->AssignSpacer(w, h);

		return 0;
	}

	// Overload binder for wxSizerItem::AssignSpacer
	static int _bind_AssignSpacer(lua_State *L) {
		if (_lg_typecheck_AssignSpacer_overload_1(L)) return _bind_AssignSpacer_overload_1(L);
		if (_lg_typecheck_AssignSpacer_overload_2(L)) return _bind_AssignSpacer_overload_2(L);

		luaL_error(L, "error in function AssignSpacer, cannot match any of the overloads for function AssignSpacer:\n  AssignSpacer(const wxSize &)\n  AssignSpacer(int, int)\n");
		return 0;
	}

	// wxSize wxSizerItem::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::CalcMin() function, expected prototype:\nwxSize wxSizerItem::CalcMin()\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::DeleteWindows()
	static int _bind_DeleteWindows(lua_State *L) {
		if (!_lg_typecheck_DeleteWindows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::DeleteWindows() function, expected prototype:\nvoid wxSizerItem::DeleteWindows()\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::DeleteWindows()");
		}
		self->DeleteWindows();

		return 0;
	}

	// void wxSizerItem::DetachSizer()
	static int _bind_DetachSizer(lua_State *L) {
		if (!_lg_typecheck_DetachSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::DetachSizer() function, expected prototype:\nvoid wxSizerItem::DetachSizer()\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::DetachSizer()");
		}
		self->DetachSizer();

		return 0;
	}

	// int wxSizerItem::GetBorder() const
	static int _bind_GetBorder(lua_State *L) {
		if (!_lg_typecheck_GetBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetBorder() const function, expected prototype:\nint wxSizerItem::GetBorder() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetBorder() const");
		}
		int lret = self->GetBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSizerItem::GetFlag() const
	static int _bind_GetFlag(lua_State *L) {
		if (!_lg_typecheck_GetFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetFlag() const function, expected prototype:\nint wxSizerItem::GetFlag() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetFlag() const");
		}
		int lret = self->GetFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSizerItem::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetId() const function, expected prototype:\nint wxSizerItem::GetId() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetId() const");
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxSizerItem::GetMinSize() const
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetMinSize() const function, expected prototype:\nwxSize wxSizerItem::GetMinSize() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetMinSize() const");
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetMinSize(const wxSize &)");
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxSizerItem::SetMinSize(int x, int y)
	static int _bind_SetMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetMinSize(int x, int y) function, expected prototype:\nvoid wxSizerItem::SetMinSize(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetMinSize(int, int)");
		}
		self->SetMinSize(x, y);

		return 0;
	}

	// Overload binder for wxSizerItem::SetMinSize
	static int _bind_SetMinSize(lua_State *L) {
		if (_lg_typecheck_SetMinSize_overload_1(L)) return _bind_SetMinSize_overload_1(L);
		if (_lg_typecheck_SetMinSize_overload_2(L)) return _bind_SetMinSize_overload_2(L);

		luaL_error(L, "error in function SetMinSize, cannot match any of the overloads for function SetMinSize:\n  SetMinSize(const wxSize &)\n  SetMinSize(int, int)\n");
		return 0;
	}

	// wxPoint wxSizerItem::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxSizerItem::GetPosition() const function, expected prototype:\nwxPoint wxSizerItem::GetPosition() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxSizerItem::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxSizerItem::GetProportion() const
	static int _bind_GetProportion(lua_State *L) {
		if (!_lg_typecheck_GetProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetProportion() const function, expected prototype:\nint wxSizerItem::GetProportion() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetProportion() const");
		}
		int lret = self->GetProportion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float wxSizerItem::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float wxSizerItem::GetRatio() const function, expected prototype:\nfloat wxSizerItem::GetRatio() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float wxSizerItem::GetRatio() const");
		}
		float lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxSizerItem::GetRect()
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxSizerItem::GetRect() function, expected prototype:\nwxRect wxSizerItem::GetRect()\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxSizerItem::GetRect()");
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizerItem::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetSize() const function, expected prototype:\nwxSize wxSizerItem::GetSize() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSizer * wxSizerItem::GetSizer() const
	static int _bind_GetSizer(lua_State *L) {
		if (!_lg_typecheck_GetSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxSizerItem::GetSizer() const function, expected prototype:\nwxSizer * wxSizerItem::GetSizer() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxSizerItem::GetSizer() const");
		}
		wxSizer * lret = self->GetSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizerItem::GetSpacer() const
	static int _bind_GetSpacer(lua_State *L) {
		if (!_lg_typecheck_GetSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetSpacer() const function, expected prototype:\nwxSize wxSizerItem::GetSpacer() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetSpacer() const");
		}
		wxSize stack_lret = self->GetSpacer();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxObject * wxSizerItem::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxSizerItem::GetUserData() const function, expected prototype:\nwxObject * wxSizerItem::GetUserData() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxSizerItem::GetUserData() const");
		}
		wxObject * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxSizerItem::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxSizerItem::GetWindow() const function, expected prototype:\nwxWindow * wxSizerItem::GetWindow() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxSizerItem::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxSizerItem::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsShown() const function, expected prototype:\nbool wxSizerItem::IsShown() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsShown() const");
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsSizer() const
	static int _bind_IsSizer(lua_State *L) {
		if (!_lg_typecheck_IsSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsSizer() const function, expected prototype:\nbool wxSizerItem::IsSizer() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsSizer() const");
		}
		bool lret = self->IsSizer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsSpacer() const
	static int _bind_IsSpacer(lua_State *L) {
		if (!_lg_typecheck_IsSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsSpacer() const function, expected prototype:\nbool wxSizerItem::IsSpacer() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsSpacer() const");
		}
		bool lret = self->IsSpacer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsWindow() const
	static int _bind_IsWindow(lua_State *L) {
		if (!_lg_typecheck_IsWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsWindow() const function, expected prototype:\nbool wxSizerItem::IsWindow() const\nClass arguments details:\n");
		}


		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsWindow() const");
		}
		bool lret = self->IsWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSizerItem::SetBorder(int border)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetBorder(int border) function, expected prototype:\nvoid wxSizerItem::SetBorder(int border)\nClass arguments details:\n");
		}

		int border=(int)lua_tointeger(L,2);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetBorder(int)");
		}
		self->SetBorder(border);

		return 0;
	}

	// void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_SetDimension(lua_State *L) {
		if (!_lg_typecheck_SetDimension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSizerItem::SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetDimension(const wxPoint &, const wxSize &)");
		}
		self->SetDimension(pos, size);

		return 0;
	}

	// void wxSizerItem::SetFlag(int flag)
	static int _bind_SetFlag(lua_State *L) {
		if (!_lg_typecheck_SetFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetFlag(int flag) function, expected prototype:\nvoid wxSizerItem::SetFlag(int flag)\nClass arguments details:\n");
		}

		int flag=(int)lua_tointeger(L,2);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetFlag(int)");
		}
		self->SetFlag(flag);

		return 0;
	}

	// void wxSizerItem::SetId(int id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetId(int id) function, expected prototype:\nvoid wxSizerItem::SetId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetId(int)");
		}
		self->SetId(id);

		return 0;
	}

	// void wxSizerItem::SetInitSize(int x, int y)
	static int _bind_SetInitSize(lua_State *L) {
		if (!_lg_typecheck_SetInitSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetInitSize(int x, int y) function, expected prototype:\nvoid wxSizerItem::SetInitSize(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetInitSize(int, int)");
		}
		self->SetInitSize(x, y);

		return 0;
	}

	// void wxSizerItem::SetProportion(int proportion)
	static int _bind_SetProportion(lua_State *L) {
		if (!_lg_typecheck_SetProportion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetProportion(int proportion) function, expected prototype:\nvoid wxSizerItem::SetProportion(int proportion)\nClass arguments details:\n");
		}

		int proportion=(int)lua_tointeger(L,2);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetProportion(int)");
		}
		self->SetProportion(proportion);

		return 0;
	}

	// void wxSizerItem::SetRatio(int width, int height)
	static int _bind_SetRatio_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(int width, int height) function, expected prototype:\nvoid wxSizerItem::SetRatio(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(int, int)");
		}
		self->SetRatio(width, height);

		return 0;
	}

	// void wxSizerItem::SetRatio(wxSize size)
	static int _bind_SetRatio_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(wxSize size) function, expected prototype:\nvoid wxSizerItem::SetRatio(wxSize size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetRatio function");
		}
		wxSize size=*size_ptr;

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(wxSize)");
		}
		self->SetRatio(size);

		return 0;
	}

	// void wxSizerItem::SetRatio(float ratio)
	static int _bind_SetRatio_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(float ratio) function, expected prototype:\nvoid wxSizerItem::SetRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(float)");
		}
		self->SetRatio(ratio);

		return 0;
	}

	// Overload binder for wxSizerItem::SetRatio
	static int _bind_SetRatio(lua_State *L) {
		if (_lg_typecheck_SetRatio_overload_1(L)) return _bind_SetRatio_overload_1(L);
		if (_lg_typecheck_SetRatio_overload_2(L)) return _bind_SetRatio_overload_2(L);
		if (_lg_typecheck_SetRatio_overload_3(L)) return _bind_SetRatio_overload_3(L);

		luaL_error(L, "error in function SetRatio, cannot match any of the overloads for function SetRatio:\n  SetRatio(int, int)\n  SetRatio(wxSize)\n  SetRatio(float)\n");
		return 0;
	}

	// void wxSizerItem::SetSizer(wxSizer * sizer)
	static int _bind_SetSizer(lua_State *L) {
		if (!_lg_typecheck_SetSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetSizer(wxSizer * sizer) function, expected prototype:\nvoid wxSizerItem::SetSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetSizer(wxSizer *)");
		}
		self->SetSizer(sizer);

		return 0;
	}

	// void wxSizerItem::SetSpacer(const wxSize & size)
	static int _bind_SetSpacer(lua_State *L) {
		if (!_lg_typecheck_SetSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetSpacer(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetSpacer(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetSpacer function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetSpacer(const wxSize &)");
		}
		self->SetSpacer(size);

		return 0;
	}

	// void wxSizerItem::SetUserData(wxObject * userData)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetUserData(wxObject * userData) function, expected prototype:\nvoid wxSizerItem::SetUserData(wxObject * userData)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxObject* userData=(Luna< wxObject >::check(L,2));

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetUserData(wxObject *)");
		}
		self->SetUserData(userData);

		return 0;
	}

	// void wxSizerItem::SetWindow(wxWindow * window)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetWindow(wxWindow * window) function, expected prototype:\nvoid wxSizerItem::SetWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetWindow(wxWindow *)");
		}
		self->SetWindow(window);

		return 0;
	}

	// void wxSizerItem::Show(bool show)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizerItem::Show(bool show) function, expected prototype:\nvoid wxSizerItem::Show(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxSizerItem* self=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizerItem::Show(bool)");
		}
		self->Show(show);

		return 0;
	}


	// Operator binds:

};

wxSizerItem* LunaTraits< wxSizerItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizerItem::_bind_ctor(L);
}

void LunaTraits< wxSizerItem >::_bind_dtor(wxSizerItem* obj) {
	delete obj;
}

const char LunaTraits< wxSizerItem >::className[] = "wxSizerItem";
const char LunaTraits< wxSizerItem >::fullName[] = "wxSizerItem";
const char LunaTraits< wxSizerItem >::moduleName[] = "wx";
const char* LunaTraits< wxSizerItem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSizerItem >::hash = 99626637;
const int LunaTraits< wxSizerItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizerItem >::methods[] = {
	{"AssignWindow", &luna_wrapper_wxSizerItem::_bind_AssignWindow},
	{"AssignSizer", &luna_wrapper_wxSizerItem::_bind_AssignSizer},
	{"AssignSpacer", &luna_wrapper_wxSizerItem::_bind_AssignSpacer},
	{"CalcMin", &luna_wrapper_wxSizerItem::_bind_CalcMin},
	{"DeleteWindows", &luna_wrapper_wxSizerItem::_bind_DeleteWindows},
	{"DetachSizer", &luna_wrapper_wxSizerItem::_bind_DetachSizer},
	{"GetBorder", &luna_wrapper_wxSizerItem::_bind_GetBorder},
	{"GetFlag", &luna_wrapper_wxSizerItem::_bind_GetFlag},
	{"GetId", &luna_wrapper_wxSizerItem::_bind_GetId},
	{"GetMinSize", &luna_wrapper_wxSizerItem::_bind_GetMinSize},
	{"SetMinSize", &luna_wrapper_wxSizerItem::_bind_SetMinSize},
	{"GetPosition", &luna_wrapper_wxSizerItem::_bind_GetPosition},
	{"GetProportion", &luna_wrapper_wxSizerItem::_bind_GetProportion},
	{"GetRatio", &luna_wrapper_wxSizerItem::_bind_GetRatio},
	{"GetRect", &luna_wrapper_wxSizerItem::_bind_GetRect},
	{"GetSize", &luna_wrapper_wxSizerItem::_bind_GetSize},
	{"GetSizer", &luna_wrapper_wxSizerItem::_bind_GetSizer},
	{"GetSpacer", &luna_wrapper_wxSizerItem::_bind_GetSpacer},
	{"GetUserData", &luna_wrapper_wxSizerItem::_bind_GetUserData},
	{"GetWindow", &luna_wrapper_wxSizerItem::_bind_GetWindow},
	{"IsShown", &luna_wrapper_wxSizerItem::_bind_IsShown},
	{"IsSizer", &luna_wrapper_wxSizerItem::_bind_IsSizer},
	{"IsSpacer", &luna_wrapper_wxSizerItem::_bind_IsSpacer},
	{"IsWindow", &luna_wrapper_wxSizerItem::_bind_IsWindow},
	{"SetBorder", &luna_wrapper_wxSizerItem::_bind_SetBorder},
	{"SetDimension", &luna_wrapper_wxSizerItem::_bind_SetDimension},
	{"SetFlag", &luna_wrapper_wxSizerItem::_bind_SetFlag},
	{"SetId", &luna_wrapper_wxSizerItem::_bind_SetId},
	{"SetInitSize", &luna_wrapper_wxSizerItem::_bind_SetInitSize},
	{"SetProportion", &luna_wrapper_wxSizerItem::_bind_SetProportion},
	{"SetRatio", &luna_wrapper_wxSizerItem::_bind_SetRatio},
	{"SetSizer", &luna_wrapper_wxSizerItem::_bind_SetSizer},
	{"SetSpacer", &luna_wrapper_wxSizerItem::_bind_SetSpacer},
	{"SetUserData", &luna_wrapper_wxSizerItem::_bind_SetUserData},
	{"SetWindow", &luna_wrapper_wxSizerItem::_bind_SetWindow},
	{"Show", &luna_wrapper_wxSizerItem::_bind_Show},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizerItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerItem >::enumValues[] = {
	{0,0}
};

