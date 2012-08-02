#include <plug_common.h>

class luna_wrapper_wxTreeItemData {
public:
	typedef Luna< wxTreeItemData > luna_t;

	// Derived class converters:
	static int _cast_from_wxClientData(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTreeItemData* ptr= dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeItemData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeItemData::wxTreeItemData()
	static wxTreeItemData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTreeItemData::wxTreeItemData() function, expected prototype:\nwxTreeItemData::wxTreeItemData()\nClass arguments details:\n");
		}


		return new wxTreeItemData();
	}


	// Function binds:
	// const wxTreeItemId & wxTreeItemData::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTreeItemId & wxTreeItemData::GetId() const function, expected prototype:\nconst wxTreeItemId & wxTreeItemData::GetId() const\nClass arguments details:\n");
		}


		wxTreeItemData* self=dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTreeItemId & wxTreeItemData::GetId() const");
		}
		const wxTreeItemId* lret = &self->GetId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,false);

		return 1;
	}

	// void wxTreeItemData::SetId(const wxTreeItemId & id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTreeItemData::SetId(const wxTreeItemId & id) function, expected prototype:\nvoid wxTreeItemData::SetId(const wxTreeItemId & id)\nClass arguments details:\narg 1 ID = 28400299\n");
		}

		const wxTreeItemId* id_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in wxTreeItemData::SetId function");
		}
		const wxTreeItemId & id=*id_ptr;

		wxTreeItemData* self=dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTreeItemData::SetId(const wxTreeItemId &)");
		}
		self->SetId(id);

		return 0;
	}


	// Operator binds:

};

wxTreeItemData* LunaTraits< wxTreeItemData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeItemData::_bind_ctor(L);
}

void LunaTraits< wxTreeItemData >::_bind_dtor(wxTreeItemData* obj) {
	delete obj;
}

const char LunaTraits< wxTreeItemData >::className[] = "wxTreeItemData";
const char LunaTraits< wxTreeItemData >::fullName[] = "wxTreeItemData";
const char LunaTraits< wxTreeItemData >::moduleName[] = "wx";
const char* LunaTraits< wxTreeItemData >::parents[] = {"wx.wxClientData", 0};
const int LunaTraits< wxTreeItemData >::hash = 92535634;
const int LunaTraits< wxTreeItemData >::uniqueIDs[] = {50457573,0};

luna_RegType LunaTraits< wxTreeItemData >::methods[] = {
	{"GetId", &luna_wrapper_wxTreeItemData::_bind_GetId},
	{"SetId", &luna_wrapper_wxTreeItemData::_bind_SetId},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeItemData >::converters[] = {
	{"wxClientData", &luna_wrapper_wxTreeItemData::_cast_from_wxClientData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeItemData >::enumValues[] = {
	{0,0}
};


