#include <plug_common.h>

class luna_wrapper_wxTarEntry {
public:
	typedef Luna< wxTarEntry > luna_t;

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

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarEntry");
		
		return luna_dynamicCast(L,converters,"wxTarEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73261869) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAccessTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAccessTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCreateTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCreateTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDevMajor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDevMinor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDevMajor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDevMinor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGroupId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGroupId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGroupName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGroupName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinkName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinkName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTypeFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTypeFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInternalName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInternalName_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset)
	static wxTarEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset) function, expected prototype:\nwxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 57497519\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		const wxDateTime* dt_ptr=luatop>1 ? (Luna< wxDateTime >::check(L,2)) : NULL;
		if( luatop>1 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::wxTarEntry function");
		}
		const wxDateTime & dt=luatop>1 ? *dt_ptr : wxDateTime::Now ();
		long size=luatop>2 ? (long)lua_tointeger(L,3) : wxInvalidOffset;

		return new wxTarEntry(name, dt, size);
	}

	// wxTarEntry::wxTarEntry(const wxTarEntry & entry)
	static wxTarEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(const wxTarEntry & entry) function, expected prototype:\nwxTarEntry::wxTarEntry(const wxTarEntry & entry)\nClass arguments details:\narg 1 ID = 73261869\n");
		}

		const wxTarEntry* entry_ptr=(Luna< wxTarEntry >::check(L,1));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxTarEntry::wxTarEntry function");
		}
		const wxTarEntry & entry=*entry_ptr;

		return new wxTarEntry(entry);
	}

	// Overload binder for wxTarEntry::wxTarEntry
	static wxTarEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTarEntry, cannot match any of the overloads for function wxTarEntry:\n  wxTarEntry(const wxString &, const wxDateTime &, long)\n  wxTarEntry(const wxTarEntry &)\n");
		return NULL;
	}


	// Function binds:
	// wxDateTime wxTarEntry::GetAccessTime() const
	static int _bind_GetAccessTime(lua_State *L) {
		if (!_lg_typecheck_GetAccessTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime wxTarEntry::GetAccessTime() const function, expected prototype:\nwxDateTime wxTarEntry::GetAccessTime() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime wxTarEntry::GetAccessTime() const");
		}
		wxDateTime stack_lret = self->GetAccessTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// void wxTarEntry::SetAccessTime(const wxDateTime & dt)
	static int _bind_SetAccessTime(lua_State *L) {
		if (!_lg_typecheck_SetAccessTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetAccessTime(const wxDateTime & dt) function, expected prototype:\nvoid wxTarEntry::SetAccessTime(const wxDateTime & dt)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::SetAccessTime function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetAccessTime(const wxDateTime &)");
		}
		self->SetAccessTime(dt);

		return 0;
	}

	// wxDateTime wxTarEntry::GetCreateTime() const
	static int _bind_GetCreateTime(lua_State *L) {
		if (!_lg_typecheck_GetCreateTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime wxTarEntry::GetCreateTime() const function, expected prototype:\nwxDateTime wxTarEntry::GetCreateTime() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime wxTarEntry::GetCreateTime() const");
		}
		wxDateTime stack_lret = self->GetCreateTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// void wxTarEntry::SetCreateTime(const wxDateTime & dt)
	static int _bind_SetCreateTime(lua_State *L) {
		if (!_lg_typecheck_SetCreateTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetCreateTime(const wxDateTime & dt) function, expected prototype:\nvoid wxTarEntry::SetCreateTime(const wxDateTime & dt)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::SetCreateTime function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetCreateTime(const wxDateTime &)");
		}
		self->SetCreateTime(dt);

		return 0;
	}

	// int wxTarEntry::GetDevMajor() const
	static int _bind_GetDevMajor(lua_State *L) {
		if (!_lg_typecheck_GetDevMajor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetDevMajor() const function, expected prototype:\nint wxTarEntry::GetDevMajor() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetDevMajor() const");
		}
		int lret = self->GetDevMajor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetDevMinor() const
	static int _bind_GetDevMinor(lua_State *L) {
		if (!_lg_typecheck_GetDevMinor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetDevMinor() const function, expected prototype:\nint wxTarEntry::GetDevMinor() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetDevMinor() const");
		}
		int lret = self->GetDevMinor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetDevMajor(int dev)
	static int _bind_SetDevMajor(lua_State *L) {
		if (!_lg_typecheck_SetDevMajor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetDevMajor(int dev) function, expected prototype:\nvoid wxTarEntry::SetDevMajor(int dev)\nClass arguments details:\n");
		}

		int dev=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetDevMajor(int)");
		}
		self->SetDevMajor(dev);

		return 0;
	}

	// void wxTarEntry::SetDevMinor(int dev)
	static int _bind_SetDevMinor(lua_State *L) {
		if (!_lg_typecheck_SetDevMinor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetDevMinor(int dev) function, expected prototype:\nvoid wxTarEntry::SetDevMinor(int dev)\nClass arguments details:\n");
		}

		int dev=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetDevMinor(int)");
		}
		self->SetDevMinor(dev);

		return 0;
	}

	// int wxTarEntry::GetGroupId() const
	static int _bind_GetGroupId(lua_State *L) {
		if (!_lg_typecheck_GetGroupId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetGroupId() const function, expected prototype:\nint wxTarEntry::GetGroupId() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetGroupId() const");
		}
		int lret = self->GetGroupId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetUserId() const
	static int _bind_GetUserId(lua_State *L) {
		if (!_lg_typecheck_GetUserId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetUserId() const function, expected prototype:\nint wxTarEntry::GetUserId() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetUserId() const");
		}
		int lret = self->GetUserId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetGroupId(int id)
	static int _bind_SetGroupId(lua_State *L) {
		if (!_lg_typecheck_SetGroupId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetGroupId(int id) function, expected prototype:\nvoid wxTarEntry::SetGroupId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetGroupId(int)");
		}
		self->SetGroupId(id);

		return 0;
	}

	// void wxTarEntry::SetUserId(int id)
	static int _bind_SetUserId(lua_State *L) {
		if (!_lg_typecheck_SetUserId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetUserId(int id) function, expected prototype:\nvoid wxTarEntry::SetUserId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetUserId(int)");
		}
		self->SetUserId(id);

		return 0;
	}

	// wxString wxTarEntry::GetGroupName() const
	static int _bind_GetGroupName(lua_State *L) {
		if (!_lg_typecheck_GetGroupName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetGroupName() const function, expected prototype:\nwxString wxTarEntry::GetGroupName() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetGroupName() const");
		}
		wxString lret = self->GetGroupName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTarEntry::SetGroupName(const wxString & group)
	static int _bind_SetGroupName(lua_State *L) {
		if (!_lg_typecheck_SetGroupName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetGroupName(const wxString & group) function, expected prototype:\nvoid wxTarEntry::SetGroupName(const wxString & group)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString group(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetGroupName(const wxString &)");
		}
		self->SetGroupName(group);

		return 0;
	}

	// void wxTarEntry::SetUserName(const wxString & user)
	static int _bind_SetUserName(lua_State *L) {
		if (!_lg_typecheck_SetUserName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetUserName(const wxString & user) function, expected prototype:\nvoid wxTarEntry::SetUserName(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetUserName(const wxString &)");
		}
		self->SetUserName(user);

		return 0;
	}

	// wxString wxTarEntry::GetLinkName() const
	static int _bind_GetLinkName(lua_State *L) {
		if (!_lg_typecheck_GetLinkName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetLinkName() const function, expected prototype:\nwxString wxTarEntry::GetLinkName() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetLinkName() const");
		}
		wxString lret = self->GetLinkName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTarEntry::SetLinkName(const wxString & link)
	static int _bind_SetLinkName(lua_State *L) {
		if (!_lg_typecheck_SetLinkName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetLinkName(const wxString & link) function, expected prototype:\nvoid wxTarEntry::SetLinkName(const wxString & link)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString link(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetLinkName(const wxString &)");
		}
		self->SetLinkName(link);

		return 0;
	}

	// int wxTarEntry::GetMode() const
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetMode() const function, expected prototype:\nint wxTarEntry::GetMode() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetMode() const");
		}
		int lret = self->GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetMode(int mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetMode(int mode) function, expected prototype:\nvoid wxTarEntry::SetMode(int mode)\nClass arguments details:\n");
		}

		int mode=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetMode(int)");
		}
		self->SetMode(mode);

		return 0;
	}

	// void wxTarEntry::SetSize(long size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetSize(long size) function, expected prototype:\nvoid wxTarEntry::SetSize(long size)\nClass arguments details:\n");
		}

		long size=(long)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetSize(long)");
		}
		self->SetSize(size);

		return 0;
	}

	// long wxTarEntry::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTarEntry::GetSize() const function, expected prototype:\nlong wxTarEntry::GetSize() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTarEntry::GetSize() const");
		}
		long lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetTypeFlag() const
	static int _bind_GetTypeFlag(lua_State *L) {
		if (!_lg_typecheck_GetTypeFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetTypeFlag() const function, expected prototype:\nint wxTarEntry::GetTypeFlag() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetTypeFlag() const");
		}
		int lret = self->GetTypeFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetTypeFlag(int type)
	static int _bind_SetTypeFlag(lua_State *L) {
		if (!_lg_typecheck_SetTypeFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetTypeFlag(int type) function, expected prototype:\nvoid wxTarEntry::SetTypeFlag(int type)\nClass arguments details:\n");
		}

		int type=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetTypeFlag(int)");
		}
		self->SetTypeFlag(type);

		return 0;
	}

	// wxString wxTarEntry::GetInternalName() const
	static int _bind_GetInternalName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetInternalName_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetInternalName() const function, expected prototype:\nwxString wxTarEntry::GetInternalName() const\nClass arguments details:\n");
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetInternalName() const");
		}
		wxString lret = self->GetInternalName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = wxPATH_NATIVE, bool * pIsDir = NULL)
	static int _bind_GetInternalName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetInternalName_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = wxPATH_NATIVE, bool * pIsDir = NULL) function, expected prototype:\nstatic wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = wxPATH_NATIVE, bool * pIsDir = NULL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : wxPATH_NATIVE;
		bool pIsDir=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : NULL;

		wxString lret = wxTarEntry::GetInternalName(name, format, &pIsDir);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxTarEntry::GetInternalName
	static int _bind_GetInternalName(lua_State *L) {
		if (_lg_typecheck_GetInternalName_overload_1(L)) return _bind_GetInternalName_overload_1(L);
		if (_lg_typecheck_GetInternalName_overload_2(L)) return _bind_GetInternalName_overload_2(L);

		luaL_error(L, "error in function GetInternalName, cannot match any of the overloads for function GetInternalName:\n  GetInternalName()\n  GetInternalName(const wxString &, wxPathFormat, bool *)\n");
		return 0;
	}


	// Operator binds:

};

wxTarEntry* LunaTraits< wxTarEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTarEntry::_bind_ctor(L);
}

void LunaTraits< wxTarEntry >::_bind_dtor(wxTarEntry* obj) {
	delete obj;
}

const char LunaTraits< wxTarEntry >::className[] = "wxTarEntry";
const char LunaTraits< wxTarEntry >::fullName[] = "wxTarEntry";
const char LunaTraits< wxTarEntry >::moduleName[] = "wx";
const char* LunaTraits< wxTarEntry >::parents[] = {0};
const int LunaTraits< wxTarEntry >::hash = 73261869;
const int LunaTraits< wxTarEntry >::uniqueIDs[] = {73261869,0};

luna_RegType LunaTraits< wxTarEntry >::methods[] = {
	{"GetAccessTime", &luna_wrapper_wxTarEntry::_bind_GetAccessTime},
	{"SetAccessTime", &luna_wrapper_wxTarEntry::_bind_SetAccessTime},
	{"GetCreateTime", &luna_wrapper_wxTarEntry::_bind_GetCreateTime},
	{"SetCreateTime", &luna_wrapper_wxTarEntry::_bind_SetCreateTime},
	{"GetDevMajor", &luna_wrapper_wxTarEntry::_bind_GetDevMajor},
	{"GetDevMinor", &luna_wrapper_wxTarEntry::_bind_GetDevMinor},
	{"SetDevMajor", &luna_wrapper_wxTarEntry::_bind_SetDevMajor},
	{"SetDevMinor", &luna_wrapper_wxTarEntry::_bind_SetDevMinor},
	{"GetGroupId", &luna_wrapper_wxTarEntry::_bind_GetGroupId},
	{"GetUserId", &luna_wrapper_wxTarEntry::_bind_GetUserId},
	{"SetGroupId", &luna_wrapper_wxTarEntry::_bind_SetGroupId},
	{"SetUserId", &luna_wrapper_wxTarEntry::_bind_SetUserId},
	{"GetGroupName", &luna_wrapper_wxTarEntry::_bind_GetGroupName},
	{"SetGroupName", &luna_wrapper_wxTarEntry::_bind_SetGroupName},
	{"SetUserName", &luna_wrapper_wxTarEntry::_bind_SetUserName},
	{"GetLinkName", &luna_wrapper_wxTarEntry::_bind_GetLinkName},
	{"SetLinkName", &luna_wrapper_wxTarEntry::_bind_SetLinkName},
	{"GetMode", &luna_wrapper_wxTarEntry::_bind_GetMode},
	{"SetMode", &luna_wrapper_wxTarEntry::_bind_SetMode},
	{"SetSize", &luna_wrapper_wxTarEntry::_bind_SetSize},
	{"GetSize", &luna_wrapper_wxTarEntry::_bind_GetSize},
	{"GetTypeFlag", &luna_wrapper_wxTarEntry::_bind_GetTypeFlag},
	{"SetTypeFlag", &luna_wrapper_wxTarEntry::_bind_SetTypeFlag},
	{"GetInternalName", &luna_wrapper_wxTarEntry::_bind_GetInternalName},
	{"dynCast", &luna_wrapper_wxTarEntry::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarEntry >::enumValues[] = {
	{0,0}
};

