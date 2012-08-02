#include <plug_common.h>

class luna_wrapper_wxBitmapDataObject {
public:
	typedef Luna< wxBitmapDataObject > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBitmapDataObject* ptr= dynamic_cast< wxBitmapDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapDataObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxBitmap wxBitmapDataObject::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapDataObject::GetBitmap() const function, expected prototype:\nwxBitmap wxBitmapDataObject::GetBitmap() const\nClass arguments details:\n");
		}


		wxBitmapDataObject* self=dynamic_cast< wxBitmapDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapDataObject::GetBitmap() const");
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapDataObject::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapDataObject::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapDataObject* self=dynamic_cast< wxBitmapDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmapDataObject::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(bitmap);

		return 0;
	}


	// Operator binds:

};

wxBitmapDataObject* LunaTraits< wxBitmapDataObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const

	// Abstract operators:
}

void LunaTraits< wxBitmapDataObject >::_bind_dtor(wxBitmapDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapDataObject >::className[] = "wxBitmapDataObject";
const char LunaTraits< wxBitmapDataObject >::fullName[] = "wxBitmapDataObject";
const char LunaTraits< wxBitmapDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxBitmapDataObject >::hash = 45771097;
const int LunaTraits< wxBitmapDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxBitmapDataObject >::methods[] = {
	{"GetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_GetBitmap},
	{"SetBitmap", &luna_wrapper_wxBitmapDataObject::_bind_SetBitmap},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxBitmapDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapDataObject >::enumValues[] = {
	{0,0}
};


