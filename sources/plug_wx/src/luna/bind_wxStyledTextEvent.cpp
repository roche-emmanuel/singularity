#include <plug_common.h>

class luna_wrapper_wxStyledTextEvent {
public:
	typedef Luna< wxStyledTextEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStyledTextEvent* ptr= dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStyledTextEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetAlt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDragAllowMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDragResult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDragText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFoldLevelNow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFoldLevelPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLinesAdded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetListType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModificationType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDragAllowMove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDragResult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDragText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldLevelNow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFoldLevelPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLParam(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLinesAdded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetListType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModificationType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModifiers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWParam(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxStyledTextEvent::GetAlt() const
	static int _bind_GetAlt(lua_State *L) {
		if (!_lg_typecheck_GetAlt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextEvent::GetAlt() const function, expected prototype:\nbool wxStyledTextEvent::GetAlt() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextEvent::GetAlt() const");
		}
		bool lret = self->GetAlt();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextEvent::GetControl() const
	static int _bind_GetControl(lua_State *L) {
		if (!_lg_typecheck_GetControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextEvent::GetControl() const function, expected prototype:\nbool wxStyledTextEvent::GetControl() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextEvent::GetControl() const");
		}
		bool lret = self->GetControl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStyledTextEvent::GetDragAllowMove()
	static int _bind_GetDragAllowMove(lua_State *L) {
		if (!_lg_typecheck_GetDragAllowMove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextEvent::GetDragAllowMove() function, expected prototype:\nbool wxStyledTextEvent::GetDragAllowMove()\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextEvent::GetDragAllowMove()");
		}
		bool lret = self->GetDragAllowMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxStyledTextEvent::GetDragResult()
	static int _bind_GetDragResult(lua_State *L) {
		if (!_lg_typecheck_GetDragResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDragResult wxStyledTextEvent::GetDragResult() function, expected prototype:\nwxDragResult wxStyledTextEvent::GetDragResult()\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDragResult wxStyledTextEvent::GetDragResult()");
		}
		wxDragResult lret = self->GetDragResult();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStyledTextEvent::GetDragText()
	static int _bind_GetDragText(lua_State *L) {
		if (!_lg_typecheck_GetDragText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextEvent::GetDragText() function, expected prototype:\nwxString wxStyledTextEvent::GetDragText()\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextEvent::GetDragText()");
		}
		wxString lret = self->GetDragText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextEvent::GetFoldLevelNow() const
	static int _bind_GetFoldLevelNow(lua_State *L) {
		if (!_lg_typecheck_GetFoldLevelNow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetFoldLevelNow() const function, expected prototype:\nint wxStyledTextEvent::GetFoldLevelNow() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetFoldLevelNow() const");
		}
		int lret = self->GetFoldLevelNow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetFoldLevelPrev() const
	static int _bind_GetFoldLevelPrev(lua_State *L) {
		if (!_lg_typecheck_GetFoldLevelPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetFoldLevelPrev() const function, expected prototype:\nint wxStyledTextEvent::GetFoldLevelPrev() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetFoldLevelPrev() const");
		}
		int lret = self->GetFoldLevelPrev();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetKey() const
	static int _bind_GetKey(lua_State *L) {
		if (!_lg_typecheck_GetKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetKey() const function, expected prototype:\nint wxStyledTextEvent::GetKey() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetKey() const");
		}
		int lret = self->GetKey();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetLParam() const
	static int _bind_GetLParam(lua_State *L) {
		if (!_lg_typecheck_GetLParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetLParam() const function, expected prototype:\nint wxStyledTextEvent::GetLParam() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetLParam() const");
		}
		int lret = self->GetLParam();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetLength() const
	static int _bind_GetLength(lua_State *L) {
		if (!_lg_typecheck_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetLength() const function, expected prototype:\nint wxStyledTextEvent::GetLength() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetLength() const");
		}
		int lret = self->GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetLine() const
	static int _bind_GetLine(lua_State *L) {
		if (!_lg_typecheck_GetLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetLine() const function, expected prototype:\nint wxStyledTextEvent::GetLine() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetLine() const");
		}
		int lret = self->GetLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetLinesAdded() const
	static int _bind_GetLinesAdded(lua_State *L) {
		if (!_lg_typecheck_GetLinesAdded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetLinesAdded() const function, expected prototype:\nint wxStyledTextEvent::GetLinesAdded() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetLinesAdded() const");
		}
		int lret = self->GetLinesAdded();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetListType() const
	static int _bind_GetListType(lua_State *L) {
		if (!_lg_typecheck_GetListType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetListType() const function, expected prototype:\nint wxStyledTextEvent::GetListType() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetListType() const");
		}
		int lret = self->GetListType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetMargin() const
	static int _bind_GetMargin(lua_State *L) {
		if (!_lg_typecheck_GetMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetMargin() const function, expected prototype:\nint wxStyledTextEvent::GetMargin() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetMargin() const");
		}
		int lret = self->GetMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetMessage() const function, expected prototype:\nint wxStyledTextEvent::GetMessage() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetMessage() const");
		}
		int lret = self->GetMessage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetModificationType() const
	static int _bind_GetModificationType(lua_State *L) {
		if (!_lg_typecheck_GetModificationType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetModificationType() const function, expected prototype:\nint wxStyledTextEvent::GetModificationType() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetModificationType() const");
		}
		int lret = self->GetModificationType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetModifiers() const
	static int _bind_GetModifiers(lua_State *L) {
		if (!_lg_typecheck_GetModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetModifiers() const function, expected prototype:\nint wxStyledTextEvent::GetModifiers() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetModifiers() const");
		}
		int lret = self->GetModifiers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetPosition() const function, expected prototype:\nint wxStyledTextEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetPosition() const");
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStyledTextEvent::GetShift() const
	static int _bind_GetShift(lua_State *L) {
		if (!_lg_typecheck_GetShift(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStyledTextEvent::GetShift() const function, expected prototype:\nbool wxStyledTextEvent::GetShift() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStyledTextEvent::GetShift() const");
		}
		bool lret = self->GetShift();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxStyledTextEvent::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStyledTextEvent::GetText() const function, expected prototype:\nwxString wxStyledTextEvent::GetText() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStyledTextEvent::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStyledTextEvent::GetWParam() const
	static int _bind_GetWParam(lua_State *L) {
		if (!_lg_typecheck_GetWParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetWParam() const function, expected prototype:\nint wxStyledTextEvent::GetWParam() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetWParam() const");
		}
		int lret = self->GetWParam();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetX() const function, expected prototype:\nint wxStyledTextEvent::GetX() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetX() const");
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStyledTextEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxStyledTextEvent::GetY() const function, expected prototype:\nint wxStyledTextEvent::GetY() const\nClass arguments details:\n");
		}


		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxStyledTextEvent::GetY() const");
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStyledTextEvent::SetDragAllowMove(bool val)
	static int _bind_SetDragAllowMove(lua_State *L) {
		if (!_lg_typecheck_SetDragAllowMove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetDragAllowMove(bool val) function, expected prototype:\nvoid wxStyledTextEvent::SetDragAllowMove(bool val)\nClass arguments details:\n");
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetDragAllowMove(bool)");
		}
		self->SetDragAllowMove(val);

		return 0;
	}

	// void wxStyledTextEvent::SetDragResult(wxDragResult val)
	static int _bind_SetDragResult(lua_State *L) {
		if (!_lg_typecheck_SetDragResult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetDragResult(wxDragResult val) function, expected prototype:\nvoid wxStyledTextEvent::SetDragResult(wxDragResult val)\nClass arguments details:\n");
		}

		wxDragResult val=(wxDragResult)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetDragResult(wxDragResult)");
		}
		self->SetDragResult(val);

		return 0;
	}

	// void wxStyledTextEvent::SetDragText(const wxString & val)
	static int _bind_SetDragText(lua_State *L) {
		if (!_lg_typecheck_SetDragText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetDragText(const wxString & val) function, expected prototype:\nvoid wxStyledTextEvent::SetDragText(const wxString & val)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString val(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetDragText(const wxString &)");
		}
		self->SetDragText(val);

		return 0;
	}

	// void wxStyledTextEvent::SetFoldLevelNow(int val)
	static int _bind_SetFoldLevelNow(lua_State *L) {
		if (!_lg_typecheck_SetFoldLevelNow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetFoldLevelNow(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetFoldLevelNow(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetFoldLevelNow(int)");
		}
		self->SetFoldLevelNow(val);

		return 0;
	}

	// void wxStyledTextEvent::SetFoldLevelPrev(int val)
	static int _bind_SetFoldLevelPrev(lua_State *L) {
		if (!_lg_typecheck_SetFoldLevelPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetFoldLevelPrev(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetFoldLevelPrev(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetFoldLevelPrev(int)");
		}
		self->SetFoldLevelPrev(val);

		return 0;
	}

	// void wxStyledTextEvent::SetKey(int k)
	static int _bind_SetKey(lua_State *L) {
		if (!_lg_typecheck_SetKey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetKey(int k) function, expected prototype:\nvoid wxStyledTextEvent::SetKey(int k)\nClass arguments details:\n");
		}

		int k=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetKey(int)");
		}
		self->SetKey(k);

		return 0;
	}

	// void wxStyledTextEvent::SetLParam(int val)
	static int _bind_SetLParam(lua_State *L) {
		if (!_lg_typecheck_SetLParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetLParam(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetLParam(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetLParam(int)");
		}
		self->SetLParam(val);

		return 0;
	}

	// void wxStyledTextEvent::SetLength(int len)
	static int _bind_SetLength(lua_State *L) {
		if (!_lg_typecheck_SetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetLength(int len) function, expected prototype:\nvoid wxStyledTextEvent::SetLength(int len)\nClass arguments details:\n");
		}

		int len=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetLength(int)");
		}
		self->SetLength(len);

		return 0;
	}

	// void wxStyledTextEvent::SetLine(int val)
	static int _bind_SetLine(lua_State *L) {
		if (!_lg_typecheck_SetLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetLine(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetLine(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetLine(int)");
		}
		self->SetLine(val);

		return 0;
	}

	// void wxStyledTextEvent::SetLinesAdded(int num)
	static int _bind_SetLinesAdded(lua_State *L) {
		if (!_lg_typecheck_SetLinesAdded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetLinesAdded(int num) function, expected prototype:\nvoid wxStyledTextEvent::SetLinesAdded(int num)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetLinesAdded(int)");
		}
		self->SetLinesAdded(num);

		return 0;
	}

	// void wxStyledTextEvent::SetListType(int val)
	static int _bind_SetListType(lua_State *L) {
		if (!_lg_typecheck_SetListType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetListType(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetListType(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetListType(int)");
		}
		self->SetListType(val);

		return 0;
	}

	// void wxStyledTextEvent::SetMargin(int val)
	static int _bind_SetMargin(lua_State *L) {
		if (!_lg_typecheck_SetMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetMargin(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetMargin(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetMargin(int)");
		}
		self->SetMargin(val);

		return 0;
	}

	// void wxStyledTextEvent::SetMessage(int val)
	static int _bind_SetMessage(lua_State *L) {
		if (!_lg_typecheck_SetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetMessage(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetMessage(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetMessage(int)");
		}
		self->SetMessage(val);

		return 0;
	}

	// void wxStyledTextEvent::SetModificationType(int t)
	static int _bind_SetModificationType(lua_State *L) {
		if (!_lg_typecheck_SetModificationType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetModificationType(int t) function, expected prototype:\nvoid wxStyledTextEvent::SetModificationType(int t)\nClass arguments details:\n");
		}

		int t=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetModificationType(int)");
		}
		self->SetModificationType(t);

		return 0;
	}

	// void wxStyledTextEvent::SetModifiers(int m)
	static int _bind_SetModifiers(lua_State *L) {
		if (!_lg_typecheck_SetModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetModifiers(int m) function, expected prototype:\nvoid wxStyledTextEvent::SetModifiers(int m)\nClass arguments details:\n");
		}

		int m=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetModifiers(int)");
		}
		self->SetModifiers(m);

		return 0;
	}

	// void wxStyledTextEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetPosition(int pos) function, expected prototype:\nvoid wxStyledTextEvent::SetPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetPosition(int)");
		}
		self->SetPosition(pos);

		return 0;
	}

	// void wxStyledTextEvent::SetText(const wxString & t)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetText(const wxString & t) function, expected prototype:\nvoid wxStyledTextEvent::SetText(const wxString & t)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString t(lua_tostring(L,2),lua_objlen(L,2));

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetText(const wxString &)");
		}
		self->SetText(t);

		return 0;
	}

	// void wxStyledTextEvent::SetWParam(int val)
	static int _bind_SetWParam(lua_State *L) {
		if (!_lg_typecheck_SetWParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetWParam(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetWParam(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetWParam(int)");
		}
		self->SetWParam(val);

		return 0;
	}

	// void wxStyledTextEvent::SetX(int val)
	static int _bind_SetX(lua_State *L) {
		if (!_lg_typecheck_SetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetX(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetX(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetX(int)");
		}
		self->SetX(val);

		return 0;
	}

	// void wxStyledTextEvent::SetY(int val)
	static int _bind_SetY(lua_State *L) {
		if (!_lg_typecheck_SetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStyledTextEvent::SetY(int val) function, expected prototype:\nvoid wxStyledTextEvent::SetY(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxStyledTextEvent* self=dynamic_cast< wxStyledTextEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStyledTextEvent::SetY(int)");
		}
		self->SetY(val);

		return 0;
	}


	// Operator binds:

};

wxStyledTextEvent* LunaTraits< wxStyledTextEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxStyledTextEvent >::_bind_dtor(wxStyledTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxStyledTextEvent >::className[] = "wxStyledTextEvent";
const char LunaTraits< wxStyledTextEvent >::fullName[] = "wxStyledTextEvent";
const char LunaTraits< wxStyledTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxStyledTextEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxStyledTextEvent >::hash = 99881465;
const int LunaTraits< wxStyledTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStyledTextEvent >::methods[] = {
	{"GetAlt", &luna_wrapper_wxStyledTextEvent::_bind_GetAlt},
	{"GetControl", &luna_wrapper_wxStyledTextEvent::_bind_GetControl},
	{"GetDragAllowMove", &luna_wrapper_wxStyledTextEvent::_bind_GetDragAllowMove},
	{"GetDragResult", &luna_wrapper_wxStyledTextEvent::_bind_GetDragResult},
	{"GetDragText", &luna_wrapper_wxStyledTextEvent::_bind_GetDragText},
	{"GetFoldLevelNow", &luna_wrapper_wxStyledTextEvent::_bind_GetFoldLevelNow},
	{"GetFoldLevelPrev", &luna_wrapper_wxStyledTextEvent::_bind_GetFoldLevelPrev},
	{"GetKey", &luna_wrapper_wxStyledTextEvent::_bind_GetKey},
	{"GetLParam", &luna_wrapper_wxStyledTextEvent::_bind_GetLParam},
	{"GetLength", &luna_wrapper_wxStyledTextEvent::_bind_GetLength},
	{"GetLine", &luna_wrapper_wxStyledTextEvent::_bind_GetLine},
	{"GetLinesAdded", &luna_wrapper_wxStyledTextEvent::_bind_GetLinesAdded},
	{"GetListType", &luna_wrapper_wxStyledTextEvent::_bind_GetListType},
	{"GetMargin", &luna_wrapper_wxStyledTextEvent::_bind_GetMargin},
	{"GetMessage", &luna_wrapper_wxStyledTextEvent::_bind_GetMessage},
	{"GetModificationType", &luna_wrapper_wxStyledTextEvent::_bind_GetModificationType},
	{"GetModifiers", &luna_wrapper_wxStyledTextEvent::_bind_GetModifiers},
	{"GetPosition", &luna_wrapper_wxStyledTextEvent::_bind_GetPosition},
	{"GetShift", &luna_wrapper_wxStyledTextEvent::_bind_GetShift},
	{"GetText", &luna_wrapper_wxStyledTextEvent::_bind_GetText},
	{"GetWParam", &luna_wrapper_wxStyledTextEvent::_bind_GetWParam},
	{"GetX", &luna_wrapper_wxStyledTextEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxStyledTextEvent::_bind_GetY},
	{"SetDragAllowMove", &luna_wrapper_wxStyledTextEvent::_bind_SetDragAllowMove},
	{"SetDragResult", &luna_wrapper_wxStyledTextEvent::_bind_SetDragResult},
	{"SetDragText", &luna_wrapper_wxStyledTextEvent::_bind_SetDragText},
	{"SetFoldLevelNow", &luna_wrapper_wxStyledTextEvent::_bind_SetFoldLevelNow},
	{"SetFoldLevelPrev", &luna_wrapper_wxStyledTextEvent::_bind_SetFoldLevelPrev},
	{"SetKey", &luna_wrapper_wxStyledTextEvent::_bind_SetKey},
	{"SetLParam", &luna_wrapper_wxStyledTextEvent::_bind_SetLParam},
	{"SetLength", &luna_wrapper_wxStyledTextEvent::_bind_SetLength},
	{"SetLine", &luna_wrapper_wxStyledTextEvent::_bind_SetLine},
	{"SetLinesAdded", &luna_wrapper_wxStyledTextEvent::_bind_SetLinesAdded},
	{"SetListType", &luna_wrapper_wxStyledTextEvent::_bind_SetListType},
	{"SetMargin", &luna_wrapper_wxStyledTextEvent::_bind_SetMargin},
	{"SetMessage", &luna_wrapper_wxStyledTextEvent::_bind_SetMessage},
	{"SetModificationType", &luna_wrapper_wxStyledTextEvent::_bind_SetModificationType},
	{"SetModifiers", &luna_wrapper_wxStyledTextEvent::_bind_SetModifiers},
	{"SetPosition", &luna_wrapper_wxStyledTextEvent::_bind_SetPosition},
	{"SetText", &luna_wrapper_wxStyledTextEvent::_bind_SetText},
	{"SetWParam", &luna_wrapper_wxStyledTextEvent::_bind_SetWParam},
	{"SetX", &luna_wrapper_wxStyledTextEvent::_bind_SetX},
	{"SetY", &luna_wrapper_wxStyledTextEvent::_bind_SetY},
	{0,0}
};

luna_ConverterType LunaTraits< wxStyledTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxStyledTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStyledTextEvent >::enumValues[] = {
	{0,0}
};

