#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewSpinRenderer.h>

class luna_wrapper_wxDataViewSpinRenderer {
public:
	typedef Luna< wxDataViewSpinRenderer > luna_t;

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
		//wxDataViewSpinRenderer* ptr= dynamic_cast< wxDataViewSpinRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewSpinRenderer* ptr= luna_caster< wxObject, wxDataViewSpinRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewSpinRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ActivateCell(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11709329) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasEditorCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LeftClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartDrag(lua_State *L) {
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
	// wxClassInfo * wxDataViewSpinRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewSpinRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewSpinRenderer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewSpinRenderer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDataViewSpinRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewSpinRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDataViewSpinRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewSpinRenderer::base_GetAlignment() const\nClass arguments details:\n");
		}


		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDataViewSpinRenderer::base_GetAlignment() const");
		}
		int lret = self->wxDataViewSpinRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewSpinRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewSpinRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewSpinRenderer::base_GetMode() const\nClass arguments details:\n");
		}


		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewSpinRenderer::base_GetMode() const");
		}
		wxDataViewCellMode lret = self->wxDataViewSpinRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewSpinRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataViewSpinRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewSpinRenderer::base_SetAlignment(int align)\nClass arguments details:\n");
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataViewSpinRenderer::base_SetAlignment(int)");
		}
		self->wxDataViewSpinRenderer::SetAlignment(align);

		return 0;
	}

	// bool wxDataViewSpinRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	static int _bind_base_ActivateCell(lua_State *L) {
		if (!_lg_typecheck_base_ActivateCell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewSpinRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) function, expected prototype:\nbool wxDataViewSpinRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 66533182\narg 3 ID = 11709329\narg 5 ID = 56813631\n");
		}

		const wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewSpinRenderer::base_ActivateCell function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,3));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewSpinRenderer::base_ActivateCell function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,5);
		const wxMouseEvent* mouseEvent=(Luna< wxObject >::checkSubType< wxMouseEvent >(L,6));

		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewSpinRenderer::base_ActivateCell(const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int, const wxMouseEvent *)");
		}
		bool lret = self->wxDataViewSpinRenderer::ActivateCell(cell, model, item, col, mouseEvent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewSpinRenderer::base_HasEditorCtrl() const
	static int _bind_base_HasEditorCtrl(lua_State *L) {
		if (!_lg_typecheck_base_HasEditorCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewSpinRenderer::base_HasEditorCtrl() const function, expected prototype:\nbool wxDataViewSpinRenderer::base_HasEditorCtrl() const\nClass arguments details:\n");
		}


		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewSpinRenderer::base_HasEditorCtrl() const");
		}
		bool lret = self->wxDataViewSpinRenderer::HasEditorCtrl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewSpinRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_base_LeftClick(lua_State *L) {
		if (!_lg_typecheck_base_LeftClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewSpinRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewSpinRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n");
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewSpinRenderer::base_LeftClick function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewSpinRenderer::base_LeftClick function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewSpinRenderer::base_LeftClick function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewSpinRenderer::base_LeftClick(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int)");
		}
		bool lret = self->wxDataViewSpinRenderer::LeftClick(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewSpinRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_base_StartDrag(lua_State *L) {
		if (!_lg_typecheck_base_StartDrag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataViewSpinRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewSpinRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n");
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewSpinRenderer::base_StartDrag function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewSpinRenderer::base_StartDrag function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewSpinRenderer::base_StartDrag function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewSpinRenderer* self=Luna< wxObject >::checkSubType< wxDataViewSpinRenderer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataViewSpinRenderer::base_StartDrag(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int)");
		}
		bool lret = self->wxDataViewSpinRenderer::StartDrag(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewSpinRenderer* LunaTraits< wxDataViewSpinRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxSize wxDataViewCustomRenderer::GetSize() const
	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewSpinRenderer >::_bind_dtor(wxDataViewSpinRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewSpinRenderer >::className[] = "wxDataViewSpinRenderer";
const char LunaTraits< wxDataViewSpinRenderer >::fullName[] = "wxDataViewSpinRenderer";
const char LunaTraits< wxDataViewSpinRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewSpinRenderer >::parents[] = {"wx.wxDataViewCustomRenderer", 0};
const int LunaTraits< wxDataViewSpinRenderer >::hash = 25468914;
const int LunaTraits< wxDataViewSpinRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewSpinRenderer >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_SetAlignment},
	{"base_ActivateCell", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_ActivateCell},
	{"base_HasEditorCtrl", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_HasEditorCtrl},
	{"base_LeftClick", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_LeftClick},
	{"base_StartDrag", &luna_wrapper_wxDataViewSpinRenderer::_bind_base_StartDrag},
	{"__eq", &luna_wrapper_wxDataViewSpinRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewSpinRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewSpinRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewSpinRenderer >::enumValues[] = {
	{0,0}
};


