#include <plug_common.h>

class luna_wrapper_wxImage {
public:
	typedef Luna< wxImage > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxImage* ptr= dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxImage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Blur(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlurHorizontal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlurVertical(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mirror(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rescale(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate90(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate180(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RotateHue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Size(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToGreyscale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToGreyscale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ComputeHistogram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75442299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOptionInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPalette(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOption_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOption_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
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

	inline static bool _lg_typecheck_CanRead_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanRead_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageCount_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageCount_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageExtWildcard(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RGBtoHSV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45106465) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HSVtoRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41631892) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImage::wxImage()
	static wxImage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage() function, expected prototype:\nwxImage::wxImage()\nClass arguments details:\n");
		}


		return new wxImage();
	}

	// wxImage::wxImage(int width, int height, bool clear = true)
	static wxImage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(int width, int height, bool clear = true) function, expected prototype:\nwxImage::wxImage(int width, int height, bool clear = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		bool clear=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		return new wxImage(width, height, clear);
	}

	// wxImage::wxImage(const wxSize & sz, bool clear = true)
	static wxImage* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxSize & sz, bool clear = true) function, expected prototype:\nwxImage::wxImage(const wxSize & sz, bool clear = true)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,1));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		bool clear=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wxImage(sz, clear);
	}

	// wxImage::wxImage(const char *const * xpmData)
	static wxImage* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const char *const * xpmData) function, expected prototype:\nwxImage::wxImage(const char *const * xpmData)\nClass arguments details:\n");
		}

		const char *const * xpmData=(const char *const *)lua_tostring(L,1);

		return new wxImage(xpmData);
	}

	// wxImage::wxImage(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxBITMAP_TYPE_ANY;
		int index=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wxImage(name, type, index);
	}

	// wxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxString mimetype(lua_tostring(L,2),lua_objlen(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wxImage(name, mimetype, index);
	}

	// wxImage::wxImage(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxBITMAP_TYPE_ANY;
		int index=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wxImage(stream, type, index);
	}

	// wxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,2),lua_objlen(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		return new wxImage(stream, mimetype, index);
	}

	// Overload binder for wxImage::wxImage
	static wxImage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxImage, cannot match any of the overloads for function wxImage:\n  wxImage()\n  wxImage(int, int, bool)\n  wxImage(const wxSize &, bool)\n  wxImage(const char *const *)\n  wxImage(const wxString &, wxBitmapType, int)\n  wxImage(const wxString &, const wxString &, int)\n  wxImage(wxInputStream &, wxBitmapType, int)\n  wxImage(wxInputStream &, const wxString &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxImage wxImage::Copy() const
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Copy() const function, expected prototype:\nwxImage wxImage::Copy() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Copy() const");
		}
		wxImage stack_lret = self->Copy();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// bool wxImage::Create(int width, int height, bool clear = true)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(int width, int height, bool clear = true) function, expected prototype:\nbool wxImage::Create(int width, int height, bool clear = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool clear=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::Create(int, int, bool)");
		}
		bool lret = self->Create(width, height, clear);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(const wxSize & sz, bool clear = true)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(const wxSize & sz, bool clear = true) function, expected prototype:\nbool wxImage::Create(const wxSize & sz, bool clear = true)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::Create function");
		}
		const wxSize & sz=*sz_ptr;
		bool clear=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::Create(const wxSize &, bool)");
		}
		bool lret = self->Create(sz, clear);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(int, int, bool)\n  Create(const wxSize &, bool)\n");
		return 0;
	}

	// void wxImage::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::Destroy() function, expected prototype:\nvoid wxImage::Destroy()\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::Destroy()");
		}
		self->Destroy();

		return 0;
	}

	// void wxImage::InitAlpha()
	static int _bind_InitAlpha(lua_State *L) {
		if (!_lg_typecheck_InitAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::InitAlpha() function, expected prototype:\nvoid wxImage::InitAlpha()\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::InitAlpha()");
		}
		self->InitAlpha();

		return 0;
	}

	// wxImage wxImage::Blur(int blurRadius) const
	static int _bind_Blur(lua_State *L) {
		if (!_lg_typecheck_Blur(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Blur(int blurRadius) const function, expected prototype:\nwxImage wxImage::Blur(int blurRadius) const\nClass arguments details:\n");
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Blur(int) const");
		}
		wxImage stack_lret = self->Blur(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::BlurHorizontal(int blurRadius) const
	static int _bind_BlurHorizontal(lua_State *L) {
		if (!_lg_typecheck_BlurHorizontal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::BlurHorizontal(int blurRadius) const function, expected prototype:\nwxImage wxImage::BlurHorizontal(int blurRadius) const\nClass arguments details:\n");
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::BlurHorizontal(int) const");
		}
		wxImage stack_lret = self->BlurHorizontal(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::BlurVertical(int blurRadius) const
	static int _bind_BlurVertical(lua_State *L) {
		if (!_lg_typecheck_BlurVertical(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::BlurVertical(int blurRadius) const function, expected prototype:\nwxImage wxImage::BlurVertical(int blurRadius) const\nClass arguments details:\n");
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::BlurVertical(int) const");
		}
		wxImage stack_lret = self->BlurVertical(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Mirror(bool horizontally = true) const
	static int _bind_Mirror(lua_State *L) {
		if (!_lg_typecheck_Mirror(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Mirror(bool horizontally = true) const function, expected prototype:\nwxImage wxImage::Mirror(bool horizontally = true) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool horizontally=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Mirror(bool) const");
		}
		wxImage stack_lret = self->Mirror(horizontally);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// void wxImage::Paste(const wxImage & image, int x, int y)
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::Paste(const wxImage & image, int x, int y) function, expected prototype:\nvoid wxImage::Paste(const wxImage & image, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxImage* image_ptr=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxImage::Paste function");
		}
		const wxImage & image=*image_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::Paste(const wxImage &, int, int)");
		}
		self->Paste(image, x, y);

		return 0;
	}

	// wxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL)
	static int _bind_Rescale(lua_State *L) {
		if (!_lg_typecheck_Rescale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL) function, expected prototype:\nwxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		wxImageResizeQuality quality=luatop>3 ? (wxImageResizeQuality)lua_tointeger(L,4) : wxIMAGE_QUALITY_NORMAL;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage & wxImage::Rescale(int, int, wxImageResizeQuality)");
		}
		const wxImage* lret = &self->Rescale(width, height, quality);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,false);

		return 1;
	}

	// wxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1)
	static int _bind_Resize(lua_State *L) {
		if (!_lg_typecheck_Resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) function, expected prototype:\nwxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxImage::Resize function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxImage::Resize function");
		}
		const wxPoint & pos=*pos_ptr;
		int red=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int green=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int blue=luatop>5 ? (int)lua_tointeger(L,6) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage & wxImage::Resize(const wxSize &, const wxPoint &, int, int, int)");
		}
		const wxImage* lret = &self->Resize(size, pos, red, green, blue);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,false);

		return 1;
	}

	// wxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const
	static int _bind_Rotate(lua_State *L) {
		if (!_lg_typecheck_Rotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const function, expected prototype:\nwxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const\nClass arguments details:\narg 2 ID = 25723480\narg 4 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		double angle=(double)lua_tonumber(L,2);
		const wxPoint* rotationCentre_ptr=(Luna< wxPoint >::check(L,3));
		if( !rotationCentre_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotationCentre in wxImage::Rotate function");
		}
		const wxPoint & rotationCentre=*rotationCentre_ptr;
		bool interpolating=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;
		wxPoint* offsetAfterRotation=luatop>4 ? (Luna< wxPoint >::check(L,5)) : (wxPoint*)NULL;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate(double, const wxPoint &, bool, wxPoint *) const");
		}
		wxImage stack_lret = self->Rotate(angle, rotationCentre, interpolating, offsetAfterRotation);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Rotate90(bool clockwise = true) const
	static int _bind_Rotate90(lua_State *L) {
		if (!_lg_typecheck_Rotate90(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate90(bool clockwise = true) const function, expected prototype:\nwxImage wxImage::Rotate90(bool clockwise = true) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool clockwise=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate90(bool) const");
		}
		wxImage stack_lret = self->Rotate90(clockwise);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Rotate180() const
	static int _bind_Rotate180(lua_State *L) {
		if (!_lg_typecheck_Rotate180(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate180() const function, expected prototype:\nwxImage wxImage::Rotate180() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate180() const");
		}
		wxImage stack_lret = self->Rotate180();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// void wxImage::RotateHue(double angle)
	static int _bind_RotateHue(lua_State *L) {
		if (!_lg_typecheck_RotateHue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::RotateHue(double angle) function, expected prototype:\nvoid wxImage::RotateHue(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,2);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::RotateHue(double)");
		}
		self->RotateHue(angle);

		return 0;
	}

	// wxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL) const
	static int _bind_Scale(lua_State *L) {
		if (!_lg_typecheck_Scale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL) const function, expected prototype:\nwxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = wxIMAGE_QUALITY_NORMAL) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		wxImageResizeQuality quality=luatop>3 ? (wxImageResizeQuality)lua_tointeger(L,4) : wxIMAGE_QUALITY_NORMAL;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Scale(int, int, wxImageResizeQuality) const");
		}
		wxImage stack_lret = self->Scale(width, height, quality);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const
	static int _bind_Size(lua_State *L) {
		if (!_lg_typecheck_Size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const function, expected prototype:\nwxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxImage::Size function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxImage::Size function");
		}
		const wxPoint & pos=*pos_ptr;
		int red=luatop>3 ? (int)lua_tointeger(L,4) : -1;
		int green=luatop>4 ? (int)lua_tointeger(L,5) : -1;
		int blue=luatop>5 ? (int)lua_tointeger(L,6) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::Size(const wxSize &, const wxPoint &, int, int, int) const");
		}
		wxImage stack_lret = self->Size(size, pos, red, green, blue);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const
	static int _bind_ConvertToGreyscale_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertToGreyscale_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const function, expected prototype:\nwxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const\nClass arguments details:\n");
		}

		double weight_r=(double)lua_tonumber(L,2);
		double weight_g=(double)lua_tonumber(L,3);
		double weight_b=(double)lua_tonumber(L,4);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToGreyscale(double, double, double) const");
		}
		wxImage stack_lret = self->ConvertToGreyscale(weight_r, weight_g, weight_b);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::ConvertToGreyscale() const
	static int _bind_ConvertToGreyscale_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertToGreyscale_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToGreyscale() const function, expected prototype:\nwxImage wxImage::ConvertToGreyscale() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToGreyscale() const");
		}
		wxImage stack_lret = self->ConvertToGreyscale();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxImage::ConvertToGreyscale
	static int _bind_ConvertToGreyscale(lua_State *L) {
		if (_lg_typecheck_ConvertToGreyscale_overload_1(L)) return _bind_ConvertToGreyscale_overload_1(L);
		if (_lg_typecheck_ConvertToGreyscale_overload_2(L)) return _bind_ConvertToGreyscale_overload_2(L);

		luaL_error(L, "error in function ConvertToGreyscale, cannot match any of the overloads for function ConvertToGreyscale:\n  ConvertToGreyscale(double, double, double)\n  ConvertToGreyscale()\n");
		return 0;
	}

	// unsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const
	static int _bind_ComputeHistogram(lua_State *L) {
		if (!_lg_typecheck_ComputeHistogram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const function, expected prototype:\nunsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const\nClass arguments details:\narg 1 ID = 75442299\n");
		}

		wxImageHistogram* histogram_ptr=(Luna< wxImageHistogram >::check(L,2));
		if( !histogram_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg histogram in wxImage::ComputeHistogram function");
		}
		wxImageHistogram & histogram=*histogram_ptr;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long wxImage::ComputeHistogram(wxImageHistogram &) const");
		}
		unsigned long lret = self->ComputeHistogram(histogram);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxImage::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxImage::GetWidth() const function, expected prototype:\nint wxImage::GetWidth() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxImage::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxImage::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxImage::GetHeight() const function, expected prototype:\nint wxImage::GetHeight() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxImage::GetHeight() const");
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxImage::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxImage::GetSize() const function, expected prototype:\nwxSize wxImage::GetSize() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxImage::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxString wxImage::GetOption(const wxString & name) const
	static int _bind_GetOption(lua_State *L) {
		if (!_lg_typecheck_GetOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxImage::GetOption(const wxString & name) const function, expected prototype:\nwxString wxImage::GetOption(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxImage::GetOption(const wxString &) const");
		}
		wxString lret = self->GetOption(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxImage::GetOptionInt(const wxString & name) const
	static int _bind_GetOptionInt(lua_State *L) {
		if (!_lg_typecheck_GetOptionInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxImage::GetOptionInt(const wxString & name) const function, expected prototype:\nint wxImage::GetOptionInt(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxImage::GetOptionInt(const wxString &) const");
		}
		int lret = self->GetOptionInt(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxPalette & wxImage::GetPalette() const
	static int _bind_GetPalette(lua_State *L) {
		if (!_lg_typecheck_GetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxPalette & wxImage::GetPalette() const function, expected prototype:\nconst wxPalette & wxImage::GetPalette() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxPalette & wxImage::GetPalette() const");
		}
		const wxPalette* lret = &self->GetPalette();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPalette >::push(L,lret,false);

		return 1;
	}

	// wxImage wxImage::GetSubImage(const wxRect & rect) const
	static int _bind_GetSubImage(lua_State *L) {
		if (!_lg_typecheck_GetSubImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage wxImage::GetSubImage(const wxRect & rect) const function, expected prototype:\nwxImage wxImage::GetSubImage(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxImage::GetSubImage function");
		}
		const wxRect & rect=*rect_ptr;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImage wxImage::GetSubImage(const wxRect &) const");
		}
		wxImage stack_lret = self->GetSubImage(rect);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxBitmapType wxImage::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmapType wxImage::GetType() const function, expected prototype:\nwxBitmapType wxImage::GetType() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmapType wxImage::GetType() const");
		}
		wxBitmapType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImage::HasAlpha() const
	static int _bind_HasAlpha(lua_State *L) {
		if (!_lg_typecheck_HasAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::HasAlpha() const function, expected prototype:\nbool wxImage::HasAlpha() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::HasAlpha() const");
		}
		bool lret = self->HasAlpha();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::HasMask() const
	static int _bind_HasMask(lua_State *L) {
		if (!_lg_typecheck_HasMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::HasMask() const function, expected prototype:\nbool wxImage::HasMask() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::HasMask() const");
		}
		bool lret = self->HasMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::HasOption(const wxString & name) const
	static int _bind_HasOption(lua_State *L) {
		if (!_lg_typecheck_HasOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::HasOption(const wxString & name) const function, expected prototype:\nbool wxImage::HasOption(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::HasOption(const wxString &) const");
		}
		bool lret = self->HasOption(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::IsOk() const function, expected prototype:\nbool wxImage::IsOk() const\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_LoadFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(wxInputStream &, wxBitmapType, int)");
		}
		bool lret = self->LoadFile(stream, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_LoadFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(const wxString &, wxBitmapType, int)");
		}
		bool lret = self->LoadFile(name, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)
	static int _bind_LoadFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(const wxString &, const wxString &, int)");
		}
		bool lret = self->LoadFile(name, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)
	static int _bind_LoadFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(wxInputStream &, const wxString &, int)");
		}
		bool lret = self->LoadFile(stream, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::LoadFile
	static int _bind_LoadFile(lua_State *L) {
		if (_lg_typecheck_LoadFile_overload_1(L)) return _bind_LoadFile_overload_1(L);
		if (_lg_typecheck_LoadFile_overload_2(L)) return _bind_LoadFile_overload_2(L);
		if (_lg_typecheck_LoadFile_overload_3(L)) return _bind_LoadFile_overload_3(L);
		if (_lg_typecheck_LoadFile_overload_4(L)) return _bind_LoadFile_overload_4(L);

		luaL_error(L, "error in function LoadFile, cannot match any of the overloads for function LoadFile:\n  LoadFile(wxInputStream &, wxBitmapType, int)\n  LoadFile(const wxString &, wxBitmapType, int)\n  LoadFile(const wxString &, const wxString &, int)\n  LoadFile(wxInputStream &, const wxString &, int)\n");
		return 0;
	}

	// bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const
	static int _bind_SaveFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const function, expected prototype:\nbool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxOutputStream* stream_ptr=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(wxOutputStream &, const wxString &) const");
		}
		bool lret = self->SaveFile(stream, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const
	static int _bind_SaveFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &, wxBitmapType) const");
		}
		bool lret = self->SaveFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const
	static int _bind_SaveFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &, const wxString &) const");
		}
		bool lret = self->SaveFile(name, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name) const
	static int _bind_SaveFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &) const");
		}
		bool lret = self->SaveFile(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const
	static int _bind_SaveFile_overload_5(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const function, expected prototype:\nbool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxOutputStream* stream_ptr=dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(wxOutputStream &, wxBitmapType) const");
		}
		bool lret = self->SaveFile(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::SaveFile
	static int _bind_SaveFile(lua_State *L) {
		if (_lg_typecheck_SaveFile_overload_1(L)) return _bind_SaveFile_overload_1(L);
		if (_lg_typecheck_SaveFile_overload_2(L)) return _bind_SaveFile_overload_2(L);
		if (_lg_typecheck_SaveFile_overload_3(L)) return _bind_SaveFile_overload_3(L);
		if (_lg_typecheck_SaveFile_overload_4(L)) return _bind_SaveFile_overload_4(L);
		if (_lg_typecheck_SaveFile_overload_5(L)) return _bind_SaveFile_overload_5(L);

		luaL_error(L, "error in function SaveFile, cannot match any of the overloads for function SaveFile:\n  SaveFile(wxOutputStream &, const wxString &)\n  SaveFile(const wxString &, wxBitmapType)\n  SaveFile(const wxString &, const wxString &)\n  SaveFile(const wxString &)\n  SaveFile(wxOutputStream &, wxBitmapType)\n");
		return 0;
	}

	// void wxImage::ClearAlpha()
	static int _bind_ClearAlpha(lua_State *L) {
		if (!_lg_typecheck_ClearAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::ClearAlpha() function, expected prototype:\nvoid wxImage::ClearAlpha()\nClass arguments details:\n");
		}


		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::ClearAlpha()");
		}
		self->ClearAlpha();

		return 0;
	}

	// void wxImage::SetMask(bool hasMask = true)
	static int _bind_SetMask(lua_State *L) {
		if (!_lg_typecheck_SetMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::SetMask(bool hasMask = true) function, expected prototype:\nvoid wxImage::SetMask(bool hasMask = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool hasMask=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::SetMask(bool)");
		}
		self->SetMask(hasMask);

		return 0;
	}

	// void wxImage::SetOption(const wxString & name, const wxString & value)
	static int _bind_SetOption_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetOption_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::SetOption(const wxString & name, const wxString & value) function, expected prototype:\nvoid wxImage::SetOption(const wxString & name, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::SetOption(const wxString &, const wxString &)");
		}
		self->SetOption(name, value);

		return 0;
	}

	// void wxImage::SetOption(const wxString & name, int value)
	static int _bind_SetOption_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetOption_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::SetOption(const wxString & name, int value) function, expected prototype:\nvoid wxImage::SetOption(const wxString & name, int value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		int value=(int)lua_tointeger(L,3);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::SetOption(const wxString &, int)");
		}
		self->SetOption(name, value);

		return 0;
	}

	// Overload binder for wxImage::SetOption
	static int _bind_SetOption(lua_State *L) {
		if (_lg_typecheck_SetOption_overload_1(L)) return _bind_SetOption_overload_1(L);
		if (_lg_typecheck_SetOption_overload_2(L)) return _bind_SetOption_overload_2(L);

		luaL_error(L, "error in function SetOption, cannot match any of the overloads for function SetOption:\n  SetOption(const wxString &, const wxString &)\n  SetOption(const wxString &, int)\n");
		return 0;
	}

	// void wxImage::SetPalette(const wxPalette & palette)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxImage::SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPalette* palette_ptr=dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxImage::SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::SetPalette(const wxPalette &)");
		}
		self->SetPalette(palette);

		return 0;
	}

	// void wxImage::SetType(wxBitmapType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::SetType(wxBitmapType type) function, expected prototype:\nvoid wxImage::SetType(wxBitmapType type)\nClass arguments details:\n");
		}

		wxBitmapType type=(wxBitmapType)lua_tointeger(L,2);

		wxImage* self=dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::SetType(wxBitmapType)");
		}
		self->SetType(type);

		return 0;
	}

	// static void wxImage::AddHandler(wxImageHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxImage::AddHandler(wxImageHandler * handler) function, expected prototype:\nstatic void wxImage::AddHandler(wxImageHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageHandler* handler=dynamic_cast< wxImageHandler* >(Luna< wxObject >::check(L,1));

		wxImage::AddHandler(handler);

		return 0;
	}

	// static void wxImage::CleanUpHandlers()
	static int _bind_CleanUpHandlers(lua_State *L) {
		if (!_lg_typecheck_CleanUpHandlers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxImage::CleanUpHandlers() function, expected prototype:\nstatic void wxImage::CleanUpHandlers()\nClass arguments details:\n");
		}


		wxImage::CleanUpHandlers();

		return 0;
	}

	// static void wxImage::InitStandardHandlers()
	static int _bind_InitStandardHandlers(lua_State *L) {
		if (!_lg_typecheck_InitStandardHandlers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxImage::InitStandardHandlers() function, expected prototype:\nstatic void wxImage::InitStandardHandlers()\nClass arguments details:\n");
		}


		wxImage::InitStandardHandlers();

		return 0;
	}

	// static void wxImage::InsertHandler(wxImageHandler * handler)
	static int _bind_InsertHandler(lua_State *L) {
		if (!_lg_typecheck_InsertHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxImage::InsertHandler(wxImageHandler * handler) function, expected prototype:\nstatic void wxImage::InsertHandler(wxImageHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageHandler* handler=dynamic_cast< wxImageHandler* >(Luna< wxObject >::check(L,1));

		wxImage::InsertHandler(handler);

		return 0;
	}

	// static bool wxImage::RemoveHandler(const wxString & name)
	static int _bind_RemoveHandler(lua_State *L) {
		if (!_lg_typecheck_RemoveHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxImage::RemoveHandler(const wxString & name) function, expected prototype:\nstatic bool wxImage::RemoveHandler(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxImage::RemoveHandler(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxImage::CanRead(const wxString & filename)
	static int _bind_CanRead_overload_1(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxImage::CanRead(const wxString & filename) function, expected prototype:\nstatic bool wxImage::CanRead(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxImage::CanRead(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxImage::CanRead(wxInputStream & stream)
	static int _bind_CanRead_overload_2(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxImage::CanRead(wxInputStream & stream) function, expected prototype:\nstatic bool wxImage::CanRead(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::CanRead function");
		}
		wxInputStream & stream=*stream_ptr;

		bool lret = wxImage::CanRead(stream);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::CanRead
	static int _bind_CanRead(lua_State *L) {
		if (_lg_typecheck_CanRead_overload_1(L)) return _bind_CanRead_overload_1(L);
		if (_lg_typecheck_CanRead_overload_2(L)) return _bind_CanRead_overload_2(L);

		luaL_error(L, "error in function CanRead, cannot match any of the overloads for function CanRead:\n  CanRead(const wxString &)\n  CanRead(wxInputStream &)\n");
		return 0;
	}

	// static int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = wxBITMAP_TYPE_ANY)
	static int _bind_GetImageCount_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetImageCount_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = wxBITMAP_TYPE_ANY) function, expected prototype:\nstatic int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxBITMAP_TYPE_ANY;

		int lret = wxImage::GetImageCount(filename, type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY)
	static int _bind_GetImageCount_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetImageCount_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY) function, expected prototype:\nstatic int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::GetImageCount function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : wxBITMAP_TYPE_ANY;

		int lret = wxImage::GetImageCount(stream, type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxImage::GetImageCount
	static int _bind_GetImageCount(lua_State *L) {
		if (_lg_typecheck_GetImageCount_overload_1(L)) return _bind_GetImageCount_overload_1(L);
		if (_lg_typecheck_GetImageCount_overload_2(L)) return _bind_GetImageCount_overload_2(L);

		luaL_error(L, "error in function GetImageCount, cannot match any of the overloads for function GetImageCount:\n  GetImageCount(const wxString &, wxBitmapType)\n  GetImageCount(wxInputStream &, wxBitmapType)\n");
		return 0;
	}

	// static wxString wxImage::GetImageExtWildcard()
	static int _bind_GetImageExtWildcard(lua_State *L) {
		if (!_lg_typecheck_GetImageExtWildcard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxImage::GetImageExtWildcard() function, expected prototype:\nstatic wxString wxImage::GetImageExtWildcard()\nClass arguments details:\n");
		}


		wxString lret = wxImage::GetImageExtWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb)
	static int _bind_RGBtoHSV(lua_State *L) {
		if (!_lg_typecheck_RGBtoHSV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb) function, expected prototype:\nstatic wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb)\nClass arguments details:\narg 1 ID = 45106465\n");
		}

		const wxImage::RGBValue* rgb_ptr=(Luna< wxImage::RGBValue >::check(L,1));
		if( !rgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rgb in wxImage::RGBtoHSV function");
		}
		const wxImage::RGBValue & rgb=*rgb_ptr;

		wxImage::HSVValue stack_lret = wxImage::RGBtoHSV(rgb);
		wxImage::HSVValue* lret = new wxImage::HSVValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage::HSVValue >::push(L,lret,true);

		return 1;
	}

	// static wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv)
	static int _bind_HSVtoRGB(lua_State *L) {
		if (!_lg_typecheck_HSVtoRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv) function, expected prototype:\nstatic wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv)\nClass arguments details:\narg 1 ID = 41631892\n");
		}

		const wxImage::HSVValue* hsv_ptr=(Luna< wxImage::HSVValue >::check(L,1));
		if( !hsv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hsv in wxImage::HSVtoRGB function");
		}
		const wxImage::HSVValue & hsv=*hsv_ptr;

		wxImage::RGBValue stack_lret = wxImage::HSVtoRGB(hsv);
		wxImage::RGBValue* lret = new wxImage::RGBValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage::RGBValue >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxImage* LunaTraits< wxImage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImage::_bind_ctor(L);
}

void LunaTraits< wxImage >::_bind_dtor(wxImage* obj) {
	delete obj;
}

const char LunaTraits< wxImage >::className[] = "wxImage";
const char LunaTraits< wxImage >::fullName[] = "wxImage";
const char LunaTraits< wxImage >::moduleName[] = "wx";
const char* LunaTraits< wxImage >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxImage >::hash = 19191331;
const int LunaTraits< wxImage >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxImage >::methods[] = {
	{"Copy", &luna_wrapper_wxImage::_bind_Copy},
	{"Create", &luna_wrapper_wxImage::_bind_Create},
	{"Destroy", &luna_wrapper_wxImage::_bind_Destroy},
	{"InitAlpha", &luna_wrapper_wxImage::_bind_InitAlpha},
	{"Blur", &luna_wrapper_wxImage::_bind_Blur},
	{"BlurHorizontal", &luna_wrapper_wxImage::_bind_BlurHorizontal},
	{"BlurVertical", &luna_wrapper_wxImage::_bind_BlurVertical},
	{"Mirror", &luna_wrapper_wxImage::_bind_Mirror},
	{"Paste", &luna_wrapper_wxImage::_bind_Paste},
	{"Rescale", &luna_wrapper_wxImage::_bind_Rescale},
	{"Resize", &luna_wrapper_wxImage::_bind_Resize},
	{"Rotate", &luna_wrapper_wxImage::_bind_Rotate},
	{"Rotate90", &luna_wrapper_wxImage::_bind_Rotate90},
	{"Rotate180", &luna_wrapper_wxImage::_bind_Rotate180},
	{"RotateHue", &luna_wrapper_wxImage::_bind_RotateHue},
	{"Scale", &luna_wrapper_wxImage::_bind_Scale},
	{"Size", &luna_wrapper_wxImage::_bind_Size},
	{"ConvertToGreyscale", &luna_wrapper_wxImage::_bind_ConvertToGreyscale},
	{"ComputeHistogram", &luna_wrapper_wxImage::_bind_ComputeHistogram},
	{"GetWidth", &luna_wrapper_wxImage::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_wxImage::_bind_GetHeight},
	{"GetSize", &luna_wrapper_wxImage::_bind_GetSize},
	{"GetOption", &luna_wrapper_wxImage::_bind_GetOption},
	{"GetOptionInt", &luna_wrapper_wxImage::_bind_GetOptionInt},
	{"GetPalette", &luna_wrapper_wxImage::_bind_GetPalette},
	{"GetSubImage", &luna_wrapper_wxImage::_bind_GetSubImage},
	{"GetType", &luna_wrapper_wxImage::_bind_GetType},
	{"HasAlpha", &luna_wrapper_wxImage::_bind_HasAlpha},
	{"HasMask", &luna_wrapper_wxImage::_bind_HasMask},
	{"HasOption", &luna_wrapper_wxImage::_bind_HasOption},
	{"IsOk", &luna_wrapper_wxImage::_bind_IsOk},
	{"LoadFile", &luna_wrapper_wxImage::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_wxImage::_bind_SaveFile},
	{"ClearAlpha", &luna_wrapper_wxImage::_bind_ClearAlpha},
	{"SetMask", &luna_wrapper_wxImage::_bind_SetMask},
	{"SetOption", &luna_wrapper_wxImage::_bind_SetOption},
	{"SetPalette", &luna_wrapper_wxImage::_bind_SetPalette},
	{"SetType", &luna_wrapper_wxImage::_bind_SetType},
	{"AddHandler", &luna_wrapper_wxImage::_bind_AddHandler},
	{"CleanUpHandlers", &luna_wrapper_wxImage::_bind_CleanUpHandlers},
	{"InitStandardHandlers", &luna_wrapper_wxImage::_bind_InitStandardHandlers},
	{"InsertHandler", &luna_wrapper_wxImage::_bind_InsertHandler},
	{"RemoveHandler", &luna_wrapper_wxImage::_bind_RemoveHandler},
	{"CanRead", &luna_wrapper_wxImage::_bind_CanRead},
	{"GetImageCount", &luna_wrapper_wxImage::_bind_GetImageCount},
	{"GetImageExtWildcard", &luna_wrapper_wxImage::_bind_GetImageExtWildcard},
	{"RGBtoHSV", &luna_wrapper_wxImage::_bind_RGBtoHSV},
	{"HSVtoRGB", &luna_wrapper_wxImage::_bind_HSVtoRGB},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage >::converters[] = {
	{"wxObject", &luna_wrapper_wxImage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage >::enumValues[] = {
	{0,0}
};

