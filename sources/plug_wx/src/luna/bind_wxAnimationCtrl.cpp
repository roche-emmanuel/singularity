#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAnimationCtrl.h>

class luna_wrapper_wxAnimationCtrl {
public:
	typedef Luna< wxAnimationCtrl > luna_t;

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
		wxAnimationCtrl* ptr= dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnimationCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAnimation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInactiveBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPlaying(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAnimation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInactiveBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAnimationCtrl::wxAnimationCtrl(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)
	static wxAnimationCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnimationCtrl::wxAnimationCtrl(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr) function, expected prototype:\nwxAnimationCtrl::wxAnimationCtrl(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxAnimation* anim_ptr=luatop>2 ? dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxAnimation & anim=luatop>2 ? *anim_ptr : wxNullAnimation;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxAC_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxAnimationCtrl(parent, id, anim, pos, size, style, name);
	}

	// wxAnimationCtrl::wxAnimationCtrl(lua_Table * data, wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)
	static wxAnimationCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnimationCtrl::wxAnimationCtrl(lua_Table * data, wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr) function, expected prototype:\nwxAnimationCtrl::wxAnimationCtrl(lua_Table * data, wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxAnimation* anim_ptr=luatop>3 ? dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxAnimation & anim=luatop>3 ? *anim_ptr : wxNullAnimation;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnimationCtrl::wxAnimationCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxAC_DEFAULT_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxAnimationCtrl(L,NULL, parent, id, anim, pos, size, style, name);
	}

	// Overload binder for wxAnimationCtrl::wxAnimationCtrl
	static wxAnimationCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAnimationCtrl, cannot match any of the overloads for function wxAnimationCtrl:\n  wxAnimationCtrl(wxWindow *, int, const wxAnimation &, const wxPoint &, const wxSize &, long, const wxString &)\n  wxAnimationCtrl(lua_Table *, wxWindow *, int, const wxAnimation &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxAnimationCtrl::Create(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimationCtrl::Create(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr) function, expected prototype:\nbool wxAnimationCtrl::Create(wxWindow * parent, int id, const wxAnimation & anim = wxNullAnimation, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxAC_DEFAULT_STYLE, const wxString & name = wxAnimationCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxAnimation* anim_ptr=luatop>3 ? dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimationCtrl::Create function");
		}
		const wxAnimation & anim=luatop>3 ? *anim_ptr : wxNullAnimation;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAnimationCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnimationCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxAC_DEFAULT_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimationCtrl::Create(wxWindow *, int, const wxAnimation &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, anim, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAnimation wxAnimationCtrl::GetAnimation() const
	static int _bind_GetAnimation(lua_State *L) {
		if (!_lg_typecheck_GetAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnimation wxAnimationCtrl::GetAnimation() const function, expected prototype:\nwxAnimation wxAnimationCtrl::GetAnimation() const\nClass arguments details:\n");
		}


		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAnimation wxAnimationCtrl::GetAnimation() const");
		}
		wxAnimation stack_lret = self->GetAnimation();
		wxAnimation* lret = new wxAnimation(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAnimation >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnimationCtrl::GetInactiveBitmap() const
	static int _bind_GetInactiveBitmap(lua_State *L) {
		if (!_lg_typecheck_GetInactiveBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnimationCtrl::GetInactiveBitmap() const function, expected prototype:\nwxBitmap wxAnimationCtrl::GetInactiveBitmap() const\nClass arguments details:\n");
		}


		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxAnimationCtrl::GetInactiveBitmap() const");
		}
		wxBitmap stack_lret = self->GetInactiveBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// bool wxAnimationCtrl::IsPlaying() const
	static int _bind_IsPlaying(lua_State *L) {
		if (!_lg_typecheck_IsPlaying(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimationCtrl::IsPlaying() const function, expected prototype:\nbool wxAnimationCtrl::IsPlaying() const\nClass arguments details:\n");
		}


		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimationCtrl::IsPlaying() const");
		}
		bool lret = self->IsPlaying();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimationCtrl::LoadFile(const wxString & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimationCtrl::LoadFile(const wxString & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimationCtrl::LoadFile(const wxString & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,2),lua_objlen(L,2));
		wxAnimationType animType=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : ::wxANIMATION_TYPE_ANY;

		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimationCtrl::LoadFile(const wxString &, wxAnimationType)");
		}
		bool lret = self->LoadFile(file, animType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimationCtrl::Load(wxInputStream & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimationCtrl::Load(wxInputStream & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimationCtrl::Load(wxInputStream & file, wxAnimationType animType = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* file_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxAnimationCtrl::Load function");
		}
		wxInputStream & file=*file_ptr;
		wxAnimationType animType=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : ::wxANIMATION_TYPE_ANY;

		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimationCtrl::Load(wxInputStream &, wxAnimationType)");
		}
		bool lret = self->Load(file, animType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimationCtrl::Play()
	static int _bind_Play(lua_State *L) {
		if (!_lg_typecheck_Play(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimationCtrl::Play() function, expected prototype:\nbool wxAnimationCtrl::Play()\nClass arguments details:\n");
		}


		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimationCtrl::Play()");
		}
		bool lret = self->Play();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnimationCtrl::SetAnimation(const wxAnimation & anim)
	static int _bind_SetAnimation(lua_State *L) {
		if (!_lg_typecheck_SetAnimation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnimationCtrl::SetAnimation(const wxAnimation & anim) function, expected prototype:\nvoid wxAnimationCtrl::SetAnimation(const wxAnimation & anim)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAnimation* anim_ptr=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,2));
		if( !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimationCtrl::SetAnimation function");
		}
		const wxAnimation & anim=*anim_ptr;

		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnimationCtrl::SetAnimation(const wxAnimation &)");
		}
		self->SetAnimation(anim);

		return 0;
	}

	// void wxAnimationCtrl::SetInactiveBitmap(const wxBitmap & bmp)
	static int _bind_SetInactiveBitmap(lua_State *L) {
		if (!_lg_typecheck_SetInactiveBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnimationCtrl::SetInactiveBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxAnimationCtrl::SetInactiveBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxAnimationCtrl::SetInactiveBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnimationCtrl::SetInactiveBitmap(const wxBitmap &)");
		}
		self->SetInactiveBitmap(bmp);

		return 0;
	}

	// void wxAnimationCtrl::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAnimationCtrl::Stop() function, expected prototype:\nvoid wxAnimationCtrl::Stop()\nClass arguments details:\n");
		}


		wxAnimationCtrl* self=dynamic_cast< wxAnimationCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAnimationCtrl::Stop()");
		}
		self->Stop();

		return 0;
	}


	// Operator binds:

};

wxAnimationCtrl* LunaTraits< wxAnimationCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAnimationCtrl::_bind_ctor(L);
}

void LunaTraits< wxAnimationCtrl >::_bind_dtor(wxAnimationCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxAnimationCtrl >::className[] = "wxAnimationCtrl";
const char LunaTraits< wxAnimationCtrl >::fullName[] = "wxAnimationCtrl";
const char LunaTraits< wxAnimationCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxAnimationCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxAnimationCtrl >::hash = 66369371;
const int LunaTraits< wxAnimationCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxAnimationCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxAnimationCtrl::_bind_Create},
	{"GetAnimation", &luna_wrapper_wxAnimationCtrl::_bind_GetAnimation},
	{"GetInactiveBitmap", &luna_wrapper_wxAnimationCtrl::_bind_GetInactiveBitmap},
	{"IsPlaying", &luna_wrapper_wxAnimationCtrl::_bind_IsPlaying},
	{"LoadFile", &luna_wrapper_wxAnimationCtrl::_bind_LoadFile},
	{"Load", &luna_wrapper_wxAnimationCtrl::_bind_Load},
	{"Play", &luna_wrapper_wxAnimationCtrl::_bind_Play},
	{"SetAnimation", &luna_wrapper_wxAnimationCtrl::_bind_SetAnimation},
	{"SetInactiveBitmap", &luna_wrapper_wxAnimationCtrl::_bind_SetInactiveBitmap},
	{"Stop", &luna_wrapper_wxAnimationCtrl::_bind_Stop},
	{"__eq", &luna_wrapper_wxAnimationCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAnimationCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxAnimationCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAnimationCtrl >::enumValues[] = {
	{0,0}
};


