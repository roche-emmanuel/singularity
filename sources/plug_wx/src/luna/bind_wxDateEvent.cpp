#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDateEvent.h>

class luna_wrapper_wxDateEvent {
public:
	typedef Luna< wxDateEvent > luna_t;

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
		wxDateEvent* ptr= dynamic_cast< wxDateEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDateEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const wxDateTime & wxDateEvent::GetDate() const
	static int _bind_GetDate(lua_State *L) {
		if (!_lg_typecheck_GetDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxDateTime & wxDateEvent::GetDate() const function, expected prototype:\nconst wxDateTime & wxDateEvent::GetDate() const\nClass arguments details:\n");
		}


		wxDateEvent* self=dynamic_cast< wxDateEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxDateTime & wxDateEvent::GetDate() const");
		}
		const wxDateTime* lret = &self->GetDate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// void wxDateEvent::SetDate(const wxDateTime & date)
	static int _bind_SetDate(lua_State *L) {
		if (!_lg_typecheck_SetDate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDateEvent::SetDate(const wxDateTime & date) function, expected prototype:\nvoid wxDateEvent::SetDate(const wxDateTime & date)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		const wxDateTime* date_ptr=(Luna< wxDateTime >::check(L,2));
		if( !date_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg date in wxDateEvent::SetDate function");
		}
		const wxDateTime & date=*date_ptr;

		wxDateEvent* self=dynamic_cast< wxDateEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDateEvent::SetDate(const wxDateTime &)");
		}
		self->SetDate(date);

		return 0;
	}


	// Operator binds:

};

wxDateEvent* LunaTraits< wxDateEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxDateEvent >::_bind_dtor(wxDateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDateEvent >::className[] = "wxDateEvent";
const char LunaTraits< wxDateEvent >::fullName[] = "wxDateEvent";
const char LunaTraits< wxDateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDateEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxDateEvent >::hash = 68950077;
const int LunaTraits< wxDateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDateEvent >::methods[] = {
	{"GetDate", &luna_wrapper_wxDateEvent::_bind_GetDate},
	{"SetDate", &luna_wrapper_wxDateEvent::_bind_SetDate},
	{"__eq", &luna_wrapper_wxDateEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateEvent >::enumValues[] = {
	{0,0}
};


