#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGraphicsMatrix.h>

class luna_wrapper_wxGraphicsMatrix {
public:
	typedef Luna< wxGraphicsMatrix > luna_t;

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
		//wxGraphicsMatrix* ptr= dynamic_cast< wxGraphicsMatrix* >(Luna< wxObject >::check(L,1));
		wxGraphicsMatrix* ptr= luna_caster< wxObject, wxGraphicsMatrix >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsMatrix >::push(L,ptr,false);
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

wxGraphicsMatrix* LunaTraits< wxGraphicsMatrix >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsMatrix >::_bind_dtor(wxGraphicsMatrix* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsMatrix >::className[] = "wxGraphicsMatrix";
const char LunaTraits< wxGraphicsMatrix >::fullName[] = "wxGraphicsMatrix";
const char LunaTraits< wxGraphicsMatrix >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsMatrix >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsMatrix >::hash = 36449621;
const int LunaTraits< wxGraphicsMatrix >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsMatrix >::methods[] = {
	{"__eq", &luna_wrapper_wxGraphicsMatrix::_bind___eq},
	{"getTable", &luna_wrapper_wxGraphicsMatrix::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsMatrix >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsMatrix::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsMatrix >::enumValues[] = {
	{0,0}
};


