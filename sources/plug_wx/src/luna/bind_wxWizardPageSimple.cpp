#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizardPageSimple.h>

class luna_wrapper_wxWizardPageSimple {
public:
	typedef Luna< wxWizardPageSimple > luna_t;

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
		wxWizardPageSimple* ptr= dynamic_cast< wxWizardPageSimple* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizardPageSimple >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Chain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxWizardPageSimple::SetNext(wxWizardPage * next)
	static int _bind_SetNext(lua_State *L) {
		if (!_lg_typecheck_SetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizardPageSimple::SetNext(wxWizardPage * next) function, expected prototype:\nvoid wxWizardPageSimple::SetNext(wxWizardPage * next)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWizardPage* next=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizardPageSimple* self=dynamic_cast< wxWizardPageSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizardPageSimple::SetNext(wxWizardPage *)");
		}
		self->SetNext(next);

		return 0;
	}

	// void wxWizardPageSimple::SetPrev(wxWizardPage * prev)
	static int _bind_SetPrev(lua_State *L) {
		if (!_lg_typecheck_SetPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWizardPageSimple::SetPrev(wxWizardPage * prev) function, expected prototype:\nvoid wxWizardPageSimple::SetPrev(wxWizardPage * prev)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWizardPage* prev=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,2));

		wxWizardPageSimple* self=dynamic_cast< wxWizardPageSimple* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWizardPageSimple::SetPrev(wxWizardPage *)");
		}
		self->SetPrev(prev);

		return 0;
	}

	// static void wxWizardPageSimple::Chain(wxWizardPageSimple * first, wxWizardPageSimple * second)
	static int _bind_Chain(lua_State *L) {
		if (!_lg_typecheck_Chain(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxWizardPageSimple::Chain(wxWizardPageSimple * first, wxWizardPageSimple * second) function, expected prototype:\nstatic void wxWizardPageSimple::Chain(wxWizardPageSimple * first, wxWizardPageSimple * second)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxWizardPageSimple* first=dynamic_cast< wxWizardPageSimple* >(Luna< wxObject >::check(L,1));
		wxWizardPageSimple* second=dynamic_cast< wxWizardPageSimple* >(Luna< wxObject >::check(L,2));

		wxWizardPageSimple::Chain(first, second);

		return 0;
	}


	// Operator binds:

};

wxWizardPageSimple* LunaTraits< wxWizardPageSimple >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxWizardPage * wxWizardPage::GetNext() const
	// wxWizardPage * wxWizardPage::GetPrev() const
}

void LunaTraits< wxWizardPageSimple >::_bind_dtor(wxWizardPageSimple* obj) {
	delete obj;
}

const char LunaTraits< wxWizardPageSimple >::className[] = "wxWizardPageSimple";
const char LunaTraits< wxWizardPageSimple >::fullName[] = "wxWizardPageSimple";
const char LunaTraits< wxWizardPageSimple >::moduleName[] = "wx";
const char* LunaTraits< wxWizardPageSimple >::parents[] = {"wx.wxWizardPage", 0};
const int LunaTraits< wxWizardPageSimple >::hash = 6846177;
const int LunaTraits< wxWizardPageSimple >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWizardPageSimple >::methods[] = {
	{"SetNext", &luna_wrapper_wxWizardPageSimple::_bind_SetNext},
	{"SetPrev", &luna_wrapper_wxWizardPageSimple::_bind_SetPrev},
	{"Chain", &luna_wrapper_wxWizardPageSimple::_bind_Chain},
	{"__eq", &luna_wrapper_wxWizardPageSimple::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizardPageSimple >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizardPageSimple::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizardPageSimple >::enumValues[] = {
	{0,0}
};


