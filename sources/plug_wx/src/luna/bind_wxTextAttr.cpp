#include <plug_common.h>

class luna_wrapper_wxTextAttr {
public:
	typedef Luna< wxTextAttr > luna_t;

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

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttr");
		
		return luna_dynamicCast(L,converters,"wxTextAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,37117058)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Merge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Merge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftSubIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetListStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextEffectFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontItalic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasLeftIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasListStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPageBreak(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasRightIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTabs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCharacterStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsParagraphStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFamily(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontWeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLeftIndent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetListStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageBreak(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRightIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextEffectFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextEffects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextAttr::wxTextAttr()
	static wxTextAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr() function, expected prototype:\nwxTextAttr::wxTextAttr()\nClass arguments details:\n");
		}


		return new wxTextAttr();
	}

	// wxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = wxTEXT_ALIGNMENT_DEFAULT)
	static wxTextAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = wxTEXT_ALIGNMENT_DEFAULT) function, expected prototype:\nwxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = wxTEXT_ALIGNMENT_DEFAULT)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* colText_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxTextAttr::wxTextAttr function");
		}
		const wxColour & colText=*colText_ptr;
		const wxColour* colBack_ptr=luatop>1 ? dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2)) : NULL;
		if( luatop>1 && !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxTextAttr::wxTextAttr function");
		}
		const wxColour & colBack=luatop>1 ? *colBack_ptr : wxNullColour;
		const wxFont* font_ptr=luatop>2 ? dynamic_cast< wxFont* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::wxTextAttr function");
		}
		const wxFont & font=luatop>2 ? *font_ptr : wxNullFont;
		wxTextAttrAlignment alignment=luatop>3 ? (wxTextAttrAlignment)lua_tointeger(L,4) : wxTEXT_ALIGNMENT_DEFAULT;

		return new wxTextAttr(colText, colBack, font, alignment);
	}

	// wxTextAttr::wxTextAttr(const wxTextAttr & attr)
	static wxTextAttr* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr(const wxTextAttr & attr) function, expected prototype:\nwxTextAttr::wxTextAttr(const wxTextAttr & attr)\nClass arguments details:\narg 1 ID = 37117058\n");
		}

		const wxTextAttr* attr_ptr=(Luna< wxTextAttr >::check(L,1));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttr::wxTextAttr function");
		}
		const wxTextAttr & attr=*attr_ptr;

		return new wxTextAttr(attr);
	}

	// Overload binder for wxTextAttr::wxTextAttr
	static wxTextAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxTextAttr, cannot match any of the overloads for function wxTextAttr:\n  wxTextAttr()\n  wxTextAttr(const wxColour &, const wxColour &, const wxFont &, wxTextAttrAlignment)\n  wxTextAttr(const wxTextAttr &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL) function, expected prototype:\nbool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL)\nClass arguments details:\narg 1 ID = 37117058\narg 2 ID = 37117058\n");
		}

		int luatop = lua_gettop(L);

		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextAttr::Apply function");
		}
		const wxTextAttr & style=*style_ptr;
		const wxTextAttr* compareWith=luatop>2 ? (Luna< wxTextAttr >::check(L,3)) : (const wxTextAttr*)NULL;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::Apply(const wxTextAttr &, const wxTextAttr *)");
		}
		bool lret = self->Apply(style, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttr::Merge(const wxTextAttr & overlay)
	static int _bind_Merge_overload_1(lua_State *L) {
		if (!_lg_typecheck_Merge_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::Merge(const wxTextAttr & overlay) function, expected prototype:\nvoid wxTextAttr::Merge(const wxTextAttr & overlay)\nClass arguments details:\narg 1 ID = 37117058\n");
		}

		const wxTextAttr* overlay_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !overlay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg overlay in wxTextAttr::Merge function");
		}
		const wxTextAttr & overlay=*overlay_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::Merge(const wxTextAttr &)");
		}
		self->Merge(overlay);

		return 0;
	}

	// static wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay)
	static int _bind_Merge_overload_2(lua_State *L) {
		if (!_lg_typecheck_Merge_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay) function, expected prototype:\nstatic wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay)\nClass arguments details:\narg 1 ID = 37117058\narg 2 ID = 37117058\n");
		}

		const wxTextAttr* base_ptr=(Luna< wxTextAttr >::check(L,1));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in wxTextAttr::Merge function");
		}
		const wxTextAttr & base=*base_ptr;
		const wxTextAttr* overlay_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !overlay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg overlay in wxTextAttr::Merge function");
		}
		const wxTextAttr & overlay=*overlay_ptr;

		wxTextAttr stack_lret = wxTextAttr::Merge(base, overlay);
		wxTextAttr* lret = new wxTextAttr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTextAttr::Merge
	static int _bind_Merge(lua_State *L) {
		if (_lg_typecheck_Merge_overload_1(L)) return _bind_Merge_overload_1(L);
		if (_lg_typecheck_Merge_overload_2(L)) return _bind_Merge_overload_2(L);

		luaL_error(L, "error in function Merge, cannot match any of the overloads for function Merge:\n  Merge(const wxTextAttr &)\n  Merge(const wxTextAttr &, const wxTextAttr &)\n");
		return 0;
	}

	// wxTextAttrAlignment wxTextAttr::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrAlignment wxTextAttr::GetAlignment() const function, expected prototype:\nwxTextAttrAlignment wxTextAttr::GetAlignment() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrAlignment wxTextAttr::GetAlignment() const");
		}
		wxTextAttrAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxColour & wxTextAttr::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxTextAttr::GetBackgroundColour() const function, expected prototype:\nconst wxColour & wxTextAttr::GetBackgroundColour() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxTextAttr::GetBackgroundColour() const");
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletFont() const
	static int _bind_GetBulletFont(lua_State *L) {
		if (!_lg_typecheck_GetBulletFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletFont() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletFont() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletFont() const");
		}
		const wxString & lret = self->GetBulletFont();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletName() const
	static int _bind_GetBulletName(lua_State *L) {
		if (!_lg_typecheck_GetBulletName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletName() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletName() const");
		}
		const wxString & lret = self->GetBulletName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextAttr::GetBulletNumber() const
	static int _bind_GetBulletNumber(lua_State *L) {
		if (!_lg_typecheck_GetBulletNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetBulletNumber() const function, expected prototype:\nint wxTextAttr::GetBulletNumber() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetBulletNumber() const");
		}
		int lret = self->GetBulletNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetBulletStyle() const
	static int _bind_GetBulletStyle(lua_State *L) {
		if (!_lg_typecheck_GetBulletStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetBulletStyle() const function, expected prototype:\nint wxTextAttr::GetBulletStyle() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetBulletStyle() const");
		}
		int lret = self->GetBulletStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletText() const
	static int _bind_GetBulletText(lua_State *L) {
		if (!_lg_typecheck_GetBulletText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletText() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletText() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletText() const");
		}
		const wxString & lret = self->GetBulletText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxTextAttr::GetCharacterStyleName() const
	static int _bind_GetCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_GetCharacterStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetCharacterStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetCharacterStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetCharacterStyleName() const");
		}
		const wxString & lret = self->GetCharacterStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxTextAttr::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetFlags() const function, expected prototype:\nlong wxTextAttr::GetFlags() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetFlags() const");
		}
		long lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxTextAttr::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFont wxTextAttr::GetFont() const function, expected prototype:\nwxFont wxTextAttr::GetFont() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFont wxTextAttr::GetFont() const");
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = wxTEXT_ATTR_FONT)
	static int _bind_GetFontAttributes(lua_State *L) {
		if (!_lg_typecheck_GetFontAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = wxTEXT_ATTR_FONT) function, expected prototype:\nbool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = wxTEXT_ATTR_FONT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::GetFontAttributes function");
		}
		const wxFont & font=*font_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_ATTR_FONT;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::GetFontAttributes(const wxFont &, int)");
		}
		bool lret = self->GetFontAttributes(font, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontEncoding wxTextAttr::GetFontEncoding() const
	static int _bind_GetFontEncoding(lua_State *L) {
		if (!_lg_typecheck_GetFontEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxTextAttr::GetFontEncoding() const function, expected prototype:\nwxFontEncoding wxTextAttr::GetFontEncoding() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontEncoding wxTextAttr::GetFontEncoding() const");
		}
		wxFontEncoding lret = self->GetFontEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetFontFaceName() const
	static int _bind_GetFontFaceName(lua_State *L) {
		if (!_lg_typecheck_GetFontFaceName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetFontFaceName() const function, expected prototype:\nconst wxString & wxTextAttr::GetFontFaceName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetFontFaceName() const");
		}
		const wxString & lret = self->GetFontFaceName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFontFamily wxTextAttr::GetFontFamily() const
	static int _bind_GetFontFamily(lua_State *L) {
		if (!_lg_typecheck_GetFontFamily(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontFamily wxTextAttr::GetFontFamily() const function, expected prototype:\nwxFontFamily wxTextAttr::GetFontFamily() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontFamily wxTextAttr::GetFontFamily() const");
		}
		wxFontFamily lret = self->GetFontFamily();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetFontSize() const
	static int _bind_GetFontSize(lua_State *L) {
		if (!_lg_typecheck_GetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetFontSize() const function, expected prototype:\nint wxTextAttr::GetFontSize() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetFontSize() const");
		}
		int lret = self->GetFontSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFontStyle wxTextAttr::GetFontStyle() const
	static int _bind_GetFontStyle(lua_State *L) {
		if (!_lg_typecheck_GetFontStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontStyle wxTextAttr::GetFontStyle() const function, expected prototype:\nwxFontStyle wxTextAttr::GetFontStyle() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontStyle wxTextAttr::GetFontStyle() const");
		}
		wxFontStyle lret = self->GetFontStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextAttr::GetFontUnderlined() const
	static int _bind_GetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_GetFontUnderlined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::GetFontUnderlined() const function, expected prototype:\nbool wxTextAttr::GetFontUnderlined() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::GetFontUnderlined() const");
		}
		bool lret = self->GetFontUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontWeight wxTextAttr::GetFontWeight() const
	static int _bind_GetFontWeight(lua_State *L) {
		if (!_lg_typecheck_GetFontWeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontWeight wxTextAttr::GetFontWeight() const function, expected prototype:\nwxFontWeight wxTextAttr::GetFontWeight() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontWeight wxTextAttr::GetFontWeight() const");
		}
		wxFontWeight lret = self->GetFontWeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextAttr::GetLeftIndent() const
	static int _bind_GetLeftIndent(lua_State *L) {
		if (!_lg_typecheck_GetLeftIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetLeftIndent() const function, expected prototype:\nlong wxTextAttr::GetLeftIndent() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetLeftIndent() const");
		}
		long lret = self->GetLeftIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextAttr::GetLeftSubIndent() const
	static int _bind_GetLeftSubIndent(lua_State *L) {
		if (!_lg_typecheck_GetLeftSubIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetLeftSubIndent() const function, expected prototype:\nlong wxTextAttr::GetLeftSubIndent() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetLeftSubIndent() const");
		}
		long lret = self->GetLeftSubIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetLineSpacing() const
	static int _bind_GetLineSpacing(lua_State *L) {
		if (!_lg_typecheck_GetLineSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetLineSpacing() const function, expected prototype:\nint wxTextAttr::GetLineSpacing() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetLineSpacing() const");
		}
		int lret = self->GetLineSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetListStyleName() const
	static int _bind_GetListStyleName(lua_State *L) {
		if (!_lg_typecheck_GetListStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetListStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetListStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetListStyleName() const");
		}
		const wxString & lret = self->GetListStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextAttr::GetOutlineLevel() const
	static int _bind_GetOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_GetOutlineLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetOutlineLevel() const function, expected prototype:\nint wxTextAttr::GetOutlineLevel() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetOutlineLevel() const");
		}
		int lret = self->GetOutlineLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetParagraphSpacingAfter() const
	static int _bind_GetParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_GetParagraphSpacingAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetParagraphSpacingAfter() const function, expected prototype:\nint wxTextAttr::GetParagraphSpacingAfter() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetParagraphSpacingAfter() const");
		}
		int lret = self->GetParagraphSpacingAfter();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetParagraphSpacingBefore() const
	static int _bind_GetParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_GetParagraphSpacingBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetParagraphSpacingBefore() const function, expected prototype:\nint wxTextAttr::GetParagraphSpacingBefore() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetParagraphSpacingBefore() const");
		}
		int lret = self->GetParagraphSpacingBefore();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetParagraphStyleName() const
	static int _bind_GetParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_GetParagraphStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetParagraphStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetParagraphStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetParagraphStyleName() const");
		}
		const wxString & lret = self->GetParagraphStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxTextAttr::GetRightIndent() const
	static int _bind_GetRightIndent(lua_State *L) {
		if (!_lg_typecheck_GetRightIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetRightIndent() const function, expected prototype:\nlong wxTextAttr::GetRightIndent() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetRightIndent() const");
		}
		long lret = self->GetRightIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxArrayInt & wxTextAttr::GetTabs() const
	static int _bind_GetTabs(lua_State *L) {
		if (!_lg_typecheck_GetTabs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxArrayInt & wxTextAttr::GetTabs() const function, expected prototype:\nconst wxArrayInt & wxTextAttr::GetTabs() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxArrayInt & wxTextAttr::GetTabs() const");
		}
		const wxArrayInt* lret = &self->GetTabs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxTextAttr::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxColour & wxTextAttr::GetTextColour() const function, expected prototype:\nconst wxColour & wxTextAttr::GetTextColour() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxColour & wxTextAttr::GetTextColour() const");
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// int wxTextAttr::GetTextEffectFlags() const
	static int _bind_GetTextEffectFlags(lua_State *L) {
		if (!_lg_typecheck_GetTextEffectFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetTextEffectFlags() const function, expected prototype:\nint wxTextAttr::GetTextEffectFlags() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetTextEffectFlags() const");
		}
		int lret = self->GetTextEffectFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetTextEffects() const
	static int _bind_GetTextEffects(lua_State *L) {
		if (!_lg_typecheck_GetTextEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetTextEffects() const function, expected prototype:\nint wxTextAttr::GetTextEffects() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetTextEffects() const");
		}
		int lret = self->GetTextEffects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetURL() const function, expected prototype:\nconst wxString & wxTextAttr::GetURL() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetURL() const");
		}
		const wxString & lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextAttr::HasAlignment() const
	static int _bind_HasAlignment(lua_State *L) {
		if (!_lg_typecheck_HasAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasAlignment() const function, expected prototype:\nbool wxTextAttr::HasAlignment() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasAlignment() const");
		}
		bool lret = self->HasAlignment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBackgroundColour() const
	static int _bind_HasBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_HasBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBackgroundColour() const function, expected prototype:\nbool wxTextAttr::HasBackgroundColour() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBackgroundColour() const");
		}
		bool lret = self->HasBackgroundColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletName() const
	static int _bind_HasBulletName(lua_State *L) {
		if (!_lg_typecheck_HasBulletName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletName() const function, expected prototype:\nbool wxTextAttr::HasBulletName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletName() const");
		}
		bool lret = self->HasBulletName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletNumber() const
	static int _bind_HasBulletNumber(lua_State *L) {
		if (!_lg_typecheck_HasBulletNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletNumber() const function, expected prototype:\nbool wxTextAttr::HasBulletNumber() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletNumber() const");
		}
		bool lret = self->HasBulletNumber();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletStyle() const
	static int _bind_HasBulletStyle(lua_State *L) {
		if (!_lg_typecheck_HasBulletStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletStyle() const function, expected prototype:\nbool wxTextAttr::HasBulletStyle() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletStyle() const");
		}
		bool lret = self->HasBulletStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletText() const
	static int _bind_HasBulletText(lua_State *L) {
		if (!_lg_typecheck_HasBulletText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletText() const function, expected prototype:\nbool wxTextAttr::HasBulletText() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletText() const");
		}
		bool lret = self->HasBulletText();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasCharacterStyleName() const
	static int _bind_HasCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_HasCharacterStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasCharacterStyleName() const function, expected prototype:\nbool wxTextAttr::HasCharacterStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasCharacterStyleName() const");
		}
		bool lret = self->HasCharacterStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFlag(long flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFlag(long flag) const function, expected prototype:\nbool wxTextAttr::HasFlag(long flag) const\nClass arguments details:\n");
		}

		long flag=(long)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFlag(long) const");
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFont() const
	static int _bind_HasFont(lua_State *L) {
		if (!_lg_typecheck_HasFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFont() const function, expected prototype:\nbool wxTextAttr::HasFont() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFont() const");
		}
		bool lret = self->HasFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontEncoding() const
	static int _bind_HasFontEncoding(lua_State *L) {
		if (!_lg_typecheck_HasFontEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontEncoding() const function, expected prototype:\nbool wxTextAttr::HasFontEncoding() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontEncoding() const");
		}
		bool lret = self->HasFontEncoding();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontFaceName() const
	static int _bind_HasFontFaceName(lua_State *L) {
		if (!_lg_typecheck_HasFontFaceName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontFaceName() const function, expected prototype:\nbool wxTextAttr::HasFontFaceName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontFaceName() const");
		}
		bool lret = self->HasFontFaceName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontFamily() const
	static int _bind_HasFontFamily(lua_State *L) {
		if (!_lg_typecheck_HasFontFamily(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontFamily() const function, expected prototype:\nbool wxTextAttr::HasFontFamily() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontFamily() const");
		}
		bool lret = self->HasFontFamily();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontItalic() const
	static int _bind_HasFontItalic(lua_State *L) {
		if (!_lg_typecheck_HasFontItalic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontItalic() const function, expected prototype:\nbool wxTextAttr::HasFontItalic() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontItalic() const");
		}
		bool lret = self->HasFontItalic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontSize() const
	static int _bind_HasFontSize(lua_State *L) {
		if (!_lg_typecheck_HasFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontSize() const function, expected prototype:\nbool wxTextAttr::HasFontSize() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontSize() const");
		}
		bool lret = self->HasFontSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontUnderlined() const
	static int _bind_HasFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_HasFontUnderlined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontUnderlined() const function, expected prototype:\nbool wxTextAttr::HasFontUnderlined() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontUnderlined() const");
		}
		bool lret = self->HasFontUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontWeight() const
	static int _bind_HasFontWeight(lua_State *L) {
		if (!_lg_typecheck_HasFontWeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontWeight() const function, expected prototype:\nbool wxTextAttr::HasFontWeight() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontWeight() const");
		}
		bool lret = self->HasFontWeight();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasLeftIndent() const
	static int _bind_HasLeftIndent(lua_State *L) {
		if (!_lg_typecheck_HasLeftIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasLeftIndent() const function, expected prototype:\nbool wxTextAttr::HasLeftIndent() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasLeftIndent() const");
		}
		bool lret = self->HasLeftIndent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasLineSpacing() const
	static int _bind_HasLineSpacing(lua_State *L) {
		if (!_lg_typecheck_HasLineSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasLineSpacing() const function, expected prototype:\nbool wxTextAttr::HasLineSpacing() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasLineSpacing() const");
		}
		bool lret = self->HasLineSpacing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasListStyleName() const
	static int _bind_HasListStyleName(lua_State *L) {
		if (!_lg_typecheck_HasListStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasListStyleName() const function, expected prototype:\nbool wxTextAttr::HasListStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasListStyleName() const");
		}
		bool lret = self->HasListStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasOutlineLevel() const
	static int _bind_HasOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_HasOutlineLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasOutlineLevel() const function, expected prototype:\nbool wxTextAttr::HasOutlineLevel() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasOutlineLevel() const");
		}
		bool lret = self->HasOutlineLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasPageBreak() const
	static int _bind_HasPageBreak(lua_State *L) {
		if (!_lg_typecheck_HasPageBreak(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasPageBreak() const function, expected prototype:\nbool wxTextAttr::HasPageBreak() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasPageBreak() const");
		}
		bool lret = self->HasPageBreak();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphSpacingAfter() const
	static int _bind_HasParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_HasParagraphSpacingAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphSpacingAfter() const function, expected prototype:\nbool wxTextAttr::HasParagraphSpacingAfter() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphSpacingAfter() const");
		}
		bool lret = self->HasParagraphSpacingAfter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphSpacingBefore() const
	static int _bind_HasParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_HasParagraphSpacingBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphSpacingBefore() const function, expected prototype:\nbool wxTextAttr::HasParagraphSpacingBefore() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphSpacingBefore() const");
		}
		bool lret = self->HasParagraphSpacingBefore();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphStyleName() const
	static int _bind_HasParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_HasParagraphStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphStyleName() const function, expected prototype:\nbool wxTextAttr::HasParagraphStyleName() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphStyleName() const");
		}
		bool lret = self->HasParagraphStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasRightIndent() const
	static int _bind_HasRightIndent(lua_State *L) {
		if (!_lg_typecheck_HasRightIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasRightIndent() const function, expected prototype:\nbool wxTextAttr::HasRightIndent() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasRightIndent() const");
		}
		bool lret = self->HasRightIndent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTabs() const
	static int _bind_HasTabs(lua_State *L) {
		if (!_lg_typecheck_HasTabs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTabs() const function, expected prototype:\nbool wxTextAttr::HasTabs() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTabs() const");
		}
		bool lret = self->HasTabs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTextColour() const
	static int _bind_HasTextColour(lua_State *L) {
		if (!_lg_typecheck_HasTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTextColour() const function, expected prototype:\nbool wxTextAttr::HasTextColour() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTextColour() const");
		}
		bool lret = self->HasTextColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTextEffects() const
	static int _bind_HasTextEffects(lua_State *L) {
		if (!_lg_typecheck_HasTextEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTextEffects() const function, expected prototype:\nbool wxTextAttr::HasTextEffects() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTextEffects() const");
		}
		bool lret = self->HasTextEffects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasURL() const
	static int _bind_HasURL(lua_State *L) {
		if (!_lg_typecheck_HasURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasURL() const function, expected prototype:\nbool wxTextAttr::HasURL() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasURL() const");
		}
		bool lret = self->HasURL();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsCharacterStyle() const
	static int _bind_IsCharacterStyle(lua_State *L) {
		if (!_lg_typecheck_IsCharacterStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsCharacterStyle() const function, expected prototype:\nbool wxTextAttr::IsCharacterStyle() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsCharacterStyle() const");
		}
		bool lret = self->IsCharacterStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsDefault() const
	static int _bind_IsDefault(lua_State *L) {
		if (!_lg_typecheck_IsDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsDefault() const function, expected prototype:\nbool wxTextAttr::IsDefault() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsDefault() const");
		}
		bool lret = self->IsDefault();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsParagraphStyle() const
	static int _bind_IsParagraphStyle(lua_State *L) {
		if (!_lg_typecheck_IsParagraphStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsParagraphStyle() const function, expected prototype:\nbool wxTextAttr::IsParagraphStyle() const\nClass arguments details:\n");
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsParagraphStyle() const");
		}
		bool lret = self->IsParagraphStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttr::SetAlignment(wxTextAttrAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetAlignment(wxTextAttrAlignment alignment) function, expected prototype:\nvoid wxTextAttr::SetAlignment(wxTextAttrAlignment alignment)\nClass arguments details:\n");
		}

		wxTextAttrAlignment alignment=(wxTextAttrAlignment)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetAlignment(wxTextAttrAlignment)");
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxTextAttr::SetBackgroundColour(const wxColour & colBack)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBackgroundColour(const wxColour & colBack) function, expected prototype:\nvoid wxTextAttr::SetBackgroundColour(const wxColour & colBack)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colBack_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxTextAttr::SetBackgroundColour function");
		}
		const wxColour & colBack=*colBack_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBackgroundColour(const wxColour &)");
		}
		self->SetBackgroundColour(colBack);

		return 0;
	}

	// void wxTextAttr::SetBulletFont(const wxString & font)
	static int _bind_SetBulletFont(lua_State *L) {
		if (!_lg_typecheck_SetBulletFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletFont(const wxString & font) function, expected prototype:\nvoid wxTextAttr::SetBulletFont(const wxString & font)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletFont(const wxString &)");
		}
		self->SetBulletFont(font);

		return 0;
	}

	// void wxTextAttr::SetBulletName(const wxString & name)
	static int _bind_SetBulletName(lua_State *L) {
		if (!_lg_typecheck_SetBulletName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetBulletName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletName(const wxString &)");
		}
		self->SetBulletName(name);

		return 0;
	}

	// void wxTextAttr::SetBulletNumber(int n)
	static int _bind_SetBulletNumber(lua_State *L) {
		if (!_lg_typecheck_SetBulletNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletNumber(int n) function, expected prototype:\nvoid wxTextAttr::SetBulletNumber(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletNumber(int)");
		}
		self->SetBulletNumber(n);

		return 0;
	}

	// void wxTextAttr::SetBulletStyle(int style)
	static int _bind_SetBulletStyle(lua_State *L) {
		if (!_lg_typecheck_SetBulletStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletStyle(int style) function, expected prototype:\nvoid wxTextAttr::SetBulletStyle(int style)\nClass arguments details:\n");
		}

		int style=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletStyle(int)");
		}
		self->SetBulletStyle(style);

		return 0;
	}

	// void wxTextAttr::SetBulletText(const wxString & text)
	static int _bind_SetBulletText(lua_State *L) {
		if (!_lg_typecheck_SetBulletText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletText(const wxString & text) function, expected prototype:\nvoid wxTextAttr::SetBulletText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletText(const wxString &)");
		}
		self->SetBulletText(text);

		return 0;
	}

	// void wxTextAttr::SetCharacterStyleName(const wxString & name)
	static int _bind_SetCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_SetCharacterStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetCharacterStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetCharacterStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetCharacterStyleName(const wxString &)");
		}
		self->SetCharacterStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFlags(long flags) function, expected prototype:\nvoid wxTextAttr::SetFlags(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFlags(long)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxTextAttr::SetFont(const wxFont & font, int flags = wxTEXT_ATTR_FONT)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFont(const wxFont & font, int flags = wxTEXT_ATTR_FONT) function, expected prototype:\nvoid wxTextAttr::SetFont(const wxFont & font, int flags = wxTEXT_ATTR_FONT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxFont* font_ptr=dynamic_cast< wxFont* >(Luna< wxObject >::check(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::SetFont function");
		}
		const wxFont & font=*font_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxTEXT_ATTR_FONT;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFont(const wxFont &, int)");
		}
		self->SetFont(font, flags);

		return 0;
	}

	// void wxTextAttr::SetFontEncoding(wxFontEncoding encoding)
	static int _bind_SetFontEncoding(lua_State *L) {
		if (!_lg_typecheck_SetFontEncoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontEncoding(wxFontEncoding encoding) function, expected prototype:\nvoid wxTextAttr::SetFontEncoding(wxFontEncoding encoding)\nClass arguments details:\n");
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontEncoding(wxFontEncoding)");
		}
		self->SetFontEncoding(encoding);

		return 0;
	}

	// void wxTextAttr::SetFontFaceName(const wxString & faceName)
	static int _bind_SetFontFaceName(lua_State *L) {
		if (!_lg_typecheck_SetFontFaceName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontFaceName(const wxString & faceName) function, expected prototype:\nvoid wxTextAttr::SetFontFaceName(const wxString & faceName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString faceName(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontFaceName(const wxString &)");
		}
		self->SetFontFaceName(faceName);

		return 0;
	}

	// void wxTextAttr::SetFontFamily(wxFontFamily family)
	static int _bind_SetFontFamily(lua_State *L) {
		if (!_lg_typecheck_SetFontFamily(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontFamily(wxFontFamily family) function, expected prototype:\nvoid wxTextAttr::SetFontFamily(wxFontFamily family)\nClass arguments details:\n");
		}

		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontFamily(wxFontFamily)");
		}
		self->SetFontFamily(family);

		return 0;
	}

	// void wxTextAttr::SetFontSize(int pointSize)
	static int _bind_SetFontSize(lua_State *L) {
		if (!_lg_typecheck_SetFontSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontSize(int pointSize) function, expected prototype:\nvoid wxTextAttr::SetFontSize(int pointSize)\nClass arguments details:\n");
		}

		int pointSize=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontSize(int)");
		}
		self->SetFontSize(pointSize);

		return 0;
	}

	// void wxTextAttr::SetFontStyle(wxFontStyle fontStyle)
	static int _bind_SetFontStyle(lua_State *L) {
		if (!_lg_typecheck_SetFontStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontStyle(wxFontStyle fontStyle) function, expected prototype:\nvoid wxTextAttr::SetFontStyle(wxFontStyle fontStyle)\nClass arguments details:\n");
		}

		wxFontStyle fontStyle=(wxFontStyle)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontStyle(wxFontStyle)");
		}
		self->SetFontStyle(fontStyle);

		return 0;
	}

	// void wxTextAttr::SetFontUnderlined(bool underlined)
	static int _bind_SetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_SetFontUnderlined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontUnderlined(bool underlined) function, expected prototype:\nvoid wxTextAttr::SetFontUnderlined(bool underlined)\nClass arguments details:\n");
		}

		bool underlined=(bool)(lua_toboolean(L,2)==1);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontUnderlined(bool)");
		}
		self->SetFontUnderlined(underlined);

		return 0;
	}

	// void wxTextAttr::SetFontWeight(wxFontWeight fontWeight)
	static int _bind_SetFontWeight(lua_State *L) {
		if (!_lg_typecheck_SetFontWeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontWeight(wxFontWeight fontWeight) function, expected prototype:\nvoid wxTextAttr::SetFontWeight(wxFontWeight fontWeight)\nClass arguments details:\n");
		}

		wxFontWeight fontWeight=(wxFontWeight)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontWeight(wxFontWeight)");
		}
		self->SetFontWeight(fontWeight);

		return 0;
	}

	// void wxTextAttr::SetLeftIndent(int indent, int subIndent = 0)
	static int _bind_SetLeftIndent(lua_State *L) {
		if (!_lg_typecheck_SetLeftIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetLeftIndent(int indent, int subIndent = 0) function, expected prototype:\nvoid wxTextAttr::SetLeftIndent(int indent, int subIndent = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int indent=(int)lua_tointeger(L,2);
		int subIndent=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetLeftIndent(int, int)");
		}
		self->SetLeftIndent(indent, subIndent);

		return 0;
	}

	// void wxTextAttr::SetLineSpacing(int spacing)
	static int _bind_SetLineSpacing(lua_State *L) {
		if (!_lg_typecheck_SetLineSpacing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetLineSpacing(int spacing) function, expected prototype:\nvoid wxTextAttr::SetLineSpacing(int spacing)\nClass arguments details:\n");
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetLineSpacing(int)");
		}
		self->SetLineSpacing(spacing);

		return 0;
	}

	// void wxTextAttr::SetListStyleName(const wxString & name)
	static int _bind_SetListStyleName(lua_State *L) {
		if (!_lg_typecheck_SetListStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetListStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetListStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetListStyleName(const wxString &)");
		}
		self->SetListStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetOutlineLevel(int level)
	static int _bind_SetOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_SetOutlineLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetOutlineLevel(int level) function, expected prototype:\nvoid wxTextAttr::SetOutlineLevel(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetOutlineLevel(int)");
		}
		self->SetOutlineLevel(level);

		return 0;
	}

	// void wxTextAttr::SetPageBreak(bool pageBreak = true)
	static int _bind_SetPageBreak(lua_State *L) {
		if (!_lg_typecheck_SetPageBreak(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetPageBreak(bool pageBreak = true) function, expected prototype:\nvoid wxTextAttr::SetPageBreak(bool pageBreak = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool pageBreak=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetPageBreak(bool)");
		}
		self->SetPageBreak(pageBreak);

		return 0;
	}

	// void wxTextAttr::SetParagraphSpacingAfter(int spacing)
	static int _bind_SetParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_SetParagraphSpacingAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphSpacingAfter(int spacing) function, expected prototype:\nvoid wxTextAttr::SetParagraphSpacingAfter(int spacing)\nClass arguments details:\n");
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphSpacingAfter(int)");
		}
		self->SetParagraphSpacingAfter(spacing);

		return 0;
	}

	// void wxTextAttr::SetParagraphSpacingBefore(int spacing)
	static int _bind_SetParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_SetParagraphSpacingBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphSpacingBefore(int spacing) function, expected prototype:\nvoid wxTextAttr::SetParagraphSpacingBefore(int spacing)\nClass arguments details:\n");
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphSpacingBefore(int)");
		}
		self->SetParagraphSpacingBefore(spacing);

		return 0;
	}

	// void wxTextAttr::SetParagraphStyleName(const wxString & name)
	static int _bind_SetParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_SetParagraphStyleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetParagraphStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphStyleName(const wxString &)");
		}
		self->SetParagraphStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetRightIndent(int indent)
	static int _bind_SetRightIndent(lua_State *L) {
		if (!_lg_typecheck_SetRightIndent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetRightIndent(int indent) function, expected prototype:\nvoid wxTextAttr::SetRightIndent(int indent)\nClass arguments details:\n");
		}

		int indent=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetRightIndent(int)");
		}
		self->SetRightIndent(indent);

		return 0;
	}

	// void wxTextAttr::SetTabs(const wxArrayInt & tabs)
	static int _bind_SetTabs(lua_State *L) {
		if (!_lg_typecheck_SetTabs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTabs(const wxArrayInt & tabs) function, expected prototype:\nvoid wxTextAttr::SetTabs(const wxArrayInt & tabs)\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		const wxArrayInt* tabs_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !tabs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tabs in wxTextAttr::SetTabs function");
		}
		const wxArrayInt & tabs=*tabs_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTabs(const wxArrayInt &)");
		}
		self->SetTabs(tabs);

		return 0;
	}

	// void wxTextAttr::SetTextColour(const wxColour & colText)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextColour(const wxColour & colText) function, expected prototype:\nvoid wxTextAttr::SetTextColour(const wxColour & colText)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* colText_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxTextAttr::SetTextColour function");
		}
		const wxColour & colText=*colText_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextColour(const wxColour &)");
		}
		self->SetTextColour(colText);

		return 0;
	}

	// void wxTextAttr::SetTextEffectFlags(int flags)
	static int _bind_SetTextEffectFlags(lua_State *L) {
		if (!_lg_typecheck_SetTextEffectFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextEffectFlags(int flags) function, expected prototype:\nvoid wxTextAttr::SetTextEffectFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextEffectFlags(int)");
		}
		self->SetTextEffectFlags(flags);

		return 0;
	}

	// void wxTextAttr::SetTextEffects(int effects)
	static int _bind_SetTextEffects(lua_State *L) {
		if (!_lg_typecheck_SetTextEffects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextEffects(int effects) function, expected prototype:\nvoid wxTextAttr::SetTextEffects(int effects)\nClass arguments details:\n");
		}

		int effects=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextEffects(int)");
		}
		self->SetTextEffects(effects);

		return 0;
	}

	// void wxTextAttr::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetURL(const wxString & url) function, expected prototype:\nvoid wxTextAttr::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetURL(const wxString &)");
		}
		self->SetURL(url);

		return 0;
	}


	// Operator binds:

};

wxTextAttr* LunaTraits< wxTextAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttr::_bind_ctor(L);
}

void LunaTraits< wxTextAttr >::_bind_dtor(wxTextAttr* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttr >::className[] = "wxTextAttr";
const char LunaTraits< wxTextAttr >::fullName[] = "wxTextAttr";
const char LunaTraits< wxTextAttr >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttr >::parents[] = {0};
const int LunaTraits< wxTextAttr >::hash = 37117058;
const int LunaTraits< wxTextAttr >::uniqueIDs[] = {37117058,0};

luna_RegType LunaTraits< wxTextAttr >::methods[] = {
	{"Apply", &luna_wrapper_wxTextAttr::_bind_Apply},
	{"Merge", &luna_wrapper_wxTextAttr::_bind_Merge},
	{"GetAlignment", &luna_wrapper_wxTextAttr::_bind_GetAlignment},
	{"GetBackgroundColour", &luna_wrapper_wxTextAttr::_bind_GetBackgroundColour},
	{"GetBulletFont", &luna_wrapper_wxTextAttr::_bind_GetBulletFont},
	{"GetBulletName", &luna_wrapper_wxTextAttr::_bind_GetBulletName},
	{"GetBulletNumber", &luna_wrapper_wxTextAttr::_bind_GetBulletNumber},
	{"GetBulletStyle", &luna_wrapper_wxTextAttr::_bind_GetBulletStyle},
	{"GetBulletText", &luna_wrapper_wxTextAttr::_bind_GetBulletText},
	{"GetCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_GetCharacterStyleName},
	{"GetFlags", &luna_wrapper_wxTextAttr::_bind_GetFlags},
	{"GetFont", &luna_wrapper_wxTextAttr::_bind_GetFont},
	{"GetFontAttributes", &luna_wrapper_wxTextAttr::_bind_GetFontAttributes},
	{"GetFontEncoding", &luna_wrapper_wxTextAttr::_bind_GetFontEncoding},
	{"GetFontFaceName", &luna_wrapper_wxTextAttr::_bind_GetFontFaceName},
	{"GetFontFamily", &luna_wrapper_wxTextAttr::_bind_GetFontFamily},
	{"GetFontSize", &luna_wrapper_wxTextAttr::_bind_GetFontSize},
	{"GetFontStyle", &luna_wrapper_wxTextAttr::_bind_GetFontStyle},
	{"GetFontUnderlined", &luna_wrapper_wxTextAttr::_bind_GetFontUnderlined},
	{"GetFontWeight", &luna_wrapper_wxTextAttr::_bind_GetFontWeight},
	{"GetLeftIndent", &luna_wrapper_wxTextAttr::_bind_GetLeftIndent},
	{"GetLeftSubIndent", &luna_wrapper_wxTextAttr::_bind_GetLeftSubIndent},
	{"GetLineSpacing", &luna_wrapper_wxTextAttr::_bind_GetLineSpacing},
	{"GetListStyleName", &luna_wrapper_wxTextAttr::_bind_GetListStyleName},
	{"GetOutlineLevel", &luna_wrapper_wxTextAttr::_bind_GetOutlineLevel},
	{"GetParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_GetParagraphSpacingAfter},
	{"GetParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_GetParagraphSpacingBefore},
	{"GetParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_GetParagraphStyleName},
	{"GetRightIndent", &luna_wrapper_wxTextAttr::_bind_GetRightIndent},
	{"GetTabs", &luna_wrapper_wxTextAttr::_bind_GetTabs},
	{"GetTextColour", &luna_wrapper_wxTextAttr::_bind_GetTextColour},
	{"GetTextEffectFlags", &luna_wrapper_wxTextAttr::_bind_GetTextEffectFlags},
	{"GetTextEffects", &luna_wrapper_wxTextAttr::_bind_GetTextEffects},
	{"GetURL", &luna_wrapper_wxTextAttr::_bind_GetURL},
	{"HasAlignment", &luna_wrapper_wxTextAttr::_bind_HasAlignment},
	{"HasBackgroundColour", &luna_wrapper_wxTextAttr::_bind_HasBackgroundColour},
	{"HasBulletName", &luna_wrapper_wxTextAttr::_bind_HasBulletName},
	{"HasBulletNumber", &luna_wrapper_wxTextAttr::_bind_HasBulletNumber},
	{"HasBulletStyle", &luna_wrapper_wxTextAttr::_bind_HasBulletStyle},
	{"HasBulletText", &luna_wrapper_wxTextAttr::_bind_HasBulletText},
	{"HasCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_HasCharacterStyleName},
	{"HasFlag", &luna_wrapper_wxTextAttr::_bind_HasFlag},
	{"HasFont", &luna_wrapper_wxTextAttr::_bind_HasFont},
	{"HasFontEncoding", &luna_wrapper_wxTextAttr::_bind_HasFontEncoding},
	{"HasFontFaceName", &luna_wrapper_wxTextAttr::_bind_HasFontFaceName},
	{"HasFontFamily", &luna_wrapper_wxTextAttr::_bind_HasFontFamily},
	{"HasFontItalic", &luna_wrapper_wxTextAttr::_bind_HasFontItalic},
	{"HasFontSize", &luna_wrapper_wxTextAttr::_bind_HasFontSize},
	{"HasFontUnderlined", &luna_wrapper_wxTextAttr::_bind_HasFontUnderlined},
	{"HasFontWeight", &luna_wrapper_wxTextAttr::_bind_HasFontWeight},
	{"HasLeftIndent", &luna_wrapper_wxTextAttr::_bind_HasLeftIndent},
	{"HasLineSpacing", &luna_wrapper_wxTextAttr::_bind_HasLineSpacing},
	{"HasListStyleName", &luna_wrapper_wxTextAttr::_bind_HasListStyleName},
	{"HasOutlineLevel", &luna_wrapper_wxTextAttr::_bind_HasOutlineLevel},
	{"HasPageBreak", &luna_wrapper_wxTextAttr::_bind_HasPageBreak},
	{"HasParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_HasParagraphSpacingAfter},
	{"HasParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_HasParagraphSpacingBefore},
	{"HasParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_HasParagraphStyleName},
	{"HasRightIndent", &luna_wrapper_wxTextAttr::_bind_HasRightIndent},
	{"HasTabs", &luna_wrapper_wxTextAttr::_bind_HasTabs},
	{"HasTextColour", &luna_wrapper_wxTextAttr::_bind_HasTextColour},
	{"HasTextEffects", &luna_wrapper_wxTextAttr::_bind_HasTextEffects},
	{"HasURL", &luna_wrapper_wxTextAttr::_bind_HasURL},
	{"IsCharacterStyle", &luna_wrapper_wxTextAttr::_bind_IsCharacterStyle},
	{"IsDefault", &luna_wrapper_wxTextAttr::_bind_IsDefault},
	{"IsParagraphStyle", &luna_wrapper_wxTextAttr::_bind_IsParagraphStyle},
	{"SetAlignment", &luna_wrapper_wxTextAttr::_bind_SetAlignment},
	{"SetBackgroundColour", &luna_wrapper_wxTextAttr::_bind_SetBackgroundColour},
	{"SetBulletFont", &luna_wrapper_wxTextAttr::_bind_SetBulletFont},
	{"SetBulletName", &luna_wrapper_wxTextAttr::_bind_SetBulletName},
	{"SetBulletNumber", &luna_wrapper_wxTextAttr::_bind_SetBulletNumber},
	{"SetBulletStyle", &luna_wrapper_wxTextAttr::_bind_SetBulletStyle},
	{"SetBulletText", &luna_wrapper_wxTextAttr::_bind_SetBulletText},
	{"SetCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_SetCharacterStyleName},
	{"SetFlags", &luna_wrapper_wxTextAttr::_bind_SetFlags},
	{"SetFont", &luna_wrapper_wxTextAttr::_bind_SetFont},
	{"SetFontEncoding", &luna_wrapper_wxTextAttr::_bind_SetFontEncoding},
	{"SetFontFaceName", &luna_wrapper_wxTextAttr::_bind_SetFontFaceName},
	{"SetFontFamily", &luna_wrapper_wxTextAttr::_bind_SetFontFamily},
	{"SetFontSize", &luna_wrapper_wxTextAttr::_bind_SetFontSize},
	{"SetFontStyle", &luna_wrapper_wxTextAttr::_bind_SetFontStyle},
	{"SetFontUnderlined", &luna_wrapper_wxTextAttr::_bind_SetFontUnderlined},
	{"SetFontWeight", &luna_wrapper_wxTextAttr::_bind_SetFontWeight},
	{"SetLeftIndent", &luna_wrapper_wxTextAttr::_bind_SetLeftIndent},
	{"SetLineSpacing", &luna_wrapper_wxTextAttr::_bind_SetLineSpacing},
	{"SetListStyleName", &luna_wrapper_wxTextAttr::_bind_SetListStyleName},
	{"SetOutlineLevel", &luna_wrapper_wxTextAttr::_bind_SetOutlineLevel},
	{"SetPageBreak", &luna_wrapper_wxTextAttr::_bind_SetPageBreak},
	{"SetParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_SetParagraphSpacingAfter},
	{"SetParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_SetParagraphSpacingBefore},
	{"SetParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_SetParagraphStyleName},
	{"SetRightIndent", &luna_wrapper_wxTextAttr::_bind_SetRightIndent},
	{"SetTabs", &luna_wrapper_wxTextAttr::_bind_SetTabs},
	{"SetTextColour", &luna_wrapper_wxTextAttr::_bind_SetTextColour},
	{"SetTextEffectFlags", &luna_wrapper_wxTextAttr::_bind_SetTextEffectFlags},
	{"SetTextEffects", &luna_wrapper_wxTextAttr::_bind_SetTextEffects},
	{"SetURL", &luna_wrapper_wxTextAttr::_bind_SetURL},
	{"dynCast", &luna_wrapper_wxTextAttr::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttr >::enumValues[] = {
	{0,0}
};

