#include <plug_common.h>

class luna_wrapper_wxDataObjectComposite {
public:
	typedef Luna< wxDataObjectComposite > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataObjectComposite* ptr= dynamic_cast< wxDataObjectComposite* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataObjectComposite >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Add(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReceivedFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false)
	static int _bind_Add(lua_State *L) {
		if (!_lg_typecheck_Add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false) function, expected prototype:\nvoid wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false)\nClass arguments details:\narg 1 ID = 55398761\n");
		}

		int luatop = lua_gettop(L);

		wxDataObjectSimple* dataObject=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,2));
		bool preferred=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxDataObjectComposite* self=dynamic_cast< wxDataObjectComposite* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataObjectComposite::Add(wxDataObjectSimple *, bool)");
		}
		self->Add(dataObject, preferred);

		return 0;
	}

	// wxDataFormat wxDataObjectComposite::GetReceivedFormat() const
	static int _bind_GetReceivedFormat(lua_State *L) {
		if (!_lg_typecheck_GetReceivedFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataFormat wxDataObjectComposite::GetReceivedFormat() const function, expected prototype:\nwxDataFormat wxDataObjectComposite::GetReceivedFormat() const\nClass arguments details:\n");
		}


		wxDataObjectComposite* self=dynamic_cast< wxDataObjectComposite* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataFormat wxDataObjectComposite::GetReceivedFormat() const");
		}
		wxDataFormat stack_lret = self->GetReceivedFormat();
		wxDataFormat* lret = new wxDataFormat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,true);

		return 1;
	}

	// wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const
	static int _bind_GetObject(lua_State *L) {
		if (!_lg_typecheck_GetObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const function, expected prototype:\nwxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		int luatop = lua_gettop(L);

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectComposite::GetObject function");
		}
		const wxDataFormat & format=*format_ptr;
		wxDataObjectBase::Direction dir=luatop>2 ? (wxDataObjectBase::Direction)lua_tointeger(L,3) : wxDataObject::Get;

		wxDataObjectComposite* self=dynamic_cast< wxDataObjectComposite* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat &, wxDataObjectBase::Direction) const");
		}
		wxDataObjectSimple * lret = self->GetObject(format, dir);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataObjectSimple >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDataObjectComposite* LunaTraits< wxDataObjectComposite >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const

	// Abstract operators:
}

void LunaTraits< wxDataObjectComposite >::_bind_dtor(wxDataObjectComposite* obj) {
	delete obj;
}

const char LunaTraits< wxDataObjectComposite >::className[] = "wxDataObjectComposite";
const char LunaTraits< wxDataObjectComposite >::fullName[] = "wxDataObjectComposite";
const char LunaTraits< wxDataObjectComposite >::moduleName[] = "wx";
const char* LunaTraits< wxDataObjectComposite >::parents[] = {"wx.wxDataObject", 0};
const int LunaTraits< wxDataObjectComposite >::hash = 44723371;
const int LunaTraits< wxDataObjectComposite >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxDataObjectComposite >::methods[] = {
	{"Add", &luna_wrapper_wxDataObjectComposite::_bind_Add},
	{"GetReceivedFormat", &luna_wrapper_wxDataObjectComposite::_bind_GetReceivedFormat},
	{"GetObject", &luna_wrapper_wxDataObjectComposite::_bind_GetObject},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObjectComposite >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxDataObjectComposite::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObjectComposite >::enumValues[] = {
	{0,0}
};


