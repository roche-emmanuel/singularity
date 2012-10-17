#include <plug_common.h>

class luna_wrapper_wxAnimation {
public:
	typedef Luna< wxAnimation > luna_t;

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
		wxAnimation* ptr= dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnimation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrameCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAnimation::wxAnimation(const wxAnimation & anim)
	static wxAnimation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(const wxAnimation & anim) function, expected prototype:\nwxAnimation::wxAnimation(const wxAnimation & anim)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxAnimation* anim_ptr=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if( !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimation::wxAnimation function");
		}
		const wxAnimation & anim=*anim_ptr;

		return new wxAnimation(anim);
	}

	// wxAnimation::wxAnimation(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY)
	static wxAnimation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY) function, expected prototype:\nwxAnimation::wxAnimation(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxAnimationType type=luatop>1 ? (wxAnimationType)lua_tointeger(L,2) : wxANIMATION_TYPE_ANY;

		return new wxAnimation(name, type);
	}

	// Overload binder for wxAnimation::wxAnimation
	static wxAnimation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAnimation, cannot match any of the overloads for function wxAnimation:\n  wxAnimation(const wxAnimation &)\n  wxAnimation(const wxString &, wxAnimationType)\n");
		return NULL;
	}


	// Function binds:
	// int wxAnimation::GetDelay(unsigned int i) const
	static int _bind_GetDelay(lua_State *L) {
		if (!_lg_typecheck_GetDelay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAnimation::GetDelay(unsigned int i) const function, expected prototype:\nint wxAnimation::GetDelay(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAnimation::GetDelay(unsigned int) const");
		}
		int lret = self->GetDelay(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImage wxAnimation::GetFrame(unsigned int i) const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxAnimation::GetFrame(unsigned int i) const function, expected prototype:\nwxImage wxAnimation::GetFrame(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxAnimation::GetFrame(unsigned int) const");
		}
		wxImage stack_lret = self->GetFrame(i);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxAnimation::GetFrameCount() const
	static int _bind_GetFrameCount(lua_State *L) {
		if (!_lg_typecheck_GetFrameCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxAnimation::GetFrameCount() const function, expected prototype:\nunsigned int wxAnimation::GetFrameCount() const\nClass arguments details:\n");
		}


		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxAnimation::GetFrameCount() const");
		}
		unsigned int lret = self->GetFrameCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxAnimation::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxAnimation::GetSize() const function, expected prototype:\nwxSize wxAnimation::GetSize() const\nClass arguments details:\n");
		}


		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxAnimation::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAnimation::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimation::IsOk() const function, expected prototype:\nbool wxAnimation::IsOk() const\nClass arguments details:\n");
		}


		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimation::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = wxANIMATION_TYPE_ANY)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxAnimation::Load function");
		}
		wxInputStream & stream=*stream_ptr;
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : wxANIMATION_TYPE_ANY;

		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimation::Load(wxInputStream &, wxAnimationType)");
		}
		bool lret = self->Load(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : wxANIMATION_TYPE_ANY;

		wxAnimation* self=dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAnimation::LoadFile(const wxString &, wxAnimationType)");
		}
		bool lret = self->LoadFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxAnimation* LunaTraits< wxAnimation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAnimation::_bind_ctor(L);
}

void LunaTraits< wxAnimation >::_bind_dtor(wxAnimation* obj) {
	delete obj;
}

const char LunaTraits< wxAnimation >::className[] = "wxAnimation";
const char LunaTraits< wxAnimation >::fullName[] = "wxAnimation";
const char LunaTraits< wxAnimation >::moduleName[] = "wx";
const char* LunaTraits< wxAnimation >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxAnimation >::hash = 52285947;
const int LunaTraits< wxAnimation >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAnimation >::methods[] = {
	{"GetDelay", &luna_wrapper_wxAnimation::_bind_GetDelay},
	{"GetFrame", &luna_wrapper_wxAnimation::_bind_GetFrame},
	{"GetFrameCount", &luna_wrapper_wxAnimation::_bind_GetFrameCount},
	{"GetSize", &luna_wrapper_wxAnimation::_bind_GetSize},
	{"IsOk", &luna_wrapper_wxAnimation::_bind_IsOk},
	{"Load", &luna_wrapper_wxAnimation::_bind_Load},
	{"LoadFile", &luna_wrapper_wxAnimation::_bind_LoadFile},
	{"__eq", &luna_wrapper_wxAnimation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxAnimation >::converters[] = {
	{"wxObject", &luna_wrapper_wxAnimation::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAnimation >::enumValues[] = {
	{0,0}
};


