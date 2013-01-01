#include <plug_common.h>

class luna_wrapper_wxPenList {
public:
	typedef Luna< wxPenList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37568612) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPenList*)");
		}

		wxPenList* rhs =(Luna< wxPenList >::check(L,2));
		wxPenList* self=(Luna< wxPenList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxPenList* self=(Luna< wxPenList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPenList");
		
		return luna_dynamicCast(L,converters,"wxPenList",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FindOrCreatePen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPenList::wxPenList()
	static wxPenList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPenList::wxPenList() function, expected prototype:\nwxPenList::wxPenList()\nClass arguments details:\n");
		}


		return new wxPenList();
	}


	// Function binds:
	// wxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)
	static int _bind_FindOrCreatePen(lua_State *L) {
		if (!_lg_typecheck_FindOrCreatePen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID) function, expected prototype:\nwxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPenList::FindOrCreatePen function");
		}
		const wxColour & colour=*colour_ptr;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		wxPenStyle style=luatop>3 ? (wxPenStyle)lua_tointeger(L,4) : ::wxPENSTYLE_SOLID;

		wxPenList* self=(Luna< wxPenList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPen * wxPenList::FindOrCreatePen(const wxColour &, int, wxPenStyle). Got : '%s'",typeid(Luna< wxPenList >::check(L,1)).name());
		}
		wxPen * lret = self->FindOrCreatePen(colour, width, style);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPenList* LunaTraits< wxPenList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPenList::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxPenList >::_bind_dtor(wxPenList* obj) {
	delete obj;
}

const char LunaTraits< wxPenList >::className[] = "wxPenList";
const char LunaTraits< wxPenList >::fullName[] = "wxPenList";
const char LunaTraits< wxPenList >::moduleName[] = "wx";
const char* LunaTraits< wxPenList >::parents[] = {0};
const int LunaTraits< wxPenList >::hash = 37568612;
const int LunaTraits< wxPenList >::uniqueIDs[] = {37568612,0};

luna_RegType LunaTraits< wxPenList >::methods[] = {
	{"FindOrCreatePen", &luna_wrapper_wxPenList::_bind_FindOrCreatePen},
	{"dynCast", &luna_wrapper_wxPenList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPenList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPenList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPenList >::enumValues[] = {
	{0,0}
};


