#include <plug_common.h>

#include <luna/wrappers/wrapper_wxModule.h>

class luna_wrapper_wxModule {
public:
	typedef Luna< wxModule > luna_t;

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
		wxModule* ptr= dynamic_cast< wxModule* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxModule >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxModule::OnExit()
	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxModule::OnExit() function, expected prototype:\nvoid wxModule::OnExit()\nClass arguments details:\n");
		}


		wxModule* self=dynamic_cast< wxModule* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxModule::OnExit()");
		}
		self->OnExit();

		return 0;
	}

	// bool wxModule::OnInit()
	static int _bind_OnInit(lua_State *L) {
		if (!_lg_typecheck_OnInit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxModule::OnInit() function, expected prototype:\nbool wxModule::OnInit()\nClass arguments details:\n");
		}


		wxModule* self=dynamic_cast< wxModule* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxModule::OnInit()");
		}
		bool lret = self->OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxModule* LunaTraits< wxModule >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxModule::OnExit()
	// bool wxModule::OnInit()
}

void LunaTraits< wxModule >::_bind_dtor(wxModule* obj) {
	delete obj;
}

const char LunaTraits< wxModule >::className[] = "wxModule";
const char LunaTraits< wxModule >::fullName[] = "wxModule";
const char LunaTraits< wxModule >::moduleName[] = "wx";
const char* LunaTraits< wxModule >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxModule >::hash = 11397996;
const int LunaTraits< wxModule >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxModule >::methods[] = {
	{"OnExit", &luna_wrapper_wxModule::_bind_OnExit},
	{"OnInit", &luna_wrapper_wxModule::_bind_OnInit},
	{"__eq", &luna_wrapper_wxModule::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxModule >::converters[] = {
	{"wxObject", &luna_wrapper_wxModule::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxModule >::enumValues[] = {
	{0,0}
};


