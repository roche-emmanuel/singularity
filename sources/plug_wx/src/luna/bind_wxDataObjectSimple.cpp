#include <plug_common.h>

class luna_wrapper_wxDataObjectSimple {
public:
	typedef Luna< wxDataObjectSimple > luna_t;

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataObjectSimple* ptr= dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataObjectSimple >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDataHere(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDataObjectSimple::GetDataHere(void * buf) const
	static int _bind_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_GetDataHere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::GetDataHere(void * buf) const function, expected prototype:\nbool wxDataObjectSimple::GetDataHere(void * buf) const\nClass arguments details:\n");
		}

		void* buf=(Luna< void >::check(L,2));

		wxDataObjectSimple* self=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::GetDataHere(void *) const");
		}
		bool lret = self->GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDataObjectSimple::GetDataSize() const
	static int _bind_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_GetDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxDataObjectSimple::GetDataSize() const function, expected prototype:\nsize_t wxDataObjectSimple::GetDataSize() const\nClass arguments details:\n");
		}


		wxDataObjectSimple* self=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxDataObjectSimple::GetDataSize() const");
		}
		size_t lret = self->GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxDataFormat & wxDataObjectSimple::GetFormat() const
	static int _bind_GetFormat(lua_State *L) {
		if (!_lg_typecheck_GetFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDataFormat & wxDataObjectSimple::GetFormat() const function, expected prototype:\nconst wxDataFormat & wxDataObjectSimple::GetFormat() const\nClass arguments details:\n");
		}


		wxDataObjectSimple* self=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDataFormat & wxDataObjectSimple::GetFormat() const");
		}
		const wxDataFormat* lret = &self->GetFormat();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,false);

		return 1;
	}

	// bool wxDataObjectSimple::SetData(size_t len, const void * buf)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataObjectSimple::SetData(size_t len, const void * buf) function, expected prototype:\nbool wxDataObjectSimple::SetData(size_t len, const void * buf)\nClass arguments details:\n");
		}

		size_t len=(size_t)lua_tointeger(L,2);
		void* buf=(Luna< void >::check(L,3));

		wxDataObjectSimple* self=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataObjectSimple::SetData(size_t, const void *)");
		}
		bool lret = self->SetData(len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataObjectSimple::SetFormat(const wxDataFormat & format)
	static int _bind_SetFormat(lua_State *L) {
		if (!_lg_typecheck_SetFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataObjectSimple::SetFormat(const wxDataFormat & format) function, expected prototype:\nvoid wxDataObjectSimple::SetFormat(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n");
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectSimple::SetFormat function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataObjectSimple* self=dynamic_cast< wxDataObjectSimple* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataObjectSimple::SetFormat(const wxDataFormat &)");
		}
		self->SetFormat(format);

		return 0;
	}


	// Operator binds:

};

wxDataObjectSimple* LunaTraits< wxDataObjectSimple >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const

	// Abstract operators:
}

void LunaTraits< wxDataObjectSimple >::_bind_dtor(wxDataObjectSimple* obj) {
	delete obj;
}

const char LunaTraits< wxDataObjectSimple >::className[] = "wxDataObjectSimple";
const char LunaTraits< wxDataObjectSimple >::fullName[] = "wxDataObjectSimple";
const char LunaTraits< wxDataObjectSimple >::moduleName[] = "wx";
const char* LunaTraits< wxDataObjectSimple >::parents[] = {"wx.wxDataObject", 0};
const int LunaTraits< wxDataObjectSimple >::hash = 89880179;
const int LunaTraits< wxDataObjectSimple >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxDataObjectSimple >::methods[] = {
	{"GetDataHere", &luna_wrapper_wxDataObjectSimple::_bind_GetDataHere},
	{"GetDataSize", &luna_wrapper_wxDataObjectSimple::_bind_GetDataSize},
	{"GetFormat", &luna_wrapper_wxDataObjectSimple::_bind_GetFormat},
	{"SetData", &luna_wrapper_wxDataObjectSimple::_bind_SetData},
	{"SetFormat", &luna_wrapper_wxDataObjectSimple::_bind_SetFormat},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObjectSimple >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxDataObjectSimple::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObjectSimple >::enumValues[] = {
	{0,0}
};

