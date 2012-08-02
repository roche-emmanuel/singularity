#include <plug_common.h>

class luna_wrapper_wxDataViewCustomRenderer {
public:
	typedef Luna< wxDataViewCustomRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewCustomRenderer* ptr= dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewCustomRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_ActivateCell(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11709329) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasEditorCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Render(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenderText(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartDrag(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	static int _bind_ActivateCell(lua_State *L) {
		if (!_lg_typecheck_ActivateCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) function, expected prototype:\nbool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 66533182\narg 3 ID = 11709329\narg 5 ID = 56813631\n");
		}

		const wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::ActivateCell function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,3));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::ActivateCell function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,5);
		const wxMouseEvent* mouseEvent=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,6));

		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::ActivateCell(const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int, const wxMouseEvent *)");
		}
		bool lret = self->ActivateCell(cell, model, item, col, mouseEvent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const function, expected prototype:\nconst wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const\nClass arguments details:\n");
		}


		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const");
		}
		const wxDataViewItemAttr* lret = &self->GetAttr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItemAttr >::push(L,lret,false);

		return 1;
	}

	// wxSize wxDataViewCustomRenderer::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCustomRenderer::GetSize() const function, expected prototype:\nwxSize wxDataViewCustomRenderer::GetSize() const\nClass arguments details:\n");
		}


		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCustomRenderer::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewCustomRenderer::HasEditorCtrl() const
	static int _bind_HasEditorCtrl(lua_State *L) {
		if (!_lg_typecheck_HasEditorCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::HasEditorCtrl() const function, expected prototype:\nbool wxDataViewCustomRenderer::HasEditorCtrl() const\nClass arguments details:\n");
		}


		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::HasEditorCtrl() const");
		}
		bool lret = self->HasEditorCtrl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_LeftClick(lua_State *L) {
		if (!_lg_typecheck_LeftClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n");
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::LeftClick(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int)");
		}
		bool lret = self->LeftClick(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	static int _bind_Render(lua_State *L) {
		if (!_lg_typecheck_Render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state) function, expected prototype:\nbool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\n");
		}

		wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::Render function");
		}
		wxRect cell=*cell_ptr;
		wxDC* dc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,3));
		int state=(int)lua_tointeger(L,4);

		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::Render(wxRect, wxDC *, int)");
		}
		bool lret = self->Render(cell, dc, state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state)
	static int _bind_RenderText(lua_State *L) {
		if (!_lg_typecheck_RenderText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state) function, expected prototype:\nvoid wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 20234418\narg 4 ID = 56813631\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int xoffset=(int)lua_tointeger(L,3);
		wxRect* cell_ptr=(Luna< wxRect >::check(L,4));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::RenderText function");
		}
		wxRect cell=*cell_ptr;
		wxDC* dc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,5));
		int state=(int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewCustomRenderer::RenderText(const wxString &, int, wxRect, wxDC *, int)");
		}
		self->RenderText(text, xoffset, cell, dc, state);

		return 0;
	}

	// bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_StartDrag(lua_State *L) {
		if (!_lg_typecheck_StartDrag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n");
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::StartDrag(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int)");
		}
		bool lret = self->StartDrag(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewCustomRenderer* LunaTraits< wxDataViewCustomRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxSize wxDataViewCustomRenderer::GetSize() const
	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewCustomRenderer >::_bind_dtor(wxDataViewCustomRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewCustomRenderer >::className[] = "wxDataViewCustomRenderer";
const char LunaTraits< wxDataViewCustomRenderer >::fullName[] = "wxDataViewCustomRenderer";
const char LunaTraits< wxDataViewCustomRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewCustomRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewCustomRenderer >::hash = 1931326;
const int LunaTraits< wxDataViewCustomRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewCustomRenderer >::methods[] = {
	{"ActivateCell", &luna_wrapper_wxDataViewCustomRenderer::_bind_ActivateCell},
	{"GetAttr", &luna_wrapper_wxDataViewCustomRenderer::_bind_GetAttr},
	{"GetSize", &luna_wrapper_wxDataViewCustomRenderer::_bind_GetSize},
	{"HasEditorCtrl", &luna_wrapper_wxDataViewCustomRenderer::_bind_HasEditorCtrl},
	{"LeftClick", &luna_wrapper_wxDataViewCustomRenderer::_bind_LeftClick},
	{"Render", &luna_wrapper_wxDataViewCustomRenderer::_bind_Render},
	{"RenderText", &luna_wrapper_wxDataViewCustomRenderer::_bind_RenderText},
	{"StartDrag", &luna_wrapper_wxDataViewCustomRenderer::_bind_StartDrag},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewCustomRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewCustomRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewCustomRenderer >::enumValues[] = {
	{0,0}
};


