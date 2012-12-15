#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellAutoWrapStringEditor.h>

class luna_wrapper_wxGridCellAutoWrapStringEditor {
public:
	typedef Luna< wxGridCellAutoWrapStringEditor > luna_t;

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
		//wxGridCellAutoWrapStringEditor* ptr= dynamic_cast< wxGridCellAutoWrapStringEditor* >(Luna< wxGridCellEditor >::check(L,1));
		wxGridCellAutoWrapStringEditor* ptr= luna_caster< wxGridCellEditor, wxGridCellAutoWrapStringEditor >::cast(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellAutoWrapStringEditor >::push(L,ptr,false);
		return 1;
	};


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

	// Function binds:
	// void wxGridCellAutoWrapStringEditor::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_Destroy() function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_Destroy()\nClass arguments details:\n");
		}


		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_Destroy()");
		}
		self->wxGridCellAutoWrapStringEditor::Destroy();

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_HandleReturn(wxKeyEvent & event)
	static int _bind_base_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_base_HandleReturn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellAutoWrapStringEditor::base_HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_HandleReturn(wxKeyEvent &)");
		}
		self->wxGridCellAutoWrapStringEditor::HandleReturn(event);

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_base_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_base_PaintBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n");
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellAutoWrapStringEditor::base_PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_PaintBackground(const wxRect &, wxGridCellAttr *)");
		}
		self->wxGridCellAutoWrapStringEditor::PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_SetSize(const wxRect & rect)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellAutoWrapStringEditor::base_SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_SetSize(const wxRect &)");
		}
		self->wxGridCellAutoWrapStringEditor::SetSize(rect);

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_Show(bool, wxGridCellAttr *)");
		}
		self->wxGridCellAutoWrapStringEditor::Show(show, attr);

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_StartingClick()
	static int _bind_base_StartingClick(lua_State *L) {
		if (!_lg_typecheck_base_StartingClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_StartingClick() function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_StartingClick()\nClass arguments details:\n");
		}


		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_StartingClick()");
		}
		self->wxGridCellAutoWrapStringEditor::StartingClick();

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_StartingKey(wxKeyEvent & event)
	static int _bind_base_StartingKey(lua_State *L) {
		if (!_lg_typecheck_base_StartingKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellAutoWrapStringEditor::base_StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_StartingKey(wxKeyEvent &)");
		}
		self->wxGridCellAutoWrapStringEditor::StartingKey(event);

		return 0;
	}

	// void wxGridCellAutoWrapStringEditor::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellAutoWrapStringEditor::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellAutoWrapStringEditor::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellAutoWrapStringEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellAutoWrapStringEditor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellAutoWrapStringEditor::base_SetParameters(const wxString &)");
		}
		self->wxGridCellAutoWrapStringEditor::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellAutoWrapStringEditor* LunaTraits< wxGridCellAutoWrapStringEditor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	// wxGridCellEditor * wxGridCellEditor::Clone() const
	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	// void wxGridCellEditor::Reset()
}

void LunaTraits< wxGridCellAutoWrapStringEditor >::_bind_dtor(wxGridCellAutoWrapStringEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellAutoWrapStringEditor >::className[] = "wxGridCellAutoWrapStringEditor";
const char LunaTraits< wxGridCellAutoWrapStringEditor >::fullName[] = "wxGridCellAutoWrapStringEditor";
const char LunaTraits< wxGridCellAutoWrapStringEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAutoWrapStringEditor >::parents[] = {"wx.wxGridCellTextEditor", 0};
const int LunaTraits< wxGridCellAutoWrapStringEditor >::hash = 90470574;
const int LunaTraits< wxGridCellAutoWrapStringEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellAutoWrapStringEditor >::methods[] = {
	{"base_Destroy", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_Destroy},
	{"base_HandleReturn", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_HandleReturn},
	{"base_PaintBackground", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_PaintBackground},
	{"base_SetSize", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_SetSize},
	{"base_Show", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_Show},
	{"base_StartingClick", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_StartingClick},
	{"base_StartingKey", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_StartingKey},
	{"base_SetParameters", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind_base_SetParameters},
	{"__eq", &luna_wrapper_wxGridCellAutoWrapStringEditor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAutoWrapStringEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellAutoWrapStringEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAutoWrapStringEditor >::enumValues[] = {
	{0,0}
};


