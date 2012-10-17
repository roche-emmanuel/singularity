#include <plug_common.h>

class luna_wrapper_wxMediaCtrl {
public:
	typedef Luna< wxMediaCtrl > luna_t;

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
		wxMediaCtrl* ptr= dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMediaCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Load_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Load_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadURI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadURIWithProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Seek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPlaybackRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPlayerControls(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Tell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMediaCtrl::wxMediaCtrl()
	static wxMediaCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl() function, expected prototype:\nwxMediaCtrl::wxMediaCtrl()\nClass arguments details:\n");
		}


		return new wxMediaCtrl();
	}

	// wxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl")
	static wxMediaCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\") function, expected prototype:\nwxMediaCtrl::wxMediaCtrl(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString fileName(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString szBackend(lua_tostring(L,7),lua_objlen(L,7));
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::wxMediaCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxMediaCtrl(parent, id, fileName, pos, size, style, szBackend, validator, name);
	}

	// Overload binder for wxMediaCtrl::wxMediaCtrl
	static wxMediaCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMediaCtrl, cannot match any of the overloads for function wxMediaCtrl:\n  wxMediaCtrl()\n  wxMediaCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\") function, expected prototype:\nbool wxMediaCtrl::Create(wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"mediaCtrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString fileName(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMediaCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMediaCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString szBackend(lua_tostring(L,8),lua_objlen(L,8));
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMediaCtrl::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, fileName, pos, size, style, szBackend, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxMediaCtrl::GetBestSize() const
	static int _bind_GetBestSize(lua_State *L) {
		if (!_lg_typecheck_GetBestSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxMediaCtrl::GetBestSize() const function, expected prototype:\nwxSize wxMediaCtrl::GetBestSize() const\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxMediaCtrl::GetBestSize() const");
		}
		wxSize stack_lret = self->GetBestSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxMediaState wxMediaCtrl::GetState()
	static int _bind_GetState(lua_State *L) {
		if (!_lg_typecheck_GetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaState wxMediaCtrl::GetState() function, expected prototype:\nwxMediaState wxMediaCtrl::GetState()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMediaState wxMediaCtrl::GetState()");
		}
		wxMediaState lret = self->GetState();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxMediaState'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// double wxMediaCtrl::GetVolume()
	static int _bind_GetVolume(lua_State *L) {
		if (!_lg_typecheck_GetVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxMediaCtrl::GetVolume() function, expected prototype:\ndouble wxMediaCtrl::GetVolume()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxMediaCtrl::GetVolume()");
		}
		double lret = self->GetVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxMediaCtrl::Length()
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMediaCtrl::Length() function, expected prototype:\nlong wxMediaCtrl::Length()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMediaCtrl::Length()");
		}
		long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxString & fileName)
	static int _bind_Load_overload_1(lua_State *L) {
		if (!_lg_typecheck_Load_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxString & fileName) function, expected prototype:\nbool wxMediaCtrl::Load(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxString &)");
		}
		bool lret = self->Load(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxURI & uri)
	static int _bind_Load_overload_2(lua_State *L) {
		if (!_lg_typecheck_Load_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxURI & uri) function, expected prototype:\nbool wxMediaCtrl::Load(const wxURI & uri)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxURI* uri_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,2));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxMediaCtrl::Load function");
		}
		const wxURI & uri=*uri_ptr;

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxURI &)");
		}
		bool lret = self->Load(uri);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy)
	static int _bind_Load_overload_3(lua_State *L) {
		if (!_lg_typecheck_Load_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy) function, expected prototype:\nbool wxMediaCtrl::Load(const wxURI & uri, const wxURI & proxy)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxURI* uri_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,2));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxMediaCtrl::Load function");
		}
		const wxURI & uri=*uri_ptr;
		const wxURI* proxy_ptr=dynamic_cast< wxURI* >(Luna< wxObject >::check(L,3));
		if( !proxy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proxy in wxMediaCtrl::Load function");
		}
		const wxURI & proxy=*proxy_ptr;

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Load(const wxURI &, const wxURI &)");
		}
		bool lret = self->Load(uri, proxy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMediaCtrl::Load
	static int _bind_Load(lua_State *L) {
		if (_lg_typecheck_Load_overload_1(L)) return _bind_Load_overload_1(L);
		if (_lg_typecheck_Load_overload_2(L)) return _bind_Load_overload_2(L);
		if (_lg_typecheck_Load_overload_3(L)) return _bind_Load_overload_3(L);

		luaL_error(L, "error in function Load, cannot match any of the overloads for function Load:\n  Load(const wxString &)\n  Load(const wxURI &)\n  Load(const wxURI &, const wxURI &)\n");
		return 0;
	}

	// bool wxMediaCtrl::LoadURI(const wxString & fileName)
	static int _bind_LoadURI(lua_State *L) {
		if (!_lg_typecheck_LoadURI(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::LoadURI(const wxString & fileName) function, expected prototype:\nbool wxMediaCtrl::LoadURI(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::LoadURI(const wxString &)");
		}
		bool lret = self->LoadURI(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy)
	static int _bind_LoadURIWithProxy(lua_State *L) {
		if (!_lg_typecheck_LoadURIWithProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy) function, expected prototype:\nbool wxMediaCtrl::LoadURIWithProxy(const wxString & fileName, const wxString & proxy)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));
		wxString proxy(lua_tostring(L,3),lua_objlen(L,3));

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::LoadURIWithProxy(const wxString &, const wxString &)");
		}
		bool lret = self->LoadURIWithProxy(fileName, proxy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Pause()
	static int _bind_Pause(lua_State *L) {
		if (!_lg_typecheck_Pause(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Pause() function, expected prototype:\nbool wxMediaCtrl::Pause()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Pause()");
		}
		bool lret = self->Pause();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Play()
	static int _bind_Play(lua_State *L) {
		if (!_lg_typecheck_Play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Play() function, expected prototype:\nbool wxMediaCtrl::Play()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Play()");
		}
		bool lret = self->Play();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxMediaCtrl::Seek(long where, wxSeekMode mode = wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMediaCtrl::Seek(long where, wxSeekMode mode = wxFromStart) function, expected prototype:\nlong wxMediaCtrl::Seek(long where, wxSeekMode mode = wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long where=(long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : wxFromStart;

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMediaCtrl::Seek(long, wxSeekMode)");
		}
		long lret = self->Seek(where, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMediaCtrl::SetPlaybackRate(double dRate)
	static int _bind_SetPlaybackRate(lua_State *L) {
		if (!_lg_typecheck_SetPlaybackRate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::SetPlaybackRate(double dRate) function, expected prototype:\nbool wxMediaCtrl::SetPlaybackRate(double dRate)\nClass arguments details:\n");
		}

		double dRate=(double)lua_tonumber(L,2);

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::SetPlaybackRate(double)");
		}
		bool lret = self->SetPlaybackRate(dRate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::SetVolume(double dVolume)
	static int _bind_SetVolume(lua_State *L) {
		if (!_lg_typecheck_SetVolume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::SetVolume(double dVolume) function, expected prototype:\nbool wxMediaCtrl::SetVolume(double dVolume)\nClass arguments details:\n");
		}

		double dVolume=(double)lua_tonumber(L,2);

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::SetVolume(double)");
		}
		bool lret = self->SetVolume(dVolume);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = wxMEDIACTRLPLAYERCONTROLS_DEFAULT)
	static int _bind_ShowPlayerControls(lua_State *L) {
		if (!_lg_typecheck_ShowPlayerControls(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = wxMEDIACTRLPLAYERCONTROLS_DEFAULT) function, expected prototype:\nbool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls flags = wxMEDIACTRLPLAYERCONTROLS_DEFAULT)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxMediaCtrlPlayerControls flags=luatop>1 ? (wxMediaCtrlPlayerControls)lua_tointeger(L,2) : wxMEDIACTRLPLAYERCONTROLS_DEFAULT;

		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::ShowPlayerControls(wxMediaCtrlPlayerControls)");
		}
		bool lret = self->ShowPlayerControls(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMediaCtrl::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMediaCtrl::Stop() function, expected prototype:\nbool wxMediaCtrl::Stop()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMediaCtrl::Stop()");
		}
		bool lret = self->Stop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxMediaCtrl::Tell()
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxMediaCtrl::Tell() function, expected prototype:\nlong wxMediaCtrl::Tell()\nClass arguments details:\n");
		}


		wxMediaCtrl* self=dynamic_cast< wxMediaCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxMediaCtrl::Tell()");
		}
		long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMediaCtrl* LunaTraits< wxMediaCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMediaCtrl::_bind_ctor(L);
}

void LunaTraits< wxMediaCtrl >::_bind_dtor(wxMediaCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxMediaCtrl >::className[] = "wxMediaCtrl";
const char LunaTraits< wxMediaCtrl >::fullName[] = "wxMediaCtrl";
const char LunaTraits< wxMediaCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxMediaCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxMediaCtrl >::hash = 76944987;
const int LunaTraits< wxMediaCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMediaCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxMediaCtrl::_bind_Create},
	{"GetBestSize", &luna_wrapper_wxMediaCtrl::_bind_GetBestSize},
	{"GetState", &luna_wrapper_wxMediaCtrl::_bind_GetState},
	{"GetVolume", &luna_wrapper_wxMediaCtrl::_bind_GetVolume},
	{"Length", &luna_wrapper_wxMediaCtrl::_bind_Length},
	{"Load", &luna_wrapper_wxMediaCtrl::_bind_Load},
	{"LoadURI", &luna_wrapper_wxMediaCtrl::_bind_LoadURI},
	{"LoadURIWithProxy", &luna_wrapper_wxMediaCtrl::_bind_LoadURIWithProxy},
	{"Pause", &luna_wrapper_wxMediaCtrl::_bind_Pause},
	{"Play", &luna_wrapper_wxMediaCtrl::_bind_Play},
	{"Seek", &luna_wrapper_wxMediaCtrl::_bind_Seek},
	{"SetPlaybackRate", &luna_wrapper_wxMediaCtrl::_bind_SetPlaybackRate},
	{"SetVolume", &luna_wrapper_wxMediaCtrl::_bind_SetVolume},
	{"ShowPlayerControls", &luna_wrapper_wxMediaCtrl::_bind_ShowPlayerControls},
	{"Stop", &luna_wrapper_wxMediaCtrl::_bind_Stop},
	{"Tell", &luna_wrapper_wxMediaCtrl::_bind_Tell},
	{"__eq", &luna_wrapper_wxMediaCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMediaCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxMediaCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMediaCtrl >::enumValues[] = {
	{0,0}
};


