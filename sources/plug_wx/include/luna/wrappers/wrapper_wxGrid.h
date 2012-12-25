#ifndef _WRAPPERS_WRAPPER_WXGRID_H_
#define _WRAPPERS_WRAPPER_WXGRID_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGrid : public wxGrid, public luna_wrapper_base {

public:
		

	~wrapper_wxGrid() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGrid(lua_State* L, lua_Table* dum) : wxGrid(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_wxGrid(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) : wxGrid(parent, id, pos, size, style, name), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// wxPen wxGrid::GetColGridLinePen(int col)
	wxPen GetColGridLinePen(int col) {
		if(_obj.pushFunction("GetColGridLinePen")) {
			_obj.pushArg(col);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetColGridLinePen(col);
	};

	// wxPen wxGrid::GetDefaultGridLinePen()
	wxPen GetDefaultGridLinePen() {
		if(_obj.pushFunction("GetDefaultGridLinePen")) {
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetDefaultGridLinePen();
	};

	// wxPen wxGrid::GetRowGridLinePen(int row)
	wxPen GetRowGridLinePen(int row) {
		if(_obj.pushFunction("GetRowGridLinePen")) {
			_obj.pushArg(row);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetRowGridLinePen(row);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const
	wxGridCellEditor * GetDefaultEditorForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultEditorForCell")) {
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForCell(row, col);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const
	wxGridCellEditor * GetDefaultEditorForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultEditorForType")) {
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForType(typeName);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const
	wxGridCellRenderer * GetDefaultRendererForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultRendererForCell")) {
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForCell(row, col);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const
	wxGridCellRenderer * GetDefaultRendererForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultRendererForType")) {
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForType(typeName);
	};

	// void wxGrid::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			return (_obj.callFunction<void>());
		}

		return wxGrid::Fit();
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// bool wxGrid::CanHaveAttributes() const
	bool public_CanHaveAttributes() const {
		return wxGrid::CanHaveAttributes();
	};

	// int wxGrid::GetColMinimalWidth(int col) const
	int public_GetColMinimalWidth(int col) const {
		return wxGrid::GetColMinimalWidth(col);
	};

	// int wxGrid::GetColRight(int col) const
	int public_GetColRight(int col) const {
		return wxGrid::GetColRight(col);
	};

	// int wxGrid::GetColLeft(int col) const
	int public_GetColLeft(int col) const {
		return wxGrid::GetColLeft(col);
	};

	// int wxGrid::GetRowMinimalHeight(int col) const
	int public_GetRowMinimalHeight(int col) const {
		return wxGrid::GetRowMinimalHeight(col);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_CanHaveAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetColMinimalWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetColRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetColLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetRowMinimalHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool wxGrid::public_CanHaveAttributes() const
	static int _bind_public_CanHaveAttributes(lua_State *L) {
		if (!_lg_typecheck_public_CanHaveAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGrid::public_CanHaveAttributes() const function, expected prototype:\nbool wxGrid::public_CanHaveAttributes() const\nClass arguments details:\n");
		}


		wrapper_wxGrid* self=Luna< wxGrid >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGrid::public_CanHaveAttributes() const");
		}
		bool lret = self->public_CanHaveAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGrid::public_GetColMinimalWidth(int col) const
	static int _bind_public_GetColMinimalWidth(lua_State *L) {
		if (!_lg_typecheck_public_GetColMinimalWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColMinimalWidth(int col) const function, expected prototype:\nint wxGrid::public_GetColMinimalWidth(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxGrid >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColMinimalWidth(int) const");
		}
		int lret = self->public_GetColMinimalWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetColRight(int col) const
	static int _bind_public_GetColRight(lua_State *L) {
		if (!_lg_typecheck_public_GetColRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColRight(int col) const function, expected prototype:\nint wxGrid::public_GetColRight(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxGrid >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColRight(int) const");
		}
		int lret = self->public_GetColRight(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetColLeft(int col) const
	static int _bind_public_GetColLeft(lua_State *L) {
		if (!_lg_typecheck_public_GetColLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColLeft(int col) const function, expected prototype:\nint wxGrid::public_GetColLeft(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxGrid >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColLeft(int) const");
		}
		int lret = self->public_GetColLeft(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetRowMinimalHeight(int col) const
	static int _bind_public_GetRowMinimalHeight(lua_State *L) {
		if (!_lg_typecheck_public_GetRowMinimalHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetRowMinimalHeight(int col) const function, expected prototype:\nint wxGrid::public_GetRowMinimalHeight(int col) const\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxGrid >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetRowMinimalHeight(int) const");
		}
		int lret = self->public_GetRowMinimalHeight(col);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"CanHaveAttributes",_bind_public_CanHaveAttributes},
		{"GetColMinimalWidth",_bind_public_GetColMinimalWidth},
		{"GetColRight",_bind_public_GetColRight},
		{"GetColLeft",_bind_public_GetColLeft},
		{"GetRowMinimalHeight",_bind_public_GetRowMinimalHeight},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

