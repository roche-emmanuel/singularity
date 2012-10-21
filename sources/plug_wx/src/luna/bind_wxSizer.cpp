#include <plug_common.h>

class luna_wrapper_wxSizer {
public:
	typedef Luna< wxSizer > luna_t;

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
		wxSizer* ptr= dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeFittingClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeFittingWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContainingWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemById(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,8)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertSpacer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!dynamic_cast< wxSizerFlags* >(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !dynamic_cast< wxObject* >(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVirtualSizeHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Add function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxWindow *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Add(window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxWindow *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Add function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizer *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Add(sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_4(lua_State *L) {
		if (!_lg_typecheck_Add_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizer *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_5(lua_State *L) {
		if (!_lg_typecheck_Add_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(int, int, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Add(width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizerItem * item)
	static int _bind_Add_overload_6(lua_State *L) {
		if (!_lg_typecheck_Add_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizerItem* item=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizerItem *)");
		}
		wxSizerItem * lret = self->Add(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);
		if (_lg_typecheck_Add_overload_4(L)) return _bind_Add_overload_4(L);
		if (_lg_typecheck_Add_overload_5(L)) return _bind_Add_overload_5(L);
		if (_lg_typecheck_Add_overload_6(L)) return _bind_Add_overload_6(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(wxWindow *, const wxSizerFlags &)\n  Add(wxWindow *, int, int, int, wxObject *)\n  Add(wxSizer *, const wxSizerFlags &)\n  Add(wxSizer *, int, int, int, wxObject *)\n  Add(int, int, int, int, int, wxObject *)\n  Add(wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::AddSpacer(int size)
	static int _bind_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_AddSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxSizer::AddSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::AddSpacer(int)");
		}
		wxSizerItem * lret = self->AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::AddStretchSpacer(int prop = 1)
	static int _bind_AddStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_AddStretchSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::AddStretchSpacer(int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::AddStretchSpacer(int prop = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int prop=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::AddStretchSpacer(int)");
		}
		wxSizerItem * lret = self->AddStretchSpacer(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::CalcMin() function, expected prototype:\nwxSize wxSizer::CalcMin()\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizer::Clear(bool delete_windows = false)
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::Clear(bool delete_windows = false) function, expected prototype:\nvoid wxSizer::Clear(bool delete_windows = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::Clear(bool)");
		}
		self->Clear(delete_windows);

		return 0;
	}

	// wxSize wxSizer::ComputeFittingClientSize(wxWindow * window)
	static int _bind_ComputeFittingClientSize(lua_State *L) {
		if (!_lg_typecheck_ComputeFittingClientSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::ComputeFittingClientSize(wxWindow * window) function, expected prototype:\nwxSize wxSizer::ComputeFittingClientSize(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::ComputeFittingClientSize(wxWindow *)");
		}
		wxSize stack_lret = self->ComputeFittingClientSize(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizer::ComputeFittingWindowSize(wxWindow * window)
	static int _bind_ComputeFittingWindowSize(lua_State *L) {
		if (!_lg_typecheck_ComputeFittingWindowSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::ComputeFittingWindowSize(wxWindow * window) function, expected prototype:\nwxSize wxSizer::ComputeFittingWindowSize(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::ComputeFittingWindowSize(wxWindow *)");
		}
		wxSize stack_lret = self->ComputeFittingWindowSize(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSizer::Detach(wxWindow * window)
	static int _bind_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(wxWindow * window) function, expected prototype:\nbool wxSizer::Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(wxWindow *)");
		}
		bool lret = self->Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Detach(wxSizer * sizer)
	static int _bind_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(wxSizer * sizer) function, expected prototype:\nbool wxSizer::Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(wxSizer *)");
		}
		bool lret = self->Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Detach(int index)
	static int _bind_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(int index) function, expected prototype:\nbool wxSizer::Detach(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(int)");
		}
		bool lret = self->Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Detach
	static int _bind_Detach(lua_State *L) {
		if (_lg_typecheck_Detach_overload_1(L)) return _bind_Detach_overload_1(L);
		if (_lg_typecheck_Detach_overload_2(L)) return _bind_Detach_overload_2(L);
		if (_lg_typecheck_Detach_overload_3(L)) return _bind_Detach_overload_3(L);

		luaL_error(L, "error in function Detach, cannot match any of the overloads for function Detach:\n  Detach(wxWindow *)\n  Detach(wxSizer *)\n  Detach(int)\n");
		return 0;
	}

	// wxSize wxSizer::Fit(wxWindow * window)
	static int _bind_Fit(lua_State *L) {
		if (!_lg_typecheck_Fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::Fit(wxWindow * window) function, expected prototype:\nwxSize wxSizer::Fit(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::Fit(wxWindow *)");
		}
		wxSize stack_lret = self->Fit(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizer::FitInside(wxWindow * window)
	static int _bind_FitInside(lua_State *L) {
		if (!_lg_typecheck_FitInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::FitInside(wxWindow * window) function, expected prototype:\nvoid wxSizer::FitInside(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::FitInside(wxWindow *)");
		}
		self->FitInside(window);

		return 0;
	}

	// bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::InformFirstDirection(int, int, int)");
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSizerItemList & wxSizer::GetChildren()
	static int _bind_GetChildren_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItemList & wxSizer::GetChildren() function, expected prototype:\nwxSizerItemList & wxSizer::GetChildren()\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItemList & wxSizer::GetChildren()");
		}
		wxSizerItemList & lret = self->GetChildren();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxSizerItemList &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// const wxSizerItemList & wxSizer::GetChildren() const
	static int _bind_GetChildren_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxSizerItemList & wxSizer::GetChildren() const function, expected prototype:\nconst wxSizerItemList & wxSizer::GetChildren() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxSizerItemList & wxSizer::GetChildren() const");
		}
		const wxSizerItemList & lret = self->GetChildren();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const wxSizerItemList &'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// Overload binder for wxSizer::GetChildren
	static int _bind_GetChildren(lua_State *L) {
		if (_lg_typecheck_GetChildren_overload_1(L)) return _bind_GetChildren_overload_1(L);
		if (_lg_typecheck_GetChildren_overload_2(L)) return _bind_GetChildren_overload_2(L);

		luaL_error(L, "error in function GetChildren, cannot match any of the overloads for function GetChildren:\n  GetChildren()\n  GetChildren()\n");
		return 0;
	}

	// wxWindow * wxSizer::GetContainingWindow() const
	static int _bind_GetContainingWindow(lua_State *L) {
		if (!_lg_typecheck_GetContainingWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxSizer::GetContainingWindow() const function, expected prototype:\nwxWindow * wxSizer::GetContainingWindow() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxSizer::GetContainingWindow() const");
		}
		wxWindow * lret = self->GetContainingWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// size_t wxSizer::GetItemCount() const
	static int _bind_GetItemCount(lua_State *L) {
		if (!_lg_typecheck_GetItemCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxSizer::GetItemCount() const function, expected prototype:\nsize_t wxSizer::GetItemCount() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxSizer::GetItemCount() const");
		}
		size_t lret = self->GetItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false)
	static int _bind_GetItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(wxWindow *, bool)");
		}
		wxSizerItem * lret = self->GetItem(window, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false)
	static int _bind_GetItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(wxSizer *, bool)");
		}
		wxSizerItem * lret = self->GetItem(sizer, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(size_t index)
	static int _bind_GetItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(size_t index) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(size_t)");
		}
		wxSizerItem * lret = self->GetItem(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::GetItem
	static int _bind_GetItem(lua_State *L) {
		if (_lg_typecheck_GetItem_overload_1(L)) return _bind_GetItem_overload_1(L);
		if (_lg_typecheck_GetItem_overload_2(L)) return _bind_GetItem_overload_2(L);
		if (_lg_typecheck_GetItem_overload_3(L)) return _bind_GetItem_overload_3(L);

		luaL_error(L, "error in function GetItem, cannot match any of the overloads for function GetItem:\n  GetItem(wxWindow *, bool)\n  GetItem(wxSizer *, bool)\n  GetItem(size_t)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::GetItemById(int id, bool recursive = false)
	static int _bind_GetItemById(lua_State *L) {
		if (!_lg_typecheck_GetItemById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItemById(int id, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItemById(int id, bool recursive = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItemById(int, bool)");
		}
		wxSizerItem * lret = self->GetItemById(id, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizer::GetMinSize()
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::GetMinSize() function, expected prototype:\nwxSize wxSizer::GetMinSize()\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::GetMinSize()");
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxSizer::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxSizer::GetPosition() const function, expected prototype:\nwxPoint wxSizer::GetPosition() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxSizer::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizer::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::GetSize() const function, expected prototype:\nwxSize wxSizer::GetSize() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxSizer::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSizer::Hide(wxWindow * window, bool recursive = false)
	static int _bind_Hide_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(wxWindow * window, bool recursive = false) function, expected prototype:\nbool wxSizer::Hide(wxWindow * window, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(wxWindow *, bool)");
		}
		bool lret = self->Hide(window, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Hide(wxSizer * sizer, bool recursive = false)
	static int _bind_Hide_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(wxSizer * sizer, bool recursive = false) function, expected prototype:\nbool wxSizer::Hide(wxSizer * sizer, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(wxSizer *, bool)");
		}
		bool lret = self->Hide(sizer, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Hide(size_t index)
	static int _bind_Hide_overload_3(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(size_t index) function, expected prototype:\nbool wxSizer::Hide(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(size_t)");
		}
		bool lret = self->Hide(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Hide
	static int _bind_Hide(lua_State *L) {
		if (_lg_typecheck_Hide_overload_1(L)) return _bind_Hide_overload_1(L);
		if (_lg_typecheck_Hide_overload_2(L)) return _bind_Hide_overload_2(L);
		if (_lg_typecheck_Hide_overload_3(L)) return _bind_Hide_overload_3(L);

		luaL_error(L, "error in function Hide, cannot match any of the overloads for function Hide:\n  Hide(wxWindow *, bool)\n  Hide(wxSizer *, bool)\n  Hide(size_t)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,4));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Insert function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxWindow *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Insert(index, window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxWindow *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Insert(index, window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Insert_overload_3(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,4));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Insert function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizer *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Insert(index, sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_4(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3));
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizer *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Insert(index, sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_5(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 7 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);
		int proportion=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int flag=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		int border=luatop>6 ? (int)lua_tointeger(L,7) : 0;
		wxObject* userData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, int, int, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Insert(index, width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item)
	static int _bind_Insert_overload_6(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* item=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,3));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizerItem *)");
		}
		wxSizerItem * lret = self->Insert(index, item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Insert
	static int _bind_Insert(lua_State *L) {
		if (_lg_typecheck_Insert_overload_1(L)) return _bind_Insert_overload_1(L);
		if (_lg_typecheck_Insert_overload_2(L)) return _bind_Insert_overload_2(L);
		if (_lg_typecheck_Insert_overload_3(L)) return _bind_Insert_overload_3(L);
		if (_lg_typecheck_Insert_overload_4(L)) return _bind_Insert_overload_4(L);
		if (_lg_typecheck_Insert_overload_5(L)) return _bind_Insert_overload_5(L);
		if (_lg_typecheck_Insert_overload_6(L)) return _bind_Insert_overload_6(L);

		luaL_error(L, "error in function Insert, cannot match any of the overloads for function Insert:\n  Insert(size_t, wxWindow *, const wxSizerFlags &)\n  Insert(size_t, wxWindow *, int, int, int, wxObject *)\n  Insert(size_t, wxSizer *, const wxSizerFlags &)\n  Insert(size_t, wxSizer *, int, int, int, wxObject *)\n  Insert(size_t, int, int, int, int, int, wxObject *)\n  Insert(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::InsertSpacer(size_t index, int size)
	static int _bind_InsertSpacer(lua_State *L) {
		if (!_lg_typecheck_InsertSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::InsertSpacer(size_t index, int size) function, expected prototype:\nwxSizerItem * wxSizer::InsertSpacer(size_t index, int size)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::InsertSpacer(size_t, int)");
		}
		wxSizerItem * lret = self->InsertSpacer(index, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1)
	static int _bind_InsertStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_InsertStretchSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		int prop=luatop>2 ? (int)lua_tointeger(L,3) : 1;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::InsertStretchSpacer(size_t, int)");
		}
		wxSizerItem * lret = self->InsertStretchSpacer(index, prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// bool wxSizer::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsEmpty() const function, expected prototype:\nbool wxSizer::IsEmpty() const\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(wxWindow * window) const
	static int _bind_IsShown_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(wxWindow * window) const function, expected prototype:\nbool wxSizer::IsShown(wxWindow * window) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(wxWindow *) const");
		}
		bool lret = self->IsShown(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(wxSizer * sizer) const
	static int _bind_IsShown_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(wxSizer * sizer) const function, expected prototype:\nbool wxSizer::IsShown(wxSizer * sizer) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(wxSizer *) const");
		}
		bool lret = self->IsShown(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(size_t index) const
	static int _bind_IsShown_overload_3(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(size_t index) const function, expected prototype:\nbool wxSizer::IsShown(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(size_t) const");
		}
		bool lret = self->IsShown(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::IsShown
	static int _bind_IsShown(lua_State *L) {
		if (_lg_typecheck_IsShown_overload_1(L)) return _bind_IsShown_overload_1(L);
		if (_lg_typecheck_IsShown_overload_2(L)) return _bind_IsShown_overload_2(L);
		if (_lg_typecheck_IsShown_overload_3(L)) return _bind_IsShown_overload_3(L);

		luaL_error(L, "error in function IsShown, cannot match any of the overloads for function IsShown:\n  IsShown(wxWindow *)\n  IsShown(wxSizer *)\n  IsShown(size_t)\n");
		return 0;
	}

	// void wxSizer::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::Layout() function, expected prototype:\nvoid wxSizer::Layout()\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::Layout()");
		}
		self->Layout();

		return 0;
	}

	// wxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Prepend_overload_1(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Prepend function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxWindow *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Prepend(window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_2(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxWindow *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Prepend(window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Prepend_overload_3(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Prepend function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizer *, const wxSizerFlags &)");
		}
		wxSizerItem * lret = self->Prepend(sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_4(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizer *, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Prepend(sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_5(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : 0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : 0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(int, int, int, int, int, wxObject *)");
		}
		wxSizerItem * lret = self->Prepend(width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizerItem * item)
	static int _bind_Prepend_overload_6(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizerItem* item=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizerItem *)");
		}
		wxSizerItem * lret = self->Prepend(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Prepend
	static int _bind_Prepend(lua_State *L) {
		if (_lg_typecheck_Prepend_overload_1(L)) return _bind_Prepend_overload_1(L);
		if (_lg_typecheck_Prepend_overload_2(L)) return _bind_Prepend_overload_2(L);
		if (_lg_typecheck_Prepend_overload_3(L)) return _bind_Prepend_overload_3(L);
		if (_lg_typecheck_Prepend_overload_4(L)) return _bind_Prepend_overload_4(L);
		if (_lg_typecheck_Prepend_overload_5(L)) return _bind_Prepend_overload_5(L);
		if (_lg_typecheck_Prepend_overload_6(L)) return _bind_Prepend_overload_6(L);

		luaL_error(L, "error in function Prepend, cannot match any of the overloads for function Prepend:\n  Prepend(wxWindow *, const wxSizerFlags &)\n  Prepend(wxWindow *, int, int, int, wxObject *)\n  Prepend(wxSizer *, const wxSizerFlags &)\n  Prepend(wxSizer *, int, int, int, wxObject *)\n  Prepend(int, int, int, int, int, wxObject *)\n  Prepend(wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::PrependSpacer(int size)
	static int _bind_PrependSpacer(lua_State *L) {
		if (!_lg_typecheck_PrependSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::PrependSpacer(int size) function, expected prototype:\nwxSizerItem * wxSizer::PrependSpacer(int size)\nClass arguments details:\n");
		}

		int size=(int)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::PrependSpacer(int)");
		}
		wxSizerItem * lret = self->PrependSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1)
	static int _bind_PrependStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_PrependStretchSpacer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int prop=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::PrependStretchSpacer(int)");
		}
		wxSizerItem * lret = self->PrependStretchSpacer(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::RecalcSizes() function, expected prototype:\nvoid wxSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// bool wxSizer::Remove(wxSizer * sizer)
	static int _bind_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Remove(wxSizer * sizer) function, expected prototype:\nbool wxSizer::Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Remove(wxSizer *)");
		}
		bool lret = self->Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Remove(int index)
	static int _bind_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Remove(int index) function, expected prototype:\nbool wxSizer::Remove(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Remove(int)");
		}
		bool lret = self->Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Remove
	static int _bind_Remove(lua_State *L) {
		if (_lg_typecheck_Remove_overload_1(L)) return _bind_Remove_overload_1(L);
		if (_lg_typecheck_Remove_overload_2(L)) return _bind_Remove_overload_2(L);

		luaL_error(L, "error in function Remove, cannot match any of the overloads for function Remove:\n  Remove(wxSizer *)\n  Remove(int)\n");
		return 0;
	}

	// bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxWindow* newwin=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(wxWindow *, wxWindow *, bool)");
		}
		bool lret = self->Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		wxSizer* newsz=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(wxSizer *, wxSizer *, bool)");
		}
		bool lret = self->Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Replace(size_t index, wxSizerItem * newitem)
	static int _bind_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxSizer::Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,3));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(size_t, wxSizerItem *)");
		}
		bool lret = self->Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Replace
	static int _bind_Replace(lua_State *L) {
		if (_lg_typecheck_Replace_overload_1(L)) return _bind_Replace_overload_1(L);
		if (_lg_typecheck_Replace_overload_2(L)) return _bind_Replace_overload_2(L);
		if (_lg_typecheck_Replace_overload_3(L)) return _bind_Replace_overload_3(L);

		luaL_error(L, "error in function Replace, cannot match any of the overloads for function Replace:\n  Replace(wxWindow *, wxWindow *, bool)\n  Replace(wxSizer *, wxSizer *, bool)\n  Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// void wxSizer::SetDimension(int x, int y, int width, int height)
	static int _bind_SetDimension_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetDimension_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetDimension(int x, int y, int width, int height) function, expected prototype:\nvoid wxSizer::SetDimension(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetDimension(int, int, int, int)");
		}
		self->SetDimension(x, y, width, height);

		return 0;
	}

	// void wxSizer::SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_SetDimension_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetDimension_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxSizer::SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSizer::SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetDimension(const wxPoint &, const wxSize &)");
		}
		self->SetDimension(pos, size);

		return 0;
	}

	// Overload binder for wxSizer::SetDimension
	static int _bind_SetDimension(lua_State *L) {
		if (_lg_typecheck_SetDimension_overload_1(L)) return _bind_SetDimension_overload_1(L);
		if (_lg_typecheck_SetDimension_overload_2(L)) return _bind_SetDimension_overload_2(L);

		luaL_error(L, "error in function SetDimension, cannot match any of the overloads for function SetDimension:\n  SetDimension(int, int, int, int)\n  SetDimension(const wxPoint &, const wxSize &)\n");
		return 0;
	}

	// bool wxSizer::SetItemMinSize(wxWindow * window, int width, int height)
	static int _bind_SetItemMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxWindow * window, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxWindow * window, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxWindow *, int, int)");
		}
		bool lret = self->SetItemMinSize(window, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size)
	static int _bind_SetItemMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxWindow *, const wxSize &)");
		}
		bool lret = self->SetItemMinSize(window, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height)
	static int _bind_SetItemMinSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxSizer *, int, int)");
		}
		bool lret = self->SetItemMinSize(sizer, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size)
	static int _bind_SetItemMinSize_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxSizer *, const wxSize &)");
		}
		bool lret = self->SetItemMinSize(sizer, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(size_t index, int width, int height)
	static int _bind_SetItemMinSize_overload_5(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(size_t index, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(size_t index, int width, int height)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(size_t, int, int)");
		}
		bool lret = self->SetItemMinSize(index, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(size_t index, const wxSize & size)
	static int _bind_SetItemMinSize_overload_6(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(size_t index, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(size_t index, const wxSize & size)\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(size_t, const wxSize &)");
		}
		bool lret = self->SetItemMinSize(index, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::SetItemMinSize
	static int _bind_SetItemMinSize(lua_State *L) {
		if (_lg_typecheck_SetItemMinSize_overload_1(L)) return _bind_SetItemMinSize_overload_1(L);
		if (_lg_typecheck_SetItemMinSize_overload_2(L)) return _bind_SetItemMinSize_overload_2(L);
		if (_lg_typecheck_SetItemMinSize_overload_3(L)) return _bind_SetItemMinSize_overload_3(L);
		if (_lg_typecheck_SetItemMinSize_overload_4(L)) return _bind_SetItemMinSize_overload_4(L);
		if (_lg_typecheck_SetItemMinSize_overload_5(L)) return _bind_SetItemMinSize_overload_5(L);
		if (_lg_typecheck_SetItemMinSize_overload_6(L)) return _bind_SetItemMinSize_overload_6(L);

		luaL_error(L, "error in function SetItemMinSize, cannot match any of the overloads for function SetItemMinSize:\n  SetItemMinSize(wxWindow *, int, int)\n  SetItemMinSize(wxWindow *, const wxSize &)\n  SetItemMinSize(wxSizer *, int, int)\n  SetItemMinSize(wxSizer *, const wxSize &)\n  SetItemMinSize(size_t, int, int)\n  SetItemMinSize(size_t, const wxSize &)\n");
		return 0;
	}

	// void wxSizer::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSizer::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetMinSize(const wxSize &)");
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxSizer::SetMinSize(int width, int height)
	static int _bind_SetMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetMinSize(int width, int height) function, expected prototype:\nvoid wxSizer::SetMinSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetMinSize(int, int)");
		}
		self->SetMinSize(width, height);

		return 0;
	}

	// Overload binder for wxSizer::SetMinSize
	static int _bind_SetMinSize(lua_State *L) {
		if (_lg_typecheck_SetMinSize_overload_1(L)) return _bind_SetMinSize_overload_1(L);
		if (_lg_typecheck_SetMinSize_overload_2(L)) return _bind_SetMinSize_overload_2(L);

		luaL_error(L, "error in function SetMinSize, cannot match any of the overloads for function SetMinSize:\n  SetMinSize(const wxSize &)\n  SetMinSize(int, int)\n");
		return 0;
	}

	// void wxSizer::SetSizeHints(wxWindow * window)
	static int _bind_SetSizeHints(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetSizeHints(wxWindow * window) function, expected prototype:\nvoid wxSizer::SetSizeHints(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetSizeHints(wxWindow *)");
		}
		self->SetSizeHints(window);

		return 0;
	}

	// void wxSizer::SetVirtualSizeHints(wxWindow * window)
	static int _bind_SetVirtualSizeHints(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSizeHints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSizer::SetVirtualSizeHints(wxWindow * window) function, expected prototype:\nvoid wxSizer::SetVirtualSizeHints(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSizer::SetVirtualSizeHints(wxWindow *)");
		}
		self->SetVirtualSizeHints(window);

		return 0;
	}

	// bool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false)
	static int _bind_Show_overload_1(lua_State *L) {
		if (!_lg_typecheck_Show_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false) function, expected prototype:\nbool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(wxWindow *, bool, bool)");
		}
		bool lret = self->Show(window, show, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false)
	static int _bind_Show_overload_2(lua_State *L) {
		if (!_lg_typecheck_Show_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false) function, expected prototype:\nbool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(wxSizer *, bool, bool)");
		}
		bool lret = self->Show(sizer, show, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Show(size_t index, bool show = true)
	static int _bind_Show_overload_3(lua_State *L) {
		if (!_lg_typecheck_Show_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(size_t index, bool show = true) function, expected prototype:\nbool wxSizer::Show(size_t index, bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxSizer* self=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(size_t, bool)");
		}
		bool lret = self->Show(index, show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Show
	static int _bind_Show(lua_State *L) {
		if (_lg_typecheck_Show_overload_1(L)) return _bind_Show_overload_1(L);
		if (_lg_typecheck_Show_overload_2(L)) return _bind_Show_overload_2(L);
		if (_lg_typecheck_Show_overload_3(L)) return _bind_Show_overload_3(L);

		luaL_error(L, "error in function Show, cannot match any of the overloads for function Show:\n  Show(wxWindow *, bool, bool)\n  Show(wxSizer *, bool, bool)\n  Show(size_t, bool)\n");
		return 0;
	}


	// Operator binds:

};

wxSizer* LunaTraits< wxSizer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxSize wxSizer::CalcMin()
	// void wxSizer::RecalcSizes()

	// Abstract operators:
}

void LunaTraits< wxSizer >::_bind_dtor(wxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxSizer >::className[] = "wxSizer";
const char LunaTraits< wxSizer >::fullName[] = "wxSizer";
const char LunaTraits< wxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxSizer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSizer >::hash = 28331353;
const int LunaTraits< wxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizer >::methods[] = {
	{"Add", &luna_wrapper_wxSizer::_bind_Add},
	{"AddSpacer", &luna_wrapper_wxSizer::_bind_AddSpacer},
	{"AddStretchSpacer", &luna_wrapper_wxSizer::_bind_AddStretchSpacer},
	{"CalcMin", &luna_wrapper_wxSizer::_bind_CalcMin},
	{"Clear", &luna_wrapper_wxSizer::_bind_Clear},
	{"ComputeFittingClientSize", &luna_wrapper_wxSizer::_bind_ComputeFittingClientSize},
	{"ComputeFittingWindowSize", &luna_wrapper_wxSizer::_bind_ComputeFittingWindowSize},
	{"Detach", &luna_wrapper_wxSizer::_bind_Detach},
	{"Fit", &luna_wrapper_wxSizer::_bind_Fit},
	{"FitInside", &luna_wrapper_wxSizer::_bind_FitInside},
	{"InformFirstDirection", &luna_wrapper_wxSizer::_bind_InformFirstDirection},
	{"GetChildren", &luna_wrapper_wxSizer::_bind_GetChildren},
	{"GetContainingWindow", &luna_wrapper_wxSizer::_bind_GetContainingWindow},
	{"GetItemCount", &luna_wrapper_wxSizer::_bind_GetItemCount},
	{"GetItem", &luna_wrapper_wxSizer::_bind_GetItem},
	{"GetItemById", &luna_wrapper_wxSizer::_bind_GetItemById},
	{"GetMinSize", &luna_wrapper_wxSizer::_bind_GetMinSize},
	{"GetPosition", &luna_wrapper_wxSizer::_bind_GetPosition},
	{"GetSize", &luna_wrapper_wxSizer::_bind_GetSize},
	{"Hide", &luna_wrapper_wxSizer::_bind_Hide},
	{"Insert", &luna_wrapper_wxSizer::_bind_Insert},
	{"InsertSpacer", &luna_wrapper_wxSizer::_bind_InsertSpacer},
	{"InsertStretchSpacer", &luna_wrapper_wxSizer::_bind_InsertStretchSpacer},
	{"IsEmpty", &luna_wrapper_wxSizer::_bind_IsEmpty},
	{"IsShown", &luna_wrapper_wxSizer::_bind_IsShown},
	{"Layout", &luna_wrapper_wxSizer::_bind_Layout},
	{"Prepend", &luna_wrapper_wxSizer::_bind_Prepend},
	{"PrependSpacer", &luna_wrapper_wxSizer::_bind_PrependSpacer},
	{"PrependStretchSpacer", &luna_wrapper_wxSizer::_bind_PrependStretchSpacer},
	{"RecalcSizes", &luna_wrapper_wxSizer::_bind_RecalcSizes},
	{"Remove", &luna_wrapper_wxSizer::_bind_Remove},
	{"Replace", &luna_wrapper_wxSizer::_bind_Replace},
	{"SetDimension", &luna_wrapper_wxSizer::_bind_SetDimension},
	{"SetItemMinSize", &luna_wrapper_wxSizer::_bind_SetItemMinSize},
	{"SetMinSize", &luna_wrapper_wxSizer::_bind_SetMinSize},
	{"SetSizeHints", &luna_wrapper_wxSizer::_bind_SetSizeHints},
	{"SetVirtualSizeHints", &luna_wrapper_wxSizer::_bind_SetVirtualSizeHints},
	{"Show", &luna_wrapper_wxSizer::_bind_Show},
	{"__eq", &luna_wrapper_wxSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizer >::enumValues[] = {
	{0,0}
};


