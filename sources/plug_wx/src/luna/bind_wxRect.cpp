#include <plug_common.h>

class luna_wrapper_wxRect {
public:
	typedef Luna< wxRect > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20234418) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRect*)");
		}

		wxRect* rhs =(Luna< wxRect >::check(L,2));
		wxRect* self=(Luna< wxRect >::check(L,1));
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

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRect");
		
		return luna_dynamicCast(L,converters,"wxRect",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CentreIn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CenterIn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Deflate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Deflate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Deflate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Deflate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Inflate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inflate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inflate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inflate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Offset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Offset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}


	// Constructor binds:
	// wxRect::wxRect()
	static wxRect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect::wxRect() function, expected prototype:\nwxRect::wxRect()\nClass arguments details:\n");
		}


		return new wxRect();
	}

	// wxRect::wxRect(int x, int y, int width, int height)
	static wxRect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect::wxRect(int x, int y, int width, int height) function, expected prototype:\nwxRect::wxRect(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new wxRect(x, y, width, height);
	}

	// wxRect::wxRect(const wxPoint & topLeft, const wxPoint & bottomRight)
	static wxRect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect::wxRect(const wxPoint & topLeft, const wxPoint & bottomRight) function, expected prototype:\nwxRect::wxRect(const wxPoint & topLeft, const wxPoint & bottomRight)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 25723480\n");
		}

		const wxPoint* topLeft_ptr=(Luna< wxPoint >::check(L,1));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxRect::wxRect function");
		}
		const wxPoint & topLeft=*topLeft_ptr;
		const wxPoint* bottomRight_ptr=(Luna< wxPoint >::check(L,2));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxRect::wxRect function");
		}
		const wxPoint & bottomRight=*bottomRight_ptr;

		return new wxRect(topLeft, bottomRight);
	}

	// wxRect::wxRect(const wxPoint & pos, const wxSize & size)
	static wxRect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect::wxRect(const wxPoint & pos, const wxSize & size) function, expected prototype:\nwxRect::wxRect(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n");
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,1));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRect::wxRect function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRect::wxRect function");
		}
		const wxSize & size=*size_ptr;

		return new wxRect(pos, size);
	}

	// wxRect::wxRect(const wxSize & size)
	static wxRect* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect::wxRect(const wxSize & size) function, expected prototype:\nwxRect::wxRect(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,1));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRect::wxRect function");
		}
		const wxSize & size=*size_ptr;

		return new wxRect(size);
	}

	// Overload binder for wxRect::wxRect
	static wxRect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function wxRect, cannot match any of the overloads for function wxRect:\n  wxRect()\n  wxRect(int, int, int, int)\n  wxRect(const wxPoint &, const wxPoint &)\n  wxRect(const wxPoint &, const wxSize &)\n  wxRect(const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// wxRect wxRect::CentreIn(const wxRect & r, int dir = ::wxBOTH) const
	static int _bind_CentreIn(lua_State *L) {
		if (!_lg_typecheck_CentreIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::CentreIn(const wxRect & r, int dir = ::wxBOTH) const function, expected prototype:\nwxRect wxRect::CentreIn(const wxRect & r, int dir = ::wxBOTH) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		const wxRect* r_ptr=(Luna< wxRect >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxRect::CentreIn function");
		}
		const wxRect & r=*r_ptr;
		int dir=luatop>2 ? (int)lua_tointeger(L,3) : ::wxBOTH;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::CentreIn(const wxRect &, int) const");
		}
		wxRect stack_lret = self->CentreIn(r, dir);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxRect wxRect::CenterIn(const wxRect & r, int dir = ::wxBOTH) const
	static int _bind_CenterIn(lua_State *L) {
		if (!_lg_typecheck_CenterIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::CenterIn(const wxRect & r, int dir = ::wxBOTH) const function, expected prototype:\nwxRect wxRect::CenterIn(const wxRect & r, int dir = ::wxBOTH) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		int luatop = lua_gettop(L);

		const wxRect* r_ptr=(Luna< wxRect >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxRect::CenterIn function");
		}
		const wxRect & r=*r_ptr;
		int dir=luatop>2 ? (int)lua_tointeger(L,3) : ::wxBOTH;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::CenterIn(const wxRect &, int) const");
		}
		wxRect stack_lret = self->CenterIn(r, dir);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// bool wxRect::Contains(int x, int y) const
	static int _bind_Contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect::Contains(int x, int y) const function, expected prototype:\nbool wxRect::Contains(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect::Contains(int, int) const");
		}
		bool lret = self->Contains(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect::Contains(const wxPoint & pt) const
	static int _bind_Contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect::Contains(const wxPoint & pt) const function, expected prototype:\nbool wxRect::Contains(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect::Contains function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect::Contains(const wxPoint &) const");
		}
		bool lret = self->Contains(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect::Contains(const wxRect & rect) const
	static int _bind_Contains_overload_3(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect::Contains(const wxRect & rect) const function, expected prototype:\nbool wxRect::Contains(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Contains function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect::Contains(const wxRect &) const");
		}
		bool lret = self->Contains(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRect::Contains
	static int _bind_Contains(lua_State *L) {
		if (_lg_typecheck_Contains_overload_1(L)) return _bind_Contains_overload_1(L);
		if (_lg_typecheck_Contains_overload_2(L)) return _bind_Contains_overload_2(L);
		if (_lg_typecheck_Contains_overload_3(L)) return _bind_Contains_overload_3(L);

		luaL_error(L, "error in function Contains, cannot match any of the overloads for function Contains:\n  Contains(int, int)\n  Contains(const wxPoint &)\n  Contains(const wxRect &)\n");
		return 0;
	}

	// wxRect & wxRect::Deflate(int dx, int dy)
	static int _bind_Deflate_overload_1(lua_State *L) {
		if (!_lg_typecheck_Deflate_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Deflate(int dx, int dy) function, expected prototype:\nwxRect & wxRect::Deflate(int dx, int dy)\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Deflate(int, int)");
		}
		const wxRect* lret = &self->Deflate(dx, dy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect & wxRect::Deflate(const wxSize & diff)
	static int _bind_Deflate_overload_2(lua_State *L) {
		if (!_lg_typecheck_Deflate_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Deflate(const wxSize & diff) function, expected prototype:\nwxRect & wxRect::Deflate(const wxSize & diff)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* diff_ptr=(Luna< wxSize >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxRect::Deflate function");
		}
		const wxSize & diff=*diff_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Deflate(const wxSize &)");
		}
		const wxRect* lret = &self->Deflate(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect & wxRect::Deflate(int diff)
	static int _bind_Deflate_overload_3(lua_State *L) {
		if (!_lg_typecheck_Deflate_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Deflate(int diff) function, expected prototype:\nwxRect & wxRect::Deflate(int diff)\nClass arguments details:\n");
		}

		int diff=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Deflate(int)");
		}
		const wxRect* lret = &self->Deflate(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect wxRect::Deflate(int dx, int dy) const
	static int _bind_Deflate_overload_4(lua_State *L) {
		if (!_lg_typecheck_Deflate_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::Deflate(int dx, int dy) const function, expected prototype:\nwxRect wxRect::Deflate(int dx, int dy) const\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::Deflate(int, int) const");
		}
		wxRect stack_lret = self->Deflate(dx, dy);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRect::Deflate
	static int _bind_Deflate(lua_State *L) {
		if (_lg_typecheck_Deflate_overload_1(L)) return _bind_Deflate_overload_1(L);
		if (_lg_typecheck_Deflate_overload_2(L)) return _bind_Deflate_overload_2(L);
		if (_lg_typecheck_Deflate_overload_3(L)) return _bind_Deflate_overload_3(L);
		if (_lg_typecheck_Deflate_overload_4(L)) return _bind_Deflate_overload_4(L);

		luaL_error(L, "error in function Deflate, cannot match any of the overloads for function Deflate:\n  Deflate(int, int)\n  Deflate(const wxSize &)\n  Deflate(int)\n  Deflate(int, int)\n");
		return 0;
	}

	// int wxRect::GetBottom() const
	static int _bind_GetBottom(lua_State *L) {
		if (!_lg_typecheck_GetBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetBottom() const function, expected prototype:\nint wxRect::GetBottom() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetBottom() const");
		}
		int lret = self->GetBottom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxRect::GetBottomLeft() const
	static int _bind_GetBottomLeft(lua_State *L) {
		if (!_lg_typecheck_GetBottomLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRect::GetBottomLeft() const function, expected prototype:\nwxPoint wxRect::GetBottomLeft() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRect::GetBottomLeft() const");
		}
		wxPoint stack_lret = self->GetBottomLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxRect::GetBottomRight() const
	static int _bind_GetBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetBottomRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRect::GetBottomRight() const function, expected prototype:\nwxPoint wxRect::GetBottomRight() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRect::GetBottomRight() const");
		}
		wxPoint stack_lret = self->GetBottomRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxRect::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetHeight() const function, expected prototype:\nint wxRect::GetHeight() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetHeight() const");
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRect::GetLeft() const
	static int _bind_GetLeft(lua_State *L) {
		if (!_lg_typecheck_GetLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetLeft() const function, expected prototype:\nint wxRect::GetLeft() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetLeft() const");
		}
		int lret = self->GetLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxRect::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRect::GetPosition() const function, expected prototype:\nwxPoint wxRect::GetPosition() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRect::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxRect::GetRight() const
	static int _bind_GetRight(lua_State *L) {
		if (!_lg_typecheck_GetRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetRight() const function, expected prototype:\nint wxRect::GetRight() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetRight() const");
		}
		int lret = self->GetRight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxRect::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRect::GetSize() const function, expected prototype:\nwxSize wxRect::GetSize() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRect::GetSize() const");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxRect::GetTop() const
	static int _bind_GetTop(lua_State *L) {
		if (!_lg_typecheck_GetTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetTop() const function, expected prototype:\nint wxRect::GetTop() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetTop() const");
		}
		int lret = self->GetTop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxRect::GetTopLeft() const
	static int _bind_GetTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetTopLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRect::GetTopLeft() const function, expected prototype:\nwxPoint wxRect::GetTopLeft() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRect::GetTopLeft() const");
		}
		wxPoint stack_lret = self->GetTopLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxRect::GetTopRight() const
	static int _bind_GetTopRight(lua_State *L) {
		if (!_lg_typecheck_GetTopRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxRect::GetTopRight() const function, expected prototype:\nwxPoint wxRect::GetTopRight() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxRect::GetTopRight() const");
		}
		wxPoint stack_lret = self->GetTopRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxRect::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetWidth() const function, expected prototype:\nint wxRect::GetWidth() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRect::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetX() const function, expected prototype:\nint wxRect::GetX() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetX() const");
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRect::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect::GetY() const function, expected prototype:\nint wxRect::GetY() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect::GetY() const");
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect & wxRect::Inflate(int dx, int dy)
	static int _bind_Inflate_overload_1(lua_State *L) {
		if (!_lg_typecheck_Inflate_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Inflate(int dx, int dy) function, expected prototype:\nwxRect & wxRect::Inflate(int dx, int dy)\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Inflate(int, int)");
		}
		const wxRect* lret = &self->Inflate(dx, dy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect & wxRect::Inflate(const wxSize & diff)
	static int _bind_Inflate_overload_2(lua_State *L) {
		if (!_lg_typecheck_Inflate_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Inflate(const wxSize & diff) function, expected prototype:\nwxRect & wxRect::Inflate(const wxSize & diff)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* diff_ptr=(Luna< wxSize >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxRect::Inflate function");
		}
		const wxSize & diff=*diff_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Inflate(const wxSize &)");
		}
		const wxRect* lret = &self->Inflate(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect & wxRect::Inflate(int diff)
	static int _bind_Inflate_overload_3(lua_State *L) {
		if (!_lg_typecheck_Inflate_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Inflate(int diff) function, expected prototype:\nwxRect & wxRect::Inflate(int diff)\nClass arguments details:\n");
		}

		int diff=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Inflate(int)");
		}
		const wxRect* lret = &self->Inflate(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect wxRect::Inflate(int dx, int dy) const
	static int _bind_Inflate_overload_4(lua_State *L) {
		if (!_lg_typecheck_Inflate_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::Inflate(int dx, int dy) const function, expected prototype:\nwxRect wxRect::Inflate(int dx, int dy) const\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::Inflate(int, int) const");
		}
		wxRect stack_lret = self->Inflate(dx, dy);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRect::Inflate
	static int _bind_Inflate(lua_State *L) {
		if (_lg_typecheck_Inflate_overload_1(L)) return _bind_Inflate_overload_1(L);
		if (_lg_typecheck_Inflate_overload_2(L)) return _bind_Inflate_overload_2(L);
		if (_lg_typecheck_Inflate_overload_3(L)) return _bind_Inflate_overload_3(L);
		if (_lg_typecheck_Inflate_overload_4(L)) return _bind_Inflate_overload_4(L);

		luaL_error(L, "error in function Inflate, cannot match any of the overloads for function Inflate:\n  Inflate(int, int)\n  Inflate(const wxSize &)\n  Inflate(int)\n  Inflate(int, int)\n");
		return 0;
	}

	// wxRect & wxRect::Intersect(const wxRect & rect)
	static int _bind_Intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Intersect(const wxRect & rect) function, expected prototype:\nwxRect & wxRect::Intersect(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Intersect function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Intersect(const wxRect &)");
		}
		const wxRect* lret = &self->Intersect(rect);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect wxRect::Intersect(const wxRect & rect) const
	static int _bind_Intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::Intersect(const wxRect & rect) const function, expected prototype:\nwxRect wxRect::Intersect(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Intersect function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::Intersect(const wxRect &) const");
		}
		wxRect stack_lret = self->Intersect(rect);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRect::Intersect
	static int _bind_Intersect(lua_State *L) {
		if (_lg_typecheck_Intersect_overload_1(L)) return _bind_Intersect_overload_1(L);
		if (_lg_typecheck_Intersect_overload_2(L)) return _bind_Intersect_overload_2(L);

		luaL_error(L, "error in function Intersect, cannot match any of the overloads for function Intersect:\n  Intersect(const wxRect &)\n  Intersect(const wxRect &)\n");
		return 0;
	}

	// bool wxRect::Intersects(const wxRect & rect) const
	static int _bind_Intersects(lua_State *L) {
		if (!_lg_typecheck_Intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect::Intersects(const wxRect & rect) const function, expected prototype:\nbool wxRect::Intersects(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Intersects function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect::Intersects(const wxRect &) const");
		}
		bool lret = self->Intersects(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect::IsEmpty() const function, expected prototype:\nbool wxRect::IsEmpty() const\nClass arguments details:\n");
		}


		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRect::Offset(int dx, int dy)
	static int _bind_Offset_overload_1(lua_State *L) {
		if (!_lg_typecheck_Offset_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::Offset(int dx, int dy) function, expected prototype:\nvoid wxRect::Offset(int dx, int dy)\nClass arguments details:\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::Offset(int, int)");
		}
		self->Offset(dx, dy);

		return 0;
	}

	// void wxRect::Offset(const wxPoint & pt)
	static int _bind_Offset_overload_2(lua_State *L) {
		if (!_lg_typecheck_Offset_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::Offset(const wxPoint & pt) function, expected prototype:\nvoid wxRect::Offset(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect::Offset function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::Offset(const wxPoint &)");
		}
		self->Offset(pt);

		return 0;
	}

	// Overload binder for wxRect::Offset
	static int _bind_Offset(lua_State *L) {
		if (_lg_typecheck_Offset_overload_1(L)) return _bind_Offset_overload_1(L);
		if (_lg_typecheck_Offset_overload_2(L)) return _bind_Offset_overload_2(L);

		luaL_error(L, "error in function Offset, cannot match any of the overloads for function Offset:\n  Offset(int, int)\n  Offset(const wxPoint &)\n");
		return 0;
	}

	// void wxRect::SetHeight(int height)
	static int _bind_SetHeight(lua_State *L) {
		if (!_lg_typecheck_SetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::SetHeight(int height) function, expected prototype:\nvoid wxRect::SetHeight(int height)\nClass arguments details:\n");
		}

		int height=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::SetHeight(int)");
		}
		self->SetHeight(height);

		return 0;
	}

	// void wxRect::SetSize(const wxSize & s)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::SetSize(const wxSize & s) function, expected prototype:\nvoid wxRect::SetSize(const wxSize & s)\nClass arguments details:\narg 1 ID = 20268751\n");
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxRect::SetSize function");
		}
		const wxSize & s=*s_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::SetSize(const wxSize &)");
		}
		self->SetSize(s);

		return 0;
	}

	// void wxRect::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::SetWidth(int width) function, expected prototype:\nvoid wxRect::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::SetWidth(int)");
		}
		self->SetWidth(width);

		return 0;
	}

	// void wxRect::SetX(int x)
	static int _bind_SetX(lua_State *L) {
		if (!_lg_typecheck_SetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::SetX(int x) function, expected prototype:\nvoid wxRect::SetX(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::SetX(int)");
		}
		self->SetX(x);

		return 0;
	}

	// void wxRect::SetY(int y)
	static int _bind_SetY(lua_State *L) {
		if (!_lg_typecheck_SetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect::SetY(int y) function, expected prototype:\nvoid wxRect::SetY(int y)\nClass arguments details:\n");
		}

		int y=(int)lua_tointeger(L,2);

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect::SetY(int)");
		}
		self->SetY(y);

		return 0;
	}

	// wxRect wxRect::Union(const wxRect & rect) const
	static int _bind_Union_overload_1(lua_State *L) {
		if (!_lg_typecheck_Union_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRect::Union(const wxRect & rect) const function, expected prototype:\nwxRect wxRect::Union(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Union function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRect::Union(const wxRect &) const");
		}
		wxRect stack_lret = self->Union(rect);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxRect & wxRect::Union(const wxRect & rect)
	static int _bind_Union_overload_2(lua_State *L) {
		if (!_lg_typecheck_Union_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::Union(const wxRect & rect) function, expected prototype:\nwxRect & wxRect::Union(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect::Union function");
		}
		const wxRect & rect=*rect_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::Union(const wxRect &)");
		}
		const wxRect* lret = &self->Union(rect);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRect::Union
	static int _bind_Union(lua_State *L) {
		if (_lg_typecheck_Union_overload_1(L)) return _bind_Union_overload_1(L);
		if (_lg_typecheck_Union_overload_2(L)) return _bind_Union_overload_2(L);

		luaL_error(L, "error in function Union, cannot match any of the overloads for function Union:\n  Union(const wxRect &)\n  Union(const wxRect &)\n");
		return 0;
	}


	// Operator binds:
	// wxRect & wxRect::operator+=(const wxRect & r)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::operator+=(const wxRect & r) function, expected prototype:\nwxRect & wxRect::operator+=(const wxRect & r)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* r_ptr=(Luna< wxRect >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxRect::operator+= function");
		}
		const wxRect & r=*r_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::operator+=(const wxRect &)");
		}
		const wxRect* lret = &self->operator+=(r);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxRect & wxRect::operator*=(const wxRect & r)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect & wxRect::operator*=(const wxRect & r) function, expected prototype:\nwxRect & wxRect::operator*=(const wxRect & r)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* r_ptr=(Luna< wxRect >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxRect::operator*= function");
		}
		const wxRect & r=*r_ptr;

		wxRect* self=(Luna< wxRect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect & wxRect::operator*=(const wxRect &)");
		}
		const wxRect* lret = &self->operator*=(r);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}


};

wxRect* LunaTraits< wxRect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRect::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRect >::_bind_dtor(wxRect* obj) {
	delete obj;
}

const char LunaTraits< wxRect >::className[] = "wxRect";
const char LunaTraits< wxRect >::fullName[] = "wxRect";
const char LunaTraits< wxRect >::moduleName[] = "wx";
const char* LunaTraits< wxRect >::parents[] = {0};
const int LunaTraits< wxRect >::hash = 20234418;
const int LunaTraits< wxRect >::uniqueIDs[] = {20234418,0};

luna_RegType LunaTraits< wxRect >::methods[] = {
	{"CentreIn", &luna_wrapper_wxRect::_bind_CentreIn},
	{"CenterIn", &luna_wrapper_wxRect::_bind_CenterIn},
	{"Contains", &luna_wrapper_wxRect::_bind_Contains},
	{"Deflate", &luna_wrapper_wxRect::_bind_Deflate},
	{"GetBottom", &luna_wrapper_wxRect::_bind_GetBottom},
	{"GetBottomLeft", &luna_wrapper_wxRect::_bind_GetBottomLeft},
	{"GetBottomRight", &luna_wrapper_wxRect::_bind_GetBottomRight},
	{"GetHeight", &luna_wrapper_wxRect::_bind_GetHeight},
	{"GetLeft", &luna_wrapper_wxRect::_bind_GetLeft},
	{"GetPosition", &luna_wrapper_wxRect::_bind_GetPosition},
	{"GetRight", &luna_wrapper_wxRect::_bind_GetRight},
	{"GetSize", &luna_wrapper_wxRect::_bind_GetSize},
	{"GetTop", &luna_wrapper_wxRect::_bind_GetTop},
	{"GetTopLeft", &luna_wrapper_wxRect::_bind_GetTopLeft},
	{"GetTopRight", &luna_wrapper_wxRect::_bind_GetTopRight},
	{"GetWidth", &luna_wrapper_wxRect::_bind_GetWidth},
	{"GetX", &luna_wrapper_wxRect::_bind_GetX},
	{"GetY", &luna_wrapper_wxRect::_bind_GetY},
	{"Inflate", &luna_wrapper_wxRect::_bind_Inflate},
	{"Intersect", &luna_wrapper_wxRect::_bind_Intersect},
	{"Intersects", &luna_wrapper_wxRect::_bind_Intersects},
	{"IsEmpty", &luna_wrapper_wxRect::_bind_IsEmpty},
	{"Offset", &luna_wrapper_wxRect::_bind_Offset},
	{"SetHeight", &luna_wrapper_wxRect::_bind_SetHeight},
	{"SetSize", &luna_wrapper_wxRect::_bind_SetSize},
	{"SetWidth", &luna_wrapper_wxRect::_bind_SetWidth},
	{"SetX", &luna_wrapper_wxRect::_bind_SetX},
	{"SetY", &luna_wrapper_wxRect::_bind_SetY},
	{"Union", &luna_wrapper_wxRect::_bind_Union},
	{"op_add", &luna_wrapper_wxRect::_bind_op_add},
	{"op_mult", &luna_wrapper_wxRect::_bind_op_mult},
	{"dynCast", &luna_wrapper_wxRect::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRect::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRect >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRect >::enumValues[] = {
	{0,0}
};


