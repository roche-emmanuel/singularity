#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVarScrollHelperBase.h>

class luna_wrapper_wxVarScrollHelperBase {
public:
	typedef Luna< wxVarScrollHelperBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,94004845) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxVarScrollHelperBase*)");
		}

		wxVarScrollHelperBase* rhs =(Luna< wxVarScrollHelperBase >::check(L,2));
		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
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

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVarScrollHelperBase");
		
		return luna_dynamicCast(L,converters,"wxVarScrollHelperBase",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_CalcScrolledPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcUnscrolledPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnablePhysicalScrolling(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNonOrientationTargetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientationTargetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateScrollbar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_VirtualHitTest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RefreshAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateScrollbar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxVarScrollHelperBase::CalcScrolledPosition(int coord) const
	static int _bind_CalcScrolledPosition(lua_State *L) {
		if (!_lg_typecheck_CalcScrolledPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVarScrollHelperBase::CalcScrolledPosition(int coord) const function, expected prototype:\nint wxVarScrollHelperBase::CalcScrolledPosition(int coord) const\nClass arguments details:\n");
		}

		int coord=(int)lua_tointeger(L,2);

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVarScrollHelperBase::CalcScrolledPosition(int) const");
		}
		int lret = self->CalcScrolledPosition(coord);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVarScrollHelperBase::CalcUnscrolledPosition(int coord) const
	static int _bind_CalcUnscrolledPosition(lua_State *L) {
		if (!_lg_typecheck_CalcUnscrolledPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVarScrollHelperBase::CalcUnscrolledPosition(int coord) const function, expected prototype:\nint wxVarScrollHelperBase::CalcUnscrolledPosition(int coord) const\nClass arguments details:\n");
		}

		int coord=(int)lua_tointeger(L,2);

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVarScrollHelperBase::CalcUnscrolledPosition(int) const");
		}
		int lret = self->CalcUnscrolledPosition(coord);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxVarScrollHelperBase::EnablePhysicalScrolling(bool scrolling = true)
	static int _bind_EnablePhysicalScrolling(lua_State *L) {
		if (!_lg_typecheck_EnablePhysicalScrolling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::EnablePhysicalScrolling(bool scrolling = true) function, expected prototype:\nvoid wxVarScrollHelperBase::EnablePhysicalScrolling(bool scrolling = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool scrolling=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::EnablePhysicalScrolling(bool)");
		}
		self->EnablePhysicalScrolling(scrolling);

		return 0;
	}

	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	static int _bind_GetNonOrientationTargetSize(lua_State *L) {
		if (!_lg_typecheck_GetNonOrientationTargetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVarScrollHelperBase::GetNonOrientationTargetSize() const function, expected prototype:\nint wxVarScrollHelperBase::GetNonOrientationTargetSize() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVarScrollHelperBase::GetNonOrientationTargetSize() const");
		}
		int lret = self->GetNonOrientationTargetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOrientation wxVarScrollHelperBase::GetOrientation() const function, expected prototype:\nwxOrientation wxVarScrollHelperBase::GetOrientation() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOrientation wxVarScrollHelperBase::GetOrientation() const");
		}
		wxOrientation lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	static int _bind_GetOrientationTargetSize(lua_State *L) {
		if (!_lg_typecheck_GetOrientationTargetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVarScrollHelperBase::GetOrientationTargetSize() const function, expected prototype:\nint wxVarScrollHelperBase::GetOrientationTargetSize() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVarScrollHelperBase::GetOrientationTargetSize() const");
		}
		int lret = self->GetOrientationTargetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	static int _bind_GetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_GetTargetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxVarScrollHelperBase::GetTargetWindow() const function, expected prototype:\nwxWindow * wxVarScrollHelperBase::GetTargetWindow() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxVarScrollHelperBase::GetTargetWindow() const");
		}
		wxWindow * lret = self->GetTargetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// size_t wxVarScrollHelperBase::GetVisibleBegin() const
	static int _bind_GetVisibleBegin(lua_State *L) {
		if (!_lg_typecheck_GetVisibleBegin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarScrollHelperBase::GetVisibleBegin() const function, expected prototype:\nsize_t wxVarScrollHelperBase::GetVisibleBegin() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarScrollHelperBase::GetVisibleBegin() const");
		}
		size_t lret = self->GetVisibleBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarScrollHelperBase::GetVisibleEnd() const
	static int _bind_GetVisibleEnd(lua_State *L) {
		if (!_lg_typecheck_GetVisibleEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxVarScrollHelperBase::GetVisibleEnd() const function, expected prototype:\nsize_t wxVarScrollHelperBase::GetVisibleEnd() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxVarScrollHelperBase::GetVisibleEnd() const");
		}
		size_t lret = self->GetVisibleEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVarScrollHelperBase::IsVisible(size_t unit) const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVarScrollHelperBase::IsVisible(size_t unit) const function, expected prototype:\nbool wxVarScrollHelperBase::IsVisible(size_t unit) const\nClass arguments details:\n");
		}

		size_t unit=(size_t)lua_tointeger(L,2);

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVarScrollHelperBase::IsVisible(size_t) const");
		}
		bool lret = self->IsVisible(unit);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarScrollHelperBase::RefreshAll()
	static int _bind_RefreshAll(lua_State *L) {
		if (!_lg_typecheck_RefreshAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::RefreshAll() function, expected prototype:\nvoid wxVarScrollHelperBase::RefreshAll()\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::RefreshAll()");
		}
		self->RefreshAll();

		return 0;
	}

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	static int _bind_SetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_SetTargetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target) function, expected prototype:\nvoid wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* target=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::SetTargetWindow(wxWindow *)");
		}
		self->SetTargetWindow(target);

		return 0;
	}

	// void wxVarScrollHelperBase::UpdateScrollbar()
	static int _bind_UpdateScrollbar(lua_State *L) {
		if (!_lg_typecheck_UpdateScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::UpdateScrollbar() function, expected prototype:\nvoid wxVarScrollHelperBase::UpdateScrollbar()\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::UpdateScrollbar()");
		}
		self->UpdateScrollbar();

		return 0;
	}

	// int wxVarScrollHelperBase::VirtualHitTest(int coord) const
	static int _bind_VirtualHitTest(lua_State *L) {
		if (!_lg_typecheck_VirtualHitTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVarScrollHelperBase::VirtualHitTest(int coord) const function, expected prototype:\nint wxVarScrollHelperBase::VirtualHitTest(int coord) const\nClass arguments details:\n");
		}

		int coord=(int)lua_tointeger(L,2);

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVarScrollHelperBase::VirtualHitTest(int) const");
		}
		int lret = self->VirtualHitTest(coord);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxVarScrollHelperBase::base_GetTargetWindow() const
	static int _bind_base_GetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetTargetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxVarScrollHelperBase::base_GetTargetWindow() const function, expected prototype:\nwxWindow * wxVarScrollHelperBase::base_GetTargetWindow() const\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxVarScrollHelperBase::base_GetTargetWindow() const");
		}
		wxWindow * lret = self->wxVarScrollHelperBase::GetTargetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxVarScrollHelperBase::base_RefreshAll()
	static int _bind_base_RefreshAll(lua_State *L) {
		if (!_lg_typecheck_base_RefreshAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::base_RefreshAll() function, expected prototype:\nvoid wxVarScrollHelperBase::base_RefreshAll()\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::base_RefreshAll()");
		}
		self->wxVarScrollHelperBase::RefreshAll();

		return 0;
	}

	// void wxVarScrollHelperBase::base_SetTargetWindow(wxWindow * target)
	static int _bind_base_SetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_SetTargetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::base_SetTargetWindow(wxWindow * target) function, expected prototype:\nvoid wxVarScrollHelperBase::base_SetTargetWindow(wxWindow * target)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* target=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::base_SetTargetWindow(wxWindow *)");
		}
		self->wxVarScrollHelperBase::SetTargetWindow(target);

		return 0;
	}

	// void wxVarScrollHelperBase::base_UpdateScrollbar()
	static int _bind_base_UpdateScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_UpdateScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxVarScrollHelperBase::base_UpdateScrollbar() function, expected prototype:\nvoid wxVarScrollHelperBase::base_UpdateScrollbar()\nClass arguments details:\n");
		}


		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxVarScrollHelperBase::base_UpdateScrollbar()");
		}
		self->wxVarScrollHelperBase::UpdateScrollbar();

		return 0;
	}


	// Operator binds:

};

wxVarScrollHelperBase* LunaTraits< wxVarScrollHelperBase >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxVarScrollHelperBase >::_bind_dtor(wxVarScrollHelperBase* obj) {
	delete obj;
}

const char LunaTraits< wxVarScrollHelperBase >::className[] = "wxVarScrollHelperBase";
const char LunaTraits< wxVarScrollHelperBase >::fullName[] = "wxVarScrollHelperBase";
const char LunaTraits< wxVarScrollHelperBase >::moduleName[] = "wx";
const char* LunaTraits< wxVarScrollHelperBase >::parents[] = {0};
const int LunaTraits< wxVarScrollHelperBase >::hash = 94004845;
const int LunaTraits< wxVarScrollHelperBase >::uniqueIDs[] = {94004845,0};

luna_RegType LunaTraits< wxVarScrollHelperBase >::methods[] = {
	{"CalcScrolledPosition", &luna_wrapper_wxVarScrollHelperBase::_bind_CalcScrolledPosition},
	{"CalcUnscrolledPosition", &luna_wrapper_wxVarScrollHelperBase::_bind_CalcUnscrolledPosition},
	{"EnablePhysicalScrolling", &luna_wrapper_wxVarScrollHelperBase::_bind_EnablePhysicalScrolling},
	{"GetNonOrientationTargetSize", &luna_wrapper_wxVarScrollHelperBase::_bind_GetNonOrientationTargetSize},
	{"GetOrientation", &luna_wrapper_wxVarScrollHelperBase::_bind_GetOrientation},
	{"GetOrientationTargetSize", &luna_wrapper_wxVarScrollHelperBase::_bind_GetOrientationTargetSize},
	{"GetTargetWindow", &luna_wrapper_wxVarScrollHelperBase::_bind_GetTargetWindow},
	{"GetVisibleBegin", &luna_wrapper_wxVarScrollHelperBase::_bind_GetVisibleBegin},
	{"GetVisibleEnd", &luna_wrapper_wxVarScrollHelperBase::_bind_GetVisibleEnd},
	{"IsVisible", &luna_wrapper_wxVarScrollHelperBase::_bind_IsVisible},
	{"RefreshAll", &luna_wrapper_wxVarScrollHelperBase::_bind_RefreshAll},
	{"SetTargetWindow", &luna_wrapper_wxVarScrollHelperBase::_bind_SetTargetWindow},
	{"UpdateScrollbar", &luna_wrapper_wxVarScrollHelperBase::_bind_UpdateScrollbar},
	{"VirtualHitTest", &luna_wrapper_wxVarScrollHelperBase::_bind_VirtualHitTest},
	{"base_GetTargetWindow", &luna_wrapper_wxVarScrollHelperBase::_bind_base_GetTargetWindow},
	{"base_RefreshAll", &luna_wrapper_wxVarScrollHelperBase::_bind_base_RefreshAll},
	{"base_SetTargetWindow", &luna_wrapper_wxVarScrollHelperBase::_bind_base_SetTargetWindow},
	{"base_UpdateScrollbar", &luna_wrapper_wxVarScrollHelperBase::_bind_base_UpdateScrollbar},
	{"dynCast", &luna_wrapper_wxVarScrollHelperBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxVarScrollHelperBase::_bind___eq},
	{"getTable", &luna_wrapper_wxVarScrollHelperBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVarScrollHelperBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVarScrollHelperBase >::enumValues[] = {
	{0,0}
};


