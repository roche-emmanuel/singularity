#include <plug_common.h>

#include <luna/wrappers/wrapper_wxQuantize.h>

class luna_wrapper_wxQuantize {
public:
	typedef Luna< wxQuantize > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxQuantize* ptr= dynamic_cast< wxQuantize* >(Luna< wxObject >::check(L,1));
		wxQuantize* ptr= luna_caster< wxObject, wxQuantize >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxQuantize >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxQuantize::wxQuantize()
	static wxQuantize* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxQuantize::wxQuantize() function, expected prototype:\nwxQuantize::wxQuantize()\nClass arguments details:\n");
		}


		return new wxQuantize();
	}

	// wxQuantize::wxQuantize(lua_Table * data)
	static wxQuantize* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxQuantize::wxQuantize(lua_Table * data) function, expected prototype:\nwxQuantize::wxQuantize(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxQuantize(L,NULL);
	}

	// Overload binder for wxQuantize::wxQuantize
	static wxQuantize* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxQuantize, cannot match any of the overloads for function wxQuantize:\n  wxQuantize()\n  wxQuantize(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxQuantize::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxQuantize::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxQuantize::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxQuantize* self=Luna< wxObject >::checkSubType< wxQuantize >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxQuantize::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxQuantize::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxQuantize* LunaTraits< wxQuantize >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxQuantize::_bind_ctor(L);
}

void LunaTraits< wxQuantize >::_bind_dtor(wxQuantize* obj) {
	delete obj;
}

const char LunaTraits< wxQuantize >::className[] = "wxQuantize";
const char LunaTraits< wxQuantize >::fullName[] = "wxQuantize";
const char LunaTraits< wxQuantize >::moduleName[] = "wx";
const char* LunaTraits< wxQuantize >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxQuantize >::hash = 36836222;
const int LunaTraits< wxQuantize >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxQuantize >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxQuantize::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxQuantize::_bind___eq},
	{"getTable", &luna_wrapper_wxQuantize::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxQuantize >::converters[] = {
	{"wxObject", &luna_wrapper_wxQuantize::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxQuantize >::enumValues[] = {
	{0,0}
};


