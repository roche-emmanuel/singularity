#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStaticBoxSizer.h>

class luna_wrapper_wxStaticBoxSizer {
public:
	typedef Luna< wxStaticBoxSizer > luna_t;

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
		//wxStaticBoxSizer* ptr= dynamic_cast< wxStaticBoxSizer* >(Luna< wxObject >::check(L,1));
		wxStaticBoxSizer* ptr= luna_caster< wxObject, wxStaticBoxSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStaticBoxSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxStaticBox* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxStaticBox* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetStaticBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient)
	static wxStaticBoxSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(wxStaticBox * box, int orient)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxStaticBox* box=(Luna< wxObject >::checkSubType< wxStaticBox >(L,1));
		int orient=(int)lua_tointeger(L,2);

		return new wxStaticBoxSizer(box, orient);
	}

	// wxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString)
	static wxStaticBoxSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(int orient, wxWindow * parent, const wxString & label = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int orient=(int)lua_tointeger(L,1);
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		return new wxStaticBoxSizer(orient, parent, label);
	}

	// wxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, wxStaticBox * box, int orient)
	static wxStaticBoxSizer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, wxStaticBox * box, int orient) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, wxStaticBox * box, int orient)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxStaticBox* box=(Luna< wxObject >::checkSubType< wxStaticBox >(L,2));
		int orient=(int)lua_tointeger(L,3);

		return new wrapper_wxStaticBoxSizer(L,NULL, box, orient);
	}

	// wxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, int orient, wxWindow * parent, const wxString & label = wxEmptyString)
	static wxStaticBoxSizer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, int orient, wxWindow * parent, const wxString & label = wxEmptyString) function, expected prototype:\nwxStaticBoxSizer::wxStaticBoxSizer(lua_Table * data, int orient, wxWindow * parent, const wxString & label = wxEmptyString)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int orient=(int)lua_tointeger(L,2);
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString label(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_wxStaticBoxSizer(L,NULL, orient, parent, label);
	}

	// Overload binder for wxStaticBoxSizer::wxStaticBoxSizer
	static wxStaticBoxSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxStaticBoxSizer, cannot match any of the overloads for function wxStaticBoxSizer:\n  wxStaticBoxSizer(wxStaticBox *, int)\n  wxStaticBoxSizer(int, wxWindow *, const wxString &)\n  wxStaticBoxSizer(lua_Table *, wxStaticBox *, int)\n  wxStaticBoxSizer(lua_Table *, int, wxWindow *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxStaticBox * wxStaticBoxSizer::GetStaticBox() const
	static int _bind_GetStaticBox(lua_State *L) {
		if (!_lg_typecheck_GetStaticBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStaticBox * wxStaticBoxSizer::GetStaticBox() const function, expected prototype:\nwxStaticBox * wxStaticBoxSizer::GetStaticBox() const\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStaticBox * wxStaticBoxSizer::GetStaticBox() const");
		}
		wxStaticBox * lret = self->GetStaticBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStaticBox >::push(L,lret,false);

		return 1;
	}

	// wxSize wxStaticBoxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxStaticBoxSizer::CalcMin() function, expected prototype:\nwxSize wxStaticBoxSizer::CalcMin()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxStaticBoxSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxStaticBoxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBoxSizer::RecalcSizes() function, expected prototype:\nvoid wxStaticBoxSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBoxSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// wxClassInfo * wxStaticBoxSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxStaticBoxSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxStaticBoxSizer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxStaticBoxSizer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxStaticBoxSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxStaticBoxSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBoxSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxStaticBoxSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBoxSizer::base_Clear(bool)");
		}
		self->wxStaticBoxSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxStaticBoxSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxStaticBoxSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Detach(wxWindow *)");
		}
		bool lret = self->wxStaticBoxSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticBoxSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxStaticBoxSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Detach(wxSizer *)");
		}
		bool lret = self->wxStaticBoxSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticBoxSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Detach(int index) function, expected prototype:\nbool wxStaticBoxSizer::base_Detach(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Detach(int)");
		}
		bool lret = self->wxStaticBoxSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxStaticBoxSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxStaticBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxStaticBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxStaticBoxSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStaticBoxSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBoxSizer::base_Layout() function, expected prototype:\nvoid wxStaticBoxSizer::base_Layout()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBoxSizer::base_Layout()");
		}
		self->wxStaticBoxSizer::Layout();

		return 0;
	}

	// bool wxStaticBoxSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxStaticBoxSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Remove(wxSizer *)");
		}
		bool lret = self->wxStaticBoxSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticBoxSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Remove(int index) function, expected prototype:\nbool wxStaticBoxSizer::base_Remove(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Remove(int)");
		}
		bool lret = self->wxStaticBoxSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxStaticBoxSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxStaticBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxStaticBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Replace(wxWindow *, wxWindow *, bool)");
		}
		bool lret = self->wxStaticBoxSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxStaticBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Replace(wxSizer *, wxSizer *, bool)");
		}
		bool lret = self->wxStaticBoxSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStaticBoxSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStaticBoxSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxStaticBoxSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStaticBoxSizer::base_Replace(size_t, wxSizerItem *)");
		}
		bool lret = self->wxStaticBoxSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxStaticBoxSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxStaticBoxSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxStaticBoxSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxStaticBoxSizer::base_AddSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxStaticBoxSizer::base_AddSpacer(int)");
		}
		wxSizerItem * lret = self->wxStaticBoxSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxStaticBoxSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxStaticBoxSizer::base_CalcMin() function, expected prototype:\nwxSize wxStaticBoxSizer::base_CalcMin()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxStaticBoxSizer::base_CalcMin()");
		}
		wxSize stack_lret = self->wxStaticBoxSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxStaticBoxSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStaticBoxSizer::base_RecalcSizes() function, expected prototype:\nvoid wxStaticBoxSizer::base_RecalcSizes()\nClass arguments details:\n");
		}


		wxStaticBoxSizer* self=Luna< wxObject >::checkSubType< wxStaticBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStaticBoxSizer::base_RecalcSizes()");
		}
		self->wxStaticBoxSizer::RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxStaticBoxSizer* LunaTraits< wxStaticBoxSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStaticBoxSizer::_bind_ctor(L);
}

void LunaTraits< wxStaticBoxSizer >::_bind_dtor(wxStaticBoxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxStaticBoxSizer >::className[] = "wxStaticBoxSizer";
const char LunaTraits< wxStaticBoxSizer >::fullName[] = "wxStaticBoxSizer";
const char LunaTraits< wxStaticBoxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxStaticBoxSizer >::parents[] = {"wx.wxBoxSizer", 0};
const int LunaTraits< wxStaticBoxSizer >::hash = 60677386;
const int LunaTraits< wxStaticBoxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStaticBoxSizer >::methods[] = {
	{"GetStaticBox", &luna_wrapper_wxStaticBoxSizer::_bind_GetStaticBox},
	{"CalcMin", &luna_wrapper_wxStaticBoxSizer::_bind_CalcMin},
	{"RecalcSizes", &luna_wrapper_wxStaticBoxSizer::_bind_RecalcSizes},
	{"base_GetClassInfo", &luna_wrapper_wxStaticBoxSizer::_bind_base_GetClassInfo},
	{"base_Clear", &luna_wrapper_wxStaticBoxSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxStaticBoxSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxStaticBoxSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxStaticBoxSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxStaticBoxSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxStaticBoxSizer::_bind_base_Replace},
	{"base_AddSpacer", &luna_wrapper_wxStaticBoxSizer::_bind_base_AddSpacer},
	{"base_CalcMin", &luna_wrapper_wxStaticBoxSizer::_bind_base_CalcMin},
	{"base_RecalcSizes", &luna_wrapper_wxStaticBoxSizer::_bind_base_RecalcSizes},
	{"__eq", &luna_wrapper_wxStaticBoxSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStaticBoxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxStaticBoxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStaticBoxSizer >::enumValues[] = {
	{0,0}
};


