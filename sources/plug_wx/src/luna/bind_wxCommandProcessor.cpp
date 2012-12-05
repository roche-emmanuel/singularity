#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCommandProcessor.h>

class luna_wrapper_wxCommandProcessor {
public:
	typedef Luna< wxCommandProcessor > luna_t;

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
		wxCommandProcessor* ptr= dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommandProcessor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearCommands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCommands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentCommand(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxCommands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRedoAccelerator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRedoMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUndoAccelerator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUndoMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MarkAsSaved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEditMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMenuStrings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRedoAccelerator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUndoAccelerator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Submit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Store(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCommandProcessor::wxCommandProcessor(int maxCommands = -1)
	static wxCommandProcessor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandProcessor::wxCommandProcessor(int maxCommands = -1) function, expected prototype:\nwxCommandProcessor::wxCommandProcessor(int maxCommands = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int maxCommands=luatop>0 ? (int)lua_tointeger(L,1) : -1;

		return new wxCommandProcessor(maxCommands);
	}

	// wxCommandProcessor::wxCommandProcessor(lua_Table * data, int maxCommands = -1)
	static wxCommandProcessor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommandProcessor::wxCommandProcessor(lua_Table * data, int maxCommands = -1) function, expected prototype:\nwxCommandProcessor::wxCommandProcessor(lua_Table * data, int maxCommands = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int maxCommands=luatop>1 ? (int)lua_tointeger(L,2) : -1;

		return new wrapper_wxCommandProcessor(L,NULL, maxCommands);
	}

	// Overload binder for wxCommandProcessor::wxCommandProcessor
	static wxCommandProcessor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCommandProcessor, cannot match any of the overloads for function wxCommandProcessor:\n  wxCommandProcessor(int)\n  wxCommandProcessor(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCommandProcessor::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::CanUndo() const function, expected prototype:\nbool wxCommandProcessor::CanUndo() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::CanUndo() const");
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCommandProcessor::CanRedo() const
	static int _bind_CanRedo(lua_State *L) {
		if (!_lg_typecheck_CanRedo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::CanRedo() const function, expected prototype:\nbool wxCommandProcessor::CanRedo() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::CanRedo() const");
		}
		bool lret = self->CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandProcessor::ClearCommands()
	static int _bind_ClearCommands(lua_State *L) {
		if (!_lg_typecheck_ClearCommands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::ClearCommands() function, expected prototype:\nvoid wxCommandProcessor::ClearCommands()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::ClearCommands()");
		}
		self->ClearCommands();

		return 0;
	}

	// wxList & wxCommandProcessor::GetCommands()
	static int _bind_GetCommands(lua_State *L) {
		if (!_lg_typecheck_GetCommands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxList & wxCommandProcessor::GetCommands() function, expected prototype:\nwxList & wxCommandProcessor::GetCommands()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxList & wxCommandProcessor::GetCommands()");
		}
		const wxList* lret = &self->GetCommands();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// wxCommand * wxCommandProcessor::GetCurrentCommand() const
	static int _bind_GetCurrentCommand(lua_State *L) {
		if (!_lg_typecheck_GetCurrentCommand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCommand * wxCommandProcessor::GetCurrentCommand() const function, expected prototype:\nwxCommand * wxCommandProcessor::GetCurrentCommand() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCommand * wxCommandProcessor::GetCurrentCommand() const");
		}
		wxCommand * lret = self->GetCurrentCommand();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCommand >::push(L,lret,false);

		return 1;
	}

	// wxMenu * wxCommandProcessor::GetEditMenu() const
	static int _bind_GetEditMenu(lua_State *L) {
		if (!_lg_typecheck_GetEditMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMenu * wxCommandProcessor::GetEditMenu() const function, expected prototype:\nwxMenu * wxCommandProcessor::GetEditMenu() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMenu * wxCommandProcessor::GetEditMenu() const");
		}
		wxMenu * lret = self->GetEditMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// int wxCommandProcessor::GetMaxCommands() const
	static int _bind_GetMaxCommands(lua_State *L) {
		if (!_lg_typecheck_GetMaxCommands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxCommandProcessor::GetMaxCommands() const function, expected prototype:\nint wxCommandProcessor::GetMaxCommands() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxCommandProcessor::GetMaxCommands() const");
		}
		int lret = self->GetMaxCommands();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxCommandProcessor::GetRedoAccelerator() const
	static int _bind_GetRedoAccelerator(lua_State *L) {
		if (!_lg_typecheck_GetRedoAccelerator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxCommandProcessor::GetRedoAccelerator() const function, expected prototype:\nconst wxString & wxCommandProcessor::GetRedoAccelerator() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxCommandProcessor::GetRedoAccelerator() const");
		}
		const wxString & lret = self->GetRedoAccelerator();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxCommandProcessor::GetRedoMenuLabel() const
	static int _bind_GetRedoMenuLabel(lua_State *L) {
		if (!_lg_typecheck_GetRedoMenuLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandProcessor::GetRedoMenuLabel() const function, expected prototype:\nwxString wxCommandProcessor::GetRedoMenuLabel() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandProcessor::GetRedoMenuLabel() const");
		}
		wxString lret = self->GetRedoMenuLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxCommandProcessor::GetUndoAccelerator() const
	static int _bind_GetUndoAccelerator(lua_State *L) {
		if (!_lg_typecheck_GetUndoAccelerator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxCommandProcessor::GetUndoAccelerator() const function, expected prototype:\nconst wxString & wxCommandProcessor::GetUndoAccelerator() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxCommandProcessor::GetUndoAccelerator() const");
		}
		const wxString & lret = self->GetUndoAccelerator();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxCommandProcessor::GetUndoMenuLabel() const
	static int _bind_GetUndoMenuLabel(lua_State *L) {
		if (!_lg_typecheck_GetUndoMenuLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandProcessor::GetUndoMenuLabel() const function, expected prototype:\nwxString wxCommandProcessor::GetUndoMenuLabel() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandProcessor::GetUndoMenuLabel() const");
		}
		wxString lret = self->GetUndoMenuLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxCommandProcessor::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::Initialize() function, expected prototype:\nvoid wxCommandProcessor::Initialize()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::Initialize()");
		}
		self->Initialize();

		return 0;
	}

	// bool wxCommandProcessor::IsDirty() const
	static int _bind_IsDirty(lua_State *L) {
		if (!_lg_typecheck_IsDirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::IsDirty() const function, expected prototype:\nbool wxCommandProcessor::IsDirty() const\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::IsDirty() const");
		}
		bool lret = self->IsDirty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandProcessor::MarkAsSaved()
	static int _bind_MarkAsSaved(lua_State *L) {
		if (!_lg_typecheck_MarkAsSaved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::MarkAsSaved() function, expected prototype:\nvoid wxCommandProcessor::MarkAsSaved()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::MarkAsSaved()");
		}
		self->MarkAsSaved();

		return 0;
	}

	// bool wxCommandProcessor::Redo()
	static int _bind_Redo(lua_State *L) {
		if (!_lg_typecheck_Redo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::Redo() function, expected prototype:\nbool wxCommandProcessor::Redo()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::Redo()");
		}
		bool lret = self->Redo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandProcessor::SetEditMenu(wxMenu * menu)
	static int _bind_SetEditMenu(lua_State *L) {
		if (!_lg_typecheck_SetEditMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::SetEditMenu(wxMenu * menu) function, expected prototype:\nvoid wxCommandProcessor::SetEditMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::SetEditMenu(wxMenu *)");
		}
		self->SetEditMenu(menu);

		return 0;
	}

	// void wxCommandProcessor::SetMenuStrings()
	static int _bind_SetMenuStrings(lua_State *L) {
		if (!_lg_typecheck_SetMenuStrings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::SetMenuStrings() function, expected prototype:\nvoid wxCommandProcessor::SetMenuStrings()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::SetMenuStrings()");
		}
		self->SetMenuStrings();

		return 0;
	}

	// void wxCommandProcessor::SetRedoAccelerator(const wxString & accel)
	static int _bind_SetRedoAccelerator(lua_State *L) {
		if (!_lg_typecheck_SetRedoAccelerator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::SetRedoAccelerator(const wxString & accel) function, expected prototype:\nvoid wxCommandProcessor::SetRedoAccelerator(const wxString & accel)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString accel(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::SetRedoAccelerator(const wxString &)");
		}
		self->SetRedoAccelerator(accel);

		return 0;
	}

	// void wxCommandProcessor::SetUndoAccelerator(const wxString & accel)
	static int _bind_SetUndoAccelerator(lua_State *L) {
		if (!_lg_typecheck_SetUndoAccelerator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::SetUndoAccelerator(const wxString & accel) function, expected prototype:\nvoid wxCommandProcessor::SetUndoAccelerator(const wxString & accel)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString accel(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::SetUndoAccelerator(const wxString &)");
		}
		self->SetUndoAccelerator(accel);

		return 0;
	}

	// bool wxCommandProcessor::Submit(wxCommand * command, bool storeIt = true)
	static int _bind_Submit(lua_State *L) {
		if (!_lg_typecheck_Submit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::Submit(wxCommand * command, bool storeIt = true) function, expected prototype:\nbool wxCommandProcessor::Submit(wxCommand * command, bool storeIt = true)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxCommand* command=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,2));
		bool storeIt=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::Submit(wxCommand *, bool)");
		}
		bool lret = self->Submit(command, storeIt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandProcessor::Store(wxCommand * command)
	static int _bind_Store(lua_State *L) {
		if (!_lg_typecheck_Store(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandProcessor::Store(wxCommand * command) function, expected prototype:\nvoid wxCommandProcessor::Store(wxCommand * command)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCommand* command=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,2));

		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandProcessor::Store(wxCommand *)");
		}
		self->Store(command);

		return 0;
	}

	// bool wxCommandProcessor::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandProcessor::Undo() function, expected prototype:\nbool wxCommandProcessor::Undo()\nClass arguments details:\n");
		}


		wxCommandProcessor* self=dynamic_cast< wxCommandProcessor* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandProcessor::Undo()");
		}
		bool lret = self->Undo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCommandProcessor* LunaTraits< wxCommandProcessor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCommandProcessor::_bind_ctor(L);
}

void LunaTraits< wxCommandProcessor >::_bind_dtor(wxCommandProcessor* obj) {
	delete obj;
}

const char LunaTraits< wxCommandProcessor >::className[] = "wxCommandProcessor";
const char LunaTraits< wxCommandProcessor >::fullName[] = "wxCommandProcessor";
const char LunaTraits< wxCommandProcessor >::moduleName[] = "wx";
const char* LunaTraits< wxCommandProcessor >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxCommandProcessor >::hash = 43780714;
const int LunaTraits< wxCommandProcessor >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCommandProcessor >::methods[] = {
	{"CanUndo", &luna_wrapper_wxCommandProcessor::_bind_CanUndo},
	{"CanRedo", &luna_wrapper_wxCommandProcessor::_bind_CanRedo},
	{"ClearCommands", &luna_wrapper_wxCommandProcessor::_bind_ClearCommands},
	{"GetCommands", &luna_wrapper_wxCommandProcessor::_bind_GetCommands},
	{"GetCurrentCommand", &luna_wrapper_wxCommandProcessor::_bind_GetCurrentCommand},
	{"GetEditMenu", &luna_wrapper_wxCommandProcessor::_bind_GetEditMenu},
	{"GetMaxCommands", &luna_wrapper_wxCommandProcessor::_bind_GetMaxCommands},
	{"GetRedoAccelerator", &luna_wrapper_wxCommandProcessor::_bind_GetRedoAccelerator},
	{"GetRedoMenuLabel", &luna_wrapper_wxCommandProcessor::_bind_GetRedoMenuLabel},
	{"GetUndoAccelerator", &luna_wrapper_wxCommandProcessor::_bind_GetUndoAccelerator},
	{"GetUndoMenuLabel", &luna_wrapper_wxCommandProcessor::_bind_GetUndoMenuLabel},
	{"Initialize", &luna_wrapper_wxCommandProcessor::_bind_Initialize},
	{"IsDirty", &luna_wrapper_wxCommandProcessor::_bind_IsDirty},
	{"MarkAsSaved", &luna_wrapper_wxCommandProcessor::_bind_MarkAsSaved},
	{"Redo", &luna_wrapper_wxCommandProcessor::_bind_Redo},
	{"SetEditMenu", &luna_wrapper_wxCommandProcessor::_bind_SetEditMenu},
	{"SetMenuStrings", &luna_wrapper_wxCommandProcessor::_bind_SetMenuStrings},
	{"SetRedoAccelerator", &luna_wrapper_wxCommandProcessor::_bind_SetRedoAccelerator},
	{"SetUndoAccelerator", &luna_wrapper_wxCommandProcessor::_bind_SetUndoAccelerator},
	{"Submit", &luna_wrapper_wxCommandProcessor::_bind_Submit},
	{"Store", &luna_wrapper_wxCommandProcessor::_bind_Store},
	{"Undo", &luna_wrapper_wxCommandProcessor::_bind_Undo},
	{"__eq", &luna_wrapper_wxCommandProcessor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommandProcessor >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommandProcessor::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommandProcessor >::enumValues[] = {
	{0,0}
};


