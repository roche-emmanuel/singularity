#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmap.h>

class luna_wrapper_wxBitmap {
public:
	typedef Luna< wxBitmap > luna_t;

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
		//wxBitmap* ptr= dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		wxBitmap* ptr= luna_caster< wxObject, wxBitmap >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_13(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_14(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxImage* >(Luna< wxObject >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ConvertToImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CopyFromIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPalette(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ConvertToDisabled(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CleanUpHandlers(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitStandardHandlers(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ConvertToImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CopyFromIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Create_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Create_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPalette(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSubBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmap::wxBitmap()
	static wxBitmap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap() function, expected prototype:\nwxBitmap::wxBitmap()\nClass arguments details:\n");
		}


		return new wxBitmap();
	}

	// wxBitmap::wxBitmap(const wxBitmap & bitmap)
	static wxBitmap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(const wxBitmap & bitmap) function, expected prototype:\nwxBitmap::wxBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmap::wxBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		return new wxBitmap(bitmap);
	}

	// wxBitmap::wxBitmap(int width, int height, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(int width, int height, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(int width, int height, int depth = (-1))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : (-1);

		return new wxBitmap(width, height, depth);
	}

	// wxBitmap::wxBitmap(const wxSize & sz, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(const wxSize & sz, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(const wxSize & sz, int depth = (-1))\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,1));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxBitmap::wxBitmap function");
		}
		const wxSize & sz=*sz_ptr;
		int depth=luatop>1 ? (int)lua_tointeger(L,2) : (-1);

		return new wxBitmap(sz, depth);
	}

	// wxBitmap::wxBitmap(const char *const * bits)
	static wxBitmap* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(const char *const * bits) function, expected prototype:\nwxBitmap::wxBitmap(const char *const * bits)\nClass arguments details:\n");
		}

		const char *const * bits=(const char *const *)lua_tostring(L,1);

		return new wxBitmap(bits);
	}

	// wxBitmap::wxBitmap(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	static wxBitmap* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) function, expected prototype:\nwxBitmap::wxBitmap(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxBITMAP_DEFAULT_TYPE;

		return new wxBitmap(name, type);
	}

	// wxBitmap::wxBitmap(const wxImage & img, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(const wxImage & img, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(const wxImage & img, int depth = (-1))\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxImage* img_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,1));
		if( !img_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg img in wxBitmap::wxBitmap function");
		}
		const wxImage & img=*img_ptr;
		int depth=luatop>1 ? (int)lua_tointeger(L,2) : (-1);

		return new wxBitmap(img, depth);
	}

	// wxBitmap::wxBitmap(lua_Table * data)
	static wxBitmap* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxBitmap(L,NULL);
	}

	// wxBitmap::wxBitmap(lua_Table * data, const wxBitmap & bitmap)
	static wxBitmap* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, const wxBitmap & bitmap) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmap::wxBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		return new wrapper_wxBitmap(L,NULL, bitmap);
	}

	// wxBitmap::wxBitmap(lua_Table * data, int width, int height, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, int width, int height, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, int width, int height, int depth = (-1))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=luatop>3 ? (int)lua_tointeger(L,4) : (-1);

		return new wrapper_wxBitmap(L,NULL, width, height, depth);
	}

	// wxBitmap::wxBitmap(lua_Table * data, const wxSize & sz, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, const wxSize & sz, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, const wxSize & sz, int depth = (-1))\nClass arguments details:\narg 2 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxBitmap::wxBitmap function");
		}
		const wxSize & sz=*sz_ptr;
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : (-1);

		return new wrapper_wxBitmap(L,NULL, sz, depth);
	}

	// wxBitmap::wxBitmap(lua_Table * data, const char *const * bits)
	static wxBitmap* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, const char *const * bits) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, const char *const * bits)\nClass arguments details:\n");
		}

		const char *const * bits=(const char *const *)lua_tostring(L,2);

		return new wrapper_wxBitmap(L,NULL, bits);
	}

	// wxBitmap::wxBitmap(lua_Table * data, const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	static wxBitmap* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxBITMAP_DEFAULT_TYPE;

		return new wrapper_wxBitmap(L,NULL, name, type);
	}

	// wxBitmap::wxBitmap(lua_Table * data, const wxImage & img, int depth = (-1))
	static wxBitmap* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap::wxBitmap(lua_Table * data, const wxImage & img, int depth = (-1)) function, expected prototype:\nwxBitmap::wxBitmap(lua_Table * data, const wxImage & img, int depth = (-1))\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxImage* img_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		if( !img_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg img in wxBitmap::wxBitmap function");
		}
		const wxImage & img=*img_ptr;
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : (-1);

		return new wrapper_wxBitmap(L,NULL, img, depth);
	}

	// Overload binder for wxBitmap::wxBitmap
	static wxBitmap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);
		if (_lg_typecheck_ctor_overload_13(L)) return _bind_ctor_overload_13(L);
		if (_lg_typecheck_ctor_overload_14(L)) return _bind_ctor_overload_14(L);

		luaL_error(L, "error in function wxBitmap, cannot match any of the overloads for function wxBitmap:\n  wxBitmap()\n  wxBitmap(const wxBitmap &)\n  wxBitmap(int, int, int)\n  wxBitmap(const wxSize &, int)\n  wxBitmap(const char *const *)\n  wxBitmap(const wxString &, wxBitmapType)\n  wxBitmap(const wxImage &, int)\n  wxBitmap(lua_Table *)\n  wxBitmap(lua_Table *, const wxBitmap &)\n  wxBitmap(lua_Table *, int, int, int)\n  wxBitmap(lua_Table *, const wxSize &, int)\n  wxBitmap(lua_Table *, const char *const *)\n  wxBitmap(lua_Table *, const wxString &, wxBitmapType)\n  wxBitmap(lua_Table *, const wxImage &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxImage wxBitmap::ConvertToImage() const
	static int _bind_ConvertToImage(lua_State *L) {
		if (!_lg_typecheck_ConvertToImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxBitmap::ConvertToImage() const function, expected prototype:\nwxImage wxBitmap::ConvertToImage() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxBitmap::ConvertToImage() const");
		}
		wxImage stack_lret = self->ConvertToImage();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// bool wxBitmap::CopyFromIcon(const wxIcon & icon)
	static int _bind_CopyFromIcon(lua_State *L) {
		if (!_lg_typecheck_CopyFromIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::CopyFromIcon(const wxIcon & icon) function, expected prototype:\nbool wxBitmap::CopyFromIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxBitmap::CopyFromIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::CopyFromIcon(const wxIcon &)");
		}
		bool lret = self->CopyFromIcon(icon);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::Create(int width, int height, int depth = (-1))
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::Create(int width, int height, int depth = (-1)) function, expected prototype:\nbool wxBitmap::Create(int width, int height, int depth = (-1))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=luatop>3 ? (int)lua_tointeger(L,4) : (-1);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::Create(int, int, int)");
		}
		bool lret = self->Create(width, height, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::Create(const wxSize & sz, int depth = (-1))
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::Create(const wxSize & sz, int depth = (-1)) function, expected prototype:\nbool wxBitmap::Create(const wxSize & sz, int depth = (-1))\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxBitmap::Create function");
		}
		const wxSize & sz=*sz_ptr;
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : (-1);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::Create(const wxSize &, int)");
		}
		bool lret = self->Create(sz, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxBitmap::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(int, int, int)\n  Create(const wxSize &, int)\n");
		return 0;
	}

	// int wxBitmap::GetDepth() const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::GetDepth() const function, expected prototype:\nint wxBitmap::GetDepth() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::GetDepth() const");
		}
		int lret = self->GetDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmap::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::GetHeight() const function, expected prototype:\nint wxBitmap::GetHeight() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::GetHeight() const");
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMask * wxBitmap::GetMask() const
	static int _bind_GetMask(lua_State *L) {
		if (!_lg_typecheck_GetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask * wxBitmap::GetMask() const function, expected prototype:\nwxMask * wxBitmap::GetMask() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMask * wxBitmap::GetMask() const");
		}
		wxMask * lret = self->GetMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMask >::push(L,lret,false);

		return 1;
	}

	// wxPalette * wxBitmap::GetPalette() const
	static int _bind_GetPalette(lua_State *L) {
		if (!_lg_typecheck_GetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPalette * wxBitmap::GetPalette() const function, expected prototype:\nwxPalette * wxBitmap::GetPalette() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPalette * wxBitmap::GetPalette() const");
		}
		wxPalette * lret = self->GetPalette();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPalette >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxBitmap::GetSubBitmap(const wxRect & rect) const
	static int _bind_GetSubBitmap(lua_State *L) {
		if (!_lg_typecheck_GetSubBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmap::GetSubBitmap(const wxRect & rect) const function, expected prototype:\nwxBitmap wxBitmap::GetSubBitmap(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxBitmap::GetSubBitmap function");
		}
		const wxRect & rect=*rect_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmap::GetSubBitmap(const wxRect &) const");
		}
		wxBitmap stack_lret = self->GetSubBitmap(rect);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmap::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxBitmap::GetSize() const function, expected prototype:\nwxSize wxBitmap::GetSize() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxBitmap::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxBitmap::ConvertToDisabled(unsigned char brightness = 255) const
	static int _bind_ConvertToDisabled(lua_State *L) {
		if (!_lg_typecheck_ConvertToDisabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmap::ConvertToDisabled(unsigned char brightness = 255) const function, expected prototype:\nwxBitmap wxBitmap::ConvertToDisabled(unsigned char brightness = 255) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char brightness = (unsigned char)(lua_tointeger(L,2));

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmap::ConvertToDisabled(unsigned char) const");
		}
		wxBitmap stack_lret = self->ConvertToDisabled(brightness);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// int wxBitmap::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::GetWidth() const function, expected prototype:\nint wxBitmap::GetWidth() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBitmap::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::IsOk() const function, expected prototype:\nbool wxBitmap::IsOk() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) function, expected prototype:\nbool wxBitmap::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxBITMAP_DEFAULT_TYPE;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::LoadFile(const wxString &, wxBitmapType)");
		}
		bool lret = self->LoadFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const function, expected prototype:\nbool wxBitmap::SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);
		const wxPalette* palette=luatop>3 ? (Luna< wxObject >::checkSubType< wxPalette >(L,4)) : (const wxPalette*)NULL;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::SaveFile(const wxString &, wxBitmapType, const wxPalette *) const");
		}
		bool lret = self->SaveFile(name, type, palette);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmap::SetDepth(int depth)
	static int _bind_SetDepth(lua_State *L) {
		if (!_lg_typecheck_SetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::SetDepth(int depth) function, expected prototype:\nvoid wxBitmap::SetDepth(int depth)\nClass arguments details:\n");
		}

		int depth=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::SetDepth(int)");
		}
		self->SetDepth(depth);

		return 0;
	}

	// void wxBitmap::SetHeight(int height)
	static int _bind_SetHeight(lua_State *L) {
		if (!_lg_typecheck_SetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::SetHeight(int height) function, expected prototype:\nvoid wxBitmap::SetHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::SetHeight(int)");
		}
		self->SetHeight(height);

		return 0;
	}

	// void wxBitmap::SetMask(wxMask * mask)
	static int _bind_SetMask(lua_State *L) {
		if (!_lg_typecheck_SetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::SetMask(wxMask * mask) function, expected prototype:\nvoid wxBitmap::SetMask(wxMask * mask)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMask* mask=(Luna< wxObject >::checkSubType< wxMask >(L,2));

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::SetMask(wxMask *)");
		}
		self->SetMask(mask);

		return 0;
	}

	// void wxBitmap::SetPalette(const wxPalette & palette)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxBitmap::SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxBitmap::SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::SetPalette(const wxPalette &)");
		}
		self->SetPalette(palette);

		return 0;
	}

	// void wxBitmap::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::SetWidth(int width) function, expected prototype:\nvoid wxBitmap::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::SetWidth(int)");
		}
		self->SetWidth(width);

		return 0;
	}

	// static void wxBitmap::AddHandler(wxBitmapHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxBitmap::AddHandler(wxBitmapHandler * handler) function, expected prototype:\nstatic void wxBitmap::AddHandler(wxBitmapHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBitmapHandler* handler=(Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1));

		wxBitmap::AddHandler(handler);

		return 0;
	}

	// static void wxBitmap::CleanUpHandlers()
	static int _bind_CleanUpHandlers(lua_State *L) {
		if (!_lg_typecheck_CleanUpHandlers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxBitmap::CleanUpHandlers() function, expected prototype:\nstatic void wxBitmap::CleanUpHandlers()\nClass arguments details:\n");
		}


		wxBitmap::CleanUpHandlers();

		return 0;
	}

	// static void wxBitmap::InitStandardHandlers()
	static int _bind_InitStandardHandlers(lua_State *L) {
		if (!_lg_typecheck_InitStandardHandlers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxBitmap::InitStandardHandlers() function, expected prototype:\nstatic void wxBitmap::InitStandardHandlers()\nClass arguments details:\n");
		}


		wxBitmap::InitStandardHandlers();

		return 0;
	}

	// static void wxBitmap::InsertHandler(wxBitmapHandler * handler)
	static int _bind_InsertHandler(lua_State *L) {
		if (!_lg_typecheck_InsertHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxBitmap::InsertHandler(wxBitmapHandler * handler) function, expected prototype:\nstatic void wxBitmap::InsertHandler(wxBitmapHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBitmapHandler* handler=(Luna< wxObject >::checkSubType< wxBitmapHandler >(L,1));

		wxBitmap::InsertHandler(handler);

		return 0;
	}

	// static bool wxBitmap::RemoveHandler(const wxString & name)
	static int _bind_RemoveHandler(lua_State *L) {
		if (!_lg_typecheck_RemoveHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxBitmap::RemoveHandler(const wxString & name) function, expected prototype:\nstatic bool wxBitmap::RemoveHandler(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxBitmap::RemoveHandler(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxBitmap::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBitmap::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBitmap::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBitmap::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxBitmap::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxImage wxBitmap::base_ConvertToImage() const
	static int _bind_base_ConvertToImage(lua_State *L) {
		if (!_lg_typecheck_base_ConvertToImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxBitmap::base_ConvertToImage() const function, expected prototype:\nwxImage wxBitmap::base_ConvertToImage() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxBitmap::base_ConvertToImage() const");
		}
		wxImage stack_lret = self->wxBitmap::ConvertToImage();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// bool wxBitmap::base_CopyFromIcon(const wxIcon & icon)
	static int _bind_base_CopyFromIcon(lua_State *L) {
		if (!_lg_typecheck_base_CopyFromIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_CopyFromIcon(const wxIcon & icon) function, expected prototype:\nbool wxBitmap::base_CopyFromIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxBitmap::base_CopyFromIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_CopyFromIcon(const wxIcon &)");
		}
		bool lret = self->wxBitmap::CopyFromIcon(icon);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::base_Create(int width, int height, int depth = (-1))
	static int _bind_base_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_Create(int width, int height, int depth = (-1)) function, expected prototype:\nbool wxBitmap::base_Create(int width, int height, int depth = (-1))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int depth=luatop>3 ? (int)lua_tointeger(L,4) : (-1);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_Create(int, int, int)");
		}
		bool lret = self->wxBitmap::Create(width, height, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::base_Create(const wxSize & sz, int depth = (-1))
	static int _bind_base_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_Create(const wxSize & sz, int depth = (-1)) function, expected prototype:\nbool wxBitmap::base_Create(const wxSize & sz, int depth = (-1))\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxBitmap::base_Create function");
		}
		const wxSize & sz=*sz_ptr;
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : (-1);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_Create(const wxSize &, int)");
		}
		bool lret = self->wxBitmap::Create(sz, depth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxBitmap::base_Create
	static int _bind_base_Create(lua_State *L) {
		if (_lg_typecheck_base_Create_overload_1(L)) return _bind_base_Create_overload_1(L);
		if (_lg_typecheck_base_Create_overload_2(L)) return _bind_base_Create_overload_2(L);

		luaL_error(L, "error in function base_Create, cannot match any of the overloads for function base_Create:\n  base_Create(int, int, int)\n  base_Create(const wxSize &, int)\n");
		return 0;
	}

	// int wxBitmap::base_GetDepth() const
	static int _bind_base_GetDepth(lua_State *L) {
		if (!_lg_typecheck_base_GetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::base_GetDepth() const function, expected prototype:\nint wxBitmap::base_GetDepth() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::base_GetDepth() const");
		}
		int lret = self->wxBitmap::GetDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmap::base_GetHeight() const
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::base_GetHeight() const function, expected prototype:\nint wxBitmap::base_GetHeight() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::base_GetHeight() const");
		}
		int lret = self->wxBitmap::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMask * wxBitmap::base_GetMask() const
	static int _bind_base_GetMask(lua_State *L) {
		if (!_lg_typecheck_base_GetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMask * wxBitmap::base_GetMask() const function, expected prototype:\nwxMask * wxBitmap::base_GetMask() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxMask * wxBitmap::base_GetMask() const");
		}
		wxMask * lret = self->wxBitmap::GetMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMask >::push(L,lret,false);

		return 1;
	}

	// wxPalette * wxBitmap::base_GetPalette() const
	static int _bind_base_GetPalette(lua_State *L) {
		if (!_lg_typecheck_base_GetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPalette * wxBitmap::base_GetPalette() const function, expected prototype:\nwxPalette * wxBitmap::base_GetPalette() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPalette * wxBitmap::base_GetPalette() const");
		}
		wxPalette * lret = self->wxBitmap::GetPalette();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPalette >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxBitmap::base_GetSubBitmap(const wxRect & rect) const
	static int _bind_base_GetSubBitmap(lua_State *L) {
		if (!_lg_typecheck_base_GetSubBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmap::base_GetSubBitmap(const wxRect & rect) const function, expected prototype:\nwxBitmap wxBitmap::base_GetSubBitmap(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxBitmap::base_GetSubBitmap function");
		}
		const wxRect & rect=*rect_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmap::base_GetSubBitmap(const wxRect &) const");
		}
		wxBitmap stack_lret = self->wxBitmap::GetSubBitmap(rect);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// int wxBitmap::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBitmap::base_GetWidth() const function, expected prototype:\nint wxBitmap::base_GetWidth() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBitmap::base_GetWidth() const");
		}
		int lret = self->wxBitmap::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBitmap::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_IsOk() const function, expected prototype:\nbool wxBitmap::base_IsOk() const\nClass arguments details:\n");
		}


		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_IsOk() const");
		}
		bool lret = self->wxBitmap::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::base_LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	static int _bind_base_LoadFile(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) function, expected prototype:\nbool wxBitmap::base_LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxBITMAP_DEFAULT_TYPE;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_LoadFile(const wxString &, wxBitmapType)");
		}
		bool lret = self->wxBitmap::LoadFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmap::base_SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	static int _bind_base_SaveFile(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBitmap::base_SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const function, expected prototype:\nbool wxBitmap::base_SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);
		const wxPalette* palette=luatop>3 ? (Luna< wxObject >::checkSubType< wxPalette >(L,4)) : (const wxPalette*)NULL;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBitmap::base_SaveFile(const wxString &, wxBitmapType, const wxPalette *) const");
		}
		bool lret = self->wxBitmap::SaveFile(name, type, palette);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmap::base_SetDepth(int depth)
	static int _bind_base_SetDepth(lua_State *L) {
		if (!_lg_typecheck_base_SetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::base_SetDepth(int depth) function, expected prototype:\nvoid wxBitmap::base_SetDepth(int depth)\nClass arguments details:\n");
		}

		int depth=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::base_SetDepth(int)");
		}
		self->wxBitmap::SetDepth(depth);

		return 0;
	}

	// void wxBitmap::base_SetHeight(int height)
	static int _bind_base_SetHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::base_SetHeight(int height) function, expected prototype:\nvoid wxBitmap::base_SetHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::base_SetHeight(int)");
		}
		self->wxBitmap::SetHeight(height);

		return 0;
	}

	// void wxBitmap::base_SetMask(wxMask * mask)
	static int _bind_base_SetMask(lua_State *L) {
		if (!_lg_typecheck_base_SetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::base_SetMask(wxMask * mask) function, expected prototype:\nvoid wxBitmap::base_SetMask(wxMask * mask)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMask* mask=(Luna< wxObject >::checkSubType< wxMask >(L,2));

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::base_SetMask(wxMask *)");
		}
		self->wxBitmap::SetMask(mask);

		return 0;
	}

	// void wxBitmap::base_SetPalette(const wxPalette & palette)
	static int _bind_base_SetPalette(lua_State *L) {
		if (!_lg_typecheck_base_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::base_SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxBitmap::base_SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxBitmap::base_SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::base_SetPalette(const wxPalette &)");
		}
		self->wxBitmap::SetPalette(palette);

		return 0;
	}

	// void wxBitmap::base_SetWidth(int width)
	static int _bind_base_SetWidth(lua_State *L) {
		if (!_lg_typecheck_base_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBitmap::base_SetWidth(int width) function, expected prototype:\nvoid wxBitmap::base_SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxBitmap* self=Luna< wxObject >::checkSubType< wxBitmap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBitmap::base_SetWidth(int)");
		}
		self->wxBitmap::SetWidth(width);

		return 0;
	}


	// Operator binds:

};

wxBitmap* LunaTraits< wxBitmap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmap::_bind_ctor(L);
}

void LunaTraits< wxBitmap >::_bind_dtor(wxBitmap* obj) {
	delete obj;
}

const char LunaTraits< wxBitmap >::className[] = "wxBitmap";
const char LunaTraits< wxBitmap >::fullName[] = "wxBitmap";
const char LunaTraits< wxBitmap >::moduleName[] = "wx";
const char* LunaTraits< wxBitmap >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxBitmap >::hash = 91404879;
const int LunaTraits< wxBitmap >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBitmap >::methods[] = {
	{"ConvertToImage", &luna_wrapper_wxBitmap::_bind_ConvertToImage},
	{"CopyFromIcon", &luna_wrapper_wxBitmap::_bind_CopyFromIcon},
	{"Create", &luna_wrapper_wxBitmap::_bind_Create},
	{"GetDepth", &luna_wrapper_wxBitmap::_bind_GetDepth},
	{"GetHeight", &luna_wrapper_wxBitmap::_bind_GetHeight},
	{"GetMask", &luna_wrapper_wxBitmap::_bind_GetMask},
	{"GetPalette", &luna_wrapper_wxBitmap::_bind_GetPalette},
	{"GetSubBitmap", &luna_wrapper_wxBitmap::_bind_GetSubBitmap},
	{"GetSize", &luna_wrapper_wxBitmap::_bind_GetSize},
	{"ConvertToDisabled", &luna_wrapper_wxBitmap::_bind_ConvertToDisabled},
	{"GetWidth", &luna_wrapper_wxBitmap::_bind_GetWidth},
	{"IsOk", &luna_wrapper_wxBitmap::_bind_IsOk},
	{"LoadFile", &luna_wrapper_wxBitmap::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_wxBitmap::_bind_SaveFile},
	{"SetDepth", &luna_wrapper_wxBitmap::_bind_SetDepth},
	{"SetHeight", &luna_wrapper_wxBitmap::_bind_SetHeight},
	{"SetMask", &luna_wrapper_wxBitmap::_bind_SetMask},
	{"SetPalette", &luna_wrapper_wxBitmap::_bind_SetPalette},
	{"SetWidth", &luna_wrapper_wxBitmap::_bind_SetWidth},
	{"AddHandler", &luna_wrapper_wxBitmap::_bind_AddHandler},
	{"CleanUpHandlers", &luna_wrapper_wxBitmap::_bind_CleanUpHandlers},
	{"InitStandardHandlers", &luna_wrapper_wxBitmap::_bind_InitStandardHandlers},
	{"InsertHandler", &luna_wrapper_wxBitmap::_bind_InsertHandler},
	{"RemoveHandler", &luna_wrapper_wxBitmap::_bind_RemoveHandler},
	{"base_GetClassInfo", &luna_wrapper_wxBitmap::_bind_base_GetClassInfo},
	{"base_ConvertToImage", &luna_wrapper_wxBitmap::_bind_base_ConvertToImage},
	{"base_CopyFromIcon", &luna_wrapper_wxBitmap::_bind_base_CopyFromIcon},
	{"base_Create", &luna_wrapper_wxBitmap::_bind_base_Create},
	{"base_GetDepth", &luna_wrapper_wxBitmap::_bind_base_GetDepth},
	{"base_GetHeight", &luna_wrapper_wxBitmap::_bind_base_GetHeight},
	{"base_GetMask", &luna_wrapper_wxBitmap::_bind_base_GetMask},
	{"base_GetPalette", &luna_wrapper_wxBitmap::_bind_base_GetPalette},
	{"base_GetSubBitmap", &luna_wrapper_wxBitmap::_bind_base_GetSubBitmap},
	{"base_GetWidth", &luna_wrapper_wxBitmap::_bind_base_GetWidth},
	{"base_IsOk", &luna_wrapper_wxBitmap::_bind_base_IsOk},
	{"base_LoadFile", &luna_wrapper_wxBitmap::_bind_base_LoadFile},
	{"base_SaveFile", &luna_wrapper_wxBitmap::_bind_base_SaveFile},
	{"base_SetDepth", &luna_wrapper_wxBitmap::_bind_base_SetDepth},
	{"base_SetHeight", &luna_wrapper_wxBitmap::_bind_base_SetHeight},
	{"base_SetMask", &luna_wrapper_wxBitmap::_bind_base_SetMask},
	{"base_SetPalette", &luna_wrapper_wxBitmap::_bind_base_SetPalette},
	{"base_SetWidth", &luna_wrapper_wxBitmap::_bind_base_SetWidth},
	{"__eq", &luna_wrapper_wxBitmap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmap >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmap::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmap >::enumValues[] = {
	{0,0}
};


