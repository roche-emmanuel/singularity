#include <plug_common.h>

class luna_wrapper_wxTextAttrDimension {
public:
	typedef Luna< wxTextAttrDimension > luna_t;

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

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrDimension");
		
		return luna_dynamicCast(L,converters,"wxTextAttrDimension",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EqPartial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25580455)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25580455) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValueMM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValueMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUnits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValid(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttrDimension::wxTextAttrDimension()
	static wxTextAttrDimension* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension::wxTextAttrDimension() function, expected prototype:\nwxTextAttrDimension::wxTextAttrDimension()\nClass arguments details:\n");
		}


		return new wxTextAttrDimension();
	}

	// wxTextAttrDimension::wxTextAttrDimension(int value, wxTextAttrUnits units = wxTEXT_ATTR_UNITS_TENTHS_MM)
	static wxTextAttrDimension* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension::wxTextAttrDimension(int value, wxTextAttrUnits units = wxTEXT_ATTR_UNITS_TENTHS_MM) function, expected prototype:\nwxTextAttrDimension::wxTextAttrDimension(int value, wxTextAttrUnits units = wxTEXT_ATTR_UNITS_TENTHS_MM)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,1);
		wxTextAttrUnits units=luatop>1 ? (wxTextAttrUnits)lua_tointeger(L,2) : wxTEXT_ATTR_UNITS_TENTHS_MM;

		return new wxTextAttrDimension(value, units);
	}

	// Overload binder for wxTextAttrDimension::wxTextAttrDimension
	static wxTextAttrDimension* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextAttrDimension, cannot match any of the overloads for function wxTextAttrDimension:\n  wxTextAttrDimension()\n  wxTextAttrDimension(int, wxTextAttrUnits)\n");
		return NULL;
	}


	// Function binds:
	// void wxTextAttrDimension::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::Reset() function, expected prototype:\nvoid wxTextAttrDimension::Reset()\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::Reset()");
		}
		self->Reset();

		return 0;
	}

	// bool wxTextAttrDimension::EqPartial(const wxTextAttrDimension & dim) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimension::EqPartial(const wxTextAttrDimension & dim) const function, expected prototype:\nbool wxTextAttrDimension::EqPartial(const wxTextAttrDimension & dim) const\nClass arguments details:\narg 1 ID = 25580455\n");
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimension::EqPartial function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimension::EqPartial(const wxTextAttrDimension &) const");
		}
		bool lret = self->EqPartial(dim);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrDimension::Apply(const wxTextAttrDimension & dim, const wxTextAttrDimension * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimension::Apply(const wxTextAttrDimension & dim, const wxTextAttrDimension * compareWith = NULL) function, expected prototype:\nbool wxTextAttrDimension::Apply(const wxTextAttrDimension & dim, const wxTextAttrDimension * compareWith = NULL)\nClass arguments details:\narg 1 ID = 25580455\narg 2 ID = 25580455\n");
		}

		int luatop = lua_gettop(L);

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimension::Apply function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;
		const wxTextAttrDimension* compareWith=luatop>2 ? (Luna< wxTextAttrDimension >::check(L,3)) : (const wxTextAttrDimension*)NULL;

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimension::Apply(const wxTextAttrDimension &, const wxTextAttrDimension *)");
		}
		bool lret = self->Apply(dim, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrDimension::CollectCommonAttributes(const wxTextAttrDimension & attr, wxTextAttrDimension & clashingAttr, wxTextAttrDimension & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::CollectCommonAttributes(const wxTextAttrDimension & attr, wxTextAttrDimension & clashingAttr, wxTextAttrDimension & absentAttr) function, expected prototype:\nvoid wxTextAttrDimension::CollectCommonAttributes(const wxTextAttrDimension & attr, wxTextAttrDimension & clashingAttr, wxTextAttrDimension & absentAttr)\nClass arguments details:\narg 1 ID = 25580455\narg 2 ID = 25580455\narg 3 ID = 25580455\n");
		}

		const wxTextAttrDimension* attr_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrDimension::CollectCommonAttributes function");
		}
		const wxTextAttrDimension & attr=*attr_ptr;
		wxTextAttrDimension* clashingAttr_ptr=(Luna< wxTextAttrDimension >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrDimension::CollectCommonAttributes function");
		}
		wxTextAttrDimension & clashingAttr=*clashingAttr_ptr;
		wxTextAttrDimension* absentAttr_ptr=(Luna< wxTextAttrDimension >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrDimension::CollectCommonAttributes function");
		}
		wxTextAttrDimension & absentAttr=*absentAttr_ptr;

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::CollectCommonAttributes(const wxTextAttrDimension &, wxTextAttrDimension &, wxTextAttrDimension &)");
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// int wxTextAttrDimension::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimension::GetValue() const function, expected prototype:\nint wxTextAttrDimension::GetValue() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttrDimension::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float wxTextAttrDimension::GetValueMM() const
	static int _bind_GetValueMM(lua_State *L) {
		if (!_lg_typecheck_GetValueMM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float wxTextAttrDimension::GetValueMM() const function, expected prototype:\nfloat wxTextAttrDimension::GetValueMM() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float wxTextAttrDimension::GetValueMM() const");
		}
		float lret = self->GetValueMM();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrDimension::SetValueMM(float value)
	static int _bind_SetValueMM(lua_State *L) {
		if (!_lg_typecheck_SetValueMM(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValueMM(float value) function, expected prototype:\nvoid wxTextAttrDimension::SetValueMM(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValueMM(float)");
		}
		self->SetValueMM(value);

		return 0;
	}

	// void wxTextAttrDimension::SetValue(int value)
	static int _bind_SetValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValue(int value) function, expected prototype:\nvoid wxTextAttrDimension::SetValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValue(int)");
		}
		self->SetValue(value);

		return 0;
	}

	// void wxTextAttrDimension::SetValue(int value, unsigned short flags)
	static int _bind_SetValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValue(int value, unsigned short flags) function, expected prototype:\nvoid wxTextAttrDimension::SetValue(int value, unsigned short flags)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);
		unsigned short flags=(unsigned short)lua_tointeger(L,3);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValue(int, unsigned short)");
		}
		self->SetValue(value, flags);

		return 0;
	}

	// void wxTextAttrDimension::SetValue(int value, wxTextAttrUnits units)
	static int _bind_SetValue_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValue(int value, wxTextAttrUnits units) function, expected prototype:\nvoid wxTextAttrDimension::SetValue(int value, wxTextAttrUnits units)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);
		wxTextAttrUnits units=(wxTextAttrUnits)lua_tointeger(L,3);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValue(int, wxTextAttrUnits)");
		}
		self->SetValue(value, units);

		return 0;
	}

	// void wxTextAttrDimension::SetValue(const wxTextAttrDimension & dim)
	static int _bind_SetValue_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValue(const wxTextAttrDimension & dim) function, expected prototype:\nvoid wxTextAttrDimension::SetValue(const wxTextAttrDimension & dim)\nClass arguments details:\narg 1 ID = 25580455\n");
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimension::SetValue function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValue(const wxTextAttrDimension &)");
		}
		self->SetValue(dim);

		return 0;
	}

	// Overload binder for wxTextAttrDimension::SetValue
	static int _bind_SetValue(lua_State *L) {
		if (_lg_typecheck_SetValue_overload_1(L)) return _bind_SetValue_overload_1(L);
		if (_lg_typecheck_SetValue_overload_2(L)) return _bind_SetValue_overload_2(L);
		if (_lg_typecheck_SetValue_overload_3(L)) return _bind_SetValue_overload_3(L);
		if (_lg_typecheck_SetValue_overload_4(L)) return _bind_SetValue_overload_4(L);

		luaL_error(L, "error in function SetValue, cannot match any of the overloads for function SetValue:\n  SetValue(int)\n  SetValue(int, unsigned short)\n  SetValue(int, wxTextAttrUnits)\n  SetValue(const wxTextAttrDimension &)\n");
		return 0;
	}

	// wxTextAttrUnits wxTextAttrDimension::GetUnits() const
	static int _bind_GetUnits(lua_State *L) {
		if (!_lg_typecheck_GetUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrUnits wxTextAttrDimension::GetUnits() const function, expected prototype:\nwxTextAttrUnits wxTextAttrDimension::GetUnits() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrUnits wxTextAttrDimension::GetUnits() const");
		}
		wxTextAttrUnits lret = self->GetUnits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrDimension::SetUnits(wxTextAttrUnits units)
	static int _bind_SetUnits(lua_State *L) {
		if (!_lg_typecheck_SetUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetUnits(wxTextAttrUnits units) function, expected prototype:\nvoid wxTextAttrDimension::SetUnits(wxTextAttrUnits units)\nClass arguments details:\n");
		}

		wxTextAttrUnits units=(wxTextAttrUnits)lua_tointeger(L,2);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetUnits(wxTextAttrUnits)");
		}
		self->SetUnits(units);

		return 0;
	}

	// wxTextBoxAttrPosition wxTextAttrDimension::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttrPosition wxTextAttrDimension::GetPosition() const function, expected prototype:\nwxTextBoxAttrPosition wxTextAttrDimension::GetPosition() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextBoxAttrPosition wxTextAttrDimension::GetPosition() const");
		}
		wxTextBoxAttrPosition lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrDimension::SetPosition(wxTextBoxAttrPosition pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetPosition(wxTextBoxAttrPosition pos) function, expected prototype:\nvoid wxTextAttrDimension::SetPosition(wxTextBoxAttrPosition pos)\nClass arguments details:\n");
		}

		wxTextBoxAttrPosition pos=(wxTextBoxAttrPosition)lua_tointeger(L,2);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetPosition(wxTextBoxAttrPosition)");
		}
		self->SetPosition(pos);

		return 0;
	}

	// bool wxTextAttrDimension::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimension::IsValid() const function, expected prototype:\nbool wxTextAttrDimension::IsValid() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimension::IsValid() const");
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrDimension::SetValid(bool b)
	static int _bind_SetValid(lua_State *L) {
		if (!_lg_typecheck_SetValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetValid(bool b) function, expected prototype:\nvoid wxTextAttrDimension::SetValid(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetValid(bool)");
		}
		self->SetValid(b);

		return 0;
	}

	// unsigned short wxTextAttrDimension::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxTextAttrDimension::GetFlags() const function, expected prototype:\nunsigned short wxTextAttrDimension::GetFlags() const\nClass arguments details:\n");
		}


		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxTextAttrDimension::GetFlags() const");
		}
		unsigned short lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrDimension::SetFlags(unsigned short flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimension::SetFlags(unsigned short flags) function, expected prototype:\nvoid wxTextAttrDimension::SetFlags(unsigned short flags)\nClass arguments details:\n");
		}

		unsigned short flags=(unsigned short)lua_tointeger(L,2);

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttrDimension::SetFlags(unsigned short)");
		}
		self->SetFlags(flags);

		return 0;
	}


	// Operator binds:
	// bool wxTextAttrDimension::operator==(const wxTextAttrDimension & dim) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimension::operator==(const wxTextAttrDimension & dim) const function, expected prototype:\nbool wxTextAttrDimension::operator==(const wxTextAttrDimension & dim) const\nClass arguments details:\narg 1 ID = 25580455\n");
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimension::operator== function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrDimension* self=(Luna< wxTextAttrDimension >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimension::operator==(const wxTextAttrDimension &) const");
		}
		bool lret = self->operator==(dim);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextAttrDimension* LunaTraits< wxTextAttrDimension >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrDimension::_bind_ctor(L);
}

void LunaTraits< wxTextAttrDimension >::_bind_dtor(wxTextAttrDimension* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrDimension >::className[] = "wxTextAttrDimension";
const char LunaTraits< wxTextAttrDimension >::fullName[] = "wxTextAttrDimension";
const char LunaTraits< wxTextAttrDimension >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrDimension >::parents[] = {0};
const int LunaTraits< wxTextAttrDimension >::hash = 25580455;
const int LunaTraits< wxTextAttrDimension >::uniqueIDs[] = {25580455,0};

luna_RegType LunaTraits< wxTextAttrDimension >::methods[] = {
	{"Reset", &luna_wrapper_wxTextAttrDimension::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextAttrDimension::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextAttrDimension::_bind_Apply},
	{"CollectCommonAttributes", &luna_wrapper_wxTextAttrDimension::_bind_CollectCommonAttributes},
	{"GetValue", &luna_wrapper_wxTextAttrDimension::_bind_GetValue},
	{"GetValueMM", &luna_wrapper_wxTextAttrDimension::_bind_GetValueMM},
	{"SetValueMM", &luna_wrapper_wxTextAttrDimension::_bind_SetValueMM},
	{"SetValue", &luna_wrapper_wxTextAttrDimension::_bind_SetValue},
	{"GetUnits", &luna_wrapper_wxTextAttrDimension::_bind_GetUnits},
	{"SetUnits", &luna_wrapper_wxTextAttrDimension::_bind_SetUnits},
	{"GetPosition", &luna_wrapper_wxTextAttrDimension::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxTextAttrDimension::_bind_SetPosition},
	{"IsValid", &luna_wrapper_wxTextAttrDimension::_bind_IsValid},
	{"SetValid", &luna_wrapper_wxTextAttrDimension::_bind_SetValid},
	{"GetFlags", &luna_wrapper_wxTextAttrDimension::_bind_GetFlags},
	{"SetFlags", &luna_wrapper_wxTextAttrDimension::_bind_SetFlags},
	{"__eq", &luna_wrapper_wxTextAttrDimension::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextAttrDimension::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrDimension >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrDimension >::enumValues[] = {
	{0,0}
};


