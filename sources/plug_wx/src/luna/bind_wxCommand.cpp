#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCommand.h>

class luna_wrapper_wxCommand {
public:
	typedef Luna< wxCommand > luna_t;

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
		wxCommand* ptr= dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommand >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Do(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxCommand::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommand::CanUndo() const function, expected prototype:\nbool wxCommand::CanUndo() const\nClass arguments details:\n");
		}


		wxCommand* self=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommand::CanUndo() const");
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCommand::Do()
	static int _bind_Do(lua_State *L) {
		if (!_lg_typecheck_Do(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommand::Do() function, expected prototype:\nbool wxCommand::Do()\nClass arguments details:\n");
		}


		wxCommand* self=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommand::Do()");
		}
		bool lret = self->Do();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxCommand::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommand::GetName() const function, expected prototype:\nwxString wxCommand::GetName() const\nClass arguments details:\n");
		}


		wxCommand* self=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommand::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxCommand::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommand::Undo() function, expected prototype:\nbool wxCommand::Undo()\nClass arguments details:\n");
		}


		wxCommand* self=dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommand::Undo()");
		}
		bool lret = self->Undo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCommand* LunaTraits< wxCommand >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxCommand::Do()
	// bool wxCommand::Undo()
}

void LunaTraits< wxCommand >::_bind_dtor(wxCommand* obj) {
	delete obj;
}

const char LunaTraits< wxCommand >::className[] = "wxCommand";
const char LunaTraits< wxCommand >::fullName[] = "wxCommand";
const char LunaTraits< wxCommand >::moduleName[] = "wx";
const char* LunaTraits< wxCommand >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxCommand >::hash = 86364916;
const int LunaTraits< wxCommand >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCommand >::methods[] = {
	{"CanUndo", &luna_wrapper_wxCommand::_bind_CanUndo},
	{"Do", &luna_wrapper_wxCommand::_bind_Do},
	{"GetName", &luna_wrapper_wxCommand::_bind_GetName},
	{"Undo", &luna_wrapper_wxCommand::_bind_Undo},
	{"__eq", &luna_wrapper_wxCommand::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommand >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommand::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommand >::enumValues[] = {
	{0,0}
};


