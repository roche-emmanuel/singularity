#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBoxSizer.h>

class luna_wrapper_wxBoxSizer {
public:
	typedef Luna< wxBoxSizer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
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
		//wxBoxSizer* ptr= dynamic_cast< wxBoxSizer* >(Luna< wxObject >::check(L,1));
		wxBoxSizer* ptr= luna_caster< wxObject, wxBoxSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBoxSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
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
	// wxBoxSizer::wxBoxSizer(int orient)
	static wxBoxSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBoxSizer::wxBoxSizer(int orient) function, expected prototype:\nwxBoxSizer::wxBoxSizer(int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,1);

		return new wxBoxSizer(orient);
	}

	// wxBoxSizer::wxBoxSizer(lua_Table * data, int orient)
	static wxBoxSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBoxSizer::wxBoxSizer(lua_Table * data, int orient) function, expected prototype:\nwxBoxSizer::wxBoxSizer(lua_Table * data, int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		return new wrapper_wxBoxSizer(L,NULL, orient);
	}

	// Overload binder for wxBoxSizer::wxBoxSizer
	static wxBoxSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxBoxSizer, cannot match any of the overloads for function wxBoxSizer:\n  wxBoxSizer(int)\n  wxBoxSizer(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// wxSizerItem * wxBoxSizer::AddSpacer(int size)
	static int _bind_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxBoxSizer::AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxBoxSizer::AddSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxBoxSizer::AddSpacer(int)");
		}
		wxSizerItem * lret = self->AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxBoxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxBoxSizer::CalcMin() function, expected prototype:\nwxSize wxBoxSizer::CalcMin()\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxBoxSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxBoxSizer::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBoxSizer::GetOrientation() const function, expected prototype:\nint wxBoxSizer::GetOrientation() const\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBoxSizer::GetOrientation() const");
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBoxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBoxSizer::RecalcSizes() function, expected prototype:\nvoid wxBoxSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBoxSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// wxClassInfo * wxBoxSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBoxSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBoxSizer::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBoxSizer::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxBoxSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxBoxSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBoxSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxBoxSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBoxSizer::base_Clear(bool)");
		}
		self->wxBoxSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxBoxSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxBoxSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Detach(wxWindow *)");
		}
		bool lret = self->wxBoxSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBoxSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxBoxSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Detach(wxSizer *)");
		}
		bool lret = self->wxBoxSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBoxSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Detach(int index) function, expected prototype:\nbool wxBoxSizer::base_Detach(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Detach(int)");
		}
		bool lret = self->wxBoxSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxBoxSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxBoxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_InformFirstDirection(int, int, int)");
		}
		bool lret = self->wxBoxSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBoxSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBoxSizer::base_Layout() function, expected prototype:\nvoid wxBoxSizer::base_Layout()\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBoxSizer::base_Layout()");
		}
		self->wxBoxSizer::Layout();

		return 0;
	}

	// bool wxBoxSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxBoxSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Remove(wxSizer *)");
		}
		bool lret = self->wxBoxSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBoxSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Remove(int index) function, expected prototype:\nbool wxBoxSizer::base_Remove(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Remove(int)");
		}
		bool lret = self->wxBoxSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxBoxSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxBoxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Replace(wxWindow *, wxWindow *, bool)");
		}
		bool lret = self->wxBoxSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxBoxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Replace(wxSizer *, wxSizer *, bool)");
		}
		bool lret = self->wxBoxSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBoxSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBoxSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxBoxSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBoxSizer::base_Replace(size_t, wxSizerItem *)");
		}
		bool lret = self->wxBoxSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxBoxSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxBoxSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxBoxSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxBoxSizer::base_AddSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxBoxSizer::base_AddSpacer(int)");
		}
		wxSizerItem * lret = self->wxBoxSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxBoxSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxBoxSizer::base_CalcMin() function, expected prototype:\nwxSize wxBoxSizer::base_CalcMin()\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxBoxSizer::base_CalcMin()");
		}
		wxSize stack_lret = self->wxBoxSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxBoxSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBoxSizer::base_RecalcSizes() function, expected prototype:\nvoid wxBoxSizer::base_RecalcSizes()\nClass arguments details:\n");
		}


		wxBoxSizer* self=Luna< wxObject >::checkSubType< wxBoxSizer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBoxSizer::base_RecalcSizes()");
		}
		self->wxBoxSizer::RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxBoxSizer* LunaTraits< wxBoxSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBoxSizer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxBoxSizer >::_bind_dtor(wxBoxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxBoxSizer >::className[] = "wxBoxSizer";
const char LunaTraits< wxBoxSizer >::fullName[] = "wxBoxSizer";
const char LunaTraits< wxBoxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxBoxSizer >::parents[] = {"wx.wxSizer", 0};
const int LunaTraits< wxBoxSizer >::hash = 55858656;
const int LunaTraits< wxBoxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBoxSizer >::methods[] = {
	{"AddSpacer", &luna_wrapper_wxBoxSizer::_bind_AddSpacer},
	{"CalcMin", &luna_wrapper_wxBoxSizer::_bind_CalcMin},
	{"GetOrientation", &luna_wrapper_wxBoxSizer::_bind_GetOrientation},
	{"RecalcSizes", &luna_wrapper_wxBoxSizer::_bind_RecalcSizes},
	{"base_GetClassInfo", &luna_wrapper_wxBoxSizer::_bind_base_GetClassInfo},
	{"base_Clear", &luna_wrapper_wxBoxSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxBoxSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxBoxSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxBoxSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxBoxSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxBoxSizer::_bind_base_Replace},
	{"base_AddSpacer", &luna_wrapper_wxBoxSizer::_bind_base_AddSpacer},
	{"base_CalcMin", &luna_wrapper_wxBoxSizer::_bind_base_CalcMin},
	{"base_RecalcSizes", &luna_wrapper_wxBoxSizer::_bind_base_RecalcSizes},
	{"__eq", &luna_wrapper_wxBoxSizer::_bind___eq},
	{"getTable", &luna_wrapper_wxBoxSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBoxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxBoxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBoxSizer >::enumValues[] = {
	{0,0}
};


