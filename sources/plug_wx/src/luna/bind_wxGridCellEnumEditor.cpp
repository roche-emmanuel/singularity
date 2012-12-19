#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellEnumEditor.h>

class luna_wrapper_wxGridCellEnumEditor {
public:
	typedef Luna< wxGridCellEnumEditor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,53399133) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellEditor*)");
		}

		wxGridCellEditor* rhs =(Luna< wxGridCellEditor >::check(L,2));
		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridCellEnumEditor* ptr= dynamic_cast< wxGridCellEnumEditor* >(Luna< wxGridCellEditor >::check(L,1));
		wxGridCellEnumEditor* ptr= luna_caster< wxGridCellEditor, wxGridCellEnumEditor >::cast(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellEnumEditor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HandleReturn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PaintBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartingClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_StartingKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellEnumEditor::wxGridCellEnumEditor(lua_Table * data, const wxString & choices = wxEmptyString)
	static wxGridCellEnumEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellEnumEditor::wxGridCellEnumEditor(lua_Table * data, const wxString & choices = wxEmptyString) function, expected prototype:\nwxGridCellEnumEditor::wxGridCellEnumEditor(lua_Table * data, const wxString & choices = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString choices(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxGridCellEnumEditor(L,NULL, choices);
	}


	// Function binds:
	// void wxGridCellEnumEditor::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_Destroy() function, expected prototype:\nvoid wxGridCellEnumEditor::base_Destroy()\nClass arguments details:\n");
		}


		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_Destroy()");
		}
		self->wxGridCellEnumEditor::Destroy();

		return 0;
	}

	// void wxGridCellEnumEditor::base_HandleReturn(wxKeyEvent & event)
	static int _bind_base_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_base_HandleReturn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEnumEditor::base_HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEnumEditor::base_HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_HandleReturn(wxKeyEvent &)");
		}
		self->wxGridCellEnumEditor::HandleReturn(event);

		return 0;
	}

	// void wxGridCellEnumEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_base_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_base_PaintBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellEnumEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n");
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellEnumEditor::base_PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_PaintBackground(const wxRect &, wxGridCellAttr *)");
		}
		self->wxGridCellEnumEditor::PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellEnumEditor::base_SetSize(const wxRect & rect)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellEnumEditor::base_SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellEnumEditor::base_SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_SetSize(const wxRect &)");
		}
		self->wxGridCellEnumEditor::SetSize(rect);

		return 0;
	}

	// void wxGridCellEnumEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellEnumEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_Show(bool, wxGridCellAttr *)");
		}
		self->wxGridCellEnumEditor::Show(show, attr);

		return 0;
	}

	// void wxGridCellEnumEditor::base_StartingClick()
	static int _bind_base_StartingClick(lua_State *L) {
		if (!_lg_typecheck_base_StartingClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_StartingClick() function, expected prototype:\nvoid wxGridCellEnumEditor::base_StartingClick()\nClass arguments details:\n");
		}


		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_StartingClick()");
		}
		self->wxGridCellEnumEditor::StartingClick();

		return 0;
	}

	// void wxGridCellEnumEditor::base_StartingKey(wxKeyEvent & event)
	static int _bind_base_StartingKey(lua_State *L) {
		if (!_lg_typecheck_base_StartingKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEnumEditor::base_StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEnumEditor::base_StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_StartingKey(wxKeyEvent &)");
		}
		self->wxGridCellEnumEditor::StartingKey(event);

		return 0;
	}

	// void wxGridCellEnumEditor::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumEditor::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellEnumEditor::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellEnumEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellEnumEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEnumEditor::base_SetParameters(const wxString &)");
		}
		self->wxGridCellEnumEditor::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellEnumEditor* LunaTraits< wxGridCellEnumEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellEnumEditor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxGridCellEditor::GetValue() const
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	// wxGridCellEditor * wxGridCellEditor::Clone() const
	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	// void wxGridCellEditor::Reset()
}

void LunaTraits< wxGridCellEnumEditor >::_bind_dtor(wxGridCellEnumEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellEnumEditor >::className[] = "wxGridCellEnumEditor";
const char LunaTraits< wxGridCellEnumEditor >::fullName[] = "wxGridCellEnumEditor";
const char LunaTraits< wxGridCellEnumEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellEnumEditor >::parents[] = {"wx.wxGridCellChoiceEditor", 0};
const int LunaTraits< wxGridCellEnumEditor >::hash = 47910445;
const int LunaTraits< wxGridCellEnumEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellEnumEditor >::methods[] = {
	{"base_Destroy", &luna_wrapper_wxGridCellEnumEditor::_bind_base_Destroy},
	{"base_HandleReturn", &luna_wrapper_wxGridCellEnumEditor::_bind_base_HandleReturn},
	{"base_PaintBackground", &luna_wrapper_wxGridCellEnumEditor::_bind_base_PaintBackground},
	{"base_SetSize", &luna_wrapper_wxGridCellEnumEditor::_bind_base_SetSize},
	{"base_Show", &luna_wrapper_wxGridCellEnumEditor::_bind_base_Show},
	{"base_StartingClick", &luna_wrapper_wxGridCellEnumEditor::_bind_base_StartingClick},
	{"base_StartingKey", &luna_wrapper_wxGridCellEnumEditor::_bind_base_StartingKey},
	{"base_SetParameters", &luna_wrapper_wxGridCellEnumEditor::_bind_base_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellEnumEditor::_bind___eq},
	{"getTable", &luna_wrapper_wxGridCellEnumEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellEnumEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellEnumEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellEnumEditor >::enumValues[] = {
	{0,0}
};


