#include <plug_common.h>

class luna_wrapper_wxPersistentObject {
public:
	typedef Luna< wxPersistentObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84824132) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPersistentObject*)");
		}

		wxPersistentObject* rhs =(Luna< wxPersistentObject >::check(L,2));
		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
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

		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPersistentObject");
		
		return luna_dynamicCast(L,converters,"wxPersistentObject",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxPersistentObject::Save() const
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPersistentObject::Save() const function, expected prototype:\nvoid wxPersistentObject::Save() const\nClass arguments details:\n");
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPersistentObject::Save() const");
		}
		self->Save();

		return 0;
	}

	// bool wxPersistentObject::Restore()
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPersistentObject::Restore() function, expected prototype:\nbool wxPersistentObject::Restore()\nClass arguments details:\n");
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPersistentObject::Restore()");
		}
		bool lret = self->Restore();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPersistentObject::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPersistentObject::GetKind() const function, expected prototype:\nwxString wxPersistentObject::GetKind() const\nClass arguments details:\n");
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPersistentObject::GetKind() const");
		}
		wxString lret = self->GetKind();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxPersistentObject::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxPersistentObject::GetName() const function, expected prototype:\nwxString wxPersistentObject::GetName() const\nClass arguments details:\n");
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxPersistentObject::GetName() const");
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void * wxPersistentObject::GetObject() const
	static int _bind_GetObject(lua_State *L) {
		if (!_lg_typecheck_GetObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxPersistentObject::GetObject() const function, expected prototype:\nvoid * wxPersistentObject::GetObject() const\nClass arguments details:\n");
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxPersistentObject::GetObject() const");
		}
		void * lret = self->GetObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPersistentObject* LunaTraits< wxPersistentObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxPersistentObject::Save() const
	// bool wxPersistentObject::Restore()
	// wxString wxPersistentObject::GetKind() const
	// wxString wxPersistentObject::GetName() const

	// Abstract operators:
}

void LunaTraits< wxPersistentObject >::_bind_dtor(wxPersistentObject* obj) {
	delete obj;
}

const char LunaTraits< wxPersistentObject >::className[] = "wxPersistentObject";
const char LunaTraits< wxPersistentObject >::fullName[] = "wxPersistentObject";
const char LunaTraits< wxPersistentObject >::moduleName[] = "wx";
const char* LunaTraits< wxPersistentObject >::parents[] = {0};
const int LunaTraits< wxPersistentObject >::hash = 84824132;
const int LunaTraits< wxPersistentObject >::uniqueIDs[] = {84824132,0};

luna_RegType LunaTraits< wxPersistentObject >::methods[] = {
	{"Save", &luna_wrapper_wxPersistentObject::_bind_Save},
	{"Restore", &luna_wrapper_wxPersistentObject::_bind_Restore},
	{"GetKind", &luna_wrapper_wxPersistentObject::_bind_GetKind},
	{"GetName", &luna_wrapper_wxPersistentObject::_bind_GetName},
	{"GetObject", &luna_wrapper_wxPersistentObject::_bind_GetObject},
	{"dynCast", &luna_wrapper_wxPersistentObject::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPersistentObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPersistentObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPersistentObject >::enumValues[] = {
	{0,0}
};


