#include <plug_common.h>

class luna_wrapper_wxTextFile {
public:
	typedef Luna< wxTextFile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37255181) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextFile*)");
		}

		wxTextFile* rhs =(Luna< wxTextFile >::check(L,2));
		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
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

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextFile");
		
		return luna_dynamicCast(L,converters,"wxTextFile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddLine(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrevLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GoToLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GuessType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertLine(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextFile::wxTextFile()
	static wxTextFile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextFile::wxTextFile() function, expected prototype:\nwxTextFile::wxTextFile()\nClass arguments details:\n");
		}


		return new wxTextFile();
	}

	// wxTextFile::wxTextFile(const wxString & strFile)
	static wxTextFile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextFile::wxTextFile(const wxString & strFile) function, expected prototype:\nwxTextFile::wxTextFile(const wxString & strFile)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strFile(lua_tostring(L,1),lua_objlen(L,1));

		return new wxTextFile(strFile);
	}

	// Overload binder for wxTextFile::wxTextFile
	static wxTextFile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextFile, cannot match any of the overloads for function wxTextFile:\n  wxTextFile()\n  wxTextFile(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxTextFile::AddLine(const wxString & str, wxTextFileType type = wxTextFile::typeDefault)
	static int _bind_AddLine(lua_State *L) {
		if (!_lg_typecheck_AddLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextFile::AddLine(const wxString & str, wxTextFileType type = wxTextFile::typeDefault) function, expected prototype:\nvoid wxTextFile::AddLine(const wxString & str, wxTextFileType type = wxTextFile::typeDefault)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		wxTextFileType type=luatop>2 ? (wxTextFileType)lua_tointeger(L,3) : wxTextFile::typeDefault;

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextFile::AddLine(const wxString &, wxTextFileType). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		self->AddLine(str, type);

		return 0;
	}

	// void wxTextFile::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextFile::Clear() function, expected prototype:\nvoid wxTextFile::Clear()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextFile::Clear(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// bool wxTextFile::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::Close() function, expected prototype:\nbool wxTextFile::Close()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::Close(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextFile::Create()
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::Create() function, expected prototype:\nbool wxTextFile::Create()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::Create(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->Create();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextFile::Create(const wxString & strFile)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::Create(const wxString & strFile) function, expected prototype:\nbool wxTextFile::Create(const wxString & strFile)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strFile(lua_tostring(L,2),lua_objlen(L,2));

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::Create(const wxString &). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->Create(strFile);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTextFile::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create()\n  Create(const wxString &)\n");
		return 0;
	}

	// bool wxTextFile::Eof() const
	static int _bind_Eof(lua_State *L) {
		if (!_lg_typecheck_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::Eof() const function, expected prototype:\nbool wxTextFile::Eof() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::Eof() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextFile::Exists() const
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::Exists() const function, expected prototype:\nbool wxTextFile::Exists() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::Exists() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->Exists();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxTextFile::GetCurrentLine() const
	static int _bind_GetCurrentLine(lua_State *L) {
		if (!_lg_typecheck_GetCurrentLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTextFile::GetCurrentLine() const function, expected prototype:\nsize_t wxTextFile::GetCurrentLine() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTextFile::GetCurrentLine() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		size_t lret = self->GetCurrentLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString & wxTextFile::GetFirstLine()
	static int _bind_GetFirstLine(lua_State *L) {
		if (!_lg_typecheck_GetFirstLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::GetFirstLine() function, expected prototype:\nwxString & wxTextFile::GetFirstLine()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::GetFirstLine(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->GetFirstLine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString & wxTextFile::GetLastLine()
	static int _bind_GetLastLine(lua_State *L) {
		if (!_lg_typecheck_GetLastLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::GetLastLine() function, expected prototype:\nwxString & wxTextFile::GetLastLine()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::GetLastLine(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->GetLastLine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString & wxTextFile::GetLine(size_t n) const
	static int _bind_GetLine(lua_State *L) {
		if (!_lg_typecheck_GetLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::GetLine(size_t n) const function, expected prototype:\nwxString & wxTextFile::GetLine(size_t n) const\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::GetLine(size_t) const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->GetLine(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxTextFile::GetLineCount() const
	static int _bind_GetLineCount(lua_State *L) {
		if (!_lg_typecheck_GetLineCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxTextFile::GetLineCount() const function, expected prototype:\nsize_t wxTextFile::GetLineCount() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxTextFile::GetLineCount() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		size_t lret = self->GetLineCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextFileType wxTextFile::GetLineType(size_t n) const
	static int _bind_GetLineType(lua_State *L) {
		if (!_lg_typecheck_GetLineType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextFileType wxTextFile::GetLineType(size_t n) const function, expected prototype:\nwxTextFileType wxTextFile::GetLineType(size_t n) const\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextFileType wxTextFile::GetLineType(size_t) const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxTextFileType lret = self->GetLineType(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextFile::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextFile::GetName() const function, expected prototype:\nconst wxString & wxTextFile::GetName() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextFile::GetName() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString & wxTextFile::GetNextLine()
	static int _bind_GetNextLine(lua_State *L) {
		if (!_lg_typecheck_GetNextLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::GetNextLine() function, expected prototype:\nwxString & wxTextFile::GetNextLine()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::GetNextLine(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->GetNextLine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString & wxTextFile::GetPrevLine()
	static int _bind_GetPrevLine(lua_State *L) {
		if (!_lg_typecheck_GetPrevLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::GetPrevLine() function, expected prototype:\nwxString & wxTextFile::GetPrevLine()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::GetPrevLine(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->GetPrevLine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextFile::GoToLine(size_t n)
	static int _bind_GoToLine(lua_State *L) {
		if (!_lg_typecheck_GoToLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextFile::GoToLine(size_t n) function, expected prototype:\nvoid wxTextFile::GoToLine(size_t n)\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextFile::GoToLine(size_t). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		self->GoToLine(n);

		return 0;
	}

	// wxTextFileType wxTextFile::GuessType() const
	static int _bind_GuessType(lua_State *L) {
		if (!_lg_typecheck_GuessType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextFileType wxTextFile::GuessType() const function, expected prototype:\nwxTextFileType wxTextFile::GuessType() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextFileType wxTextFile::GuessType() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxTextFileType lret = self->GuessType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextFile::InsertLine(const wxString & str, size_t n, wxTextFileType type = wxTextFile::typeDefault)
	static int _bind_InsertLine(lua_State *L) {
		if (!_lg_typecheck_InsertLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextFile::InsertLine(const wxString & str, size_t n, wxTextFileType type = wxTextFile::typeDefault) function, expected prototype:\nvoid wxTextFile::InsertLine(const wxString & str, size_t n, wxTextFileType type = wxTextFile::typeDefault)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		size_t n=(size_t)lua_tointeger(L,3);
		wxTextFileType type=luatop>3 ? (wxTextFileType)lua_tointeger(L,4) : wxTextFile::typeDefault;

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextFile::InsertLine(const wxString &, size_t, wxTextFileType). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		self->InsertLine(str, n, type);

		return 0;
	}

	// bool wxTextFile::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextFile::IsOpened() const function, expected prototype:\nbool wxTextFile::IsOpened() const\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextFile::IsOpened() const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextFile::RemoveLine(size_t n)
	static int _bind_RemoveLine(lua_State *L) {
		if (!_lg_typecheck_RemoveLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextFile::RemoveLine(size_t n) function, expected prototype:\nvoid wxTextFile::RemoveLine(size_t n)\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextFile::RemoveLine(size_t). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		self->RemoveLine(n);

		return 0;
	}

	// const wxTextFileType wxTextFile::typeDefault()
	static int _bind_getTypeDefault(lua_State *L) {
		if (!_lg_typecheck_getTypeDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextFileType wxTextFile::typeDefault() function, expected prototype:\nconst wxTextFileType wxTextFile::typeDefault()\nClass arguments details:\n");
		}


		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextFileType wxTextFile::typeDefault(). Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		const wxTextFileType lret = self->typeDefault;
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// wxString & wxTextFile::operator[](size_t n) const
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString & wxTextFile::operator[](size_t n) const function, expected prototype:\nwxString & wxTextFile::operator[](size_t n) const\nClass arguments details:\n");
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxTextFile* self=(Luna< wxTextFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString & wxTextFile::operator[](size_t) const. Got : '%s'",typeid(Luna< wxTextFile >::check(L,1)).name());
		}
		wxString & lret = self->operator[](n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


};

wxTextFile* LunaTraits< wxTextFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextFile::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxTextFile >::_bind_dtor(wxTextFile* obj) {
	delete obj;
}

const char LunaTraits< wxTextFile >::className[] = "wxTextFile";
const char LunaTraits< wxTextFile >::fullName[] = "wxTextFile";
const char LunaTraits< wxTextFile >::moduleName[] = "wx";
const char* LunaTraits< wxTextFile >::parents[] = {0};
const int LunaTraits< wxTextFile >::hash = 37255181;
const int LunaTraits< wxTextFile >::uniqueIDs[] = {37255181,0};

luna_RegType LunaTraits< wxTextFile >::methods[] = {
	{"AddLine", &luna_wrapper_wxTextFile::_bind_AddLine},
	{"Clear", &luna_wrapper_wxTextFile::_bind_Clear},
	{"Close", &luna_wrapper_wxTextFile::_bind_Close},
	{"Create", &luna_wrapper_wxTextFile::_bind_Create},
	{"Eof", &luna_wrapper_wxTextFile::_bind_Eof},
	{"Exists", &luna_wrapper_wxTextFile::_bind_Exists},
	{"GetCurrentLine", &luna_wrapper_wxTextFile::_bind_GetCurrentLine},
	{"GetFirstLine", &luna_wrapper_wxTextFile::_bind_GetFirstLine},
	{"GetLastLine", &luna_wrapper_wxTextFile::_bind_GetLastLine},
	{"GetLine", &luna_wrapper_wxTextFile::_bind_GetLine},
	{"GetLineCount", &luna_wrapper_wxTextFile::_bind_GetLineCount},
	{"GetLineType", &luna_wrapper_wxTextFile::_bind_GetLineType},
	{"GetName", &luna_wrapper_wxTextFile::_bind_GetName},
	{"GetNextLine", &luna_wrapper_wxTextFile::_bind_GetNextLine},
	{"GetPrevLine", &luna_wrapper_wxTextFile::_bind_GetPrevLine},
	{"GoToLine", &luna_wrapper_wxTextFile::_bind_GoToLine},
	{"GuessType", &luna_wrapper_wxTextFile::_bind_GuessType},
	{"InsertLine", &luna_wrapper_wxTextFile::_bind_InsertLine},
	{"IsOpened", &luna_wrapper_wxTextFile::_bind_IsOpened},
	{"RemoveLine", &luna_wrapper_wxTextFile::_bind_RemoveLine},
	{"getTypeDefault", &luna_wrapper_wxTextFile::_bind_getTypeDefault},
	{"op_index", &luna_wrapper_wxTextFile::_bind_op_index},
	{"dynCast", &luna_wrapper_wxTextFile::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextFile::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextFile >::enumValues[] = {
	{0,0}
};


