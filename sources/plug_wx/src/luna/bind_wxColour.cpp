#include <plug_common.h>

class luna_wrapper_wxColour {
public:
	typedef Luna< wxColour > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxColour* ptr= dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColour >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Blue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAsString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRGBA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRGBA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPixel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Green(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Red(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeLightness_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeLightness_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeMono(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeDisabled(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeGrey_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeGrey_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AlphaBlend(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxColour::wxColour()
	static wxColour* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour() function, expected prototype:\nwxColour::wxColour()\nClass arguments details:\n");
		}


		return new wxColour();
	}

	// wxColour::wxColour(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE)
	static wxColour* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE) function, expected prototype:\nwxColour::wxColour(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char red = (unsigned char)(lua_tointeger(L,1));
		unsigned char green = (unsigned char)(lua_tointeger(L,2));
		unsigned char blue = (unsigned char)(lua_tointeger(L,3));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,4));

		return new wxColour(red, green, blue, alpha);
	}

	// wxColour::wxColour(const wxString & colourName)
	static wxColour* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(const wxString & colourName) function, expected prototype:\nwxColour::wxColour(const wxString & colourName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString colourName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxColour(colourName);
	}

	// wxColour::wxColour(unsigned long colRGB)
	static wxColour* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(unsigned long colRGB) function, expected prototype:\nwxColour::wxColour(unsigned long colRGB)\nClass arguments details:\n");
		}

		unsigned long colRGB=(unsigned long)lua_tointeger(L,1);

		return new wxColour(colRGB);
	}

	// wxColour::wxColour(const wxColour & colour)
	static wxColour* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour::wxColour(const wxColour & colour) function, expected prototype:\nwxColour::wxColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::wxColour function");
		}
		const wxColour & colour=*colour_ptr;

		return new wxColour(colour);
	}

	// Overload binder for wxColour::wxColour
	static wxColour* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function wxColour, cannot match any of the overloads for function wxColour:\n  wxColour()\n  wxColour(unsigned char, unsigned char, unsigned char, unsigned char)\n  wxColour(const wxString &)\n  wxColour(unsigned long)\n  wxColour(const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned char wxColour::Alpha() const
	static int _bind_Alpha(lua_State *L) {
		if (!_lg_typecheck_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxColour::Alpha() const function, expected prototype:\nunsigned char wxColour::Alpha() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxColour::Alpha() const");
		}
		unsigned char lret = self->Alpha();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxColour::Blue() const
	static int _bind_Blue(lua_State *L) {
		if (!_lg_typecheck_Blue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxColour::Blue() const function, expected prototype:\nunsigned char wxColour::Blue() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxColour::Blue() const");
		}
		unsigned char lret = self->Blue();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// wxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const
	static int _bind_GetAsString(lua_State *L) {
		if (!_lg_typecheck_GetAsString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const function, expected prototype:\nwxString wxColour::GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tointeger(L,2) : wxC2S_NAME | wxC2S_CSS_SYNTAX;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxColour::GetAsString(long) const");
		}
		wxString lret = self->GetAsString(flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxColour::SetRGB(unsigned int colRGB)
	static int _bind_SetRGB(lua_State *L) {
		if (!_lg_typecheck_SetRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::SetRGB(unsigned int colRGB) function, expected prototype:\nvoid wxColour::SetRGB(unsigned int colRGB)\nClass arguments details:\n");
		}

		unsigned int colRGB=(unsigned int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::SetRGB(unsigned int)");
		}
		self->SetRGB(colRGB);

		return 0;
	}

	// void wxColour::SetRGBA(unsigned int colRGBA)
	static int _bind_SetRGBA(lua_State *L) {
		if (!_lg_typecheck_SetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::SetRGBA(unsigned int colRGBA) function, expected prototype:\nvoid wxColour::SetRGBA(unsigned int colRGBA)\nClass arguments details:\n");
		}

		unsigned int colRGBA=(unsigned int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::SetRGBA(unsigned int)");
		}
		self->SetRGBA(colRGBA);

		return 0;
	}

	// unsigned int wxColour::GetRGB() const
	static int _bind_GetRGB(lua_State *L) {
		if (!_lg_typecheck_GetRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxColour::GetRGB() const function, expected prototype:\nunsigned int wxColour::GetRGB() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxColour::GetRGB() const");
		}
		unsigned int lret = self->GetRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxColour::GetRGBA() const
	static int _bind_GetRGBA(lua_State *L) {
		if (!_lg_typecheck_GetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxColour::GetRGBA() const function, expected prototype:\nunsigned int wxColour::GetRGBA() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxColour::GetRGBA() const");
		}
		unsigned int lret = self->GetRGBA();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ssize_t wxColour::GetPixel() const
	static int _bind_GetPixel(lua_State *L) {
		if (!_lg_typecheck_GetPixel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ssize_t wxColour::GetPixel() const function, expected prototype:\nssize_t wxColour::GetPixel() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ssize_t wxColour::GetPixel() const");
		}
		ssize_t lret = self->GetPixel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char wxColour::Green() const
	static int _bind_Green(lua_State *L) {
		if (!_lg_typecheck_Green(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxColour::Green() const function, expected prototype:\nunsigned char wxColour::Green() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxColour::Green() const");
		}
		unsigned char lret = self->Green();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// bool wxColour::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::IsOk() const function, expected prototype:\nbool wxColour::IsOk() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char wxColour::Red() const
	static int _bind_Red(lua_State *L) {
		if (!_lg_typecheck_Red(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxColour::Red() const function, expected prototype:\nunsigned char wxColour::Red() const\nClass arguments details:\n");
		}


		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxColour::Red() const");
		}
		unsigned char lret = self->Red();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void wxColour::Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE) function, expected prototype:\nvoid wxColour::Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha = wxALPHA_OPAQUE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,5));

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::Set(unsigned char, unsigned char, unsigned char, unsigned char)");
		}
		self->Set(red, green, blue, alpha);

		return 0;
	}

	// void wxColour::Set(unsigned long RGB)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColour::Set(unsigned long RGB) function, expected prototype:\nvoid wxColour::Set(unsigned long RGB)\nClass arguments details:\n");
		}

		unsigned long RGB=(unsigned long)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColour::Set(unsigned long)");
		}
		self->Set(RGB);

		return 0;
	}

	// bool wxColour::Set(const wxString & str)
	static int _bind_Set_overload_3(lua_State *L) {
		if (!_lg_typecheck_Set_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::Set(const wxString & str) function, expected prototype:\nbool wxColour::Set(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::Set(const wxString &)");
		}
		bool lret = self->Set(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxColour::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);
		if (_lg_typecheck_Set_overload_3(L)) return _bind_Set_overload_3(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(unsigned char, unsigned char, unsigned char, unsigned char)\n  Set(unsigned long)\n  Set(const wxString &)\n");
		return 0;
	}

	// wxColour wxColour::ChangeLightness(int ialpha) const
	static int _bind_ChangeLightness_overload_1(lua_State *L) {
		if (!_lg_typecheck_ChangeLightness_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColour::ChangeLightness(int ialpha) const function, expected prototype:\nwxColour wxColour::ChangeLightness(int ialpha) const\nClass arguments details:\n");
		}

		int ialpha=(int)lua_tointeger(L,2);

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColour::ChangeLightness(int) const");
		}
		wxColour stack_lret = self->ChangeLightness(ialpha);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// static void wxColour::ChangeLightness(unsigned char * r, unsigned char * g, unsigned char * b, int ialpha)
	static int _bind_ChangeLightness_overload_2(lua_State *L) {
		if (!_lg_typecheck_ChangeLightness_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxColour::ChangeLightness(unsigned char * r, unsigned char * g, unsigned char * b, int ialpha) function, expected prototype:\nstatic void wxColour::ChangeLightness(unsigned char * r, unsigned char * g, unsigned char * b, int ialpha)\nClass arguments details:\n");
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));
		int ialpha=(int)lua_tointeger(L,4);

		wxColour::ChangeLightness(&r, &g, &b, ialpha);

		return 0;
	}

	// Overload binder for wxColour::ChangeLightness
	static int _bind_ChangeLightness(lua_State *L) {
		if (_lg_typecheck_ChangeLightness_overload_1(L)) return _bind_ChangeLightness_overload_1(L);
		if (_lg_typecheck_ChangeLightness_overload_2(L)) return _bind_ChangeLightness_overload_2(L);

		luaL_error(L, "error in function ChangeLightness, cannot match any of the overloads for function ChangeLightness:\n  ChangeLightness(int)\n  ChangeLightness(unsigned char *, unsigned char *, unsigned char *, int)\n");
		return 0;
	}

	// static void wxColour::MakeMono(unsigned char * r, unsigned char * g, unsigned char * b, bool on)
	static int _bind_MakeMono(lua_State *L) {
		if (!_lg_typecheck_MakeMono(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxColour::MakeMono(unsigned char * r, unsigned char * g, unsigned char * b, bool on) function, expected prototype:\nstatic void wxColour::MakeMono(unsigned char * r, unsigned char * g, unsigned char * b, bool on)\nClass arguments details:\n");
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));
		bool on=(bool)(lua_toboolean(L,4)==1);

		wxColour::MakeMono(&r, &g, &b, on);

		return 0;
	}

	// static void wxColour::MakeDisabled(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char brightness = 255)
	static int _bind_MakeDisabled(lua_State *L) {
		if (!_lg_typecheck_MakeDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxColour::MakeDisabled(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char brightness = 255) function, expected prototype:\nstatic void wxColour::MakeDisabled(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char brightness = 255)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));
		unsigned char brightness = (unsigned char)(lua_tointeger(L,4));

		wxColour::MakeDisabled(&r, &g, &b, brightness);

		return 0;
	}

	// static void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b)
	static int _bind_MakeGrey_overload_1(lua_State *L) {
		if (!_lg_typecheck_MakeGrey_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b) function, expected prototype:\nstatic void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b)\nClass arguments details:\n");
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));

		wxColour::MakeGrey(&r, &g, &b);

		return 0;
	}

	// static void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b, double weight_r, double weight_g, double weight_b)
	static int _bind_MakeGrey_overload_2(lua_State *L) {
		if (!_lg_typecheck_MakeGrey_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b, double weight_r, double weight_g, double weight_b) function, expected prototype:\nstatic void wxColour::MakeGrey(unsigned char * r, unsigned char * g, unsigned char * b, double weight_r, double weight_g, double weight_b)\nClass arguments details:\n");
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));
		double weight_r=(double)lua_tonumber(L,4);
		double weight_g=(double)lua_tonumber(L,5);
		double weight_b=(double)lua_tonumber(L,6);

		wxColour::MakeGrey(&r, &g, &b, weight_r, weight_g, weight_b);

		return 0;
	}

	// Overload binder for wxColour::MakeGrey
	static int _bind_MakeGrey(lua_State *L) {
		if (_lg_typecheck_MakeGrey_overload_1(L)) return _bind_MakeGrey_overload_1(L);
		if (_lg_typecheck_MakeGrey_overload_2(L)) return _bind_MakeGrey_overload_2(L);

		luaL_error(L, "error in function MakeGrey, cannot match any of the overloads for function MakeGrey:\n  MakeGrey(unsigned char *, unsigned char *, unsigned char *)\n  MakeGrey(unsigned char *, unsigned char *, unsigned char *, double, double, double)\n");
		return 0;
	}

	// static unsigned char wxColour::AlphaBlend(unsigned char fg, unsigned char bg, double alpha)
	static int _bind_AlphaBlend(lua_State *L) {
		if (!_lg_typecheck_AlphaBlend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static unsigned char wxColour::AlphaBlend(unsigned char fg, unsigned char bg, double alpha) function, expected prototype:\nstatic unsigned char wxColour::AlphaBlend(unsigned char fg, unsigned char bg, double alpha)\nClass arguments details:\n");
		}

		unsigned char fg = (unsigned char)(lua_tointeger(L,1));
		unsigned char bg = (unsigned char)(lua_tointeger(L,2));
		double alpha=(double)lua_tonumber(L,3);

		unsigned char lret = wxColour::AlphaBlend(fg, bg, alpha);
		lua_pushnumber(L,(int)lret);

		return 1;
	}


	// Operator binds:
	// bool wxColour::operator!=(const wxColour & colour) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::operator!=(const wxColour & colour) const function, expected prototype:\nbool wxColour::operator!=(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::operator!= function");
		}
		const wxColour & colour=*colour_ptr;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::operator!=(const wxColour &) const");
		}
		bool lret = self->operator!=(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxColour::operator==(const wxColour & colour) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColour::operator==(const wxColour & colour) const function, expected prototype:\nbool wxColour::operator==(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColour::operator== function");
		}
		const wxColour & colour=*colour_ptr;

		wxColour* self=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColour::operator==(const wxColour &) const");
		}
		bool lret = self->operator==(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxColour* LunaTraits< wxColour >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColour::_bind_ctor(L);
}

void LunaTraits< wxColour >::_bind_dtor(wxColour* obj) {
	delete obj;
}

const char LunaTraits< wxColour >::className[] = "wxColour";
const char LunaTraits< wxColour >::fullName[] = "wxColour";
const char LunaTraits< wxColour >::moduleName[] = "wx";
const char* LunaTraits< wxColour >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxColour >::hash = 25339364;
const int LunaTraits< wxColour >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColour >::methods[] = {
	{"Alpha", &luna_wrapper_wxColour::_bind_Alpha},
	{"Blue", &luna_wrapper_wxColour::_bind_Blue},
	{"GetAsString", &luna_wrapper_wxColour::_bind_GetAsString},
	{"SetRGB", &luna_wrapper_wxColour::_bind_SetRGB},
	{"SetRGBA", &luna_wrapper_wxColour::_bind_SetRGBA},
	{"GetRGB", &luna_wrapper_wxColour::_bind_GetRGB},
	{"GetRGBA", &luna_wrapper_wxColour::_bind_GetRGBA},
	{"GetPixel", &luna_wrapper_wxColour::_bind_GetPixel},
	{"Green", &luna_wrapper_wxColour::_bind_Green},
	{"IsOk", &luna_wrapper_wxColour::_bind_IsOk},
	{"Red", &luna_wrapper_wxColour::_bind_Red},
	{"Set", &luna_wrapper_wxColour::_bind_Set},
	{"ChangeLightness", &luna_wrapper_wxColour::_bind_ChangeLightness},
	{"MakeMono", &luna_wrapper_wxColour::_bind_MakeMono},
	{"MakeDisabled", &luna_wrapper_wxColour::_bind_MakeDisabled},
	{"MakeGrey", &luna_wrapper_wxColour::_bind_MakeGrey},
	{"AlphaBlend", &luna_wrapper_wxColour::_bind_AlphaBlend},
	{"op_neq", &luna_wrapper_wxColour::_bind_op_neq},
	{"__eq", &luna_wrapper_wxColour::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxColour >::converters[] = {
	{"wxObject", &luna_wrapper_wxColour::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColour >::enumValues[] = {
	{0,0}
};


