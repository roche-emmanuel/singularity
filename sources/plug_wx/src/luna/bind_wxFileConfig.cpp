#include <plug_common.h>

class luna_wrapper_wxFileConfig {
public:
	typedef Luna< wxFileConfig > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileConfig* ptr= dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileConfig >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_SetUmask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfEntries(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfGroups(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasEntry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenameEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenameGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteEntry(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGlobalFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLocalFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGlobalFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLocalFileName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxFileConfig::SetUmask(int mode)
	static int _bind_SetUmask(lua_State *L) {
		if (!_lg_typecheck_SetUmask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileConfig::SetUmask(int mode) function, expected prototype:\nvoid wxFileConfig::SetUmask(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileConfig::SetUmask(int)");
		}
		self->SetUmask(mode);

		return 0;
	}

	// void wxFileConfig::SetPath(const wxString & strPath)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileConfig::SetPath(const wxString & strPath) function, expected prototype:\nvoid wxFileConfig::SetPath(const wxString & strPath)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strPath(lua_tostring(L,2),lua_objlen(L,2));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileConfig::SetPath(const wxString &)");
		}
		self->SetPath(strPath);

		return 0;
	}

	// const wxString & wxFileConfig::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFileConfig::GetPath() const function, expected prototype:\nconst wxString & wxFileConfig::GetPath() const\nClass arguments details:\n");
		}


		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFileConfig::GetPath() const");
		}
		const wxString & lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFileConfig::GetFirstGroup(wxString & str, long & index) const
	static int _bind_GetFirstGroup(lua_State *L) {
		if (!_lg_typecheck_GetFirstGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::GetFirstGroup(wxString & str, long & index) const function, expected prototype:\nbool wxFileConfig::GetFirstGroup(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tointeger(L,3);

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::GetFirstGroup(wxString &, long &) const");
		}
		bool lret = self->GetFirstGroup(str, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::GetNextGroup(wxString & str, long & index) const
	static int _bind_GetNextGroup(lua_State *L) {
		if (!_lg_typecheck_GetNextGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::GetNextGroup(wxString & str, long & index) const function, expected prototype:\nbool wxFileConfig::GetNextGroup(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tointeger(L,3);

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::GetNextGroup(wxString &, long &) const");
		}
		bool lret = self->GetNextGroup(str, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::GetFirstEntry(wxString & str, long & index) const
	static int _bind_GetFirstEntry(lua_State *L) {
		if (!_lg_typecheck_GetFirstEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::GetFirstEntry(wxString & str, long & index) const function, expected prototype:\nbool wxFileConfig::GetFirstEntry(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tointeger(L,3);

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::GetFirstEntry(wxString &, long &) const");
		}
		bool lret = self->GetFirstEntry(str, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::GetNextEntry(wxString & str, long & index) const
	static int _bind_GetNextEntry(lua_State *L) {
		if (!_lg_typecheck_GetNextEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::GetNextEntry(wxString & str, long & index) const function, expected prototype:\nbool wxFileConfig::GetNextEntry(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tointeger(L,3);

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::GetNextEntry(wxString &, long &) const");
		}
		bool lret = self->GetNextEntry(str, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFileConfig::GetNumberOfEntries(bool bRecursive = false) const
	static int _bind_GetNumberOfEntries(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfEntries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFileConfig::GetNumberOfEntries(bool bRecursive = false) const function, expected prototype:\nsize_t wxFileConfig::GetNumberOfEntries(bool bRecursive = false) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool bRecursive=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFileConfig::GetNumberOfEntries(bool) const");
		}
		size_t lret = self->GetNumberOfEntries(bRecursive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFileConfig::GetNumberOfGroups(bool bRecursive = false) const
	static int _bind_GetNumberOfGroups(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfGroups(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFileConfig::GetNumberOfGroups(bool bRecursive = false) const function, expected prototype:\nsize_t wxFileConfig::GetNumberOfGroups(bool bRecursive = false) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool bRecursive=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFileConfig::GetNumberOfGroups(bool) const");
		}
		size_t lret = self->GetNumberOfGroups(bRecursive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileConfig::HasGroup(const wxString & strName) const
	static int _bind_HasGroup(lua_State *L) {
		if (!_lg_typecheck_HasGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::HasGroup(const wxString & strName) const function, expected prototype:\nbool wxFileConfig::HasGroup(const wxString & strName) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::HasGroup(const wxString &) const");
		}
		bool lret = self->HasGroup(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::HasEntry(const wxString & strName) const
	static int _bind_HasEntry(lua_State *L) {
		if (!_lg_typecheck_HasEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::HasEntry(const wxString & strName) const function, expected prototype:\nbool wxFileConfig::HasEntry(const wxString & strName) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::HasEntry(const wxString &) const");
		}
		bool lret = self->HasEntry(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::Flush(bool bCurrentOnly = false)
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::Flush(bool bCurrentOnly = false) function, expected prototype:\nbool wxFileConfig::Flush(bool bCurrentOnly = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool bCurrentOnly=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::Flush(bool)");
		}
		bool lret = self->Flush(bCurrentOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::RenameEntry(const wxString & oldName, const wxString & newName)
	static int _bind_RenameEntry(lua_State *L) {
		if (!_lg_typecheck_RenameEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::RenameEntry(const wxString & oldName, const wxString & newName) function, expected prototype:\nbool wxFileConfig::RenameEntry(const wxString & oldName, const wxString & newName)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString oldName(lua_tostring(L,2),lua_objlen(L,2));
		wxString newName(lua_tostring(L,3),lua_objlen(L,3));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::RenameEntry(const wxString &, const wxString &)");
		}
		bool lret = self->RenameEntry(oldName, newName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::RenameGroup(const wxString & oldName, const wxString & newName)
	static int _bind_RenameGroup(lua_State *L) {
		if (!_lg_typecheck_RenameGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::RenameGroup(const wxString & oldName, const wxString & newName) function, expected prototype:\nbool wxFileConfig::RenameGroup(const wxString & oldName, const wxString & newName)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString oldName(lua_tostring(L,2),lua_objlen(L,2));
		wxString newName(lua_tostring(L,3),lua_objlen(L,3));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::RenameGroup(const wxString &, const wxString &)");
		}
		bool lret = self->RenameGroup(oldName, newName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	static int _bind_DeleteEntry(lua_State *L) {
		if (!_lg_typecheck_DeleteEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true) function, expected prototype:\nbool wxFileConfig::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool bDeleteGroupIfEmpty=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::DeleteEntry(const wxString &, bool)");
		}
		bool lret = self->DeleteEntry(key, bDeleteGroupIfEmpty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::DeleteGroup(const wxString & key)
	static int _bind_DeleteGroup(lua_State *L) {
		if (!_lg_typecheck_DeleteGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::DeleteGroup(const wxString & key) function, expected prototype:\nbool wxFileConfig::DeleteGroup(const wxString & key)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));

		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::DeleteGroup(const wxString &)");
		}
		bool lret = self->DeleteGroup(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileConfig::DeleteAll()
	static int _bind_DeleteAll(lua_State *L) {
		if (!_lg_typecheck_DeleteAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileConfig::DeleteAll() function, expected prototype:\nbool wxFileConfig::DeleteAll()\nClass arguments details:\n");
		}


		wxFileConfig* self=dynamic_cast< wxFileConfig* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileConfig::DeleteAll()");
		}
		bool lret = self->DeleteAll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxFileName wxFileConfig::GetGlobalFile(const wxString & basename)
	static int _bind_GetGlobalFile(lua_State *L) {
		if (!_lg_typecheck_GetGlobalFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileConfig::GetGlobalFile(const wxString & basename) function, expected prototype:\nstatic wxFileName wxFileConfig::GetGlobalFile(const wxString & basename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString basename(lua_tostring(L,1),lua_objlen(L,1));

		wxFileName stack_lret = wxFileConfig::GetGlobalFile(basename);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// static wxFileName wxFileConfig::GetLocalFile(const wxString & basename, int style = 0)
	static int _bind_GetLocalFile(lua_State *L) {
		if (!_lg_typecheck_GetLocalFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileConfig::GetLocalFile(const wxString & basename, int style = 0) function, expected prototype:\nstatic wxFileName wxFileConfig::GetLocalFile(const wxString & basename, int style = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString basename(lua_tostring(L,1),lua_objlen(L,1));
		int style=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxFileName stack_lret = wxFileConfig::GetLocalFile(basename, style);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// static wxString wxFileConfig::GetGlobalFileName(const wxString & szFile)
	static int _bind_GetGlobalFileName(lua_State *L) {
		if (!_lg_typecheck_GetGlobalFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFileConfig::GetGlobalFileName(const wxString & szFile) function, expected prototype:\nstatic wxString wxFileConfig::GetGlobalFileName(const wxString & szFile)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString szFile(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxFileConfig::GetGlobalFileName(szFile);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileConfig::GetLocalFileName(const wxString & szFile, int style = 0)
	static int _bind_GetLocalFileName(lua_State *L) {
		if (!_lg_typecheck_GetLocalFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFileConfig::GetLocalFileName(const wxString & szFile, int style = 0) function, expected prototype:\nstatic wxString wxFileConfig::GetLocalFileName(const wxString & szFile, int style = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString szFile(lua_tostring(L,1),lua_objlen(L,1));
		int style=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		wxString lret = wxFileConfig::GetLocalFileName(szFile, style);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxFileConfig* LunaTraits< wxFileConfig >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFileConfig >::_bind_dtor(wxFileConfig* obj) {
	delete obj;
}

const char LunaTraits< wxFileConfig >::className[] = "wxFileConfig";
const char LunaTraits< wxFileConfig >::fullName[] = "wxFileConfig";
const char LunaTraits< wxFileConfig >::moduleName[] = "wx";
const char* LunaTraits< wxFileConfig >::parents[] = {"wx.wxConfigBase", 0};
const int LunaTraits< wxFileConfig >::hash = 41268525;
const int LunaTraits< wxFileConfig >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileConfig >::methods[] = {
	{"SetUmask", &luna_wrapper_wxFileConfig::_bind_SetUmask},
	{"SetPath", &luna_wrapper_wxFileConfig::_bind_SetPath},
	{"GetPath", &luna_wrapper_wxFileConfig::_bind_GetPath},
	{"GetFirstGroup", &luna_wrapper_wxFileConfig::_bind_GetFirstGroup},
	{"GetNextGroup", &luna_wrapper_wxFileConfig::_bind_GetNextGroup},
	{"GetFirstEntry", &luna_wrapper_wxFileConfig::_bind_GetFirstEntry},
	{"GetNextEntry", &luna_wrapper_wxFileConfig::_bind_GetNextEntry},
	{"GetNumberOfEntries", &luna_wrapper_wxFileConfig::_bind_GetNumberOfEntries},
	{"GetNumberOfGroups", &luna_wrapper_wxFileConfig::_bind_GetNumberOfGroups},
	{"HasGroup", &luna_wrapper_wxFileConfig::_bind_HasGroup},
	{"HasEntry", &luna_wrapper_wxFileConfig::_bind_HasEntry},
	{"Flush", &luna_wrapper_wxFileConfig::_bind_Flush},
	{"RenameEntry", &luna_wrapper_wxFileConfig::_bind_RenameEntry},
	{"RenameGroup", &luna_wrapper_wxFileConfig::_bind_RenameGroup},
	{"DeleteEntry", &luna_wrapper_wxFileConfig::_bind_DeleteEntry},
	{"DeleteGroup", &luna_wrapper_wxFileConfig::_bind_DeleteGroup},
	{"DeleteAll", &luna_wrapper_wxFileConfig::_bind_DeleteAll},
	{"GetGlobalFile", &luna_wrapper_wxFileConfig::_bind_GetGlobalFile},
	{"GetLocalFile", &luna_wrapper_wxFileConfig::_bind_GetLocalFile},
	{"GetGlobalFileName", &luna_wrapper_wxFileConfig::_bind_GetGlobalFileName},
	{"GetLocalFileName", &luna_wrapper_wxFileConfig::_bind_GetLocalFileName},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileConfig >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileConfig::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileConfig >::enumValues[] = {
	{0,0}
};


