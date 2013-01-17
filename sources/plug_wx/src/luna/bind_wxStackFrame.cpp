#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStackFrame.h>

class luna_wrapper_wxStackFrame {
public:
	typedef Luna< wxStackFrame > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxStackFrame,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95458903) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStackFrame*)");
		}

		wxStackFrame* rhs =(Luna< wxStackFrame >::check(L,2));
		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
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

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStackFrame");
		
		return luna_dynamicCast(L,converters,"wxStackFrame",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParam(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParamCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasSourceLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetParam(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetParamCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * wxStackFrame::GetAddress() const
	static int _bind_GetAddress(lua_State *L) {
		if (!_lg_typecheck_GetAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxStackFrame::GetAddress() const function, expected prototype:\nvoid * wxStackFrame::GetAddress() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxStackFrame::GetAddress() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		void * lret = self->GetAddress();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxString wxStackFrame::GetFileName() const
	static int _bind_GetFileName(lua_State *L) {
		if (!_lg_typecheck_GetFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetFileName() const function, expected prototype:\nwxString wxStackFrame::GetFileName() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetFileName() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		wxString lret = self->GetFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxStackFrame::GetLevel() const
	static int _bind_GetLevel(lua_State *L) {
		if (!_lg_typecheck_GetLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetLevel() const function, expected prototype:\nsize_t wxStackFrame::GetLevel() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetLevel() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		size_t lret = self->GetLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStackFrame::GetLine() const
	static int _bind_GetLine(lua_State *L) {
		if (!_lg_typecheck_GetLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetLine() const function, expected prototype:\nsize_t wxStackFrame::GetLine() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetLine() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		size_t lret = self->GetLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStackFrame::GetModule() const
	static int _bind_GetModule(lua_State *L) {
		if (!_lg_typecheck_GetModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetModule() const function, expected prototype:\nwxString wxStackFrame::GetModule() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetModule() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		wxString lret = self->GetModule();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStackFrame::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetName() const function, expected prototype:\nwxString wxStackFrame::GetName() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetName() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxStackFrame::GetOffset() const
	static int _bind_GetOffset(lua_State *L) {
		if (!_lg_typecheck_GetOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetOffset() const function, expected prototype:\nsize_t wxStackFrame::GetOffset() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetOffset() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		size_t lret = self->GetOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	static int _bind_GetParam(lua_State *L) {
		if (!_lg_typecheck_GetParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const function, expected prototype:\nbool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);
		wxString type(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString value(lua_tostring(L,5),lua_objlen(L,5));

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStackFrame::GetParam(size_t, wxString *, wxString *, wxString *) const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		bool lret = self->GetParam(n, &type, &name, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxStackFrame::GetParamCount() const
	static int _bind_GetParamCount(lua_State *L) {
		if (!_lg_typecheck_GetParamCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetParamCount() const function, expected prototype:\nsize_t wxStackFrame::GetParamCount() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetParamCount() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		size_t lret = self->GetParamCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStackFrame::HasSourceLocation() const
	static int _bind_HasSourceLocation(lua_State *L) {
		if (!_lg_typecheck_HasSourceLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::HasSourceLocation() const function, expected prototype:\nbool wxStackFrame::HasSourceLocation() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStackFrame::HasSourceLocation() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		bool lret = self->HasSourceLocation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	static int _bind_base_GetParam(lua_State *L) {
		if (!_lg_typecheck_base_GetParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const function, expected prototype:\nbool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);
		wxString type(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString value(lua_tostring(L,5),lua_objlen(L,5));

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStackFrame::base_GetParam(size_t, wxString *, wxString *, wxString *) const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		bool lret = self->wxStackFrame::GetParam(n, &type, &name, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxStackFrame::base_GetParamCount() const
	static int _bind_base_GetParamCount(lua_State *L) {
		if (!_lg_typecheck_base_GetParamCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::base_GetParamCount() const function, expected prototype:\nsize_t wxStackFrame::base_GetParamCount() const\nClass arguments details:\n");
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::base_GetParamCount() const. Got : '%s'",typeid(Luna< wxStackFrame >::check(L,1)).name());
		}
		size_t lret = self->wxStackFrame::GetParamCount();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxStackFrame* LunaTraits< wxStackFrame >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStackFrame >::_bind_dtor(wxStackFrame* obj) {
	delete obj;
}

const char LunaTraits< wxStackFrame >::className[] = "wxStackFrame";
const char LunaTraits< wxStackFrame >::fullName[] = "wxStackFrame";
const char LunaTraits< wxStackFrame >::moduleName[] = "wx";
const char* LunaTraits< wxStackFrame >::parents[] = {0};
const int LunaTraits< wxStackFrame >::hash = 95458903;
const int LunaTraits< wxStackFrame >::uniqueIDs[] = {95458903,0};

luna_RegType LunaTraits< wxStackFrame >::methods[] = {
	{"GetAddress", &luna_wrapper_wxStackFrame::_bind_GetAddress},
	{"GetFileName", &luna_wrapper_wxStackFrame::_bind_GetFileName},
	{"GetLevel", &luna_wrapper_wxStackFrame::_bind_GetLevel},
	{"GetLine", &luna_wrapper_wxStackFrame::_bind_GetLine},
	{"GetModule", &luna_wrapper_wxStackFrame::_bind_GetModule},
	{"GetName", &luna_wrapper_wxStackFrame::_bind_GetName},
	{"GetOffset", &luna_wrapper_wxStackFrame::_bind_GetOffset},
	{"GetParam", &luna_wrapper_wxStackFrame::_bind_GetParam},
	{"GetParamCount", &luna_wrapper_wxStackFrame::_bind_GetParamCount},
	{"HasSourceLocation", &luna_wrapper_wxStackFrame::_bind_HasSourceLocation},
	{"base_GetParam", &luna_wrapper_wxStackFrame::_bind_base_GetParam},
	{"base_GetParamCount", &luna_wrapper_wxStackFrame::_bind_base_GetParamCount},
	{"dynCast", &luna_wrapper_wxStackFrame::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStackFrame::_bind___eq},
	{"getTable", &luna_wrapper_wxStackFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStackFrame >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStackFrame >::enumValues[] = {
	{0,0}
};


