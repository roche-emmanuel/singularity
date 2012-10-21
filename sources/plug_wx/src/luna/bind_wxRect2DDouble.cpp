#include <plug_common.h>

class luna_wrapper_wxRect2DDouble {
public:
	typedef Luna< wxRect2DDouble > luna_t;

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

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRect2DDouble");
		
		return luna_dynamicCast(L,converters,"wxRect2DDouble",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLeftTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLeftTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLeftBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLeftBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveLeftBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRightTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRightTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightTopTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRightBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRightBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveRightBottomTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCentre(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCentre(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCentreTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOutCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOutcode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		if( (!dynamic_cast< wxPoint2DDouble* >(Luna< wxPoint2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HaveEqualSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Inset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Offset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConstrainTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,21099623)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		if( (!dynamic_cast< wxPoint2DDouble* >(Luna< wxPoint2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		if( (!dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,21099623)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< wxRect2DDouble* >(Luna< wxRect2DDouble >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateUnion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21099623) ) return false;
		return true;
	}


	// Constructor binds:
	// wxRect2DDouble::wxRect2DDouble()
	static wxRect2DDouble* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DDouble::wxRect2DDouble() function, expected prototype:\nwxRect2DDouble::wxRect2DDouble()\nClass arguments details:\n");
		}


		return new wxRect2DDouble();
	}

	// wxRect2DDouble::wxRect2DDouble(double x, double y, double w, double h)
	static wxRect2DDouble* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DDouble::wxRect2DDouble(double x, double y, double w, double h) function, expected prototype:\nwxRect2DDouble::wxRect2DDouble(double x, double y, double w, double h)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double w=(double)lua_tonumber(L,3);
		double h=(double)lua_tonumber(L,4);

		return new wxRect2DDouble(x, y, w, h);
	}

	// Overload binder for wxRect2DDouble::wxRect2DDouble
	static wxRect2DDouble* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRect2DDouble, cannot match any of the overloads for function wxRect2DDouble:\n  wxRect2DDouble()\n  wxRect2DDouble(double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// wxPoint2DDouble wxRect2DDouble::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetPosition() function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetPosition()\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetPosition()");
		}
		wxPoint2DDouble stack_lret = self->GetPosition();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRect2DDouble::GetSize()
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxRect2DDouble::GetSize() function, expected prototype:\nwxSize wxRect2DDouble::GetSize()\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxRect2DDouble::GetSize()");
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// double wxRect2DDouble::GetLeft() const
	static int _bind_GetLeft(lua_State *L) {
		if (!_lg_typecheck_GetLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxRect2DDouble::GetLeft() const function, expected prototype:\ndouble wxRect2DDouble::GetLeft() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxRect2DDouble::GetLeft() const");
		}
		double lret = self->GetLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DDouble::SetLeft(double n)
	static int _bind_SetLeft(lua_State *L) {
		if (!_lg_typecheck_SetLeft(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetLeft(double n) function, expected prototype:\nvoid wxRect2DDouble::SetLeft(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetLeft(double)");
		}
		self->SetLeft(n);

		return 0;
	}

	// void wxRect2DDouble::MoveLeftTo(double n)
	static int _bind_MoveLeftTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveLeftTo(double n) function, expected prototype:\nvoid wxRect2DDouble::MoveLeftTo(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveLeftTo(double)");
		}
		self->MoveLeftTo(n);

		return 0;
	}

	// double wxRect2DDouble::GetTop() const
	static int _bind_GetTop(lua_State *L) {
		if (!_lg_typecheck_GetTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxRect2DDouble::GetTop() const function, expected prototype:\ndouble wxRect2DDouble::GetTop() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxRect2DDouble::GetTop() const");
		}
		double lret = self->GetTop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DDouble::SetTop(double n)
	static int _bind_SetTop(lua_State *L) {
		if (!_lg_typecheck_SetTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetTop(double n) function, expected prototype:\nvoid wxRect2DDouble::SetTop(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetTop(double)");
		}
		self->SetTop(n);

		return 0;
	}

	// void wxRect2DDouble::MoveTopTo(double n)
	static int _bind_MoveTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveTopTo(double n) function, expected prototype:\nvoid wxRect2DDouble::MoveTopTo(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveTopTo(double)");
		}
		self->MoveTopTo(n);

		return 0;
	}

	// double wxRect2DDouble::GetBottom() const
	static int _bind_GetBottom(lua_State *L) {
		if (!_lg_typecheck_GetBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxRect2DDouble::GetBottom() const function, expected prototype:\ndouble wxRect2DDouble::GetBottom() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxRect2DDouble::GetBottom() const");
		}
		double lret = self->GetBottom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DDouble::SetBottom(double n)
	static int _bind_SetBottom(lua_State *L) {
		if (!_lg_typecheck_SetBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetBottom(double n) function, expected prototype:\nvoid wxRect2DDouble::SetBottom(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetBottom(double)");
		}
		self->SetBottom(n);

		return 0;
	}

	// void wxRect2DDouble::MoveBottomTo(double n)
	static int _bind_MoveBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveBottomTo(double n) function, expected prototype:\nvoid wxRect2DDouble::MoveBottomTo(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveBottomTo(double)");
		}
		self->MoveBottomTo(n);

		return 0;
	}

	// double wxRect2DDouble::GetRight() const
	static int _bind_GetRight(lua_State *L) {
		if (!_lg_typecheck_GetRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxRect2DDouble::GetRight() const function, expected prototype:\ndouble wxRect2DDouble::GetRight() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxRect2DDouble::GetRight() const");
		}
		double lret = self->GetRight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRect2DDouble::SetRight(double n)
	static int _bind_SetRight(lua_State *L) {
		if (!_lg_typecheck_SetRight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetRight(double n) function, expected prototype:\nvoid wxRect2DDouble::SetRight(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetRight(double)");
		}
		self->SetRight(n);

		return 0;
	}

	// void wxRect2DDouble::MoveRightTo(double n)
	static int _bind_MoveRightTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveRightTo(double n) function, expected prototype:\nvoid wxRect2DDouble::MoveRightTo(double n)\nClass arguments details:\n");
		}

		double n=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveRightTo(double)");
		}
		self->MoveRightTo(n);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::GetLeftTop() const
	static int _bind_GetLeftTop(lua_State *L) {
		if (!_lg_typecheck_GetLeftTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetLeftTop() const function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetLeftTop() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetLeftTop() const");
		}
		wxPoint2DDouble stack_lret = self->GetLeftTop();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::SetLeftTop(const wxPoint2DDouble & pt)
	static int _bind_SetLeftTop(lua_State *L) {
		if (!_lg_typecheck_SetLeftTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetLeftTop(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::SetLeftTop(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::SetLeftTop function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetLeftTop(const wxPoint2DDouble &)");
		}
		self->SetLeftTop(pt);

		return 0;
	}

	// void wxRect2DDouble::MoveLeftTopTo(const wxPoint2DDouble & pt)
	static int _bind_MoveLeftTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveLeftTopTo(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::MoveLeftTopTo(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::MoveLeftTopTo function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveLeftTopTo(const wxPoint2DDouble &)");
		}
		self->MoveLeftTopTo(pt);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::GetLeftBottom() const
	static int _bind_GetLeftBottom(lua_State *L) {
		if (!_lg_typecheck_GetLeftBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetLeftBottom() const function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetLeftBottom() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetLeftBottom() const");
		}
		wxPoint2DDouble stack_lret = self->GetLeftBottom();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::SetLeftBottom(const wxPoint2DDouble & pt)
	static int _bind_SetLeftBottom(lua_State *L) {
		if (!_lg_typecheck_SetLeftBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetLeftBottom(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::SetLeftBottom(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::SetLeftBottom function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetLeftBottom(const wxPoint2DDouble &)");
		}
		self->SetLeftBottom(pt);

		return 0;
	}

	// void wxRect2DDouble::MoveLeftBottomTo(const wxPoint2DDouble & pt)
	static int _bind_MoveLeftBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveLeftBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveLeftBottomTo(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::MoveLeftBottomTo(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::MoveLeftBottomTo function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveLeftBottomTo(const wxPoint2DDouble &)");
		}
		self->MoveLeftBottomTo(pt);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::GetRightTop() const
	static int _bind_GetRightTop(lua_State *L) {
		if (!_lg_typecheck_GetRightTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetRightTop() const function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetRightTop() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetRightTop() const");
		}
		wxPoint2DDouble stack_lret = self->GetRightTop();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::SetRightTop(const wxPoint2DDouble & pt)
	static int _bind_SetRightTop(lua_State *L) {
		if (!_lg_typecheck_SetRightTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetRightTop(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::SetRightTop(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::SetRightTop function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetRightTop(const wxPoint2DDouble &)");
		}
		self->SetRightTop(pt);

		return 0;
	}

	// void wxRect2DDouble::MoveRightTopTo(const wxPoint2DDouble & pt)
	static int _bind_MoveRightTopTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightTopTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveRightTopTo(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::MoveRightTopTo(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::MoveRightTopTo function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveRightTopTo(const wxPoint2DDouble &)");
		}
		self->MoveRightTopTo(pt);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::GetRightBottom() const
	static int _bind_GetRightBottom(lua_State *L) {
		if (!_lg_typecheck_GetRightBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetRightBottom() const function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetRightBottom() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetRightBottom() const");
		}
		wxPoint2DDouble stack_lret = self->GetRightBottom();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::SetRightBottom(const wxPoint2DDouble & pt)
	static int _bind_SetRightBottom(lua_State *L) {
		if (!_lg_typecheck_SetRightBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetRightBottom(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::SetRightBottom(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::SetRightBottom function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetRightBottom(const wxPoint2DDouble &)");
		}
		self->SetRightBottom(pt);

		return 0;
	}

	// void wxRect2DDouble::MoveRightBottomTo(const wxPoint2DDouble & pt)
	static int _bind_MoveRightBottomTo(lua_State *L) {
		if (!_lg_typecheck_MoveRightBottomTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveRightBottomTo(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::MoveRightBottomTo(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::MoveRightBottomTo function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveRightBottomTo(const wxPoint2DDouble &)");
		}
		self->MoveRightBottomTo(pt);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::GetCentre() const
	static int _bind_GetCentre(lua_State *L) {
		if (!_lg_typecheck_GetCentre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::GetCentre() const function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::GetCentre() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::GetCentre() const");
		}
		wxPoint2DDouble stack_lret = self->GetCentre();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::SetCentre(const wxPoint2DDouble & pt)
	static int _bind_SetCentre(lua_State *L) {
		if (!_lg_typecheck_SetCentre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::SetCentre(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::SetCentre(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::SetCentre function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::SetCentre(const wxPoint2DDouble &)");
		}
		self->SetCentre(pt);

		return 0;
	}

	// void wxRect2DDouble::MoveCentreTo(const wxPoint2DDouble & pt)
	static int _bind_MoveCentreTo(lua_State *L) {
		if (!_lg_typecheck_MoveCentreTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::MoveCentreTo(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::MoveCentreTo(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::MoveCentreTo function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::MoveCentreTo(const wxPoint2DDouble &)");
		}
		self->MoveCentreTo(pt);

		return 0;
	}

	// wxOutCode wxRect2DDouble::GetOutCode(const wxPoint2DDouble & pt) const
	static int _bind_GetOutCode(lua_State *L) {
		if (!_lg_typecheck_GetOutCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutCode wxRect2DDouble::GetOutCode(const wxPoint2DDouble & pt) const function, expected prototype:\nwxOutCode wxRect2DDouble::GetOutCode(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::GetOutCode function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutCode wxRect2DDouble::GetOutCode(const wxPoint2DDouble &) const");
		}
		wxOutCode lret = self->GetOutCode(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutCode wxRect2DDouble::GetOutcode(const wxPoint2DDouble & pt) const
	static int _bind_GetOutcode(lua_State *L) {
		if (!_lg_typecheck_GetOutcode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxOutCode wxRect2DDouble::GetOutcode(const wxPoint2DDouble & pt) const function, expected prototype:\nwxOutCode wxRect2DDouble::GetOutcode(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::GetOutcode function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxOutCode wxRect2DDouble::GetOutcode(const wxPoint2DDouble &) const");
		}
		wxOutCode lret = self->GetOutcode(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRect2DDouble::Contains(const wxPoint2DDouble & pt) const
	static int _bind_Contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::Contains(const wxPoint2DDouble & pt) const function, expected prototype:\nbool wxRect2DDouble::Contains(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::Contains function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::Contains(const wxPoint2DDouble &) const");
		}
		bool lret = self->Contains(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DDouble::Contains(const wxRect2DDouble & rect) const
	static int _bind_Contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::Contains(const wxRect2DDouble & rect) const function, expected prototype:\nbool wxRect2DDouble::Contains(const wxRect2DDouble & rect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::Contains function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::Contains(const wxRect2DDouble &) const");
		}
		bool lret = self->Contains(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRect2DDouble::Contains
	static int _bind_Contains(lua_State *L) {
		if (_lg_typecheck_Contains_overload_1(L)) return _bind_Contains_overload_1(L);
		if (_lg_typecheck_Contains_overload_2(L)) return _bind_Contains_overload_2(L);

		luaL_error(L, "error in function Contains, cannot match any of the overloads for function Contains:\n  Contains(const wxPoint2DDouble &)\n  Contains(const wxRect2DDouble &)\n");
		return 0;
	}

	// bool wxRect2DDouble::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::IsEmpty() const function, expected prototype:\nbool wxRect2DDouble::IsEmpty() const\nClass arguments details:\n");
		}


		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DDouble::HaveEqualSize(const wxRect2DDouble & rect) const
	static int _bind_HaveEqualSize(lua_State *L) {
		if (!_lg_typecheck_HaveEqualSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::HaveEqualSize(const wxRect2DDouble & rect) const function, expected prototype:\nbool wxRect2DDouble::HaveEqualSize(const wxRect2DDouble & rect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::HaveEqualSize function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::HaveEqualSize(const wxRect2DDouble &) const");
		}
		bool lret = self->HaveEqualSize(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRect2DDouble::Inset(double x, double y)
	static int _bind_Inset_overload_1(lua_State *L) {
		if (!_lg_typecheck_Inset_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Inset(double x, double y) function, expected prototype:\nvoid wxRect2DDouble::Inset(double x, double y)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Inset(double, double)");
		}
		self->Inset(x, y);

		return 0;
	}

	// void wxRect2DDouble::Inset(double left, double top, double right, double bottom)
	static int _bind_Inset_overload_2(lua_State *L) {
		if (!_lg_typecheck_Inset_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Inset(double left, double top, double right, double bottom) function, expected prototype:\nvoid wxRect2DDouble::Inset(double left, double top, double right, double bottom)\nClass arguments details:\n");
		}

		double left=(double)lua_tonumber(L,2);
		double top=(double)lua_tonumber(L,3);
		double right=(double)lua_tonumber(L,4);
		double bottom=(double)lua_tonumber(L,5);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Inset(double, double, double, double)");
		}
		self->Inset(left, top, right, bottom);

		return 0;
	}

	// Overload binder for wxRect2DDouble::Inset
	static int _bind_Inset(lua_State *L) {
		if (_lg_typecheck_Inset_overload_1(L)) return _bind_Inset_overload_1(L);
		if (_lg_typecheck_Inset_overload_2(L)) return _bind_Inset_overload_2(L);

		luaL_error(L, "error in function Inset, cannot match any of the overloads for function Inset:\n  Inset(double, double)\n  Inset(double, double, double, double)\n");
		return 0;
	}

	// void wxRect2DDouble::Offset(const wxPoint2DDouble & pt)
	static int _bind_Offset(lua_State *L) {
		if (!_lg_typecheck_Offset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Offset(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::Offset(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::Offset function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Offset(const wxPoint2DDouble &)");
		}
		self->Offset(pt);

		return 0;
	}

	// void wxRect2DDouble::ConstrainTo(const wxRect2DDouble & rect)
	static int _bind_ConstrainTo(lua_State *L) {
		if (!_lg_typecheck_ConstrainTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::ConstrainTo(const wxRect2DDouble & rect) function, expected prototype:\nvoid wxRect2DDouble::ConstrainTo(const wxRect2DDouble & rect)\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::ConstrainTo function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::ConstrainTo(const wxRect2DDouble &)");
		}
		self->ConstrainTo(rect);

		return 0;
	}

	// wxPoint2DDouble wxRect2DDouble::Interpolate(int widthfactor, int heightfactor)
	static int _bind_Interpolate(lua_State *L) {
		if (!_lg_typecheck_Interpolate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxRect2DDouble::Interpolate(int widthfactor, int heightfactor) function, expected prototype:\nwxPoint2DDouble wxRect2DDouble::Interpolate(int widthfactor, int heightfactor)\nClass arguments details:\n");
		}

		int widthfactor=(int)lua_tointeger(L,2);
		int heightfactor=(int)lua_tointeger(L,3);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxRect2DDouble::Interpolate(int, int)");
		}
		wxPoint2DDouble stack_lret = self->Interpolate(widthfactor, heightfactor);
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::Intersect(const wxRect2DDouble & otherRect)
	static int _bind_Intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Intersect(const wxRect2DDouble & otherRect) function, expected prototype:\nvoid wxRect2DDouble::Intersect(const wxRect2DDouble & otherRect)\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* otherRect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DDouble::Intersect function");
		}
		const wxRect2DDouble & otherRect=*otherRect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Intersect(const wxRect2DDouble &)");
		}
		self->Intersect(otherRect);

		return 0;
	}

	// static void wxRect2DDouble::Intersect(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest)
	static int _bind_Intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxRect2DDouble::Intersect(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest) function, expected prototype:\nstatic void wxRect2DDouble::Intersect(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest)\nClass arguments details:\narg 1 ID = 21099623\narg 2 ID = 21099623\narg 3 ID = 21099623\n");
		}

		const wxRect2DDouble* src1_ptr=(Luna< wxRect2DDouble >::check(L,1));
		if( !src1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src1 in wxRect2DDouble::Intersect function");
		}
		const wxRect2DDouble & src1=*src1_ptr;
		const wxRect2DDouble* src2_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !src2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src2 in wxRect2DDouble::Intersect function");
		}
		const wxRect2DDouble & src2=*src2_ptr;
		wxRect2DDouble* dest=(Luna< wxRect2DDouble >::check(L,3));

		wxRect2DDouble::Intersect(src1, src2, dest);

		return 0;
	}

	// Overload binder for wxRect2DDouble::Intersect
	static int _bind_Intersect(lua_State *L) {
		if (_lg_typecheck_Intersect_overload_1(L)) return _bind_Intersect_overload_1(L);
		if (_lg_typecheck_Intersect_overload_2(L)) return _bind_Intersect_overload_2(L);

		luaL_error(L, "error in function Intersect, cannot match any of the overloads for function Intersect:\n  Intersect(const wxRect2DDouble &)\n  Intersect(const wxRect2DDouble &, const wxRect2DDouble &, wxRect2DDouble *)\n");
		return 0;
	}

	// wxRect2DDouble wxRect2DDouble::CreateIntersection(const wxRect2DDouble & otherRect) const
	static int _bind_CreateIntersection(lua_State *L) {
		if (!_lg_typecheck_CreateIntersection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DDouble wxRect2DDouble::CreateIntersection(const wxRect2DDouble & otherRect) const function, expected prototype:\nwxRect2DDouble wxRect2DDouble::CreateIntersection(const wxRect2DDouble & otherRect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* otherRect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DDouble::CreateIntersection function");
		}
		const wxRect2DDouble & otherRect=*otherRect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DDouble wxRect2DDouble::CreateIntersection(const wxRect2DDouble &) const");
		}
		wxRect2DDouble stack_lret = self->CreateIntersection(otherRect);
		wxRect2DDouble* lret = new wxRect2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DDouble >::push(L,lret,true);

		return 1;
	}

	// bool wxRect2DDouble::Intersects(const wxRect2DDouble & rect) const
	static int _bind_Intersects(lua_State *L) {
		if (!_lg_typecheck_Intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::Intersects(const wxRect2DDouble & rect) const function, expected prototype:\nbool wxRect2DDouble::Intersects(const wxRect2DDouble & rect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::Intersects function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::Intersects(const wxRect2DDouble &) const");
		}
		bool lret = self->Intersects(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRect2DDouble::Union(const wxRect2DDouble & otherRect)
	static int _bind_Union_overload_1(lua_State *L) {
		if (!_lg_typecheck_Union_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Union(const wxRect2DDouble & otherRect) function, expected prototype:\nvoid wxRect2DDouble::Union(const wxRect2DDouble & otherRect)\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* otherRect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DDouble::Union function");
		}
		const wxRect2DDouble & otherRect=*otherRect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Union(const wxRect2DDouble &)");
		}
		self->Union(otherRect);

		return 0;
	}

	// void wxRect2DDouble::Union(const wxPoint2DDouble & pt)
	static int _bind_Union_overload_2(lua_State *L) {
		if (!_lg_typecheck_Union_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Union(const wxPoint2DDouble & pt) function, expected prototype:\nvoid wxRect2DDouble::Union(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRect2DDouble::Union function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Union(const wxPoint2DDouble &)");
		}
		self->Union(pt);

		return 0;
	}

	// static void wxRect2DDouble::Union(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest)
	static int _bind_Union_overload_3(lua_State *L) {
		if (!_lg_typecheck_Union_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxRect2DDouble::Union(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest) function, expected prototype:\nstatic void wxRect2DDouble::Union(const wxRect2DDouble & src1, const wxRect2DDouble & src2, wxRect2DDouble * dest)\nClass arguments details:\narg 1 ID = 21099623\narg 2 ID = 21099623\narg 3 ID = 21099623\n");
		}

		const wxRect2DDouble* src1_ptr=(Luna< wxRect2DDouble >::check(L,1));
		if( !src1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src1 in wxRect2DDouble::Union function");
		}
		const wxRect2DDouble & src1=*src1_ptr;
		const wxRect2DDouble* src2_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !src2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src2 in wxRect2DDouble::Union function");
		}
		const wxRect2DDouble & src2=*src2_ptr;
		wxRect2DDouble* dest=(Luna< wxRect2DDouble >::check(L,3));

		wxRect2DDouble::Union(src1, src2, dest);

		return 0;
	}

	// Overload binder for wxRect2DDouble::Union
	static int _bind_Union(lua_State *L) {
		if (_lg_typecheck_Union_overload_1(L)) return _bind_Union_overload_1(L);
		if (_lg_typecheck_Union_overload_2(L)) return _bind_Union_overload_2(L);
		if (_lg_typecheck_Union_overload_3(L)) return _bind_Union_overload_3(L);

		luaL_error(L, "error in function Union, cannot match any of the overloads for function Union:\n  Union(const wxRect2DDouble &)\n  Union(const wxPoint2DDouble &)\n  Union(const wxRect2DDouble &, const wxRect2DDouble &, wxRect2DDouble *)\n");
		return 0;
	}

	// wxRect2DDouble wxRect2DDouble::CreateUnion(const wxRect2DDouble & otherRect) const
	static int _bind_CreateUnion(lua_State *L) {
		if (!_lg_typecheck_CreateUnion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect2DDouble wxRect2DDouble::CreateUnion(const wxRect2DDouble & otherRect) const function, expected prototype:\nwxRect2DDouble wxRect2DDouble::CreateUnion(const wxRect2DDouble & otherRect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* otherRect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !otherRect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg otherRect in wxRect2DDouble::CreateUnion function");
		}
		const wxRect2DDouble & otherRect=*otherRect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect2DDouble wxRect2DDouble::CreateUnion(const wxRect2DDouble &) const");
		}
		wxRect2DDouble stack_lret = self->CreateUnion(otherRect);
		wxRect2DDouble* lret = new wxRect2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxRect2DDouble::Scale(double f)
	static int _bind_Scale_overload_1(lua_State *L) {
		if (!_lg_typecheck_Scale_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Scale(double f) function, expected prototype:\nvoid wxRect2DDouble::Scale(double f)\nClass arguments details:\n");
		}

		double f=(double)lua_tonumber(L,2);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Scale(double)");
		}
		self->Scale(f);

		return 0;
	}

	// void wxRect2DDouble::Scale(int num, int denum)
	static int _bind_Scale_overload_2(lua_State *L) {
		if (!_lg_typecheck_Scale_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRect2DDouble::Scale(int num, int denum) function, expected prototype:\nvoid wxRect2DDouble::Scale(int num, int denum)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);
		int denum=(int)lua_tointeger(L,3);

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRect2DDouble::Scale(int, int)");
		}
		self->Scale(num, denum);

		return 0;
	}

	// Overload binder for wxRect2DDouble::Scale
	static int _bind_Scale(lua_State *L) {
		if (_lg_typecheck_Scale_overload_1(L)) return _bind_Scale_overload_1(L);
		if (_lg_typecheck_Scale_overload_2(L)) return _bind_Scale_overload_2(L);

		luaL_error(L, "error in function Scale, cannot match any of the overloads for function Scale:\n  Scale(double)\n  Scale(int, int)\n");
		return 0;
	}


	// Operator binds:
	// bool wxRect2DDouble::operator==(const wxRect2DDouble & rect) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::operator==(const wxRect2DDouble & rect) const function, expected prototype:\nbool wxRect2DDouble::operator==(const wxRect2DDouble & rect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::operator== function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::operator==(const wxRect2DDouble &) const");
		}
		bool lret = self->operator==(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRect2DDouble::operator!=(const wxRect2DDouble & rect) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRect2DDouble::operator!=(const wxRect2DDouble & rect) const function, expected prototype:\nbool wxRect2DDouble::operator!=(const wxRect2DDouble & rect) const\nClass arguments details:\narg 1 ID = 21099623\n");
		}

		const wxRect2DDouble* rect_ptr=(Luna< wxRect2DDouble >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRect2DDouble::operator!= function");
		}
		const wxRect2DDouble & rect=*rect_ptr;

		wxRect2DDouble* self=(Luna< wxRect2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRect2DDouble::operator!=(const wxRect2DDouble &) const");
		}
		bool lret = self->operator!=(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxRect2DDouble* LunaTraits< wxRect2DDouble >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRect2DDouble::_bind_ctor(L);
}

void LunaTraits< wxRect2DDouble >::_bind_dtor(wxRect2DDouble* obj) {
	delete obj;
}

const char LunaTraits< wxRect2DDouble >::className[] = "wxRect2DDouble";
const char LunaTraits< wxRect2DDouble >::fullName[] = "wxRect2DDouble";
const char LunaTraits< wxRect2DDouble >::moduleName[] = "wx";
const char* LunaTraits< wxRect2DDouble >::parents[] = {0};
const int LunaTraits< wxRect2DDouble >::hash = 21099623;
const int LunaTraits< wxRect2DDouble >::uniqueIDs[] = {21099623,0};

luna_RegType LunaTraits< wxRect2DDouble >::methods[] = {
	{"GetPosition", &luna_wrapper_wxRect2DDouble::_bind_GetPosition},
	{"GetSize", &luna_wrapper_wxRect2DDouble::_bind_GetSize},
	{"GetLeft", &luna_wrapper_wxRect2DDouble::_bind_GetLeft},
	{"SetLeft", &luna_wrapper_wxRect2DDouble::_bind_SetLeft},
	{"MoveLeftTo", &luna_wrapper_wxRect2DDouble::_bind_MoveLeftTo},
	{"GetTop", &luna_wrapper_wxRect2DDouble::_bind_GetTop},
	{"SetTop", &luna_wrapper_wxRect2DDouble::_bind_SetTop},
	{"MoveTopTo", &luna_wrapper_wxRect2DDouble::_bind_MoveTopTo},
	{"GetBottom", &luna_wrapper_wxRect2DDouble::_bind_GetBottom},
	{"SetBottom", &luna_wrapper_wxRect2DDouble::_bind_SetBottom},
	{"MoveBottomTo", &luna_wrapper_wxRect2DDouble::_bind_MoveBottomTo},
	{"GetRight", &luna_wrapper_wxRect2DDouble::_bind_GetRight},
	{"SetRight", &luna_wrapper_wxRect2DDouble::_bind_SetRight},
	{"MoveRightTo", &luna_wrapper_wxRect2DDouble::_bind_MoveRightTo},
	{"GetLeftTop", &luna_wrapper_wxRect2DDouble::_bind_GetLeftTop},
	{"SetLeftTop", &luna_wrapper_wxRect2DDouble::_bind_SetLeftTop},
	{"MoveLeftTopTo", &luna_wrapper_wxRect2DDouble::_bind_MoveLeftTopTo},
	{"GetLeftBottom", &luna_wrapper_wxRect2DDouble::_bind_GetLeftBottom},
	{"SetLeftBottom", &luna_wrapper_wxRect2DDouble::_bind_SetLeftBottom},
	{"MoveLeftBottomTo", &luna_wrapper_wxRect2DDouble::_bind_MoveLeftBottomTo},
	{"GetRightTop", &luna_wrapper_wxRect2DDouble::_bind_GetRightTop},
	{"SetRightTop", &luna_wrapper_wxRect2DDouble::_bind_SetRightTop},
	{"MoveRightTopTo", &luna_wrapper_wxRect2DDouble::_bind_MoveRightTopTo},
	{"GetRightBottom", &luna_wrapper_wxRect2DDouble::_bind_GetRightBottom},
	{"SetRightBottom", &luna_wrapper_wxRect2DDouble::_bind_SetRightBottom},
	{"MoveRightBottomTo", &luna_wrapper_wxRect2DDouble::_bind_MoveRightBottomTo},
	{"GetCentre", &luna_wrapper_wxRect2DDouble::_bind_GetCentre},
	{"SetCentre", &luna_wrapper_wxRect2DDouble::_bind_SetCentre},
	{"MoveCentreTo", &luna_wrapper_wxRect2DDouble::_bind_MoveCentreTo},
	{"GetOutCode", &luna_wrapper_wxRect2DDouble::_bind_GetOutCode},
	{"GetOutcode", &luna_wrapper_wxRect2DDouble::_bind_GetOutcode},
	{"Contains", &luna_wrapper_wxRect2DDouble::_bind_Contains},
	{"IsEmpty", &luna_wrapper_wxRect2DDouble::_bind_IsEmpty},
	{"HaveEqualSize", &luna_wrapper_wxRect2DDouble::_bind_HaveEqualSize},
	{"Inset", &luna_wrapper_wxRect2DDouble::_bind_Inset},
	{"Offset", &luna_wrapper_wxRect2DDouble::_bind_Offset},
	{"ConstrainTo", &luna_wrapper_wxRect2DDouble::_bind_ConstrainTo},
	{"Interpolate", &luna_wrapper_wxRect2DDouble::_bind_Interpolate},
	{"Intersect", &luna_wrapper_wxRect2DDouble::_bind_Intersect},
	{"CreateIntersection", &luna_wrapper_wxRect2DDouble::_bind_CreateIntersection},
	{"Intersects", &luna_wrapper_wxRect2DDouble::_bind_Intersects},
	{"Union", &luna_wrapper_wxRect2DDouble::_bind_Union},
	{"CreateUnion", &luna_wrapper_wxRect2DDouble::_bind_CreateUnion},
	{"Scale", &luna_wrapper_wxRect2DDouble::_bind_Scale},
	{"__eq", &luna_wrapper_wxRect2DDouble::_bind___eq},
	{"op_neq", &luna_wrapper_wxRect2DDouble::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxRect2DDouble::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRect2DDouble >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRect2DDouble >::enumValues[] = {
	{0,0}
};


