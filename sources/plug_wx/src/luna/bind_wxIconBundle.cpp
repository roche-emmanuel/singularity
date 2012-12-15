#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIconBundle.h>

class luna_wrapper_wxIconBundle {
public:
	typedef Luna< wxIconBundle > luna_t;

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
		//wxIconBundle* ptr= dynamic_cast< wxIconBundle* >(Luna< wxObject >::check(L,1));
		wxIconBundle* ptr= luna_caster< wxObject, wxIconBundle >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIconBundle >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxIconBundle* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxIconBundle* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddIcon_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddIcon_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddIcon_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIconOfExactSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIconCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIconByIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxIconBundle::wxIconBundle()
	static wxIconBundle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle() function, expected prototype:\nwxIconBundle::wxIconBundle()\nClass arguments details:\n");
		}


		return new wxIconBundle();
	}

	// wxIconBundle::wxIconBundle(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static wxIconBundle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nwxIconBundle::wxIconBundle(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : ::wxBITMAP_TYPE_ANY;

		return new wxIconBundle(file, type);
	}

	// wxIconBundle::wxIconBundle(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static wxIconBundle* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nwxIconBundle::wxIconBundle(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxIconBundle::wxIconBundle function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : ::wxBITMAP_TYPE_ANY;

		return new wxIconBundle(stream, type);
	}

	// wxIconBundle::wxIconBundle(const wxIcon & icon)
	static wxIconBundle* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(const wxIcon & icon) function, expected prototype:\nwxIconBundle::wxIconBundle(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,1));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIconBundle::wxIconBundle function");
		}
		const wxIcon & icon=*icon_ptr;

		return new wxIconBundle(icon);
	}

	// wxIconBundle::wxIconBundle(const wxIconBundle & ic)
	static wxIconBundle* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(const wxIconBundle & ic) function, expected prototype:\nwxIconBundle::wxIconBundle(const wxIconBundle & ic)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* ic_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,1));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in wxIconBundle::wxIconBundle function");
		}
		const wxIconBundle & ic=*ic_ptr;

		return new wxIconBundle(ic);
	}

	// wxIconBundle::wxIconBundle(lua_Table * data)
	static wxIconBundle* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(lua_Table * data) function, expected prototype:\nwxIconBundle::wxIconBundle(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxIconBundle(L,NULL);
	}

	// wxIconBundle::wxIconBundle(lua_Table * data, const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static wxIconBundle* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(lua_Table * data, const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nwxIconBundle::wxIconBundle(lua_Table * data, const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : ::wxBITMAP_TYPE_ANY;

		return new wrapper_wxIconBundle(L,NULL, file, type);
	}

	// wxIconBundle::wxIconBundle(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static wxIconBundle* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nwxIconBundle::wxIconBundle(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxIconBundle::wxIconBundle function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : ::wxBITMAP_TYPE_ANY;

		return new wrapper_wxIconBundle(L,NULL, stream, type);
	}

	// wxIconBundle::wxIconBundle(lua_Table * data, const wxIcon & icon)
	static wxIconBundle* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(lua_Table * data, const wxIcon & icon) function, expected prototype:\nwxIconBundle::wxIconBundle(lua_Table * data, const wxIcon & icon)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIconBundle::wxIconBundle function");
		}
		const wxIcon & icon=*icon_ptr;

		return new wrapper_wxIconBundle(L,NULL, icon);
	}

	// wxIconBundle::wxIconBundle(lua_Table * data, const wxIconBundle & ic)
	static wxIconBundle* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIconBundle::wxIconBundle(lua_Table * data, const wxIconBundle & ic) function, expected prototype:\nwxIconBundle::wxIconBundle(lua_Table * data, const wxIconBundle & ic)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxIconBundle* ic_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in wxIconBundle::wxIconBundle function");
		}
		const wxIconBundle & ic=*ic_ptr;

		return new wrapper_wxIconBundle(L,NULL, ic);
	}

	// Overload binder for wxIconBundle::wxIconBundle
	static wxIconBundle* _bind_ctor(lua_State *L) {
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

		luaL_error(L, "error in function wxIconBundle, cannot match any of the overloads for function wxIconBundle:\n  wxIconBundle()\n  wxIconBundle(const wxString &, wxBitmapType)\n  wxIconBundle(wxInputStream &, wxBitmapType)\n  wxIconBundle(const wxIcon &)\n  wxIconBundle(const wxIconBundle &)\n  wxIconBundle(lua_Table *)\n  wxIconBundle(lua_Table *, const wxString &, wxBitmapType)\n  wxIconBundle(lua_Table *, wxInputStream &, wxBitmapType)\n  wxIconBundle(lua_Table *, const wxIcon &)\n  wxIconBundle(lua_Table *, const wxIconBundle &)\n");
		return NULL;
	}


	// Function binds:
	// void wxIconBundle::AddIcon(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static int _bind_AddIcon_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddIcon_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIconBundle::AddIcon(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nvoid wxIconBundle::AddIcon(const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : ::wxBITMAP_TYPE_ANY;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIconBundle::AddIcon(const wxString &, wxBitmapType)");
		}
		self->AddIcon(file, type);

		return 0;
	}

	// void wxIconBundle::AddIcon(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static int _bind_AddIcon_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddIcon_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIconBundle::AddIcon(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nvoid wxIconBundle::AddIcon(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxIconBundle::AddIcon function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : ::wxBITMAP_TYPE_ANY;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIconBundle::AddIcon(wxInputStream &, wxBitmapType)");
		}
		self->AddIcon(stream, type);

		return 0;
	}

	// void wxIconBundle::AddIcon(const wxIcon & icon)
	static int _bind_AddIcon_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddIcon_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIconBundle::AddIcon(const wxIcon & icon) function, expected prototype:\nvoid wxIconBundle::AddIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxIconBundle::AddIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIconBundle::AddIcon(const wxIcon &)");
		}
		self->AddIcon(icon);

		return 0;
	}

	// Overload binder for wxIconBundle::AddIcon
	static int _bind_AddIcon(lua_State *L) {
		if (_lg_typecheck_AddIcon_overload_1(L)) return _bind_AddIcon_overload_1(L);
		if (_lg_typecheck_AddIcon_overload_2(L)) return _bind_AddIcon_overload_2(L);
		if (_lg_typecheck_AddIcon_overload_3(L)) return _bind_AddIcon_overload_3(L);

		luaL_error(L, "error in function AddIcon, cannot match any of the overloads for function AddIcon:\n  AddIcon(const wxString &, wxBitmapType)\n  AddIcon(wxInputStream &, wxBitmapType)\n  AddIcon(const wxIcon &)\n");
		return 0;
	}

	// wxIcon wxIconBundle::GetIcon(const wxSize & size) const
	static int _bind_GetIcon_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetIcon_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxIconBundle::GetIcon(const wxSize & size) const function, expected prototype:\nwxIcon wxIconBundle::GetIcon(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxIconBundle::GetIcon function");
		}
		const wxSize & size=*size_ptr;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxIconBundle::GetIcon(const wxSize &) const");
		}
		wxIcon stack_lret = self->GetIcon(size);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// wxIcon wxIconBundle::GetIcon(int size = ::wxDefaultCoord) const
	static int _bind_GetIcon_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetIcon_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxIconBundle::GetIcon(int size = ::wxDefaultCoord) const function, expected prototype:\nwxIcon wxIconBundle::GetIcon(int size = ::wxDefaultCoord) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int size=luatop>1 ? (int)lua_tointeger(L,2) : ::wxDefaultCoord;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxIconBundle::GetIcon(int) const");
		}
		wxIcon stack_lret = self->GetIcon(size);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxIconBundle::GetIcon
	static int _bind_GetIcon(lua_State *L) {
		if (_lg_typecheck_GetIcon_overload_1(L)) return _bind_GetIcon_overload_1(L);
		if (_lg_typecheck_GetIcon_overload_2(L)) return _bind_GetIcon_overload_2(L);

		luaL_error(L, "error in function GetIcon, cannot match any of the overloads for function GetIcon:\n  GetIcon(const wxSize &)\n  GetIcon(int)\n");
		return 0;
	}

	// wxIcon wxIconBundle::GetIconOfExactSize(const wxSize & size) const
	static int _bind_GetIconOfExactSize(lua_State *L) {
		if (!_lg_typecheck_GetIconOfExactSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxIconBundle::GetIconOfExactSize(const wxSize & size) const function, expected prototype:\nwxIcon wxIconBundle::GetIconOfExactSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxIconBundle::GetIconOfExactSize function");
		}
		const wxSize & size=*size_ptr;

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxIconBundle::GetIconOfExactSize(const wxSize &) const");
		}
		wxIcon stack_lret = self->GetIconOfExactSize(size);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// size_t wxIconBundle::GetIconCount() const
	static int _bind_GetIconCount(lua_State *L) {
		if (!_lg_typecheck_GetIconCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxIconBundle::GetIconCount() const function, expected prototype:\nsize_t wxIconBundle::GetIconCount() const\nClass arguments details:\n");
		}


		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxIconBundle::GetIconCount() const");
		}
		size_t lret = self->GetIconCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxIcon wxIconBundle::GetIconByIndex(size_t n) const
	static int _bind_GetIconByIndex(lua_State *L) {
		if (!_lg_typecheck_GetIconByIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxIconBundle::GetIconByIndex(size_t n) const function, expected prototype:\nwxIcon wxIconBundle::GetIconByIndex(size_t n) const\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxIconBundle::GetIconByIndex(size_t) const");
		}
		wxIcon stack_lret = self->GetIconByIndex(n);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// bool wxIconBundle::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconBundle::IsEmpty() const function, expected prototype:\nbool wxIconBundle::IsEmpty() const\nClass arguments details:\n");
		}


		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconBundle::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxIconBundle::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIconBundle::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIconBundle::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxIconBundle* self=Luna< wxObject >::checkSubType< wxIconBundle >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIconBundle::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxIconBundle::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxIconBundle* LunaTraits< wxIconBundle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxIconBundle::_bind_ctor(L);
}

void LunaTraits< wxIconBundle >::_bind_dtor(wxIconBundle* obj) {
	delete obj;
}

const char LunaTraits< wxIconBundle >::className[] = "wxIconBundle";
const char LunaTraits< wxIconBundle >::fullName[] = "wxIconBundle";
const char LunaTraits< wxIconBundle >::moduleName[] = "wx";
const char* LunaTraits< wxIconBundle >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxIconBundle >::hash = 57127001;
const int LunaTraits< wxIconBundle >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIconBundle >::methods[] = {
	{"AddIcon", &luna_wrapper_wxIconBundle::_bind_AddIcon},
	{"GetIcon", &luna_wrapper_wxIconBundle::_bind_GetIcon},
	{"GetIconOfExactSize", &luna_wrapper_wxIconBundle::_bind_GetIconOfExactSize},
	{"GetIconCount", &luna_wrapper_wxIconBundle::_bind_GetIconCount},
	{"GetIconByIndex", &luna_wrapper_wxIconBundle::_bind_GetIconByIndex},
	{"IsEmpty", &luna_wrapper_wxIconBundle::_bind_IsEmpty},
	{"base_GetClassInfo", &luna_wrapper_wxIconBundle::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxIconBundle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxIconBundle >::converters[] = {
	{"wxObject", &luna_wrapper_wxIconBundle::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIconBundle >::enumValues[] = {
	{0,0}
};


