#include <plug_common.h>

class luna_wrapper_wxTextEntry {
public:
	typedef Luna< wxTextEntry > luna_t;

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

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextEntry");
		
		return luna_dynamicCast(L,converters,"wxTextEntry",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoComplete_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoComplete_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92690309)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompleteFileNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompleteDirectories(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ChangeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEditable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WriteText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTextEntry::AppendText(const wxString & text)
	static int _bind_AppendText(lua_State *L) {
		if (!_lg_typecheck_AppendText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::AppendText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::AppendText(const wxString &)");
		}
		self->AppendText(text);

		return 0;
	}

	// bool wxTextEntry::AutoComplete(const wxArrayString & choices)
	static int _bind_AutoComplete_overload_1(lua_State *L) {
		if (!_lg_typecheck_AutoComplete_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoComplete(const wxArrayString & choices) function, expected prototype:\nbool wxTextEntry::AutoComplete(const wxArrayString & choices)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,2));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxTextEntry::AutoComplete function");
		}
		const wxArrayString & choices=*choices_ptr;

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoComplete(const wxArrayString &)");
		}
		bool lret = self->AutoComplete(choices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::AutoComplete(wxTextCompleter * completer)
	static int _bind_AutoComplete_overload_2(lua_State *L) {
		if (!_lg_typecheck_AutoComplete_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoComplete(wxTextCompleter * completer) function, expected prototype:\nbool wxTextEntry::AutoComplete(wxTextCompleter * completer)\nClass arguments details:\narg 1 ID = 92690309\n");
		}

		wxTextCompleter* completer=(Luna< wxTextCompleter >::check(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoComplete(wxTextCompleter *)");
		}
		bool lret = self->AutoComplete(completer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTextEntry::AutoComplete
	static int _bind_AutoComplete(lua_State *L) {
		if (_lg_typecheck_AutoComplete_overload_1(L)) return _bind_AutoComplete_overload_1(L);
		if (_lg_typecheck_AutoComplete_overload_2(L)) return _bind_AutoComplete_overload_2(L);

		luaL_error(L, "error in function AutoComplete, cannot match any of the overloads for function AutoComplete:\n  AutoComplete(const wxArrayString &)\n  AutoComplete(wxTextCompleter *)\n");
		return 0;
	}

	// bool wxTextEntry::AutoCompleteFileNames()
	static int _bind_AutoCompleteFileNames(lua_State *L) {
		if (!_lg_typecheck_AutoCompleteFileNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoCompleteFileNames() function, expected prototype:\nbool wxTextEntry::AutoCompleteFileNames()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoCompleteFileNames()");
		}
		bool lret = self->AutoCompleteFileNames();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::AutoCompleteDirectories()
	static int _bind_AutoCompleteDirectories(lua_State *L) {
		if (!_lg_typecheck_AutoCompleteDirectories(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoCompleteDirectories() function, expected prototype:\nbool wxTextEntry::AutoCompleteDirectories()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoCompleteDirectories()");
		}
		bool lret = self->AutoCompleteDirectories();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanCopy() const
	static int _bind_CanCopy(lua_State *L) {
		if (!_lg_typecheck_CanCopy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanCopy() const function, expected prototype:\nbool wxTextEntry::CanCopy() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanCopy() const");
		}
		bool lret = self->CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanCut() const
	static int _bind_CanCut(lua_State *L) {
		if (!_lg_typecheck_CanCut(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanCut() const function, expected prototype:\nbool wxTextEntry::CanCut() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanCut() const");
		}
		bool lret = self->CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanPaste() const
	static int _bind_CanPaste(lua_State *L) {
		if (!_lg_typecheck_CanPaste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanPaste() const function, expected prototype:\nbool wxTextEntry::CanPaste() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanPaste() const");
		}
		bool lret = self->CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanRedo() const
	static int _bind_CanRedo(lua_State *L) {
		if (!_lg_typecheck_CanRedo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanRedo() const function, expected prototype:\nbool wxTextEntry::CanRedo() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanRedo() const");
		}
		bool lret = self->CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanUndo() const function, expected prototype:\nbool wxTextEntry::CanUndo() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanUndo() const");
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::ChangeValue(const wxString & value)
	static int _bind_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_ChangeValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::ChangeValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::ChangeValue(const wxString &)");
		}
		self->ChangeValue(value);

		return 0;
	}

	// void wxTextEntry::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Clear() function, expected prototype:\nvoid wxTextEntry::Clear()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxTextEntry::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Copy() function, expected prototype:\nvoid wxTextEntry::Copy()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Copy()");
		}
		self->Copy();

		return 0;
	}

	// long wxTextEntry::GetInsertionPoint() const
	static int _bind_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_GetInsertionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextEntry::GetInsertionPoint() const function, expected prototype:\nlong wxTextEntry::GetInsertionPoint() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextEntry::GetInsertionPoint() const");
		}
		long lret = self->GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextEntry::GetLastPosition() const
	static int _bind_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_GetLastPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextEntry::GetLastPosition() const function, expected prototype:\nlong wxTextEntry::GetLastPosition() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextEntry::GetLastPosition() const");
		}
		long lret = self->GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextEntry::GetRange(long from, long to) const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetRange(long from, long to) const function, expected prototype:\nwxString wxTextEntry::GetRange(long from, long to) const\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetRange(long, long) const");
		}
		wxString lret = self->GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextEntry::GetSelection(long * from, long * to) const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxTextEntry::GetSelection(long * from, long * to) const\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::GetSelection(long *, long *) const");
		}
		self->GetSelection(&from, &to);

		return 0;
	}

	// wxString wxTextEntry::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetStringSelection() const function, expected prototype:\nwxString wxTextEntry::GetStringSelection() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetStringSelection() const");
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxTextEntry::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetValue() const function, expected prototype:\nwxString wxTextEntry::GetValue() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetValue() const");
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextEntry::IsEditable() const
	static int _bind_IsEditable(lua_State *L) {
		if (!_lg_typecheck_IsEditable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::IsEditable() const function, expected prototype:\nbool wxTextEntry::IsEditable() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::IsEditable() const");
		}
		bool lret = self->IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::IsEmpty() const function, expected prototype:\nbool wxTextEntry::IsEmpty() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Paste() function, expected prototype:\nvoid wxTextEntry::Paste()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Paste()");
		}
		self->Paste();

		return 0;
	}

	// void wxTextEntry::Redo()
	static int _bind_Redo(lua_State *L) {
		if (!_lg_typecheck_Redo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Redo() function, expected prototype:\nvoid wxTextEntry::Redo()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Redo()");
		}
		self->Redo();

		return 0;
	}

	// void wxTextEntry::Remove(long from, long to)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Remove(long from, long to) function, expected prototype:\nvoid wxTextEntry::Remove(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Remove(long, long)");
		}
		self->Remove(from, to);

		return 0;
	}

	// void wxTextEntry::Replace(long from, long to, const wxString & value)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Replace(long from, long to, const wxString & value) function, expected prototype:\nvoid wxTextEntry::Replace(long from, long to, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Replace(long, long, const wxString &)");
		}
		self->Replace(from, to, value);

		return 0;
	}

	// void wxTextEntry::SetEditable(bool editable)
	static int _bind_SetEditable(lua_State *L) {
		if (!_lg_typecheck_SetEditable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetEditable(bool editable) function, expected prototype:\nvoid wxTextEntry::SetEditable(bool editable)\nClass arguments details:\n");
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetEditable(bool)");
		}
		self->SetEditable(editable);

		return 0;
	}

	// void wxTextEntry::SetInsertionPoint(long pos)
	static int _bind_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetInsertionPoint(long pos) function, expected prototype:\nvoid wxTextEntry::SetInsertionPoint(long pos)\nClass arguments details:\n");
		}

		long pos=(long)lua_tointeger(L,2);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetInsertionPoint(long)");
		}
		self->SetInsertionPoint(pos);

		return 0;
	}

	// void wxTextEntry::SetInsertionPointEnd()
	static int _bind_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPointEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetInsertionPointEnd() function, expected prototype:\nvoid wxTextEntry::SetInsertionPointEnd()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetInsertionPointEnd()");
		}
		self->SetInsertionPointEnd();

		return 0;
	}

	// void wxTextEntry::SetMaxLength(unsigned long len)
	static int _bind_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_SetMaxLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxTextEntry::SetMaxLength(unsigned long len)\nClass arguments details:\n");
		}

		unsigned long len=(unsigned long)lua_tointeger(L,2);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetMaxLength(unsigned long)");
		}
		self->SetMaxLength(len);

		return 0;
	}

	// void wxTextEntry::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetSelection(long from, long to) function, expected prototype:\nvoid wxTextEntry::SetSelection(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetSelection(long, long)");
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxTextEntry::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SelectAll() function, expected prototype:\nvoid wxTextEntry::SelectAll()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SelectAll()");
		}
		self->SelectAll();

		return 0;
	}

	// bool wxTextEntry::SetHint(const wxString & hint)
	static int _bind_SetHint(lua_State *L) {
		if (!_lg_typecheck_SetHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetHint(const wxString & hint) function, expected prototype:\nbool wxTextEntry::SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetHint(const wxString &)");
		}
		bool lret = self->SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextEntry::GetHint() const
	static int _bind_GetHint(lua_State *L) {
		if (!_lg_typecheck_GetHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetHint() const function, expected prototype:\nwxString wxTextEntry::GetHint() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetHint() const");
		}
		wxString lret = self->GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextEntry::SetMargins(const wxPoint & pt)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetMargins(const wxPoint & pt) function, expected prototype:\nbool wxTextEntry::SetMargins(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextEntry::SetMargins function");
		}
		const wxPoint & pt=*pt_ptr;

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetMargins(const wxPoint &)");
		}
		bool lret = self->SetMargins(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::SetMargins(int left, int top = -1)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetMargins(int left, int top = -1) function, expected prototype:\nbool wxTextEntry::SetMargins(int left, int top = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int left=(int)lua_tointeger(L,2);
		int top=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetMargins(int, int)");
		}
		bool lret = self->SetMargins(left, top);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTextEntry::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(const wxPoint &)\n  SetMargins(int, int)\n");
		return 0;
	}

	// wxPoint wxTextEntry::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxTextEntry::GetMargins() const function, expected prototype:\nwxPoint wxTextEntry::GetMargins() const\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxTextEntry::GetMargins() const");
		}
		wxPoint stack_lret = self->GetMargins();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxTextEntry::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetValue(const wxString &)");
		}
		self->SetValue(value);

		return 0;
	}

	// void wxTextEntry::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Undo() function, expected prototype:\nvoid wxTextEntry::Undo()\nClass arguments details:\n");
		}


		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::Undo()");
		}
		self->Undo();

		return 0;
	}

	// void wxTextEntry::WriteText(const wxString & text)
	static int _bind_WriteText(lua_State *L) {
		if (!_lg_typecheck_WriteText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextEntry::WriteText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextEntry::WriteText(const wxString &)");
		}
		self->WriteText(text);

		return 0;
	}


	// Operator binds:

};

wxTextEntry* LunaTraits< wxTextEntry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTextEntry >::_bind_dtor(wxTextEntry* obj) {
	delete obj;
}

const char LunaTraits< wxTextEntry >::className[] = "wxTextEntry";
const char LunaTraits< wxTextEntry >::fullName[] = "wxTextEntry";
const char LunaTraits< wxTextEntry >::moduleName[] = "wx";
const char* LunaTraits< wxTextEntry >::parents[] = {0};
const int LunaTraits< wxTextEntry >::hash = 54144136;
const int LunaTraits< wxTextEntry >::uniqueIDs[] = {54144136,0};

luna_RegType LunaTraits< wxTextEntry >::methods[] = {
	{"AppendText", &luna_wrapper_wxTextEntry::_bind_AppendText},
	{"AutoComplete", &luna_wrapper_wxTextEntry::_bind_AutoComplete},
	{"AutoCompleteFileNames", &luna_wrapper_wxTextEntry::_bind_AutoCompleteFileNames},
	{"AutoCompleteDirectories", &luna_wrapper_wxTextEntry::_bind_AutoCompleteDirectories},
	{"CanCopy", &luna_wrapper_wxTextEntry::_bind_CanCopy},
	{"CanCut", &luna_wrapper_wxTextEntry::_bind_CanCut},
	{"CanPaste", &luna_wrapper_wxTextEntry::_bind_CanPaste},
	{"CanRedo", &luna_wrapper_wxTextEntry::_bind_CanRedo},
	{"CanUndo", &luna_wrapper_wxTextEntry::_bind_CanUndo},
	{"ChangeValue", &luna_wrapper_wxTextEntry::_bind_ChangeValue},
	{"Clear", &luna_wrapper_wxTextEntry::_bind_Clear},
	{"Copy", &luna_wrapper_wxTextEntry::_bind_Copy},
	{"GetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_GetInsertionPoint},
	{"GetLastPosition", &luna_wrapper_wxTextEntry::_bind_GetLastPosition},
	{"GetRange", &luna_wrapper_wxTextEntry::_bind_GetRange},
	{"GetSelection", &luna_wrapper_wxTextEntry::_bind_GetSelection},
	{"GetStringSelection", &luna_wrapper_wxTextEntry::_bind_GetStringSelection},
	{"GetValue", &luna_wrapper_wxTextEntry::_bind_GetValue},
	{"IsEditable", &luna_wrapper_wxTextEntry::_bind_IsEditable},
	{"IsEmpty", &luna_wrapper_wxTextEntry::_bind_IsEmpty},
	{"Paste", &luna_wrapper_wxTextEntry::_bind_Paste},
	{"Redo", &luna_wrapper_wxTextEntry::_bind_Redo},
	{"Remove", &luna_wrapper_wxTextEntry::_bind_Remove},
	{"Replace", &luna_wrapper_wxTextEntry::_bind_Replace},
	{"SetEditable", &luna_wrapper_wxTextEntry::_bind_SetEditable},
	{"SetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_SetInsertionPoint},
	{"SetInsertionPointEnd", &luna_wrapper_wxTextEntry::_bind_SetInsertionPointEnd},
	{"SetMaxLength", &luna_wrapper_wxTextEntry::_bind_SetMaxLength},
	{"SetSelection", &luna_wrapper_wxTextEntry::_bind_SetSelection},
	{"SelectAll", &luna_wrapper_wxTextEntry::_bind_SelectAll},
	{"SetHint", &luna_wrapper_wxTextEntry::_bind_SetHint},
	{"GetHint", &luna_wrapper_wxTextEntry::_bind_GetHint},
	{"SetMargins", &luna_wrapper_wxTextEntry::_bind_SetMargins},
	{"GetMargins", &luna_wrapper_wxTextEntry::_bind_GetMargins},
	{"SetValue", &luna_wrapper_wxTextEntry::_bind_SetValue},
	{"Undo", &luna_wrapper_wxTextEntry::_bind_Undo},
	{"WriteText", &luna_wrapper_wxTextEntry::_bind_WriteText},
	{"dynCast", &luna_wrapper_wxTextEntry::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextEntry >::enumValues[] = {
	{0,0}
};

