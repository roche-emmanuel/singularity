#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogStream.h>

class luna_wrapper_wxLogStream {
public:
	typedef Luna< wxLogStream > luna_t;

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
		//wxLogStream* ptr= dynamic_cast< wxLogStream* >(Luna< wxLog >::check(L,1));
		wxLogStream* ptr= luna_caster< wxLog, wxLogStream >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxLogStream::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogStream::base_Flush() function, expected prototype:\nvoid wxLogStream::base_Flush()\nClass arguments details:\n");
		}


		wxLogStream* self=Luna< wxLog >::checkSubType< wxLogStream >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogStream::base_Flush()");
		}
		self->wxLogStream::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogStream* LunaTraits< wxLogStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxLogStream >::_bind_dtor(wxLogStream* obj) {
	delete obj;
}

const char LunaTraits< wxLogStream >::className[] = "wxLogStream";
const char LunaTraits< wxLogStream >::fullName[] = "wxLogStream";
const char LunaTraits< wxLogStream >::moduleName[] = "wx";
const char* LunaTraits< wxLogStream >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogStream >::hash = 63672516;
const int LunaTraits< wxLogStream >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogStream >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogStream::_bind_base_Flush},
	{"__eq", &luna_wrapper_wxLogStream::_bind___eq},
	{"getTable", &luna_wrapper_wxLogStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogStream >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogStream::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogStream >::enumValues[] = {
	{0,0}
};


