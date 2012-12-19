#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlContainerCell.h>

class luna_wrapper_wxHtmlContainerCell {
public:
	typedef Luna< wxHtmlContainerCell > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//wxHtmlContainerCell* ptr= dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1));
		wxHtmlContainerCell* ptr= luna_caster< wxObject, wxHtmlContainerCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlContainerCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxHtmlContainerCell* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAlignHor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignVer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIndentUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertCell(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignHor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignVer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinHeight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidthFloat_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidthFloat_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		if( (!dynamic_cast< wxHtmlTag* >(Luna< wxHtmlTag >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AdjustPagebreak(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Draw(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawInvisible(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Find(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLink(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent)
	static wxHtmlContainerCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent) function, expected prototype:\nwxHtmlContainerCell::wxHtmlContainerCell(wxHtmlContainerCell * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlContainerCell* parent=(Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1));

		return new wxHtmlContainerCell(parent);
	}

	// wxHtmlContainerCell::wxHtmlContainerCell(lua_Table * data, wxHtmlContainerCell * parent)
	static wxHtmlContainerCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell::wxHtmlContainerCell(lua_Table * data, wxHtmlContainerCell * parent) function, expected prototype:\nwxHtmlContainerCell::wxHtmlContainerCell(lua_Table * data, wxHtmlContainerCell * parent)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxHtmlContainerCell* parent=(Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,2));

		return new wrapper_wxHtmlContainerCell(L,NULL, parent);
	}

	// Overload binder for wxHtmlContainerCell::wxHtmlContainerCell
	static wxHtmlContainerCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlContainerCell, cannot match any of the overloads for function wxHtmlContainerCell:\n  wxHtmlContainerCell(wxHtmlContainerCell *)\n  wxHtmlContainerCell(lua_Table *, wxHtmlContainerCell *)\n");
		return NULL;
	}


	// Function binds:
	// int wxHtmlContainerCell::GetAlignHor() const
	static int _bind_GetAlignHor(lua_State *L) {
		if (!_lg_typecheck_GetAlignHor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetAlignHor() const function, expected prototype:\nint wxHtmlContainerCell::GetAlignHor() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetAlignHor() const");
		}
		int lret = self->GetAlignHor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlContainerCell::GetAlignVer() const
	static int _bind_GetAlignVer(lua_State *L) {
		if (!_lg_typecheck_GetAlignVer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetAlignVer() const function, expected prototype:\nint wxHtmlContainerCell::GetAlignVer() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetAlignVer() const");
		}
		int lret = self->GetAlignVer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxHtmlContainerCell::GetBackgroundColour()
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlContainerCell::GetBackgroundColour() function, expected prototype:\nwxColour wxHtmlContainerCell::GetBackgroundColour()\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxHtmlContainerCell::GetBackgroundColour()");
		}
		wxColour stack_lret = self->GetBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxHtmlContainerCell::GetIndent(int ind) const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetIndent(int ind) const function, expected prototype:\nint wxHtmlContainerCell::GetIndent(int ind) const\nClass arguments details:\n");
		}

		int ind=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetIndent(int) const");
		}
		int lret = self->GetIndent(ind);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlContainerCell::GetIndentUnits(int ind) const
	static int _bind_GetIndentUnits(lua_State *L) {
		if (!_lg_typecheck_GetIndentUnits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHtmlContainerCell::GetIndentUnits(int ind) const function, expected prototype:\nint wxHtmlContainerCell::GetIndentUnits(int ind) const\nClass arguments details:\n");
		}

		int ind=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHtmlContainerCell::GetIndentUnits(int) const");
		}
		int lret = self->GetIndentUnits(ind);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlContainerCell::InsertCell(wxHtmlCell * cell)
	static int _bind_InsertCell(lua_State *L) {
		if (!_lg_typecheck_InsertCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::InsertCell(wxHtmlCell * cell) function, expected prototype:\nvoid wxHtmlContainerCell::InsertCell(wxHtmlCell * cell)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxHtmlCell* cell=(Luna< wxObject >::checkSubType< wxHtmlCell >(L,2));

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::InsertCell(wxHtmlCell *)");
		}
		self->InsertCell(cell);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag)
	static int _bind_SetAlign(lua_State *L) {
		if (!_lg_typecheck_SetAlign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlign(const wxHtmlTag & tag)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlContainerCell::SetAlign function");
		}
		const wxHtmlTag & tag=*tag_ptr;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlign(const wxHtmlTag &)");
		}
		self->SetAlign(tag);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlignHor(int al)
	static int _bind_SetAlignHor(lua_State *L) {
		if (!_lg_typecheck_SetAlignHor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlignHor(int al) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlignHor(int al)\nClass arguments details:\n");
		}

		int al=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlignHor(int)");
		}
		self->SetAlignHor(al);

		return 0;
	}

	// void wxHtmlContainerCell::SetAlignVer(int al)
	static int _bind_SetAlignVer(lua_State *L) {
		if (!_lg_typecheck_SetAlignVer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetAlignVer(int al) function, expected prototype:\nvoid wxHtmlContainerCell::SetAlignVer(int al)\nClass arguments details:\n");
		}

		int al=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetAlignVer(int)");
		}
		self->SetAlignVer(al);

		return 0;
	}

	// void wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr) function, expected prototype:\nvoid wxHtmlContainerCell::SetBackgroundColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* clr_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlContainerCell::SetBackgroundColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetBackgroundColour(const wxColour &)");
		}
		self->SetBackgroundColour(clr);

		return 0;
	}

	// void wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1) function, expected prototype:\nvoid wxHtmlContainerCell::SetBorder(const wxColour & clr1, const wxColour & clr2, int border = 1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* clr1_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !clr1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr1 in wxHtmlContainerCell::SetBorder function");
		}
		const wxColour & clr1=*clr1_ptr;
		const wxColour* clr2_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !clr2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr2 in wxHtmlContainerCell::SetBorder function");
		}
		const wxColour & clr2=*clr2_ptr;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : 1;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetBorder(const wxColour &, const wxColour &, int)");
		}
		self->SetBorder(clr1, clr2, border);

		return 0;
	}

	// void wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS) function, expected prototype:\nvoid wxHtmlContainerCell::SetIndent(int i, int what, int units = wxHTML_UNITS_PIXELS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int i=(int)lua_tointeger(L,2);
		int what=(int)lua_tointeger(L,3);
		int units=luatop>3 ? (int)lua_tointeger(L,4) : wxHTML_UNITS_PIXELS;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetIndent(int, int, int)");
		}
		self->SetIndent(i, what, units);

		return 0;
	}

	// void wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP)
	static int _bind_SetMinHeight(lua_State *L) {
		if (!_lg_typecheck_SetMinHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP) function, expected prototype:\nvoid wxHtmlContainerCell::SetMinHeight(int h, int align = wxHTML_ALIGN_TOP)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int h=(int)lua_tointeger(L,2);
		int align=luatop>2 ? (int)lua_tointeger(L,3) : wxHTML_ALIGN_TOP;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetMinHeight(int, int)");
		}
		self->SetMinHeight(h, align);

		return 0;
	}

	// void wxHtmlContainerCell::SetWidthFloat(int w, int units)
	static int _bind_SetWidthFloat_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetWidthFloat_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetWidthFloat(int w, int units) function, expected prototype:\nvoid wxHtmlContainerCell::SetWidthFloat(int w, int units)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int units=(int)lua_tointeger(L,3);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetWidthFloat(int, int)");
		}
		self->SetWidthFloat(w, units);

		return 0;
	}

	// void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0)
	static int _bind_SetWidthFloat_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetWidthFloat_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0) function, expected prototype:\nvoid wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag & tag, double pixel_scale = 1.0)\nClass arguments details:\narg 1 ID = 66986009\n");
		}

		int luatop = lua_gettop(L);

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlContainerCell::SetWidthFloat function");
		}
		const wxHtmlTag & tag=*tag_ptr;
		double pixel_scale=luatop>2 ? (double)lua_tonumber(L,3) : 1.0;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::SetWidthFloat(const wxHtmlTag &, double)");
		}
		self->SetWidthFloat(tag, pixel_scale);

		return 0;
	}

	// Overload binder for wxHtmlContainerCell::SetWidthFloat
	static int _bind_SetWidthFloat(lua_State *L) {
		if (_lg_typecheck_SetWidthFloat_overload_1(L)) return _bind_SetWidthFloat_overload_1(L);
		if (_lg_typecheck_SetWidthFloat_overload_2(L)) return _bind_SetWidthFloat_overload_2(L);

		luaL_error(L, "error in function SetWidthFloat, cannot match any of the overloads for function SetWidthFloat:\n  SetWidthFloat(int, int)\n  SetWidthFloat(const wxHtmlTag &, double)\n");
		return 0;
	}

	// wxClassInfo * wxHtmlContainerCell::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlContainerCell::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlContainerCell::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlContainerCell::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxHtmlContainerCell::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlContainerCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	static int _bind_base_AdjustPagebreak(lua_State *L) {
		if (!_lg_typecheck_base_AdjustPagebreak(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHtmlContainerCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const function, expected prototype:\nbool wxHtmlContainerCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const\nClass arguments details:\narg 2 ID = 47342076\n");
		}

		int pagebreak=(int)lua_tointeger(L,2);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlContainerCell::base_AdjustPagebreak function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHtmlContainerCell::base_AdjustPagebreak(int *, wxArrayInt &) const");
		}
		bool lret = self->wxHtmlContainerCell::AdjustPagebreak(&pagebreak, known_pagebreaks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlContainerCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	static int _bind_base_Draw(lua_State *L) {
		if (!_lg_typecheck_base_Draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlContainerCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 10696080\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlContainerCell::base_Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int view_y1=(int)lua_tointeger(L,5);
		int view_y2=(int)lua_tointeger(L,6);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,7));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlContainerCell::base_Draw function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::base_Draw(wxDC &, int, int, int, int, wxHtmlRenderingInfo &)");
		}
		self->wxHtmlContainerCell::Draw(dc, x, y, view_y1, view_y2, info);

		return 0;
	}

	// void wxHtmlContainerCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	static int _bind_base_DrawInvisible(lua_State *L) {
		if (!_lg_typecheck_base_DrawInvisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlContainerCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 10696080\n");
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlContainerCell::base_DrawInvisible function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,5));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlContainerCell::base_DrawInvisible function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::base_DrawInvisible(wxDC &, int, int, wxHtmlRenderingInfo &)");
		}
		self->wxHtmlContainerCell::DrawInvisible(dc, x, y, info);

		return 0;
	}

	// const wxHtmlCell * wxHtmlContainerCell::base_Find(int condition, const void * param) const
	static int _bind_base_Find(lua_State *L) {
		if (!_lg_typecheck_base_Find(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlContainerCell::base_Find(int condition, const void * param) const function, expected prototype:\nconst wxHtmlCell * wxHtmlContainerCell::base_Find(int condition, const void * param) const\nClass arguments details:\n");
		}

		int condition=(int)lua_tointeger(L,2);
		void* param=(Luna< void >::check(L,3));

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlContainerCell::base_Find(int, const void *) const");
		}
		const wxHtmlCell * lret = self->wxHtmlContainerCell::Find(condition, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlCell * wxHtmlContainerCell::base_GetFirstChild() const
	static int _bind_base_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlContainerCell::base_GetFirstChild() const function, expected prototype:\nwxHtmlCell * wxHtmlContainerCell::base_GetFirstChild() const\nClass arguments details:\n");
		}


		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlContainerCell::base_GetFirstChild() const");
		}
		wxHtmlCell * lret = self->wxHtmlContainerCell::GetFirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlLinkInfo * wxHtmlContainerCell::base_GetLink(int x = 0, int y = 0) const
	static int _bind_base_GetLink(lua_State *L) {
		if (!_lg_typecheck_base_GetLink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo * wxHtmlContainerCell::base_GetLink(int x = 0, int y = 0) const function, expected prototype:\nwxHtmlLinkInfo * wxHtmlContainerCell::base_GetLink(int x = 0, int y = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxHtmlLinkInfo * wxHtmlContainerCell::base_GetLink(int, int) const");
		}
		wxHtmlLinkInfo * lret = self->wxHtmlContainerCell::GetLink(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlContainerCell::base_Layout(int w)
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::base_Layout(int w) function, expected prototype:\nvoid wxHtmlContainerCell::base_Layout(int w)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::base_Layout(int)");
		}
		self->wxHtmlContainerCell::Layout(w);

		return 0;
	}

	// void wxHtmlContainerCell::base_SetPos(int x, int y)
	static int _bind_base_SetPos(lua_State *L) {
		if (!_lg_typecheck_base_SetPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHtmlContainerCell::base_SetPos(int x, int y) function, expected prototype:\nvoid wxHtmlContainerCell::base_SetPos(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlContainerCell* self=Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHtmlContainerCell::base_SetPos(int, int)");
		}
		self->wxHtmlContainerCell::SetPos(x, y);

		return 0;
	}


	// Operator binds:

};

wxHtmlContainerCell* LunaTraits< wxHtmlContainerCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlContainerCell::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxHtmlContainerCell >::_bind_dtor(wxHtmlContainerCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlContainerCell >::className[] = "wxHtmlContainerCell";
const char LunaTraits< wxHtmlContainerCell >::fullName[] = "wxHtmlContainerCell";
const char LunaTraits< wxHtmlContainerCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlContainerCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlContainerCell >::hash = 48055347;
const int LunaTraits< wxHtmlContainerCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlContainerCell >::methods[] = {
	{"GetAlignHor", &luna_wrapper_wxHtmlContainerCell::_bind_GetAlignHor},
	{"GetAlignVer", &luna_wrapper_wxHtmlContainerCell::_bind_GetAlignVer},
	{"GetBackgroundColour", &luna_wrapper_wxHtmlContainerCell::_bind_GetBackgroundColour},
	{"GetIndent", &luna_wrapper_wxHtmlContainerCell::_bind_GetIndent},
	{"GetIndentUnits", &luna_wrapper_wxHtmlContainerCell::_bind_GetIndentUnits},
	{"InsertCell", &luna_wrapper_wxHtmlContainerCell::_bind_InsertCell},
	{"SetAlign", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlign},
	{"SetAlignHor", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlignHor},
	{"SetAlignVer", &luna_wrapper_wxHtmlContainerCell::_bind_SetAlignVer},
	{"SetBackgroundColour", &luna_wrapper_wxHtmlContainerCell::_bind_SetBackgroundColour},
	{"SetBorder", &luna_wrapper_wxHtmlContainerCell::_bind_SetBorder},
	{"SetIndent", &luna_wrapper_wxHtmlContainerCell::_bind_SetIndent},
	{"SetMinHeight", &luna_wrapper_wxHtmlContainerCell::_bind_SetMinHeight},
	{"SetWidthFloat", &luna_wrapper_wxHtmlContainerCell::_bind_SetWidthFloat},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlContainerCell::_bind_base_GetClassInfo},
	{"base_AdjustPagebreak", &luna_wrapper_wxHtmlContainerCell::_bind_base_AdjustPagebreak},
	{"base_Draw", &luna_wrapper_wxHtmlContainerCell::_bind_base_Draw},
	{"base_DrawInvisible", &luna_wrapper_wxHtmlContainerCell::_bind_base_DrawInvisible},
	{"base_Find", &luna_wrapper_wxHtmlContainerCell::_bind_base_Find},
	{"base_GetFirstChild", &luna_wrapper_wxHtmlContainerCell::_bind_base_GetFirstChild},
	{"base_GetLink", &luna_wrapper_wxHtmlContainerCell::_bind_base_GetLink},
	{"base_Layout", &luna_wrapper_wxHtmlContainerCell::_bind_base_Layout},
	{"base_SetPos", &luna_wrapper_wxHtmlContainerCell::_bind_base_SetPos},
	{"__eq", &luna_wrapper_wxHtmlContainerCell::_bind___eq},
	{"getTable", &luna_wrapper_wxHtmlContainerCell::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlContainerCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlContainerCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlContainerCell >::enumValues[] = {
	{0,0}
};


