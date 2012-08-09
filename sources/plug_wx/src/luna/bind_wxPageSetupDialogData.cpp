#include <plug_common.h>

class luna_wrapper_wxPageSetupDialogData {
public:
	typedef Luna< wxPageSetupDialogData > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPageSetupDialogData* ptr= dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPageSetupDialogData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_EnableHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableMargins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnablePaper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnablePrinter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultMinMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnablePaper(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnablePrinter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaperId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaperSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultMinMargins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPaperId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPaperSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPageSetupDialogData::wxPageSetupDialogData()
	static wxPageSetupDialogData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData() function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData()\nClass arguments details:\n");
		}


		return new wxPageSetupDialogData();
	}

	// wxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data)
	static wxPageSetupDialogData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data) function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPageSetupDialogData* data_ptr=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxPageSetupDialogData::wxPageSetupDialogData function");
		}
		const wxPageSetupDialogData & data=*data_ptr;

		return new wxPageSetupDialogData(data);
	}

	// Overload binder for wxPageSetupDialogData::wxPageSetupDialogData
	static wxPageSetupDialogData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPageSetupDialogData, cannot match any of the overloads for function wxPageSetupDialogData:\n  wxPageSetupDialogData()\n  wxPageSetupDialogData(const wxPageSetupDialogData &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPageSetupDialogData::EnableHelp(bool flag)
	static int _bind_EnableHelp(lua_State *L) {
		if (!_lg_typecheck_EnableHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableHelp(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableHelp(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableHelp(bool)");
		}
		self->EnableHelp(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnableMargins(bool flag)
	static int _bind_EnableMargins(lua_State *L) {
		if (!_lg_typecheck_EnableMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableMargins(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableMargins(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableMargins(bool)");
		}
		self->EnableMargins(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnableOrientation(bool flag)
	static int _bind_EnableOrientation(lua_State *L) {
		if (!_lg_typecheck_EnableOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableOrientation(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableOrientation(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableOrientation(bool)");
		}
		self->EnableOrientation(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnablePaper(bool flag)
	static int _bind_EnablePaper(lua_State *L) {
		if (!_lg_typecheck_EnablePaper(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnablePaper(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnablePaper(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnablePaper(bool)");
		}
		self->EnablePaper(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnablePrinter(bool flag)
	static int _bind_EnablePrinter(lua_State *L) {
		if (!_lg_typecheck_EnablePrinter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnablePrinter(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnablePrinter(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnablePrinter(bool)");
		}
		self->EnablePrinter(flag);

		return 0;
	}

	// bool wxPageSetupDialogData::GetDefaultInfo() const
	static int _bind_GetDefaultInfo(lua_State *L) {
		if (!_lg_typecheck_GetDefaultInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetDefaultInfo() const function, expected prototype:\nbool wxPageSetupDialogData::GetDefaultInfo() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetDefaultInfo() const");
		}
		bool lret = self->GetDefaultInfo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetDefaultMinMargins() const
	static int _bind_GetDefaultMinMargins(lua_State *L) {
		if (!_lg_typecheck_GetDefaultMinMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetDefaultMinMargins() const function, expected prototype:\nbool wxPageSetupDialogData::GetDefaultMinMargins() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetDefaultMinMargins() const");
		}
		bool lret = self->GetDefaultMinMargins();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableHelp() const
	static int _bind_GetEnableHelp(lua_State *L) {
		if (!_lg_typecheck_GetEnableHelp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableHelp() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableHelp() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableHelp() const");
		}
		bool lret = self->GetEnableHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableMargins() const
	static int _bind_GetEnableMargins(lua_State *L) {
		if (!_lg_typecheck_GetEnableMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableMargins() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableMargins() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableMargins() const");
		}
		bool lret = self->GetEnableMargins();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableOrientation() const
	static int _bind_GetEnableOrientation(lua_State *L) {
		if (!_lg_typecheck_GetEnableOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableOrientation() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableOrientation() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableOrientation() const");
		}
		bool lret = self->GetEnableOrientation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnablePaper() const
	static int _bind_GetEnablePaper(lua_State *L) {
		if (!_lg_typecheck_GetEnablePaper(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnablePaper() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnablePaper() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnablePaper() const");
		}
		bool lret = self->GetEnablePaper();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnablePrinter() const
	static int _bind_GetEnablePrinter(lua_State *L) {
		if (!_lg_typecheck_GetEnablePrinter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnablePrinter() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnablePrinter() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnablePrinter() const");
		}
		bool lret = self->GetEnablePrinter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMarginBottomRight() const
	static int _bind_GetMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetMarginBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMarginBottomRight() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMarginBottomRight() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMarginBottomRight() const");
		}
		wxPoint stack_lret = self->GetMarginBottomRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMarginTopLeft() const
	static int _bind_GetMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetMarginTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMarginTopLeft() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMarginTopLeft() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMarginTopLeft() const");
		}
		wxPoint stack_lret = self->GetMarginTopLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const
	static int _bind_GetMinMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetMinMarginBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const");
		}
		wxPoint stack_lret = self->GetMinMarginBottomRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const
	static int _bind_GetMinMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetMinMarginTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const");
		}
		wxPoint stack_lret = self->GetMinMarginTopLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPaperSize wxPageSetupDialogData::GetPaperId() const
	static int _bind_GetPaperId(lua_State *L) {
		if (!_lg_typecheck_GetPaperId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPaperSize wxPageSetupDialogData::GetPaperId() const function, expected prototype:\nwxPaperSize wxPageSetupDialogData::GetPaperId() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPaperSize wxPageSetupDialogData::GetPaperId() const");
		}
		wxPaperSize lret = self->GetPaperId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxPageSetupDialogData::GetPaperSize() const
	static int _bind_GetPaperSize(lua_State *L) {
		if (!_lg_typecheck_GetPaperSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxPageSetupDialogData::GetPaperSize() const function, expected prototype:\nwxSize wxPageSetupDialogData::GetPaperSize() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxPageSetupDialogData::GetPaperSize() const");
		}
		wxSize stack_lret = self->GetPaperSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPageSetupDialogData::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::IsOk() const function, expected prototype:\nbool wxPageSetupDialogData::IsOk() const\nClass arguments details:\n");
		}


		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPageSetupDialogData::SetDefaultInfo(bool flag)
	static int _bind_SetDefaultInfo(lua_State *L) {
		if (!_lg_typecheck_SetDefaultInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetDefaultInfo(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::SetDefaultInfo(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetDefaultInfo(bool)");
		}
		self->SetDefaultInfo(flag);

		return 0;
	}

	// void wxPageSetupDialogData::SetDefaultMinMargins(bool flag)
	static int _bind_SetDefaultMinMargins(lua_State *L) {
		if (!_lg_typecheck_SetDefaultMinMargins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetDefaultMinMargins(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::SetDefaultMinMargins(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetDefaultMinMargins(bool)");
		}
		self->SetDefaultMinMargins(flag);

		return 0;
	}

	// void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt)
	static int _bind_SetMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_SetMarginBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMarginBottomRight function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint &)");
		}
		self->SetMarginBottomRight(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt)
	static int _bind_SetMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_SetMarginTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMarginTopLeft function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint &)");
		}
		self->SetMarginTopLeft(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt)
	static int _bind_SetMinMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_SetMinMarginBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMinMarginBottomRight function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint &)");
		}
		self->SetMinMarginBottomRight(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt)
	static int _bind_SetMinMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_SetMinMarginTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMinMarginTopLeft function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint &)");
		}
		self->SetMinMarginTopLeft(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetPaperId(wxPaperSize id)
	static int _bind_SetPaperId(lua_State *L) {
		if (!_lg_typecheck_SetPaperId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetPaperId(wxPaperSize id) function, expected prototype:\nvoid wxPageSetupDialogData::SetPaperId(wxPaperSize id)\nClass arguments details:\n");
		}

		wxPaperSize id=(wxPaperSize)lua_tointeger(L,2);

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetPaperId(wxPaperSize)");
		}
		self->SetPaperId(id);

		return 0;
	}

	// void wxPageSetupDialogData::SetPaperSize(const wxSize & size)
	static int _bind_SetPaperSize(lua_State *L) {
		if (!_lg_typecheck_SetPaperSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetPaperSize(const wxSize & size) function, expected prototype:\nvoid wxPageSetupDialogData::SetPaperSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPageSetupDialogData::SetPaperSize function");
		}
		const wxSize & size=*size_ptr;

		wxPageSetupDialogData* self=dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetPaperSize(const wxSize &)");
		}
		self->SetPaperSize(size);

		return 0;
	}


	// Operator binds:

};

wxPageSetupDialogData* LunaTraits< wxPageSetupDialogData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPageSetupDialogData::_bind_ctor(L);
}

void LunaTraits< wxPageSetupDialogData >::_bind_dtor(wxPageSetupDialogData* obj) {
	delete obj;
}

const char LunaTraits< wxPageSetupDialogData >::className[] = "wxPageSetupDialogData";
const char LunaTraits< wxPageSetupDialogData >::fullName[] = "wxPageSetupDialogData";
const char LunaTraits< wxPageSetupDialogData >::moduleName[] = "wx";
const char* LunaTraits< wxPageSetupDialogData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPageSetupDialogData >::hash = 43195140;
const int LunaTraits< wxPageSetupDialogData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPageSetupDialogData >::methods[] = {
	{"EnableHelp", &luna_wrapper_wxPageSetupDialogData::_bind_EnableHelp},
	{"EnableMargins", &luna_wrapper_wxPageSetupDialogData::_bind_EnableMargins},
	{"EnableOrientation", &luna_wrapper_wxPageSetupDialogData::_bind_EnableOrientation},
	{"EnablePaper", &luna_wrapper_wxPageSetupDialogData::_bind_EnablePaper},
	{"EnablePrinter", &luna_wrapper_wxPageSetupDialogData::_bind_EnablePrinter},
	{"GetDefaultInfo", &luna_wrapper_wxPageSetupDialogData::_bind_GetDefaultInfo},
	{"GetDefaultMinMargins", &luna_wrapper_wxPageSetupDialogData::_bind_GetDefaultMinMargins},
	{"GetEnableHelp", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableHelp},
	{"GetEnableMargins", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableMargins},
	{"GetEnableOrientation", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableOrientation},
	{"GetEnablePaper", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnablePaper},
	{"GetEnablePrinter", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnablePrinter},
	{"GetMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_GetMarginBottomRight},
	{"GetMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_GetMarginTopLeft},
	{"GetMinMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_GetMinMarginBottomRight},
	{"GetMinMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_GetMinMarginTopLeft},
	{"GetPaperId", &luna_wrapper_wxPageSetupDialogData::_bind_GetPaperId},
	{"GetPaperSize", &luna_wrapper_wxPageSetupDialogData::_bind_GetPaperSize},
	{"IsOk", &luna_wrapper_wxPageSetupDialogData::_bind_IsOk},
	{"SetDefaultInfo", &luna_wrapper_wxPageSetupDialogData::_bind_SetDefaultInfo},
	{"SetDefaultMinMargins", &luna_wrapper_wxPageSetupDialogData::_bind_SetDefaultMinMargins},
	{"SetMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_SetMarginBottomRight},
	{"SetMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_SetMarginTopLeft},
	{"SetMinMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_SetMinMarginBottomRight},
	{"SetMinMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_SetMinMarginTopLeft},
	{"SetPaperId", &luna_wrapper_wxPageSetupDialogData::_bind_SetPaperId},
	{"SetPaperSize", &luna_wrapper_wxPageSetupDialogData::_bind_SetPaperSize},
	{0,0}
};

luna_ConverterType LunaTraits< wxPageSetupDialogData >::converters[] = {
	{"wxObject", &luna_wrapper_wxPageSetupDialogData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPageSetupDialogData >::enumValues[] = {
	{0,0}
};

