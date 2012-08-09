#include <plug_common.h>

class luna_wrapper_wxPoint2DDouble {
public:
	typedef Luna< wxPoint2DDouble > luna_t;

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

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPoint2DDouble");
		
		return luna_dynamicCast(L,converters,"wxPoint2DDouble",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFloor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRounded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVectorLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVectorAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetVectorLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVectorAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDistanceSquare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDotProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCrossProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 5 valid operators)
	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPoint2DDouble::wxPoint2DDouble()
	static wxPoint2DDouble* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble::wxPoint2DDouble() function, expected prototype:\nwxPoint2DDouble::wxPoint2DDouble()\nClass arguments details:\n");
		}


		return new wxPoint2DDouble();
	}

	// wxPoint2DDouble::wxPoint2DDouble(double x, double y)
	static wxPoint2DDouble* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble::wxPoint2DDouble(double x, double y) function, expected prototype:\nwxPoint2DDouble::wxPoint2DDouble(double x, double y)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);

		return new wxPoint2DDouble(x, y);
	}

	// wxPoint2DDouble::wxPoint2DDouble(const wxPoint2DDouble & pt)
	static wxPoint2DDouble* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble::wxPoint2DDouble(const wxPoint2DDouble & pt) function, expected prototype:\nwxPoint2DDouble::wxPoint2DDouble(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::wxPoint2DDouble function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		return new wxPoint2DDouble(pt);
	}

	// wxPoint2DDouble::wxPoint2DDouble(const wxPoint2DInt & pt)
	static wxPoint2DDouble* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble::wxPoint2DDouble(const wxPoint2DInt & pt) function, expected prototype:\nwxPoint2DDouble::wxPoint2DDouble(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n");
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::wxPoint2DDouble function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		return new wxPoint2DDouble(pt);
	}

	// wxPoint2DDouble::wxPoint2DDouble(const wxPoint & pt)
	static wxPoint2DDouble* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble::wxPoint2DDouble(const wxPoint & pt) function, expected prototype:\nwxPoint2DDouble::wxPoint2DDouble(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::wxPoint2DDouble function");
		}
		const wxPoint & pt=*pt_ptr;

		return new wxPoint2DDouble(pt);
	}

	// Overload binder for wxPoint2DDouble::wxPoint2DDouble
	static wxPoint2DDouble* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function wxPoint2DDouble, cannot match any of the overloads for function wxPoint2DDouble:\n  wxPoint2DDouble()\n  wxPoint2DDouble(double, double)\n  wxPoint2DDouble(const wxPoint2DDouble &)\n  wxPoint2DDouble(const wxPoint2DInt &)\n  wxPoint2DDouble(const wxPoint &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPoint2DDouble::GetFloor(int * x, int * y) const
	static int _bind_GetFloor(lua_State *L) {
		if (!_lg_typecheck_GetFloor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPoint2DDouble::GetFloor(int * x, int * y) const function, expected prototype:\nvoid wxPoint2DDouble::GetFloor(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPoint2DDouble::GetFloor(int *, int *) const");
		}
		self->GetFloor(&x, &y);

		return 0;
	}

	// void wxPoint2DDouble::GetRounded(int * x, int * y) const
	static int _bind_GetRounded(lua_State *L) {
		if (!_lg_typecheck_GetRounded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPoint2DDouble::GetRounded(int * x, int * y) const function, expected prototype:\nvoid wxPoint2DDouble::GetRounded(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPoint2DDouble::GetRounded(int *, int *) const");
		}
		self->GetRounded(&x, &y);

		return 0;
	}

	// double wxPoint2DDouble::GetVectorLength() const
	static int _bind_GetVectorLength(lua_State *L) {
		if (!_lg_typecheck_GetVectorLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetVectorLength() const function, expected prototype:\ndouble wxPoint2DDouble::GetVectorLength() const\nClass arguments details:\n");
		}


		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetVectorLength() const");
		}
		double lret = self->GetVectorLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DDouble::GetVectorAngle() const
	static int _bind_GetVectorAngle(lua_State *L) {
		if (!_lg_typecheck_GetVectorAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetVectorAngle() const function, expected prototype:\ndouble wxPoint2DDouble::GetVectorAngle() const\nClass arguments details:\n");
		}


		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetVectorAngle() const");
		}
		double lret = self->GetVectorAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPoint2DDouble::SetVectorLength(double length)
	static int _bind_SetVectorLength(lua_State *L) {
		if (!_lg_typecheck_SetVectorLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPoint2DDouble::SetVectorLength(double length) function, expected prototype:\nvoid wxPoint2DDouble::SetVectorLength(double length)\nClass arguments details:\n");
		}

		double length=(double)lua_tonumber(L,2);

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPoint2DDouble::SetVectorLength(double)");
		}
		self->SetVectorLength(length);

		return 0;
	}

	// void wxPoint2DDouble::SetVectorAngle(double degrees)
	static int _bind_SetVectorAngle(lua_State *L) {
		if (!_lg_typecheck_SetVectorAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPoint2DDouble::SetVectorAngle(double degrees) function, expected prototype:\nvoid wxPoint2DDouble::SetVectorAngle(double degrees)\nClass arguments details:\n");
		}

		double degrees=(double)lua_tonumber(L,2);

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPoint2DDouble::SetVectorAngle(double)");
		}
		self->SetVectorAngle(degrees);

		return 0;
	}

	// void wxPoint2DDouble::Normalize()
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPoint2DDouble::Normalize() function, expected prototype:\nvoid wxPoint2DDouble::Normalize()\nClass arguments details:\n");
		}


		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPoint2DDouble::Normalize()");
		}
		self->Normalize();

		return 0;
	}

	// double wxPoint2DDouble::GetDistance(const wxPoint2DDouble & pt) const
	static int _bind_GetDistance(lua_State *L) {
		if (!_lg_typecheck_GetDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetDistance(const wxPoint2DDouble & pt) const function, expected prototype:\ndouble wxPoint2DDouble::GetDistance(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::GetDistance function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetDistance(const wxPoint2DDouble &) const");
		}
		double lret = self->GetDistance(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DDouble::GetDistanceSquare(const wxPoint2DDouble & pt) const
	static int _bind_GetDistanceSquare(lua_State *L) {
		if (!_lg_typecheck_GetDistanceSquare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetDistanceSquare(const wxPoint2DDouble & pt) const function, expected prototype:\ndouble wxPoint2DDouble::GetDistanceSquare(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::GetDistanceSquare function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetDistanceSquare(const wxPoint2DDouble &) const");
		}
		double lret = self->GetDistanceSquare(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DDouble::GetDotProduct(const wxPoint2DDouble & vec) const
	static int _bind_GetDotProduct(lua_State *L) {
		if (!_lg_typecheck_GetDotProduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetDotProduct(const wxPoint2DDouble & vec) const function, expected prototype:\ndouble wxPoint2DDouble::GetDotProduct(const wxPoint2DDouble & vec) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* vec_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in wxPoint2DDouble::GetDotProduct function");
		}
		const wxPoint2DDouble & vec=*vec_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetDotProduct(const wxPoint2DDouble &) const");
		}
		double lret = self->GetDotProduct(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DDouble::GetCrossProduct(const wxPoint2DDouble & vec) const
	static int _bind_GetCrossProduct(lua_State *L) {
		if (!_lg_typecheck_GetCrossProduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxPoint2DDouble::GetCrossProduct(const wxPoint2DDouble & vec) const function, expected prototype:\ndouble wxPoint2DDouble::GetCrossProduct(const wxPoint2DDouble & vec) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* vec_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in wxPoint2DDouble::GetCrossProduct function");
		}
		const wxPoint2DDouble & vec=*vec_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxPoint2DDouble::GetCrossProduct(const wxPoint2DDouble &) const");
		}
		double lret = self->GetCrossProduct(vec);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// wxPoint2DDouble wxPoint2DDouble::operator-()
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxPoint2DDouble::operator-() function, expected prototype:\nwxPoint2DDouble wxPoint2DDouble::operator-()\nClass arguments details:\n");
		}


		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxPoint2DDouble::operator-()");
		}
		wxPoint2DDouble stack_lret = self->operator-();
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// wxPoint2DDouble & wxPoint2DDouble::operator+=(const wxPoint2DDouble & pt)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble & wxPoint2DDouble::operator+=(const wxPoint2DDouble & pt) function, expected prototype:\nwxPoint2DDouble & wxPoint2DDouble::operator+=(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::operator+= function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble & wxPoint2DDouble::operator+=(const wxPoint2DDouble &)");
		}
		const wxPoint2DDouble* lret = &self->operator+=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,false);

		return 1;
	}

	// wxPoint2DDouble & wxPoint2DDouble::operator-=(const wxPoint2DDouble & pt)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble & wxPoint2DDouble::operator-=(const wxPoint2DDouble & pt) function, expected prototype:\nwxPoint2DDouble & wxPoint2DDouble::operator-=(const wxPoint2DDouble & pt)\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::operator-= function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint2DDouble & wxPoint2DDouble::operator-=(const wxPoint2DDouble &)");
		}
		const wxPoint2DDouble* lret = &self->operator-=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,false);

		return 1;
	}

	// bool wxPoint2DDouble::operator==(const wxPoint2DDouble & pt) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPoint2DDouble::operator==(const wxPoint2DDouble & pt) const function, expected prototype:\nbool wxPoint2DDouble::operator==(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::operator== function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPoint2DDouble::operator==(const wxPoint2DDouble &) const");
		}
		bool lret = self->operator==(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPoint2DDouble::operator!=(const wxPoint2DDouble & pt) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPoint2DDouble::operator!=(const wxPoint2DDouble & pt) const function, expected prototype:\nbool wxPoint2DDouble::operator!=(const wxPoint2DDouble & pt) const\nClass arguments details:\narg 1 ID = 87062627\n");
		}

		const wxPoint2DDouble* pt_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DDouble::operator!= function");
		}
		const wxPoint2DDouble & pt=*pt_ptr;

		wxPoint2DDouble* self=(Luna< wxPoint2DDouble >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPoint2DDouble::operator!=(const wxPoint2DDouble &) const");
		}
		bool lret = self->operator!=(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxPoint2DDouble* LunaTraits< wxPoint2DDouble >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPoint2DDouble::_bind_ctor(L);
}

void LunaTraits< wxPoint2DDouble >::_bind_dtor(wxPoint2DDouble* obj) {
	delete obj;
}

const char LunaTraits< wxPoint2DDouble >::className[] = "wxPoint2DDouble";
const char LunaTraits< wxPoint2DDouble >::fullName[] = "wxPoint2DDouble";
const char LunaTraits< wxPoint2DDouble >::moduleName[] = "wx";
const char* LunaTraits< wxPoint2DDouble >::parents[] = {0};
const int LunaTraits< wxPoint2DDouble >::hash = 87062627;
const int LunaTraits< wxPoint2DDouble >::uniqueIDs[] = {87062627,0};

luna_RegType LunaTraits< wxPoint2DDouble >::methods[] = {
	{"GetFloor", &luna_wrapper_wxPoint2DDouble::_bind_GetFloor},
	{"GetRounded", &luna_wrapper_wxPoint2DDouble::_bind_GetRounded},
	{"GetVectorLength", &luna_wrapper_wxPoint2DDouble::_bind_GetVectorLength},
	{"GetVectorAngle", &luna_wrapper_wxPoint2DDouble::_bind_GetVectorAngle},
	{"SetVectorLength", &luna_wrapper_wxPoint2DDouble::_bind_SetVectorLength},
	{"SetVectorAngle", &luna_wrapper_wxPoint2DDouble::_bind_SetVectorAngle},
	{"Normalize", &luna_wrapper_wxPoint2DDouble::_bind_Normalize},
	{"GetDistance", &luna_wrapper_wxPoint2DDouble::_bind_GetDistance},
	{"GetDistanceSquare", &luna_wrapper_wxPoint2DDouble::_bind_GetDistanceSquare},
	{"GetDotProduct", &luna_wrapper_wxPoint2DDouble::_bind_GetDotProduct},
	{"GetCrossProduct", &luna_wrapper_wxPoint2DDouble::_bind_GetCrossProduct},
	{"__unm", &luna_wrapper_wxPoint2DDouble::_bind___unm},
	{"op_add", &luna_wrapper_wxPoint2DDouble::_bind_op_add},
	{"op_sub", &luna_wrapper_wxPoint2DDouble::_bind_op_sub},
	{"__eq", &luna_wrapper_wxPoint2DDouble::_bind___eq},
	{"op_neq", &luna_wrapper_wxPoint2DDouble::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxPoint2DDouble::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxPoint2DDouble >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPoint2DDouble >::enumValues[] = {
	{0,0}
};

