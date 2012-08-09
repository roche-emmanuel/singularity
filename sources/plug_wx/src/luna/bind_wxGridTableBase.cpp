#include <plug_common.h>

class luna_wrapper_wxGridTableBase {
public:
	typedef Luna< wxGridTableBase > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGridTableBase* ptr= dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridTableBase >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetNumberRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmptyCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTypeName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanGetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanSetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19919380)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttrProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96494917)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttrProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanHaveAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxGridTableBase::GetNumberRows()
	static int _bind_GetNumberRows(lua_State *L) {
		if (!_lg_typecheck_GetNumberRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetNumberRows() function, expected prototype:\nint wxGridTableBase::GetNumberRows()\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetNumberRows()");
		}
		int lret = self->GetNumberRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetNumberCols()
	static int _bind_GetNumberCols(lua_State *L) {
		if (!_lg_typecheck_GetNumberCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetNumberCols() function, expected prototype:\nint wxGridTableBase::GetNumberCols()\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetNumberCols()");
		}
		int lret = self->GetNumberCols();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetRowsCount() const
	static int _bind_GetRowsCount(lua_State *L) {
		if (!_lg_typecheck_GetRowsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetRowsCount() const function, expected prototype:\nint wxGridTableBase::GetRowsCount() const\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetRowsCount() const");
		}
		int lret = self->GetRowsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetColsCount() const
	static int _bind_GetColsCount(lua_State *L) {
		if (!_lg_typecheck_GetColsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetColsCount() const function, expected prototype:\nint wxGridTableBase::GetColsCount() const\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetColsCount() const");
		}
		int lret = self->GetColsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridTableBase::IsEmptyCell(int row, int col)
	static int _bind_IsEmptyCell(lua_State *L) {
		if (!_lg_typecheck_IsEmptyCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::IsEmptyCell(int row, int col) function, expected prototype:\nbool wxGridTableBase::IsEmptyCell(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::IsEmptyCell(int, int)");
		}
		bool lret = self->IsEmptyCell(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords)
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords) function, expected prototype:\nbool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n");
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGridTableBase::IsEmpty function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::IsEmpty(const wxGridCellCoords &)");
		}
		bool lret = self->IsEmpty(coords);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::GetValue(int row, int col)
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetValue(int row, int col) function, expected prototype:\nwxString wxGridTableBase::GetValue(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetValue(int, int)");
		}
		wxString lret = self->GetValue(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGridTableBase::SetValue(int row, int col, const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValue(int row, int col, const wxString & value) function, expected prototype:\nvoid wxGridTableBase::SetValue(int row, int col, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValue(int, int, const wxString &)");
		}
		self->SetValue(row, col, value);

		return 0;
	}

	// wxString wxGridTableBase::GetTypeName(int row, int col)
	static int _bind_GetTypeName(lua_State *L) {
		if (!_lg_typecheck_GetTypeName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetTypeName(int row, int col) function, expected prototype:\nwxString wxGridTableBase::GetTypeName(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetTypeName(int, int)");
		}
		wxString lret = self->GetTypeName(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName)
	static int _bind_CanGetValueAs(lua_State *L) {
		if (!_lg_typecheck_CanGetValueAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanGetValueAs(int, int, const wxString &)");
		}
		bool lret = self->CanGetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName)
	static int _bind_CanSetValueAs(lua_State *L) {
		if (!_lg_typecheck_CanSetValueAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanSetValueAs(int, int, const wxString &)");
		}
		bool lret = self->CanSetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxGridTableBase::GetValueAsLong(int row, int col)
	static int _bind_GetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_GetValueAsLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxGridTableBase::GetValueAsLong(int row, int col) function, expected prototype:\nlong wxGridTableBase::GetValueAsLong(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxGridTableBase::GetValueAsLong(int, int)");
		}
		long lret = self->GetValueAsLong(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxGridTableBase::GetValueAsDouble(int row, int col)
	static int _bind_GetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_GetValueAsDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxGridTableBase::GetValueAsDouble(int row, int col) function, expected prototype:\ndouble wxGridTableBase::GetValueAsDouble(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxGridTableBase::GetValueAsDouble(int, int)");
		}
		double lret = self->GetValueAsDouble(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridTableBase::GetValueAsBool(int row, int col)
	static int _bind_GetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_GetValueAsBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::GetValueAsBool(int row, int col) function, expected prototype:\nbool wxGridTableBase::GetValueAsBool(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::GetValueAsBool(int, int)");
		}
		bool lret = self->GetValueAsBool(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName)
	static int _bind_GetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_GetValueAsCustom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName) function, expected prototype:\nvoid * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxGridTableBase::GetValueAsCustom(int, int, const wxString &)");
		}
		void * lret = self->GetValueAsCustom(row, col, typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::SetValueAsLong(int row, int col, long value)
	static int _bind_SetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_SetValueAsLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsLong(int row, int col, long value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsLong(int row, int col, long value)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		long value=(long)lua_tointeger(L,4);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsLong(int, int, long)");
		}
		self->SetValueAsLong(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsDouble(int row, int col, double value)
	static int _bind_SetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_SetValueAsDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsDouble(int row, int col, double value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsDouble(int row, int col, double value)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		double value=(double)lua_tonumber(L,4);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsDouble(int, int, double)");
		}
		self->SetValueAsDouble(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsBool(int row, int col, bool value)
	static int _bind_SetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_SetValueAsBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsBool(int row, int col, bool value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsBool(int row, int col, bool value)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		bool value=(bool)(lua_toboolean(L,4)==1);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsBool(int, int, bool)");
		}
		self->SetValueAsBool(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value)
	static int _bind_SetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_SetValueAsCustom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));
		void* value=(Luna< void >::check(L,5));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsCustom(int, int, const wxString &, void *)");
		}
		self->SetValueAsCustom(row, col, typeName, value);

		return 0;
	}

	// void wxGridTableBase::SetView(wxGrid * grid)
	static int _bind_SetView(lua_State *L) {
		if (!_lg_typecheck_SetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetView(wxGrid * grid) function, expected prototype:\nvoid wxGridTableBase::SetView(wxGrid * grid)\nClass arguments details:\narg 1 ID = 19919380\n");
		}

		wxGrid* grid=(Luna< wxGrid >::check(L,2));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetView(wxGrid *)");
		}
		self->SetView(grid);

		return 0;
	}

	// wxGrid * wxGridTableBase::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGrid * wxGridTableBase::GetView() const function, expected prototype:\nwxGrid * wxGridTableBase::GetView() const\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGrid * wxGridTableBase::GetView() const");
		}
		wxGrid * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGrid >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::Clear() function, expected prototype:\nvoid wxGridTableBase::Clear()\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::Clear()");
		}
		self->Clear();

		return 0;
	}

	// bool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_InsertRows(lua_State *L) {
		if (!_lg_typecheck_InsertRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::InsertRows(size_t, size_t)");
		}
		bool lret = self->InsertRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::AppendRows(size_t numRows = 1)
	static int _bind_AppendRows(lua_State *L) {
		if (!_lg_typecheck_AppendRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::AppendRows(size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::AppendRows(size_t numRows = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t numRows=luatop>1 ? (size_t)lua_tointeger(L,2) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::AppendRows(size_t)");
		}
		bool lret = self->AppendRows(numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_DeleteRows(lua_State *L) {
		if (!_lg_typecheck_DeleteRows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::DeleteRows(size_t, size_t)");
		}
		bool lret = self->DeleteRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_InsertCols(lua_State *L) {
		if (!_lg_typecheck_InsertCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::InsertCols(size_t, size_t)");
		}
		bool lret = self->InsertCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::AppendCols(size_t numCols = 1)
	static int _bind_AppendCols(lua_State *L) {
		if (!_lg_typecheck_AppendCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::AppendCols(size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::AppendCols(size_t numCols = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t numCols=luatop>1 ? (size_t)lua_tointeger(L,2) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::AppendCols(size_t)");
		}
		bool lret = self->AppendCols(numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_DeleteCols(lua_State *L) {
		if (!_lg_typecheck_DeleteCols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : 0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : 1;

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::DeleteCols(size_t, size_t)");
		}
		bool lret = self->DeleteCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::GetRowLabelValue(int row)
	static int _bind_GetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetRowLabelValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetRowLabelValue(int row) function, expected prototype:\nwxString wxGridTableBase::GetRowLabelValue(int row)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetRowLabelValue(int)");
		}
		wxString lret = self->GetRowLabelValue(row);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGridTableBase::GetColLabelValue(int col)
	static int _bind_GetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetColLabelValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetColLabelValue(int col) function, expected prototype:\nwxString wxGridTableBase::GetColLabelValue(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetColLabelValue(int)");
		}
		wxString lret = self->GetColLabelValue(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGridTableBase::SetRowLabelValue(int row, const wxString & label)
	static int _bind_SetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetRowLabelValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetRowLabelValue(int row, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::SetRowLabelValue(int row, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetRowLabelValue(int, const wxString &)");
		}
		self->SetRowLabelValue(row, label);

		return 0;
	}

	// void wxGridTableBase::SetColLabelValue(int col, const wxString & label)
	static int _bind_SetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetColLabelValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetColLabelValue(int col, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::SetColLabelValue(int col, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int col=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetColLabelValue(int, const wxString &)");
		}
		self->SetColLabelValue(col, label);

		return 0;
	}

	// void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider)
	static int _bind_SetAttrProvider(lua_State *L) {
		if (!_lg_typecheck_SetAttrProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider) function, expected prototype:\nvoid wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider)\nClass arguments details:\narg 1 ID = 96494917\n");
		}

		wxGridCellAttrProvider* attrProvider=dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,2));

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider *)");
		}
		self->SetAttrProvider(attrProvider);

		return 0;
	}

	// wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const
	static int _bind_GetAttrProvider(lua_State *L) {
		if (!_lg_typecheck_GetAttrProvider(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const function, expected prototype:\nwxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const");
		}
		wxGridCellAttrProvider * lret = self->GetAttrProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttrProvider >::push(L,lret,false);

		return 1;
	}

	// wxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) function, expected prototype:\nwxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridTableBase::GetAttr(int, int, wxGridCellAttr::wxAttrKind)");
		}
		wxGridCellAttr * lret = self->GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_SetAttr(lua_State *L) {
		if (!_lg_typecheck_SetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetAttr(wxGridCellAttr *, int, int)");
		}
		self->SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_SetRowAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetRowAttr(wxGridCellAttr *, int)");
		}
		self->SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_SetColAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n");
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetColAttr(wxGridCellAttr *, int)");
		}
		self->SetColAttr(attr, col);

		return 0;
	}

	// bool wxGridTableBase::CanHaveAttributes()
	static int _bind_CanHaveAttributes(lua_State *L) {
		if (!_lg_typecheck_CanHaveAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanHaveAttributes() function, expected prototype:\nbool wxGridTableBase::CanHaveAttributes()\nClass arguments details:\n");
		}


		wxGridTableBase* self=dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanHaveAttributes()");
		}
		bool lret = self->CanHaveAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGridTableBase* LunaTraits< wxGridTableBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxGridTableBase::GetNumberRows()
	// int wxGridTableBase::GetNumberCols()
	// wxString wxGridTableBase::GetValue(int row, int col)
	// void wxGridTableBase::SetValue(int row, int col, const wxString & value)

	// Abstract operators:
}

void LunaTraits< wxGridTableBase >::_bind_dtor(wxGridTableBase* obj) {
	delete obj;
}

const char LunaTraits< wxGridTableBase >::className[] = "wxGridTableBase";
const char LunaTraits< wxGridTableBase >::fullName[] = "wxGridTableBase";
const char LunaTraits< wxGridTableBase >::moduleName[] = "wx";
const char* LunaTraits< wxGridTableBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGridTableBase >::hash = 50677725;
const int LunaTraits< wxGridTableBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridTableBase >::methods[] = {
	{"GetNumberRows", &luna_wrapper_wxGridTableBase::_bind_GetNumberRows},
	{"GetNumberCols", &luna_wrapper_wxGridTableBase::_bind_GetNumberCols},
	{"GetRowsCount", &luna_wrapper_wxGridTableBase::_bind_GetRowsCount},
	{"GetColsCount", &luna_wrapper_wxGridTableBase::_bind_GetColsCount},
	{"IsEmptyCell", &luna_wrapper_wxGridTableBase::_bind_IsEmptyCell},
	{"IsEmpty", &luna_wrapper_wxGridTableBase::_bind_IsEmpty},
	{"GetValue", &luna_wrapper_wxGridTableBase::_bind_GetValue},
	{"SetValue", &luna_wrapper_wxGridTableBase::_bind_SetValue},
	{"GetTypeName", &luna_wrapper_wxGridTableBase::_bind_GetTypeName},
	{"CanGetValueAs", &luna_wrapper_wxGridTableBase::_bind_CanGetValueAs},
	{"CanSetValueAs", &luna_wrapper_wxGridTableBase::_bind_CanSetValueAs},
	{"GetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_GetValueAsLong},
	{"GetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_GetValueAsDouble},
	{"GetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_GetValueAsBool},
	{"GetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_GetValueAsCustom},
	{"SetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_SetValueAsLong},
	{"SetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_SetValueAsDouble},
	{"SetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_SetValueAsBool},
	{"SetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_SetValueAsCustom},
	{"SetView", &luna_wrapper_wxGridTableBase::_bind_SetView},
	{"GetView", &luna_wrapper_wxGridTableBase::_bind_GetView},
	{"Clear", &luna_wrapper_wxGridTableBase::_bind_Clear},
	{"InsertRows", &luna_wrapper_wxGridTableBase::_bind_InsertRows},
	{"AppendRows", &luna_wrapper_wxGridTableBase::_bind_AppendRows},
	{"DeleteRows", &luna_wrapper_wxGridTableBase::_bind_DeleteRows},
	{"InsertCols", &luna_wrapper_wxGridTableBase::_bind_InsertCols},
	{"AppendCols", &luna_wrapper_wxGridTableBase::_bind_AppendCols},
	{"DeleteCols", &luna_wrapper_wxGridTableBase::_bind_DeleteCols},
	{"GetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_GetRowLabelValue},
	{"GetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_GetColLabelValue},
	{"SetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_SetRowLabelValue},
	{"SetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_SetColLabelValue},
	{"SetAttrProvider", &luna_wrapper_wxGridTableBase::_bind_SetAttrProvider},
	{"GetAttrProvider", &luna_wrapper_wxGridTableBase::_bind_GetAttrProvider},
	{"GetAttr", &luna_wrapper_wxGridTableBase::_bind_GetAttr},
	{"SetAttr", &luna_wrapper_wxGridTableBase::_bind_SetAttr},
	{"SetRowAttr", &luna_wrapper_wxGridTableBase::_bind_SetRowAttr},
	{"SetColAttr", &luna_wrapper_wxGridTableBase::_bind_SetColAttr},
	{"CanHaveAttributes", &luna_wrapper_wxGridTableBase::_bind_CanHaveAttributes},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridTableBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridTableBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridTableBase >::enumValues[] = {
	{0,0}
};

