#include <plug_common.h>

class luna_wrapper_wxRect2DInt {
public:
	typedef Luna< wxRect2DInt > luna_t;

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

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRect2DInt");
		
		return luna_dynamicCast(L,converters,"wxRect2DInt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81619599) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81619599) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15778700) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLeftTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLeftTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLeftBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLeftBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRightTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRightTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRightBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRightBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCentre(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCentre(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCentreTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOutCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOutcode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HaveEqualSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Offset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConstrainTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Interpolate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15778700) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,15778700)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15778700) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,15778700)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateUnion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		return true;
	}


	// Constructor binds:
	// wxRect2DInt::wxRect2DInt()
	static wxRect2DInt* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt() function, expected prototype:\nwxRect2DInt::wxRect2DInt()\nClass arguments details:\n");
		}


		return new wxRect2DInt();
	}

	// wxRect2DInt::wxRect2DInt(const wxRect & r)
	static wxRect2DInt* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt(const wxRect & r) function, expected prototype:\nwxRect2DInt::wxRect2DInt(const wxRect & r)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* r_ptr=(Luna< wxRect >::check(L,1));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxRect2DInt::wxRect2DInt function");
		}
		const wxRect & r=*r_ptr;

		return new wxRect2DInt(r);
	}

	// wxRect2DInt::wxRect2DInt(int x, int y, int w, int h)
	static wxRect2DInt* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt(int x, int y, int w, int h) function, expected prototype:\nwxRect2DInt::wxRect2DInt(int x, int y, int w, int h)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int w=(int)lua_tointeger(L,3);
		int h=(int)lua_tointeger(L,4);

		return new wxRect2DInt(x, y, w, h);
	}

	// wxRect2DInt::wxRect2DInt(const wxPoint2DInt & topLeft, const wxPoint2DInt & bottomRight)
	static wxRect2DInt* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt(const wxPoint2DInt & topLeft, const wxPoint2DInt & bottomRight) function, expected prototype:\nwxRect2DInt::wxRect2DInt(const wxPoint2DInt & topLeft, const wxPoint2DInt & bottomRight)\nClass arguments details:\narg 1 ID = 81619599\narg 2 ID = 81619599\n");
		}

		const wxPoint2DInt* topLeft_ptr=(Luna< wxPoint2DInt >::check(L,1));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxRect2DInt::wxRect2DInt function");
		}
		const wxPoint2DInt & topLeft=*topLeft_ptr;
		const wxPoint2DInt* bottomRight_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxRect2DInt::wxRect2DInt function");
		}
		const wxPoint2DInt & bottomRight=*bottomRight_ptr;

		return new wxRect2DInt(topLeft, bottomRight);
	}

	// wxRect2DInt::wxRect2DInt(const wxPoint2DInt & pos, const wxSize & size)
	static wxRect2DInt* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt(const wxPoint2DInt & pos, const wxSize & size) function, expected prototype:\nwxRect2DInt::wxRect2DInt(const wxPoint2DInt & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 81619599\narg 2 ID = 20268751\n");
		}

		const wxPoint2DInt* pos_ptr=(Luna< wxPoint2DInt >::check(L,1));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRect2DInt::wxRect2DInt function");
		}
		const wxPoint2DInt & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRect2DInt::wxRect2DInt function");
		}
		const wxSize & size=*size_ptr;

		return new wxRect2DInt(pos, size);
	}

	// wxRect2DInt::wxRect2DInt(const wxRect2DInt & rect)
	static wxRect2DInt* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt::wxRect2DInt(const wxRect2DInt & rect) function, expected prototype:\nwxRect2DInt::wxRect2DInt(const wxRect2DInt & rect)\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,1));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::wxRect2DInt function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		return new wxRect2DInt(rect);
	}

	// Overload binder for wxRect2DInt::wxRect2DInt
	static wxRect2DInt* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxRect2DInt, cannot match any of the overloads for function wxRect2DInt:\n  wxRect2DInt()\n  wxRect2DInt(const wxRect &)\n  wxRect2DInt(int, int, int, int)\n  wxRect2DInt(const wxPoint2DInt &, const wxPoint2DInt &)\n  wxRect2DInt(const wxPoint2DInt &, const wxSize &)\n  wxRect2DInt(const wxRect2DInt &)\n");
		return NULL;
	}


	// Function binds:
	// wxPoint2DInt wxRect2DInt::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetPosition() function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetPosition()\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetPosition()");
		}
		wxPoint2DInt stack_lret = self->GetPosition();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRect2DInt::GetSize()
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRect2DInt::GetSize() function, expected prototype:\nwxSize wxRect2DInt::GetSize()\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRect2DInt::GetSize()");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxRect2DInt::GetLeft() const
	static int _bind_GetLeft(lua_State *L) {
		if (!_lg_typecheck_GetLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect2DInt::GetLeft() const function, expected prototype:\nint wxRect2DInt::GetLeft() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect2DInt::GetLeft() const");
		}
		int lret = self->GetLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DInt::SetLeft(int n)
	static int _bind_SetLeft(lua_State *L) {
		if (!_lg_typecheck_SetLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetLeft(int n) function, expected prototype:\nvoid wxRect2DInt::SetLeft(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetLeft(int)");
		}
		self->SetLeft(n);

		return 0;
	}

	// void wxRect2DInt::MoveLeftTo(int n)
	static int _bind_MoveLeftTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveLeftTo(int n) function, expected prototype:\nvoid wxRect2DInt::MoveLeftTo(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveLeftTo(int)");
		}
		self->MoveLeftTo(n);

		return 0;
	}

	// int wxRect2DInt::GetTop() const
	static int _bind_GetTop(lua_State *L) {
		if (!_lg_typecheck_GetTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect2DInt::GetTop() const function, expected prototype:\nint wxRect2DInt::GetTop() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect2DInt::GetTop() const");
		}
		int lret = self->GetTop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DInt::SetTop(int n)
	static int _bind_SetTop(lua_State *L) {
		if (!_lg_typecheck_SetTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetTop(int n) function, expected prototype:\nvoid wxRect2DInt::SetTop(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetTop(int)");
		}
		self->SetTop(n);

		return 0;
	}

	// void wxRect2DInt::MoveTopTo(int n)
	static int _bind_MoveTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveTopTo(int n) function, expected prototype:\nvoid wxRect2DInt::MoveTopTo(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveTopTo(int)");
		}
		self->MoveTopTo(n);

		return 0;
	}

	// int wxRect2DInt::GetBottom() const
	static int _bind_GetBottom(lua_State *L) {
		if (!_lg_typecheck_GetBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect2DInt::GetBottom() const function, expected prototype:\nint wxRect2DInt::GetBottom() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect2DInt::GetBottom() const");
		}
		int lret = self->GetBottom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DInt::SetBottom(int n)
	static int _bind_SetBottom(lua_State *L) {
		if (!_lg_typecheck_SetBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetBottom(int n) function, expected prototype:\nvoid wxRect2DInt::SetBottom(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetBottom(int)");
		}
		self->SetBottom(n);

		return 0;
	}

	// void wxRect2DInt::MoveBottomTo(int n)
	static int _bind_MoveBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveBottomTo(int n) function, expected prototype:\nvoid wxRect2DInt::MoveBottomTo(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveBottomTo(int)");
		}
		self->MoveBottomTo(n);

		return 0;
	}

	// int wxRect2DInt::GetRight() const
	static int _bind_GetRight(lua_State *L) {
		if (!_lg_typecheck_GetRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRect2DInt::GetRight() const function, expected prototype:\nint wxRect2DInt::GetRight() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRect2DInt::GetRight() const");
		}
		int lret = self->GetRight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DInt::SetRight(int n)
	static int _bind_SetRight(lua_State *L) {
		if (!_lg_typecheck_SetRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetRight(int n) function, expected prototype:\nvoid wxRect2DInt::SetRight(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetRight(int)");
		}
		self->SetRight(n);

		return 0;
	}

	// void wxRect2DInt::MoveRightTo(int n)
	static int _bind_MoveRightTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveRightTo(int n) function, expected prototype:\nvoid wxRect2DInt::MoveRightTo(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveRightTo(int)");
		}
		self->MoveRightTo(n);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::GetLeftTop() const
	static int _bind_GetLeftTop(lua_State *L) {
		if (!_lg_typecheck_GetLeftTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetLeftTop() const function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetLeftTop() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetLeftTop() const");
		}
		wxPoint2DInt stack_lret = self->GetLeftTop();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::SetLeftTop(const wxPoint2DInt & pt)
	static int _bind_SetLeftTop(lua_State *L) {
		if (!_lg_typecheck_SetLeftTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetLeftTop(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::SetLeftTop(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::SetLeftTop function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetLeftTop(const wxPoint2DInt &)");
		}
		self->SetLeftTop(pt);

		return 0;
	}

	// void wxRect2DInt::MoveLeftTopTo(const wxPoint2DInt & pt)
	static int _bind_MoveLeftTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveLeftTopTo(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::MoveLeftTopTo(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::MoveLeftTopTo function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveLeftTopTo(const wxPoint2DInt &)");
		}
		self->MoveLeftTopTo(pt);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::GetLeftBottom() const
	static int _bind_GetLeftBottom(lua_State *L) {
		if (!_lg_typecheck_GetLeftBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetLeftBottom() const function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetLeftBottom() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetLeftBottom() const");
		}
		wxPoint2DInt stack_lret = self->GetLeftBottom();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::SetLeftBottom(const wxPoint2DInt & pt)
	static int _bind_SetLeftBottom(lua_State *L) {
		if (!_lg_typecheck_SetLeftBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetLeftBottom(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::SetLeftBottom(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::SetLeftBottom function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetLeftBottom(const wxPoint2DInt &)");
		}
		self->SetLeftBottom(pt);

		return 0;
	}

	// void wxRect2DInt::MoveLeftBottomTo(const wxPoint2DInt & pt)
	static int _bind_MoveLeftBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveLeftBottomTo(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::MoveLeftBottomTo(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::MoveLeftBottomTo function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveLeftBottomTo(const wxPoint2DInt &)");
		}
		self->MoveLeftBottomTo(pt);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::GetRightTop() const
	static int _bind_GetRightTop(lua_State *L) {
		if (!_lg_typecheck_GetRightTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetRightTop() const function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetRightTop() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetRightTop() const");
		}
		wxPoint2DInt stack_lret = self->GetRightTop();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::SetRightTop(const wxPoint2DInt & pt)
	static int _bind_SetRightTop(lua_State *L) {
		if (!_lg_typecheck_SetRightTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetRightTop(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::SetRightTop(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::SetRightTop function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetRightTop(const wxPoint2DInt &)");
		}
		self->SetRightTop(pt);

		return 0;
	}

	// void wxRect2DInt::MoveRightTopTo(const wxPoint2DInt & pt)
	static int _bind_MoveRightTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveRightTopTo(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::MoveRightTopTo(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::MoveRightTopTo function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveRightTopTo(const wxPoint2DInt &)");
		}
		self->MoveRightTopTo(pt);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::GetRightBottom() const
	static int _bind_GetRightBottom(lua_State *L) {
		if (!_lg_typecheck_GetRightBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetRightBottom() const function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetRightBottom() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetRightBottom() const");
		}
		wxPoint2DInt stack_lret = self->GetRightBottom();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::SetRightBottom(const wxPoint2DInt & pt)
	static int _bind_SetRightBottom(lua_State *L) {
		if (!_lg_typecheck_SetRightBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetRightBottom(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::SetRightBottom(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::SetRightBottom function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetRightBottom(const wxPoint2DInt &)");
		}
		self->SetRightBottom(pt);

		return 0;
	}

	// void wxRect2DInt::MoveRightBottomTo(const wxPoint2DInt & pt)
	static int _bind_MoveRightBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveRightBottomTo(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::MoveRightBottomTo(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::MoveRightBottomTo function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveRightBottomTo(const wxPoint2DInt &)");
		}
		self->MoveRightBottomTo(pt);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::GetCentre() const
	static int _bind_GetCentre(lua_State *L) {
		if (!_lg_typecheck_GetCentre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::GetCentre() const function, expected prototype:\nwxPoint2DInt wxRect2DInt::GetCentre() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::GetCentre() const");
		}
		wxPoint2DInt stack_lret = self->GetCentre();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::SetCentre(const wxPoint2DInt & pt)
	static int _bind_SetCentre(lua_State *L) {
		if (!_lg_typecheck_SetCentre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::SetCentre(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::SetCentre(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::SetCentre function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::SetCentre(const wxPoint2DInt &)");
		}
		self->SetCentre(pt);

		return 0;
	}

	// void wxRect2DInt::MoveCentreTo(const wxPoint2DInt & pt)
	static int _bind_MoveCentreTo(lua_State *L) {
		if (!_lg_typecheck_MoveCentreTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::MoveCentreTo(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::MoveCentreTo(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::MoveCentreTo function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::MoveCentreTo(const wxPoint2DInt &)");
		}
		self->MoveCentreTo(pt);

		return 0;
	}

	// wxOutCode wxRect2DInt::GetOutCode(const wxPoint2DInt & pt) const
	static int _bind_GetOutCode(lua_State *L) {
		if (!_lg_typecheck_GetOutCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutCode wxRect2DInt::GetOutCode(const wxPoint2DInt & pt) const function, expected prototype:\nwxOutCode wxRect2DInt::GetOutCode(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::GetOutCode function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutCode wxRect2DInt::GetOutCode(const wxPoint2DInt &) const");
		}
		wxOutCode lret = self->GetOutCode(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutCode wxRect2DInt::GetOutcode(const wxPoint2DInt & pt) const
	static int _bind_GetOutcode(lua_State *L) {
		if (!_lg_typecheck_GetOutcode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutCode wxRect2DInt::GetOutcode(const wxPoint2DInt & pt) const function, expected prototype:\nwxOutCode wxRect2DInt::GetOutcode(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::GetOutcode function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutCode wxRect2DInt::GetOutcode(const wxPoint2DInt &) const");
		}
		wxOutCode lret = self->GetOutcode(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRect2DInt::Contains(const wxPoint2DInt & pt) const
	static int _bind_Contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::Contains(const wxPoint2DInt & pt) const function, expected prototype:\nbool wxRect2DInt::Contains(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::Contains function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::Contains(const wxPoint2DInt &) const");
		}
		bool lret = self->Contains(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DInt::Contains(const wxRect2DInt & rect) const
	static int _bind_Contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::Contains(const wxRect2DInt & rect) const function, expected prototype:\nbool wxRect2DInt::Contains(const wxRect2DInt & rect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::Contains function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::Contains(const wxRect2DInt &) const");
		}
		bool lret = self->Contains(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRect2DInt::Contains
	static int _bind_Contains(lua_State *L) {
		if (_lg_typecheck_Contains_overload_1(L)) return _bind_Contains_overload_1(L);
		if (_lg_typecheck_Contains_overload_2(L)) return _bind_Contains_overload_2(L);

		luaL_error(L, "error in function Contains, cannot match any of the overloads for function Contains:\n  Contains(const wxPoint2DInt &)\n  Contains(const wxRect2DInt &)\n");
		return 0;
	}

	// bool wxRect2DInt::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::IsEmpty() const function, expected prototype:\nbool wxRect2DInt::IsEmpty() const\nClass arguments details:\n");
		}


		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DInt::HaveEqualSize(const wxRect2DInt & rect) const
	static int _bind_HaveEqualSize(lua_State *L) {
		if (!_lg_typecheck_HaveEqualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::HaveEqualSize(const wxRect2DInt & rect) const function, expected prototype:\nbool wxRect2DInt::HaveEqualSize(const wxRect2DInt & rect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::HaveEqualSize function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::HaveEqualSize(const wxRect2DInt &) const");
		}
		bool lret = self->HaveEqualSize(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRect2DInt::Inset(int x, int y)
	static int _bind_Inset_overload_1(lua_State *L) {
		if (!_lg_typecheck_Inset_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Inset(int x, int y) function, expected prototype:\nvoid wxRect2DInt::Inset(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Inset(int, int)");
		}
		self->Inset(x, y);

		return 0;
	}

	// void wxRect2DInt::Inset(int left, int top, int right, int bottom)
	static int _bind_Inset_overload_2(lua_State *L) {
		if (!_lg_typecheck_Inset_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Inset(int left, int top, int right, int bottom) function, expected prototype:\nvoid wxRect2DInt::Inset(int left, int top, int right, int bottom)\nClass arguments details:\n");
		}

		int left=(int)lua_tointeger(L,2);
		int top=(int)lua_tointeger(L,3);
		int right=(int)lua_tointeger(L,4);
		int bottom=(int)lua_tointeger(L,5);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Inset(int, int, int, int)");
		}
		self->Inset(left, top, right, bottom);

		return 0;
	}

	// Overload binder for wxRect2DInt::Inset
	static int _bind_Inset(lua_State *L) {
		if (_lg_typecheck_Inset_overload_1(L)) return _bind_Inset_overload_1(L);
		if (_lg_typecheck_Inset_overload_2(L)) return _bind_Inset_overload_2(L);

		luaL_error(L, "error in function Inset, cannot match any of the overloads for function Inset:\n  Inset(int, int)\n  Inset(int, int, int, int)\n");
		return 0;
	}

	// void wxRect2DInt::Offset(const wxPoint2DInt & pt)
	static int _bind_Offset(lua_State *L) {
		if (!_lg_typecheck_Offset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Offset(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::Offset(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::Offset function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Offset(const wxPoint2DInt &)");
		}
		self->Offset(pt);

		return 0;
	}

	// void wxRect2DInt::ConstrainTo(const wxRect2DInt & rect)
	static int _bind_ConstrainTo(lua_State *L) {
		if (!_lg_typecheck_ConstrainTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::ConstrainTo(const wxRect2DInt & rect) function, expected prototype:\nvoid wxRect2DInt::ConstrainTo(const wxRect2DInt & rect)\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::ConstrainTo function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::ConstrainTo(const wxRect2DInt &)");
		}
		self->ConstrainTo(rect);

		return 0;
	}

	// wxPoint2DInt wxRect2DInt::Interpolate(int widthfactor, int heightfactor)
	static int _bind_Interpolate(lua_State *L) {
		if (!_lg_typecheck_Interpolate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxRect2DInt::Interpolate(int widthfactor, int heightfactor) function, expected prototype:\nwxPoint2DInt wxRect2DInt::Interpolate(int widthfactor, int heightfactor)\nClass arguments details:\n");
		}

		int widthfactor=(int)lua_tointeger(L,2);
		int heightfactor=(int)lua_tointeger(L,3);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxRect2DInt::Interpolate(int, int)");
		}
		wxPoint2DInt stack_lret = self->Interpolate(widthfactor, heightfactor);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::Intersect(const wxRect2DInt & otherRect)
	static int _bind_Intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Intersect(const wxRect2DInt & otherRect) function, expected prototype:\nvoid wxRect2DInt::Intersect(const wxRect2DInt & otherRect)\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* otherRect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DInt::Intersect function");
		}
		const wxRect2DInt & otherRect=*otherRect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Intersect(const wxRect2DInt &)");
		}
		self->Intersect(otherRect);

		return 0;
	}

	// static void wxRect2DInt::Intersect(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest)
	static int _bind_Intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxRect2DInt::Intersect(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest) function, expected prototype:\nstatic void wxRect2DInt::Intersect(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest)\nClass arguments details:\narg 1 ID = 15778700\narg 2 ID = 15778700\narg 3 ID = 15778700\n");
		}

		const wxRect2DInt* src1_ptr=(Luna< wxRect2DInt >::check(L,1));
		if( !src1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src1 in wxRect2DInt::Intersect function");
		}
		const wxRect2DInt & src1=*src1_ptr;
		const wxRect2DInt* src2_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !src2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src2 in wxRect2DInt::Intersect function");
		}
		const wxRect2DInt & src2=*src2_ptr;
		wxRect2DInt* dest=(Luna< wxRect2DInt >::check(L,3));

		wxRect2DInt::Intersect(src1, src2, dest);

		return 0;
	}

	// Overload binder for wxRect2DInt::Intersect
	static int _bind_Intersect(lua_State *L) {
		if (_lg_typecheck_Intersect_overload_1(L)) return _bind_Intersect_overload_1(L);
		if (_lg_typecheck_Intersect_overload_2(L)) return _bind_Intersect_overload_2(L);

		luaL_error(L, "error in function Intersect, cannot match any of the overloads for function Intersect:\n  Intersect(const wxRect2DInt &)\n  Intersect(const wxRect2DInt &, const wxRect2DInt &, wxRect2DInt *)\n");
		return 0;
	}

	// wxRect2DInt wxRect2DInt::CreateIntersection(const wxRect2DInt & otherRect) const
	static int _bind_CreateIntersection(lua_State *L) {
		if (!_lg_typecheck_CreateIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxRect2DInt::CreateIntersection(const wxRect2DInt & otherRect) const function, expected prototype:\nwxRect2DInt wxRect2DInt::CreateIntersection(const wxRect2DInt & otherRect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* otherRect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DInt::CreateIntersection function");
		}
		const wxRect2DInt & otherRect=*otherRect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DInt wxRect2DInt::CreateIntersection(const wxRect2DInt &) const");
		}
		wxRect2DInt stack_lret = self->CreateIntersection(otherRect);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// bool wxRect2DInt::Intersects(const wxRect2DInt & rect) const
	static int _bind_Intersects(lua_State *L) {
		if (!_lg_typecheck_Intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::Intersects(const wxRect2DInt & rect) const function, expected prototype:\nbool wxRect2DInt::Intersects(const wxRect2DInt & rect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::Intersects function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::Intersects(const wxRect2DInt &) const");
		}
		bool lret = self->Intersects(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRect2DInt::Union(const wxRect2DInt & otherRect)
	static int _bind_Union_overload_1(lua_State *L) {
		if (!_lg_typecheck_Union_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Union(const wxRect2DInt & otherRect) function, expected prototype:\nvoid wxRect2DInt::Union(const wxRect2DInt & otherRect)\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* otherRect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DInt::Union function");
		}
		const wxRect2DInt & otherRect=*otherRect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Union(const wxRect2DInt &)");
		}
		self->Union(otherRect);

		return 0;
	}

	// void wxRect2DInt::Union(const wxPoint2DInt & pt)
	static int _bind_Union_overload_2(lua_State *L) {
		if (!_lg_typecheck_Union_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Union(const wxPoint2DInt & pt) function, expected prototype:\nvoid wxRect2DInt::Union(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DInt::Union function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Union(const wxPoint2DInt &)");
		}
		self->Union(pt);

		return 0;
	}

	// static void wxRect2DInt::Union(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest)
	static int _bind_Union_overload_3(lua_State *L) {
		if (!_lg_typecheck_Union_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxRect2DInt::Union(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest) function, expected prototype:\nstatic void wxRect2DInt::Union(const wxRect2DInt & src1, const wxRect2DInt & src2, wxRect2DInt * dest)\nClass arguments details:\narg 1 ID = 15778700\narg 2 ID = 15778700\narg 3 ID = 15778700\n");
		}

		const wxRect2DInt* src1_ptr=(Luna< wxRect2DInt >::check(L,1));
		if( !src1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src1 in wxRect2DInt::Union function");
		}
		const wxRect2DInt & src1=*src1_ptr;
		const wxRect2DInt* src2_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !src2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src2 in wxRect2DInt::Union function");
		}
		const wxRect2DInt & src2=*src2_ptr;
		wxRect2DInt* dest=(Luna< wxRect2DInt >::check(L,3));

		wxRect2DInt::Union(src1, src2, dest);

		return 0;
	}

	// Overload binder for wxRect2DInt::Union
	static int _bind_Union(lua_State *L) {
		if (_lg_typecheck_Union_overload_1(L)) return _bind_Union_overload_1(L);
		if (_lg_typecheck_Union_overload_2(L)) return _bind_Union_overload_2(L);
		if (_lg_typecheck_Union_overload_3(L)) return _bind_Union_overload_3(L);

		luaL_error(L, "error in function Union, cannot match any of the overloads for function Union:\n  Union(const wxRect2DInt &)\n  Union(const wxPoint2DInt &)\n  Union(const wxRect2DInt &, const wxRect2DInt &, wxRect2DInt *)\n");
		return 0;
	}

	// wxRect2DInt wxRect2DInt::CreateUnion(const wxRect2DInt & otherRect) const
	static int _bind_CreateUnion(lua_State *L) {
		if (!_lg_typecheck_CreateUnion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxRect2DInt::CreateUnion(const wxRect2DInt & otherRect) const function, expected prototype:\nwxRect2DInt wxRect2DInt::CreateUnion(const wxRect2DInt & otherRect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* otherRect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DInt::CreateUnion function");
		}
		const wxRect2DInt & otherRect=*otherRect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DInt wxRect2DInt::CreateUnion(const wxRect2DInt &) const");
		}
		wxRect2DInt stack_lret = self->CreateUnion(otherRect);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DInt::Scale(int f)
	static int _bind_Scale_overload_1(lua_State *L) {
		if (!_lg_typecheck_Scale_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Scale(int f) function, expected prototype:\nvoid wxRect2DInt::Scale(int f)\nClass arguments details:\n");
		}

		int f=(int)lua_tointeger(L,2);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Scale(int)");
		}
		self->Scale(f);

		return 0;
	}

	// void wxRect2DInt::Scale(int num, int denum)
	static int _bind_Scale_overload_2(lua_State *L) {
		if (!_lg_typecheck_Scale_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DInt::Scale(int num, int denum) function, expected prototype:\nvoid wxRect2DInt::Scale(int num, int denum)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);
		int denum=(int)lua_tointeger(L,3);

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DInt::Scale(int, int)");
		}
		self->Scale(num, denum);

		return 0;
	}

	// Overload binder for wxRect2DInt::Scale
	static int _bind_Scale(lua_State *L) {
		if (_lg_typecheck_Scale_overload_1(L)) return _bind_Scale_overload_1(L);
		if (_lg_typecheck_Scale_overload_2(L)) return _bind_Scale_overload_2(L);

		luaL_error(L, "error in function Scale, cannot match any of the overloads for function Scale:\n  Scale(int)\n  Scale(int, int)\n");
		return 0;
	}


	// Operator binds:
	// bool wxRect2DInt::operator==(const wxRect2DInt & rect) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::operator==(const wxRect2DInt & rect) const function, expected prototype:\nbool wxRect2DInt::operator==(const wxRect2DInt & rect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::operator== function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::operator==(const wxRect2DInt &) const");
		}
		bool lret = self->operator==(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DInt::operator!=(const wxRect2DInt & rect) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DInt::operator!=(const wxRect2DInt & rect) const function, expected prototype:\nbool wxRect2DInt::operator!=(const wxRect2DInt & rect) const\nClass arguments details:\narg 1 ID = 15778700\n");
		}

		const wxRect2DInt* rect_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DInt::operator!= function");
		}
		const wxRect2DInt & rect=*rect_ptr;

		wxRect2DInt* self=(Luna< wxRect2DInt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DInt::operator!=(const wxRect2DInt &) const");
		}
		bool lret = self->operator!=(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxRect2DInt* LunaTraits< wxRect2DInt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRect2DInt::_bind_ctor(L);
}

void LunaTraits< wxRect2DInt >::_bind_dtor(wxRect2DInt* obj) {
	delete obj;
}

const char LunaTraits< wxRect2DInt >::className[] = "wxRect2DInt";
const char LunaTraits< wxRect2DInt >::fullName[] = "wxRect2DInt";
const char LunaTraits< wxRect2DInt >::moduleName[] = "wx";
const char* LunaTraits< wxRect2DInt >::parents[] = {0};
const int LunaTraits< wxRect2DInt >::hash = 15778700;
const int LunaTraits< wxRect2DInt >::uniqueIDs[] = {15778700,0};

luna_RegType LunaTraits< wxRect2DInt >::methods[] = {
	{"GetPosition", &luna_wrapper_wxRect2DInt::_bind_GetPosition},
	{"GetSize", &luna_wrapper_wxRect2DInt::_bind_GetSize},
	{"GetLeft", &luna_wrapper_wxRect2DInt::_bind_GetLeft},
	{"SetLeft", &luna_wrapper_wxRect2DInt::_bind_SetLeft},
	{"MoveLeftTo", &luna_wrapper_wxRect2DInt::_bind_MoveLeftTo},
	{"GetTop", &luna_wrapper_wxRect2DInt::_bind_GetTop},
	{"SetTop", &luna_wrapper_wxRect2DInt::_bind_SetTop},
	{"MoveTopTo", &luna_wrapper_wxRect2DInt::_bind_MoveTopTo},
	{"GetBottom", &luna_wrapper_wxRect2DInt::_bind_GetBottom},
	{"SetBottom", &luna_wrapper_wxRect2DInt::_bind_SetBottom},
	{"MoveBottomTo", &luna_wrapper_wxRect2DInt::_bind_MoveBottomTo},
	{"GetRight", &luna_wrapper_wxRect2DInt::_bind_GetRight},
	{"SetRight", &luna_wrapper_wxRect2DInt::_bind_SetRight},
	{"MoveRightTo", &luna_wrapper_wxRect2DInt::_bind_MoveRightTo},
	{"GetLeftTop", &luna_wrapper_wxRect2DInt::_bind_GetLeftTop},
	{"SetLeftTop", &luna_wrapper_wxRect2DInt::_bind_SetLeftTop},
	{"MoveLeftTopTo", &luna_wrapper_wxRect2DInt::_bind_MoveLeftTopTo},
	{"GetLeftBottom", &luna_wrapper_wxRect2DInt::_bind_GetLeftBottom},
	{"SetLeftBottom", &luna_wrapper_wxRect2DInt::_bind_SetLeftBottom},
	{"MoveLeftBottomTo", &luna_wrapper_wxRect2DInt::_bind_MoveLeftBottomTo},
	{"GetRightTop", &luna_wrapper_wxRect2DInt::_bind_GetRightTop},
	{"SetRightTop", &luna_wrapper_wxRect2DInt::_bind_SetRightTop},
	{"MoveRightTopTo", &luna_wrapper_wxRect2DInt::_bind_MoveRightTopTo},
	{"GetRightBottom", &luna_wrapper_wxRect2DInt::_bind_GetRightBottom},
	{"SetRightBottom", &luna_wrapper_wxRect2DInt::_bind_SetRightBottom},
	{"MoveRightBottomTo", &luna_wrapper_wxRect2DInt::_bind_MoveRightBottomTo},
	{"GetCentre", &luna_wrapper_wxRect2DInt::_bind_GetCentre},
	{"SetCentre", &luna_wrapper_wxRect2DInt::_bind_SetCentre},
	{"MoveCentreTo", &luna_wrapper_wxRect2DInt::_bind_MoveCentreTo},
	{"GetOutCode", &luna_wrapper_wxRect2DInt::_bind_GetOutCode},
	{"GetOutcode", &luna_wrapper_wxRect2DInt::_bind_GetOutcode},
	{"Contains", &luna_wrapper_wxRect2DInt::_bind_Contains},
	{"IsEmpty", &luna_wrapper_wxRect2DInt::_bind_IsEmpty},
	{"HaveEqualSize", &luna_wrapper_wxRect2DInt::_bind_HaveEqualSize},
	{"Inset", &luna_wrapper_wxRect2DInt::_bind_Inset},
	{"Offset", &luna_wrapper_wxRect2DInt::_bind_Offset},
	{"ConstrainTo", &luna_wrapper_wxRect2DInt::_bind_ConstrainTo},
	{"Interpolate", &luna_wrapper_wxRect2DInt::_bind_Interpolate},
	{"Intersect", &luna_wrapper_wxRect2DInt::_bind_Intersect},
	{"CreateIntersection", &luna_wrapper_wxRect2DInt::_bind_CreateIntersection},
	{"Intersects", &luna_wrapper_wxRect2DInt::_bind_Intersects},
	{"Union", &luna_wrapper_wxRect2DInt::_bind_Union},
	{"CreateUnion", &luna_wrapper_wxRect2DInt::_bind_CreateUnion},
	{"Scale", &luna_wrapper_wxRect2DInt::_bind_Scale},
	{"__eq", &luna_wrapper_wxRect2DInt::_bind___eq},
	{"op_neq", &luna_wrapper_wxRect2DInt::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxRect2DInt::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRect2DInt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRect2DInt >::enumValues[] = {
	{0,0}
};


