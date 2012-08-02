#include <plug_common.h>

class luna_wrapper_wxDataViewChoiceRenderer {
public:
	typedef Luna< wxDataViewChoiceRenderer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDataViewChoiceRenderer* ptr= dynamic_cast< wxDataViewChoiceRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewChoiceRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetChoice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChoices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxString wxDataViewChoiceRenderer::GetChoice(size_t index) const
	static int _bind_GetChoice(lua_State *L) {
		if (!_lg_typecheck_GetChoice(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataViewChoiceRenderer::GetChoice(size_t index) const function, expected prototype:\nwxString wxDataViewChoiceRenderer::GetChoice(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxDataViewChoiceRenderer* self=dynamic_cast< wxDataViewChoiceRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataViewChoiceRenderer::GetChoice(size_t) const");
		}
		wxString lret = self->GetChoice(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const
	static int _bind_GetChoices(lua_State *L) {
		if (!_lg_typecheck_GetChoices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const function, expected prototype:\nconst wxArrayString & wxDataViewChoiceRenderer::GetChoices() const\nClass arguments details:\n");
		}


		wxDataViewChoiceRenderer* self=dynamic_cast< wxDataViewChoiceRenderer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayString & wxDataViewChoiceRenderer::GetChoices() const");
		}
		const wxArrayString* lret = &self->GetChoices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDataViewChoiceRenderer* LunaTraits< wxDataViewChoiceRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)

	// Abstract operators:
}

void LunaTraits< wxDataViewChoiceRenderer >::_bind_dtor(wxDataViewChoiceRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewChoiceRenderer >::className[] = "wxDataViewChoiceRenderer";
const char LunaTraits< wxDataViewChoiceRenderer >::fullName[] = "wxDataViewChoiceRenderer";
const char LunaTraits< wxDataViewChoiceRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewChoiceRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewChoiceRenderer >::hash = 49475747;
const int LunaTraits< wxDataViewChoiceRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewChoiceRenderer >::methods[] = {
	{"GetChoice", &luna_wrapper_wxDataViewChoiceRenderer::_bind_GetChoice},
	{"GetChoices", &luna_wrapper_wxDataViewChoiceRenderer::_bind_GetChoices},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewChoiceRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewChoiceRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewChoiceRenderer >::enumValues[] = {
	{0,0}
};


