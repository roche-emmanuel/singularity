#include <plug_common.h>

class luna_wrapper_wxClientDataContainer {
public:
	typedef Luna< wxClientDataContainer > luna_t;

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

		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxClientDataContainer");
		
		return luna_dynamicCast(L,converters,"wxClientDataContainer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClientDataContainer::wxClientDataContainer()
	static wxClientDataContainer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientDataContainer::wxClientDataContainer() function, expected prototype:\nwxClientDataContainer::wxClientDataContainer()\nClass arguments details:\n");
		}


		return new wxClientDataContainer();
	}


	// Function binds:
	// void * wxClientDataContainer::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxClientDataContainer::GetClientData() const function, expected prototype:\nvoid * wxClientDataContainer::GetClientData() const\nClass arguments details:\n");
		}


		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxClientDataContainer::GetClientData() const");
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxClientDataContainer::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxClientDataContainer::GetClientObject() const function, expected prototype:\nwxClientData * wxClientDataContainer::GetClientObject() const\nClass arguments details:\n");
		}


		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxClientDataContainer::GetClientObject() const");
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxClientDataContainer::SetClientData(void * data)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxClientDataContainer::SetClientData(void * data) function, expected prototype:\nvoid wxClientDataContainer::SetClientData(void * data)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));

		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxClientDataContainer::SetClientData(void *)");
		}
		self->SetClientData(data);

		return 0;
	}

	// void wxClientDataContainer::SetClientObject(wxClientData * data)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxClientDataContainer::SetClientObject(wxClientData * data) function, expected prototype:\nvoid wxClientDataContainer::SetClientObject(wxClientData * data)\nClass arguments details:\narg 1 ID = 50457573\n");
		}

		wxClientData* data=(Luna< wxClientData >::check(L,2));

		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxClientDataContainer::SetClientObject(wxClientData *)");
		}
		self->SetClientObject(data);

		return 0;
	}


	// Operator binds:

};

wxClientDataContainer* LunaTraits< wxClientDataContainer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClientDataContainer::_bind_ctor(L);
}

void LunaTraits< wxClientDataContainer >::_bind_dtor(wxClientDataContainer* obj) {
	delete obj;
}

const char LunaTraits< wxClientDataContainer >::className[] = "wxClientDataContainer";
const char LunaTraits< wxClientDataContainer >::fullName[] = "wxClientDataContainer";
const char LunaTraits< wxClientDataContainer >::moduleName[] = "wx";
const char* LunaTraits< wxClientDataContainer >::parents[] = {0};
const int LunaTraits< wxClientDataContainer >::hash = 96494917;
const int LunaTraits< wxClientDataContainer >::uniqueIDs[] = {96494917,0};

luna_RegType LunaTraits< wxClientDataContainer >::methods[] = {
	{"GetClientData", &luna_wrapper_wxClientDataContainer::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxClientDataContainer::_bind_GetClientObject},
	{"SetClientData", &luna_wrapper_wxClientDataContainer::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxClientDataContainer::_bind_SetClientObject},
	{"dynCast", &luna_wrapper_wxClientDataContainer::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxClientDataContainer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxClientDataContainer >::enumValues[] = {
	{0,0}
};

