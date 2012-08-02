#include <plug_common.h>

class luna_wrapper_wxTextBoxAttr {
public:
	typedef Luna< wxTextBoxAttr > luna_t;

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

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextBoxAttr");
		
		return luna_dynamicCast(L,converters,"wxTextBoxAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,860077) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EqPartial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,860077) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,860077) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,860077)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,860077) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,860077) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,860077) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,860077) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFloatMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFloatMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFloatMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFloating(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClearMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClearMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasClearMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCollapseBorders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCollapseBorders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasCollapseBorders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVerticalAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetVerticalAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasVerticalAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTop_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTop_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottom_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottom_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPadding_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPadding_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftPadding_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftPadding_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightPadding_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightPadding_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopPadding_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopPadding_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomPadding_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomPadding_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftOutline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftOutline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopOutline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopOutline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightOutline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightOutline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomOutline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomOutline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,860077) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextBoxAttr::wxTextBoxAttr()
	static wxTextBoxAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttr::wxTextBoxAttr() function, expected prototype:\nwxTextBoxAttr::wxTextBoxAttr()\nClass arguments details:\n");
		}


		return new wxTextBoxAttr();
	}

	// wxTextBoxAttr::wxTextBoxAttr(const wxTextBoxAttr & attr)
	static wxTextBoxAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttr::wxTextBoxAttr(const wxTextBoxAttr & attr) function, expected prototype:\nwxTextBoxAttr::wxTextBoxAttr(const wxTextBoxAttr & attr)\nClass arguments details:\narg 1 ID = 860077\n");
		}

		const wxTextBoxAttr* attr_ptr=(Luna< wxTextBoxAttr >::check(L,1));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextBoxAttr::wxTextBoxAttr function");
		}
		const wxTextBoxAttr & attr=*attr_ptr;

		return new wxTextBoxAttr(attr);
	}

	// Overload binder for wxTextBoxAttr::wxTextBoxAttr
	static wxTextBoxAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextBoxAttr, cannot match any of the overloads for function wxTextBoxAttr:\n  wxTextBoxAttr()\n  wxTextBoxAttr(const wxTextBoxAttr &)\n");
		return NULL;
	}


	// Function binds:
	// void wxTextBoxAttr::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::Init() function, expected prototype:\nvoid wxTextBoxAttr::Init()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::Init()");
		}
		self->Init();

		return 0;
	}

	// void wxTextBoxAttr::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::Reset() function, expected prototype:\nvoid wxTextBoxAttr::Reset()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::Reset()");
		}
		self->Reset();

		return 0;
	}

	// bool wxTextBoxAttr::EqPartial(const wxTextBoxAttr & attr) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::EqPartial(const wxTextBoxAttr & attr) const function, expected prototype:\nbool wxTextBoxAttr::EqPartial(const wxTextBoxAttr & attr) const\nClass arguments details:\narg 1 ID = 860077\n");
		}

		const wxTextBoxAttr* attr_ptr=(Luna< wxTextBoxAttr >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextBoxAttr::EqPartial function");
		}
		const wxTextBoxAttr & attr=*attr_ptr;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::EqPartial(const wxTextBoxAttr &) const");
		}
		bool lret = self->EqPartial(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextBoxAttr::Apply(const wxTextBoxAttr & style, const wxTextBoxAttr * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::Apply(const wxTextBoxAttr & style, const wxTextBoxAttr * compareWith = NULL) function, expected prototype:\nbool wxTextBoxAttr::Apply(const wxTextBoxAttr & style, const wxTextBoxAttr * compareWith = NULL)\nClass arguments details:\narg 1 ID = 860077\narg 2 ID = 860077\n");
		}

		int luatop = lua_gettop(L);

		const wxTextBoxAttr* style_ptr=(Luna< wxTextBoxAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextBoxAttr::Apply function");
		}
		const wxTextBoxAttr & style=*style_ptr;
		const wxTextBoxAttr* compareWith=luatop>2 ? (Luna< wxTextBoxAttr >::check(L,3)) : (const wxTextBoxAttr*)NULL;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::Apply(const wxTextBoxAttr &, const wxTextBoxAttr *)");
		}
		bool lret = self->Apply(style, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextBoxAttr::CollectCommonAttributes(const wxTextBoxAttr & attr, wxTextBoxAttr & clashingAttr, wxTextBoxAttr & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::CollectCommonAttributes(const wxTextBoxAttr & attr, wxTextBoxAttr & clashingAttr, wxTextBoxAttr & absentAttr) function, expected prototype:\nvoid wxTextBoxAttr::CollectCommonAttributes(const wxTextBoxAttr & attr, wxTextBoxAttr & clashingAttr, wxTextBoxAttr & absentAttr)\nClass arguments details:\narg 1 ID = 860077\narg 2 ID = 860077\narg 3 ID = 860077\n");
		}

		const wxTextBoxAttr* attr_ptr=(Luna< wxTextBoxAttr >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextBoxAttr::CollectCommonAttributes function");
		}
		const wxTextBoxAttr & attr=*attr_ptr;
		wxTextBoxAttr* clashingAttr_ptr=(Luna< wxTextBoxAttr >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextBoxAttr::CollectCommonAttributes function");
		}
		wxTextBoxAttr & clashingAttr=*clashingAttr_ptr;
		wxTextBoxAttr* absentAttr_ptr=(Luna< wxTextBoxAttr >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextBoxAttr::CollectCommonAttributes function");
		}
		wxTextBoxAttr & absentAttr=*absentAttr_ptr;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::CollectCommonAttributes(const wxTextBoxAttr &, wxTextBoxAttr &, wxTextBoxAttr &)");
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// bool wxTextBoxAttr::RemoveStyle(const wxTextBoxAttr & attr)
	static int _bind_RemoveStyle(lua_State *L) {
		if (!_lg_typecheck_RemoveStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::RemoveStyle(const wxTextBoxAttr & attr) function, expected prototype:\nbool wxTextBoxAttr::RemoveStyle(const wxTextBoxAttr & attr)\nClass arguments details:\narg 1 ID = 860077\n");
		}

		const wxTextBoxAttr* attr_ptr=(Luna< wxTextBoxAttr >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextBoxAttr::RemoveStyle function");
		}
		const wxTextBoxAttr & attr=*attr_ptr;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::RemoveStyle(const wxTextBoxAttr &)");
		}
		bool lret = self->RemoveStyle(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextBoxAttr::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetFlags(int flags) function, expected prototype:\nvoid wxTextBoxAttr::SetFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetFlags(int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// int wxTextBoxAttr::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTextBoxAttr::GetFlags() const function, expected prototype:\nint wxTextBoxAttr::GetFlags() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTextBoxAttr::GetFlags() const");
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextBoxAttr::HasFlag(wxTextBoxAttrFlags flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::HasFlag(wxTextBoxAttrFlags flag) const function, expected prototype:\nbool wxTextBoxAttr::HasFlag(wxTextBoxAttrFlags flag) const\nClass arguments details:\n");
		}

		wxTextBoxAttrFlags flag=(wxTextBoxAttrFlags)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::HasFlag(wxTextBoxAttrFlags) const");
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextBoxAttr::RemoveFlag(wxTextBoxAttrFlags flag)
	static int _bind_RemoveFlag(lua_State *L) {
		if (!_lg_typecheck_RemoveFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::RemoveFlag(wxTextBoxAttrFlags flag) function, expected prototype:\nvoid wxTextBoxAttr::RemoveFlag(wxTextBoxAttrFlags flag)\nClass arguments details:\n");
		}

		wxTextBoxAttrFlags flag=(wxTextBoxAttrFlags)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::RemoveFlag(wxTextBoxAttrFlags)");
		}
		self->RemoveFlag(flag);

		return 0;
	}

	// void wxTextBoxAttr::AddFlag(wxTextBoxAttrFlags flag)
	static int _bind_AddFlag(lua_State *L) {
		if (!_lg_typecheck_AddFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::AddFlag(wxTextBoxAttrFlags flag) function, expected prototype:\nvoid wxTextBoxAttr::AddFlag(wxTextBoxAttrFlags flag)\nClass arguments details:\n");
		}

		wxTextBoxAttrFlags flag=(wxTextBoxAttrFlags)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::AddFlag(wxTextBoxAttrFlags)");
		}
		self->AddFlag(flag);

		return 0;
	}

	// wxTextBoxAttrFloatStyle wxTextBoxAttr::GetFloatMode() const
	static int _bind_GetFloatMode(lua_State *L) {
		if (!_lg_typecheck_GetFloatMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttrFloatStyle wxTextBoxAttr::GetFloatMode() const function, expected prototype:\nwxTextBoxAttrFloatStyle wxTextBoxAttr::GetFloatMode() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextBoxAttrFloatStyle wxTextBoxAttr::GetFloatMode() const");
		}
		wxTextBoxAttrFloatStyle lret = self->GetFloatMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextBoxAttr::SetFloatMode(wxTextBoxAttrFloatStyle mode)
	static int _bind_SetFloatMode(lua_State *L) {
		if (!_lg_typecheck_SetFloatMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetFloatMode(wxTextBoxAttrFloatStyle mode) function, expected prototype:\nvoid wxTextBoxAttr::SetFloatMode(wxTextBoxAttrFloatStyle mode)\nClass arguments details:\n");
		}

		wxTextBoxAttrFloatStyle mode=(wxTextBoxAttrFloatStyle)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetFloatMode(wxTextBoxAttrFloatStyle)");
		}
		self->SetFloatMode(mode);

		return 0;
	}

	// bool wxTextBoxAttr::HasFloatMode() const
	static int _bind_HasFloatMode(lua_State *L) {
		if (!_lg_typecheck_HasFloatMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::HasFloatMode() const function, expected prototype:\nbool wxTextBoxAttr::HasFloatMode() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::HasFloatMode() const");
		}
		bool lret = self->HasFloatMode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextBoxAttr::IsFloating() const
	static int _bind_IsFloating(lua_State *L) {
		if (!_lg_typecheck_IsFloating(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::IsFloating() const function, expected prototype:\nbool wxTextBoxAttr::IsFloating() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::IsFloating() const");
		}
		bool lret = self->IsFloating();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextBoxAttrClearStyle wxTextBoxAttr::GetClearMode() const
	static int _bind_GetClearMode(lua_State *L) {
		if (!_lg_typecheck_GetClearMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttrClearStyle wxTextBoxAttr::GetClearMode() const function, expected prototype:\nwxTextBoxAttrClearStyle wxTextBoxAttr::GetClearMode() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextBoxAttrClearStyle wxTextBoxAttr::GetClearMode() const");
		}
		wxTextBoxAttrClearStyle lret = self->GetClearMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextBoxAttr::SetClearMode(wxTextBoxAttrClearStyle mode)
	static int _bind_SetClearMode(lua_State *L) {
		if (!_lg_typecheck_SetClearMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetClearMode(wxTextBoxAttrClearStyle mode) function, expected prototype:\nvoid wxTextBoxAttr::SetClearMode(wxTextBoxAttrClearStyle mode)\nClass arguments details:\n");
		}

		wxTextBoxAttrClearStyle mode=(wxTextBoxAttrClearStyle)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetClearMode(wxTextBoxAttrClearStyle)");
		}
		self->SetClearMode(mode);

		return 0;
	}

	// bool wxTextBoxAttr::HasClearMode() const
	static int _bind_HasClearMode(lua_State *L) {
		if (!_lg_typecheck_HasClearMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::HasClearMode() const function, expected prototype:\nbool wxTextBoxAttr::HasClearMode() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::HasClearMode() const");
		}
		bool lret = self->HasClearMode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextBoxAttrCollapseMode wxTextBoxAttr::GetCollapseBorders() const
	static int _bind_GetCollapseBorders(lua_State *L) {
		if (!_lg_typecheck_GetCollapseBorders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttrCollapseMode wxTextBoxAttr::GetCollapseBorders() const function, expected prototype:\nwxTextBoxAttrCollapseMode wxTextBoxAttr::GetCollapseBorders() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextBoxAttrCollapseMode wxTextBoxAttr::GetCollapseBorders() const");
		}
		wxTextBoxAttrCollapseMode lret = self->GetCollapseBorders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextBoxAttr::SetCollapseBorders(wxTextBoxAttrCollapseMode collapse)
	static int _bind_SetCollapseBorders(lua_State *L) {
		if (!_lg_typecheck_SetCollapseBorders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetCollapseBorders(wxTextBoxAttrCollapseMode collapse) function, expected prototype:\nvoid wxTextBoxAttr::SetCollapseBorders(wxTextBoxAttrCollapseMode collapse)\nClass arguments details:\n");
		}

		wxTextBoxAttrCollapseMode collapse=(wxTextBoxAttrCollapseMode)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetCollapseBorders(wxTextBoxAttrCollapseMode)");
		}
		self->SetCollapseBorders(collapse);

		return 0;
	}

	// bool wxTextBoxAttr::HasCollapseBorders() const
	static int _bind_HasCollapseBorders(lua_State *L) {
		if (!_lg_typecheck_HasCollapseBorders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::HasCollapseBorders() const function, expected prototype:\nbool wxTextBoxAttr::HasCollapseBorders() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::HasCollapseBorders() const");
		}
		bool lret = self->HasCollapseBorders();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextBoxAttrVerticalAlignment wxTextBoxAttr::GetVerticalAlignment() const
	static int _bind_GetVerticalAlignment(lua_State *L) {
		if (!_lg_typecheck_GetVerticalAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextBoxAttrVerticalAlignment wxTextBoxAttr::GetVerticalAlignment() const function, expected prototype:\nwxTextBoxAttrVerticalAlignment wxTextBoxAttr::GetVerticalAlignment() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextBoxAttrVerticalAlignment wxTextBoxAttr::GetVerticalAlignment() const");
		}
		wxTextBoxAttrVerticalAlignment lret = self->GetVerticalAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextBoxAttr::SetVerticalAlignment(wxTextBoxAttrVerticalAlignment verticalAlignment)
	static int _bind_SetVerticalAlignment(lua_State *L) {
		if (!_lg_typecheck_SetVerticalAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetVerticalAlignment(wxTextBoxAttrVerticalAlignment verticalAlignment) function, expected prototype:\nvoid wxTextBoxAttr::SetVerticalAlignment(wxTextBoxAttrVerticalAlignment verticalAlignment)\nClass arguments details:\n");
		}

		wxTextBoxAttrVerticalAlignment verticalAlignment=(wxTextBoxAttrVerticalAlignment)lua_tointeger(L,2);

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetVerticalAlignment(wxTextBoxAttrVerticalAlignment)");
		}
		self->SetVerticalAlignment(verticalAlignment);

		return 0;
	}

	// bool wxTextBoxAttr::HasVerticalAlignment() const
	static int _bind_HasVerticalAlignment(lua_State *L) {
		if (!_lg_typecheck_HasVerticalAlignment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::HasVerticalAlignment() const function, expected prototype:\nbool wxTextBoxAttr::HasVerticalAlignment() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::HasVerticalAlignment() const");
		}
		bool lret = self->HasVerticalAlignment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextAttrDimensions & wxTextBoxAttr::GetMargins()
	static int _bind_GetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetMargins_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensions & wxTextBoxAttr::GetMargins() function, expected prototype:\nwxTextAttrDimensions & wxTextBoxAttr::GetMargins()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimensions & wxTextBoxAttr::GetMargins()");
		}
		const wxTextAttrDimensions* lret = &self->GetMargins();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimensions & wxTextBoxAttr::GetMargins() const
	static int _bind_GetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetMargins_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimensions & wxTextBoxAttr::GetMargins() const function, expected prototype:\nconst wxTextAttrDimensions & wxTextBoxAttr::GetMargins() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimensions & wxTextBoxAttr::GetMargins() const");
		}
		const wxTextAttrDimensions* lret = &self->GetMargins();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetMargins
	static int _bind_GetMargins(lua_State *L) {
		if (_lg_typecheck_GetMargins_overload_1(L)) return _bind_GetMargins_overload_1(L);
		if (_lg_typecheck_GetMargins_overload_2(L)) return _bind_GetMargins_overload_2(L);

		luaL_error(L, "error in function GetMargins, cannot match any of the overloads for function GetMargins:\n  GetMargins()\n  GetMargins()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin()
	static int _bind_GetLeftMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeftMargin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetLeftMargin()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin()");
		}
		const wxTextAttrDimension* lret = &self->GetLeftMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin() const
	static int _bind_GetLeftMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeftMargin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetLeftMargin() const");
		}
		const wxTextAttrDimension* lret = &self->GetLeftMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetLeftMargin
	static int _bind_GetLeftMargin(lua_State *L) {
		if (_lg_typecheck_GetLeftMargin_overload_1(L)) return _bind_GetLeftMargin_overload_1(L);
		if (_lg_typecheck_GetLeftMargin_overload_2(L)) return _bind_GetLeftMargin_overload_2(L);

		luaL_error(L, "error in function GetLeftMargin, cannot match any of the overloads for function GetLeftMargin:\n  GetLeftMargin()\n  GetLeftMargin()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetRightMargin()
	static int _bind_GetRightMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRightMargin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetRightMargin() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetRightMargin()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetRightMargin()");
		}
		const wxTextAttrDimension* lret = &self->GetRightMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetRightMargin() const
	static int _bind_GetRightMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRightMargin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetRightMargin() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetRightMargin() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetRightMargin() const");
		}
		const wxTextAttrDimension* lret = &self->GetRightMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetRightMargin
	static int _bind_GetRightMargin(lua_State *L) {
		if (_lg_typecheck_GetRightMargin_overload_1(L)) return _bind_GetRightMargin_overload_1(L);
		if (_lg_typecheck_GetRightMargin_overload_2(L)) return _bind_GetRightMargin_overload_2(L);

		luaL_error(L, "error in function GetRightMargin, cannot match any of the overloads for function GetRightMargin:\n  GetRightMargin()\n  GetRightMargin()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetTopMargin()
	static int _bind_GetTopMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTopMargin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetTopMargin() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetTopMargin()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetTopMargin()");
		}
		const wxTextAttrDimension* lret = &self->GetTopMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetTopMargin() const
	static int _bind_GetTopMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTopMargin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetTopMargin() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetTopMargin() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetTopMargin() const");
		}
		const wxTextAttrDimension* lret = &self->GetTopMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetTopMargin
	static int _bind_GetTopMargin(lua_State *L) {
		if (_lg_typecheck_GetTopMargin_overload_1(L)) return _bind_GetTopMargin_overload_1(L);
		if (_lg_typecheck_GetTopMargin_overload_2(L)) return _bind_GetTopMargin_overload_2(L);

		luaL_error(L, "error in function GetTopMargin, cannot match any of the overloads for function GetTopMargin:\n  GetTopMargin()\n  GetTopMargin()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin()
	static int _bind_GetBottomMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottomMargin_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetBottomMargin()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin()");
		}
		const wxTextAttrDimension* lret = &self->GetBottomMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin() const
	static int _bind_GetBottomMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottomMargin_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetBottomMargin() const");
		}
		const wxTextAttrDimension* lret = &self->GetBottomMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBottomMargin
	static int _bind_GetBottomMargin(lua_State *L) {
		if (_lg_typecheck_GetBottomMargin_overload_1(L)) return _bind_GetBottomMargin_overload_1(L);
		if (_lg_typecheck_GetBottomMargin_overload_2(L)) return _bind_GetBottomMargin_overload_2(L);

		luaL_error(L, "error in function GetBottomMargin, cannot match any of the overloads for function GetBottomMargin:\n  GetBottomMargin()\n  GetBottomMargin()\n");
		return 0;
	}

	// wxTextAttrDimensions & wxTextBoxAttr::GetPosition()
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensions & wxTextBoxAttr::GetPosition() function, expected prototype:\nwxTextAttrDimensions & wxTextBoxAttr::GetPosition()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimensions & wxTextBoxAttr::GetPosition()");
		}
		const wxTextAttrDimensions* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimensions & wxTextBoxAttr::GetPosition() const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimensions & wxTextBoxAttr::GetPosition() const function, expected prototype:\nconst wxTextAttrDimensions & wxTextBoxAttr::GetPosition() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimensions & wxTextBoxAttr::GetPosition() const");
		}
		const wxTextAttrDimensions* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition()\n  GetPosition()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetLeft()
	static int _bind_GetLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetLeft() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetLeft()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetLeft()");
		}
		const wxTextAttrDimension* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetLeft() const
	static int _bind_GetLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetLeft() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetLeft() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetLeft() const");
		}
		const wxTextAttrDimension* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetLeft
	static int _bind_GetLeft(lua_State *L) {
		if (_lg_typecheck_GetLeft_overload_1(L)) return _bind_GetLeft_overload_1(L);
		if (_lg_typecheck_GetLeft_overload_2(L)) return _bind_GetLeft_overload_2(L);

		luaL_error(L, "error in function GetLeft, cannot match any of the overloads for function GetLeft:\n  GetLeft()\n  GetLeft()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetRight()
	static int _bind_GetRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetRight() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetRight()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetRight()");
		}
		const wxTextAttrDimension* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetRight() const
	static int _bind_GetRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetRight() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetRight() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetRight() const");
		}
		const wxTextAttrDimension* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetRight
	static int _bind_GetRight(lua_State *L) {
		if (_lg_typecheck_GetRight_overload_1(L)) return _bind_GetRight_overload_1(L);
		if (_lg_typecheck_GetRight_overload_2(L)) return _bind_GetRight_overload_2(L);

		luaL_error(L, "error in function GetRight, cannot match any of the overloads for function GetRight:\n  GetRight()\n  GetRight()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetTop()
	static int _bind_GetTop_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetTop() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetTop()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetTop()");
		}
		const wxTextAttrDimension* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetTop() const
	static int _bind_GetTop_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetTop() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetTop() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetTop() const");
		}
		const wxTextAttrDimension* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetTop
	static int _bind_GetTop(lua_State *L) {
		if (_lg_typecheck_GetTop_overload_1(L)) return _bind_GetTop_overload_1(L);
		if (_lg_typecheck_GetTop_overload_2(L)) return _bind_GetTop_overload_2(L);

		luaL_error(L, "error in function GetTop, cannot match any of the overloads for function GetTop:\n  GetTop()\n  GetTop()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetBottom()
	static int _bind_GetBottom_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetBottom() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetBottom()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetBottom()");
		}
		const wxTextAttrDimension* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetBottom() const
	static int _bind_GetBottom_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetBottom() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetBottom() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetBottom() const");
		}
		const wxTextAttrDimension* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBottom
	static int _bind_GetBottom(lua_State *L) {
		if (_lg_typecheck_GetBottom_overload_1(L)) return _bind_GetBottom_overload_1(L);
		if (_lg_typecheck_GetBottom_overload_2(L)) return _bind_GetBottom_overload_2(L);

		luaL_error(L, "error in function GetBottom, cannot match any of the overloads for function GetBottom:\n  GetBottom()\n  GetBottom()\n");
		return 0;
	}

	// wxTextAttrDimensions & wxTextBoxAttr::GetPadding()
	static int _bind_GetPadding_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPadding_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensions & wxTextBoxAttr::GetPadding() function, expected prototype:\nwxTextAttrDimensions & wxTextBoxAttr::GetPadding()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimensions & wxTextBoxAttr::GetPadding()");
		}
		const wxTextAttrDimensions* lret = &self->GetPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimensions & wxTextBoxAttr::GetPadding() const
	static int _bind_GetPadding_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPadding_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimensions & wxTextBoxAttr::GetPadding() const function, expected prototype:\nconst wxTextAttrDimensions & wxTextBoxAttr::GetPadding() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimensions & wxTextBoxAttr::GetPadding() const");
		}
		const wxTextAttrDimensions* lret = &self->GetPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimensions >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetPadding
	static int _bind_GetPadding(lua_State *L) {
		if (_lg_typecheck_GetPadding_overload_1(L)) return _bind_GetPadding_overload_1(L);
		if (_lg_typecheck_GetPadding_overload_2(L)) return _bind_GetPadding_overload_2(L);

		luaL_error(L, "error in function GetPadding, cannot match any of the overloads for function GetPadding:\n  GetPadding()\n  GetPadding()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding()
	static int _bind_GetLeftPadding_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeftPadding_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetLeftPadding()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding()");
		}
		const wxTextAttrDimension* lret = &self->GetLeftPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding() const
	static int _bind_GetLeftPadding_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeftPadding_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetLeftPadding() const");
		}
		const wxTextAttrDimension* lret = &self->GetLeftPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetLeftPadding
	static int _bind_GetLeftPadding(lua_State *L) {
		if (_lg_typecheck_GetLeftPadding_overload_1(L)) return _bind_GetLeftPadding_overload_1(L);
		if (_lg_typecheck_GetLeftPadding_overload_2(L)) return _bind_GetLeftPadding_overload_2(L);

		luaL_error(L, "error in function GetLeftPadding, cannot match any of the overloads for function GetLeftPadding:\n  GetLeftPadding()\n  GetLeftPadding()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetRightPadding()
	static int _bind_GetRightPadding_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRightPadding_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetRightPadding() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetRightPadding()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetRightPadding()");
		}
		const wxTextAttrDimension* lret = &self->GetRightPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetRightPadding() const
	static int _bind_GetRightPadding_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRightPadding_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetRightPadding() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetRightPadding() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetRightPadding() const");
		}
		const wxTextAttrDimension* lret = &self->GetRightPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetRightPadding
	static int _bind_GetRightPadding(lua_State *L) {
		if (_lg_typecheck_GetRightPadding_overload_1(L)) return _bind_GetRightPadding_overload_1(L);
		if (_lg_typecheck_GetRightPadding_overload_2(L)) return _bind_GetRightPadding_overload_2(L);

		luaL_error(L, "error in function GetRightPadding, cannot match any of the overloads for function GetRightPadding:\n  GetRightPadding()\n  GetRightPadding()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetTopPadding()
	static int _bind_GetTopPadding_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTopPadding_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetTopPadding() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetTopPadding()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetTopPadding()");
		}
		const wxTextAttrDimension* lret = &self->GetTopPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetTopPadding() const
	static int _bind_GetTopPadding_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTopPadding_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetTopPadding() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetTopPadding() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetTopPadding() const");
		}
		const wxTextAttrDimension* lret = &self->GetTopPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetTopPadding
	static int _bind_GetTopPadding(lua_State *L) {
		if (_lg_typecheck_GetTopPadding_overload_1(L)) return _bind_GetTopPadding_overload_1(L);
		if (_lg_typecheck_GetTopPadding_overload_2(L)) return _bind_GetTopPadding_overload_2(L);

		luaL_error(L, "error in function GetTopPadding, cannot match any of the overloads for function GetTopPadding:\n  GetTopPadding()\n  GetTopPadding()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding()
	static int _bind_GetBottomPadding_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottomPadding_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetBottomPadding()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding()");
		}
		const wxTextAttrDimension* lret = &self->GetBottomPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding() const
	static int _bind_GetBottomPadding_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottomPadding_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetBottomPadding() const");
		}
		const wxTextAttrDimension* lret = &self->GetBottomPadding();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBottomPadding
	static int _bind_GetBottomPadding(lua_State *L) {
		if (_lg_typecheck_GetBottomPadding_overload_1(L)) return _bind_GetBottomPadding_overload_1(L);
		if (_lg_typecheck_GetBottomPadding_overload_2(L)) return _bind_GetBottomPadding_overload_2(L);

		luaL_error(L, "error in function GetBottomPadding, cannot match any of the overloads for function GetBottomPadding:\n  GetBottomPadding()\n  GetBottomPadding()\n");
		return 0;
	}

	// wxTextAttrBorders & wxTextBoxAttr::GetBorder()
	static int _bind_GetBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorders & wxTextBoxAttr::GetBorder() function, expected prototype:\nwxTextAttrBorders & wxTextBoxAttr::GetBorder()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorders & wxTextBoxAttr::GetBorder()");
		}
		const wxTextAttrBorders* lret = &self->GetBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorders >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorders & wxTextBoxAttr::GetBorder() const
	static int _bind_GetBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorders & wxTextBoxAttr::GetBorder() const function, expected prototype:\nconst wxTextAttrBorders & wxTextBoxAttr::GetBorder() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorders & wxTextBoxAttr::GetBorder() const");
		}
		const wxTextAttrBorders* lret = &self->GetBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorders >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBorder
	static int _bind_GetBorder(lua_State *L) {
		if (_lg_typecheck_GetBorder_overload_1(L)) return _bind_GetBorder_overload_1(L);
		if (_lg_typecheck_GetBorder_overload_2(L)) return _bind_GetBorder_overload_2(L);

		luaL_error(L, "error in function GetBorder, cannot match any of the overloads for function GetBorder:\n  GetBorder()\n  GetBorder()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder()
	static int _bind_GetLeftBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeftBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetLeftBorder()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder()");
		}
		const wxTextAttrBorder* lret = &self->GetLeftBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder() const
	static int _bind_GetLeftBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeftBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetLeftBorder() const");
		}
		const wxTextAttrBorder* lret = &self->GetLeftBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetLeftBorder
	static int _bind_GetLeftBorder(lua_State *L) {
		if (_lg_typecheck_GetLeftBorder_overload_1(L)) return _bind_GetLeftBorder_overload_1(L);
		if (_lg_typecheck_GetLeftBorder_overload_2(L)) return _bind_GetLeftBorder_overload_2(L);

		luaL_error(L, "error in function GetLeftBorder, cannot match any of the overloads for function GetLeftBorder:\n  GetLeftBorder()\n  GetLeftBorder()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetTopBorder()
	static int _bind_GetTopBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTopBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetTopBorder() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetTopBorder()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetTopBorder()");
		}
		const wxTextAttrBorder* lret = &self->GetTopBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetTopBorder() const
	static int _bind_GetTopBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTopBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetTopBorder() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetTopBorder() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetTopBorder() const");
		}
		const wxTextAttrBorder* lret = &self->GetTopBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetTopBorder
	static int _bind_GetTopBorder(lua_State *L) {
		if (_lg_typecheck_GetTopBorder_overload_1(L)) return _bind_GetTopBorder_overload_1(L);
		if (_lg_typecheck_GetTopBorder_overload_2(L)) return _bind_GetTopBorder_overload_2(L);

		luaL_error(L, "error in function GetTopBorder, cannot match any of the overloads for function GetTopBorder:\n  GetTopBorder()\n  GetTopBorder()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetRightBorder()
	static int _bind_GetRightBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRightBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetRightBorder() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetRightBorder()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetRightBorder()");
		}
		const wxTextAttrBorder* lret = &self->GetRightBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetRightBorder() const
	static int _bind_GetRightBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRightBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetRightBorder() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetRightBorder() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetRightBorder() const");
		}
		const wxTextAttrBorder* lret = &self->GetRightBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetRightBorder
	static int _bind_GetRightBorder(lua_State *L) {
		if (_lg_typecheck_GetRightBorder_overload_1(L)) return _bind_GetRightBorder_overload_1(L);
		if (_lg_typecheck_GetRightBorder_overload_2(L)) return _bind_GetRightBorder_overload_2(L);

		luaL_error(L, "error in function GetRightBorder, cannot match any of the overloads for function GetRightBorder:\n  GetRightBorder()\n  GetRightBorder()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder()
	static int _bind_GetBottomBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottomBorder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetBottomBorder()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder()");
		}
		const wxTextAttrBorder* lret = &self->GetBottomBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder() const
	static int _bind_GetBottomBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottomBorder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetBottomBorder() const");
		}
		const wxTextAttrBorder* lret = &self->GetBottomBorder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBottomBorder
	static int _bind_GetBottomBorder(lua_State *L) {
		if (_lg_typecheck_GetBottomBorder_overload_1(L)) return _bind_GetBottomBorder_overload_1(L);
		if (_lg_typecheck_GetBottomBorder_overload_2(L)) return _bind_GetBottomBorder_overload_2(L);

		luaL_error(L, "error in function GetBottomBorder, cannot match any of the overloads for function GetBottomBorder:\n  GetBottomBorder()\n  GetBottomBorder()\n");
		return 0;
	}

	// wxTextAttrBorders & wxTextBoxAttr::GetOutline()
	static int _bind_GetOutline_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetOutline_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorders & wxTextBoxAttr::GetOutline() function, expected prototype:\nwxTextAttrBorders & wxTextBoxAttr::GetOutline()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorders & wxTextBoxAttr::GetOutline()");
		}
		const wxTextAttrBorders* lret = &self->GetOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorders >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorders & wxTextBoxAttr::GetOutline() const
	static int _bind_GetOutline_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetOutline_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorders & wxTextBoxAttr::GetOutline() const function, expected prototype:\nconst wxTextAttrBorders & wxTextBoxAttr::GetOutline() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorders & wxTextBoxAttr::GetOutline() const");
		}
		const wxTextAttrBorders* lret = &self->GetOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorders >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetOutline
	static int _bind_GetOutline(lua_State *L) {
		if (_lg_typecheck_GetOutline_overload_1(L)) return _bind_GetOutline_overload_1(L);
		if (_lg_typecheck_GetOutline_overload_2(L)) return _bind_GetOutline_overload_2(L);

		luaL_error(L, "error in function GetOutline, cannot match any of the overloads for function GetOutline:\n  GetOutline()\n  GetOutline()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline()
	static int _bind_GetLeftOutline_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeftOutline_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetLeftOutline()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline()");
		}
		const wxTextAttrBorder* lret = &self->GetLeftOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline() const
	static int _bind_GetLeftOutline_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeftOutline_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetLeftOutline() const");
		}
		const wxTextAttrBorder* lret = &self->GetLeftOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetLeftOutline
	static int _bind_GetLeftOutline(lua_State *L) {
		if (_lg_typecheck_GetLeftOutline_overload_1(L)) return _bind_GetLeftOutline_overload_1(L);
		if (_lg_typecheck_GetLeftOutline_overload_2(L)) return _bind_GetLeftOutline_overload_2(L);

		luaL_error(L, "error in function GetLeftOutline, cannot match any of the overloads for function GetLeftOutline:\n  GetLeftOutline()\n  GetLeftOutline()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetTopOutline()
	static int _bind_GetTopOutline_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTopOutline_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetTopOutline() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetTopOutline()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetTopOutline()");
		}
		const wxTextAttrBorder* lret = &self->GetTopOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetTopOutline() const
	static int _bind_GetTopOutline_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTopOutline_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetTopOutline() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetTopOutline() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetTopOutline() const");
		}
		const wxTextAttrBorder* lret = &self->GetTopOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetTopOutline
	static int _bind_GetTopOutline(lua_State *L) {
		if (_lg_typecheck_GetTopOutline_overload_1(L)) return _bind_GetTopOutline_overload_1(L);
		if (_lg_typecheck_GetTopOutline_overload_2(L)) return _bind_GetTopOutline_overload_2(L);

		luaL_error(L, "error in function GetTopOutline, cannot match any of the overloads for function GetTopOutline:\n  GetTopOutline()\n  GetTopOutline()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetRightOutline()
	static int _bind_GetRightOutline_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRightOutline_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetRightOutline() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetRightOutline()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetRightOutline()");
		}
		const wxTextAttrBorder* lret = &self->GetRightOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetRightOutline() const
	static int _bind_GetRightOutline_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRightOutline_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetRightOutline() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetRightOutline() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetRightOutline() const");
		}
		const wxTextAttrBorder* lret = &self->GetRightOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetRightOutline
	static int _bind_GetRightOutline(lua_State *L) {
		if (_lg_typecheck_GetRightOutline_overload_1(L)) return _bind_GetRightOutline_overload_1(L);
		if (_lg_typecheck_GetRightOutline_overload_2(L)) return _bind_GetRightOutline_overload_2(L);

		luaL_error(L, "error in function GetRightOutline, cannot match any of the overloads for function GetRightOutline:\n  GetRightOutline()\n  GetRightOutline()\n");
		return 0;
	}

	// wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline()
	static int _bind_GetBottomOutline_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottomOutline_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline() function, expected prototype:\nwxTextAttrBorder & wxTextBoxAttr::GetBottomOutline()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline()");
		}
		const wxTextAttrBorder* lret = &self->GetBottomOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline() const
	static int _bind_GetBottomOutline_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottomOutline_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline() const function, expected prototype:\nconst wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextBoxAttr::GetBottomOutline() const");
		}
		const wxTextAttrBorder* lret = &self->GetBottomOutline();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetBottomOutline
	static int _bind_GetBottomOutline(lua_State *L) {
		if (_lg_typecheck_GetBottomOutline_overload_1(L)) return _bind_GetBottomOutline_overload_1(L);
		if (_lg_typecheck_GetBottomOutline_overload_2(L)) return _bind_GetBottomOutline_overload_2(L);

		luaL_error(L, "error in function GetBottomOutline, cannot match any of the overloads for function GetBottomOutline:\n  GetBottomOutline()\n  GetBottomOutline()\n");
		return 0;
	}

	// wxTextAttrSize & wxTextBoxAttr::GetSize()
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrSize & wxTextBoxAttr::GetSize() function, expected prototype:\nwxTextAttrSize & wxTextBoxAttr::GetSize()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrSize & wxTextBoxAttr::GetSize()");
		}
		const wxTextAttrSize* lret = &self->GetSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrSize >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrSize & wxTextBoxAttr::GetSize() const
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrSize & wxTextBoxAttr::GetSize() const function, expected prototype:\nconst wxTextAttrSize & wxTextBoxAttr::GetSize() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrSize & wxTextBoxAttr::GetSize() const");
		}
		const wxTextAttrSize* lret = &self->GetSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrSize >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize()\n  GetSize()\n");
		return 0;
	}

	// void wxTextBoxAttr::SetSize(const wxTextAttrSize & sz)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextBoxAttr::SetSize(const wxTextAttrSize & sz) function, expected prototype:\nvoid wxTextBoxAttr::SetSize(const wxTextAttrSize & sz)\nClass arguments details:\narg 1 ID = 81312281\n");
		}

		const wxTextAttrSize* sz_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxTextBoxAttr::SetSize function");
		}
		const wxTextAttrSize & sz=*sz_ptr;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextBoxAttr::SetSize(const wxTextAttrSize &)");
		}
		self->SetSize(sz);

		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetWidth()
	static int _bind_GetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetWidth() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetWidth()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetWidth()");
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetWidth() const
	static int _bind_GetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetWidth() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetWidth() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetWidth() const");
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetWidth
	static int _bind_GetWidth(lua_State *L) {
		if (_lg_typecheck_GetWidth_overload_1(L)) return _bind_GetWidth_overload_1(L);
		if (_lg_typecheck_GetWidth_overload_2(L)) return _bind_GetWidth_overload_2(L);

		luaL_error(L, "error in function GetWidth, cannot match any of the overloads for function GetWidth:\n  GetWidth()\n  GetWidth()\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextBoxAttr::GetHeight()
	static int _bind_GetHeight_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetHeight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextBoxAttr::GetHeight() function, expected prototype:\nwxTextAttrDimension & wxTextBoxAttr::GetHeight()\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextBoxAttr::GetHeight()");
		}
		const wxTextAttrDimension* lret = &self->GetHeight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextBoxAttr::GetHeight() const
	static int _bind_GetHeight_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetHeight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextBoxAttr::GetHeight() const function, expected prototype:\nconst wxTextAttrDimension & wxTextBoxAttr::GetHeight() const\nClass arguments details:\n");
		}


		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextBoxAttr::GetHeight() const");
		}
		const wxTextAttrDimension* lret = &self->GetHeight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextBoxAttr::GetHeight
	static int _bind_GetHeight(lua_State *L) {
		if (_lg_typecheck_GetHeight_overload_1(L)) return _bind_GetHeight_overload_1(L);
		if (_lg_typecheck_GetHeight_overload_2(L)) return _bind_GetHeight_overload_2(L);

		luaL_error(L, "error in function GetHeight, cannot match any of the overloads for function GetHeight:\n  GetHeight()\n  GetHeight()\n");
		return 0;
	}


	// Operator binds:
	// bool wxTextBoxAttr::operator==(const wxTextBoxAttr & attr) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextBoxAttr::operator==(const wxTextBoxAttr & attr) const function, expected prototype:\nbool wxTextBoxAttr::operator==(const wxTextBoxAttr & attr) const\nClass arguments details:\narg 1 ID = 860077\n");
		}

		const wxTextBoxAttr* attr_ptr=(Luna< wxTextBoxAttr >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextBoxAttr::operator== function");
		}
		const wxTextBoxAttr & attr=*attr_ptr;

		wxTextBoxAttr* self=(Luna< wxTextBoxAttr >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextBoxAttr::operator==(const wxTextBoxAttr &) const");
		}
		bool lret = self->operator==(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextBoxAttr* LunaTraits< wxTextBoxAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextBoxAttr::_bind_ctor(L);
}

void LunaTraits< wxTextBoxAttr >::_bind_dtor(wxTextBoxAttr* obj) {
	delete obj;
}

const char LunaTraits< wxTextBoxAttr >::className[] = "wxTextBoxAttr";
const char LunaTraits< wxTextBoxAttr >::fullName[] = "wxTextBoxAttr";
const char LunaTraits< wxTextBoxAttr >::moduleName[] = "wx";
const char* LunaTraits< wxTextBoxAttr >::parents[] = {0};
const int LunaTraits< wxTextBoxAttr >::hash = 860077;
const int LunaTraits< wxTextBoxAttr >::uniqueIDs[] = {860077,0};

luna_RegType LunaTraits< wxTextBoxAttr >::methods[] = {
	{"Init", &luna_wrapper_wxTextBoxAttr::_bind_Init},
	{"Reset", &luna_wrapper_wxTextBoxAttr::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextBoxAttr::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextBoxAttr::_bind_Apply},
	{"CollectCommonAttributes", &luna_wrapper_wxTextBoxAttr::_bind_CollectCommonAttributes},
	{"RemoveStyle", &luna_wrapper_wxTextBoxAttr::_bind_RemoveStyle},
	{"SetFlags", &luna_wrapper_wxTextBoxAttr::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxTextBoxAttr::_bind_GetFlags},
	{"HasFlag", &luna_wrapper_wxTextBoxAttr::_bind_HasFlag},
	{"RemoveFlag", &luna_wrapper_wxTextBoxAttr::_bind_RemoveFlag},
	{"AddFlag", &luna_wrapper_wxTextBoxAttr::_bind_AddFlag},
	{"GetFloatMode", &luna_wrapper_wxTextBoxAttr::_bind_GetFloatMode},
	{"SetFloatMode", &luna_wrapper_wxTextBoxAttr::_bind_SetFloatMode},
	{"HasFloatMode", &luna_wrapper_wxTextBoxAttr::_bind_HasFloatMode},
	{"IsFloating", &luna_wrapper_wxTextBoxAttr::_bind_IsFloating},
	{"GetClearMode", &luna_wrapper_wxTextBoxAttr::_bind_GetClearMode},
	{"SetClearMode", &luna_wrapper_wxTextBoxAttr::_bind_SetClearMode},
	{"HasClearMode", &luna_wrapper_wxTextBoxAttr::_bind_HasClearMode},
	{"GetCollapseBorders", &luna_wrapper_wxTextBoxAttr::_bind_GetCollapseBorders},
	{"SetCollapseBorders", &luna_wrapper_wxTextBoxAttr::_bind_SetCollapseBorders},
	{"HasCollapseBorders", &luna_wrapper_wxTextBoxAttr::_bind_HasCollapseBorders},
	{"GetVerticalAlignment", &luna_wrapper_wxTextBoxAttr::_bind_GetVerticalAlignment},
	{"SetVerticalAlignment", &luna_wrapper_wxTextBoxAttr::_bind_SetVerticalAlignment},
	{"HasVerticalAlignment", &luna_wrapper_wxTextBoxAttr::_bind_HasVerticalAlignment},
	{"GetMargins", &luna_wrapper_wxTextBoxAttr::_bind_GetMargins},
	{"GetLeftMargin", &luna_wrapper_wxTextBoxAttr::_bind_GetLeftMargin},
	{"GetRightMargin", &luna_wrapper_wxTextBoxAttr::_bind_GetRightMargin},
	{"GetTopMargin", &luna_wrapper_wxTextBoxAttr::_bind_GetTopMargin},
	{"GetBottomMargin", &luna_wrapper_wxTextBoxAttr::_bind_GetBottomMargin},
	{"GetPosition", &luna_wrapper_wxTextBoxAttr::_bind_GetPosition},
	{"GetLeft", &luna_wrapper_wxTextBoxAttr::_bind_GetLeft},
	{"GetRight", &luna_wrapper_wxTextBoxAttr::_bind_GetRight},
	{"GetTop", &luna_wrapper_wxTextBoxAttr::_bind_GetTop},
	{"GetBottom", &luna_wrapper_wxTextBoxAttr::_bind_GetBottom},
	{"GetPadding", &luna_wrapper_wxTextBoxAttr::_bind_GetPadding},
	{"GetLeftPadding", &luna_wrapper_wxTextBoxAttr::_bind_GetLeftPadding},
	{"GetRightPadding", &luna_wrapper_wxTextBoxAttr::_bind_GetRightPadding},
	{"GetTopPadding", &luna_wrapper_wxTextBoxAttr::_bind_GetTopPadding},
	{"GetBottomPadding", &luna_wrapper_wxTextBoxAttr::_bind_GetBottomPadding},
	{"GetBorder", &luna_wrapper_wxTextBoxAttr::_bind_GetBorder},
	{"GetLeftBorder", &luna_wrapper_wxTextBoxAttr::_bind_GetLeftBorder},
	{"GetTopBorder", &luna_wrapper_wxTextBoxAttr::_bind_GetTopBorder},
	{"GetRightBorder", &luna_wrapper_wxTextBoxAttr::_bind_GetRightBorder},
	{"GetBottomBorder", &luna_wrapper_wxTextBoxAttr::_bind_GetBottomBorder},
	{"GetOutline", &luna_wrapper_wxTextBoxAttr::_bind_GetOutline},
	{"GetLeftOutline", &luna_wrapper_wxTextBoxAttr::_bind_GetLeftOutline},
	{"GetTopOutline", &luna_wrapper_wxTextBoxAttr::_bind_GetTopOutline},
	{"GetRightOutline", &luna_wrapper_wxTextBoxAttr::_bind_GetRightOutline},
	{"GetBottomOutline", &luna_wrapper_wxTextBoxAttr::_bind_GetBottomOutline},
	{"GetSize", &luna_wrapper_wxTextBoxAttr::_bind_GetSize},
	{"SetSize", &luna_wrapper_wxTextBoxAttr::_bind_SetSize},
	{"GetWidth", &luna_wrapper_wxTextBoxAttr::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_wxTextBoxAttr::_bind_GetHeight},
	{"__eq", &luna_wrapper_wxTextBoxAttr::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextBoxAttr::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextBoxAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextBoxAttr >::enumValues[] = {
	{0,0}
};


