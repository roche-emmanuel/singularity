#include <plug_common.h>

class luna_wrapper_wxLayoutConstraints {
public:
	typedef Luna< wxLayoutConstraints > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLayoutConstraints* ptr= dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLayoutConstraints >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SatisfyConstraints(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreSatisfied(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLayoutConstraints::wxLayoutConstraints()
	static wxLayoutConstraints* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutConstraints::wxLayoutConstraints() function, expected prototype:\nwxLayoutConstraints::wxLayoutConstraints()\nClass arguments details:\n");
		}


		return new wxLayoutConstraints();
	}


	// Function binds:
	// bool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges)
	static int _bind_SatisfyConstraints(lua_State *L) {
		if (!_lg_typecheck_SatisfyConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges) function, expected prototype:\nbool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int noChanges=(int)lua_tointeger(L,3);

		wxLayoutConstraints* self=dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLayoutConstraints::SatisfyConstraints(wxWindow *, int *)");
		}
		bool lret = self->SatisfyConstraints(win, &noChanges);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutConstraints::AreSatisfied() const
	static int _bind_AreSatisfied(lua_State *L) {
		if (!_lg_typecheck_AreSatisfied(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLayoutConstraints::AreSatisfied() const function, expected prototype:\nbool wxLayoutConstraints::AreSatisfied() const\nClass arguments details:\n");
		}


		wxLayoutConstraints* self=dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLayoutConstraints::AreSatisfied() const");
		}
		bool lret = self->AreSatisfied();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxLayoutConstraints* LunaTraits< wxLayoutConstraints >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLayoutConstraints::_bind_ctor(L);
}

void LunaTraits< wxLayoutConstraints >::_bind_dtor(wxLayoutConstraints* obj) {
	delete obj;
}

const char LunaTraits< wxLayoutConstraints >::className[] = "wxLayoutConstraints";
const char LunaTraits< wxLayoutConstraints >::fullName[] = "wxLayoutConstraints";
const char LunaTraits< wxLayoutConstraints >::moduleName[] = "wx";
const char* LunaTraits< wxLayoutConstraints >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxLayoutConstraints >::hash = 86137086;
const int LunaTraits< wxLayoutConstraints >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxLayoutConstraints >::methods[] = {
	{"SatisfyConstraints", &luna_wrapper_wxLayoutConstraints::_bind_SatisfyConstraints},
	{"AreSatisfied", &luna_wrapper_wxLayoutConstraints::_bind_AreSatisfied},
	{0,0}
};

luna_ConverterType LunaTraits< wxLayoutConstraints >::converters[] = {
	{"wxObject", &luna_wrapper_wxLayoutConstraints::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLayoutConstraints >::enumValues[] = {
	{0,0}
};

