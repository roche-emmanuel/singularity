#include <plug_common.h>

class luna_wrapper_wxTempFileOutputStream {
public:
	typedef Luna< wxTempFileOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTempFileOutputStream* ptr= dynamic_cast< wxTempFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTempFileOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Commit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName)
	static wxTempFileOutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName) function, expected prototype:\nwxTempFileOutputStream::wxTempFileOutputStream(const wxString & fileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString fileName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxTempFileOutputStream(fileName);
	}


	// Function binds:
	// bool wxTempFileOutputStream::Commit()
	static int _bind_Commit(lua_State *L) {
		if (!_lg_typecheck_Commit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFileOutputStream::Commit() function, expected prototype:\nbool wxTempFileOutputStream::Commit()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=dynamic_cast< wxTempFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFileOutputStream::Commit()");
		}
		bool lret = self->Commit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTempFileOutputStream::Discard()
	static int _bind_Discard(lua_State *L) {
		if (!_lg_typecheck_Discard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTempFileOutputStream::Discard() function, expected prototype:\nvoid wxTempFileOutputStream::Discard()\nClass arguments details:\n");
		}


		wxTempFileOutputStream* self=dynamic_cast< wxTempFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTempFileOutputStream::Discard()");
		}
		self->Discard();

		return 0;
	}


	// Operator binds:

};

wxTempFileOutputStream* LunaTraits< wxTempFileOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTempFileOutputStream::_bind_ctor(L);
}

void LunaTraits< wxTempFileOutputStream >::_bind_dtor(wxTempFileOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTempFileOutputStream >::className[] = "wxTempFileOutputStream";
const char LunaTraits< wxTempFileOutputStream >::fullName[] = "wxTempFileOutputStream";
const char LunaTraits< wxTempFileOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTempFileOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxTempFileOutputStream >::hash = 17562350;
const int LunaTraits< wxTempFileOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTempFileOutputStream >::methods[] = {
	{"Commit", &luna_wrapper_wxTempFileOutputStream::_bind_Commit},
	{"Discard", &luna_wrapper_wxTempFileOutputStream::_bind_Discard},
	{0,0}
};

luna_ConverterType LunaTraits< wxTempFileOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxTempFileOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTempFileOutputStream >::enumValues[] = {
	{0,0}
};


