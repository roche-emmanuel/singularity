#include <plug_common.h>

#include <luna/wrappers/wrapper_wxConnectionBase.h>

class luna_wrapper_wxConnectionBase {
public:
	typedef Luna< wxConnectionBase > luna_t;

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
		//wxConnectionBase* ptr= dynamic_cast< wxConnectionBase* >(Luna< wxObject >::check(L,1));
		wxConnectionBase* ptr= luna_caster< wxObject, wxConnectionBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConnectionBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxClassInfo * wxConnectionBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxConnectionBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxConnectionBase::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxConnectionBase::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxConnectionBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxConnectionBase* LunaTraits< wxConnectionBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxConnectionBase >::_bind_dtor(wxConnectionBase* obj) {
	delete obj;
}

const char LunaTraits< wxConnectionBase >::className[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::fullName[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::moduleName[] = "wx";
const char* LunaTraits< wxConnectionBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConnectionBase >::hash = 67238063;
const int LunaTraits< wxConnectionBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConnectionBase >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxConnectionBase::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxConnectionBase::_bind___eq},
	{"getTable", &luna_wrapper_wxConnectionBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxConnectionBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxConnectionBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConnectionBase >::enumValues[] = {
	{0,0}
};


