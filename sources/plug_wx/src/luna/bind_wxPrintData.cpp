#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPrintData.h>

class luna_wrapper_wxPrintData {
public:
	typedef Luna< wxPrintData > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		wxPrintData* self= (wxPrintData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPrintData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxPrintData* ptr= dynamic_cast< wxPrintData* >(Luna< wxObject >::check(L,1));
		wxPrintData* ptr= luna_caster< wxObject, wxPrintData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxPrintData* LunaTraits< wxPrintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintData >::_bind_dtor(wxPrintData* obj) {
	delete obj;
}

const char LunaTraits< wxPrintData >::className[] = "wxPrintData";
const char LunaTraits< wxPrintData >::fullName[] = "wxPrintData";
const char LunaTraits< wxPrintData >::moduleName[] = "wx";
const char* LunaTraits< wxPrintData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintData >::hash = 12030869;
const int LunaTraits< wxPrintData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintData >::methods[] = {
	{"__eq", &luna_wrapper_wxPrintData::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPrintData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPrintData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPrintData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintData >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintData >::enumValues[] = {
	{0,0}
};


