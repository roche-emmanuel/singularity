#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogInterposerTemp.h>

class luna_wrapper_wxLogInterposerTemp {
public:
	typedef Luna< wxLogInterposerTemp > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//wxLogInterposerTemp* ptr= dynamic_cast< wxLogInterposerTemp* >(Luna< wxLog >::check(L,1));
		wxLogInterposerTemp* ptr= luna_caster< wxLog, wxLogInterposerTemp >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposerTemp >::push(L,ptr,false);
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
	// wxLogInterposerTemp::wxLogInterposerTemp()
	static wxLogInterposerTemp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposerTemp::wxLogInterposerTemp() function, expected prototype:\nwxLogInterposerTemp::wxLogInterposerTemp()\nClass arguments details:\n");
		}


		return new wxLogInterposerTemp();
	}

	// wxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data)
	static wxLogInterposerTemp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data) function, expected prototype:\nwxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxLogInterposerTemp(L,NULL);
	}

	// Overload binder for wxLogInterposerTemp::wxLogInterposerTemp
	static wxLogInterposerTemp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogInterposerTemp, cannot match any of the overloads for function wxLogInterposerTemp:\n  wxLogInterposerTemp()\n  wxLogInterposerTemp(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogInterposerTemp::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogInterposerTemp::base_Flush() function, expected prototype:\nvoid wxLogInterposerTemp::base_Flush()\nClass arguments details:\n");
		}


		wxLogInterposerTemp* self=Luna< wxLog >::checkSubType< wxLogInterposerTemp >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogInterposerTemp::base_Flush()");
		}
		self->wxLogInterposerTemp::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogInterposerTemp* LunaTraits< wxLogInterposerTemp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposerTemp::_bind_ctor(L);
}

void LunaTraits< wxLogInterposerTemp >::_bind_dtor(wxLogInterposerTemp* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposerTemp >::className[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::fullName[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposerTemp >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposerTemp >::hash = 76049695;
const int LunaTraits< wxLogInterposerTemp >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposerTemp >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogInterposerTemp::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogInterposerTemp::_bind___eq},
	{"getTable", &luna_wrapper_wxLogInterposerTemp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposerTemp >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposerTemp::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposerTemp >::enumValues[] = {
	{0,0}
};


