#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCaret.h>

class luna_wrapper_wxCaret {
public:
	typedef Luna< wxCaret > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13309003) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCaret*)");
		}

		wxCaret* rhs =(Luna< wxCaret >::check(L,2));
		wxCaret* self=(Luna< wxCaret >::check(L,1));
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

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCaret");
		
		return luna_dynamicCast(L,converters,"wxCaret",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Move_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Move_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBlinkTime(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBlinkTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCaret::wxCaret()
	static wxCaret* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret() function, expected prototype:\nwxCaret::wxCaret()\nClass arguments details:\n");
		}


		return new wxCaret();
	}

	// wxCaret::wxCaret(wxWindow * window, int width, int height)
	static wxCaret* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret(wxWindow * window, int width, int height) function, expected prototype:\nwxCaret::wxCaret(wxWindow * window, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		return new wxCaret(window, width, height);
	}

	// wxCaret::wxCaret(wxWindow * window, const wxSize & size)
	static wxCaret* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret(wxWindow * window, const wxSize & size) function, expected prototype:\nwxCaret::wxCaret(wxWindow * window, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCaret::wxCaret function");
		}
		const wxSize & size=*size_ptr;

		return new wxCaret(window, size);
	}

	// wxCaret::wxCaret(lua_Table * data)
	static wxCaret* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret(lua_Table * data) function, expected prototype:\nwxCaret::wxCaret(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxCaret(L,NULL);
	}

	// wxCaret::wxCaret(lua_Table * data, wxWindow * window, int width, int height)
	static wxCaret* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret(lua_Table * data, wxWindow * window, int width, int height) function, expected prototype:\nwxCaret::wxCaret(lua_Table * data, wxWindow * window, int width, int height)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new wrapper_wxCaret(L,NULL, window, width, height);
	}

	// wxCaret::wxCaret(lua_Table * data, wxWindow * window, const wxSize & size)
	static wxCaret* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCaret::wxCaret(lua_Table * data, wxWindow * window, const wxSize & size) function, expected prototype:\nwxCaret::wxCaret(lua_Table * data, wxWindow * window, const wxSize & size)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 20268751\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCaret::wxCaret function");
		}
		const wxSize & size=*size_ptr;

		return new wrapper_wxCaret(L,NULL, window, size);
	}

	// Overload binder for wxCaret::wxCaret
	static wxCaret* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxCaret, cannot match any of the overloads for function wxCaret:\n  wxCaret()\n  wxCaret(wxWindow *, int, int)\n  wxCaret(wxWindow *, const wxSize &)\n  wxCaret(lua_Table *)\n  wxCaret(lua_Table *, wxWindow *, int, int)\n  wxCaret(lua_Table *, wxWindow *, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCaret::Create(wxWindow * window, int width, int height)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCaret::Create(wxWindow * window, int width, int height) function, expected prototype:\nbool wxCaret::Create(wxWindow * window, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCaret::Create(wxWindow *, int, int)");
		}
		bool lret = self->Create(window, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCaret::Create(wxWindow * window, const wxSize & size)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCaret::Create(wxWindow * window, const wxSize & size) function, expected prototype:\nbool wxCaret::Create(wxWindow * window, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCaret::Create function");
		}
		const wxSize & size=*size_ptr;

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCaret::Create(wxWindow *, const wxSize &)");
		}
		bool lret = self->Create(window, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxCaret::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(wxWindow *, int, int)\n  Create(wxWindow *, const wxSize &)\n");
		return 0;
	}

	// void wxCaret::GetPosition(int * x, int * y) const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::GetPosition(int * x, int * y) const function, expected prototype:\nvoid wxCaret::GetPosition(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::GetPosition(int *, int *) const");
		}
		self->GetPosition(&x, &y);

		return 0;
	}

	// wxPoint wxCaret::GetPosition() const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxCaret::GetPosition() const function, expected prototype:\nwxPoint wxCaret::GetPosition() const\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxCaret::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxCaret::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition(int *, int *)\n  GetPosition()\n");
		return 0;
	}

	// void wxCaret::GetSize(int * width, int * height) const
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::GetSize(int * width, int * height) const function, expected prototype:\nvoid wxCaret::GetSize(int * width, int * height) const\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::GetSize(int *, int *) const");
		}
		self->GetSize(&width, &height);

		return 0;
	}

	// wxSize wxCaret::GetSize() const
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxCaret::GetSize() const function, expected prototype:\nwxSize wxCaret::GetSize() const\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxCaret::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxCaret::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize(int *, int *)\n  GetSize()\n");
		return 0;
	}

	// wxWindow * wxCaret::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxCaret::GetWindow() const function, expected prototype:\nwxWindow * wxCaret::GetWindow() const\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxCaret::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxCaret::Hide()
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::Hide() function, expected prototype:\nvoid wxCaret::Hide()\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::Hide()");
		}
		self->Hide();

		return 0;
	}

	// bool wxCaret::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCaret::IsOk() const function, expected prototype:\nbool wxCaret::IsOk() const\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCaret::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCaret::IsVisible() const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCaret::IsVisible() const function, expected prototype:\nbool wxCaret::IsVisible() const\nClass arguments details:\n");
		}


		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCaret::IsVisible() const");
		}
		bool lret = self->IsVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCaret::Move(int x, int y)
	static int _bind_Move_overload_1(lua_State *L) {
		if (!_lg_typecheck_Move_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::Move(int x, int y) function, expected prototype:\nvoid wxCaret::Move(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::Move(int, int)");
		}
		self->Move(x, y);

		return 0;
	}

	// void wxCaret::Move(const wxPoint & pt)
	static int _bind_Move_overload_2(lua_State *L) {
		if (!_lg_typecheck_Move_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::Move(const wxPoint & pt) function, expected prototype:\nvoid wxCaret::Move(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxCaret::Move function");
		}
		const wxPoint & pt=*pt_ptr;

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::Move(const wxPoint &)");
		}
		self->Move(pt);

		return 0;
	}

	// Overload binder for wxCaret::Move
	static int _bind_Move(lua_State *L) {
		if (_lg_typecheck_Move_overload_1(L)) return _bind_Move_overload_1(L);
		if (_lg_typecheck_Move_overload_2(L)) return _bind_Move_overload_2(L);

		luaL_error(L, "error in function Move, cannot match any of the overloads for function Move:\n  Move(int, int)\n  Move(const wxPoint &)\n");
		return 0;
	}

	// void wxCaret::SetSize(int width, int height)
	static int _bind_SetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::SetSize(int width, int height) function, expected prototype:\nvoid wxCaret::SetSize(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::SetSize(int, int)");
		}
		self->SetSize(width, height);

		return 0;
	}

	// void wxCaret::SetSize(const wxSize & size)
	static int _bind_SetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::SetSize(const wxSize & size) function, expected prototype:\nvoid wxCaret::SetSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxCaret::SetSize function");
		}
		const wxSize & size=*size_ptr;

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::SetSize(const wxSize &)");
		}
		self->SetSize(size);

		return 0;
	}

	// Overload binder for wxCaret::SetSize
	static int _bind_SetSize(lua_State *L) {
		if (_lg_typecheck_SetSize_overload_1(L)) return _bind_SetSize_overload_1(L);
		if (_lg_typecheck_SetSize_overload_2(L)) return _bind_SetSize_overload_2(L);

		luaL_error(L, "error in function SetSize, cannot match any of the overloads for function SetSize:\n  SetSize(int, int)\n  SetSize(const wxSize &)\n");
		return 0;
	}

	// void wxCaret::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCaret::Show(bool show = true) function, expected prototype:\nvoid wxCaret::Show(bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxCaret* self=(Luna< wxCaret >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCaret::Show(bool)");
		}
		self->Show(show);

		return 0;
	}

	// static int wxCaret::GetBlinkTime()
	static int _bind_GetBlinkTime(lua_State *L) {
		if (!_lg_typecheck_GetBlinkTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxCaret::GetBlinkTime() function, expected prototype:\nstatic int wxCaret::GetBlinkTime()\nClass arguments details:\n");
		}


		int lret = wxCaret::GetBlinkTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxCaret::SetBlinkTime(int milliseconds)
	static int _bind_SetBlinkTime(lua_State *L) {
		if (!_lg_typecheck_SetBlinkTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxCaret::SetBlinkTime(int milliseconds) function, expected prototype:\nstatic void wxCaret::SetBlinkTime(int milliseconds)\nClass arguments details:\n");
		}

		int milliseconds=(int)lua_tointeger(L,1);

		wxCaret::SetBlinkTime(milliseconds);

		return 0;
	}


	// Operator binds:

};

wxCaret* LunaTraits< wxCaret >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCaret::_bind_ctor(L);
}

void LunaTraits< wxCaret >::_bind_dtor(wxCaret* obj) {
	delete obj;
}

const char LunaTraits< wxCaret >::className[] = "wxCaret";
const char LunaTraits< wxCaret >::fullName[] = "wxCaret";
const char LunaTraits< wxCaret >::moduleName[] = "wx";
const char* LunaTraits< wxCaret >::parents[] = {0};
const int LunaTraits< wxCaret >::hash = 13309003;
const int LunaTraits< wxCaret >::uniqueIDs[] = {13309003,0};

luna_RegType LunaTraits< wxCaret >::methods[] = {
	{"Create", &luna_wrapper_wxCaret::_bind_Create},
	{"GetPosition", &luna_wrapper_wxCaret::_bind_GetPosition},
	{"GetSize", &luna_wrapper_wxCaret::_bind_GetSize},
	{"GetWindow", &luna_wrapper_wxCaret::_bind_GetWindow},
	{"Hide", &luna_wrapper_wxCaret::_bind_Hide},
	{"IsOk", &luna_wrapper_wxCaret::_bind_IsOk},
	{"IsVisible", &luna_wrapper_wxCaret::_bind_IsVisible},
	{"Move", &luna_wrapper_wxCaret::_bind_Move},
	{"SetSize", &luna_wrapper_wxCaret::_bind_SetSize},
	{"Show", &luna_wrapper_wxCaret::_bind_Show},
	{"GetBlinkTime", &luna_wrapper_wxCaret::_bind_GetBlinkTime},
	{"SetBlinkTime", &luna_wrapper_wxCaret::_bind_SetBlinkTime},
	{"dynCast", &luna_wrapper_wxCaret::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCaret::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCaret >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCaret >::enumValues[] = {
	{0,0}
};


