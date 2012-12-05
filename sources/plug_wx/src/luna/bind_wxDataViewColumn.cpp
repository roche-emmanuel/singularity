#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewColumn.h>

class luna_wrapper_wxDataViewColumn {
public:
	typedef Luna< wxDataViewColumn > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,185523) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderColumn*)");
		}

		wxHeaderColumn* rhs =(Luna< wxHeaderColumn >::check(L,2));
		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxHeaderColumn(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewColumn* ptr= dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewColumn >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetModelColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// unsigned int wxDataViewColumn::GetModelColumn() const
	static int _bind_GetModelColumn(lua_State *L) {
		if (!_lg_typecheck_GetModelColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewColumn::GetModelColumn() const function, expected prototype:\nunsigned int wxDataViewColumn::GetModelColumn() const\nClass arguments details:\n");
		}


		wxDataViewColumn* self=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewColumn::GetModelColumn() const");
		}
		unsigned int lret = self->GetModelColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCtrl * wxDataViewColumn::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl * wxDataViewColumn::GetOwner() const function, expected prototype:\nwxDataViewCtrl * wxDataViewColumn::GetOwner() const\nClass arguments details:\n");
		}


		wxDataViewColumn* self=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewCtrl * wxDataViewColumn::GetOwner() const");
		}
		wxDataViewCtrl * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewCtrl >::push(L,lret,false);

		return 1;
	}

	// wxDataViewRenderer * wxDataViewColumn::GetRenderer() const
	static int _bind_GetRenderer(lua_State *L) {
		if (!_lg_typecheck_GetRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataViewRenderer * wxDataViewColumn::GetRenderer() const function, expected prototype:\nwxDataViewRenderer * wxDataViewColumn::GetRenderer() const\nClass arguments details:\n");
		}


		wxDataViewColumn* self=dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataViewRenderer * wxDataViewColumn::GetRenderer() const");
		}
		wxDataViewRenderer * lret = self->GetRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewRenderer >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDataViewColumn* LunaTraits< wxDataViewColumn >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxSettableHeaderColumn::SetTitle(const wxString & title)
	// void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)
	// void wxSettableHeaderColumn::SetWidth(int width)
	// void wxSettableHeaderColumn::SetMinWidth(int minWidth)
	// void wxSettableHeaderColumn::SetAlignment(wxAlignment align)
	// void wxSettableHeaderColumn::SetFlags(int flags)
	// void wxSettableHeaderColumn::SetSortOrder(bool ascending)
	// wxString wxHeaderColumn::GetTitle() const
	// wxBitmap wxHeaderColumn::GetBitmap() const
	// int wxHeaderColumn::GetWidth() const
	// int wxHeaderColumn::GetMinWidth() const
	// wxAlignment wxHeaderColumn::GetAlignment() const
	// int wxHeaderColumn::GetFlags() const
	// bool wxHeaderColumn::IsSortKey() const
	// bool wxHeaderColumn::IsSortOrderAscending() const
}

void LunaTraits< wxDataViewColumn >::_bind_dtor(wxDataViewColumn* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewColumn >::className[] = "wxDataViewColumn";
const char LunaTraits< wxDataViewColumn >::fullName[] = "wxDataViewColumn";
const char LunaTraits< wxDataViewColumn >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewColumn >::parents[] = {"wx.wxSettableHeaderColumn", 0};
const int LunaTraits< wxDataViewColumn >::hash = 76490705;
const int LunaTraits< wxDataViewColumn >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxDataViewColumn >::methods[] = {
	{"GetModelColumn", &luna_wrapper_wxDataViewColumn::_bind_GetModelColumn},
	{"GetOwner", &luna_wrapper_wxDataViewColumn::_bind_GetOwner},
	{"GetRenderer", &luna_wrapper_wxDataViewColumn::_bind_GetRenderer},
	{"__eq", &luna_wrapper_wxDataViewColumn::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewColumn >::converters[] = {
	{"wxHeaderColumn", &luna_wrapper_wxDataViewColumn::_cast_from_wxHeaderColumn},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewColumn >::enumValues[] = {
	{0,0}
};


