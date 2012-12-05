#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClipboard.h>

class luna_wrapper_wxClipboard {
public:
	typedef Luna< wxClipboard > luna_t;

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
		wxClipboard* ptr= dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClipboard >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55398761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsUsingPrimarySelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UsePrimarySelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClipboard::wxClipboard()
	static wxClipboard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClipboard::wxClipboard() function, expected prototype:\nwxClipboard::wxClipboard()\nClass arguments details:\n");
		}


		return new wxClipboard();
	}

	// wxClipboard::wxClipboard(lua_Table * data)
	static wxClipboard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClipboard::wxClipboard(lua_Table * data) function, expected prototype:\nwxClipboard::wxClipboard(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxClipboard(L,NULL);
	}

	// Overload binder for wxClipboard::wxClipboard
	static wxClipboard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxClipboard, cannot match any of the overloads for function wxClipboard:\n  wxClipboard()\n  wxClipboard(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxClipboard::AddData(wxDataObject * data)
	static int _bind_AddData(lua_State *L) {
		if (!_lg_typecheck_AddData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::AddData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::AddData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::AddData(wxDataObject *)");
		}
		bool lret = self->AddData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxClipboard::Clear() function, expected prototype:\nvoid wxClipboard::Clear()\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxClipboard::Clear()");
		}
		self->Clear();

		return 0;
	}

	// void wxClipboard::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxClipboard::Close() function, expected prototype:\nvoid wxClipboard::Close()\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxClipboard::Close()");
		}
		self->Close();

		return 0;
	}

	// bool wxClipboard::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::Flush() function, expected prototype:\nbool wxClipboard::Flush()\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::Flush()");
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::GetData(wxDataObject & data)
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::GetData(wxDataObject & data) function, expected prototype:\nbool wxClipboard::GetData(wxDataObject & data)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxClipboard::GetData function");
		}
		wxDataObject & data=*data_ptr;

		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::GetData(wxDataObject &)");
		}
		bool lret = self->GetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsOpened() const function, expected prototype:\nbool wxClipboard::IsOpened() const\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsOpened() const");
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsSupported(const wxDataFormat & format)
	static int _bind_IsSupported(lua_State *L) {
		if (!_lg_typecheck_IsSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsSupported(const wxDataFormat & format) function, expected prototype:\nbool wxClipboard::IsSupported(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxClipboard::IsSupported function");
		}
		const wxDataFormat & format=*format_ptr;

		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsSupported(const wxDataFormat &)");
		}
		bool lret = self->IsSupported(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsUsingPrimarySelection() const
	static int _bind_IsUsingPrimarySelection(lua_State *L) {
		if (!_lg_typecheck_IsUsingPrimarySelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsUsingPrimarySelection() const function, expected prototype:\nbool wxClipboard::IsUsingPrimarySelection() const\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsUsingPrimarySelection() const");
		}
		bool lret = self->IsUsingPrimarySelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::Open()
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::Open() function, expected prototype:\nbool wxClipboard::Open()\nClass arguments details:\n");
		}


		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::Open()");
		}
		bool lret = self->Open();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::SetData(wxDataObject * data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClipboard::SetData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::SetData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClipboard::SetData(wxDataObject *)");
		}
		bool lret = self->SetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::UsePrimarySelection(bool primary = false)
	static int _bind_UsePrimarySelection(lua_State *L) {
		if (!_lg_typecheck_UsePrimarySelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxClipboard::UsePrimarySelection(bool primary = false) function, expected prototype:\nvoid wxClipboard::UsePrimarySelection(bool primary = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool primary=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxClipboard* self=dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxClipboard::UsePrimarySelection(bool)");
		}
		self->UsePrimarySelection(primary);

		return 0;
	}


	// Operator binds:

};

wxClipboard* LunaTraits< wxClipboard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClipboard::_bind_ctor(L);
}

void LunaTraits< wxClipboard >::_bind_dtor(wxClipboard* obj) {
	delete obj;
}

const char LunaTraits< wxClipboard >::className[] = "wxClipboard";
const char LunaTraits< wxClipboard >::fullName[] = "wxClipboard";
const char LunaTraits< wxClipboard >::moduleName[] = "wx";
const char* LunaTraits< wxClipboard >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxClipboard >::hash = 95668084;
const int LunaTraits< wxClipboard >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClipboard >::methods[] = {
	{"AddData", &luna_wrapper_wxClipboard::_bind_AddData},
	{"Clear", &luna_wrapper_wxClipboard::_bind_Clear},
	{"Close", &luna_wrapper_wxClipboard::_bind_Close},
	{"Flush", &luna_wrapper_wxClipboard::_bind_Flush},
	{"GetData", &luna_wrapper_wxClipboard::_bind_GetData},
	{"IsOpened", &luna_wrapper_wxClipboard::_bind_IsOpened},
	{"IsSupported", &luna_wrapper_wxClipboard::_bind_IsSupported},
	{"IsUsingPrimarySelection", &luna_wrapper_wxClipboard::_bind_IsUsingPrimarySelection},
	{"Open", &luna_wrapper_wxClipboard::_bind_Open},
	{"SetData", &luna_wrapper_wxClipboard::_bind_SetData},
	{"UsePrimarySelection", &luna_wrapper_wxClipboard::_bind_UsePrimarySelection},
	{"__eq", &luna_wrapper_wxClipboard::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxClipboard >::converters[] = {
	{"wxObject", &luna_wrapper_wxClipboard::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClipboard >::enumValues[] = {
	{0,0}
};


