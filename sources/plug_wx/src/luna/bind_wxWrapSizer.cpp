#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWrapSizer.h>

class luna_wrapper_wxWrapSizer {
public:
	typedef Luna< wxWrapSizer > luna_t;

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
		wxWrapSizer* ptr= dynamic_cast< wxWrapSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWrapSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)
	static wxWrapSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS) function, expected prototype:\nwxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orient=luatop>0 ? (int)lua_tointeger(L,1) : ::wxHORIZONTAL;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxWRAPSIZER_DEFAULT_FLAGS;

		return new wxWrapSizer(orient, flags);
	}

	// wxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)
	static wxWrapSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS) function, expected prototype:\nwxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int orient=luatop>1 ? (int)lua_tointeger(L,2) : ::wxHORIZONTAL;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : ::wxWRAPSIZER_DEFAULT_FLAGS;

		return new wrapper_wxWrapSizer(L,NULL, orient, flags);
	}

	// Overload binder for wxWrapSizer::wxWrapSizer
	static wxWrapSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWrapSizer, cannot match any of the overloads for function wxWrapSizer:\n  wxWrapSizer(int, int)\n  wxWrapSizer(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n");
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWrapSizer* self=dynamic_cast< wxWrapSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::InformFirstDirection(int, int, int)");
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWrapSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWrapSizer::RecalcSizes() function, expected prototype:\nvoid wxWrapSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxWrapSizer* self=dynamic_cast< wxWrapSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWrapSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// wxSize wxWrapSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxWrapSizer::CalcMin() function, expected prototype:\nwxSize wxWrapSizer::CalcMin()\nClass arguments details:\n");
		}


		wxWrapSizer* self=dynamic_cast< wxWrapSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxWrapSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxWrapSizer* LunaTraits< wxWrapSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWrapSizer::_bind_ctor(L);
}

void LunaTraits< wxWrapSizer >::_bind_dtor(wxWrapSizer* obj) {
	delete obj;
}

const char LunaTraits< wxWrapSizer >::className[] = "wxWrapSizer";
const char LunaTraits< wxWrapSizer >::fullName[] = "wxWrapSizer";
const char LunaTraits< wxWrapSizer >::moduleName[] = "wx";
const char* LunaTraits< wxWrapSizer >::parents[] = {"wx.wxBoxSizer", 0};
const int LunaTraits< wxWrapSizer >::hash = 76694328;
const int LunaTraits< wxWrapSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWrapSizer >::methods[] = {
	{"InformFirstDirection", &luna_wrapper_wxWrapSizer::_bind_InformFirstDirection},
	{"RecalcSizes", &luna_wrapper_wxWrapSizer::_bind_RecalcSizes},
	{"CalcMin", &luna_wrapper_wxWrapSizer::_bind_CalcMin},
	{"__eq", &luna_wrapper_wxWrapSizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWrapSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxWrapSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWrapSizer >::enumValues[] = {
	{0,0}
};


