#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogInterposer.h>

class luna_wrapper_wxLogInterposer {
public:
	typedef Luna< wxLogInterposer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxLog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*)");
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogInterposer* ptr= dynamic_cast< wxLogInterposer* >(Luna< wxLog >::check(L,1));
		wxLogInterposer* ptr= luna_caster< wxLog, wxLogInterposer >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogInterposer::wxLogInterposer()
	static wxLogInterposer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposer::wxLogInterposer() function, expected prototype:\nwxLogInterposer::wxLogInterposer()\nClass arguments details:\n");
		}


		return new wxLogInterposer();
	}

	// wxLogInterposer::wxLogInterposer(lua_Table * data)
	static wxLogInterposer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposer::wxLogInterposer(lua_Table * data) function, expected prototype:\nwxLogInterposer::wxLogInterposer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxLogInterposer(L,NULL);
	}

	// Overload binder for wxLogInterposer::wxLogInterposer
	static wxLogInterposer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogInterposer, cannot match any of the overloads for function wxLogInterposer:\n  wxLogInterposer()\n  wxLogInterposer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogInterposer::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogInterposer::base_Flush() function, expected prototype:\nvoid wxLogInterposer::base_Flush()\nClass arguments details:\n");
		}


		wxLogInterposer* self=Luna< wxLog >::checkSubType< wxLogInterposer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogInterposer::base_Flush(). Got : '%s'",typeid(Luna< wxLog >::check(L,1)).name());
		}
		self->wxLogInterposer::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogInterposer* LunaTraits< wxLogInterposer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposer::_bind_ctor(L);
}

void LunaTraits< wxLogInterposer >::_bind_dtor(wxLogInterposer* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposer >::className[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::fullName[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposer >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposer >::hash = 78430902;
const int LunaTraits< wxLogInterposer >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposer >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogInterposer::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogInterposer::_bind___eq},
	{"getTable", &luna_wrapper_wxLogInterposer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposer >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposer::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposer >::enumValues[] = {
	{0,0}
};


