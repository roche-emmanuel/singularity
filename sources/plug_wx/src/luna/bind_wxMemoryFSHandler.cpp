#include <plug_common.h>

class luna_wrapper_wxMemoryFSHandler {
public:
	typedef Luna< wxMemoryFSHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMemoryFSHandler* ptr= dynamic_cast< wxMemoryFSHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryFSHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AddFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileWithMimeType_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFileWithMimeType_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// static void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type)
	static int _bind_AddFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFile_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFile(const wxString & filename, wxImage & image, wxBitmapType type)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxImage* image_ptr=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxMemoryFSHandler::AddFile function");
		}
		wxImage & image=*image_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxMemoryFSHandler::AddFile(filename, image, type);

		return 0;
	}

	// static void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type)
	static int _bind_AddFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFile_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFile(const wxString & filename, const wxBitmap & bitmap, wxBitmapType type)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryFSHandler::AddFile function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxMemoryFSHandler::AddFile(filename, bitmap, type);

		return 0;
	}

	// Overload binder for wxMemoryFSHandler::AddFile
	static int _bind_AddFile(lua_State *L) {
		if (_lg_typecheck_AddFile_overload_1(L)) return _bind_AddFile_overload_1(L);
		if (_lg_typecheck_AddFile_overload_2(L)) return _bind_AddFile_overload_2(L);

		luaL_error(L, "error in function AddFile, cannot match any of the overloads for function AddFile:\n  AddFile(const wxString &, wxImage &, wxBitmapType)\n  AddFile(const wxString &, const wxBitmap &, wxBitmapType)\n");
		return 0;
	}

	// static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype)
	static int _bind_AddFileWithMimeType_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFileWithMimeType_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const wxString & textdata, const wxString & mimetype)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString textdata(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxMemoryFSHandler::AddFileWithMimeType(filename, textdata, mimetype);

		return 0;
	}

	// static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype)
	static int _bind_AddFileWithMimeType_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFileWithMimeType_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype) function, expected prototype:\nstatic void wxMemoryFSHandler::AddFileWithMimeType(const wxString & filename, const void * binarydata, size_t size, const wxString & mimetype)\nClass arguments details:\narg 1 ID = 88196105\narg 4 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		void* binarydata=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);
		wxString mimetype(lua_tostring(L,4),lua_objlen(L,4));

		wxMemoryFSHandler::AddFileWithMimeType(filename, binarydata, size, mimetype);

		return 0;
	}

	// Overload binder for wxMemoryFSHandler::AddFileWithMimeType
	static int _bind_AddFileWithMimeType(lua_State *L) {
		if (_lg_typecheck_AddFileWithMimeType_overload_1(L)) return _bind_AddFileWithMimeType_overload_1(L);
		if (_lg_typecheck_AddFileWithMimeType_overload_2(L)) return _bind_AddFileWithMimeType_overload_2(L);

		luaL_error(L, "error in function AddFileWithMimeType, cannot match any of the overloads for function AddFileWithMimeType:\n  AddFileWithMimeType(const wxString &, const wxString &, const wxString &)\n  AddFileWithMimeType(const wxString &, const void *, size_t, const wxString &)\n");
		return 0;
	}

	// static void wxMemoryFSHandler::RemoveFile(const wxString & filename)
	static int _bind_RemoveFile(lua_State *L) {
		if (!_lg_typecheck_RemoveFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxMemoryFSHandler::RemoveFile(const wxString & filename) function, expected prototype:\nstatic void wxMemoryFSHandler::RemoveFile(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		wxMemoryFSHandler::RemoveFile(filename);

		return 0;
	}


	// Operator binds:

};

wxMemoryFSHandler* LunaTraits< wxMemoryFSHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)

	// Abstract operators:
}

void LunaTraits< wxMemoryFSHandler >::_bind_dtor(wxMemoryFSHandler* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryFSHandler >::className[] = "wxMemoryFSHandler";
const char LunaTraits< wxMemoryFSHandler >::fullName[] = "wxMemoryFSHandler";
const char LunaTraits< wxMemoryFSHandler >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryFSHandler >::parents[] = {"wx.wxFileSystemHandler", 0};
const int LunaTraits< wxMemoryFSHandler >::hash = 93447661;
const int LunaTraits< wxMemoryFSHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryFSHandler >::methods[] = {
	{"AddFile", &luna_wrapper_wxMemoryFSHandler::_bind_AddFile},
	{"AddFileWithMimeType", &luna_wrapper_wxMemoryFSHandler::_bind_AddFileWithMimeType},
	{"RemoveFile", &luna_wrapper_wxMemoryFSHandler::_bind_RemoveFile},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryFSHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryFSHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryFSHandler >::enumValues[] = {
	{0,0}
};


