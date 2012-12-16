#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellEditor.h>

class luna_wrapper_wxGridCellEditor {
public:
	typedef Luna< wxGridCellEditor > luna_t;

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

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCellEditor");
		
		return luna_dynamicCast(L,converters,"wxGridCellEditor",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_BeginEdit(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,19919380)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndEdit(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,19919380)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ApplyEdit(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,19919380)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HandleReturn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsCreated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PaintBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartingClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StartingKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	static int _bind_BeginEdit(lua_State *L) {
		if (!_lg_typecheck_BeginEdit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid) function, expected prototype:\nvoid wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)\nClass arguments details:\narg 3 ID = 19919380\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGrid* grid=(Luna< wxGrid >::check(L,4));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::BeginEdit(int, int, wxGrid *)");
		}
		self->BeginEdit(row, col, grid);

		return 0;
	}

	// wxGridCellEditor * wxGridCellEditor::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGridCellEditor::Clone() const function, expected prototype:\nwxGridCellEditor * wxGridCellEditor::Clone() const\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGridCellEditor::Clone() const");
		}
		wxGridCellEditor * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler) function, expected prototype:\nvoid wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\n");
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxEvtHandler* evtHandler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,4));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::Create(wxWindow *, int, wxEvtHandler *)");
		}
		self->Create(parent, id, evtHandler);

		return 0;
	}

	// void wxGridCellEditor::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::Destroy() function, expected prototype:\nvoid wxGridCellEditor::Destroy()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::Destroy()");
		}
		self->Destroy();

		return 0;
	}

	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	static int _bind_EndEdit(lua_State *L) {
		if (!_lg_typecheck_EndEdit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval) function, expected prototype:\nbool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)\nClass arguments details:\narg 3 ID = 19919380\narg 4 ID = 88196105\narg 5 ID = 88196105\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		const wxGrid* grid=(Luna< wxGrid >::check(L,4));
		wxString oldval(lua_tostring(L,5),lua_objlen(L,5));
		wxString newval(lua_tostring(L,6),lua_objlen(L,6));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridCellEditor::EndEdit(int, int, const wxGrid *, const wxString &, wxString *)");
		}
		bool lret = self->EndEdit(row, col, grid, oldval, &newval);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	static int _bind_ApplyEdit(lua_State *L) {
		if (!_lg_typecheck_ApplyEdit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid) function, expected prototype:\nvoid wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)\nClass arguments details:\narg 3 ID = 19919380\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGrid* grid=(Luna< wxGrid >::check(L,4));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::ApplyEdit(int, int, wxGrid *)");
		}
		self->ApplyEdit(row, col, grid);

		return 0;
	}

	// void wxGridCellEditor::HandleReturn(wxKeyEvent & event)
	static int _bind_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_HandleReturn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEditor::HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEditor::HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::HandleReturn(wxKeyEvent &)");
		}
		self->HandleReturn(event);

		return 0;
	}

	// bool wxGridCellEditor::IsCreated()
	static int _bind_IsCreated(lua_State *L) {
		if (!_lg_typecheck_IsCreated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridCellEditor::IsCreated() function, expected prototype:\nbool wxGridCellEditor::IsCreated()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridCellEditor::IsCreated()");
		}
		bool lret = self->IsCreated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_PaintBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellEditor::PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n");
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellEditor::PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::PaintBackground(const wxRect &, wxGridCellAttr *)");
		}
		self->PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellEditor::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::Reset() function, expected prototype:\nvoid wxGridCellEditor::Reset()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::Reset()");
		}
		self->Reset();

		return 0;
	}

	// void wxGridCellEditor::SetSize(const wxRect & rect)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellEditor::SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellEditor::SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::SetSize(const wxRect &)");
		}
		self->SetSize(rect);

		return 0;
	}

	// void wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellEditor::Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::Show(bool, wxGridCellAttr *)");
		}
		self->Show(show, attr);

		return 0;
	}

	// void wxGridCellEditor::StartingClick()
	static int _bind_StartingClick(lua_State *L) {
		if (!_lg_typecheck_StartingClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::StartingClick() function, expected prototype:\nvoid wxGridCellEditor::StartingClick()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::StartingClick()");
		}
		self->StartingClick();

		return 0;
	}

	// void wxGridCellEditor::StartingKey(wxKeyEvent & event)
	static int _bind_StartingKey(lua_State *L) {
		if (!_lg_typecheck_StartingKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEditor::StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEditor::StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::StartingKey(wxKeyEvent &)");
		}
		self->StartingKey(event);

		return 0;
	}

	// void wxGridCellEditor::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_Destroy() function, expected prototype:\nvoid wxGridCellEditor::base_Destroy()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_Destroy()");
		}
		self->wxGridCellEditor::Destroy();

		return 0;
	}

	// void wxGridCellEditor::base_HandleReturn(wxKeyEvent & event)
	static int _bind_base_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_base_HandleReturn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEditor::base_HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEditor::base_HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_HandleReturn(wxKeyEvent &)");
		}
		self->wxGridCellEditor::HandleReturn(event);

		return 0;
	}

	// void wxGridCellEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_base_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_base_PaintBackground(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n");
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellEditor::base_PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_PaintBackground(const wxRect &, wxGridCellAttr *)");
		}
		self->wxGridCellEditor::PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellEditor::base_SetSize(const wxRect & rect)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellEditor::base_SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellEditor::base_SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_SetSize(const wxRect &)");
		}
		self->wxGridCellEditor::SetSize(rect);

		return 0;
	}

	// void wxGridCellEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n");
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_Show(bool, wxGridCellAttr *)");
		}
		self->wxGridCellEditor::Show(show, attr);

		return 0;
	}

	// void wxGridCellEditor::base_StartingClick()
	static int _bind_base_StartingClick(lua_State *L) {
		if (!_lg_typecheck_base_StartingClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_StartingClick() function, expected prototype:\nvoid wxGridCellEditor::base_StartingClick()\nClass arguments details:\n");
		}


		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_StartingClick()");
		}
		self->wxGridCellEditor::StartingClick();

		return 0;
	}

	// void wxGridCellEditor::base_StartingKey(wxKeyEvent & event)
	static int _bind_base_StartingKey(lua_State *L) {
		if (!_lg_typecheck_base_StartingKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridCellEditor::base_StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellEditor::base_StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellEditor::base_StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridCellEditor::base_StartingKey(wxKeyEvent &)");
		}
		self->wxGridCellEditor::StartingKey(event);

		return 0;
	}


	// Operator binds:

};

wxGridCellEditor* LunaTraits< wxGridCellEditor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	// wxGridCellEditor * wxGridCellEditor::Clone() const
	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	// void wxGridCellEditor::Reset()
}

void LunaTraits< wxGridCellEditor >::_bind_dtor(wxGridCellEditor* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxGridCellEditor >::className[] = "wxGridCellEditor";
const char LunaTraits< wxGridCellEditor >::fullName[] = "wxGridCellEditor";
const char LunaTraits< wxGridCellEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellEditor >::parents[] = {0};
const int LunaTraits< wxGridCellEditor >::hash = 53399133;
const int LunaTraits< wxGridCellEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellEditor >::methods[] = {
	{"BeginEdit", &luna_wrapper_wxGridCellEditor::_bind_BeginEdit},
	{"Clone", &luna_wrapper_wxGridCellEditor::_bind_Clone},
	{"Create", &luna_wrapper_wxGridCellEditor::_bind_Create},
	{"Destroy", &luna_wrapper_wxGridCellEditor::_bind_Destroy},
	{"EndEdit", &luna_wrapper_wxGridCellEditor::_bind_EndEdit},
	{"ApplyEdit", &luna_wrapper_wxGridCellEditor::_bind_ApplyEdit},
	{"HandleReturn", &luna_wrapper_wxGridCellEditor::_bind_HandleReturn},
	{"IsCreated", &luna_wrapper_wxGridCellEditor::_bind_IsCreated},
	{"PaintBackground", &luna_wrapper_wxGridCellEditor::_bind_PaintBackground},
	{"Reset", &luna_wrapper_wxGridCellEditor::_bind_Reset},
	{"SetSize", &luna_wrapper_wxGridCellEditor::_bind_SetSize},
	{"Show", &luna_wrapper_wxGridCellEditor::_bind_Show},
	{"StartingClick", &luna_wrapper_wxGridCellEditor::_bind_StartingClick},
	{"StartingKey", &luna_wrapper_wxGridCellEditor::_bind_StartingKey},
	{"base_Destroy", &luna_wrapper_wxGridCellEditor::_bind_base_Destroy},
	{"base_HandleReturn", &luna_wrapper_wxGridCellEditor::_bind_base_HandleReturn},
	{"base_PaintBackground", &luna_wrapper_wxGridCellEditor::_bind_base_PaintBackground},
	{"base_SetSize", &luna_wrapper_wxGridCellEditor::_bind_base_SetSize},
	{"base_Show", &luna_wrapper_wxGridCellEditor::_bind_base_Show},
	{"base_StartingClick", &luna_wrapper_wxGridCellEditor::_bind_base_StartingClick},
	{"base_StartingKey", &luna_wrapper_wxGridCellEditor::_bind_base_StartingKey},
	{"dynCast", &luna_wrapper_wxGridCellEditor::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridCellEditor::_bind___eq},
	{"getTable", &luna_wrapper_wxGridCellEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellEditor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellEditor >::enumValues[] = {
	{0,0}
};


