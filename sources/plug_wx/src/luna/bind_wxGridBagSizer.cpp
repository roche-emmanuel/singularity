#include <plug_common.h>

class luna_wrapper_wxGridBagSizer {
public:
	typedef Luna< wxGridBagSizer > luna_t;

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
		wxGridBagSizer* ptr= dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridBagSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3425779) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,97553085) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CheckForIntersection_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckForIntersection_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemAtPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemAtPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemWithData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEmptyCellSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEmptyCellSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0)
	static wxGridBagSizer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0) function, expected prototype:\nwxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int vgap=luatop>0 ? (int)lua_tointeger(L,1) : 0;
		int hgap=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new wxGridBagSizer(vgap, hgap);
	}


	// Function binds:
	// wxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(window, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(sizer, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>4 ? (Luna< wxGBSpan >::check(L,5)) : NULL;
		if( luatop>4 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>4 ? *span_ptr : wxDefaultSpan;
		int flag=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		int border=luatop>6 ? (int)lua_tointeger(L,7) : 0;
		wxObject* userData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(width, height, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item)
	static int _bind_Add_overload_4(lua_State *L) {
		if (!_lg_typecheck_Add_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxGBSizerItem* item=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem *)");
		}
		wxSizerItem * lret = self->Add(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxGridBagSizer::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);
		if (_lg_typecheck_Add_overload_4(L)) return _bind_Add_overload_4(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(wxGBSizerItem *)\n");
		return 0;
	}

	// wxSize wxGridBagSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::CalcMin() function, expected prototype:\nwxSize wxGridBagSizer::CalcMin()\nClass arguments details:\n");
		}


		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL)
	static int _bind_CheckForIntersection_overload_1(lua_State *L) {
		if (!_lg_typecheck_CheckForIntersection_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL) function, expected prototype:\nbool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxGBSizerItem* item=dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,2));
		wxGBSizerItem* excludeItem=luatop>2 ? dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,3)) : (wxGBSizerItem*)NULL;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem *, wxGBSizerItem *)");
		}
		bool lret = self->CheckForIntersection(item, excludeItem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL)
	static int _bind_CheckForIntersection_overload_2(lua_State *L) {
		if (!_lg_typecheck_CheckForIntersection_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL) function, expected prototype:\nbool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL)\nClass arguments details:\narg 1 ID = 3425779\narg 2 ID = 97553085\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::CheckForIntersection function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::CheckForIntersection function");
		}
		const wxGBSpan & span=*span_ptr;
		wxGBSizerItem* excludeItem=luatop>3 ? dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,4)) : (wxGBSizerItem*)NULL;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::CheckForIntersection(const wxGBPosition &, const wxGBSpan &, wxGBSizerItem *)");
		}
		bool lret = self->CheckForIntersection(pos, span, excludeItem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::CheckForIntersection
	static int _bind_CheckForIntersection(lua_State *L) {
		if (_lg_typecheck_CheckForIntersection_overload_1(L)) return _bind_CheckForIntersection_overload_1(L);
		if (_lg_typecheck_CheckForIntersection_overload_2(L)) return _bind_CheckForIntersection_overload_2(L);

		luaL_error(L, "error in function CheckForIntersection, cannot match any of the overloads for function CheckForIntersection:\n  CheckForIntersection(wxGBSizerItem *, wxGBSizerItem *)\n  CheckForIntersection(const wxGBPosition &, const wxGBSpan &, wxGBSizerItem *)\n");
		return 0;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window)
	static int _bind_FindItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow *)");
		}
		wxGBSizerItem * lret = self->FindItem(window);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer)
	static int _bind_FindItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer *)");
		}
		wxGBSizerItem * lret = self->FindItem(sizer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxGridBagSizer::FindItem
	static int _bind_FindItem(lua_State *L) {
		if (_lg_typecheck_FindItem_overload_1(L)) return _bind_FindItem_overload_1(L);
		if (_lg_typecheck_FindItem_overload_2(L)) return _bind_FindItem_overload_2(L);

		luaL_error(L, "error in function FindItem, cannot match any of the overloads for function FindItem:\n  FindItem(wxWindow *)\n  FindItem(wxSizer *)\n");
		return 0;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt)
	static int _bind_FindItemAtPoint(lua_State *L) {
		if (!_lg_typecheck_FindItemAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxGridBagSizer::FindItemAtPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint &)");
		}
		wxGBSizerItem * lret = self->FindItemAtPoint(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos)
	static int _bind_FindItemAtPosition(lua_State *L) {
		if (!_lg_typecheck_FindItemAtPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 3425779\n");
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::FindItemAtPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition &)");
		}
		wxGBSizerItem * lret = self->FindItemAtPosition(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData)
	static int _bind_FindItemWithData(lua_State *L) {
		if (!_lg_typecheck_FindItemWithData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxObject* userData=(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject *)");
		}
		wxGBSizerItem * lret = self->FindItemWithData(userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxGridBagSizer::GetCellSize(int row, int col) const
	static int _bind_GetCellSize(lua_State *L) {
		if (!_lg_typecheck_GetCellSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::GetCellSize(int row, int col) const function, expected prototype:\nwxSize wxGridBagSizer::GetCellSize(int row, int col) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::GetCellSize(int, int) const");
		}
		wxSize stack_lret = self->GetCellSize(row, col);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGridBagSizer::GetEmptyCellSize() const
	static int _bind_GetEmptyCellSize(lua_State *L) {
		if (!_lg_typecheck_GetEmptyCellSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::GetEmptyCellSize() const function, expected prototype:\nwxSize wxGridBagSizer::GetEmptyCellSize() const\nClass arguments details:\n");
		}


		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::GetEmptyCellSize() const");
		}
		wxSize stack_lret = self->GetEmptyCellSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window)
	static int _bind_GetItemPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow *)");
		}
		wxGBPosition stack_lret = self->GetItemPosition(window);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer)
	static int _bind_GetItemPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer *)");
		}
		wxGBPosition stack_lret = self->GetItemPosition(sizer);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(size_t index)
	static int _bind_GetItemPosition_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(size_t index) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(size_t)");
		}
		wxGBPosition stack_lret = self->GetItemPosition(index);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGridBagSizer::GetItemPosition
	static int _bind_GetItemPosition(lua_State *L) {
		if (_lg_typecheck_GetItemPosition_overload_1(L)) return _bind_GetItemPosition_overload_1(L);
		if (_lg_typecheck_GetItemPosition_overload_2(L)) return _bind_GetItemPosition_overload_2(L);
		if (_lg_typecheck_GetItemPosition_overload_3(L)) return _bind_GetItemPosition_overload_3(L);

		luaL_error(L, "error in function GetItemPosition, cannot match any of the overloads for function GetItemPosition:\n  GetItemPosition(wxWindow *)\n  GetItemPosition(wxSizer *)\n  GetItemPosition(size_t)\n");
		return 0;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window)
	static int _bind_GetItemSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow *)");
		}
		wxGBSpan stack_lret = self->GetItemSpan(window);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer)
	static int _bind_GetItemSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer *)");
		}
		wxGBSpan stack_lret = self->GetItemSpan(sizer);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(size_t index)
	static int _bind_GetItemSpan_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(size_t index) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(size_t)");
		}
		wxGBSpan stack_lret = self->GetItemSpan(index);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGridBagSizer::GetItemSpan
	static int _bind_GetItemSpan(lua_State *L) {
		if (_lg_typecheck_GetItemSpan_overload_1(L)) return _bind_GetItemSpan_overload_1(L);
		if (_lg_typecheck_GetItemSpan_overload_2(L)) return _bind_GetItemSpan_overload_2(L);
		if (_lg_typecheck_GetItemSpan_overload_3(L)) return _bind_GetItemSpan_overload_3(L);

		luaL_error(L, "error in function GetItemSpan, cannot match any of the overloads for function GetItemSpan:\n  GetItemSpan(wxWindow *)\n  GetItemSpan(wxSizer *)\n  GetItemSpan(size_t)\n");
		return 0;
	}

	// void wxGridBagSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::RecalcSizes() function, expected prototype:\nvoid wxGridBagSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// void wxGridBagSizer::SetEmptyCellSize(const wxSize & sz)
	static int _bind_SetEmptyCellSize(lua_State *L) {
		if (!_lg_typecheck_SetEmptyCellSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::SetEmptyCellSize(const wxSize & sz) function, expected prototype:\nvoid wxGridBagSizer::SetEmptyCellSize(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxGridBagSizer::SetEmptyCellSize function");
		}
		const wxSize & sz=*sz_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::SetEmptyCellSize(const wxSize &)");
		}
		self->SetEmptyCellSize(sz);

		return 0;
	}

	// bool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(wxWindow *, const wxGBPosition &)");
		}
		bool lret = self->SetItemPosition(window, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(wxSizer *, const wxGBPosition &)");
		}
		bool lret = self->SetItemPosition(sizer, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos)\nClass arguments details:\narg 2 ID = 3425779\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(size_t, const wxGBPosition &)");
		}
		bool lret = self->SetItemPosition(index, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::SetItemPosition
	static int _bind_SetItemPosition(lua_State *L) {
		if (_lg_typecheck_SetItemPosition_overload_1(L)) return _bind_SetItemPosition_overload_1(L);
		if (_lg_typecheck_SetItemPosition_overload_2(L)) return _bind_SetItemPosition_overload_2(L);
		if (_lg_typecheck_SetItemPosition_overload_3(L)) return _bind_SetItemPosition_overload_3(L);

		luaL_error(L, "error in function SetItemPosition, cannot match any of the overloads for function SetItemPosition:\n  SetItemPosition(wxWindow *, const wxGBPosition &)\n  SetItemPosition(wxSizer *, const wxGBPosition &)\n  SetItemPosition(size_t, const wxGBPosition &)\n");
		return 0;
	}

	// bool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 97553085\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(wxWindow *, const wxGBSpan &)");
		}
		bool lret = self->SetItemSpan(window, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 97553085\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(wxSizer *, const wxGBSpan &)");
		}
		bool lret = self->SetItemSpan(sizer, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span)\nClass arguments details:\narg 2 ID = 97553085\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(size_t, const wxGBSpan &)");
		}
		bool lret = self->SetItemSpan(index, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::SetItemSpan
	static int _bind_SetItemSpan(lua_State *L) {
		if (_lg_typecheck_SetItemSpan_overload_1(L)) return _bind_SetItemSpan_overload_1(L);
		if (_lg_typecheck_SetItemSpan_overload_2(L)) return _bind_SetItemSpan_overload_2(L);
		if (_lg_typecheck_SetItemSpan_overload_3(L)) return _bind_SetItemSpan_overload_3(L);

		luaL_error(L, "error in function SetItemSpan, cannot match any of the overloads for function SetItemSpan:\n  SetItemSpan(wxWindow *, const wxGBSpan &)\n  SetItemSpan(wxSizer *, const wxGBSpan &)\n  SetItemSpan(size_t, const wxGBSpan &)\n");
		return 0;
	}


	// Operator binds:

};

wxGridBagSizer* LunaTraits< wxGridBagSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridBagSizer::_bind_ctor(L);
}

void LunaTraits< wxGridBagSizer >::_bind_dtor(wxGridBagSizer* obj) {
	delete obj;
}

const char LunaTraits< wxGridBagSizer >::className[] = "wxGridBagSizer";
const char LunaTraits< wxGridBagSizer >::fullName[] = "wxGridBagSizer";
const char LunaTraits< wxGridBagSizer >::moduleName[] = "wx";
const char* LunaTraits< wxGridBagSizer >::parents[] = {"wx.wxFlexGridSizer", 0};
const int LunaTraits< wxGridBagSizer >::hash = 98096967;
const int LunaTraits< wxGridBagSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridBagSizer >::methods[] = {
	{"Add", &luna_wrapper_wxGridBagSizer::_bind_Add},
	{"CalcMin", &luna_wrapper_wxGridBagSizer::_bind_CalcMin},
	{"CheckForIntersection", &luna_wrapper_wxGridBagSizer::_bind_CheckForIntersection},
	{"FindItem", &luna_wrapper_wxGridBagSizer::_bind_FindItem},
	{"FindItemAtPoint", &luna_wrapper_wxGridBagSizer::_bind_FindItemAtPoint},
	{"FindItemAtPosition", &luna_wrapper_wxGridBagSizer::_bind_FindItemAtPosition},
	{"FindItemWithData", &luna_wrapper_wxGridBagSizer::_bind_FindItemWithData},
	{"GetCellSize", &luna_wrapper_wxGridBagSizer::_bind_GetCellSize},
	{"GetEmptyCellSize", &luna_wrapper_wxGridBagSizer::_bind_GetEmptyCellSize},
	{"GetItemPosition", &luna_wrapper_wxGridBagSizer::_bind_GetItemPosition},
	{"GetItemSpan", &luna_wrapper_wxGridBagSizer::_bind_GetItemSpan},
	{"RecalcSizes", &luna_wrapper_wxGridBagSizer::_bind_RecalcSizes},
	{"SetEmptyCellSize", &luna_wrapper_wxGridBagSizer::_bind_SetEmptyCellSize},
	{"SetItemPosition", &luna_wrapper_wxGridBagSizer::_bind_SetItemPosition},
	{"SetItemSpan", &luna_wrapper_wxGridBagSizer::_bind_SetItemSpan},
	{"__eq", &luna_wrapper_wxGridBagSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridBagSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridBagSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridBagSizer >::enumValues[] = {
	{0,0}
};


