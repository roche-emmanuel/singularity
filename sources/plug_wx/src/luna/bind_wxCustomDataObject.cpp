#include <plug_common.h>

class luna_wrapper_wxCustomDataObject {
public:
	typedef Luna< wxCustomDataObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataObject*)");
		}

		wxDataObject* rhs =(Luna< wxDataObject >::check(L,2));
		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxCustomDataObject* ptr= dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCustomDataObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Alloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TakeData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void * wxCustomDataObject::Alloc(size_t size)
	static int _bind_Alloc(lua_State *L) {
		if (!_lg_typecheck_Alloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::Alloc(size_t size) function, expected prototype:\nvoid * wxCustomDataObject::Alloc(size_t size)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);

		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::Alloc(size_t)");
		}
		void * lret = self->Alloc(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxCustomDataObject::Free()
	static int _bind_Free(lua_State *L) {
		if (!_lg_typecheck_Free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCustomDataObject::Free() function, expected prototype:\nvoid wxCustomDataObject::Free()\nClass arguments details:\n");
		}


		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCustomDataObject::Free()");
		}
		self->Free();

		return 0;
	}

	// void * wxCustomDataObject::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxCustomDataObject::GetData() const function, expected prototype:\nvoid * wxCustomDataObject::GetData() const\nClass arguments details:\n");
		}


		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxCustomDataObject::GetData() const");
		}
		void * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// size_t wxCustomDataObject::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxCustomDataObject::GetSize() const function, expected prototype:\nsize_t wxCustomDataObject::GetSize() const\nClass arguments details:\n");
		}


		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxCustomDataObject::GetSize() const");
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxCustomDataObject::SetData(size_t size, const void * data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCustomDataObject::SetData(size_t size, const void * data) function, expected prototype:\nbool wxCustomDataObject::SetData(size_t size, const void * data)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);
		void* data=(Luna< void >::check(L,3));

		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCustomDataObject::SetData(size_t, const void *)");
		}
		bool lret = self->SetData(size, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCustomDataObject::TakeData(size_t size, void * data)
	static int _bind_TakeData(lua_State *L) {
		if (!_lg_typecheck_TakeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCustomDataObject::TakeData(size_t size, void * data) function, expected prototype:\nvoid wxCustomDataObject::TakeData(size_t size, void * data)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);
		void* data=(Luna< void >::check(L,3));

		wxCustomDataObject* self=dynamic_cast< wxCustomDataObject* >(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCustomDataObject::TakeData(size_t, void *)");
		}
		self->TakeData(size, data);

		return 0;
	}


	// Operator binds:

};

wxCustomDataObject* LunaTraits< wxCustomDataObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const

	// Abstract operators:
}

void LunaTraits< wxCustomDataObject >::_bind_dtor(wxCustomDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxCustomDataObject >::className[] = "wxCustomDataObject";
const char LunaTraits< wxCustomDataObject >::fullName[] = "wxCustomDataObject";
const char LunaTraits< wxCustomDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxCustomDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxCustomDataObject >::hash = 68945453;
const int LunaTraits< wxCustomDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxCustomDataObject >::methods[] = {
	{"Alloc", &luna_wrapper_wxCustomDataObject::_bind_Alloc},
	{"Free", &luna_wrapper_wxCustomDataObject::_bind_Free},
	{"GetData", &luna_wrapper_wxCustomDataObject::_bind_GetData},
	{"GetSize", &luna_wrapper_wxCustomDataObject::_bind_GetSize},
	{"SetData", &luna_wrapper_wxCustomDataObject::_bind_SetData},
	{"TakeData", &luna_wrapper_wxCustomDataObject::_bind_TakeData},
	{"__eq", &luna_wrapper_wxCustomDataObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCustomDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxCustomDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCustomDataObject >::enumValues[] = {
	{0,0}
};


