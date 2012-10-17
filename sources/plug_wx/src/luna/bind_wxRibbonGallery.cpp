#include <plug_common.h>

class luna_wrapper_wxRibbonGallery {
public:
	typedef Luna< wxRibbonGallery > luna_t;

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
		wxRibbonGallery* ptr= dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonGallery >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemClientObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemClientData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHoveredItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetActiveItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDownButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtensionButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHovered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonGallery::wxRibbonGallery()
	static wxRibbonGallery* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery() function, expected prototype:\nwxRibbonGallery::wxRibbonGallery()\nClass arguments details:\n");
		}


		return new wxRibbonGallery();
	}

	// wxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static wxRibbonGallery* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nwxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : 0;

		return new wxRibbonGallery(parent, id, pos, size, style);
	}

	// Overload binder for wxRibbonGallery::wxRibbonGallery
	static wxRibbonGallery* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonGallery, cannot match any of the overloads for function wxRibbonGallery:\n  wxRibbonGallery()\n  wxRibbonGallery(wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonGallery::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxRibbonGallery::Create(wxWindow * parent, int id = wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonGallery::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::Create(wxWindow *, int, const wxPoint &, const wxSize &, long)");
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::Clear() function, expected prototype:\nvoid wxRibbonGallery::Clear()\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::Clear()");
		}
		self->Clear();

		return 0;
	}

	// bool wxRibbonGallery::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::IsEmpty() const function, expected prototype:\nbool wxRibbonGallery::IsEmpty() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxRibbonGallery::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxRibbonGallery::GetCount() const function, expected prototype:\nunsigned int wxRibbonGallery::GetCount() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxRibbonGallery::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n)
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n)\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int)");
		}
		wxRibbonGalleryItem * lret = self->GetItem(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int)");
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);
		void* clientData=(Luna< void >::check(L,4));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int, void *)");
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 50457573\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);
		wxClientData* clientData=(Luna< wxClientData >::check(L,4));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int, wxClientData *)");
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRibbonGallery::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(const wxBitmap &, int)\n  Append(const wxBitmap &, int, void *)\n  Append(const wxBitmap &, int, wxClientData *)\n");
		return 0;
	}

	// void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data)
	static int _bind_SetItemClientObject(lua_State *L) {
		if (!_lg_typecheck_SetItemClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data) function, expected prototype:\nvoid wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data)\nClass arguments details:\narg 1 ID = 56057674\narg 2 ID = 50457573\n");
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem *, wxClientData *)");
		}
		self->SetItemClientObject(item, data);

		return 0;
	}

	// wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const
	static int _bind_GetItemClientObject(lua_State *L) {
		if (!_lg_typecheck_GetItemClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const function, expected prototype:\nwxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem *) const");
		}
		wxClientData * lret = self->GetItemClientObject(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data)
	static int _bind_SetItemClientData(lua_State *L) {
		if (!_lg_typecheck_SetItemClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data) function, expected prototype:\nvoid wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data)\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));
		void* data=(Luna< void >::check(L,3));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem *, void *)");
		}
		self->SetItemClientData(item, data);

		return 0;
	}

	// void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const
	static int _bind_GetItemClientData(lua_State *L) {
		if (!_lg_typecheck_GetItemClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const function, expected prototype:\nvoid * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem *) const");
		}
		void * lret = self->GetItemClientData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetSelection(wxRibbonGalleryItem *)");
		}
		self->SetSelection(item);

		return 0;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetSelection() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const");
		}
		wxRibbonGalleryItem * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const
	static int _bind_GetHoveredItem(lua_State *L) {
		if (!_lg_typecheck_GetHoveredItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const");
		}
		wxRibbonGalleryItem * lret = self->GetHoveredItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const
	static int _bind_GetActiveItem(lua_State *L) {
		if (!_lg_typecheck_GetActiveItem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const");
		}
		wxRibbonGalleryItem * lret = self->GetActiveItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const
	static int _bind_GetUpButtonState(lua_State *L) {
		if (!_lg_typecheck_GetUpButtonState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const");
		}
		wxRibbonGalleryButtonState lret = self->GetUpButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const
	static int _bind_GetDownButtonState(lua_State *L) {
		if (!_lg_typecheck_GetDownButtonState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const");
		}
		wxRibbonGalleryButtonState lret = self->GetDownButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const
	static int _bind_GetExtensionButtonState(lua_State *L) {
		if (!_lg_typecheck_GetExtensionButtonState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const");
		}
		wxRibbonGalleryButtonState lret = self->GetExtensionButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRibbonGallery::IsHovered() const
	static int _bind_IsHovered(lua_State *L) {
		if (!_lg_typecheck_IsHovered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::IsHovered() const function, expected prototype:\nbool wxRibbonGallery::IsHovered() const\nClass arguments details:\n");
		}


		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::IsHovered() const");
		}
		bool lret = self->IsHovered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::ScrollLines(int lines)
	static int _bind_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_ScrollLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::ScrollLines(int lines) function, expected prototype:\nbool wxRibbonGallery::ScrollLines(int lines)\nClass arguments details:\n");
		}

		int lines=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::ScrollLines(int)");
		}
		bool lret = self->ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::ScrollPixels(int pixels)
	static int _bind_ScrollPixels(lua_State *L) {
		if (!_lg_typecheck_ScrollPixels(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::ScrollPixels(int pixels) function, expected prototype:\nbool wxRibbonGallery::ScrollPixels(int pixels)\nClass arguments details:\n");
		}

		int pixels=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::ScrollPixels(int)");
		}
		bool lret = self->ScrollPixels(pixels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n");
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem *)");
		}
		self->EnsureVisible(item);

		return 0;
	}


	// Operator binds:

};

wxRibbonGallery* LunaTraits< wxRibbonGallery >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonGallery::_bind_ctor(L);
}

void LunaTraits< wxRibbonGallery >::_bind_dtor(wxRibbonGallery* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGallery >::className[] = "wxRibbonGallery";
const char LunaTraits< wxRibbonGallery >::fullName[] = "wxRibbonGallery";
const char LunaTraits< wxRibbonGallery >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGallery >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonGallery >::hash = 37012000;
const int LunaTraits< wxRibbonGallery >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonGallery >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonGallery::_bind_Create},
	{"Clear", &luna_wrapper_wxRibbonGallery::_bind_Clear},
	{"IsEmpty", &luna_wrapper_wxRibbonGallery::_bind_IsEmpty},
	{"GetCount", &luna_wrapper_wxRibbonGallery::_bind_GetCount},
	{"GetItem", &luna_wrapper_wxRibbonGallery::_bind_GetItem},
	{"Append", &luna_wrapper_wxRibbonGallery::_bind_Append},
	{"SetItemClientObject", &luna_wrapper_wxRibbonGallery::_bind_SetItemClientObject},
	{"GetItemClientObject", &luna_wrapper_wxRibbonGallery::_bind_GetItemClientObject},
	{"SetItemClientData", &luna_wrapper_wxRibbonGallery::_bind_SetItemClientData},
	{"GetItemClientData", &luna_wrapper_wxRibbonGallery::_bind_GetItemClientData},
	{"SetSelection", &luna_wrapper_wxRibbonGallery::_bind_SetSelection},
	{"GetSelection", &luna_wrapper_wxRibbonGallery::_bind_GetSelection},
	{"GetHoveredItem", &luna_wrapper_wxRibbonGallery::_bind_GetHoveredItem},
	{"GetActiveItem", &luna_wrapper_wxRibbonGallery::_bind_GetActiveItem},
	{"GetUpButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetUpButtonState},
	{"GetDownButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetDownButtonState},
	{"GetExtensionButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetExtensionButtonState},
	{"IsHovered", &luna_wrapper_wxRibbonGallery::_bind_IsHovered},
	{"ScrollLines", &luna_wrapper_wxRibbonGallery::_bind_ScrollLines},
	{"ScrollPixels", &luna_wrapper_wxRibbonGallery::_bind_ScrollPixels},
	{"EnsureVisible", &luna_wrapper_wxRibbonGallery::_bind_EnsureVisible},
	{"__eq", &luna_wrapper_wxRibbonGallery::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGallery >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonGallery::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGallery >::enumValues[] = {
	{0,0}
};


